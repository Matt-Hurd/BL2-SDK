#pragma once
#include "stdafx.h"
#include "CHookManager.h"

void CHookManager::Register(const std::string& FuncName, const std::string& HookName,
							const std::function<bool(UObject*, UFunction*, FStruct*)>& FuncHook)
{
	char funcNameChar[255];
	strcpy(funcNameChar, FuncName.c_str());

	// Create pair to insert
	tHookPair hookPair = std::make_pair(HookName, FuncHook);

	auto iHooks = hooks.find(FuncName);
	if (iHooks != hooks.end())
		iHooks->second.insert(hookPair);
	else
	{
		tHookMap newMap;
		newMap.insert(hookPair);
		hooks.emplace(FuncName, newMap);
	}

	Logging::LogD("[HookManager] (%s) Hook \"%s\" added as hook for \"%s\"\n", this->debugName.c_str(),
				  hookPair.first.c_str(), FuncName.c_str());
}

bool CHookManager::Remove(const std::string& FuncName, const std::string& HookName)
{
	auto iHooks = hooks.find(FuncName);
	if (iHooks == hooks.end() || iHooks->second.find(HookName) == iHooks->second.end())
	{
		Logging::LogD("[HookManager] (%s) ERROR: Failed to remove hook \"%s\" for \"%s\"\n", this->debugName.c_str(),
					  HookName.c_str(), FuncName.c_str());
		return false;
	}

	iHooks->second.erase(HookName);
	return true;
}

bool CHookManager::ProcessHooks(const std::string& FuncName, const UObject* Caller, const UFunction* Func,
								const FStruct* Params)
{
	auto iHooks = hooks.find(FuncName);

	if (iHooks != hooks.end())
	{
		tHookMap matchedHooks = iHooks->second;

		for (auto& hook : matchedHooks)
			if (!hook.second(const_cast<UObject*>(Caller), const_cast<UFunction*>(Func), const_cast<FStruct*>(Params)))
				return false;
	}

	iHooks = hooks.find(const_cast<UObject*>(Caller)->GetObjectName() + "." + const_cast<UFunction*>(Func)->GetName());

	if (iHooks != hooks.end())
	{
		tHookMap matchedHooks = iHooks->second;

		for (auto& hook : matchedHooks)
			if (!hook.second(const_cast<UObject*>(Caller), const_cast<UFunction*>(Func), const_cast<FStruct*>(Params)))
				return false;
	}
	return true;
}


bool CHookManager::HasHook(UObject* Caller, UFunction* Func)
{
	auto iHooks = hooks.find(Func->GetObjectName());
	if (iHooks != hooks.end() && !iHooks->second.empty())
		return true;
	iHooks = hooks.find(Caller->GetObjectName() + "." + Func->GetName());
	return (iHooks != hooks.end() && !iHooks->second.empty());
}

bool CHookManager::ProcessHooks(UObject* Caller, FFrame& Stack, void* const Result, UFunction* Function)
{
	const auto iHooks = hooks.find(Function->GetObjectName());

	// Even though we check in the next function, check here to avoid messing with the stack when we don't need to
	if (iHooks != hooks.end() || hooks.find(Caller->GetObjectName() + "." + Function->GetName()) != hooks.end())
	{
		UProperty* ReturnParm;
		char* Frame = static_cast<char*>(calloc(1, Function->ParamsSize));
		for (auto* Property = static_cast<UProperty*>(Function->Children); Stack.Code[0] != 0x16; Property = static_cast<UProperty*>(Property->
																																	 Next))
		{
			const bool bIsReturnParam = ((Property->PropertyFlags & 0x400) != 0);
			if (bIsReturnParam)
			{
				ReturnParm = Property;
				continue;
			}
			UnrealSDK::pFrameStep(&Stack, Stack.Object, Frame + Property->Offset_Internal);
		}
		auto Params = FStruct{Function, (void*)Frame};
		const bool ret = ProcessHooks(Function->GetObjectName(), Caller, Function, &Params);
		//if (!ret) {
		//	if (ReturnParm)
		//	{
		//		memcpy(Result, Frame + ReturnParm->Offset_Internal, ReturnParm->ElementSize);
		//		Stack.Outparams = (FOutParmRec *)malloc(sizeof(FOutParmRec));
		//		Stack.Outparams->Property = ReturnParm;
		//		Stack.Outparams->PropAddr = (unsigned char *)Result;
		//	}
		//	FOutParmRec** LastOut = &Stack.Outparams;
		//	for (UProperty* Property = (UProperty *)Function->Children; Property; Property = (UProperty*)Property->Next) {
		//		const bool bIsReturnParam = ((Property->PropertyFlags & 0x400) != 0);
		//		if (bIsReturnParam)
		//			continue;
		//		if (Property->PropertyFlags & 0x100) {
		//			FOutParmRec *NewOutParm = (FOutParmRec *)malloc(sizeof(FOutParmRec));
		//			NewOutParm->Property = Property;
		//			NewOutParm->PropAddr = (unsigned char *)malloc(sizeof(Property->ElementSize));
		//			memcpy(NewOutParm->PropAddr, Frame + Property->Offset_Internal, Property->ElementSize);
		//			if (*LastOut) {
		//				(*LastOut)->NextOutParm = NewOutParm;
		//				LastOut = &(*LastOut)->NextOutParm;
		//			}
		//			else {
		//				*LastOut = NewOutParm;
		//			}
		//		}
		//	}
		//}
		//LogOutParams(Stack);
		memset(Frame, 0, Function->ParamsSize);
		free(Frame);
		return ret;
	}
	return true;
}
