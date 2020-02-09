#pragma once
#include "stdafx.h"
#include "MemorySignature.h"
#include "CSigScan.h"
#include "Util.h"
#include "Exceptions.h"
// Based off CSigScan from AlliedModders

CSigScan::CSigScan(const wchar_t* moduleName)
{
	m_moduleHandle = GetModuleHandle(NULL);
	if (m_moduleHandle == nullptr)
	{
		throw FatalSDKException(3000, Util::Format("Sigscan failed (GetModuleHandle returned NULL, Error = %d)",
			GetLastError()));
	}

	void* pAddr = m_moduleHandle;

	MEMORY_BASIC_INFORMATION mem;

	if (!VirtualQuery(pAddr, &mem, sizeof(mem)))
	{
		throw FatalSDKException(3001, Util::Format("Sigscan failed (VirtualQuery returned NULL, Error = %d)",
			GetLastError()));
	}

	m_pModuleBase = (char*)mem.AllocationBase;
	if (m_pModuleBase == nullptr)
	{
		throw FatalSDKException(3002, "Sigscan failed (mem.AllocationBase was NULL)");
	}

	IMAGE_DOS_HEADER* dos = (IMAGE_DOS_HEADER*)mem.AllocationBase;
	IMAGE_NT_HEADERS* pe = (IMAGE_NT_HEADERS*)((unsigned long)dos + (unsigned long)dos->e_lfanew);

	Logging::LogF("m_moduleHandle: %x\n", m_moduleHandle);
	Logging::LogF("baseAddress: %x\n", mem.BaseAddress);
	Logging::LogF("%x\n", dos);
	Logging::LogF("%x\n", dos->e_lfanew);
	Logging::LogF("%x\n", (IMAGE_NT_HEADERS*)((unsigned long)dos + (unsigned long)dos->e_lfanew));
	Logging::LogF("Module base %x\n", m_pModuleBase);

#ifdef ENVIRONMENT64
	m_moduleLen = 0x21000000;
	Logging::LogF("Module len %x\n", m_moduleLen);
#else
	m_moduleLen = (size_t)pe->OptionalHeader.SizeOfImage;
	Logging::LogF("Module len %x\n", m_moduleLen);
#endif
}

void* CSigScan::Scan(const MemorySignature& sigStruct)
{
	return Scan(sigStruct.Sig, sigStruct.Mask, sigStruct.Length);
}

void* CSigScan::Scan(const char* sig, const char* mask)
{
	int sigLength = strlen(mask);
	return Scan(sig, mask, sigLength);
}

void* CSigScan::Scan(const char* sig, const char* mask, int sigLength)
{
	char* pData = m_pModuleBase;
	char* pEnd = m_pModuleBase + m_moduleLen;

	while (pData < pEnd)
	{
		int i;
		for (i = 0; i < sigLength; i++)
		{
			if (mask[i] != '?' && sig[i] != pData[i])
				break;
		}

		// The for loop finished on its own accord
		if (i == sigLength)
		{
			return (void*)pData;
		}

		pData++;
	}
	Logging::LogF("Sigscan failed (Signature not found, Mask = %s)\n", Util::StringToHex(sig, sigLength).c_str());
	return nullptr;
}
