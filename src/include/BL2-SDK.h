#pragma once
#ifndef BL2SDK_H
#define BL2SDK_H

#include <string>
#include <functional>
#include "CPythonInterface.h"

class UObject;
class UFunction;
class UClass;
class UPackage;
class UWillowGameEngine;
class UPlayer;
class UConsole;
class CHookManager;

struct FFrame;
struct FName;
struct FOutputDevice;
struct FArchive;
struct FStruct;

namespace BL2SDK
{
	typedef void(__thiscall *tProcessEvent) (UObject*, UFunction*, void*, void*);
	typedef int (tUnrealEH)(unsigned int, struct _EXCEPTION_POINTERS*);
	typedef void(__thiscall *tCallFunction) (UObject*, FFrame&, void* const, UFunction*);
	typedef void(__thiscall *tFrameStep) (FFrame*, UObject*, void* const);
	// http://api.unrealengine.com/INT/API/Runtime/CoreUObject/UObject/StaticConstructObject_Internal/index.html
	typedef UObject* (*tStaticConstructObject) (UClass* Class, UObject* InOuter, FName Name, unsigned int SetFlags, unsigned int InternalSetFlags, UObject* InTemplate, FOutputDevice* Error, void* InstanceGraph, int AssumeTemplateIsArchetype);
	typedef UPackage* (*tLoadPackage) (UPackage* Outer, const wchar_t* Filename, DWORD Flags);
	typedef FArchive& (__thiscall *tByteOrderSerialize) (FArchive* Ar, void* V, int Length);

	typedef char *(__thiscall *tFNameInitOld) (FName *Out, wchar_t *Src, int InNumber, int FindType, int SplitName, int Unk1);
	typedef void(__thiscall *tFNameInitNew) (FName *Out, wchar_t *Src, int InNumber, int FindType, int SplitName);
	typedef UObject *(__thiscall *tGetDefaultObject)(UClass *, unsigned int);

	extern tFNameInitOld pFNameInit;
	extern tProcessEvent pProcessEvent;
	extern tCallFunction pCallFunction;
	extern tFrameStep pFrameStep;
	extern tStaticConstructObject pStaticConstructObject;
	extern tLoadPackage pLoadPackage;
	extern tByteOrderSerialize pByteOrderSerialize;
	extern tGetDefaultObject pGetDefaultObject;
	extern bool injectedCallNext;
	extern UConsole *gameConsole;
	extern bool CallPostEdit;

	extern std::map<std::string, UClass *> ClassMap;

	extern CPythonInterface * Python;
	extern CHookManager *HookManager;

	extern int EngineVersion;
	extern int ChangelistNumber;

	extern class UObject *engine;

	void LogAllCalls(bool Enabled);
	void DoInjectedCallNext();
	void Initialize();
	void Cleanup();
	void LoadPackage(const char* Filename, DWORD Flags = 0, bool Force = false);
	void KeepAlive(UObject *Obj);
	UObject			*ConstructObject(UClass* Class, UObject* InOuter, FName Name, unsigned int SetFlags, unsigned int InternalSetFlags, UObject* InTemplate, FOutputDevice *Error, void* InstanceGraph, int AssumeTemplateIsArchetype);
	UObject			*GetEngine();
	//UObject			*LoadTexture(char *Filename, char *TextureName);

	void RegisterHook(const std::string& FuncName, const std::string& HookName, std::function<bool(UObject*, UFunction*, FStruct*)> FuncHook);
	bool RemoveHook(const std::string& FuncName, const std::string& HookName);
}

#endif