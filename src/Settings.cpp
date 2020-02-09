#include "stdafx.h"
#include "Settings.h"
#include "Exceptions.h"
#include "Logging.h"

namespace Settings
{
	std::wstring gBinPath;
	bool gDeveloperMode;

	void Initialize(wchar_t* BinPath/*LauncherStruct* args*/)
	{
		/*
		if (args == nullptr || args->BinPath == nullptr)
		{
			throw FatalSDKException(6000, "Launcher settings struct was invalid, did you use the launcher?");
		}
		*/

		gBinPath = BinPath; //args->BinPath;
		gDeveloperMode = true; //args->DeveloperMode;
	}

	std::wstring GetLogFilePath()
	{
		return GetBinFile(L"python-sdk.log");
	}

	std::wstring GetConfigFile()
	{
		return GetBinFile(L"python-sdk.cfg");
	}

	std::wstring GetBinFile(const std::wstring& Filename)
	{
		std::wstring newPath = gBinPath + Filename;
		return newPath;
	}

	std::wstring GetTextureFile(const std::wstring& Filename)
	{
		std::wstring newPath = gBinPath + L"textures\\" + Filename;
		return newPath;
	}

	std::wstring GetPythonFile(const std::wstring& Filename)
	{
		std::wstring newPath = gBinPath + L"Mods\\" + Filename;
		return newPath;
	}

	bool DeveloperModeEnabled()
	{
		return gDeveloperMode;
	}
}
