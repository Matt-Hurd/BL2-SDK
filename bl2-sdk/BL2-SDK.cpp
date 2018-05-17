#include "stdafx.h"
#include "BL2-SDK.h"
#include "CSimpleDetour.h"
#include "CSigScan.h"
#include "GameHooks.h"
#include "Exceptions.h"
#include "Signatures.h"
#include "PackageFix.h"

namespace BL2SDK
{
	static UConsole* gameConsole = NULL;
	static UWillowGameEngine* gameEngine = NULL;

	bool injectedCallNext = false;
	bool logAllProcessEvent = false;
	bool logAllUnrealScriptCalls = false;

	void* pGObjects;
	void* pGNames;
	void* pGObjHash;
	void* pGCRCTable;
	void* pNameHash;
	void* pTextureFixLocation;
	FMalloc** pGMalloc;
	tProcessEvent pProcessEvent;
	tCallFunction pCallFunction;
	tFrameStep pFrameStep;
	tStaticConstructObject pStaticConstructObject;
	tLoadPackage pLoadPackage;
	tByteOrderSerialize pByteOrderSerialize;

	int EngineVersion = -1;
	int ChangelistNumber = -1;

	void __stdcall hkProcessEvent(UFunction* function, void* parms, void* result)
	{
		// Get "this"
		UObject* caller;
		_asm mov caller, ecx;

		if (injectedCallNext)
		{
			injectedCallNext = false;
			pProcessEvent(caller, function, parms, result);
			return;
		}

		if (logAllProcessEvent)
		{
			std::string callerName = caller->GetFullName();
			std::string functionName = function->GetFullName();

			//Logging::LogF("===== ProcessEvent called =====\npCaller Name = %s\npFunction Name = %s\n", callerName.c_str(), functionName.c_str());
		}

		/*
		if (!GameHooks::ProcessEngineHooks(caller, function, parms, result))
		{
			// The engine hook manager told us not to pass this function to the engine
			return;
		}
		*/

		pProcessEvent(caller, function, parms, result);
	}

	void __stdcall hkCallFunction(FFrame& stack, void* const result, UFunction* function)
	{
		// Get "this"
		UObject* caller;
		_asm mov caller, ecx;

		if (logAllUnrealScriptCalls)
		{
			std::string callerName = caller->GetFullName();
			std::string functionName = function->GetFullName();

			//Logging::LogF("===== CallFunction called =====\npCaller Name = %s\npFunction Name = %s\n", callerName.c_str(), functionName.c_str());
		}

		/*
		if (!GameHooks::ProcessUnrealScriptHooks(caller, stack, result, function))
		{
			// UnrealScript hook manager already took care of it
			return;
		}
		*/

		pCallFunction(caller, stack, result, function);
	}

	void InjectedCallNext()
	{
		injectedCallNext = true;
	}

	/*
	void LogAllProcessEventCalls(bool enabled)
	{
		logAllProcessEvent = enabled;
	}

	void LogAllUnrealScriptCalls(bool enabled)
	{
		logAllUnrealScriptCalls = enabled;
	}
	*/

	int UnrealExceptionHandler(unsigned int code, struct _EXCEPTION_POINTERS* ep)
	{
		if (IsDebuggerPresent())
		{
			DebugBreak();
		}
		/*
		else if (CrashRptHelper::GenerateReport(code, ep))
		{
			Util::CloseGame();
		}
		else if (Settings::DisableAntiDebug())
		{
			Util::Popup(L"Fatal Error", L"There was a fatal error - attach your debugger now.");
			if (IsDebuggerPresent())
			{
				DebugBreak();
			}
		}

		// Don't ever pass it back into the engine
		Util::CloseGame();
		*/

		return EXCEPTION_EXECUTE_HANDLER;
	}

	bool GetGameVersion(std::wstring& appVersion)
	{
		const wchar_t* filename = L"Borderlands2.exe";

		// Allocate a block of memory for the version info
		DWORD dummy;
		DWORD size = GetFileVersionInfoSize(filename, &dummy);
		if (size == 0)
		{
			//Logging::LogF("[BL2SDK] ERROR: GetFileVersionInfoSize failed with error %d\n", GetLastError());
			return false;
		}

		LPBYTE versionInfo = new BYTE[size];

		// Load the version info
		if (!GetFileVersionInfo(filename, NULL, size, &versionInfo[0]))
		{
			//Logging::LogF("[BL2SDK] ERROR: GetFileVersionInfo failed with error %d\n", GetLastError());
			return false;
		}

		// Get the version strings
		VS_FIXEDFILEINFO* ffi;
		unsigned int productVersionLen = 0;

		if (!VerQueryValue(&versionInfo[0], L"\\", (LPVOID*)&ffi, &productVersionLen))
		{
			//Logging::Log("[BL2SDK] ERROR: Can't obtain FixedFileInfo from resources\n");
			return false;
		}

		DWORD fileVersionMS = ffi->dwFileVersionMS;
		DWORD fileVersionLS = ffi->dwFileVersionLS;

		delete[] versionInfo;

		/*
		appVersion = Util::Format(L"%d.%d.%d.%d",
			HIWORD(fileVersionMS),
			LOWORD(fileVersionMS),
			HIWORD(fileVersionLS),
			LOWORD(fileVersionLS));

		return true;
		*/
	}

