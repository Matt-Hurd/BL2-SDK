#pragma once
#include <windows.h>

struct MemorySignature;

class CSigScan
{
private:
	char* m_pModuleBase;
	size_t m_moduleLen;

public:
	HMODULE m_moduleHandle;
	CSigScan(const wchar_t* moduleName);

	void* Scan(const MemorySignature& sigStruct);
	void* Scan(const char* sig, const char* mask, int sigLength);
	void* Scan(const char* sig, const char* mask);
};
