#include "stdafx.h"
#include "CSimpleDetour.h"
#include "CSigScan.h"
#include "Exceptions.h"
#include "Signatures.h"
#include "CHookManager.h"
#include "AntiDebug.h"
#include "Util.h"
#include "UnrealSdk.h"
#include <utility>
#include "Logging.h"
#include "Settings.h"
#include "Exports.h"
#include "gamedefines.h"
#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

namespace UnrealSDK
{
	UConsole* gameConsole = nullptr;

	bool logAllCalls = true;

	void* pGObjects;
	void* pGNames;
	void* pGObjHash;
	void* pGCRCTable;
	void* pNameHash;
	void**** pGMalloc = nullptr;
	tProcessEvent pProcessEvent;
	tCallFunction pCallFunction;
	tFrameStep pFrameStep;
	tFNameInitOld pFNameInit;
	tStaticConstructObject pStaticConstructObject;
	tLoadPackage pLoadPackage;
	tGetDefaultObject pGetDefaultObject;
	UObject* gEngine = nullptr;
	CHookManager* gHookManager = nullptr;
	bool gInjectedCallNext = false;
	bool gCallPostEdit = true;

	CPythonInterface* Python;

	int EngineVersion = -1;
	int ChangelistNumber = -1;


	std::map<std::string, std::string> ObjectMap = {};

	std::map<std::string, UClass*> ClassMap = {};

	void __stdcall hkProcessEvent(UFunction* Function, void* Params, void* Result)
	{
		// Get "this"
		UObject* caller;
		_asm mov caller, ecx;

		std::string functionName = Function->GetObjectName();
		if (gInjectedCallNext)
		{
			gInjectedCallNext = false;
			pProcessEvent(caller, Function, Params, Result);
			return;
		}

		if (logAllCalls)
		{
			std::string callerName = caller->GetFullName();

			Logging::LogF("===== ProcessEvent called =====\npCaller Name = %s\npFunction Name = %s\n",
						  callerName.c_str(), functionName.c_str());
		}

		auto fParams = FStruct{Function, Params};
		if (gHookManager->HasHook(caller, Function) && !gHookManager->ProcessHooks(
			functionName, caller, Function, &fParams))
		{
			// The engine hook manager told us not to pass this function to the engine
			return;
		}

		pProcessEvent(caller, Function, Params, Result);
	}

	void LogOutParams(FFrame* Stack)
	{
		Logging::LogF("Logging stack, %s, %s\n", Stack->Object->GetFullName().c_str(),
					  Stack->Node->GetFullName().c_str());
		Logging::LogF("0x%p\n", Stack->Node);
		Logging::LogF("0x%p\n", Stack->Object);
		Logging::LogF("0x%p\n", Stack->Code);
		Logging::LogF("0x%p\n", Stack->Locals);
		Logging::LogF("0x%p\n", Stack->PreviousFrame);
		Logging::LogF("0x%p\n", Stack->Outparams);
		for (FOutParmRec* rec = Stack->Outparams; rec; rec = rec->NextOutParm)
		{
			Logging::LogF("%s, 0x%x\n", rec->Property->GetFullName().c_str(), rec->PropAddr);
		}
	}

	void __stdcall hkCallFunction(FFrame& Stack, void* const Result, UFunction* Function)
	{
		// Get "this"
		UObject* caller;
		_asm mov caller, ecx;

		if (logAllCalls)
		{
			std::string callerName = caller->GetFullName();
			std::string functionName = Function->GetFullName();

			// Prevent infinite recursion when printing to console
			if (functionName != "Function Engine.Console.OutputText" && functionName !=
				"Function Engine.Console.OutputTextLine")
				Logging::LogF("===== CallFunction called =====\npCaller Name = %s\npFunction Name = %s\n",
							  callerName.c_str(), functionName.c_str());
		}

		unsigned char* code = Stack.Code;

		if (!gHookManager->ProcessHooks(caller, Stack, Result, Function))
		{
			Stack.SkipFunction();
			return;
		}
		Stack.Code = code;
		pCallFunction(caller, Stack, Result, Function);
	}

	void DoInjectedCallNext()
	{
		gInjectedCallNext = true;
	}

	void LogAllCalls(const bool Enabled)
	{
		logAllCalls = Enabled;
	}

