#include "stdafx.h"
#include "MinHook.h"
#include "CSigScan.h"
#include "Exceptions.h"
#include "Signatures.h"
#include "CHookManager.h"
#include "Util.h"
#include "UnrealSdk.h"
#include <utility>
#include "Logging.h"
#include "Settings.h"
#include "Exports.h"
#include "gamedefines.h"

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


	tProcessEvent oProcessEvent = nullptr;
	tCallFunction oCallFunction = nullptr;

	std::map<std::string, std::string> ObjectMap = {};

	std::map<std::string, UClass*> ClassMap = {};

	void __fastcall hkProcessEvent(UObject* caller, UFunction* Function, void* Params)
	{
		Logging::LogF("ProcessEvent\n");
		Logging::LogF("0x%p\n", caller);
		Logging::LogF("0x%p\n", Function);
		Logging::LogF("0x%p\n", Params);
		Logging::LogF("0x%p\n", oProcessEvent);
		if (gInjectedCallNext)
		{
			gInjectedCallNext = false;
			oProcessEvent(caller, Function, Params);
			return;
		}
		Logging::LogF("1\n");

		std::string functionName = Function->GetObjectName();
		Logging::LogF("2\n");
		if (logAllCalls)
		{
			std::string callerName = caller->GetFullName();

			Logging::LogF("===== ProcessEvent called =====\npCaller Name = %s\npFunction Name = %s\n",
				callerName.c_str(), functionName.c_str());
		}

		if (gHookManager->HasHook(caller, Function) && !gHookManager->ProcessHooks(
			functionName, caller, Function, &FStruct{ Function, Params }))
		{
			// The engine hook manager told us not to pass this function to the engine
			return;
		}
		Logging::LogF("3\n");

		oProcessEvent(caller, Function, Params);
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

	void __fastcall hkCallFunction(UObject* caller, void* edx, FFrame& Stack, void* const Result, UFunction* Function)
	{
		Logging::LogF("CallFunction\n");
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
		oCallFunction(caller, Stack, Result, Function);
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
		char actualPath[2048];
		memset(actualPath, 0, 2048);
		GetModuleFileName(nullptr, szExePath, 2048);
		for (int j = 0; szExePath[j] != 0; j++)
			actualPath[j] = (char)szExePath[j];
		std::string str(actualPath);
		std::size_t slash = str.find_last_of("/\\") + 1;
		std::size_t dot = str.find_last_of('.');
		std::string exeName = str.substr(slash, dot - slash);
		Logging::LogF("Found EXE name as '%s.exe'\n", exeName.c_str());
		ObjectMap = game_object_map[exeName];
		Logging::LogF("Loaded object map\n");
		CSigScan sigscan(Util::Widen(exeName + ".exe").c_str());
		Logging::LogF("Loading sigs\n");
		Signatures::InitSignatures(exeName);
		Logging::LogF("Sigs loaded\n");

		void*** tempGObjects = (void***)sigscan.Scan(Signatures::GObjects);
		if (tempGObjects != nullptr) {
#ifdef ENVIRONMENT64
			pGObjects = tempGObjects;
#else
			pGObjects = *tempGObjects;
#endif
			Logging::LogF("[Internal] GObjects = 0x%p\n", pGObjects);
		}

		void*** tempGNames = (void***)sigscan.Scan(Signatures::GNames);
		if (tempGNames != nullptr) {

#ifdef ENVIRONMENT64
			pGNames = tempGNames;
#else
			pGNames = *tempGNames;
#endif
			Logging::LogF("[Internal] GNames = 0x%p\n", pGNames);
		}

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

		void* gm = sigscan.Scan(Signatures::GMalloc);
		if (gm != nullptr) {
			pGMalloc = *static_cast<void*****>(sigscan.Scan(Signatures::GMalloc));
			Logging::LogF("[Internal] GMalloc = 0x%p\n", pGMalloc);
		} else {
			pGMalloc = nullptr;
		}

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
		Logging::LogF("Enabled SET commands\n");

		MH_Initialize();

		if (pProcessEvent != nullptr) {
			// Detour UObject::ProcessEvent()
			//SETUP_SIMPLE_DETOUR(detProcessEvent, pProcessEvent, hkProcessEvent);
			MH_CreateHook((PVOID&)pProcessEvent, &hkProcessEvent, &(PVOID&)oProcessEvent);
			MH_EnableHook((PVOID&)pProcessEvent);
			Logging::LogF("Hooked ProcessEvent\n");
		}

		Logging::LogF("Detour created\n");

		if (pCallFunction != nullptr) {
			// Detour UObject::CallFunction()
			MH_CreateHook((PVOID&)pCallFunction, &hkCallFunction, &(PVOID&)oCallFunction);
			MH_EnableHook((PVOID&)pCallFunction);
			Logging::LogF("Hooked CallFunction\n");
		}
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
		gameConsole = static_cast<UConsole *>(UObject::Find(ObjectMap["ConsoleObjectType"].c_str(), ObjectMap["ConsoleObjectName"].c_str())
		);
		if (gameConsole == nullptr && gEngine && static_cast<UEngine *>(gEngine)->GameViewport)
			gameConsole = static_cast<UEngine *>(gEngine)->GameViewport->ViewportConsole;
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
			UObject* Object = UObject::GObjects()->Get(i);

			if (!Object || !Object->Class)
				continue;

			if (!strcmp(Object->Class->GetName(), "Class"))
				ClassMap[Object->GetName()] = static_cast<UClass *>(Object);

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
		Logging::SetLoggingLevel("DEBUG");
		gHookManager = new CHookManager("EngineHooks");
		hookGame();

		//for (int x = 0; x < UObject::GObjects()->Count; x++) {
		//	if (UObject::GObjects()->Get(x) != nullptr && UObject::GObjects()->Get(x)->Class != nullptr && !strcmp(UObject::GObjects()->Get(x)->Class->GetName(), "Class")) {
		//		UClass* obj = (UClass *)UObject::GObjects()->Get(x);
		//		Logging::LogF("%d %s\n", x, obj->GetFullName().c_str());
		//		for (auto superClass = obj->SuperField; superClass; superClass = static_cast<UClass*>(superClass->SuperField)) {
		//			Logging::LogF("\t%s\n", superClass->GetFullName().c_str());

		//		}
		//	}
		//	//Logging::LogF("%x\n", UObject::GObjects()->Get(x));
		//}

		gHookManager->Register("Engine.Console.Initialized", "StartupSDK", GameReady);
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
				UObject* Object = UObject::GObjects()->Get(i);
				if (Object->GetPackageObject() == result)
					Object->ObjectFlags.A |= 0x4000;
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
			Error->VfTable = (void *)calloc(2, sizeof(void *));
			((void **)Error->VfTable)[1] = (void *)&Logging::LogW;
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
}
