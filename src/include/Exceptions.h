#pragma once
#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include <string>
#include <stdexcept>

class FatalSDKException : public std::runtime_error
{
private:
	int m_errorCode;

public:
	FatalSDKException(int errorCode, const std::string& errorStr)
		: std::runtime_error(errorStr),
		  m_errorCode(errorCode)
	{
	}

	int GetErrorCode()
	{
		return m_errorCode;
	}
};

#endif
