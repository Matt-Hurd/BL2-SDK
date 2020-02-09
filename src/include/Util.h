#pragma once
//From McSimp's Borderlands2SDK

#ifndef UTIL_H
#define UTIL_H
#include "stdafx.h"

#define PATH_SEPARATOR "\\"

namespace Util
{
	std::string Format(const char* fmt, ...);
	std::string FormatInternal(const char* Fmt, va_list Args);
	std::wstring Format(const wchar_t* fmt, ...);
	std::wstring FormatInternal(const wchar_t* fmt, va_list args);
	std::wstring Widen(const std::string& Input);
	std::string Narrow(const std::wstring& Input);
	void Popup(const std::wstring& StrName, const std::wstring& StrText);
	void CloseGame();
	std::string StringToHex(const char* Input, size_t Len);

	void Initialize();
	const char* ServerPath();
	const char* LogPath();
	const char* LayoutPath();

	int WaitForModules(std::int32_t Timeout, const std::initializer_list<std::wstring>& Modules);
}

#endif
