#include <windows.h>
#include <stdio.h>
#include <BL2-SDK.h>
#include "plugin.h"

DWORD WINAPI Start(LPVOID lpParam)
{
	BL2SDK::initialize(); //initialize the SDK

	if (BL2SDK::getIsGameInitialized()) { //if the game has been initialized
		//call function say
	}

	BL2SDK::getGameEngine();
	BL2SDK::localPlayer();

	return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
)
{
	DWORD dwThreadId, dwThrdParam = 1;
	HANDLE hThread;

	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		hThread = CreateThread(NULL, 0, Start, &dwThrdParam, 0, &dwThreadId);
		break;
	case DLL_THREAD_ATTACH:
		break;
	case DLL_THREAD_DETACH:
		break;
	case DLL_PROCESS_DETACH:
		BL2SDK::cleanup();
		break;
	}
	return TRUE;
}