	// TODO: Make less shit
	void HookGame()
	{
		CSigScan sigscan(L"Borderlands2.exe");

		// Sigscan for GOBjects
		pGObjects = *(void**)sigscan.Scan(Signatures::GObjects);
		//Logging::LogF("[Internal] GObjects = 0x%p\n", pGObjects);

		// Sigscan for GNames
		pGNames = *(void**)sigscan.Scan(Signatures::GNames);
		//Logging::LogF("[Internal] GNames = 0x%p\n", pGNames);

		// Sigscan for UObject::ProcessEvent which will be used for pretty much everything
		pProcessEvent = reinterpret_cast<tProcessEvent>(sigscan.Scan(Signatures::ProcessEvent));
		//Logging::LogF("[Internal] UObject::ProcessEvent() = 0x%p\n", pProcessEvent);

		// Sigscan for UObject::GObjHash
		pGObjHash = *(void**)sigscan.Scan(Signatures::GObjHash);
		//Logging::LogF("[Internal] GObjHash = 0x%p\n", pGObjHash);

		// Sigscan for GCRCTable
		pGCRCTable = *(void**)sigscan.Scan(Signatures::GCRCTable);
		//Logging::LogF("[Internal] GCRCTable = 0x%p\n", pGCRCTable);

		// Sigscan for NameHash
		pNameHash = *(void**)sigscan.Scan(Signatures::NameHash);
		//Logging::LogF("[Internal] NameHash = 0x%p\n", pNameHash);

		// Sigscan for Unreal exception handler
		void* addrUnrealEH = sigscan.Scan(Signatures::CrashHandler);
		//Logging::LogF("[Internal] Unreal Crash handler = 0x%p\n", addrUnrealEH);

		// Sigscan for UObject::CallFunction
		pCallFunction = reinterpret_cast<tCallFunction>(sigscan.Scan(Signatures::CallFunction));
		//Logging::LogF("[Internal] UObject::CallFunction() = 0x%p\n", pCallFunction);

		// Sigscan for FFrame::Step
		pFrameStep = reinterpret_cast<tFrameStep>(sigscan.Scan(Signatures::FrameStep));
		//Logging::LogF("[Internal] FFrame::Step() = 0x%p\n", pFrameStep);

		// Sigscan for UObject::StaticConstructObject
		pStaticConstructObject = reinterpret_cast<tStaticConstructObject>(sigscan.Scan(Signatures::StaticConstructor));
		//Logging::LogF("[Internal] UObject::StaticConstructObject() = 0x%p\n", pStaticConstructObject);

		// Sigscan for UObject::LoadPackage
		pLoadPackage = reinterpret_cast<tLoadPackage>(sigscan.Scan(Signatures::LoadPackage));
		//Logging::LogF("[Internal] UObject::LoadPackage() = 0x%p\n", pLoadPackage);

		// Sigscan for FArchive::ByteOrderSerialize
		pByteOrderSerialize = reinterpret_cast<tByteOrderSerialize>(sigscan.Scan(Signatures::ByteOrderSerialize));
		//Logging::LogF("[Internal] FArchive::ByteOrderSerialize() = 0x%p\n", pByteOrderSerialize);

		// Sigscan for texture load fix location
		pTextureFixLocation = sigscan.Scan(Signatures::TextureFixLocation);
		//Logging::LogF("[Internal] Texture Fix Location = 0x%p\n", pTextureFixLocation);

		// Sigscan for GMalloc and its virtual function table
		pGMalloc = *(FMalloc***)sigscan.Scan(Signatures::GMalloc);
		//Logging::LogF("[Internal] GMalloc = 0x%p\n", pGMalloc);

		// Detour UObject::ProcessEvent()
		SETUP_SIMPLE_DETOUR(detProcessEvent, pProcessEvent, hkProcessEvent);
		detProcessEvent.Attach();

		// Detour Unreal exception handler
		SETUP_SIMPLE_DETOUR(detUnrealEH, addrUnrealEH, UnrealExceptionHandler);
		detUnrealEH.Attach();

		// Detour UObject::CallFunction()
		SETUP_SIMPLE_DETOUR(detCallFunction, pCallFunction, hkCallFunction);
		detCallFunction.Attach();
	}

