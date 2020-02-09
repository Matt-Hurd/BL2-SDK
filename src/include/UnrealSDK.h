#pragma once
#ifndef UnrealSDK_H
#define UnrealSDK_H

#include <string>
#include <functional>
#include "CPythonInterface.h"
#include <map>

class UObject;
class UFunction;
class UClass;
class UPackage;
class UPlayer;
class UConsole;
class CHookManager;

struct FFrame;
struct FName;
struct FOutputDevice;
struct FArchive;
struct FStruct;

namespace UnrealSDK
{
	typedef void (__thiscall *tProcessEvent)(UObject*, UFunction*, void*);
	typedef int (tUnrealEH)(unsigned int, struct _EXCEPTION_POINTERS*);
	typedef void (__thiscall *tCallFunction)(UObject*, FFrame&, void*, UFunction*);
	typedef void (__thiscall *tFrameStep)(FFrame*, UObject*, void*);
	// http://api.unrealengine.com/INT/API/Runtime/CoreUObject/UObject/StaticConstructObject_Internal/index.html
	typedef UObject* (*tStaticConstructObject)(UClass* Class, UObject* InOuter, FName Name, unsigned int SetFlags,
	                                           unsigned int InternalSetFlags, UObject* InTemplate, FOutputDevice* Error,
	                                           void* InstanceGraph, int AssumeTemplateIsArchetype);
	typedef UPackage* (*tLoadPackage)(UPackage* Outer, const wchar_t* Filename, DWORD Flags);
	typedef FArchive& (__thiscall *tByteOrderSerialize)(FArchive* Ar, void* V, int Length);

	typedef char*(__thiscall *tFNameInitOld)(FName* Out, wchar_t* Src, int InNumber, int FindType, int SplitName,
	                                         int Unk1);
	typedef void (__thiscall *tFNameInitNew)(FName* Out, wchar_t* Src, int InNumber, int FindType, int SplitName);
	typedef UObject*(__thiscall *tGetDefaultObject)(UClass*, unsigned int);

	extern tFNameInitOld pFNameInit;
	extern tProcessEvent pProcessEvent;
	extern tCallFunction pCallFunction;
	extern tFrameStep pFrameStep;
	extern tStaticConstructObject pStaticConstructObject;
	extern tLoadPackage pLoadPackage;
	extern tByteOrderSerialize pByteOrderSerialize;
	extern tGetDefaultObject pGetDefaultObject;
	extern bool gInjectedCallNext;
	extern UConsole* gameConsole;
	extern bool gCallPostEdit;

	extern std::map<std::string, UClass *> ClassMap;

	extern std::map<std::string, std::string> ObjectMap;

	extern CPythonInterface* Python;
	extern CHookManager* gHookManager;

	extern int EngineVersion;
	extern int ChangelistNumber;

	extern class UObject* gEngine;

	extern void**** pGMalloc;

	void LogAllCalls(bool Enabled);
	void DoInjectedCallNext();
	void Initialize();
	void Cleanup();
	void LoadPackage(const char* Filename, DWORD Flags = 0, bool Force = false);
	void KeepAlive(UObject* Obj);
	UObject* ConstructObject(UClass* Class, UObject* Outer, FName Name, unsigned int SetFlags,
	                         unsigned int InternalSetFlags, UObject* InTemplate, FOutputDevice* Error,
	                         void* InstanceGraph, int AssumeTemplateIsArchetype);
	UObject* GetEngine();
	//UObject			*LoadTexture(char *Filename, char *TextureName);

	void RegisterHook(const std::string& FuncName, const std::string& HookName,
	                  const std::function<bool(UObject*, UFunction*, FStruct*)>& FuncHook);
	bool RemoveHook(const std::string& FuncName, const std::string& HookName);
}

#endif
