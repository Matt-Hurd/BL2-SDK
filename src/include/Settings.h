#pragma once
#ifndef SETTINGS_H
#define SETTINGS_H

#include <Windows.h>
#include <string>

struct LauncherStruct
{
	bool LogAllCalls;
	bool DisableCrashRpt;
	bool DeveloperMode;
	const LPWSTR BinPath;
};

namespace Settings
{
	void Initialize(wchar_t* BinPath/* LauncherStruct* args*/);
	std::wstring GetLogFilePath();
	std::wstring GetBinFile(const std::wstring& Filename);
	std::wstring GetTextureFile(const std::wstring& Filename);
	std::wstring GetPythonFile(const std::wstring& Filename);
	bool DeveloperModeEnabled();
}

#endif
