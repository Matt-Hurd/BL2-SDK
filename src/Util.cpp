#include "stdafx.h"
#include <Windows.h>
#include <string>
#include <vector>
#include <stdio.h>
#include <stdarg.h>
#include "Util.h"
#include "Logging.h"

//From McSimp's Borderlands2SDK

namespace Util
{
	static bool gIsInit = false;

	//Get top window
	static HWND gTopWnd = nullptr;

	void Initialize()
	{
		if (gIsInit)
			return;
		gIsInit = true;
	}

	std::string FormatInternal(const char* Fmt, const va_list Args)
	{
		std::string str;

		const int buffSize = _vscprintf(Fmt, Args) + 1;

		if (buffSize <= 1)
			return str;

		char* szBuff = (char *)calloc(buffSize, sizeof(char));

		vsprintf_s(szBuff, buffSize, Fmt, Args);

		szBuff[buffSize - 1] = 0;

		str = szBuff;
		delete[] szBuff;

		return str;
	}

	std::string Format(const char* fmt, ...)
	{
		va_list args;
		va_start(args, fmt);
		std::string formatted = FormatInternal(fmt, args);
		va_end(args);

		return formatted;
	}

	std::wstring FormatInternal(const wchar_t* fmt, va_list args)
	{
		std::wstring str;

		const int buffSize = _vscwprintf(fmt, args) + 1;

		if (buffSize <= 1)
			return str;

		wchar_t* szBuff = (wchar_t *)calloc(buffSize, sizeof(wchar_t));

		vswprintf_s(szBuff, buffSize, fmt, args);

		szBuff[buffSize - 1] = 0;

		str = szBuff;
		free(szBuff);

		return str;
	}

	std::wstring Format(const wchar_t* fmt, ...)
	{
		va_list args;
		va_start(args, fmt);
		std::wstring formatted = FormatInternal(fmt, args);
		va_end(args);

		return formatted;
	}

	// TODO: Benchmarking and whatnot to see how these perform
	std::wstring Widen(const std::string& Input)
	{
		std::wstring out;
		out.assign(Input.begin(), Input.end());
		return out;
	}

	std::string Narrow(const std::wstring& Input)
	{
		std::string out;
		out.assign(Input.begin(), Input.end());
		return out;
	}

	void Popup(const std::wstring& StrName, const std::wstring& StrText)
	{
		MessageBox(nullptr, StrText.c_str(), StrName.c_str(), MB_OK | MB_ICONASTERISK);
	}

	void CloseGame()
	{
		TerminateProcess(GetCurrentProcess(), 1);
	}

	// This will convert a string like "Hello World" to "48 65 6C 6C 6F 20 57 6F 72 6C 64"
	// Taken mostly from http://stackoverflow.com/questions/3381614/c-convert-string-to-hexadecimal-and-vice-versa
	std::string StringToHex(const char* Input, const size_t Len)
	{
		static const char* const lut = "0123456789ABCDEF";

		std::string output;
		output.reserve((2 * Len) + Len);
		for (size_t i = 0; i < Len; ++i)
		{
			const unsigned char c = Input[i];
			output.push_back(lut[c >> 4]);
			output.push_back(lut[c & 15]);
			output.push_back(' ');
		}
		output.resize(output.size() - 1); // Remove that last space

		return output;
	}

	int WaitForModules(std::int32_t Timeout, const std::initializer_list<std::wstring>& Modules)
	{
		bool signaled[32] = {false};
		bool success = false;

		std::uint32_t totalSlept = 0;

		if (Timeout == 0)
		{
			for (auto& mod : Modules)
			{
				if (GetModuleHandleW(std::data(mod)) == nullptr)
					return WAIT_TIMEOUT;
			}
			return WAIT_OBJECT_0;
		}

		if (Timeout < 0)
			Timeout = INT32_MAX;

		while (true)
		{
			for (auto i = 0u; i < Modules.size(); ++i)
			{
				auto& module = *(Modules.begin() + i);
				if (!signaled[i] && GetModuleHandleW(std::data(module)) != nullptr)
				{
					signaled[i] = true;

					//
					// Checks if all modules are signaled
					//
					bool done = true;
					for (auto j = 0u; j < Modules.size(); ++j)
					{
						if (!signaled[j])
						{
							done = false;
							break;
						}
					}
					if (done)
					{
						success = true;
						goto exit;
					}
				}
			}
			if (totalSlept > std::uint32_t(Timeout))
			{
				break;
			}
			Sleep(10);
			totalSlept += 10;
		}

	exit:
		return success ? WAIT_OBJECT_0 : WAIT_TIMEOUT;
	}
}