	void hookGame()
	{
		TCHAR szExePath[2048];

		// For some god forsaken reason, GetModuleFileName can sometimes just fail ??? 
		if (GetModuleFileName(NULL, szExePath, 2048) == 0)
		{
			Logging::LogF("WINAPI Error when finding exe name commands: %d\n", GetLastError());
			// Maybe we can try using another form of getting the module exe???
			// https://stackoverflow.com/questions/6924195/get-dll-path-at-runtime
			if (GetModuleFileName(GetModuleHandle(NULL), szExePath, 2048) == 0)
			{
				Logging::LogF("WINAPI Error #2 when finding exe name commands: %d\n", GetLastError());
				return;
			}
			// If we make it here, that means that the second check actually went through and worked ????
		}

		std::string str = Util::Narrow(std::wstring(szExePath));
		std::size_t slash = str.find_last_of("/\\") + 1;
		std::size_t dot = str.find_last_of('.');
		std::string exeName = str.substr(slash, dot - slash);
		Logging::LogF("Found EXE name as '%s.exe'\n", exeName.c_str());
		ObjectMap = game_object_map[str.substr(slash, dot - slash)];
		CSigScan sigscan(Util::Widen(str.substr(slash, dot - slash) + ".exe").c_str());

		Signatures::InitSignatures(exeName);

		pGObjects = *(void**)sigscan.Scan(Signatures::GObjects);
		Logging::LogF("[Internal] GObjects = 0x%p\n", pGObjects);

		pGNames = *(void**)sigscan.Scan(Signatures::GNames);
		Logging::LogF("[Internal] GNames = 0x%p\n", pGNames);

		pProcessEvent = reinterpret_cast<tProcessEvent>(sigscan.Scan(Signatures::ProcessEvent));
		Logging::LogF("[Internal] UObject::ProcessEvent() = 0x%p\n", pProcessEvent);

		pCallFunction = reinterpret_cast<tCallFunction>(sigscan.Scan(Signatures::CallFunction));
		Logging::LogF("[Internal] UObject::CallFunction() = 0x%p\n", pCallFunction);

		pFrameStep = reinterpret_cast<tFrameStep>(sigscan.Scan(Signatures::FrameStep));
		Logging::LogF("[Internal] FFrame::Step() = 0x%p\n", pFrameStep);

		pStaticConstructObject = reinterpret_cast<tStaticConstructObject>(sigscan.Scan(Signatures::StaticConstructor));
		Logging::LogF("[Internal] UObject::StaticConstructObject() = 0x%p\n", pStaticConstructObject);

		pLoadPackage = reinterpret_cast<tLoadPackage>(sigscan.Scan(Signatures::LoadPackage));
		Logging::LogF("[Internal] UObject::LoadPackage() = 0x%p\n", pLoadPackage);

		pGMalloc = *static_cast<void*****>(sigscan.Scan(Signatures::GMalloc));
		Logging::LogF("[Internal] GMalloc = 0x%p\n", pGMalloc);

		pFNameInit = reinterpret_cast<tFNameInitOld>(sigscan.Scan(Signatures::FNameInit));
		Logging::LogF("[Internal] FindOrCreateFName = 0x%p\n", pFNameInit);

		pGetDefaultObject = reinterpret_cast<tGetDefaultObject>(sigscan.Scan(Signatures::GetDefaultObject));
		Logging::LogF("[Internal] GetDefaultObject = 0x%p\n", pGetDefaultObject);

		try
		{
			void* SetCommand = sigscan.Scan(Signatures::SetCommand);
			DWORD near out = 0;
			if (!VirtualProtectEx(GetCurrentProcess(), SetCommand, 5, 0x40, &out))
			{
				Logging::LogF("WINAPI Error when enabling 'SET' commands: %d\n", GetLastError());
			}
			else
			{
				static_cast<unsigned char*>(SetCommand)[5] = 0xFF;
			}
		}
		catch (std::exception e)
		{
			Logging::LogF("Exception when enabling 'SET' commands: %d\n", e.what());
		}

		// Detour UObject::ProcessEvent()
		//SETUP_SIMPLE_DETOUR(detProcessEvent, pProcessEvent, hkProcessEvent);
		CSimpleDetour detProcessEvent(&(PVOID&)pProcessEvent, hkProcessEvent);
		detProcessEvent.Attach();

		// Detour UObject::CallFunction()
		//SETUP_SIMPLE_DETOUR(detCallFunction, pCallFunction, hkCallFunction);
		CSimpleDetour detCallFunction(&(PVOID&)pCallFunction, hkCallFunction);
		detCallFunction.Attach();
	}