	bool DevInputKeyHook(UObject* caller, UFunction* function, void* parms, void* result)
	{
		UWillowGameViewportClient_execInputKey_Parms* realParms = reinterpret_cast<UWillowGameViewportClient_execInputKey_Parms*>(parms);

		/*
		// If F11 is pressed
		if (realParms->EventType == 0)
		{
			const char* name = realParms->Key.GetName();
			if (strcmp(name, "F11") == 0)
			{
				// Reset the lua state
				delete Lua;
				InitializeLua();
				return false;
			}
			else if (strcmp(name, "F10") == 0)
			{
				LogAllProcessEventCalls(!logAllProcessEvent);
			}
			else if (strcmp(name, "F9") == 0)
			{
				LogAllUnrealScriptCalls(!logAllUnrealScriptCalls);
			}
		}
		*/

		return true;
	}

	// This function is used to get the dimensions of the game window for Gwen's renderer
	// It will also initialize Lua and the command system, so the SDK is essentially fully operational at this point
	bool GetCanvasPostRender(UObject* caller, UFunction* function, void* parms, void* result)
	{
		/*
		InitializeLua();

		if (Settings::DeveloperModeEnabled())
		{
			GameHooks::EngineHookManager->Register("Function WillowGame.WillowGameViewportClient:InputKey", "DevInputKeyHook", &DevInputKeyHook);
			Logging::LogF("[Internal] Developer mode key hook enabled\n");
		}
		*/

		GameHooks::EngineHookManager->RemoveStaticHook(function, "GetCanvas");
		return true;
	}

	void InitializeGameVersions()
	{
		UObject* obj = UObject::StaticClass(); // Any UObject* will do
		EngineVersion = obj->GetEngineVersion();
		ChangelistNumber = obj->GetBuildChangelistNumber();

		//CrashRptHelper::AddProperty(L"EngineVersion", Util::Format(L"%d", EngineVersion));
		//CrashRptHelper::AddProperty(L"ChangelistNumber", Util::Format(L"%d", ChangelistNumber));

		//Logging::LogF("[Internal] Engine Version = %d, Build Changelist = %d\n", EngineVersion, ChangelistNumber);
	}

	// This function is used to ensure that everything gets called in the game thread once the game itself has loaded
	bool GameReady(UObject* caller, UFunction* function, void* parms, void* result)
	{
		//Logging::LogF("[GameReady] Thread: %i\n", GetCurrentThreadId());

#ifdef _DEBUG
		//Logging::InitializeExtern();
#endif
		//Logging::InitializeGameConsole();
		//Logging::PrintLogHeader();

		InitializeGameVersions();

		// Set console key to Tilde if not already set
		UConsole* console = UObject::FindObject<UConsole>("WillowConsole Transient.WillowGameEngine_0:WillowGameViewportClient_0.WillowConsole_0");
		if (console && (console->ConsoleKey == FName("None") || console->ConsoleKey == FName("Undefine")))
		{
			console->ConsoleKey = FName("Tilde");
		}

		GameHooks::EngineHookManager->RemoveStaticHook(function, "StartupSDK");

		GameHooks::EngineHookManager->Register("Function WillowGame.WillowGameViewportClient:PostRender", "GetCanvas", &GetCanvasPostRender);

		return true;
	}

	void Initialize(/*LauncherStruct* args*/)
	{
		//Settings::Initialize(args);

		//Logging::InitializeFile(Settings::GetLogFilePath());
		//Logging::Log("[Internal] Launching SDK...\n");

		/*Logging::LogF("[Internal] DisableAntiDebug = %d, LogAllProcessEventCalls = %d, LogAllUnrealScriptCalls = %d, DisableCrashRpt = %d, DeveloperMode = %d, MemoryDebug = %d, BinPath = \"%ls\"\n",
			args->DisableAntiDebug,
			args->LogAllProcessEventCalls,
			args->LogAllUnrealScriptCalls,
			args->DisableCrashRpt,
			args->DeveloperMode,
			args->EnableMemoryDebug,
			args->BinPath);
			*/

			/*
			if (!args->DisableCrashRpt)
			{
				CrashRptHelper::Initialize();
			}

			if (args->DisableAntiDebug)
			{
				HookAntiDebug();
			}
			*/

		GameHooks::Initialize();

		HookGame();
		InitializePackageFix();

		//LogAllProcessEventCalls(args->LogAllProcessEventCalls);
		//LogAllUnrealScriptCalls(args->LogAllUnrealScriptCalls);

		GameHooks::EngineHookManager->Register("Function WillowGame.WillowGameInfo:InitGame", "StartupSDK", &GameReady);
	}

	// This is called when the process is closing
	// TODO: Other things might need cleaning up
	void Cleanup()
	{
		//Logging::Cleanup();
		GameHooks::Cleanup();
	}

	UWillowGameEngine* getGameEngine()
	{
		if (gameEngine)
			return gameEngine;

		gameEngine = (UWillowGameEngine*)UObject::FindObject<UObject>("WillowGameEngine Transient.WillowGameEngine_0");

		return gameEngine;
	}

	UPlayer* localPlayer()
	{
		UPlayer *p = (UPlayer*)UObject::FindObject<UObject>("ObjectProperty Engine.Player:Actor");

		return p;
	}
}