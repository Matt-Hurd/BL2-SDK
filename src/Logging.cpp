#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <stdio.h>
#include "stdafx.h"
#include "BL2-SDK.h"
#include "Logging.h"
#include "Util.h"
#include "Exceptions.h"

namespace Logging
{
	HANDLE logFile = nullptr;
	bool logToExternalConsole = true;
	bool logToFile = true;
	bool logToGameConsole = true;
	UConsole* gameConsole = nullptr;

	void LogToFile(const char* buff, int len)
	{
		if (logFile != INVALID_HANDLE_VALUE)
		{
			DWORD bytesWritten = 0;
			WriteFile(logFile, buff, len, &bytesWritten, nullptr);
		}
	}

	void LogWinConsole(const char* buff, int len)
	{
		HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
		DWORD bytesWritten = 0;
		WriteFile(output, buff, len, &bytesWritten, nullptr);
	}

	void Log(const char* formatted, int length)
	{
		if (length == 0)
			length = strlen(formatted);

		if (logToExternalConsole)
			LogWinConsole(formatted, length);

		if (logToFile)
			LogToFile(formatted, length);

		if (logToGameConsole)
		{
			if (gameConsole != nullptr)
			{
				// It seems that Unreal will automatically put a newline on the end of a 
				// console output, but if there's already a \n at the end, then it won't
				// add this \n onto the end. So if we're printing just a \n by itself, 
				// just don't do anything.
				if (!(length == 1 && formatted[0] == '\n'))
				{
					std::wstring wfmt = Util::Widen(formatted);
					BL2SDK::doInjectedCallNext();
					gameConsole->OutputText(FString((wchar_t*)wfmt.c_str()));
				}
			}
		}
	}

	void LogW(wchar_t *formatted, signed int length)
	{
		char *output = (char *)calloc(length + 1, sizeof(char));
		wcstombs(output, formatted, length);
		Log(output, 0);
	}

	void LogPy(const char* formatted)
	{
		Log(formatted, 0);
	}

	void LogF(const char* fmt, ...)
	{
		va_list args;
		va_start(args, fmt);
		std::string formatted = Util::FormatInternal(fmt, args);
		va_end(args);

		Log(formatted.c_str(), formatted.length());
	}

	enum LogLevel {
		DEBUG,
		INFO,
		WARNING,
		EXCEPTION,
		CRITICAL
	};
	Logging::LogLevel Level = WARNING;

	void LogD(const char* fmt, ...)
	{
		if (Logging::Level == LogLevel::DEBUG) {
			va_list args;
			va_start(args, fmt);
			std::string formatted = "[DEBUG] " + Util::FormatInternal(fmt, args);
			va_end(args);

			Log(formatted.c_str(), formatted.length());
		}
	}

	void SetLoggingLevel(const char *NewLevel) {
		std::string str = NewLevel;
		std::transform(str.begin(), str.end(), str.begin(), ::toupper);
		if (str == "DEBUG") {
			Logging::Level = DEBUG;
		}
		else if (str == "INFO") {
			Logging::Level = INFO;
		}
		else if (str == "WARNING") {
			Logging::Level = WARNING;
		}
		else if (str == "EXCEPTION") {
			Logging::Level = EXCEPTION;
		}
		else if (str == "CRITICAL") {
			Logging::Level = CRITICAL;
		} else {
			LogF("Unknown logging level '%s'\n", NewLevel);
		}
	}

	void InitializeExtern()
	{
		BOOL result = AllocConsole();
		if (result)
		{
			logToExternalConsole = true;
		}
	}

	// Everything else can fail, but InitializeFile must work.
	void InitializeFile(const std::wstring& fileName)
	{
		logFile = CreateFile(fileName.c_str(), GENERIC_WRITE, FILE_SHARE_READ, nullptr, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, nullptr);
		if (logFile == INVALID_HANDLE_VALUE)
		{
			std::string errMsg = Util::Format("Failed to initialize log file (INVALID_HANDLE_VALUE, LastError = %d)", GetLastError());
			throw FatalSDKException(1000, errMsg);
		}

		logToFile = true;
	}

	// TODO: Cleanup
	void InitializeGameConsole()
	{
		// There should only be 1 instance so we should be right to just use it in this way
		UConsole* console = (UConsole *)UObject::Find("WillowConsole", "Transient.WillowGameEngine_0:WillowGameViewportClient_0.WillowConsole_0");

		if (console != nullptr)
		{
			gameConsole = console;
			logToGameConsole = true;
		}
		else
		{
			LogF("[Logging] ERROR: Attempted to hook game console but 'WillowConsole Transient.WillowGameEngine_0:WillowGameViewportClient_0.WillowConsole_0' was not found.\n");
		}
	}

	void PrintLogHeader()
	{
		LogF("======== BL2 PythonSDK Loaded (Version %d) ========\n", BL2SDK::EngineVersion);
	}

	void Cleanup()
	{
		if (logFile != INVALID_HANDLE_VALUE)
		{
			FlushFileBuffers(logFile);
			CloseHandle(logFile);
		}
	}
}