	void InitializePython()
	{
		Python = new CPythonInterface();
		const PythonStatus status = Python->InitializeModules();
		if (status == PYTHON_MODULE_ERROR && !Settings::DeveloperModeEnabled())
		{
			Util::Popup(L"Python Module Error",
						L"A core Python module failed to load correctly, and the SDK cannot continue to run.\n\nThis may indicate that the game has been patched and the SDK needs updating.");
		}
		else if (status == PYTHON_MODULE_ERROR && Settings::DeveloperModeEnabled())
		{
			Util::Popup(L"Python Module Error",
						L"An error occurred while loading the Python modules.\n\nPlease check your console for the exact error. Once you've fixed the error, press F11 to reload the Python state.");
		}
	}

	bool getCanvasPostRender(UObject* Caller, UFunction* Function, FStruct* Params)
	{
		// Set console key to Tilde if not already set
		gameConsole = static_cast<UConsole*>(UObject::Find(ObjectMap["ConsoleObjectType"].c_str(), ObjectMap["ConsoleObjectName"].c_str())
											 );
		if (gameConsole == nullptr && gEngine && static_cast<UEngine*>(gEngine)->GameViewport)
			gameConsole = static_cast<UEngine*>(gEngine)->GameViewport->ViewportConsole;
		if (gameConsole && (gameConsole->ConsoleKey == FName("None") || gameConsole->ConsoleKey == FName("Undefine")))
			gameConsole->ConsoleKey = FName("Tilde");

		InitializePython();

		gHookManager->Remove(Function->GetObjectName(), "GetCanvas");
		return true;
	}

	void initializeGameVersions()
	{
		EngineVersion = UObject::GetEngineVersion();
		ChangelistNumber = UObject::GetBuildChangelistNumber();

		Logging::LogD("[Internal] Engine Version = %d, Build Changelist = %d\n", EngineVersion, ChangelistNumber);
	}

	// This function is used to ensure that everything gets called in the game thread once the game itself has loaded
	bool GameReady(UObject* Caller, UFunction* Function, FStruct* Params)
	{
		Logging::LogD("[GameReady] Thread: %i\n", GetCurrentThreadId());

		for (size_t i = 0; i < UObject::GObjects()->Count; ++i)
		{
			UObject* Object = UObject::GObjects()->Data[i];

			if (!Object || !Object->Class)
				continue;

			if (!strcmp(Object->Class->GetName(), "Class"))
				ClassMap[Object->GetName()] = static_cast<UClass*>(Object);

			if (!strcmp(Object->GetFullName().c_str(), ObjectMap["EngineFullName"].c_str()))
				gEngine = Object;
		}
#ifdef _DEBUG
		Logging::InitializeExtern();
#endif

		initializeGameVersions();

		Logging::PrintLogHeader();

		gHookManager->Remove(Function->GetObjectName(), "StartupSDK");
		gHookManager->Register(ObjectMap["PostRenderFunction"], "GetCanvas", getCanvasPostRender);

		return true;
	}

	void Initialize()
	{
		HookAntiDebug();
		//Logging::SetLoggingLevel("DEBUG");
		gHookManager = new CHookManager("EngineHooks");
		hookGame();

		LogAllCalls(false);

		gHookManager->Register("Engine.Console.Initialized", "StartupSDK", GameReady);
		//GameHooks::UnrealScriptHookManager->Register("Engine.Interaction.NotifyGameSessionEnded", "ExitGame", &cleanup);
	}

	// This is called when the process is closing
	// TODO: Other things might need cleaning up
	void Cleanup()
	{
		Logging::Cleanup();
		delete gHookManager;
		gHookManager = nullptr;
		Util::CloseGame();
	}

	void LoadPackage(const char* Filename, const DWORD Flags, const bool Force)
	{
		const std::wstring wideFilename = Util::Widen(Filename);
		UPackage* result = pLoadPackage(nullptr, wideFilename.c_str(), Flags);
		if (Force)
		{
			for (size_t i = 0; i < UObject::GObjects()->Count; ++i)
			{
				UObject* Object = UObject::GObjects()->Data[i];
				if (Object->GetPackageObject() == result)
					Object->ObjectFlags.A = Object->ObjectFlags.A | 0x4000;
			}
		}
	};

	void KeepAlive(UObject* Obj)
	{
		for (UObject* outer = Obj; outer; outer = outer->Outer)
			outer->ObjectFlags.A |= 0x4000;
	}

	UObject* ConstructObject(UClass* Class, UObject* Outer, const FName Name, const unsigned int SetFlags,
							 unsigned int InternalSetFlags, UObject* Template, FOutputDevice* Error,
							 void* InstanceGraph, int AssumeTemplateIsArchetype)
	{
		if (!Error)
		{
			Error = new FOutputDevice();
			Error->VfTable = (void*)calloc(2, sizeof(void*));
			((void**)Error->VfTable)[1] = (void*)&Logging::LogW;
		}
		if (!Class)
			return nullptr;
		return pStaticConstructObject(Class, Outer, Name, SetFlags | 0b1, InternalSetFlags, Template, Error,
									  InstanceGraph, AssumeTemplateIsArchetype);
	};

	UObject* GetEngine()
	{
		if (!gEngine)
			gEngine = UObject::Find(ObjectMap["EngineObjectType"].c_str(), ObjectMap["EngineObjectName"].c_str());
		return gEngine;
	}

	void RegisterHook(const std::string& FuncName, const std::string& HookName,
					  const std::function<bool(UObject*, UFunction*, FStruct*)>& FuncHook)
	{
		gHookManager->Register(FuncName, HookName, FuncHook);
	}

	bool RemoveHook(const std::string& FuncName, const std::string& HookName)
	{
		return gHookManager->Remove(FuncName, HookName);
	}

	//UObject *LoadTexture(char *Filename, char *TextureName) {
	//	UTexture2D *NewTexture = (UTexture2D *)UObject::Find("Texture2D", std::string("Transient.") + TextureName);
	//	if (NewTexture)
	//		return NewTexture;
	//	int x, y, n;
	//	unsigned char *data = stbi_load(Filename, &x, &y, &n, 4);
	//	if (!data)
	//		throw std::exception("Unable to parse image file");
	//	NewTexture = (UTexture2D *)ConstructObject(UObject::FindClass("Texture2D"), GetEngine()->Outer, FName(TextureName), 0x83, 0, nullptr, nullptr, nullptr, false);
	//	UTexture2D *DefaultTexture = (UTexture2D *)UObject::Find("Texture2D", "Engine.Default__Texture2D ");
	//	if (!NewTexture)
	//		return nullptr;
	//	NewTexture->ObjectFlags.A |= 0x4000;
	//	NewTexture->SizeX = x;
	//	NewTexture->OriginalSizeX = x;
	//	NewTexture->SizeY = y;
	//	NewTexture->OriginalSizeY = y;
	//	NewTexture->Format = 2;
	//	FTexture2DMipMap *MipsData = (FTexture2DMipMap *)calloc(1, sizeof(FTexture2DMipMap));
	//	MipsData->SizeX = x;
	//	MipsData->SizeY = y;
	//	memcpy(&MipsData->Data, &DefaultTexture->Mips.Data[0]->Data, sizeof(FUntypedBulkData_Mirror));
	//	MipsData->Data.bShouldFreeOnEmpty = 0;
	//	MipsData->Data.BulkData.Dummy = (int)data;
	//	NewTexture->Mips.Data = (FTexture2DMipMap **)malloc(sizeof(FTexture2DMipMap *));
	//	NewTexture->Mips.Data[0] = MipsData;
	//	NewTexture->Mips.Count = 1;
	//	NewTexture->Mips.Max = 1;
	//	NewTexture->ResidentMips = 1;
	//	FPropertyChangedEvent ChangeEvent {};
	//	ChangeEvent.Property = (UProperty *)UObject::Find("BoolProperty", "Engine.Texture.SRGB");
	//	ChangeEvent.ChangeType = 1;
	//	NewTexture->PostEditChangeProperty(&ChangeEvent);
	//	return (UObject *)NewTexture;
	//}
}
