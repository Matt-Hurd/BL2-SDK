#include "stdafx.h"
/*
#############################################################################################
# Borderlands 2 (1.7) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: OnlineSubsystemSteamworks_functions.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#ifdef _MSC_VER
#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Functions
# ========================================================================================= #
*/

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerAddr
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            OutServerIP                    ( CPF_Parm | CPF_OutParm )
// int                            OutServerPort                  ( CPF_Parm | CPF_OutParm )

bool UOnlineAuthInterfaceSteamworks::GetServerAddr(int* OutServerIP, int* OutServerPort)
{
	static UFunction* pFnGetServerAddr = NULL;

	if (!pFnGetServerAddr)
		pFnGetServerAddr = (UFunction*)UObject::GObjects()->Data[46537];

	UOnlineAuthInterfaceSteamworks_execGetServerAddr_Parms GetServerAddr_Parms;

	pFnGetServerAddr->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetServerAddr, &GetServerAddr_Parms, NULL);

	pFnGetServerAddr->FunctionFlags |= 0x400;

	if (OutServerIP)
		*OutServerIP = GetServerAddr_Parms.OutServerIP;

	if (OutServerPort)
		*OutServerPort = GetServerAddr_Parms.OutServerPort;

	return GetServerAddr_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerUniqueId
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            OutServerUID                   ( CPF_Parm | CPF_OutParm )

bool UOnlineAuthInterfaceSteamworks::GetServerUniqueId(struct FUniqueNetId* OutServerUID)
{
	static UFunction* pFnGetServerUniqueId = NULL;

	if (!pFnGetServerUniqueId)
		pFnGetServerUniqueId = (UFunction*)UObject::GObjects()->Data[46534];

	UOnlineAuthInterfaceSteamworks_execGetServerUniqueId_Parms GetServerUniqueId_Parms;

	pFnGetServerUniqueId->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetServerUniqueId, &GetServerUniqueId_Parms, NULL);

	pFnGetServerUniqueId->FunctionFlags |= 0x400;

	if (OutServerUID)
		memcpy(OutServerUID, &GetServerUniqueId_Parms.OutServerUID, 0x18);

	return GetServerUniqueId_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.EndRemoteServerAuthSession
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FUniqueNetId            ServerUID                      ( CPF_Parm )
// int                            ServerIP                       ( CPF_Parm )

void UOnlineAuthInterfaceSteamworks::EndRemoteServerAuthSession(struct FUniqueNetId ServerUID, int ServerIP)
{
	static UFunction* pFnEndRemoteServerAuthSession = NULL;

	if (!pFnEndRemoteServerAuthSession)
		pFnEndRemoteServerAuthSession = (UFunction*)UObject::GObjects()->Data[46531];

	UOnlineAuthInterfaceSteamworks_execEndRemoteServerAuthSession_Parms EndRemoteServerAuthSession_Parms;
	memcpy(&EndRemoteServerAuthSession_Parms.ServerUID, &ServerUID, 0x18);
	EndRemoteServerAuthSession_Parms.ServerIP = ServerIP;

	pFnEndRemoteServerAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEndRemoteServerAuthSession, &EndRemoteServerAuthSession_Parms, NULL);

	pFnEndRemoteServerAuthSession->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.EndLocalServerAuthSession
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FUniqueNetId            ClientUID                      ( CPF_Parm )
// int                            ClientIP                       ( CPF_Parm )

void UOnlineAuthInterfaceSteamworks::EndLocalServerAuthSession(struct FUniqueNetId ClientUID, int ClientIP)
{
	static UFunction* pFnEndLocalServerAuthSession = NULL;

	if (!pFnEndLocalServerAuthSession)
		pFnEndLocalServerAuthSession = (UFunction*)UObject::GObjects()->Data[46528];

	UOnlineAuthInterfaceSteamworks_execEndLocalServerAuthSession_Parms EndLocalServerAuthSession_Parms;
	memcpy(&EndLocalServerAuthSession_Parms.ClientUID, &ClientUID, 0x18);
	EndLocalServerAuthSession_Parms.ClientIP = ClientIP;

	pFnEndLocalServerAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEndLocalServerAuthSession, &EndLocalServerAuthSession_Parms, NULL);

	pFnEndLocalServerAuthSession->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyServerAuthSession
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            ServerUID                      ( CPF_Parm )
// int                            ServerIP                       ( CPF_Parm )
// int                            AuthBlobUID                    ( CPF_Parm )

bool UOnlineAuthInterfaceSteamworks::VerifyServerAuthSession(struct FUniqueNetId ServerUID, int ServerIP, int AuthBlobUID)
{
	static UFunction* pFnVerifyServerAuthSession = NULL;

	if (!pFnVerifyServerAuthSession)
		pFnVerifyServerAuthSession = (UFunction*)UObject::GObjects()->Data[46523];

	UOnlineAuthInterfaceSteamworks_execVerifyServerAuthSession_Parms VerifyServerAuthSession_Parms;
	memcpy(&VerifyServerAuthSession_Parms.ServerUID, &ServerUID, 0x18);
	VerifyServerAuthSession_Parms.ServerIP = ServerIP;
	VerifyServerAuthSession_Parms.AuthBlobUID = AuthBlobUID;

	pFnVerifyServerAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnVerifyServerAuthSession, &VerifyServerAuthSession_Parms, NULL);

	pFnVerifyServerAuthSession->FunctionFlags |= 0x400;

	return VerifyServerAuthSession_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateServerAuthSession
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            ClientUID                      ( CPF_Parm )
// int                            ClientIP                       ( CPF_Parm )
// int                            ClientPort                     ( CPF_Parm )
// int                            OutAuthBlobUID                 ( CPF_Parm | CPF_OutParm )

bool UOnlineAuthInterfaceSteamworks::CreateServerAuthSession(struct FUniqueNetId ClientUID, int ClientIP, int ClientPort, int* OutAuthBlobUID)
{
	static UFunction* pFnCreateServerAuthSession = NULL;

	if (!pFnCreateServerAuthSession)
		pFnCreateServerAuthSession = (UFunction*)UObject::GObjects()->Data[46517];

	UOnlineAuthInterfaceSteamworks_execCreateServerAuthSession_Parms CreateServerAuthSession_Parms;
	memcpy(&CreateServerAuthSession_Parms.ClientUID, &ClientUID, 0x18);
	CreateServerAuthSession_Parms.ClientIP = ClientIP;
	CreateServerAuthSession_Parms.ClientPort = ClientPort;

	pFnCreateServerAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnCreateServerAuthSession, &CreateServerAuthSession_Parms, NULL);

	pFnCreateServerAuthSession->FunctionFlags |= 0x400;

	if (OutAuthBlobUID)
		*OutAuthBlobUID = CreateServerAuthSession_Parms.OutAuthBlobUID;

	return CreateServerAuthSession_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.EndRemoteClientAuthSession
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FUniqueNetId            ClientUID                      ( CPF_Parm )
// int                            ClientIP                       ( CPF_Parm )

void UOnlineAuthInterfaceSteamworks::EndRemoteClientAuthSession(struct FUniqueNetId ClientUID, int ClientIP)
{
	static UFunction* pFnEndRemoteClientAuthSession = NULL;

	if (!pFnEndRemoteClientAuthSession)
		pFnEndRemoteClientAuthSession = (UFunction*)UObject::GObjects()->Data[46514];

	UOnlineAuthInterfaceSteamworks_execEndRemoteClientAuthSession_Parms EndRemoteClientAuthSession_Parms;
	memcpy(&EndRemoteClientAuthSession_Parms.ClientUID, &ClientUID, 0x18);
	EndRemoteClientAuthSession_Parms.ClientIP = ClientIP;

	pFnEndRemoteClientAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEndRemoteClientAuthSession, &EndRemoteClientAuthSession_Parms, NULL);

	pFnEndRemoteClientAuthSession->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.EndLocalClientAuthSession
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FUniqueNetId            ServerUID                      ( CPF_Parm )
// int                            ServerIP                       ( CPF_Parm )
// int                            ServerPort                     ( CPF_Parm )

void UOnlineAuthInterfaceSteamworks::EndLocalClientAuthSession(struct FUniqueNetId ServerUID, int ServerIP, int ServerPort)
{
	static UFunction* pFnEndLocalClientAuthSession = NULL;

	if (!pFnEndLocalClientAuthSession)
		pFnEndLocalClientAuthSession = (UFunction*)UObject::GObjects()->Data[46510];

	UOnlineAuthInterfaceSteamworks_execEndLocalClientAuthSession_Parms EndLocalClientAuthSession_Parms;
	memcpy(&EndLocalClientAuthSession_Parms.ServerUID, &ServerUID, 0x18);
	EndLocalClientAuthSession_Parms.ServerIP = ServerIP;
	EndLocalClientAuthSession_Parms.ServerPort = ServerPort;

	pFnEndLocalClientAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEndLocalClientAuthSession, &EndLocalClientAuthSession_Parms, NULL);

	pFnEndLocalClientAuthSession->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyClientAuthSession
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            ClientUID                      ( CPF_Parm )
// int                            ClientIP                       ( CPF_Parm )
// int                            ClientPort                     ( CPF_Parm )
// int                            AuthBlobUID                    ( CPF_Parm )

bool UOnlineAuthInterfaceSteamworks::VerifyClientAuthSession(struct FUniqueNetId ClientUID, int ClientIP, int ClientPort, int AuthBlobUID)
{
	static UFunction* pFnVerifyClientAuthSession = NULL;

	if (!pFnVerifyClientAuthSession)
		pFnVerifyClientAuthSession = (UFunction*)UObject::GObjects()->Data[46504];

	UOnlineAuthInterfaceSteamworks_execVerifyClientAuthSession_Parms VerifyClientAuthSession_Parms;
	memcpy(&VerifyClientAuthSession_Parms.ClientUID, &ClientUID, 0x18);
	VerifyClientAuthSession_Parms.ClientIP = ClientIP;
	VerifyClientAuthSession_Parms.ClientPort = ClientPort;
	VerifyClientAuthSession_Parms.AuthBlobUID = AuthBlobUID;

	pFnVerifyClientAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnVerifyClientAuthSession, &VerifyClientAuthSession_Parms, NULL);

	pFnVerifyClientAuthSession->FunctionFlags |= 0x400;

	return VerifyClientAuthSession_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateClientAuthSession
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            ServerUID                      ( CPF_Parm )
// int                            ServerIP                       ( CPF_Parm )
// int                            ServerPort                     ( CPF_Parm )
// unsigned long                  bSecure                        ( CPF_Parm )
// int                            OutAuthBlobUID                 ( CPF_Parm | CPF_OutParm )

bool UOnlineAuthInterfaceSteamworks::CreateClientAuthSession(struct FUniqueNetId ServerUID, int ServerIP, int ServerPort, unsigned long bSecure, int* OutAuthBlobUID)
{
	static UFunction* pFnCreateClientAuthSession = NULL;

	if (!pFnCreateClientAuthSession)
		pFnCreateClientAuthSession = (UFunction*)UObject::GObjects()->Data[46497];

	UOnlineAuthInterfaceSteamworks_execCreateClientAuthSession_Parms CreateClientAuthSession_Parms;
	memcpy(&CreateClientAuthSession_Parms.ServerUID, &ServerUID, 0x18);
	CreateClientAuthSession_Parms.ServerIP = ServerIP;
	CreateClientAuthSession_Parms.ServerPort = ServerPort;
	CreateClientAuthSession_Parms.bSecure = bSecure;

	pFnCreateClientAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnCreateClientAuthSession, &CreateClientAuthSession_Parms, NULL);

	pFnCreateClientAuthSession->FunctionFlags |= 0x400;

	if (OutAuthBlobUID)
		*OutAuthBlobUID = CreateClientAuthSession_Parms.OutAuthBlobUID;

	return CreateClientAuthSession_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendAuthRequestServer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            ServerUID                      ( CPF_Parm )

bool UOnlineAuthInterfaceSteamworks::SendAuthRequestServer(struct FUniqueNetId ServerUID)
{
	static UFunction* pFnSendAuthRequestServer = NULL;

	if (!pFnSendAuthRequestServer)
		pFnSendAuthRequestServer = (UFunction*)UObject::GObjects()->Data[46494];

	UOnlineAuthInterfaceSteamworks_execSendAuthRequestServer_Parms SendAuthRequestServer_Parms;
	memcpy(&SendAuthRequestServer_Parms.ServerUID, &ServerUID, 0x18);

	pFnSendAuthRequestServer->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSendAuthRequestServer, &SendAuthRequestServer_Parms, NULL);

	pFnSendAuthRequestServer->FunctionFlags |= 0x400;

	return SendAuthRequestServer_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendAuthRequestClient
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UPlayer*                 ClientConnection               ( CPF_Parm )
// struct FUniqueNetId            ClientUID                      ( CPF_Parm )

bool UOnlineAuthInterfaceSteamworks::SendAuthRequestClient(class UPlayer* ClientConnection, struct FUniqueNetId ClientUID)
{
	static UFunction* pFnSendAuthRequestClient = NULL;

	if (!pFnSendAuthRequestClient)
		pFnSendAuthRequestClient = (UFunction*)UObject::GObjects()->Data[46490];

	UOnlineAuthInterfaceSteamworks_execSendAuthRequestClient_Parms SendAuthRequestClient_Parms;
	SendAuthRequestClient_Parms.ClientConnection = ClientConnection;
	memcpy(&SendAuthRequestClient_Parms.ClientUID, &ClientUID, 0x18);

	pFnSendAuthRequestClient->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSendAuthRequestClient, &SendAuthRequestClient_Parms, NULL);

	pFnSendAuthRequestClient->FunctionFlags |= 0x400;

	return SendAuthRequestClient_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetGameSettings
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UOnlineGameSettings*     ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )

class UOnlineGameSettings* UOnlineGameInterfaceSteamworks::GetGameSettings(struct FName SessionName)
{
	static UFunction* pFnGetGameSettings = NULL;

	if (!pFnGetGameSettings)
		pFnGetGameSettings = (UFunction*)UObject::GObjects()->Data[46643];

	UOnlineGameInterfaceSteamworks_execGetGameSettings_Parms GetGameSettings_Parms;
	memcpy(&GetGameSettings_Parms.SessionName, &SessionName, 0x8);

	pFnGetGameSettings->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetGameSettings, &GetGameSettings_Parms, NULL);

	pFnGetGameSettings->FunctionFlags |= 0x400;

	return GetGameSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetResolvedConnectString
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FString                 ConnectInfo                    ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineGameInterfaceSteamworks::GetResolvedConnectString(struct FName SessionName, struct FString* ConnectInfo)
{
	static UFunction* pFnGetResolvedConnectString = NULL;

	if (!pFnGetResolvedConnectString)
		pFnGetResolvedConnectString = (UFunction*)UObject::GObjects()->Data[46639];

	UOnlineGameInterfaceSteamworks_execGetResolvedConnectString_Parms GetResolvedConnectString_Parms;
	memcpy(&GetResolvedConnectString_Parms.SessionName, &SessionName, 0x8);

	pFnGetResolvedConnectString->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetResolvedConnectString, &GetResolvedConnectString_Parms, NULL);

	pFnGetResolvedConnectString->FunctionFlags |= 0x400;

	if (ConnectInfo)
		memcpy(ConnectInfo, &GetResolvedConnectString_Parms.ConnectInfo, 0xC);

	return GetResolvedConnectString_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.BindPlatformSpecificSessionToSearch
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  SearchingPlayerNum             ( CPF_Parm )
// class UOnlineGameSearch*       SearchSettings                 ( CPF_Parm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Parm )

bool UOnlineGameInterfaceSteamworks::BindPlatformSpecificSessionToSearch(unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings, unsigned char* PlatformSpecificInfo)
{
	static UFunction* pFnBindPlatformSpecificSessionToSearch = NULL;

	if (!pFnBindPlatformSpecificSessionToSearch)
		pFnBindPlatformSpecificSessionToSearch = (UFunction*)UObject::GObjects()->Data[46634];

	UOnlineGameInterfaceSteamworks_execBindPlatformSpecificSessionToSearch_Parms BindPlatformSpecificSessionToSearch_Parms;
	BindPlatformSpecificSessionToSearch_Parms.SearchingPlayerNum = SearchingPlayerNum;
	BindPlatformSpecificSessionToSearch_Parms.SearchSettings = SearchSettings;
	memcpy(&BindPlatformSpecificSessionToSearch_Parms.PlatformSpecificInfo, &PlatformSpecificInfo, 0x50);

	pFnBindPlatformSpecificSessionToSearch->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnBindPlatformSpecificSessionToSearch, &BindPlatformSpecificSessionToSearch_Parms, NULL);

	pFnBindPlatformSpecificSessionToSearch->FunctionFlags |= 0x400;

	return BindPlatformSpecificSessionToSearch_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ReadPlatformSpecificSessionInfoBySessionName
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Parm | CPF_OutParm )

bool UOnlineGameInterfaceSteamworks::ReadPlatformSpecificSessionInfoBySessionName(struct FName SessionName, unsigned char* PlatformSpecificInfo)
{
	static UFunction* pFnReadPlatformSpecificSessionInfoBySessionName = NULL;

	if (!pFnReadPlatformSpecificSessionInfoBySessionName)
		pFnReadPlatformSpecificSessionInfoBySessionName = (UFunction*)UObject::GObjects()->Data[46630];

	UOnlineGameInterfaceSteamworks_execReadPlatformSpecificSessionInfoBySessionName_Parms ReadPlatformSpecificSessionInfoBySessionName_Parms;
	memcpy(&ReadPlatformSpecificSessionInfoBySessionName_Parms.SessionName, &SessionName, 0x8);

	pFnReadPlatformSpecificSessionInfoBySessionName->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnReadPlatformSpecificSessionInfoBySessionName, &ReadPlatformSpecificSessionInfoBySessionName_Parms, NULL);

	pFnReadPlatformSpecificSessionInfoBySessionName->FunctionFlags |= 0x400;

	if (PlatformSpecificInfo)
		memcpy(PlatformSpecificInfo, &ReadPlatformSpecificSessionInfoBySessionName_Parms.PlatformSpecificInfo, 0x50);

	return ReadPlatformSpecificSessionInfoBySessionName_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ReadPlatformSpecificSessionInfo
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FOnlineGameSearchResult DesiredGame                    ( CPF_Const | CPF_Parm | CPF_OutParm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Parm | CPF_OutParm )

bool UOnlineGameInterfaceSteamworks::ReadPlatformSpecificSessionInfo(struct FOnlineGameSearchResult* DesiredGame, unsigned char* PlatformSpecificInfo)
{
	static UFunction* pFnReadPlatformSpecificSessionInfo = NULL;

	if (!pFnReadPlatformSpecificSessionInfo)
		pFnReadPlatformSpecificSessionInfo = (UFunction*)UObject::GObjects()->Data[46626];

	UOnlineGameInterfaceSteamworks_execReadPlatformSpecificSessionInfo_Parms ReadPlatformSpecificSessionInfo_Parms;

	pFnReadPlatformSpecificSessionInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnReadPlatformSpecificSessionInfo, &ReadPlatformSpecificSessionInfo_Parms, NULL);

	pFnReadPlatformSpecificSessionInfo->FunctionFlags |= 0x400;

	if (DesiredGame)
		memcpy(DesiredGame, &ReadPlatformSpecificSessionInfo_Parms.DesiredGame, 0x8);

	if (PlatformSpecificInfo)
		memcpy(PlatformSpecificInfo, &ReadPlatformSpecificSessionInfo_Parms.PlatformSpecificInfo, 0x50);

	return ReadPlatformSpecificSessionInfo_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.QueryNonAdvertisedData
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            StartAt                        ( CPF_Parm )
// int                            NumberToQuery                  ( CPF_Parm )

bool UOnlineGameInterfaceSteamworks::QueryNonAdvertisedData(int StartAt, int NumberToQuery)
{
	static UFunction* pFnQueryNonAdvertisedData = NULL;

	if (!pFnQueryNonAdvertisedData)
		pFnQueryNonAdvertisedData = (UFunction*)UObject::GObjects()->Data[46622];

	UOnlineGameInterfaceSteamworks_execQueryNonAdvertisedData_Parms QueryNonAdvertisedData_Parms;
	QueryNonAdvertisedData_Parms.StartAt = StartAt;
	QueryNonAdvertisedData_Parms.NumberToQuery = NumberToQuery;

	this->ProcessEvent(pFnQueryNonAdvertisedData, &QueryNonAdvertisedData_Parms, NULL);

	return QueryNonAdvertisedData_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearUnregisterPlayerCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceSteamworks::ClearUnregisterPlayerCompleteDelegate(struct FScriptDelegate UnregisterPlayerCompleteDelegate)
{
	static UFunction* pFnClearUnregisterPlayerCompleteDelegate = NULL;

	if (!pFnClearUnregisterPlayerCompleteDelegate)
		pFnClearUnregisterPlayerCompleteDelegate = (UFunction*)UObject::GObjects()->Data[46620];

	UOnlineGameInterfaceSteamworks_execClearUnregisterPlayerCompleteDelegate_Parms ClearUnregisterPlayerCompleteDelegate_Parms;
	memcpy(&ClearUnregisterPlayerCompleteDelegate_Parms.UnregisterPlayerCompleteDelegate, &UnregisterPlayerCompleteDelegate, 0xC);

	this->ProcessEvent(pFnClearUnregisterPlayerCompleteDelegate, &ClearUnregisterPlayerCompleteDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddUnregisterPlayerCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceSteamworks::AddUnregisterPlayerCompleteDelegate(struct FScriptDelegate UnregisterPlayerCompleteDelegate)
{
	static UFunction* pFnAddUnregisterPlayerCompleteDelegate = NULL;

	if (!pFnAddUnregisterPlayerCompleteDelegate)
		pFnAddUnregisterPlayerCompleteDelegate = (UFunction*)UObject::GObjects()->Data[46618];

	UOnlineGameInterfaceSteamworks_execAddUnregisterPlayerCompleteDelegate_Parms AddUnregisterPlayerCompleteDelegate_Parms;
	memcpy(&AddUnregisterPlayerCompleteDelegate_Parms.UnregisterPlayerCompleteDelegate, &UnregisterPlayerCompleteDelegate, 0xC);

	this->ProcessEvent(pFnAddUnregisterPlayerCompleteDelegate, &AddUnregisterPlayerCompleteDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnUnregisterPlayerComplete
// [0x00120000]
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceSteamworks::OnUnregisterPlayerComplete(struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnUnregisterPlayerComplete = NULL;

	if (!pFnOnUnregisterPlayerComplete)
		pFnOnUnregisterPlayerComplete = (UFunction*)UObject::GObjects()->Data[46555];

	UOnlineGameInterfaceSteamworks_execOnUnregisterPlayerComplete_Parms OnUnregisterPlayerComplete_Parms;
	memcpy(&OnUnregisterPlayerComplete_Parms.SessionName, &SessionName, 0x8);
	memcpy(&OnUnregisterPlayerComplete_Parms.PlayerID, &PlayerID, 0x18);
	OnUnregisterPlayerComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnUnregisterPlayerComplete, &OnUnregisterPlayerComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UnregisterPlayer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineGameInterfaceSteamworks::UnregisterPlayer(struct FName SessionName, struct FUniqueNetId PlayerID)
{
	static UFunction* pFnUnregisterPlayer = NULL;

	if (!pFnUnregisterPlayer)
		pFnUnregisterPlayer = (UFunction*)UObject::GObjects()->Data[46611];

	UOnlineGameInterfaceSteamworks_execUnregisterPlayer_Parms UnregisterPlayer_Parms;
	memcpy(&UnregisterPlayer_Parms.SessionName, &SessionName, 0x8);
	memcpy(&UnregisterPlayer_Parms.PlayerID, &PlayerID, 0x18);

	pFnUnregisterPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnUnregisterPlayer, &UnregisterPlayer_Parms, NULL);

	pFnUnregisterPlayer->FunctionFlags |= 0x400;

	return UnregisterPlayer_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearRegisterPlayerCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceSteamworks::ClearRegisterPlayerCompleteDelegate(struct FScriptDelegate RegisterPlayerCompleteDelegate)
{
	static UFunction* pFnClearRegisterPlayerCompleteDelegate = NULL;

	if (!pFnClearRegisterPlayerCompleteDelegate)
		pFnClearRegisterPlayerCompleteDelegate = (UFunction*)UObject::GObjects()->Data[46609];

	UOnlineGameInterfaceSteamworks_execClearRegisterPlayerCompleteDelegate_Parms ClearRegisterPlayerCompleteDelegate_Parms;
	memcpy(&ClearRegisterPlayerCompleteDelegate_Parms.RegisterPlayerCompleteDelegate, &RegisterPlayerCompleteDelegate, 0xC);

	this->ProcessEvent(pFnClearRegisterPlayerCompleteDelegate, &ClearRegisterPlayerCompleteDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddRegisterPlayerCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceSteamworks::AddRegisterPlayerCompleteDelegate(struct FScriptDelegate RegisterPlayerCompleteDelegate)
{
	static UFunction* pFnAddRegisterPlayerCompleteDelegate = NULL;

	if (!pFnAddRegisterPlayerCompleteDelegate)
		pFnAddRegisterPlayerCompleteDelegate = (UFunction*)UObject::GObjects()->Data[46607];

	UOnlineGameInterfaceSteamworks_execAddRegisterPlayerCompleteDelegate_Parms AddRegisterPlayerCompleteDelegate_Parms;
	memcpy(&AddRegisterPlayerCompleteDelegate_Parms.RegisterPlayerCompleteDelegate, &RegisterPlayerCompleteDelegate, 0xC);

	this->ProcessEvent(pFnAddRegisterPlayerCompleteDelegate, &AddRegisterPlayerCompleteDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnRegisterPlayerComplete
// [0x00120000]
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceSteamworks::OnRegisterPlayerComplete(struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnRegisterPlayerComplete = NULL;

	if (!pFnOnRegisterPlayerComplete)
		pFnOnRegisterPlayerComplete = (UFunction*)UObject::GObjects()->Data[46552];

	UOnlineGameInterfaceSteamworks_execOnRegisterPlayerComplete_Parms OnRegisterPlayerComplete_Parms;
	memcpy(&OnRegisterPlayerComplete_Parms.SessionName, &SessionName, 0x8);
	memcpy(&OnRegisterPlayerComplete_Parms.PlayerID, &PlayerID, 0x18);
	OnRegisterPlayerComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnRegisterPlayerComplete, &OnRegisterPlayerComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RegisterPlayer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bWasInvited                    ( CPF_Parm )

bool UOnlineGameInterfaceSteamworks::RegisterPlayer(struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasInvited)
{
	static UFunction* pFnRegisterPlayer = NULL;

	if (!pFnRegisterPlayer)
		pFnRegisterPlayer = (UFunction*)UObject::GObjects()->Data[46599];

	UOnlineGameInterfaceSteamworks_execRegisterPlayer_Parms RegisterPlayer_Parms;
	memcpy(&RegisterPlayer_Parms.SessionName, &SessionName, 0x8);
	memcpy(&RegisterPlayer_Parms.PlayerID, &PlayerID, 0x18);
	RegisterPlayer_Parms.bWasInvited = bWasInvited;

	pFnRegisterPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRegisterPlayer, &RegisterPlayer_Parms, NULL);

	pFnRegisterPlayer->FunctionFlags |= 0x400;

	return RegisterPlayer_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AcceptGameInvite
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineGameInterfaceSteamworks::AcceptGameInvite(unsigned char LocalUserNum, struct FName SessionName)
{
	static UFunction* pFnAcceptGameInvite = NULL;

	if (!pFnAcceptGameInvite)
		pFnAcceptGameInvite = (UFunction*)UObject::GObjects()->Data[46595];

	UOnlineGameInterfaceSteamworks_execAcceptGameInvite_Parms AcceptGameInvite_Parms;
	AcceptGameInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy(&AcceptGameInvite_Parms.SessionName, &SessionName, 0x8);

	pFnAcceptGameInvite->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAcceptGameInvite, &AcceptGameInvite_Parms, NULL);

	pFnAcceptGameInvite->FunctionFlags |= 0x400;

	return AcceptGameInvite_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnGameInviteAccepted
// [0x00520000]
// Parameters infos:
// struct FOnlineGameSearchResult InviteResult                   ( CPF_Const | CPF_Parm | CPF_OutParm )

void UOnlineGameInterfaceSteamworks::OnGameInviteAccepted(struct FOnlineGameSearchResult* InviteResult)
{
	static UFunction* pFnOnGameInviteAccepted = NULL;

	if (!pFnOnGameInviteAccepted)
		pFnOnGameInviteAccepted = (UFunction*)UObject::GObjects()->Data[46549];

	UOnlineGameInterfaceSteamworks_execOnGameInviteAccepted_Parms OnGameInviteAccepted_Parms;

	this->ProcessEvent(pFnOnGameInviteAccepted, &OnGameInviteAccepted_Parms, NULL);

	if (InviteResult)
		memcpy(InviteResult, &OnGameInviteAccepted_Parms.InviteResult, 0x8);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearGameInviteAcceptedDelegate
// [0x00020002]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         GameInviteAcceptedDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceSteamworks::ClearGameInviteAcceptedDelegate(unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate)
{
	static UFunction* pFnClearGameInviteAcceptedDelegate = NULL;

	if (!pFnClearGameInviteAcceptedDelegate)
		pFnClearGameInviteAcceptedDelegate = (UFunction*)UObject::GObjects()->Data[46591];

	UOnlineGameInterfaceSteamworks_execClearGameInviteAcceptedDelegate_Parms ClearGameInviteAcceptedDelegate_Parms;
	ClearGameInviteAcceptedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy(&ClearGameInviteAcceptedDelegate_Parms.GameInviteAcceptedDelegate, &GameInviteAcceptedDelegate, 0xC);

	this->ProcessEvent(pFnClearGameInviteAcceptedDelegate, &ClearGameInviteAcceptedDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddGameInviteAcceptedDelegate
// [0x00020002]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         GameInviteAcceptedDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceSteamworks::AddGameInviteAcceptedDelegate(unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate)
{
	static UFunction* pFnAddGameInviteAcceptedDelegate = NULL;

	if (!pFnAddGameInviteAcceptedDelegate)
		pFnAddGameInviteAcceptedDelegate = (UFunction*)UObject::GObjects()->Data[46588];

	UOnlineGameInterfaceSteamworks_execAddGameInviteAcceptedDelegate_Parms AddGameInviteAcceptedDelegate_Parms;
	AddGameInviteAcceptedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy(&AddGameInviteAcceptedDelegate_Parms.GameInviteAcceptedDelegate, &GameInviteAcceptedDelegate, 0xC);

	this->ProcessEvent(pFnAddGameInviteAcceptedDelegate, &AddGameInviteAcceptedDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UpdateOnlineGame
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// class UOnlineGameSettings*     UpdatedGameSettings            ( CPF_Parm )
// unsigned long                  bShouldRefreshOnlineData       ( CPF_OptionalParm | CPF_Parm )

bool UOnlineGameInterfaceSteamworks::UpdateOnlineGame(struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, unsigned long bShouldRefreshOnlineData)
{
	static UFunction* pFnUpdateOnlineGame = NULL;

	if (!pFnUpdateOnlineGame)
		pFnUpdateOnlineGame = (UFunction*)UObject::GObjects()->Data[46583];

	UOnlineGameInterfaceSteamworks_execUpdateOnlineGame_Parms UpdateOnlineGame_Parms;
	memcpy(&UpdateOnlineGame_Parms.SessionName, &SessionName, 0x8);
	UpdateOnlineGame_Parms.UpdatedGameSettings = UpdatedGameSettings;
	UpdateOnlineGame_Parms.bShouldRefreshOnlineData = bShouldRefreshOnlineData;

	pFnUpdateOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnUpdateOnlineGame, &UpdateOnlineGame_Parms, NULL);

	pFnUpdateOnlineGame->FunctionFlags |= 0x400;

	return UpdateOnlineGame_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCheckDownloadableContentListDelegate
// [0x00020002]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         CheckDownloadableContentListDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearCheckDownloadableContentListDelegate(unsigned char LocalUserNum, struct FScriptDelegate CheckDownloadableContentListDelegate)
{
	static UFunction* pFnClearCheckDownloadableContentListDelegate = NULL;

	if (!pFnClearCheckDownloadableContentListDelegate)
		pFnClearCheckDownloadableContentListDelegate = (UFunction*)UObject::GObjects()->Data[47865];

	UOnlineSubsystemSteamworks_execClearCheckDownloadableContentListDelegate_Parms ClearCheckDownloadableContentListDelegate_Parms;
	ClearCheckDownloadableContentListDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy(&ClearCheckDownloadableContentListDelegate_Parms.CheckDownloadableContentListDelegate, &CheckDownloadableContentListDelegate, 0xC);

	this->ProcessEvent(pFnClearCheckDownloadableContentListDelegate, &ClearCheckDownloadableContentListDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCheckDownloadableContentListDelegate
// [0x00020002]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         CheckDownloadableContentListDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddCheckDownloadableContentListDelegate(unsigned char LocalUserNum, struct FScriptDelegate CheckDownloadableContentListDelegate)
{
	static UFunction* pFnAddCheckDownloadableContentListDelegate = NULL;

	if (!pFnAddCheckDownloadableContentListDelegate)
		pFnAddCheckDownloadableContentListDelegate = (UFunction*)UObject::GObjects()->Data[47862];

	UOnlineSubsystemSteamworks_execAddCheckDownloadableContentListDelegate_Parms AddCheckDownloadableContentListDelegate_Parms;
	AddCheckDownloadableContentListDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy(&AddCheckDownloadableContentListDelegate_Parms.CheckDownloadableContentListDelegate, &CheckDownloadableContentListDelegate, 0xC);

	this->ProcessEvent(pFnAddCheckDownloadableContentListDelegate, &AddCheckDownloadableContentListDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CheckDownloadableContentList
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::CheckDownloadableContentList(unsigned char LocalUserNum)
{
	static UFunction* pFnCheckDownloadableContentList = NULL;

	if (!pFnCheckDownloadableContentList)
		pFnCheckDownloadableContentList = (UFunction*)UObject::GObjects()->Data[47857];

	UOnlineSubsystemSteamworks_execCheckDownloadableContentList_Parms CheckDownloadableContentList_Parms;
	CheckDownloadableContentList_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnCheckDownloadableContentList, &CheckDownloadableContentList_Parms, NULL);

	return CheckDownloadableContentList_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCheckDownloadableContentList
// [0x00120000]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bDownloadableContentListAvailable ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnCheckDownloadableContentList(unsigned char LocalUserNum, unsigned long bDownloadableContentListAvailable)
{
	static UFunction* pFnOnCheckDownloadableContentList = NULL;

	if (!pFnOnCheckDownloadableContentList)
		pFnOnCheckDownloadableContentList = (UFunction*)UObject::GObjects()->Data[47854];

	UOnlineSubsystemSteamworks_execOnCheckDownloadableContentList_Parms OnCheckDownloadableContentList_Parms;
	OnCheckDownloadableContentList_Parms.LocalUserNum = LocalUserNum;
	OnCheckDownloadableContentList_Parms.bDownloadableContentListAvailable = bDownloadableContentListAvailable;

	this->ProcessEvent(pFnOnCheckDownloadableContentList, &OnCheckDownloadableContentList_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCriticalDownloadableContentList
// [0x00420000]
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FMarketplaceContent > DLCList                        ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

unsigned char UOnlineSubsystemSteamworks::GetCriticalDownloadableContentList(unsigned char LocalUserNum, TArray< struct FMarketplaceContent >* DLCList)
{
	static UFunction* pFnGetCriticalDownloadableContentList = NULL;

	if (!pFnGetCriticalDownloadableContentList)
		pFnGetCriticalDownloadableContentList = (UFunction*)UObject::GObjects()->Data[47849];

	UOnlineSubsystemSteamworks_execGetCriticalDownloadableContentList_Parms GetCriticalDownloadableContentList_Parms;
	GetCriticalDownloadableContentList_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnGetCriticalDownloadableContentList, &GetCriticalDownloadableContentList_Parms, NULL);

	if (DLCList)
		memcpy(DLCList, &GetCriticalDownloadableContentList_Parms.DLCList, 0xC);

	return GetCriticalDownloadableContentList_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCriticalDownloadableContentList
// [0x00024000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            CategoryMask                   ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadCriticalDownloadableContentList(unsigned char LocalUserNum, int CategoryMask)
{
	static UFunction* pFnReadCriticalDownloadableContentList = NULL;

	if (!pFnReadCriticalDownloadableContentList)
		pFnReadCriticalDownloadableContentList = (UFunction*)UObject::GObjects()->Data[47845];

	UOnlineSubsystemSteamworks_execReadCriticalDownloadableContentList_Parms ReadCriticalDownloadableContentList_Parms;
	ReadCriticalDownloadableContentList_Parms.LocalUserNum = LocalUserNum;
	ReadCriticalDownloadableContentList_Parms.CategoryMask = CategoryMask;

	this->ProcessEvent(pFnReadCriticalDownloadableContentList, &ReadCriticalDownloadableContentList_Parms, NULL);

	return ReadCriticalDownloadableContentList_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCriticalDownloadableContentListComplete
// [0x00020000]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadCriticalDownloadableContentListCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadCriticalDownloadableContentListComplete(unsigned char LocalUserNum, struct FScriptDelegate ReadCriticalDownloadableContentListCompleteDelegate)
{
	static UFunction* pFnClearReadCriticalDownloadableContentListComplete = NULL;

	if (!pFnClearReadCriticalDownloadableContentListComplete)
		pFnClearReadCriticalDownloadableContentListComplete = (UFunction*)UObject::GObjects()->Data[47842];

	UOnlineSubsystemSteamworks_execClearReadCriticalDownloadableContentListComplete_Parms ClearReadCriticalDownloadableContentListComplete_Parms;
	ClearReadCriticalDownloadableContentListComplete_Parms.LocalUserNum = LocalUserNum;
	memcpy(&ClearReadCriticalDownloadableContentListComplete_Parms.ReadCriticalDownloadableContentListCompleteDelegate, &ReadCriticalDownloadableContentListCompleteDelegate, 0xC);

	this->ProcessEvent(pFnClearReadCriticalDownloadableContentListComplete, &ClearReadCriticalDownloadableContentListComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCriticalDownloadableContentListComplete
// [0x00020000]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadCriticalDownloadableContentListCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadCriticalDownloadableContentListComplete(unsigned char LocalUserNum, struct FScriptDelegate ReadCriticalDownloadableContentListCompleteDelegate)
{
	static UFunction* pFnAddReadCriticalDownloadableContentListComplete = NULL;

	if (!pFnAddReadCriticalDownloadableContentListComplete)
		pFnAddReadCriticalDownloadableContentListComplete = (UFunction*)UObject::GObjects()->Data[47839];

	UOnlineSubsystemSteamworks_execAddReadCriticalDownloadableContentListComplete_Parms AddReadCriticalDownloadableContentListComplete_Parms;
	AddReadCriticalDownloadableContentListComplete_Parms.LocalUserNum = LocalUserNum;
	memcpy(&AddReadCriticalDownloadableContentListComplete_Parms.ReadCriticalDownloadableContentListCompleteDelegate, &ReadCriticalDownloadableContentListCompleteDelegate, 0xC);

	this->ProcessEvent(pFnAddReadCriticalDownloadableContentListComplete, &AddReadCriticalDownloadableContentListComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCriticalDownloadableContentListComplete
// [0x00120000]
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnReadCriticalDownloadableContentListComplete(unsigned long bWasSuccessful)
{
	static UFunction* pFnOnReadCriticalDownloadableContentListComplete = NULL;

	if (!pFnOnReadCriticalDownloadableContentListComplete)
		pFnOnReadCriticalDownloadableContentListComplete = (UFunction*)UObject::GObjects()->Data[47837];

	UOnlineSubsystemSteamworks_execOnReadCriticalDownloadableContentListComplete_Parms OnReadCriticalDownloadableContentListComplete_Parms;
	OnReadCriticalDownloadableContentListComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnReadCriticalDownloadableContentListComplete, &OnReadCriticalDownloadableContentListComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetHiddenDownloadableContentList
// [0x00420000]
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FMarketplaceContent > DLCList                        ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

unsigned char UOnlineSubsystemSteamworks::GetHiddenDownloadableContentList(unsigned char LocalUserNum, TArray< struct FMarketplaceContent >* DLCList)
{
	static UFunction* pFnGetHiddenDownloadableContentList = NULL;

	if (!pFnGetHiddenDownloadableContentList)
		pFnGetHiddenDownloadableContentList = (UFunction*)UObject::GObjects()->Data[47832];

	UOnlineSubsystemSteamworks_execGetHiddenDownloadableContentList_Parms GetHiddenDownloadableContentList_Parms;
	GetHiddenDownloadableContentList_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnGetHiddenDownloadableContentList, &GetHiddenDownloadableContentList_Parms, NULL);

	if (DLCList)
		memcpy(DLCList, &GetHiddenDownloadableContentList_Parms.DLCList, 0xC);

	return GetHiddenDownloadableContentList_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadHiddenDownloadableContentList
// [0x00020000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< int >                  OfferIds                       ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ReadHiddenDownloadableContentList(unsigned char LocalUserNum, TArray< int > OfferIds)
{
	static UFunction* pFnReadHiddenDownloadableContentList = NULL;

	if (!pFnReadHiddenDownloadableContentList)
		pFnReadHiddenDownloadableContentList = (UFunction*)UObject::GObjects()->Data[47827];

	UOnlineSubsystemSteamworks_execReadHiddenDownloadableContentList_Parms ReadHiddenDownloadableContentList_Parms;
	ReadHiddenDownloadableContentList_Parms.LocalUserNum = LocalUserNum;
	memcpy(&ReadHiddenDownloadableContentList_Parms.OfferIds, &OfferIds, 0xC);

	this->ProcessEvent(pFnReadHiddenDownloadableContentList, &ReadHiddenDownloadableContentList_Parms, NULL);

	return ReadHiddenDownloadableContentList_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadHiddenDownloadableContentListComplete
// [0x00020000]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadHiddenDownloadableContentListCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadHiddenDownloadableContentListComplete(unsigned char LocalUserNum, struct FScriptDelegate ReadHiddenDownloadableContentListCompleteDelegate)
{
	static UFunction* pFnClearReadHiddenDownloadableContentListComplete = NULL;

	if (!pFnClearReadHiddenDownloadableContentListComplete)
		pFnClearReadHiddenDownloadableContentListComplete = (UFunction*)UObject::GObjects()->Data[47824];

	UOnlineSubsystemSteamworks_execClearReadHiddenDownloadableContentListComplete_Parms ClearReadHiddenDownloadableContentListComplete_Parms;
	ClearReadHiddenDownloadableContentListComplete_Parms.LocalUserNum = LocalUserNum;
	memcpy(&ClearReadHiddenDownloadableContentListComplete_Parms.ReadHiddenDownloadableContentListCompleteDelegate, &ReadHiddenDownloadableContentListCompleteDelegate, 0xC);

	this->ProcessEvent(pFnClearReadHiddenDownloadableContentListComplete, &ClearReadHiddenDownloadableContentListComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadHiddenDownloadableContentListComplete
// [0x00020000]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadHiddenDownloadableContentListCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadHiddenDownloadableContentListComplete(unsigned char LocalUserNum, struct FScriptDelegate ReadHiddenDownloadableContentListCompleteDelegate)
{
	static UFunction* pFnAddReadHiddenDownloadableContentListComplete = NULL;

	if (!pFnAddReadHiddenDownloadableContentListComplete)
		pFnAddReadHiddenDownloadableContentListComplete = (UFunction*)UObject::GObjects()->Data[47821];

	UOnlineSubsystemSteamworks_execAddReadHiddenDownloadableContentListComplete_Parms AddReadHiddenDownloadableContentListComplete_Parms;
	AddReadHiddenDownloadableContentListComplete_Parms.LocalUserNum = LocalUserNum;
	memcpy(&AddReadHiddenDownloadableContentListComplete_Parms.ReadHiddenDownloadableContentListCompleteDelegate, &ReadHiddenDownloadableContentListCompleteDelegate, 0xC);

	this->ProcessEvent(pFnAddReadHiddenDownloadableContentListComplete, &AddReadHiddenDownloadableContentListComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadHiddenDownloadableContentListComplete
// [0x00120000]
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnReadHiddenDownloadableContentListComplete(unsigned long bWasSuccessful)
{
	static UFunction* pFnOnReadHiddenDownloadableContentListComplete = NULL;

	if (!pFnOnReadHiddenDownloadableContentListComplete)
		pFnOnReadHiddenDownloadableContentListComplete = (UFunction*)UObject::GObjects()->Data[47819];

	UOnlineSubsystemSteamworks_execOnReadHiddenDownloadableContentListComplete_Parms OnReadHiddenDownloadableContentListComplete_Parms;
	OnReadHiddenDownloadableContentListComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnReadHiddenDownloadableContentListComplete, &OnReadHiddenDownloadableContentListComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDownloadableContentList
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FMarketplaceContent > DLCList                        ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

unsigned char UOnlineSubsystemSteamworks::GetDownloadableContentList(unsigned char LocalUserNum, TArray< struct FMarketplaceContent >* DLCList)
{
	static UFunction* pFnGetDownloadableContentList = NULL;

	if (!pFnGetDownloadableContentList)
		pFnGetDownloadableContentList = (UFunction*)UObject::GObjects()->Data[47814];

	UOnlineSubsystemSteamworks_execGetDownloadableContentList_Parms GetDownloadableContentList_Parms;
	GetDownloadableContentList_Parms.LocalUserNum = LocalUserNum;

	pFnGetDownloadableContentList->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetDownloadableContentList, &GetDownloadableContentList_Parms, NULL);

	pFnGetDownloadableContentList->FunctionFlags |= 0x400;

	if (DLCList)
		memcpy(DLCList, &GetDownloadableContentList_Parms.DLCList, 0xC);

	return GetDownloadableContentList_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadDownloadableContentList
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            CategoryMask                   ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadDownloadableContentList(unsigned char LocalUserNum, int CategoryMask)
{
	static UFunction* pFnReadDownloadableContentList = NULL;

	if (!pFnReadDownloadableContentList)
		pFnReadDownloadableContentList = (UFunction*)UObject::GObjects()->Data[47810];

	UOnlineSubsystemSteamworks_execReadDownloadableContentList_Parms ReadDownloadableContentList_Parms;
	ReadDownloadableContentList_Parms.LocalUserNum = LocalUserNum;
	ReadDownloadableContentList_Parms.CategoryMask = CategoryMask;

	pFnReadDownloadableContentList->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnReadDownloadableContentList, &ReadDownloadableContentList_Parms, NULL);

	pFnReadDownloadableContentList->FunctionFlags |= 0x400;

	return ReadDownloadableContentList_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadDownloadableContentListComplete
// [0x00020002]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadDownloadableContentListCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadDownloadableContentListComplete(unsigned char LocalUserNum, struct FScriptDelegate ReadDownloadableContentListCompleteDelegate)
{
	static UFunction* pFnClearReadDownloadableContentListComplete = NULL;

	if (!pFnClearReadDownloadableContentListComplete)
		pFnClearReadDownloadableContentListComplete = (UFunction*)UObject::GObjects()->Data[47807];

	UOnlineSubsystemSteamworks_execClearReadDownloadableContentListComplete_Parms ClearReadDownloadableContentListComplete_Parms;
	ClearReadDownloadableContentListComplete_Parms.LocalUserNum = LocalUserNum;
	memcpy(&ClearReadDownloadableContentListComplete_Parms.ReadDownloadableContentListCompleteDelegate, &ReadDownloadableContentListCompleteDelegate, 0xC);

	this->ProcessEvent(pFnClearReadDownloadableContentListComplete, &ClearReadDownloadableContentListComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadDownloadableContentListComplete
// [0x00020002]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadDownloadableContentListCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadDownloadableContentListComplete(unsigned char LocalUserNum, struct FScriptDelegate ReadDownloadableContentListCompleteDelegate)
{
	static UFunction* pFnAddReadDownloadableContentListComplete = NULL;

	if (!pFnAddReadDownloadableContentListComplete)
		pFnAddReadDownloadableContentListComplete = (UFunction*)UObject::GObjects()->Data[47803];

	UOnlineSubsystemSteamworks_execAddReadDownloadableContentListComplete_Parms AddReadDownloadableContentListComplete_Parms;
	AddReadDownloadableContentListComplete_Parms.LocalUserNum = LocalUserNum;
	memcpy(&AddReadDownloadableContentListComplete_Parms.ReadDownloadableContentListCompleteDelegate, &ReadDownloadableContentListCompleteDelegate, 0xC);

	this->ProcessEvent(pFnAddReadDownloadableContentListComplete, &AddReadDownloadableContentListComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadDownloadableContentListComplete
// [0x00120000]
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnReadDownloadableContentListComplete(unsigned long bWasSuccessful)
{
	static UFunction* pFnOnReadDownloadableContentListComplete = NULL;

	if (!pFnOnReadDownloadableContentListComplete)
		pFnOnReadDownloadableContentListComplete = (UFunction*)UObject::GObjects()->Data[46684];

	UOnlineSubsystemSteamworks_execOnReadDownloadableContentListComplete_Parms OnReadDownloadableContentListComplete_Parms;
	OnReadDownloadableContentListComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnReadDownloadableContentListComplete, &OnReadDownloadableContentListComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSaveGamesList
// [0x00420000]
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FOnlineContent > SaveGamesList                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

unsigned char UOnlineSubsystemSteamworks::GetSaveGamesList(unsigned char LocalUserNum, TArray< struct FOnlineContent >* SaveGamesList)
{
	static UFunction* pFnGetSaveGamesList = NULL;

	if (!pFnGetSaveGamesList)
		pFnGetSaveGamesList = (UFunction*)UObject::GObjects()->Data[47797];

	UOnlineSubsystemSteamworks_execGetSaveGamesList_Parms GetSaveGamesList_Parms;
	GetSaveGamesList_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnGetSaveGamesList, &GetSaveGamesList_Parms, NULL);

	if (SaveGamesList)
		memcpy(SaveGamesList, &GetSaveGamesList_Parms.SaveGamesList, 0xC);

	return GetSaveGamesList_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadSaveGamesList
// [0x00024000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            DeviceID                       ( CPF_OptionalParm | CPF_Parm )
// struct FString                 SaveFilePrefix                 ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ReadSaveGamesList(unsigned char LocalUserNum, int DeviceID, struct FString SaveFilePrefix)
{
	static UFunction* pFnReadSaveGamesList = NULL;

	if (!pFnReadSaveGamesList)
		pFnReadSaveGamesList = (UFunction*)UObject::GObjects()->Data[47792];

	UOnlineSubsystemSteamworks_execReadSaveGamesList_Parms ReadSaveGamesList_Parms;
	ReadSaveGamesList_Parms.LocalUserNum = LocalUserNum;
	ReadSaveGamesList_Parms.DeviceID = DeviceID;
	memcpy(&ReadSaveGamesList_Parms.SaveFilePrefix, &SaveFilePrefix, 0xC);

	this->ProcessEvent(pFnReadSaveGamesList, &ReadSaveGamesList_Parms, NULL);

	return ReadSaveGamesList_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadSaveGamesComplete
// [0x00020000]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadSaveGamesCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadSaveGamesComplete(unsigned char LocalUserNum, struct FScriptDelegate ReadSaveGamesCompleteDelegate)
{
	static UFunction* pFnClearReadSaveGamesComplete = NULL;

	if (!pFnClearReadSaveGamesComplete)
		pFnClearReadSaveGamesComplete = (UFunction*)UObject::GObjects()->Data[47789];

	UOnlineSubsystemSteamworks_execClearReadSaveGamesComplete_Parms ClearReadSaveGamesComplete_Parms;
	ClearReadSaveGamesComplete_Parms.LocalUserNum = LocalUserNum;
	memcpy(&ClearReadSaveGamesComplete_Parms.ReadSaveGamesCompleteDelegate, &ReadSaveGamesCompleteDelegate, 0xC);

	this->ProcessEvent(pFnClearReadSaveGamesComplete, &ClearReadSaveGamesComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadSaveGamesComplete
// [0x00020000]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadSaveGamesCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadSaveGamesComplete(unsigned char LocalUserNum, struct FScriptDelegate ReadSaveGamesCompleteDelegate)
{
	static UFunction* pFnAddReadSaveGamesComplete = NULL;

	if (!pFnAddReadSaveGamesComplete)
		pFnAddReadSaveGamesComplete = (UFunction*)UObject::GObjects()->Data[47786];

	UOnlineSubsystemSteamworks_execAddReadSaveGamesComplete_Parms AddReadSaveGamesComplete_Parms;
	AddReadSaveGamesComplete_Parms.LocalUserNum = LocalUserNum;
	memcpy(&AddReadSaveGamesComplete_Parms.ReadSaveGamesCompleteDelegate, &ReadSaveGamesCompleteDelegate, 0xC);

	this->ProcessEvent(pFnAddReadSaveGamesComplete, &AddReadSaveGamesComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadSaveGamesComplete
// [0x00120000]
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnReadSaveGamesComplete(unsigned long bWasSuccessful)
{
	static UFunction* pFnOnReadSaveGamesComplete = NULL;

	if (!pFnOnReadSaveGamesComplete)
		pFnOnReadSaveGamesComplete = (UFunction*)UObject::GObjects()->Data[47784];

	UOnlineSubsystemSteamworks_execOnReadSaveGamesComplete_Parms OnReadSaveGamesComplete_Parms;
	OnReadSaveGamesComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnReadSaveGamesComplete, &OnReadSaveGamesComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSaveGames
// [0x00020000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ClearSaveGames(unsigned char LocalUserNum)
{
	static UFunction* pFnClearSaveGames = NULL;

	if (!pFnClearSaveGames)
		pFnClearSaveGames = (UFunction*)UObject::GObjects()->Data[47781];

	UOnlineSubsystemSteamworks_execClearSaveGames_Parms ClearSaveGames_Parms;
	ClearSaveGames_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnClearSaveGames, &ClearSaveGames_Parms, NULL);

	return ClearSaveGames_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteSaveGame
// [0x00020000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            DeviceID                       ( CPF_Parm )
// struct FString                 FriendlyName                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::DeleteSaveGame(unsigned char LocalUserNum, int DeviceID, struct FString FriendlyName, struct FString Filename)
{
	static UFunction* pFnDeleteSaveGame = NULL;

	if (!pFnDeleteSaveGame)
		pFnDeleteSaveGame = (UFunction*)UObject::GObjects()->Data[47775];

	UOnlineSubsystemSteamworks_execDeleteSaveGame_Parms DeleteSaveGame_Parms;
	DeleteSaveGame_Parms.LocalUserNum = LocalUserNum;
	DeleteSaveGame_Parms.DeviceID = DeviceID;
	memcpy(&DeleteSaveGame_Parms.FriendlyName, &FriendlyName, 0xC);
	memcpy(&DeleteSaveGame_Parms.Filename, &Filename, 0xC);

	this->ProcessEvent(pFnDeleteSaveGame, &DeleteSaveGame_Parms, NULL);

	return DeleteSaveGame_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteSaveGameDataComplete
// [0x00020000]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         WriteSaveGameDataCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearWriteSaveGameDataComplete(unsigned char LocalUserNum, struct FScriptDelegate WriteSaveGameDataCompleteDelegate)
{
	static UFunction* pFnClearWriteSaveGameDataComplete = NULL;

	if (!pFnClearWriteSaveGameDataComplete)
		pFnClearWriteSaveGameDataComplete = (UFunction*)UObject::GObjects()->Data[47772];

	UOnlineSubsystemSteamworks_execClearWriteSaveGameDataComplete_Parms ClearWriteSaveGameDataComplete_Parms;
	ClearWriteSaveGameDataComplete_Parms.LocalUserNum = LocalUserNum;
	memcpy(&ClearWriteSaveGameDataComplete_Parms.WriteSaveGameDataCompleteDelegate, &WriteSaveGameDataCompleteDelegate, 0xC);

	this->ProcessEvent(pFnClearWriteSaveGameDataComplete, &ClearWriteSaveGameDataComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteSaveGameDataComplete
// [0x00020000]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         WriteSaveGameDataCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddWriteSaveGameDataComplete(unsigned char LocalUserNum, struct FScriptDelegate WriteSaveGameDataCompleteDelegate)
{
	static UFunction* pFnAddWriteSaveGameDataComplete = NULL;

	if (!pFnAddWriteSaveGameDataComplete)
		pFnAddWriteSaveGameDataComplete = (UFunction*)UObject::GObjects()->Data[47769];

	UOnlineSubsystemSteamworks_execAddWriteSaveGameDataComplete_Parms AddWriteSaveGameDataComplete_Parms;
	AddWriteSaveGameDataComplete_Parms.LocalUserNum = LocalUserNum;
	memcpy(&AddWriteSaveGameDataComplete_Parms.WriteSaveGameDataCompleteDelegate, &WriteSaveGameDataCompleteDelegate, 0xC);

	this->ProcessEvent(pFnAddWriteSaveGameDataComplete, &AddWriteSaveGameDataComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteSaveGameDataComplete
// [0x00120000]
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            DeviceID                       ( CPF_Parm )
// struct FString                 FriendlyName                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveFileName                   ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnWriteSaveGameDataComplete(unsigned long bWasSuccessful, unsigned char LocalUserNum, int DeviceID, struct FString FriendlyName, struct FString Filename, struct FString SaveFileName)
{
	static UFunction* pFnOnWriteSaveGameDataComplete = NULL;

	if (!pFnOnWriteSaveGameDataComplete)
		pFnOnWriteSaveGameDataComplete = (UFunction*)UObject::GObjects()->Data[47762];

	UOnlineSubsystemSteamworks_execOnWriteSaveGameDataComplete_Parms OnWriteSaveGameDataComplete_Parms;
	OnWriteSaveGameDataComplete_Parms.bWasSuccessful = bWasSuccessful;
	OnWriteSaveGameDataComplete_Parms.LocalUserNum = LocalUserNum;
	OnWriteSaveGameDataComplete_Parms.DeviceID = DeviceID;
	memcpy(&OnWriteSaveGameDataComplete_Parms.FriendlyName, &FriendlyName, 0xC);
	memcpy(&OnWriteSaveGameDataComplete_Parms.Filename, &Filename, 0xC);
	memcpy(&OnWriteSaveGameDataComplete_Parms.SaveFileName, &SaveFileName, 0xC);

	this->ProcessEvent(pFnOnWriteSaveGameDataComplete, &OnWriteSaveGameDataComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteSaveGameData
// [0x00420000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            DeviceID                       ( CPF_Parm )
// struct FString                 FriendlyName                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveFileName                   ( CPF_Parm | CPF_NeedCtorLink )
// TArray< unsigned char >        SaveGameData                   ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::WriteSaveGameData(unsigned char LocalUserNum, int DeviceID, struct FString FriendlyName, struct FString Filename, struct FString SaveFileName, TArray< unsigned char >* SaveGameData)
{
	static UFunction* pFnWriteSaveGameData = NULL;

	if (!pFnWriteSaveGameData)
		pFnWriteSaveGameData = (UFunction*)UObject::GObjects()->Data[47753];

	UOnlineSubsystemSteamworks_execWriteSaveGameData_Parms WriteSaveGameData_Parms;
	WriteSaveGameData_Parms.LocalUserNum = LocalUserNum;
	WriteSaveGameData_Parms.DeviceID = DeviceID;
	memcpy(&WriteSaveGameData_Parms.FriendlyName, &FriendlyName, 0xC);
	memcpy(&WriteSaveGameData_Parms.Filename, &Filename, 0xC);
	memcpy(&WriteSaveGameData_Parms.SaveFileName, &SaveFileName, 0xC);

	this->ProcessEvent(pFnWriteSaveGameData, &WriteSaveGameData_Parms, NULL);

	if (SaveGameData)
		memcpy(SaveGameData, &WriteSaveGameData_Parms.SaveGameData, 0xC);

	return WriteSaveGameData_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadSaveGameDataComplete
// [0x00020000]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadSaveGameDataCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadSaveGameDataComplete(unsigned char LocalUserNum, struct FScriptDelegate ReadSaveGameDataCompleteDelegate)
{
	static UFunction* pFnClearReadSaveGameDataComplete = NULL;

	if (!pFnClearReadSaveGameDataComplete)
		pFnClearReadSaveGameDataComplete = (UFunction*)UObject::GObjects()->Data[47750];

	UOnlineSubsystemSteamworks_execClearReadSaveGameDataComplete_Parms ClearReadSaveGameDataComplete_Parms;
	ClearReadSaveGameDataComplete_Parms.LocalUserNum = LocalUserNum;
	memcpy(&ClearReadSaveGameDataComplete_Parms.ReadSaveGameDataCompleteDelegate, &ReadSaveGameDataCompleteDelegate, 0xC);

	this->ProcessEvent(pFnClearReadSaveGameDataComplete, &ClearReadSaveGameDataComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadSaveGameDataComplete
// [0x00020000]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadSaveGameDataCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadSaveGameDataComplete(unsigned char LocalUserNum, struct FScriptDelegate ReadSaveGameDataCompleteDelegate)
{
	static UFunction* pFnAddReadSaveGameDataComplete = NULL;

	if (!pFnAddReadSaveGameDataComplete)
		pFnAddReadSaveGameDataComplete = (UFunction*)UObject::GObjects()->Data[47747];

	UOnlineSubsystemSteamworks_execAddReadSaveGameDataComplete_Parms AddReadSaveGameDataComplete_Parms;
	AddReadSaveGameDataComplete_Parms.LocalUserNum = LocalUserNum;
	memcpy(&AddReadSaveGameDataComplete_Parms.ReadSaveGameDataCompleteDelegate, &ReadSaveGameDataCompleteDelegate, 0xC);

	this->ProcessEvent(pFnAddReadSaveGameDataComplete, &AddReadSaveGameDataComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadSaveGameDataComplete
// [0x00120000]
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            DeviceID                       ( CPF_Parm )
// struct FString                 FriendlyName                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveFileName                   ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnReadSaveGameDataComplete(unsigned long bWasSuccessful, unsigned char LocalUserNum, int DeviceID, struct FString FriendlyName, struct FString Filename, struct FString SaveFileName)
{
	static UFunction* pFnOnReadSaveGameDataComplete = NULL;

	if (!pFnOnReadSaveGameDataComplete)
		pFnOnReadSaveGameDataComplete = (UFunction*)UObject::GObjects()->Data[47740];

	UOnlineSubsystemSteamworks_execOnReadSaveGameDataComplete_Parms OnReadSaveGameDataComplete_Parms;
	OnReadSaveGameDataComplete_Parms.bWasSuccessful = bWasSuccessful;
	OnReadSaveGameDataComplete_Parms.LocalUserNum = LocalUserNum;
	OnReadSaveGameDataComplete_Parms.DeviceID = DeviceID;
	memcpy(&OnReadSaveGameDataComplete_Parms.FriendlyName, &FriendlyName, 0xC);
	memcpy(&OnReadSaveGameDataComplete_Parms.Filename, &Filename, 0xC);
	memcpy(&OnReadSaveGameDataComplete_Parms.SaveFileName, &SaveFileName, 0xC);

	this->ProcessEvent(pFnOnReadSaveGameDataComplete, &OnReadSaveGameDataComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSaveGameData
// [0x00420000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            DeviceID                       ( CPF_Parm )
// struct FString                 FriendlyName                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveFileName                   ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  bIsValid                       ( CPF_Parm | CPF_OutParm )
// TArray< unsigned char >        SaveGameData                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::GetSaveGameData(unsigned char LocalUserNum, int DeviceID, struct FString FriendlyName, struct FString Filename, struct FString SaveFileName, unsigned char* bIsValid, TArray< unsigned char >* SaveGameData)
{
	static UFunction* pFnGetSaveGameData = NULL;

	if (!pFnGetSaveGameData)
		pFnGetSaveGameData = (UFunction*)UObject::GObjects()->Data[47730];

	UOnlineSubsystemSteamworks_execGetSaveGameData_Parms GetSaveGameData_Parms;
	GetSaveGameData_Parms.LocalUserNum = LocalUserNum;
	GetSaveGameData_Parms.DeviceID = DeviceID;
	memcpy(&GetSaveGameData_Parms.FriendlyName, &FriendlyName, 0xC);
	memcpy(&GetSaveGameData_Parms.Filename, &Filename, 0xC);
	memcpy(&GetSaveGameData_Parms.SaveFileName, &SaveFileName, 0xC);

	this->ProcessEvent(pFnGetSaveGameData, &GetSaveGameData_Parms, NULL);

	if (bIsValid)
		*bIsValid = GetSaveGameData_Parms.bIsValid;

	if (SaveGameData)
		memcpy(SaveGameData, &GetSaveGameData_Parms.SaveGameData, 0xC);

	return GetSaveGameData_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadSaveGameData
// [0x00020000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            DeviceID                       ( CPF_Parm )
// struct FString                 FriendlyName                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveFileName                   ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ReadSaveGameData(unsigned char LocalUserNum, int DeviceID, struct FString FriendlyName, struct FString Filename, struct FString SaveFileName)
{
	static UFunction* pFnReadSaveGameData = NULL;

	if (!pFnReadSaveGameData)
		pFnReadSaveGameData = (UFunction*)UObject::GObjects()->Data[47723];

	UOnlineSubsystemSteamworks_execReadSaveGameData_Parms ReadSaveGameData_Parms;
	ReadSaveGameData_Parms.LocalUserNum = LocalUserNum;
	ReadSaveGameData_Parms.DeviceID = DeviceID;
	memcpy(&ReadSaveGameData_Parms.FriendlyName, &FriendlyName, 0xC);
	memcpy(&ReadSaveGameData_Parms.Filename, &Filename, 0xC);
	memcpy(&ReadSaveGameData_Parms.SaveFileName, &SaveFileName, 0xC);

	this->ProcessEvent(pFnReadSaveGameData, &ReadSaveGameData_Parms, NULL);

	return ReadSaveGameData_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetAvailableDownloadCounts
// [0x00420000]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            NewDownloads                   ( CPF_Parm | CPF_OutParm )
// int                            TotalDownloads                 ( CPF_Parm | CPF_OutParm )

void UOnlineSubsystemSteamworks::GetAvailableDownloadCounts(unsigned char LocalUserNum, int* NewDownloads, int* TotalDownloads)
{
	static UFunction* pFnGetAvailableDownloadCounts = NULL;

	if (!pFnGetAvailableDownloadCounts)
		pFnGetAvailableDownloadCounts = (UFunction*)UObject::GObjects()->Data[47719];

	UOnlineSubsystemSteamworks_execGetAvailableDownloadCounts_Parms GetAvailableDownloadCounts_Parms;
	GetAvailableDownloadCounts_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnGetAvailableDownloadCounts, &GetAvailableDownloadCounts_Parms, NULL);

	if (NewDownloads)
		*NewDownloads = GetAvailableDownloadCounts_Parms.NewDownloads;

	if (TotalDownloads)
		*TotalDownloads = GetAvailableDownloadCounts_Parms.TotalDownloads;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearQueryAvailableDownloadsComplete
// [0x00020000]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         QueryDownloadsDelegate         ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearQueryAvailableDownloadsComplete(unsigned char LocalUserNum, struct FScriptDelegate QueryDownloadsDelegate)
{
	static UFunction* pFnClearQueryAvailableDownloadsComplete = NULL;

	if (!pFnClearQueryAvailableDownloadsComplete)
		pFnClearQueryAvailableDownloadsComplete = (UFunction*)UObject::GObjects()->Data[47716];

	UOnlineSubsystemSteamworks_execClearQueryAvailableDownloadsComplete_Parms ClearQueryAvailableDownloadsComplete_Parms;
	ClearQueryAvailableDownloadsComplete_Parms.LocalUserNum = LocalUserNum;
	memcpy(&ClearQueryAvailableDownloadsComplete_Parms.QueryDownloadsDelegate, &QueryDownloadsDelegate, 0xC);

	this->ProcessEvent(pFnClearQueryAvailableDownloadsComplete, &ClearQueryAvailableDownloadsComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddQueryAvailableDownloadsComplete
// [0x00020000]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         QueryDownloadsDelegate         ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddQueryAvailableDownloadsComplete(unsigned char LocalUserNum, struct FScriptDelegate QueryDownloadsDelegate)
{
	static UFunction* pFnAddQueryAvailableDownloadsComplete = NULL;

	if (!pFnAddQueryAvailableDownloadsComplete)
		pFnAddQueryAvailableDownloadsComplete = (UFunction*)UObject::GObjects()->Data[47713];

	UOnlineSubsystemSteamworks_execAddQueryAvailableDownloadsComplete_Parms AddQueryAvailableDownloadsComplete_Parms;
	AddQueryAvailableDownloadsComplete_Parms.LocalUserNum = LocalUserNum;
	memcpy(&AddQueryAvailableDownloadsComplete_Parms.QueryDownloadsDelegate, &QueryDownloadsDelegate, 0xC);

	this->ProcessEvent(pFnAddQueryAvailableDownloadsComplete, &AddQueryAvailableDownloadsComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnQueryAvailableDownloadsComplete
// [0x00120000]
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnQueryAvailableDownloadsComplete(unsigned long bWasSuccessful)
{
	static UFunction* pFnOnQueryAvailableDownloadsComplete = NULL;

	if (!pFnOnQueryAvailableDownloadsComplete)
		pFnOnQueryAvailableDownloadsComplete = (UFunction*)UObject::GObjects()->Data[47711];

	UOnlineSubsystemSteamworks_execOnQueryAvailableDownloadsComplete_Parms OnQueryAvailableDownloadsComplete_Parms;
	OnQueryAvailableDownloadsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnQueryAvailableDownloadsComplete, &OnQueryAvailableDownloadsComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.QueryAvailableDownloads
// [0x00024000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            CategoryMask                   ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::QueryAvailableDownloads(unsigned char LocalUserNum, int CategoryMask)
{
	static UFunction* pFnQueryAvailableDownloads = NULL;

	if (!pFnQueryAvailableDownloads)
		pFnQueryAvailableDownloads = (UFunction*)UObject::GObjects()->Data[47707];

	UOnlineSubsystemSteamworks_execQueryAvailableDownloads_Parms QueryAvailableDownloads_Parms;
	QueryAvailableDownloads_Parms.LocalUserNum = LocalUserNum;
	QueryAvailableDownloads_Parms.CategoryMask = CategoryMask;

	this->ProcessEvent(pFnQueryAvailableDownloads, &QueryAvailableDownloads_Parms, NULL);

	return QueryAvailableDownloads_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCrossTitleSaveGames
// [0x00020000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ClearCrossTitleSaveGames(unsigned char LocalUserNum)
{
	static UFunction* pFnClearCrossTitleSaveGames = NULL;

	if (!pFnClearCrossTitleSaveGames)
		pFnClearCrossTitleSaveGames = (UFunction*)UObject::GObjects()->Data[47704];

	UOnlineSubsystemSteamworks_execClearCrossTitleSaveGames_Parms ClearCrossTitleSaveGames_Parms;
	ClearCrossTitleSaveGames_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnClearCrossTitleSaveGames, &ClearCrossTitleSaveGames_Parms, NULL);

	return ClearCrossTitleSaveGames_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCrossTitleSaveGameDataComplete
// [0x00020000]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadSaveGameDataCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadCrossTitleSaveGameDataComplete(unsigned char LocalUserNum, struct FScriptDelegate ReadSaveGameDataCompleteDelegate)
{
	static UFunction* pFnClearReadCrossTitleSaveGameDataComplete = NULL;

	if (!pFnClearReadCrossTitleSaveGameDataComplete)
		pFnClearReadCrossTitleSaveGameDataComplete = (UFunction*)UObject::GObjects()->Data[47701];

	UOnlineSubsystemSteamworks_execClearReadCrossTitleSaveGameDataComplete_Parms ClearReadCrossTitleSaveGameDataComplete_Parms;
	ClearReadCrossTitleSaveGameDataComplete_Parms.LocalUserNum = LocalUserNum;
	memcpy(&ClearReadCrossTitleSaveGameDataComplete_Parms.ReadSaveGameDataCompleteDelegate, &ReadSaveGameDataCompleteDelegate, 0xC);

	this->ProcessEvent(pFnClearReadCrossTitleSaveGameDataComplete, &ClearReadCrossTitleSaveGameDataComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCrossTitleSaveGameDataComplete
// [0x00020000]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadSaveGameDataCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadCrossTitleSaveGameDataComplete(unsigned char LocalUserNum, struct FScriptDelegate ReadSaveGameDataCompleteDelegate)
{
	static UFunction* pFnAddReadCrossTitleSaveGameDataComplete = NULL;

	if (!pFnAddReadCrossTitleSaveGameDataComplete)
		pFnAddReadCrossTitleSaveGameDataComplete = (UFunction*)UObject::GObjects()->Data[47698];

	UOnlineSubsystemSteamworks_execAddReadCrossTitleSaveGameDataComplete_Parms AddReadCrossTitleSaveGameDataComplete_Parms;
	AddReadCrossTitleSaveGameDataComplete_Parms.LocalUserNum = LocalUserNum;
	memcpy(&AddReadCrossTitleSaveGameDataComplete_Parms.ReadSaveGameDataCompleteDelegate, &ReadSaveGameDataCompleteDelegate, 0xC);

	this->ProcessEvent(pFnAddReadCrossTitleSaveGameDataComplete, &AddReadCrossTitleSaveGameDataComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCrossTitleSaveGameDataComplete
// [0x00120000]
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            DeviceID                       ( CPF_Parm )
// int                            TitleId                        ( CPF_Parm )
// struct FString                 FriendlyName                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveFileName                   ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnReadCrossTitleSaveGameDataComplete(unsigned long bWasSuccessful, unsigned char LocalUserNum, int DeviceID, int TitleId, struct FString FriendlyName, struct FString Filename, struct FString SaveFileName)
{
	static UFunction* pFnOnReadCrossTitleSaveGameDataComplete = NULL;

	if (!pFnOnReadCrossTitleSaveGameDataComplete)
		pFnOnReadCrossTitleSaveGameDataComplete = (UFunction*)UObject::GObjects()->Data[47690];

	UOnlineSubsystemSteamworks_execOnReadCrossTitleSaveGameDataComplete_Parms OnReadCrossTitleSaveGameDataComplete_Parms;
	OnReadCrossTitleSaveGameDataComplete_Parms.bWasSuccessful = bWasSuccessful;
	OnReadCrossTitleSaveGameDataComplete_Parms.LocalUserNum = LocalUserNum;
	OnReadCrossTitleSaveGameDataComplete_Parms.DeviceID = DeviceID;
	OnReadCrossTitleSaveGameDataComplete_Parms.TitleId = TitleId;
	memcpy(&OnReadCrossTitleSaveGameDataComplete_Parms.FriendlyName, &FriendlyName, 0xC);
	memcpy(&OnReadCrossTitleSaveGameDataComplete_Parms.Filename, &Filename, 0xC);
	memcpy(&OnReadCrossTitleSaveGameDataComplete_Parms.SaveFileName, &SaveFileName, 0xC);

	this->ProcessEvent(pFnOnReadCrossTitleSaveGameDataComplete, &OnReadCrossTitleSaveGameDataComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCrossTitleSaveGameData
// [0x00420000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            DeviceID                       ( CPF_Parm )
// int                            TitleId                        ( CPF_Parm )
// struct FString                 FriendlyName                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveFileName                   ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  bIsValid                       ( CPF_Parm | CPF_OutParm )
// TArray< unsigned char >        SaveGameData                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::GetCrossTitleSaveGameData(unsigned char LocalUserNum, int DeviceID, int TitleId, struct FString FriendlyName, struct FString Filename, struct FString SaveFileName, unsigned char* bIsValid, TArray< unsigned char >* SaveGameData)
{
	static UFunction* pFnGetCrossTitleSaveGameData = NULL;

	if (!pFnGetCrossTitleSaveGameData)
		pFnGetCrossTitleSaveGameData = (UFunction*)UObject::GObjects()->Data[47679];

	UOnlineSubsystemSteamworks_execGetCrossTitleSaveGameData_Parms GetCrossTitleSaveGameData_Parms;
	GetCrossTitleSaveGameData_Parms.LocalUserNum = LocalUserNum;
	GetCrossTitleSaveGameData_Parms.DeviceID = DeviceID;
	GetCrossTitleSaveGameData_Parms.TitleId = TitleId;
	memcpy(&GetCrossTitleSaveGameData_Parms.FriendlyName, &FriendlyName, 0xC);
	memcpy(&GetCrossTitleSaveGameData_Parms.Filename, &Filename, 0xC);
	memcpy(&GetCrossTitleSaveGameData_Parms.SaveFileName, &SaveFileName, 0xC);

	this->ProcessEvent(pFnGetCrossTitleSaveGameData, &GetCrossTitleSaveGameData_Parms, NULL);

	if (bIsValid)
		*bIsValid = GetCrossTitleSaveGameData_Parms.bIsValid;

	if (SaveGameData)
		memcpy(SaveGameData, &GetCrossTitleSaveGameData_Parms.SaveGameData, 0xC);

	return GetCrossTitleSaveGameData_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCrossTitleSaveGameData
// [0x00020000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            DeviceID                       ( CPF_Parm )
// int                            TitleId                        ( CPF_Parm )
// struct FString                 FriendlyName                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveFileName                   ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ReadCrossTitleSaveGameData(unsigned char LocalUserNum, int DeviceID, int TitleId, struct FString FriendlyName, struct FString Filename, struct FString SaveFileName)
{
	static UFunction* pFnReadCrossTitleSaveGameData = NULL;

	if (!pFnReadCrossTitleSaveGameData)
		pFnReadCrossTitleSaveGameData = (UFunction*)UObject::GObjects()->Data[47671];

	UOnlineSubsystemSteamworks_execReadCrossTitleSaveGameData_Parms ReadCrossTitleSaveGameData_Parms;
	ReadCrossTitleSaveGameData_Parms.LocalUserNum = LocalUserNum;
	ReadCrossTitleSaveGameData_Parms.DeviceID = DeviceID;
	ReadCrossTitleSaveGameData_Parms.TitleId = TitleId;
	memcpy(&ReadCrossTitleSaveGameData_Parms.FriendlyName, &FriendlyName, 0xC);
	memcpy(&ReadCrossTitleSaveGameData_Parms.Filename, &Filename, 0xC);
	memcpy(&ReadCrossTitleSaveGameData_Parms.SaveFileName, &SaveFileName, 0xC);

	this->ProcessEvent(pFnReadCrossTitleSaveGameData, &ReadCrossTitleSaveGameData_Parms, NULL);

	return ReadCrossTitleSaveGameData_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCrossTitleContentCompleteDelegate
// [0x00020000]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  ContentType                    ( CPF_Parm )
// struct FScriptDelegate         ReadContentCompleteDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadCrossTitleContentCompleteDelegate(unsigned char LocalUserNum, unsigned char ContentType, struct FScriptDelegate ReadContentCompleteDelegate)
{
	static UFunction* pFnClearReadCrossTitleContentCompleteDelegate = NULL;

	if (!pFnClearReadCrossTitleContentCompleteDelegate)
		pFnClearReadCrossTitleContentCompleteDelegate = (UFunction*)UObject::GObjects()->Data[47667];

	UOnlineSubsystemSteamworks_execClearReadCrossTitleContentCompleteDelegate_Parms ClearReadCrossTitleContentCompleteDelegate_Parms;
	ClearReadCrossTitleContentCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	ClearReadCrossTitleContentCompleteDelegate_Parms.ContentType = ContentType;
	memcpy(&ClearReadCrossTitleContentCompleteDelegate_Parms.ReadContentCompleteDelegate, &ReadContentCompleteDelegate, 0xC);

	this->ProcessEvent(pFnClearReadCrossTitleContentCompleteDelegate, &ClearReadCrossTitleContentCompleteDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCrossTitleContentCompleteDelegate
// [0x00020000]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  ContentType                    ( CPF_Parm )
// struct FScriptDelegate         ReadContentCompleteDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadCrossTitleContentCompleteDelegate(unsigned char LocalUserNum, unsigned char ContentType, struct FScriptDelegate ReadContentCompleteDelegate)
{
	static UFunction* pFnAddReadCrossTitleContentCompleteDelegate = NULL;

	if (!pFnAddReadCrossTitleContentCompleteDelegate)
		pFnAddReadCrossTitleContentCompleteDelegate = (UFunction*)UObject::GObjects()->Data[47663];

	UOnlineSubsystemSteamworks_execAddReadCrossTitleContentCompleteDelegate_Parms AddReadCrossTitleContentCompleteDelegate_Parms;
	AddReadCrossTitleContentCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	AddReadCrossTitleContentCompleteDelegate_Parms.ContentType = ContentType;
	memcpy(&AddReadCrossTitleContentCompleteDelegate_Parms.ReadContentCompleteDelegate, &ReadContentCompleteDelegate, 0xC);

	this->ProcessEvent(pFnAddReadCrossTitleContentCompleteDelegate, &AddReadCrossTitleContentCompleteDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCrossTitleContentComplete
// [0x00120000]
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnReadCrossTitleContentComplete(unsigned long bWasSuccessful)
{
	static UFunction* pFnOnReadCrossTitleContentComplete = NULL;

	if (!pFnOnReadCrossTitleContentComplete)
		pFnOnReadCrossTitleContentComplete = (UFunction*)UObject::GObjects()->Data[47661];

	UOnlineSubsystemSteamworks_execOnReadCrossTitleContentComplete_Parms OnReadCrossTitleContentComplete_Parms;
	OnReadCrossTitleContentComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnReadCrossTitleContentComplete, &OnReadCrossTitleContentComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCrossTitleContentList
// [0x00420000]
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  ContentType                    ( CPF_Parm )
// TArray< struct FOnlineCrossTitleContent > ContentList                    ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

unsigned char UOnlineSubsystemSteamworks::GetCrossTitleContentList(unsigned char LocalUserNum, unsigned char ContentType, TArray< struct FOnlineCrossTitleContent >* ContentList)
{
	static UFunction* pFnGetCrossTitleContentList = NULL;

	if (!pFnGetCrossTitleContentList)
		pFnGetCrossTitleContentList = (UFunction*)UObject::GObjects()->Data[47655];

	UOnlineSubsystemSteamworks_execGetCrossTitleContentList_Parms GetCrossTitleContentList_Parms;
	GetCrossTitleContentList_Parms.LocalUserNum = LocalUserNum;
	GetCrossTitleContentList_Parms.ContentType = ContentType;

	this->ProcessEvent(pFnGetCrossTitleContentList, &GetCrossTitleContentList_Parms, NULL);

	if (ContentList)
		memcpy(ContentList, &GetCrossTitleContentList_Parms.ContentList, 0xC);

	return GetCrossTitleContentList_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCrossTitleContentList
// [0x00020000]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  ContentType                    ( CPF_Parm )

void UOnlineSubsystemSteamworks::ClearCrossTitleContentList(unsigned char LocalUserNum, unsigned char ContentType)
{
	static UFunction* pFnClearCrossTitleContentList = NULL;

	if (!pFnClearCrossTitleContentList)
		pFnClearCrossTitleContentList = (UFunction*)UObject::GObjects()->Data[47652];

	UOnlineSubsystemSteamworks_execClearCrossTitleContentList_Parms ClearCrossTitleContentList_Parms;
	ClearCrossTitleContentList_Parms.LocalUserNum = LocalUserNum;
	ClearCrossTitleContentList_Parms.ContentType = ContentType;

	this->ProcessEvent(pFnClearCrossTitleContentList, &ClearCrossTitleContentList_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCrossTitleContentList
// [0x00024000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  ContentType                    ( CPF_Parm )
// int                            TitleId                        ( CPF_OptionalParm | CPF_Parm )
// int                            DeviceID                       ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadCrossTitleContentList(unsigned char LocalUserNum, unsigned char ContentType, int TitleId, int DeviceID)
{
	static UFunction* pFnReadCrossTitleContentList = NULL;

	if (!pFnReadCrossTitleContentList)
		pFnReadCrossTitleContentList = (UFunction*)UObject::GObjects()->Data[47646];

	UOnlineSubsystemSteamworks_execReadCrossTitleContentList_Parms ReadCrossTitleContentList_Parms;
	ReadCrossTitleContentList_Parms.LocalUserNum = LocalUserNum;
	ReadCrossTitleContentList_Parms.ContentType = ContentType;
	ReadCrossTitleContentList_Parms.TitleId = TitleId;
	ReadCrossTitleContentList_Parms.DeviceID = DeviceID;

	this->ProcessEvent(pFnReadCrossTitleContentList, &ReadCrossTitleContentList_Parms, NULL);

	return ReadCrossTitleContentList_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetContentList
// [0x00420000]
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  ContentType                    ( CPF_Parm )
// TArray< struct FOnlineContent > ContentList                    ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

unsigned char UOnlineSubsystemSteamworks::GetContentList(unsigned char LocalUserNum, unsigned char ContentType, TArray< struct FOnlineContent >* ContentList)
{
	static UFunction* pFnGetContentList = NULL;

	if (!pFnGetContentList)
		pFnGetContentList = (UFunction*)UObject::GObjects()->Data[47640];

	UOnlineSubsystemSteamworks_execGetContentList_Parms GetContentList_Parms;
	GetContentList_Parms.LocalUserNum = LocalUserNum;
	GetContentList_Parms.ContentType = ContentType;

	this->ProcessEvent(pFnGetContentList, &GetContentList_Parms, NULL);

	if (ContentList)
		memcpy(ContentList, &GetContentList_Parms.ContentList, 0xC);

	return GetContentList_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearContentList
// [0x00020000]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  ContentType                    ( CPF_Parm )

void UOnlineSubsystemSteamworks::ClearContentList(unsigned char LocalUserNum, unsigned char ContentType)
{
	static UFunction* pFnClearContentList = NULL;

	if (!pFnClearContentList)
		pFnClearContentList = (UFunction*)UObject::GObjects()->Data[47637];

	UOnlineSubsystemSteamworks_execClearContentList_Parms ClearContentList_Parms;
	ClearContentList_Parms.LocalUserNum = LocalUserNum;
	ClearContentList_Parms.ContentType = ContentType;

	this->ProcessEvent(pFnClearContentList, &ClearContentList_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadContentList
// [0x00024000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  ContentType                    ( CPF_Parm )
// int                            DeviceID                       ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadContentList(unsigned char LocalUserNum, unsigned char ContentType, int DeviceID)
{
	static UFunction* pFnReadContentList = NULL;

	if (!pFnReadContentList)
		pFnReadContentList = (UFunction*)UObject::GObjects()->Data[47632];

	UOnlineSubsystemSteamworks_execReadContentList_Parms ReadContentList_Parms;
	ReadContentList_Parms.LocalUserNum = LocalUserNum;
	ReadContentList_Parms.ContentType = ContentType;
	ReadContentList_Parms.DeviceID = DeviceID;

	this->ProcessEvent(pFnReadContentList, &ReadContentList_Parms, NULL);

	return ReadContentList_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadContentComplete
// [0x00020000]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  ContentType                    ( CPF_Parm )
// struct FScriptDelegate         ReadContentCompleteDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadContentComplete(unsigned char LocalUserNum, unsigned char ContentType, struct FScriptDelegate ReadContentCompleteDelegate)
{
	static UFunction* pFnClearReadContentComplete = NULL;

	if (!pFnClearReadContentComplete)
		pFnClearReadContentComplete = (UFunction*)UObject::GObjects()->Data[47628];

	UOnlineSubsystemSteamworks_execClearReadContentComplete_Parms ClearReadContentComplete_Parms;
	ClearReadContentComplete_Parms.LocalUserNum = LocalUserNum;
	ClearReadContentComplete_Parms.ContentType = ContentType;
	memcpy(&ClearReadContentComplete_Parms.ReadContentCompleteDelegate, &ReadContentCompleteDelegate, 0xC);

	this->ProcessEvent(pFnClearReadContentComplete, &ClearReadContentComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadContentComplete
// [0x00020000]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  ContentType                    ( CPF_Parm )
// struct FScriptDelegate         ReadContentCompleteDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadContentComplete(unsigned char LocalUserNum, unsigned char ContentType, struct FScriptDelegate ReadContentCompleteDelegate)
{
	static UFunction* pFnAddReadContentComplete = NULL;

	if (!pFnAddReadContentComplete)
		pFnAddReadContentComplete = (UFunction*)UObject::GObjects()->Data[47624];

	UOnlineSubsystemSteamworks_execAddReadContentComplete_Parms AddReadContentComplete_Parms;
	AddReadContentComplete_Parms.LocalUserNum = LocalUserNum;
	AddReadContentComplete_Parms.ContentType = ContentType;
	memcpy(&AddReadContentComplete_Parms.ReadContentCompleteDelegate, &ReadContentCompleteDelegate, 0xC);

	this->ProcessEvent(pFnAddReadContentComplete, &AddReadContentComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadContentComplete
// [0x00120000]
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnReadContentComplete(unsigned long bWasSuccessful)
{
	static UFunction* pFnOnReadContentComplete = NULL;

	if (!pFnOnReadContentComplete)
		pFnOnReadContentComplete = (UFunction*)UObject::GObjects()->Data[47622];

	UOnlineSubsystemSteamworks_execOnReadContentComplete_Parms OnReadContentComplete_Parms;
	OnReadContentComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnReadContentComplete, &OnReadContentComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearContentChangeDelegate
// [0x00024000]
// Parameters infos:
// struct FScriptDelegate         ContentDelegate                ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  LocalUserNum                   ( CPF_OptionalParm | CPF_Parm )

void UOnlineSubsystemSteamworks::ClearContentChangeDelegate(struct FScriptDelegate ContentDelegate, unsigned char LocalUserNum)
{
	static UFunction* pFnClearContentChangeDelegate = NULL;

	if (!pFnClearContentChangeDelegate)
		pFnClearContentChangeDelegate = (UFunction*)UObject::GObjects()->Data[47619];

	UOnlineSubsystemSteamworks_execClearContentChangeDelegate_Parms ClearContentChangeDelegate_Parms;
	memcpy(&ClearContentChangeDelegate_Parms.ContentDelegate, &ContentDelegate, 0xC);
	ClearContentChangeDelegate_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnClearContentChangeDelegate, &ClearContentChangeDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddContentChangeDelegate
// [0x00024000]
// Parameters infos:
// struct FScriptDelegate         ContentDelegate                ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  LocalUserNum                   ( CPF_OptionalParm | CPF_Parm )

void UOnlineSubsystemSteamworks::AddContentChangeDelegate(struct FScriptDelegate ContentDelegate, unsigned char LocalUserNum)
{
	static UFunction* pFnAddContentChangeDelegate = NULL;

	if (!pFnAddContentChangeDelegate)
		pFnAddContentChangeDelegate = (UFunction*)UObject::GObjects()->Data[47616];

	UOnlineSubsystemSteamworks_execAddContentChangeDelegate_Parms AddContentChangeDelegate_Parms;
	memcpy(&AddContentChangeDelegate_Parms.ContentDelegate, &ContentDelegate, 0xC);
	AddContentChangeDelegate_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnAddContentChangeDelegate, &AddContentChangeDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearContentChangeDelegateEx
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         ContentDelegate                ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearContentChangeDelegateEx(struct FScriptDelegate ContentDelegate)
{
	static UFunction* pFnClearContentChangeDelegateEx = NULL;

	if (!pFnClearContentChangeDelegateEx)
		pFnClearContentChangeDelegateEx = (UFunction*)UObject::GObjects()->Data[47614];

	UOnlineSubsystemSteamworks_execClearContentChangeDelegateEx_Parms ClearContentChangeDelegateEx_Parms;
	memcpy(&ClearContentChangeDelegateEx_Parms.ContentDelegate, &ContentDelegate, 0xC);

	this->ProcessEvent(pFnClearContentChangeDelegateEx, &ClearContentChangeDelegateEx_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddContentChangeDelegateEx
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         ContentDelegate                ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddContentChangeDelegateEx(struct FScriptDelegate ContentDelegate)
{
	static UFunction* pFnAddContentChangeDelegateEx = NULL;

	if (!pFnAddContentChangeDelegateEx)
		pFnAddContentChangeDelegateEx = (UFunction*)UObject::GObjects()->Data[47611];

	UOnlineSubsystemSteamworks_execAddContentChangeDelegateEx_Parms AddContentChangeDelegateEx_Parms;
	memcpy(&AddContentChangeDelegateEx_Parms.ContentDelegate, &ContentDelegate, 0xC);

	this->ProcessEvent(pFnAddContentChangeDelegateEx, &AddContentChangeDelegateEx_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnContentChange
// [0x00120000]
// Parameters infos:

void UOnlineSubsystemSteamworks::OnContentChange()
{
	static UFunction* pFnOnContentChange = NULL;

	if (!pFnOnContentChange)
		pFnOnContentChange = (UFunction*)UObject::GObjects()->Data[47610];

	UOnlineSubsystemSteamworks_execOnContentChange_Parms OnContentChange_Parms;

	this->ProcessEvent(pFnOnContentChange, &OnContentChange_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowRedeemCodeUI
// [0x00020000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowRedeemCodeUI(unsigned char LocalUserNum)
{
	static UFunction* pFnShowRedeemCodeUI = NULL;

	if (!pFnShowRedeemCodeUI)
		pFnShowRedeemCodeUI = (UFunction*)UObject::GObjects()->Data[47607];

	UOnlineSubsystemSteamworks_execShowRedeemCodeUI_Parms ShowRedeemCodeUI_Parms;
	ShowRedeemCodeUI_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnShowRedeemCodeUI, &ShowRedeemCodeUI_Parms, NULL);

	return ShowRedeemCodeUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DumpSteamworksSessionState
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::DumpSteamworksSessionState()
{
	static UFunction* pFnDumpSteamworksSessionState = NULL;

	if (!pFnDumpSteamworksSessionState)
		pFnDumpSteamworksSessionState = (UFunction*)UObject::GObjects()->Data[47606];

	UOnlineSubsystemSteamworks_execDumpSteamworksSessionState_Parms DumpSteamworksSessionState_Parms;

	pFnDumpSteamworksSessionState->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDumpSteamworksSessionState, &DumpSteamworksSessionState_Parms, NULL);

	pFnDumpSteamworksSessionState->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DumpSessionState
// [0x00020002]
// Parameters infos:

void UOnlineSubsystemSteamworks::DumpSessionState()
{
	static UFunction* pFnDumpSessionState = NULL;

	if (!pFnDumpSessionState)
		pFnDumpSessionState = (UFunction*)UObject::GObjects()->Data[47605];

	UOnlineSubsystemSteamworks_execDumpSessionState_Parms DumpSessionState_Parms;

	this->ProcessEvent(pFnDumpSessionState, &DumpSessionState_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetVoiceVolume
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  VolType                        ( CPF_Parm )
// float                          VolumeParam                    ( CPF_Parm )

bool UOnlineSubsystemSteamworks::SetVoiceVolume(unsigned char VolType, float VolumeParam)
{
	static UFunction* pFnSetVoiceVolume = NULL;

	if (!pFnSetVoiceVolume)
		pFnSetVoiceVolume = (UFunction*)UObject::GObjects()->Data[47601];

	UOnlineSubsystemSteamworks_execSetVoiceVolume_Parms SetVoiceVolume_Parms;
	SetVoiceVolume_Parms.VolType = VolType;
	SetVoiceVolume_Parms.VolumeParam = VolumeParam;

	pFnSetVoiceVolume->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetVoiceVolume, &SetVoiceVolume_Parms, NULL);

	pFnSetVoiceVolume->FunctionFlags |= 0x400;

	return SetVoiceVolume_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockAvatarAwardCompleteDelegate
// [0x00020000]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         UnlockAvatarAwardCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearUnlockAvatarAwardCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate UnlockAvatarAwardCompleteDelegate)
{
	static UFunction* pFnClearUnlockAvatarAwardCompleteDelegate = NULL;

	if (!pFnClearUnlockAvatarAwardCompleteDelegate)
		pFnClearUnlockAvatarAwardCompleteDelegate = (UFunction*)UObject::GObjects()->Data[47598];

	UOnlineSubsystemSteamworks_execClearUnlockAvatarAwardCompleteDelegate_Parms ClearUnlockAvatarAwardCompleteDelegate_Parms;
	ClearUnlockAvatarAwardCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy(&ClearUnlockAvatarAwardCompleteDelegate_Parms.UnlockAvatarAwardCompleteDelegate, &UnlockAvatarAwardCompleteDelegate, 0xC);

	this->ProcessEvent(pFnClearUnlockAvatarAwardCompleteDelegate, &ClearUnlockAvatarAwardCompleteDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockAvatarAwardCompleteDelegate
// [0x00020000]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         UnlockAvatarAwardCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddUnlockAvatarAwardCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate UnlockAvatarAwardCompleteDelegate)
{
	static UFunction* pFnAddUnlockAvatarAwardCompleteDelegate = NULL;

	if (!pFnAddUnlockAvatarAwardCompleteDelegate)
		pFnAddUnlockAvatarAwardCompleteDelegate = (UFunction*)UObject::GObjects()->Data[47595];

	UOnlineSubsystemSteamworks_execAddUnlockAvatarAwardCompleteDelegate_Parms AddUnlockAvatarAwardCompleteDelegate_Parms;
	AddUnlockAvatarAwardCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy(&AddUnlockAvatarAwardCompleteDelegate_Parms.UnlockAvatarAwardCompleteDelegate, &UnlockAvatarAwardCompleteDelegate, 0xC);

	this->ProcessEvent(pFnAddUnlockAvatarAwardCompleteDelegate, &AddUnlockAvatarAwardCompleteDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockAvatarAwardComplete
// [0x00120000]
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnUnlockAvatarAwardComplete(unsigned long bWasSuccessful)
{
	static UFunction* pFnOnUnlockAvatarAwardComplete = NULL;

	if (!pFnOnUnlockAvatarAwardComplete)
		pFnOnUnlockAvatarAwardComplete = (UFunction*)UObject::GObjects()->Data[47593];

	UOnlineSubsystemSteamworks_execOnUnlockAvatarAwardComplete_Parms OnUnlockAvatarAwardComplete_Parms;
	OnUnlockAvatarAwardComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnUnlockAvatarAwardComplete, &OnUnlockAvatarAwardComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendJoinURL
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            FriendUID                      ( CPF_Parm )
// struct FString                 ServerURL                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// struct FString                 ServerUID                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::GetFriendJoinURL(struct FUniqueNetId FriendUID, struct FString* ServerURL, struct FString* ServerUID)
{
	static UFunction* pFnGetFriendJoinURL = NULL;

	if (!pFnGetFriendJoinURL)
		pFnGetFriendJoinURL = (UFunction*)UObject::GObjects()->Data[47588];

	UOnlineSubsystemSteamworks_execGetFriendJoinURL_Parms GetFriendJoinURL_Parms;
	memcpy(&GetFriendJoinURL_Parms.FriendUID, &FriendUID, 0x18);

	pFnGetFriendJoinURL->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetFriendJoinURL, &GetFriendJoinURL_Parms, NULL);

	pFnGetFriendJoinURL->FunctionFlags |= 0x400;

	if (ServerURL)
		memcpy(ServerURL, &GetFriendJoinURL_Parms.ServerURL, 0xC);

	if (ServerUID)
		memcpy(ServerUID, &GetFriendJoinURL_Parms.ServerUID, 0xC);

	return GetFriendJoinURL_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCommandlineJoinURL
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bMarkAsJoined                  ( CPF_Parm )
// struct FString                 ServerURL                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// struct FString                 ServerUID                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::GetCommandlineJoinURL(unsigned long bMarkAsJoined, struct FString* ServerURL, struct FString* ServerUID)
{
	static UFunction* pFnGetCommandlineJoinURL = NULL;

	if (!pFnGetCommandlineJoinURL)
		pFnGetCommandlineJoinURL = (UFunction*)UObject::GObjects()->Data[47583];

	UOnlineSubsystemSteamworks_execGetCommandlineJoinURL_Parms GetCommandlineJoinURL_Parms;
	GetCommandlineJoinURL_Parms.bMarkAsJoined = bMarkAsJoined;

	pFnGetCommandlineJoinURL->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetCommandlineJoinURL, &GetCommandlineJoinURL_Parms, NULL);

	pFnGetCommandlineJoinURL->FunctionFlags |= 0x400;

	if (ServerURL)
		memcpy(ServerURL, &GetCommandlineJoinURL_Parms.ServerURL, 0xC);

	if (ServerUID)
		memcpy(ServerUID, &GetCommandlineJoinURL_Parms.ServerUID, 0xC);

	return GetCommandlineJoinURL_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Int64ToUniqueNetId
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UIDString                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FUniqueNetId            OutUID                         ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemSteamworks::Int64ToUniqueNetId(struct FString UIDString, struct FUniqueNetId* OutUID)
{
	static UFunction* pFnInt64ToUniqueNetId = NULL;

	if (!pFnInt64ToUniqueNetId)
		pFnInt64ToUniqueNetId = (UFunction*)UObject::GObjects()->Data[47579];

	UOnlineSubsystemSteamworks_execInt64ToUniqueNetId_Parms Int64ToUniqueNetId_Parms;
	memcpy(&Int64ToUniqueNetId_Parms.UIDString, &UIDString, 0xC);

	pFnInt64ToUniqueNetId->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnInt64ToUniqueNetId, &Int64ToUniqueNetId_Parms, NULL);

	pFnInt64ToUniqueNetId->FunctionFlags |= 0x400;

	if (OutUID)
		memcpy(OutUID, &Int64ToUniqueNetId_Parms.OutUID, 0x18);

	return Int64ToUniqueNetId_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToInt64
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FUniqueNetId            Uid                            ( CPF_Const | CPF_Parm | CPF_OutParm )

struct FString UOnlineSubsystemSteamworks::UniqueNetIdToInt64(struct FUniqueNetId* Uid)
{
	static UFunction* pFnUniqueNetIdToInt64 = NULL;

	if (!pFnUniqueNetIdToInt64)
		pFnUniqueNetIdToInt64 = (UFunction*)UObject::GObjects()->Data[47576];

	UOnlineSubsystemSteamworks_execUniqueNetIdToInt64_Parms UniqueNetIdToInt64_Parms;

	pFnUniqueNetIdToInt64->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnUniqueNetIdToInt64, &UniqueNetIdToInt64_Parms, NULL);

	pFnUniqueNetIdToInt64->FunctionFlags |= 0x400;

	if (Uid)
		memcpy(Uid, &UniqueNetIdToInt64_Parms.Uid, 0x18);

	return UniqueNetIdToInt64_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.NotifyVOIPPlaybackFinished
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UAudioComponent*         VOIPAudioComponent             ( CPF_Parm | CPF_EditInline )

void UOnlineSubsystemSteamworks::NotifyVOIPPlaybackFinished(class UAudioComponent* VOIPAudioComponent)
{
	static UFunction* pFnNotifyVOIPPlaybackFinished = NULL;

	if (!pFnNotifyVOIPPlaybackFinished)
		pFnNotifyVOIPPlaybackFinished = (UFunction*)UObject::GObjects()->Data[47574];

	UOnlineSubsystemSteamworks_execNotifyVOIPPlaybackFinished_Parms NotifyVOIPPlaybackFinished_Parms;
	NotifyVOIPPlaybackFinished_Parms.VOIPAudioComponent = VOIPAudioComponent;

	pFnNotifyVOIPPlaybackFinished->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnNotifyVOIPPlaybackFinished, &NotifyVOIPPlaybackFinished_Parms, NULL);

	pFnNotifyVOIPPlaybackFinished->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnVOIPPlaybackFinished
// [0x00020002]
// Parameters infos:
// class UAudioComponent*         AC                             ( CPF_Parm | CPF_EditInline )

void UOnlineSubsystemSteamworks::OnVOIPPlaybackFinished(class UAudioComponent* AC)
{
	static UFunction* pFnOnVOIPPlaybackFinished = NULL;

	if (!pFnOnVOIPPlaybackFinished)
		pFnOnVOIPPlaybackFinished = (UFunction*)UObject::GObjects()->Data[47572];

	UOnlineSubsystemSteamworks_execOnVOIPPlaybackFinished_Parms OnVOIPPlaybackFinished_Parms;
	OnVOIPPlaybackFinished_Parms.AC = AC;

	this->ProcessEvent(pFnOnVOIPPlaybackFinished, &OnVOIPPlaybackFinished_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowProfileUI
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 SubURL                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// struct FUniqueNetId            PlayerUID                      ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowProfileUI(unsigned char LocalUserNum, struct FString SubURL, struct FUniqueNetId PlayerUID)
{
	static UFunction* pFnShowProfileUI = NULL;

	if (!pFnShowProfileUI)
		pFnShowProfileUI = (UFunction*)UObject::GObjects()->Data[47567];

	UOnlineSubsystemSteamworks_execShowProfileUI_Parms ShowProfileUI_Parms;
	ShowProfileUI_Parms.LocalUserNum = LocalUserNum;
	memcpy(&ShowProfileUI_Parms.SubURL, &SubURL, 0xC);
	memcpy(&ShowProfileUI_Parms.PlayerUID, &PlayerUID, 0x18);

	pFnShowProfileUI->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnShowProfileUI, &ShowProfileUI_Parms, NULL);

	pFnShowProfileUI->FunctionFlags |= 0x400;

	return ShowProfileUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToPlayerName
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FUniqueNetId            Uid                            ( CPF_Const | CPF_Parm | CPF_OutParm )

struct FString UOnlineSubsystemSteamworks::UniqueNetIdToPlayerName(struct FUniqueNetId* Uid)
{
	static UFunction* pFnUniqueNetIdToPlayerName = NULL;

	if (!pFnUniqueNetIdToPlayerName)
		pFnUniqueNetIdToPlayerName = (UFunction*)UObject::GObjects()->Data[47564];

	UOnlineSubsystemSteamworks_execUniqueNetIdToPlayerName_Parms UniqueNetIdToPlayerName_Parms;

	pFnUniqueNetIdToPlayerName->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnUniqueNetIdToPlayerName, &UniqueNetIdToPlayerName_Parms, NULL);

	pFnUniqueNetIdToPlayerName->FunctionFlags |= 0x400;

	if (Uid)
		memcpy(Uid, &UniqueNetIdToPlayerName_Parms.Uid, 0x18);

	return UniqueNetIdToPlayerName_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DisplayAchievementProgress
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            AchievementId                  ( CPF_Parm )
// int                            ProgressCount                  ( CPF_Parm )
// int                            MaxProgress                    ( CPF_Parm )

bool UOnlineSubsystemSteamworks::DisplayAchievementProgress(int AchievementId, int ProgressCount, int MaxProgress)
{
	static UFunction* pFnDisplayAchievementProgress = NULL;

	if (!pFnDisplayAchievementProgress)
		pFnDisplayAchievementProgress = (UFunction*)UObject::GObjects()->Data[47559];

	UOnlineSubsystemSteamworks_execDisplayAchievementProgress_Parms DisplayAchievementProgress_Parms;
	DisplayAchievementProgress_Parms.AchievementId = AchievementId;
	DisplayAchievementProgress_Parms.ProgressCount = ProgressCount;
	DisplayAchievementProgress_Parms.MaxProgress = MaxProgress;

	pFnDisplayAchievementProgress->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDisplayAchievementProgress, &DisplayAchievementProgress_Parms, NULL);

	pFnDisplayAchievementProgress->FunctionFlags |= 0x400;

	return DisplayAchievementProgress_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLeaderboard
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 LeaderboardName                ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  SortType                       ( CPF_Parm )
// unsigned char                  DisplayFormat                  ( CPF_Parm )

bool UOnlineSubsystemSteamworks::CreateLeaderboard(struct FString LeaderboardName, unsigned char SortType, unsigned char DisplayFormat)
{
	static UFunction* pFnCreateLeaderboard = NULL;

	if (!pFnCreateLeaderboard)
		pFnCreateLeaderboard = (UFunction*)UObject::GObjects()->Data[47554];

	UOnlineSubsystemSteamworks_execCreateLeaderboard_Parms CreateLeaderboard_Parms;
	memcpy(&CreateLeaderboard_Parms.LeaderboardName, &LeaderboardName, 0xC);
	CreateLeaderboard_Parms.SortType = SortType;
	CreateLeaderboard_Parms.DisplayFormat = DisplayFormat;

	pFnCreateLeaderboard->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnCreateLeaderboard, &CreateLeaderboard_Parms, NULL);

	pFnCreateLeaderboard->FunctionFlags |= 0x400;

	return CreateLeaderboard_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetStats
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bResetAchievements             ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ResetStats(unsigned long bResetAchievements)
{
	static UFunction* pFnResetStats = NULL;

	if (!pFnResetStats)
		pFnResetStats = (UFunction*)UObject::GObjects()->Data[47551];

	UOnlineSubsystemSteamworks_execResetStats_Parms ResetStats_Parms;
	ResetStats_Parms.bResetAchievements = bResetAchievements;

	pFnResetStats->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnResetStats, &ResetStats_Parms, NULL);

	pFnResetStats->FunctionFlags |= 0x400;

	return ResetStats_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomMessageUI
// [0x00424000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 MessageTitle                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 NonEditableMessage             ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 EditableMessage                ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FUniqueNetId >  Recipients                     ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ShowCustomMessageUI(unsigned char LocalUserNum, struct FString MessageTitle, struct FString NonEditableMessage, struct FString EditableMessage, TArray< struct FUniqueNetId >* Recipients)
{
	static UFunction* pFnShowCustomMessageUI = NULL;

	if (!pFnShowCustomMessageUI)
		pFnShowCustomMessageUI = (UFunction*)UObject::GObjects()->Data[47543];

	UOnlineSubsystemSteamworks_execShowCustomMessageUI_Parms ShowCustomMessageUI_Parms;
	ShowCustomMessageUI_Parms.LocalUserNum = LocalUserNum;
	memcpy(&ShowCustomMessageUI_Parms.MessageTitle, &MessageTitle, 0xC);
	memcpy(&ShowCustomMessageUI_Parms.NonEditableMessage, &NonEditableMessage, 0xC);
	memcpy(&ShowCustomMessageUI_Parms.EditableMessage, &EditableMessage, 0xC);

	this->ProcessEvent(pFnShowCustomMessageUI, &ShowCustomMessageUI_Parms, NULL);

	if (Recipients)
		memcpy(Recipients, &ShowCustomMessageUI_Parms.Recipients, 0xC);

	return ShowCustomMessageUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCrossTitleProfileSettings
// [0x00020000]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            TitleId                        ( CPF_Parm )

void UOnlineSubsystemSteamworks::ClearCrossTitleProfileSettings(unsigned char LocalUserNum, int TitleId)
{
	static UFunction* pFnClearCrossTitleProfileSettings = NULL;

	if (!pFnClearCrossTitleProfileSettings)
		pFnClearCrossTitleProfileSettings = (UFunction*)UObject::GObjects()->Data[47540];

	UOnlineSubsystemSteamworks_execClearCrossTitleProfileSettings_Parms ClearCrossTitleProfileSettings_Parms;
	ClearCrossTitleProfileSettings_Parms.LocalUserNum = LocalUserNum;
	ClearCrossTitleProfileSettings_Parms.TitleId = TitleId;

	this->ProcessEvent(pFnClearCrossTitleProfileSettings, &ClearCrossTitleProfileSettings_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCrossTitleProfileSettings
// [0x00020000]
// Parameters infos:
// class UOnlineProfileSettings*  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            TitleId                        ( CPF_Parm )

class UOnlineProfileSettings* UOnlineSubsystemSteamworks::GetCrossTitleProfileSettings(unsigned char LocalUserNum, int TitleId)
{
	static UFunction* pFnGetCrossTitleProfileSettings = NULL;

	if (!pFnGetCrossTitleProfileSettings)
		pFnGetCrossTitleProfileSettings = (UFunction*)UObject::GObjects()->Data[47536];

	UOnlineSubsystemSteamworks_execGetCrossTitleProfileSettings_Parms GetCrossTitleProfileSettings_Parms;
	GetCrossTitleProfileSettings_Parms.LocalUserNum = LocalUserNum;
	GetCrossTitleProfileSettings_Parms.TitleId = TitleId;

	this->ProcessEvent(pFnGetCrossTitleProfileSettings, &GetCrossTitleProfileSettings_Parms, NULL);

	return GetCrossTitleProfileSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCrossTitleProfileSettingsCompleteDelegate
// [0x00020000]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadCrossTitleProfileSettingsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate)
{
	static UFunction* pFnClearReadCrossTitleProfileSettingsCompleteDelegate = NULL;

	if (!pFnClearReadCrossTitleProfileSettingsCompleteDelegate)
		pFnClearReadCrossTitleProfileSettingsCompleteDelegate = (UFunction*)UObject::GObjects()->Data[47533];

	UOnlineSubsystemSteamworks_execClearReadCrossTitleProfileSettingsCompleteDelegate_Parms ClearReadCrossTitleProfileSettingsCompleteDelegate_Parms;
	ClearReadCrossTitleProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy(&ClearReadCrossTitleProfileSettingsCompleteDelegate_Parms.ReadProfileSettingsCompleteDelegate, &ReadProfileSettingsCompleteDelegate, 0xC);

	this->ProcessEvent(pFnClearReadCrossTitleProfileSettingsCompleteDelegate, &ClearReadCrossTitleProfileSettingsCompleteDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCrossTitleProfileSettingsCompleteDelegate
// [0x00020000]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadCrossTitleProfileSettingsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate)
{
	static UFunction* pFnAddReadCrossTitleProfileSettingsCompleteDelegate = NULL;

	if (!pFnAddReadCrossTitleProfileSettingsCompleteDelegate)
		pFnAddReadCrossTitleProfileSettingsCompleteDelegate = (UFunction*)UObject::GObjects()->Data[47530];

	UOnlineSubsystemSteamworks_execAddReadCrossTitleProfileSettingsCompleteDelegate_Parms AddReadCrossTitleProfileSettingsCompleteDelegate_Parms;
	AddReadCrossTitleProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy(&AddReadCrossTitleProfileSettingsCompleteDelegate_Parms.ReadProfileSettingsCompleteDelegate, &ReadProfileSettingsCompleteDelegate, 0xC);

	this->ProcessEvent(pFnAddReadCrossTitleProfileSettingsCompleteDelegate, &AddReadCrossTitleProfileSettingsCompleteDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCrossTitleProfileSettingsComplete
// [0x00120000]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            TitleId                        ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnReadCrossTitleProfileSettingsComplete(unsigned char LocalUserNum, int TitleId, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnReadCrossTitleProfileSettingsComplete = NULL;

	if (!pFnOnReadCrossTitleProfileSettingsComplete)
		pFnOnReadCrossTitleProfileSettingsComplete = (UFunction*)UObject::GObjects()->Data[47526];

	UOnlineSubsystemSteamworks_execOnReadCrossTitleProfileSettingsComplete_Parms OnReadCrossTitleProfileSettingsComplete_Parms;
	OnReadCrossTitleProfileSettingsComplete_Parms.LocalUserNum = LocalUserNum;
	OnReadCrossTitleProfileSettingsComplete_Parms.TitleId = TitleId;
	OnReadCrossTitleProfileSettingsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnReadCrossTitleProfileSettingsComplete, &OnReadCrossTitleProfileSettingsComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCrossTitleProfileSettings
// [0x00020000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            TitleId                        ( CPF_Parm )
// class UOnlineProfileSettings*  ProfileSettings                ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadCrossTitleProfileSettings(unsigned char LocalUserNum, int TitleId, class UOnlineProfileSettings* ProfileSettings)
{
	static UFunction* pFnReadCrossTitleProfileSettings = NULL;

	if (!pFnReadCrossTitleProfileSettings)
		pFnReadCrossTitleProfileSettings = (UFunction*)UObject::GObjects()->Data[47521];

	UOnlineSubsystemSteamworks_execReadCrossTitleProfileSettings_Parms ReadCrossTitleProfileSettings_Parms;
	ReadCrossTitleProfileSettings_Parms.LocalUserNum = LocalUserNum;
	ReadCrossTitleProfileSettings_Parms.TitleId = TitleId;
	ReadCrossTitleProfileSettings_Parms.ProfileSettings = ProfileSettings;

	this->ProcessEvent(pFnReadCrossTitleProfileSettings, &ReadCrossTitleProfileSettings_Parms, NULL);

	return ReadCrossTitleProfileSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAvatarAward
// [0x00020000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            AvatarItemId                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::UnlockAvatarAward(unsigned char LocalUserNum, int AvatarItemId)
{
	static UFunction* pFnUnlockAvatarAward = NULL;

	if (!pFnUnlockAvatarAward)
		pFnUnlockAvatarAward = (UFunction*)UObject::GObjects()->Data[47517];

	UOnlineSubsystemSteamworks_execUnlockAvatarAward_Parms UnlockAvatarAward_Parms;
	UnlockAvatarAward_Parms.LocalUserNum = LocalUserNum;
	UnlockAvatarAward_Parms.AvatarItemId = AvatarItemId;

	this->ProcessEvent(pFnUnlockAvatarAward, &UnlockAvatarAward_Parms, NULL);

	return UnlockAvatarAward_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EnumerateFilesOnRemoteStorage
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// TArray< struct FString >       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

TArray< struct FString > UOnlineSubsystemSteamworks::EnumerateFilesOnRemoteStorage()
{
	static UFunction* pFnEnumerateFilesOnRemoteStorage = NULL;

	if (!pFnEnumerateFilesOnRemoteStorage)
		pFnEnumerateFilesOnRemoteStorage = (UFunction*)UObject::GObjects()->Data[47514];

	UOnlineSubsystemSteamworks_execEnumerateFilesOnRemoteStorage_Parms EnumerateFilesOnRemoteStorage_Parms;

	pFnEnumerateFilesOnRemoteStorage->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEnumerateFilesOnRemoteStorage, &EnumerateFilesOnRemoteStorage_Parms, NULL);

	pFnEnumerateFilesOnRemoteStorage->FunctionFlags |= 0x400;

	return EnumerateFilesOnRemoteStorage_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteFileFromRemoteStorage
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::DeleteFileFromRemoteStorage(struct FString Filename)
{
	static UFunction* pFnDeleteFileFromRemoteStorage = NULL;

	if (!pFnDeleteFileFromRemoteStorage)
		pFnDeleteFileFromRemoteStorage = (UFunction*)UObject::GObjects()->Data[47511];

	UOnlineSubsystemSteamworks_execDeleteFileFromRemoteStorage_Parms DeleteFileFromRemoteStorage_Parms;
	memcpy(&DeleteFileFromRemoteStorage_Parms.Filename, &Filename, 0xC);

	pFnDeleteFileFromRemoteStorage->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDeleteFileFromRemoteStorage, &DeleteFileFromRemoteStorage_Parms, NULL);

	pFnDeleteFileFromRemoteStorage->FunctionFlags |= 0x400;

	return DeleteFileFromRemoteStorage_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadBytesFromRemoteStorage
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// TArray< unsigned char >        Data                           ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ReadBytesFromRemoteStorage(struct FString Filename, TArray< unsigned char >* Data)
{
	static UFunction* pFnReadBytesFromRemoteStorage = NULL;

	if (!pFnReadBytesFromRemoteStorage)
		pFnReadBytesFromRemoteStorage = (UFunction*)UObject::GObjects()->Data[47506];

	UOnlineSubsystemSteamworks_execReadBytesFromRemoteStorage_Parms ReadBytesFromRemoteStorage_Parms;
	memcpy(&ReadBytesFromRemoteStorage_Parms.Filename, &Filename, 0xC);

	pFnReadBytesFromRemoteStorage->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnReadBytesFromRemoteStorage, &ReadBytesFromRemoteStorage_Parms, NULL);

	pFnReadBytesFromRemoteStorage->FunctionFlags |= 0x400;

	if (Data)
		memcpy(Data, &ReadBytesFromRemoteStorage_Parms.Data, 0xC);

	return ReadBytesFromRemoteStorage_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadStringFromRemoteStorage
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Data                           ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ReadStringFromRemoteStorage(struct FString Filename, struct FString* Data)
{
	static UFunction* pFnReadStringFromRemoteStorage = NULL;

	if (!pFnReadStringFromRemoteStorage)
		pFnReadStringFromRemoteStorage = (UFunction*)UObject::GObjects()->Data[47502];

	UOnlineSubsystemSteamworks_execReadStringFromRemoteStorage_Parms ReadStringFromRemoteStorage_Parms;
	memcpy(&ReadStringFromRemoteStorage_Parms.Filename, &Filename, 0xC);

	pFnReadStringFromRemoteStorage->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnReadStringFromRemoteStorage, &ReadStringFromRemoteStorage_Parms, NULL);

	pFnReadStringFromRemoteStorage->FunctionFlags |= 0x400;

	if (Data)
		memcpy(Data, &ReadStringFromRemoteStorage_Parms.Data, 0xC);

	return ReadStringFromRemoteStorage_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteBytesToRemoteStorage
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// TArray< unsigned char >        Data                           ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::WriteBytesToRemoteStorage(struct FString Filename, TArray< unsigned char > Data)
{
	static UFunction* pFnWriteBytesToRemoteStorage = NULL;

	if (!pFnWriteBytesToRemoteStorage)
		pFnWriteBytesToRemoteStorage = (UFunction*)UObject::GObjects()->Data[47497];

	UOnlineSubsystemSteamworks_execWriteBytesToRemoteStorage_Parms WriteBytesToRemoteStorage_Parms;
	memcpy(&WriteBytesToRemoteStorage_Parms.Filename, &Filename, 0xC);
	memcpy(&WriteBytesToRemoteStorage_Parms.Data, &Data, 0xC);

	pFnWriteBytesToRemoteStorage->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnWriteBytesToRemoteStorage, &WriteBytesToRemoteStorage_Parms, NULL);

	pFnWriteBytesToRemoteStorage->FunctionFlags |= 0x400;

	return WriteBytesToRemoteStorage_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteStringToRemoteStorage
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Data                           ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::WriteStringToRemoteStorage(struct FString Filename, struct FString Data)
{
	static UFunction* pFnWriteStringToRemoteStorage = NULL;

	if (!pFnWriteStringToRemoteStorage)
		pFnWriteStringToRemoteStorage = (UFunction*)UObject::GObjects()->Data[47493];

	UOnlineSubsystemSteamworks_execWriteStringToRemoteStorage_Parms WriteStringToRemoteStorage_Parms;
	memcpy(&WriteStringToRemoteStorage_Parms.Filename, &Filename, 0xC);
	memcpy(&WriteStringToRemoteStorage_Parms.Data, &Data, 0xC);

	pFnWriteStringToRemoteStorage->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnWriteStringToRemoteStorage, &WriteStringToRemoteStorage_Parms, NULL);

	pFnWriteStringToRemoteStorage->FunctionFlags |= 0x400;

	return WriteStringToRemoteStorage_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSteamClanData
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// TArray< struct FSteamPlayerClanData > Results                        ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::GetSteamClanData(TArray< struct FSteamPlayerClanData >* Results)
{
	static UFunction* pFnGetSteamClanData = NULL;

	if (!pFnGetSteamClanData)
		pFnGetSteamClanData = (UFunction*)UObject::GObjects()->Data[47490];

	UOnlineSubsystemSteamworks_execGetSteamClanData_Parms GetSteamClanData_Parms;

	pFnGetSteamClanData->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetSteamClanData, &GetSteamClanData_Parms, NULL);

	pFnGetSteamClanData->FunctionFlags |= 0x400;

	if (Results)
		memcpy(Results, &GetSteamClanData_Parms.Results, 0xC);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearGetNumberOfCurrentPlayersCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         GetNumberOfCurrentPlayersCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearGetNumberOfCurrentPlayersCompleteDelegate(struct FScriptDelegate GetNumberOfCurrentPlayersCompleteDelegate)
{
	static UFunction* pFnClearGetNumberOfCurrentPlayersCompleteDelegate = NULL;

	if (!pFnClearGetNumberOfCurrentPlayersCompleteDelegate)
		pFnClearGetNumberOfCurrentPlayersCompleteDelegate = (UFunction*)UObject::GObjects()->Data[47488];

	UOnlineSubsystemSteamworks_execClearGetNumberOfCurrentPlayersCompleteDelegate_Parms ClearGetNumberOfCurrentPlayersCompleteDelegate_Parms;
	memcpy(&ClearGetNumberOfCurrentPlayersCompleteDelegate_Parms.GetNumberOfCurrentPlayersCompleteDelegate, &GetNumberOfCurrentPlayersCompleteDelegate, 0xC);

	this->ProcessEvent(pFnClearGetNumberOfCurrentPlayersCompleteDelegate, &ClearGetNumberOfCurrentPlayersCompleteDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddGetNumberOfCurrentPlayersCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         GetNumberOfCurrentPlayersCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddGetNumberOfCurrentPlayersCompleteDelegate(struct FScriptDelegate GetNumberOfCurrentPlayersCompleteDelegate)
{
	static UFunction* pFnAddGetNumberOfCurrentPlayersCompleteDelegate = NULL;

	if (!pFnAddGetNumberOfCurrentPlayersCompleteDelegate)
		pFnAddGetNumberOfCurrentPlayersCompleteDelegate = (UFunction*)UObject::GObjects()->Data[47485];

	UOnlineSubsystemSteamworks_execAddGetNumberOfCurrentPlayersCompleteDelegate_Parms AddGetNumberOfCurrentPlayersCompleteDelegate_Parms;
	memcpy(&AddGetNumberOfCurrentPlayersCompleteDelegate_Parms.GetNumberOfCurrentPlayersCompleteDelegate, &GetNumberOfCurrentPlayersCompleteDelegate, 0xC);

	this->ProcessEvent(pFnAddGetNumberOfCurrentPlayersCompleteDelegate, &AddGetNumberOfCurrentPlayersCompleteDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnGetNumberOfCurrentPlayersComplete
// [0x00120000]
// Parameters infos:
// int                            TotalPlayers                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnGetNumberOfCurrentPlayersComplete(int TotalPlayers)
{
	static UFunction* pFnOnGetNumberOfCurrentPlayersComplete = NULL;

	if (!pFnOnGetNumberOfCurrentPlayersComplete)
		pFnOnGetNumberOfCurrentPlayersComplete = (UFunction*)UObject::GObjects()->Data[47483];

	UOnlineSubsystemSteamworks_execOnGetNumberOfCurrentPlayersComplete_Parms OnGetNumberOfCurrentPlayersComplete_Parms;
	OnGetNumberOfCurrentPlayersComplete_Parms.TotalPlayers = TotalPlayers;

	this->ProcessEvent(pFnOnGetNumberOfCurrentPlayersComplete, &OnGetNumberOfCurrentPlayersComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNumberOfCurrentPlayers
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemSteamworks::GetNumberOfCurrentPlayers()
{
	static UFunction* pFnGetNumberOfCurrentPlayers = NULL;

	if (!pFnGetNumberOfCurrentPlayers)
		pFnGetNumberOfCurrentPlayers = (UFunction*)UObject::GObjects()->Data[47481];

	UOnlineSubsystemSteamworks_execGetNumberOfCurrentPlayers_Parms GetNumberOfCurrentPlayers_Parms;

	pFnGetNumberOfCurrentPlayers->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetNumberOfCurrentPlayers, &GetNumberOfCurrentPlayers_Parms, NULL);

	pFnGetNumberOfCurrentPlayers->FunctionFlags |= 0x400;

	return GetNumberOfCurrentPlayers_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineAvatar
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FUniqueNetId            PlayerNetId                    ( CPF_Const | CPF_Parm )
// int                            Size                           ( CPF_Parm )
// struct FScriptDelegate         ReadOnlineAvatarCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ReadOnlineAvatar(struct FUniqueNetId PlayerNetId, int Size, struct FScriptDelegate ReadOnlineAvatarCompleteDelegate)
{
	static UFunction* pFnReadOnlineAvatar = NULL;

	if (!pFnReadOnlineAvatar)
		pFnReadOnlineAvatar = (UFunction*)UObject::GObjects()->Data[47477];

	UOnlineSubsystemSteamworks_execReadOnlineAvatar_Parms ReadOnlineAvatar_Parms;
	memcpy(&ReadOnlineAvatar_Parms.PlayerNetId, &PlayerNetId, 0x18);
	ReadOnlineAvatar_Parms.Size = Size;
	memcpy(&ReadOnlineAvatar_Parms.ReadOnlineAvatarCompleteDelegate, &ReadOnlineAvatarCompleteDelegate, 0xC);

	pFnReadOnlineAvatar->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnReadOnlineAvatar, &ReadOnlineAvatar_Parms, NULL);

	pFnReadOnlineAvatar->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineAvatarComplete
// [0x00120000]
// Parameters infos:
// struct FUniqueNetId            PlayerNetId                    ( CPF_Const | CPF_Parm )
// class UTexture2D*              Avatar                         ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnReadOnlineAvatarComplete(struct FUniqueNetId PlayerNetId, class UTexture2D* Avatar)
{
	static UFunction* pFnOnReadOnlineAvatarComplete = NULL;

	if (!pFnOnReadOnlineAvatarComplete)
		pFnOnReadOnlineAvatarComplete = (UFunction*)UObject::GObjects()->Data[47474];

	UOnlineSubsystemSteamworks_execOnReadOnlineAvatarComplete_Parms OnReadOnlineAvatarComplete_Parms;
	memcpy(&OnReadOnlineAvatarComplete_Parms.PlayerNetId, &PlayerNetId, 0x18);
	OnReadOnlineAvatarComplete_Parms.Avatar = Avatar;

	this->ProcessEvent(pFnOnReadOnlineAvatarComplete, &OnReadOnlineAvatarComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomPlayersUI
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 Title                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Description                    ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FUniqueNetId >  Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ShowCustomPlayersUI(unsigned char LocalUserNum, struct FString Title, struct FString Description, TArray< struct FUniqueNetId >* Players)
{
	static UFunction* pFnShowCustomPlayersUI = NULL;

	if (!pFnShowCustomPlayersUI)
		pFnShowCustomPlayersUI = (UFunction*)UObject::GObjects()->Data[47467];

	UOnlineSubsystemSteamworks_execShowCustomPlayersUI_Parms ShowCustomPlayersUI_Parms;
	ShowCustomPlayersUI_Parms.LocalUserNum = LocalUserNum;
	memcpy(&ShowCustomPlayersUI_Parms.Title, &Title, 0xC);
	memcpy(&ShowCustomPlayersUI_Parms.Description, &Description, 0xC);

	pFnShowCustomPlayersUI->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnShowCustomPlayersUI, &ShowCustomPlayersUI_Parms, NULL);

	pFnShowCustomPlayersUI->FunctionFlags |= 0x400;

	if (Players)
		memcpy(Players, &ShowCustomPlayersUI_Parms.Players, 0xC);

	return ShowCustomPlayersUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetAchievements
// [0x00424400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            TitleId                        ( CPF_OptionalParm | CPF_Parm )
// TArray< struct FAchievementDetails > Achievements                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

unsigned char UOnlineSubsystemSteamworks::GetAchievements(unsigned char LocalUserNum, int TitleId, TArray< struct FAchievementDetails >* Achievements)
{
	static UFunction* pFnGetAchievements = NULL;

	if (!pFnGetAchievements)
		pFnGetAchievements = (UFunction*)UObject::GObjects()->Data[47461];

	UOnlineSubsystemSteamworks_execGetAchievements_Parms GetAchievements_Parms;
	GetAchievements_Parms.LocalUserNum = LocalUserNum;
	GetAchievements_Parms.TitleId = TitleId;

	pFnGetAchievements->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetAchievements, &GetAchievements_Parms, NULL);

	pFnGetAchievements->FunctionFlags |= 0x400;

	if (Achievements)
		memcpy(Achievements, &GetAchievements_Parms.Achievements, 0xC);

	return GetAchievements_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadAchievementsCompleteDelegate
// [0x00020002]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadAchievementsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadAchievementsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate)
{
	static UFunction* pFnClearReadAchievementsCompleteDelegate = NULL;

	if (!pFnClearReadAchievementsCompleteDelegate)
		pFnClearReadAchievementsCompleteDelegate = (UFunction*)UObject::GObjects()->Data[47458];

	UOnlineSubsystemSteamworks_execClearReadAchievementsCompleteDelegate_Parms ClearReadAchievementsCompleteDelegate_Parms;
	ClearReadAchievementsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy(&ClearReadAchievementsCompleteDelegate_Parms.ReadAchievementsCompleteDelegate, &ReadAchievementsCompleteDelegate, 0xC);

	this->ProcessEvent(pFnClearReadAchievementsCompleteDelegate, &ClearReadAchievementsCompleteDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadAchievementsCompleteDelegate
// [0x00020002]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadAchievementsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadAchievementsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate)
{
	static UFunction* pFnAddReadAchievementsCompleteDelegate = NULL;

	if (!pFnAddReadAchievementsCompleteDelegate)
		pFnAddReadAchievementsCompleteDelegate = (UFunction*)UObject::GObjects()->Data[47454];

	UOnlineSubsystemSteamworks_execAddReadAchievementsCompleteDelegate_Parms AddReadAchievementsCompleteDelegate_Parms;
	AddReadAchievementsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy(&AddReadAchievementsCompleteDelegate_Parms.ReadAchievementsCompleteDelegate, &ReadAchievementsCompleteDelegate, 0xC);

	this->ProcessEvent(pFnAddReadAchievementsCompleteDelegate, &AddReadAchievementsCompleteDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadAchievementsComplete
// [0x00120000]
// Parameters infos:
// int                            TitleId                        ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnReadAchievementsComplete(int TitleId)
{
	static UFunction* pFnOnReadAchievementsComplete = NULL;

	if (!pFnOnReadAchievementsComplete)
		pFnOnReadAchievementsComplete = (UFunction*)UObject::GObjects()->Data[47452];

	UOnlineSubsystemSteamworks_execOnReadAchievementsComplete_Parms OnReadAchievementsComplete_Parms;
	OnReadAchievementsComplete_Parms.TitleId = TitleId;

	this->ProcessEvent(pFnOnReadAchievementsComplete, &OnReadAchievementsComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadAchievements
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            TitleId                        ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bShouldReadText                ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bShouldReadImages              ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadAchievements(unsigned char LocalUserNum, int TitleId, unsigned long bShouldReadText, unsigned long bShouldReadImages)
{
	static UFunction* pFnReadAchievements = NULL;

	if (!pFnReadAchievements)
		pFnReadAchievements = (UFunction*)UObject::GObjects()->Data[47446];

	UOnlineSubsystemSteamworks_execReadAchievements_Parms ReadAchievements_Parms;
	ReadAchievements_Parms.LocalUserNum = LocalUserNum;
	ReadAchievements_Parms.TitleId = TitleId;
	ReadAchievements_Parms.bShouldReadText = bShouldReadText;
	ReadAchievements_Parms.bShouldReadImages = bShouldReadImages;

	pFnReadAchievements->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnReadAchievements, &ReadAchievements_Parms, NULL);

	pFnReadAchievements->FunctionFlags |= 0x400;

	return ReadAchievements_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowPlayersUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowPlayersUI(unsigned char LocalUserNum)
{
	static UFunction* pFnShowPlayersUI = NULL;

	if (!pFnShowPlayersUI)
		pFnShowPlayersUI = (UFunction*)UObject::GObjects()->Data[47443];

	UOnlineSubsystemSteamworks_execShowPlayersUI_Parms ShowPlayersUI_Parms;
	ShowPlayersUI_Parms.LocalUserNum = LocalUserNum;

	pFnShowPlayersUI->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnShowPlayersUI, &ShowPlayersUI_Parms, NULL);

	pFnShowPlayersUI->FunctionFlags |= 0x400;

	return ShowPlayersUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsInviteUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowFriendsInviteUI(unsigned char LocalUserNum, struct FUniqueNetId PlayerID)
{
	static UFunction* pFnShowFriendsInviteUI = NULL;

	if (!pFnShowFriendsInviteUI)
		pFnShowFriendsInviteUI = (UFunction*)UObject::GObjects()->Data[47439];

	UOnlineSubsystemSteamworks_execShowFriendsInviteUI_Parms ShowFriendsInviteUI_Parms;
	ShowFriendsInviteUI_Parms.LocalUserNum = LocalUserNum;
	memcpy(&ShowFriendsInviteUI_Parms.PlayerID, &PlayerID, 0x18);

	pFnShowFriendsInviteUI->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnShowFriendsInviteUI, &ShowFriendsInviteUI_Parms, NULL);

	pFnShowFriendsInviteUI->FunctionFlags |= 0x400;

	return ShowFriendsInviteUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowFriendsUI(unsigned char LocalUserNum)
{
	static UFunction* pFnShowFriendsUI = NULL;

	if (!pFnShowFriendsUI)
		pFnShowFriendsUI = (UFunction*)UObject::GObjects()->Data[47436];

	UOnlineSubsystemSteamworks_execShowFriendsUI_Parms ShowFriendsUI_Parms;
	ShowFriendsUI_Parms.LocalUserNum = LocalUserNum;

	pFnShowFriendsUI->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnShowFriendsUI, &ShowFriendsUI_Parms, NULL);

	pFnShowFriendsUI->FunctionFlags |= 0x400;

	return ShowFriendsUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearProfileDataChangedDelegate
// [0x00020002]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ProfileDataChangedDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearProfileDataChangedDelegate(unsigned char LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate)
{
	static UFunction* pFnClearProfileDataChangedDelegate = NULL;

	if (!pFnClearProfileDataChangedDelegate)
		pFnClearProfileDataChangedDelegate = (UFunction*)UObject::GObjects()->Data[47433];

	UOnlineSubsystemSteamworks_execClearProfileDataChangedDelegate_Parms ClearProfileDataChangedDelegate_Parms;
	ClearProfileDataChangedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy(&ClearProfileDataChangedDelegate_Parms.ProfileDataChangedDelegate, &ProfileDataChangedDelegate, 0xC);

	this->ProcessEvent(pFnClearProfileDataChangedDelegate, &ClearProfileDataChangedDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddProfileDataChangedDelegate
// [0x00020002]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ProfileDataChangedDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddProfileDataChangedDelegate(unsigned char LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate)
{
	static UFunction* pFnAddProfileDataChangedDelegate = NULL;

	if (!pFnAddProfileDataChangedDelegate)
		pFnAddProfileDataChangedDelegate = (UFunction*)UObject::GObjects()->Data[47429];

	UOnlineSubsystemSteamworks_execAddProfileDataChangedDelegate_Parms AddProfileDataChangedDelegate_Parms;
	AddProfileDataChangedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy(&AddProfileDataChangedDelegate_Parms.ProfileDataChangedDelegate, &ProfileDataChangedDelegate, 0xC);

	this->ProcessEvent(pFnAddProfileDataChangedDelegate, &AddProfileDataChangedDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnProfileDataChanged
// [0x00120000]
// Parameters infos:

void UOnlineSubsystemSteamworks::OnProfileDataChanged()
{
	static UFunction* pFnOnProfileDataChanged = NULL;

	if (!pFnOnProfileDataChanged)
		pFnOnProfileDataChanged = (UFunction*)UObject::GObjects()->Data[47428];

	UOnlineSubsystemSteamworks_execOnProfileDataChanged_Parms OnProfileDataChanged_Parms;

	this->ProcessEvent(pFnOnProfileDataChanged, &OnProfileDataChanged_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockGamerPicture
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            PictureId                      ( CPF_Parm )

bool UOnlineSubsystemSteamworks::UnlockGamerPicture(unsigned char LocalUserNum, int PictureId)
{
	static UFunction* pFnUnlockGamerPicture = NULL;

	if (!pFnUnlockGamerPicture)
		pFnUnlockGamerPicture = (UFunction*)UObject::GObjects()->Data[47424];

	UOnlineSubsystemSteamworks_execUnlockGamerPicture_Parms UnlockGamerPicture_Parms;
	UnlockGamerPicture_Parms.LocalUserNum = LocalUserNum;
	UnlockGamerPicture_Parms.PictureId = PictureId;

	pFnUnlockGamerPicture->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnUnlockGamerPicture, &UnlockGamerPicture_Parms, NULL);

	pFnUnlockGamerPicture->FunctionFlags |= 0x400;

	return UnlockGamerPicture_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockAchievementCompleteDelegate
// [0x00020002]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         UnlockAchievementCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearUnlockAchievementCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate)
{
	static UFunction* pFnClearUnlockAchievementCompleteDelegate = NULL;

	if (!pFnClearUnlockAchievementCompleteDelegate)
		pFnClearUnlockAchievementCompleteDelegate = (UFunction*)UObject::GObjects()->Data[47421];

	UOnlineSubsystemSteamworks_execClearUnlockAchievementCompleteDelegate_Parms ClearUnlockAchievementCompleteDelegate_Parms;
	ClearUnlockAchievementCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy(&ClearUnlockAchievementCompleteDelegate_Parms.UnlockAchievementCompleteDelegate, &UnlockAchievementCompleteDelegate, 0xC);

	this->ProcessEvent(pFnClearUnlockAchievementCompleteDelegate, &ClearUnlockAchievementCompleteDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockAchievementCompleteDelegate
// [0x00020002]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         UnlockAchievementCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddUnlockAchievementCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate)
{
	static UFunction* pFnAddUnlockAchievementCompleteDelegate = NULL;

	if (!pFnAddUnlockAchievementCompleteDelegate)
		pFnAddUnlockAchievementCompleteDelegate = (UFunction*)UObject::GObjects()->Data[47417];

	UOnlineSubsystemSteamworks_execAddUnlockAchievementCompleteDelegate_Parms AddUnlockAchievementCompleteDelegate_Parms;
	AddUnlockAchievementCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy(&AddUnlockAchievementCompleteDelegate_Parms.UnlockAchievementCompleteDelegate, &UnlockAchievementCompleteDelegate, 0xC);

	this->ProcessEvent(pFnAddUnlockAchievementCompleteDelegate, &AddUnlockAchievementCompleteDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockAchievementComplete
// [0x00120000]
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnUnlockAchievementComplete(unsigned long bWasSuccessful)
{
	static UFunction* pFnOnUnlockAchievementComplete = NULL;

	if (!pFnOnUnlockAchievementComplete)
		pFnOnUnlockAchievementComplete = (UFunction*)UObject::GObjects()->Data[47415];

	UOnlineSubsystemSteamworks_execOnUnlockAchievementComplete_Parms OnUnlockAchievementComplete_Parms;
	OnUnlockAchievementComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnUnlockAchievementComplete, &OnUnlockAchievementComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAchievement
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            AchievementId                  ( CPF_Parm )

bool UOnlineSubsystemSteamworks::UnlockAchievement(unsigned char LocalUserNum, int AchievementId)
{
	static UFunction* pFnUnlockAchievement = NULL;

	if (!pFnUnlockAchievement)
		pFnUnlockAchievement = (UFunction*)UObject::GObjects()->Data[47411];

	UOnlineSubsystemSteamworks_execUnlockAchievement_Parms UnlockAchievement_Parms;
	UnlockAchievement_Parms.LocalUserNum = LocalUserNum;
	UnlockAchievement_Parms.AchievementId = AchievementId;

	pFnUnlockAchievement->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnUnlockAchievement, &UnlockAchievement_Parms, NULL);

	pFnUnlockAchievement->FunctionFlags |= 0x400;

	return UnlockAchievement_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsDeviceValid
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            DeviceID                       ( CPF_Parm )
// int                            SizeNeeded                     ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::IsDeviceValid(int DeviceID, int SizeNeeded)
{
	static UFunction* pFnIsDeviceValid = NULL;

	if (!pFnIsDeviceValid)
		pFnIsDeviceValid = (UFunction*)UObject::GObjects()->Data[47407];

	UOnlineSubsystemSteamworks_execIsDeviceValid_Parms IsDeviceValid_Parms;
	IsDeviceValid_Parms.DeviceID = DeviceID;
	IsDeviceValid_Parms.SizeNeeded = SizeNeeded;

	pFnIsDeviceValid->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIsDeviceValid, &IsDeviceValid_Parms, NULL);

	pFnIsDeviceValid->FunctionFlags |= 0x400;

	return IsDeviceValid_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDeviceSelectionResults
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 DeviceName                     ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

int UOnlineSubsystemSteamworks::GetDeviceSelectionResults(unsigned char LocalUserNum, struct FString* DeviceName)
{
	static UFunction* pFnGetDeviceSelectionResults = NULL;

	if (!pFnGetDeviceSelectionResults)
		pFnGetDeviceSelectionResults = (UFunction*)UObject::GObjects()->Data[47403];

	UOnlineSubsystemSteamworks_execGetDeviceSelectionResults_Parms GetDeviceSelectionResults_Parms;
	GetDeviceSelectionResults_Parms.LocalUserNum = LocalUserNum;

	pFnGetDeviceSelectionResults->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetDeviceSelectionResults, &GetDeviceSelectionResults_Parms, NULL);

	pFnGetDeviceSelectionResults->FunctionFlags |= 0x400;

	if (DeviceName)
		memcpy(DeviceName, &GetDeviceSelectionResults_Parms.DeviceName, 0xC);

	return GetDeviceSelectionResults_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeviceSelectionDoneDelegate
// [0x00020002]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         DeviceDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearDeviceSelectionDoneDelegate(unsigned char LocalUserNum, struct FScriptDelegate DeviceDelegate)
{
	static UFunction* pFnClearDeviceSelectionDoneDelegate = NULL;

	if (!pFnClearDeviceSelectionDoneDelegate)
		pFnClearDeviceSelectionDoneDelegate = (UFunction*)UObject::GObjects()->Data[47400];

	UOnlineSubsystemSteamworks_execClearDeviceSelectionDoneDelegate_Parms ClearDeviceSelectionDoneDelegate_Parms;
	ClearDeviceSelectionDoneDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy(&ClearDeviceSelectionDoneDelegate_Parms.DeviceDelegate, &DeviceDelegate, 0xC);

	this->ProcessEvent(pFnClearDeviceSelectionDoneDelegate, &ClearDeviceSelectionDoneDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeviceSelectionDoneDelegate
// [0x00020002]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         DeviceDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddDeviceSelectionDoneDelegate(unsigned char LocalUserNum, struct FScriptDelegate DeviceDelegate)
{
	static UFunction* pFnAddDeviceSelectionDoneDelegate = NULL;

	if (!pFnAddDeviceSelectionDoneDelegate)
		pFnAddDeviceSelectionDoneDelegate = (UFunction*)UObject::GObjects()->Data[47394];

	UOnlineSubsystemSteamworks_execAddDeviceSelectionDoneDelegate_Parms AddDeviceSelectionDoneDelegate_Parms;
	AddDeviceSelectionDoneDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy(&AddDeviceSelectionDoneDelegate_Parms.DeviceDelegate, &DeviceDelegate, 0xC);

	this->ProcessEvent(pFnAddDeviceSelectionDoneDelegate, &AddDeviceSelectionDoneDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeviceSelectionComplete
// [0x00120000]
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnDeviceSelectionComplete(unsigned long bWasSuccessful)
{
	static UFunction* pFnOnDeviceSelectionComplete = NULL;

	if (!pFnOnDeviceSelectionComplete)
		pFnOnDeviceSelectionComplete = (UFunction*)UObject::GObjects()->Data[47392];

	UOnlineSubsystemSteamworks_execOnDeviceSelectionComplete_Parms OnDeviceSelectionComplete_Parms;
	OnDeviceSelectionComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnDeviceSelectionComplete, &OnDeviceSelectionComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowDeviceSelectionUI
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            SizeNeeded                     ( CPF_Parm )
// unsigned long                  bForceShow                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bManageStorage                 ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowDeviceSelectionUI(unsigned char LocalUserNum, int SizeNeeded, unsigned long bForceShow, unsigned long bManageStorage)
{
	static UFunction* pFnShowDeviceSelectionUI = NULL;

	if (!pFnShowDeviceSelectionUI)
		pFnShowDeviceSelectionUI = (UFunction*)UObject::GObjects()->Data[47386];

	UOnlineSubsystemSteamworks_execShowDeviceSelectionUI_Parms ShowDeviceSelectionUI_Parms;
	ShowDeviceSelectionUI_Parms.LocalUserNum = LocalUserNum;
	ShowDeviceSelectionUI_Parms.SizeNeeded = SizeNeeded;
	ShowDeviceSelectionUI_Parms.bForceShow = bForceShow;
	ShowDeviceSelectionUI_Parms.bManageStorage = bManageStorage;

	pFnShowDeviceSelectionUI->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnShowDeviceSelectionUI, &ShowDeviceSelectionUI_Parms, NULL);

	pFnShowDeviceSelectionUI->FunctionFlags |= 0x400;

	return ShowDeviceSelectionUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMembershipMarketplaceUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowMembershipMarketplaceUI(unsigned char LocalUserNum)
{
	static UFunction* pFnShowMembershipMarketplaceUI = NULL;

	if (!pFnShowMembershipMarketplaceUI)
		pFnShowMembershipMarketplaceUI = (UFunction*)UObject::GObjects()->Data[47383];

	UOnlineSubsystemSteamworks_execShowMembershipMarketplaceUI_Parms ShowMembershipMarketplaceUI_Parms;
	ShowMembershipMarketplaceUI_Parms.LocalUserNum = LocalUserNum;

	pFnShowMembershipMarketplaceUI->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnShowMembershipMarketplaceUI, &ShowMembershipMarketplaceUI_Parms, NULL);

	pFnShowMembershipMarketplaceUI->FunctionFlags |= 0x400;

	return ShowMembershipMarketplaceUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentMarketplaceUI
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            CategoryMask                   ( CPF_OptionalParm | CPF_Parm )
// int                            OfferId                        ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowContentMarketplaceUI(unsigned char LocalUserNum, int CategoryMask, int OfferId)
{
	static UFunction* pFnShowContentMarketplaceUI = NULL;

	if (!pFnShowContentMarketplaceUI)
		pFnShowContentMarketplaceUI = (UFunction*)UObject::GObjects()->Data[47368];

	UOnlineSubsystemSteamworks_execShowContentMarketplaceUI_Parms ShowContentMarketplaceUI_Parms;
	ShowContentMarketplaceUI_Parms.LocalUserNum = LocalUserNum;
	ShowContentMarketplaceUI_Parms.CategoryMask = CategoryMask;
	ShowContentMarketplaceUI_Parms.OfferId = OfferId;

	pFnShowContentMarketplaceUI->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnShowContentMarketplaceUI, &ShowContentMarketplaceUI_Parms, NULL);

	pFnShowContentMarketplaceUI->FunctionFlags |= 0x400;

	return ShowContentMarketplaceUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowInviteUI
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 InviteText                     ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ShowInviteUI(unsigned char LocalUserNum, struct FString InviteText)
{
	static UFunction* pFnShowInviteUI = NULL;

	if (!pFnShowInviteUI)
		pFnShowInviteUI = (UFunction*)UObject::GObjects()->Data[47364];

	UOnlineSubsystemSteamworks_execShowInviteUI_Parms ShowInviteUI_Parms;
	ShowInviteUI_Parms.LocalUserNum = LocalUserNum;
	memcpy(&ShowInviteUI_Parms.InviteText, &InviteText, 0xC);

	pFnShowInviteUI->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnShowInviteUI, &ShowInviteUI_Parms, NULL);

	pFnShowInviteUI->FunctionFlags |= 0x400;

	return ShowInviteUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowAchievementsUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowAchievementsUI(unsigned char LocalUserNum)
{
	static UFunction* pFnShowAchievementsUI = NULL;

	if (!pFnShowAchievementsUI)
		pFnShowAchievementsUI = (UFunction*)UObject::GObjects()->Data[47361];

	UOnlineSubsystemSteamworks_execShowAchievementsUI_Parms ShowAchievementsUI_Parms;
	ShowAchievementsUI_Parms.LocalUserNum = LocalUserNum;

	pFnShowAchievementsUI->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnShowAchievementsUI, &ShowAchievementsUI_Parms, NULL);

	pFnShowAchievementsUI->FunctionFlags |= 0x400;

	return ShowAchievementsUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMessagesUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowMessagesUI(unsigned char LocalUserNum)
{
	static UFunction* pFnShowMessagesUI = NULL;

	if (!pFnShowMessagesUI)
		pFnShowMessagesUI = (UFunction*)UObject::GObjects()->Data[47358];

	UOnlineSubsystemSteamworks_execShowMessagesUI_Parms ShowMessagesUI_Parms;
	ShowMessagesUI_Parms.LocalUserNum = LocalUserNum;

	pFnShowMessagesUI->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnShowMessagesUI, &ShowMessagesUI_Parms, NULL);

	pFnShowMessagesUI->FunctionFlags |= 0x400;

	return ShowMessagesUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowGamerCardUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowGamerCardUI(unsigned char LocalUserNum, struct FUniqueNetId PlayerID)
{
	static UFunction* pFnShowGamerCardUI = NULL;

	if (!pFnShowGamerCardUI)
		pFnShowGamerCardUI = (UFunction*)UObject::GObjects()->Data[47354];

	UOnlineSubsystemSteamworks_execShowGamerCardUI_Parms ShowGamerCardUI_Parms;
	ShowGamerCardUI_Parms.LocalUserNum = LocalUserNum;
	memcpy(&ShowGamerCardUI_Parms.PlayerID, &PlayerID, 0x18);

	pFnShowGamerCardUI->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnShowGamerCardUI, &ShowGamerCardUI_Parms, NULL);

	pFnShowGamerCardUI->FunctionFlags |= 0x400;

	return ShowGamerCardUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFeedbackUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowFeedbackUI(unsigned char LocalUserNum, struct FUniqueNetId PlayerID)
{
	static UFunction* pFnShowFeedbackUI = NULL;

	if (!pFnShowFeedbackUI)
		pFnShowFeedbackUI = (UFunction*)UObject::GObjects()->Data[47350];

	UOnlineSubsystemSteamworks_execShowFeedbackUI_Parms ShowFeedbackUI_Parms;
	ShowFeedbackUI_Parms.LocalUserNum = LocalUserNum;
	memcpy(&ShowFeedbackUI_Parms.PlayerID, &PlayerID, 0x18);

	pFnShowFeedbackUI->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnShowFeedbackUI, &ShowFeedbackUI_Parms, NULL);

	pFnShowFeedbackUI->FunctionFlags |= 0x400;

	return ShowFeedbackUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteMessage
// [0x00020000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            MessageIndex                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::DeleteMessage(unsigned char LocalUserNum, int MessageIndex)
{
	static UFunction* pFnDeleteMessage = NULL;

	if (!pFnDeleteMessage)
		pFnDeleteMessage = (UFunction*)UObject::GObjects()->Data[47346];

	UOnlineSubsystemSteamworks_execDeleteMessage_Parms DeleteMessage_Parms;
	DeleteMessage_Parms.LocalUserNum = LocalUserNum;
	DeleteMessage_Parms.MessageIndex = MessageIndex;

	this->ProcessEvent(pFnDeleteMessage, &DeleteMessage_Parms, NULL);

	return DeleteMessage_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteAll
// [0x00020000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::UnmuteAll(unsigned char LocalUserNum)
{
	static UFunction* pFnUnmuteAll = NULL;

	if (!pFnUnmuteAll)
		pFnUnmuteAll = (UFunction*)UObject::GObjects()->Data[47343];

	UOnlineSubsystemSteamworks_execUnmuteAll_Parms UnmuteAll_Parms;
	UnmuteAll_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnUnmuteAll, &UnmuteAll_Parms, NULL);

	return UnmuteAll_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteAll
// [0x00020000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAllowFriends                  ( CPF_Parm )

bool UOnlineSubsystemSteamworks::MuteAll(unsigned char LocalUserNum, unsigned long bAllowFriends)
{
	static UFunction* pFnMuteAll = NULL;

	if (!pFnMuteAll)
		pFnMuteAll = (UFunction*)UObject::GObjects()->Data[47339];

	UOnlineSubsystemSteamworks_execMuteAll_Parms MuteAll_Parms;
	MuteAll_Parms.LocalUserNum = LocalUserNum;
	MuteAll_Parms.bAllowFriends = bAllowFriends;

	this->ProcessEvent(pFnMuteAll, &MuteAll_Parms, NULL);

	return MuteAll_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CalcAggregateSkill
// [0x00420000]
// Parameters infos:
// TArray< struct FDouble >       Mus                            ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FDouble >       Sigmas                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FDouble                 OutAggregateMu                 ( CPF_Parm | CPF_OutParm )
// struct FDouble                 OutAggregateSigma              ( CPF_Parm | CPF_OutParm )

void UOnlineSubsystemSteamworks::CalcAggregateSkill(TArray< struct FDouble > Mus, TArray< struct FDouble > Sigmas, struct FDouble* OutAggregateMu, struct FDouble* OutAggregateSigma)
{
	static UFunction* pFnCalcAggregateSkill = NULL;

	if (!pFnCalcAggregateSkill)
		pFnCalcAggregateSkill = (UFunction*)UObject::GObjects()->Data[47332];

	UOnlineSubsystemSteamworks_execCalcAggregateSkill_Parms CalcAggregateSkill_Parms;
	memcpy(&CalcAggregateSkill_Parms.Mus, &Mus, 0xC);
	memcpy(&CalcAggregateSkill_Parms.Sigmas, &Sigmas, 0xC);

	this->ProcessEvent(pFnCalcAggregateSkill, &CalcAggregateSkill_Parms, NULL);

	if (OutAggregateMu)
		memcpy(OutAggregateMu, &CalcAggregateSkill_Parms.OutAggregateMu, 0x8);

	if (OutAggregateSigma)
		memcpy(OutAggregateSigma, &CalcAggregateSkill_Parms.OutAggregateSigma, 0x8);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterStatGuid
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// struct FString                 ClientStatGuid                 ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::RegisterStatGuid(struct FUniqueNetId PlayerID, struct FString* ClientStatGuid)
{
	static UFunction* pFnRegisterStatGuid = NULL;

	if (!pFnRegisterStatGuid)
		pFnRegisterStatGuid = (UFunction*)UObject::GObjects()->Data[47328];

	UOnlineSubsystemSteamworks_execRegisterStatGuid_Parms RegisterStatGuid_Parms;
	memcpy(&RegisterStatGuid_Parms.PlayerID, &PlayerID, 0x18);

	pFnRegisterStatGuid->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRegisterStatGuid, &RegisterStatGuid_Parms, NULL);

	pFnRegisterStatGuid->FunctionFlags |= 0x400;

	if (ClientStatGuid)
		memcpy(ClientStatGuid, &RegisterStatGuid_Parms.ClientStatGuid, 0xC);

	return RegisterStatGuid_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetClientStatGuid
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UOnlineSubsystemSteamworks::GetClientStatGuid()
{
	static UFunction* pFnGetClientStatGuid = NULL;

	if (!pFnGetClientStatGuid)
		pFnGetClientStatGuid = (UFunction*)UObject::GObjects()->Data[47326];

	UOnlineSubsystemSteamworks_execGetClientStatGuid_Parms GetClientStatGuid_Parms;

	pFnGetClientStatGuid->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetClientStatGuid, &GetClientStatGuid_Parms, NULL);

	pFnGetClientStatGuid->FunctionFlags |= 0x400;

	return GetClientStatGuid_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRegisterHostStatGuidCompleteDelegateDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearRegisterHostStatGuidCompleteDelegateDelegate(struct FScriptDelegate RegisterHostStatGuidCompleteDelegate)
{
	static UFunction* pFnClearRegisterHostStatGuidCompleteDelegateDelegate = NULL;

	if (!pFnClearRegisterHostStatGuidCompleteDelegateDelegate)
		pFnClearRegisterHostStatGuidCompleteDelegateDelegate = (UFunction*)UObject::GObjects()->Data[47324];

	UOnlineSubsystemSteamworks_execClearRegisterHostStatGuidCompleteDelegateDelegate_Parms ClearRegisterHostStatGuidCompleteDelegateDelegate_Parms;
	memcpy(&ClearRegisterHostStatGuidCompleteDelegateDelegate_Parms.RegisterHostStatGuidCompleteDelegate, &RegisterHostStatGuidCompleteDelegate, 0xC);

	this->ProcessEvent(pFnClearRegisterHostStatGuidCompleteDelegateDelegate, &ClearRegisterHostStatGuidCompleteDelegateDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRegisterHostStatGuidCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddRegisterHostStatGuidCompleteDelegate(struct FScriptDelegate RegisterHostStatGuidCompleteDelegate)
{
	static UFunction* pFnAddRegisterHostStatGuidCompleteDelegate = NULL;

	if (!pFnAddRegisterHostStatGuidCompleteDelegate)
		pFnAddRegisterHostStatGuidCompleteDelegate = (UFunction*)UObject::GObjects()->Data[47321];

	UOnlineSubsystemSteamworks_execAddRegisterHostStatGuidCompleteDelegate_Parms AddRegisterHostStatGuidCompleteDelegate_Parms;
	memcpy(&AddRegisterHostStatGuidCompleteDelegate_Parms.RegisterHostStatGuidCompleteDelegate, &RegisterHostStatGuidCompleteDelegate, 0xC);

	this->ProcessEvent(pFnAddRegisterHostStatGuidCompleteDelegate, &AddRegisterHostStatGuidCompleteDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRegisterHostStatGuidComplete
// [0x00120000]
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnRegisterHostStatGuidComplete(unsigned long bWasSuccessful)
{
	static UFunction* pFnOnRegisterHostStatGuidComplete = NULL;

	if (!pFnOnRegisterHostStatGuidComplete)
		pFnOnRegisterHostStatGuidComplete = (UFunction*)UObject::GObjects()->Data[47319];

	UOnlineSubsystemSteamworks_execOnRegisterHostStatGuidComplete_Parms OnRegisterHostStatGuidComplete_Parms;
	OnRegisterHostStatGuidComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnRegisterHostStatGuidComplete, &OnRegisterHostStatGuidComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterHostStatGuid
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 HostStatGuid                   ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::RegisterHostStatGuid(struct FString* HostStatGuid)
{
	static UFunction* pFnRegisterHostStatGuid = NULL;

	if (!pFnRegisterHostStatGuid)
		pFnRegisterHostStatGuid = (UFunction*)UObject::GObjects()->Data[47316];

	UOnlineSubsystemSteamworks_execRegisterHostStatGuid_Parms RegisterHostStatGuid_Parms;

	pFnRegisterHostStatGuid->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRegisterHostStatGuid, &RegisterHostStatGuid_Parms, NULL);

	pFnRegisterHostStatGuid->FunctionFlags |= 0x400;

	if (HostStatGuid)
		memcpy(HostStatGuid, &RegisterHostStatGuid_Parms.HostStatGuid, 0xC);

	return RegisterHostStatGuid_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetHostStatGuid
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UOnlineSubsystemSteamworks::GetHostStatGuid()
{
	static UFunction* pFnGetHostStatGuid = NULL;

	if (!pFnGetHostStatGuid)
		pFnGetHostStatGuid = (UFunction*)UObject::GObjects()->Data[47314];

	UOnlineSubsystemSteamworks_execGetHostStatGuid_Parms GetHostStatGuid_Parms;

	pFnGetHostStatGuid->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetHostStatGuid, &GetHostStatGuid_Parms, NULL);

	pFnGetHostStatGuid->FunctionFlags |= 0x400;

	return GetHostStatGuid_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendMessageReceivedDelegate
// [0x00020000]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         MessageDelegate                ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearFriendMessageReceivedDelegate(unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate)
{
	static UFunction* pFnClearFriendMessageReceivedDelegate = NULL;

	if (!pFnClearFriendMessageReceivedDelegate)
		pFnClearFriendMessageReceivedDelegate = (UFunction*)UObject::GObjects()->Data[47311];

	UOnlineSubsystemSteamworks_execClearFriendMessageReceivedDelegate_Parms ClearFriendMessageReceivedDelegate_Parms;
	ClearFriendMessageReceivedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy(&ClearFriendMessageReceivedDelegate_Parms.MessageDelegate, &MessageDelegate, 0xC);

	this->ProcessEvent(pFnClearFriendMessageReceivedDelegate, &ClearFriendMessageReceivedDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendMessageReceivedDelegate
// [0x00020000]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         MessageDelegate                ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddFriendMessageReceivedDelegate(unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate)
{
	static UFunction* pFnAddFriendMessageReceivedDelegate = NULL;

	if (!pFnAddFriendMessageReceivedDelegate)
		pFnAddFriendMessageReceivedDelegate = (UFunction*)UObject::GObjects()->Data[47308];

	UOnlineSubsystemSteamworks_execAddFriendMessageReceivedDelegate_Parms AddFriendMessageReceivedDelegate_Parms;
	AddFriendMessageReceivedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy(&AddFriendMessageReceivedDelegate_Parms.MessageDelegate, &MessageDelegate, 0xC);

	this->ProcessEvent(pFnAddFriendMessageReceivedDelegate, &AddFriendMessageReceivedDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendMessageReceived
// [0x00120000]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            SendingPlayer                  ( CPF_Parm )
// struct FString                 SendingNick                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnFriendMessageReceived(unsigned char LocalUserNum, struct FUniqueNetId SendingPlayer, struct FString SendingNick, struct FString Message)
{
	static UFunction* pFnOnFriendMessageReceived = NULL;

	if (!pFnOnFriendMessageReceived)
		pFnOnFriendMessageReceived = (UFunction*)UObject::GObjects()->Data[47303];

	UOnlineSubsystemSteamworks_execOnFriendMessageReceived_Parms OnFriendMessageReceived_Parms;
	OnFriendMessageReceived_Parms.LocalUserNum = LocalUserNum;
	memcpy(&OnFriendMessageReceived_Parms.SendingPlayer, &SendingPlayer, 0x18);
	memcpy(&OnFriendMessageReceived_Parms.SendingNick, &SendingNick, 0xC);
	memcpy(&OnFriendMessageReceived_Parms.Message, &Message, 0xC);

	this->ProcessEvent(pFnOnFriendMessageReceived, &OnFriendMessageReceived_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendMessages
// [0x00420000]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FOnlineFriendMessage > FriendMessages                 ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::GetFriendMessages(unsigned char LocalUserNum, TArray< struct FOnlineFriendMessage >* FriendMessages)
{
	static UFunction* pFnGetFriendMessages = NULL;

	if (!pFnGetFriendMessages)
		pFnGetFriendMessages = (UFunction*)UObject::GObjects()->Data[47299];

	UOnlineSubsystemSteamworks_execGetFriendMessages_Parms GetFriendMessages_Parms;
	GetFriendMessages_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnGetFriendMessages, &GetFriendMessages_Parms, NULL);

	if (FriendMessages)
		memcpy(FriendMessages, &GetFriendMessages_Parms.FriendMessages, 0xC);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearJoinFriendGameCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearJoinFriendGameCompleteDelegate(struct FScriptDelegate JoinFriendGameCompleteDelegate)
{
	static UFunction* pFnClearJoinFriendGameCompleteDelegate = NULL;

	if (!pFnClearJoinFriendGameCompleteDelegate)
		pFnClearJoinFriendGameCompleteDelegate = (UFunction*)UObject::GObjects()->Data[47297];

	UOnlineSubsystemSteamworks_execClearJoinFriendGameCompleteDelegate_Parms ClearJoinFriendGameCompleteDelegate_Parms;
	memcpy(&ClearJoinFriendGameCompleteDelegate_Parms.JoinFriendGameCompleteDelegate, &JoinFriendGameCompleteDelegate, 0xC);

	this->ProcessEvent(pFnClearJoinFriendGameCompleteDelegate, &ClearJoinFriendGameCompleteDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddJoinFriendGameCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddJoinFriendGameCompleteDelegate(struct FScriptDelegate JoinFriendGameCompleteDelegate)
{
	static UFunction* pFnAddJoinFriendGameCompleteDelegate = NULL;

	if (!pFnAddJoinFriendGameCompleteDelegate)
		pFnAddJoinFriendGameCompleteDelegate = (UFunction*)UObject::GObjects()->Data[47294];

	UOnlineSubsystemSteamworks_execAddJoinFriendGameCompleteDelegate_Parms AddJoinFriendGameCompleteDelegate_Parms;
	memcpy(&AddJoinFriendGameCompleteDelegate_Parms.JoinFriendGameCompleteDelegate, &JoinFriendGameCompleteDelegate, 0xC);

	this->ProcessEvent(pFnAddJoinFriendGameCompleteDelegate, &AddJoinFriendGameCompleteDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnJoinFriendGameComplete
// [0x00120000]
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnJoinFriendGameComplete(unsigned long bWasSuccessful)
{
	static UFunction* pFnOnJoinFriendGameComplete = NULL;

	if (!pFnOnJoinFriendGameComplete)
		pFnOnJoinFriendGameComplete = (UFunction*)UObject::GObjects()->Data[47292];

	UOnlineSubsystemSteamworks_execOnJoinFriendGameComplete_Parms OnJoinFriendGameComplete_Parms;
	OnJoinFriendGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnJoinFriendGameComplete, &OnJoinFriendGameComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.JoinFriendGame
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            Friend                         ( CPF_Parm )

bool UOnlineSubsystemSteamworks::JoinFriendGame(unsigned char LocalUserNum, struct FUniqueNetId Friend)
{
	static UFunction* pFnJoinFriendGame = NULL;

	if (!pFnJoinFriendGame)
		pFnJoinFriendGame = (UFunction*)UObject::GObjects()->Data[47288];

	UOnlineSubsystemSteamworks_execJoinFriendGame_Parms JoinFriendGame_Parms;
	JoinFriendGame_Parms.LocalUserNum = LocalUserNum;
	memcpy(&JoinFriendGame_Parms.Friend, &Friend, 0x18);

	pFnJoinFriendGame->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnJoinFriendGame, &JoinFriendGame_Parms, NULL);

	pFnJoinFriendGame->FunctionFlags |= 0x400;

	return JoinFriendGame_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReceivedGameInviteDelegate
// [0x00020002]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReceivedGameInviteDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReceivedGameInviteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate)
{
	static UFunction* pFnClearReceivedGameInviteDelegate = NULL;

	if (!pFnClearReceivedGameInviteDelegate)
		pFnClearReceivedGameInviteDelegate = (UFunction*)UObject::GObjects()->Data[47285];

	UOnlineSubsystemSteamworks_execClearReceivedGameInviteDelegate_Parms ClearReceivedGameInviteDelegate_Parms;
	ClearReceivedGameInviteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy(&ClearReceivedGameInviteDelegate_Parms.ReceivedGameInviteDelegate, &ReceivedGameInviteDelegate, 0xC);

	this->ProcessEvent(pFnClearReceivedGameInviteDelegate, &ClearReceivedGameInviteDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReceivedGameInviteDelegate
// [0x00020002]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReceivedGameInviteDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReceivedGameInviteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate)
{
	static UFunction* pFnAddReceivedGameInviteDelegate = NULL;

	if (!pFnAddReceivedGameInviteDelegate)
		pFnAddReceivedGameInviteDelegate = (UFunction*)UObject::GObjects()->Data[47281];

	UOnlineSubsystemSteamworks_execAddReceivedGameInviteDelegate_Parms AddReceivedGameInviteDelegate_Parms;
	AddReceivedGameInviteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy(&AddReceivedGameInviteDelegate_Parms.ReceivedGameInviteDelegate, &ReceivedGameInviteDelegate, 0xC);

	this->ProcessEvent(pFnAddReceivedGameInviteDelegate, &AddReceivedGameInviteDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReceivedGameInvite
// [0x00120000]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 InviterName                    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnReceivedGameInvite(unsigned char LocalUserNum, struct FString InviterName)
{
	static UFunction* pFnOnReceivedGameInvite = NULL;

	if (!pFnOnReceivedGameInvite)
		pFnOnReceivedGameInvite = (UFunction*)UObject::GObjects()->Data[47278];

	UOnlineSubsystemSteamworks_execOnReceivedGameInvite_Parms OnReceivedGameInvite_Parms;
	OnReceivedGameInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy(&OnReceivedGameInvite_Parms.InviterName, &InviterName, 0xC);

	this->ProcessEvent(pFnOnReceivedGameInvite, &OnReceivedGameInvite_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSentGameInviteDelegate
// [0x00020002]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         SentGameInviteDelegate         ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearSentGameInviteDelegate(unsigned char LocalUserNum, struct FScriptDelegate SentGameInviteDelegate)
{
	static UFunction* pFnClearSentGameInviteDelegate = NULL;

	if (!pFnClearSentGameInviteDelegate)
		pFnClearSentGameInviteDelegate = (UFunction*)UObject::GObjects()->Data[47275];

	UOnlineSubsystemSteamworks_execClearSentGameInviteDelegate_Parms ClearSentGameInviteDelegate_Parms;
	ClearSentGameInviteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy(&ClearSentGameInviteDelegate_Parms.SentGameInviteDelegate, &SentGameInviteDelegate, 0xC);

	this->ProcessEvent(pFnClearSentGameInviteDelegate, &ClearSentGameInviteDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddSentGameInviteDelegate
// [0x00020002]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         SentGameInviteDelegate         ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddSentGameInviteDelegate(unsigned char LocalUserNum, struct FScriptDelegate SentGameInviteDelegate)
{
	static UFunction* pFnAddSentGameInviteDelegate = NULL;

	if (!pFnAddSentGameInviteDelegate)
		pFnAddSentGameInviteDelegate = (UFunction*)UObject::GObjects()->Data[47271];

	UOnlineSubsystemSteamworks_execAddSentGameInviteDelegate_Parms AddSentGameInviteDelegate_Parms;
	AddSentGameInviteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy(&AddSentGameInviteDelegate_Parms.SentGameInviteDelegate, &SentGameInviteDelegate, 0xC);

	this->ProcessEvent(pFnAddSentGameInviteDelegate, &AddSentGameInviteDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnSentGameInvite
// [0x00120000]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnSentGameInvite(unsigned char LocalUserNum, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnSentGameInvite = NULL;

	if (!pFnOnSentGameInvite)
		pFnOnSentGameInvite = (UFunction*)UObject::GObjects()->Data[47268];

	UOnlineSubsystemSteamworks_execOnSentGameInvite_Parms OnSentGameInvite_Parms;
	OnSentGameInvite_Parms.LocalUserNum = LocalUserNum;
	OnSentGameInvite_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnSentGameInvite, &OnSentGameInvite_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriends
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FUniqueNetId >  Friends                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Text                           ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::SendGameInviteToFriends(unsigned char LocalUserNum, TArray< struct FUniqueNetId > Friends, struct FString Text)
{
	static UFunction* pFnSendGameInviteToFriends = NULL;

	if (!pFnSendGameInviteToFriends)
		pFnSendGameInviteToFriends = (UFunction*)UObject::GObjects()->Data[47262];

	UOnlineSubsystemSteamworks_execSendGameInviteToFriends_Parms SendGameInviteToFriends_Parms;
	SendGameInviteToFriends_Parms.LocalUserNum = LocalUserNum;
	memcpy(&SendGameInviteToFriends_Parms.Friends, &Friends, 0xC);
	memcpy(&SendGameInviteToFriends_Parms.Text, &Text, 0xC);

	pFnSendGameInviteToFriends->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSendGameInviteToFriends, &SendGameInviteToFriends_Parms, NULL);

	pFnSendGameInviteToFriends->FunctionFlags |= 0x400;

	return SendGameInviteToFriends_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriend
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            Friend                         ( CPF_Parm )
// struct FString                 Text                           ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::SendGameInviteToFriend(unsigned char LocalUserNum, struct FUniqueNetId Friend, struct FString Text)
{
	static UFunction* pFnSendGameInviteToFriend = NULL;

	if (!pFnSendGameInviteToFriend)
		pFnSendGameInviteToFriend = (UFunction*)UObject::GObjects()->Data[47257];

	UOnlineSubsystemSteamworks_execSendGameInviteToFriend_Parms SendGameInviteToFriend_Parms;
	SendGameInviteToFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy(&SendGameInviteToFriend_Parms.Friend, &Friend, 0x18);
	memcpy(&SendGameInviteToFriend_Parms.Text, &Text, 0xC);

	pFnSendGameInviteToFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSendGameInviteToFriend, &SendGameInviteToFriend_Parms, NULL);

	pFnSendGameInviteToFriend->FunctionFlags |= 0x400;

	return SendGameInviteToFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendMessageToFriend
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            Friend                         ( CPF_Parm )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::SendMessageToFriend(unsigned char LocalUserNum, struct FUniqueNetId Friend, struct FString Message)
{
	static UFunction* pFnSendMessageToFriend = NULL;

	if (!pFnSendMessageToFriend)
		pFnSendMessageToFriend = (UFunction*)UObject::GObjects()->Data[47252];

	UOnlineSubsystemSteamworks_execSendMessageToFriend_Parms SendMessageToFriend_Parms;
	SendMessageToFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy(&SendMessageToFriend_Parms.Friend, &Friend, 0x18);
	memcpy(&SendMessageToFriend_Parms.Message, &Message, 0xC);

	pFnSendMessageToFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSendMessageToFriend, &SendMessageToFriend_Parms, NULL);

	pFnSendMessageToFriend->FunctionFlags |= 0x400;

	return SendMessageToFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendInviteReceivedDelegate
// [0x00020002]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InviteDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearFriendInviteReceivedDelegate(unsigned char LocalUserNum, struct FScriptDelegate InviteDelegate)
{
	static UFunction* pFnClearFriendInviteReceivedDelegate = NULL;

	if (!pFnClearFriendInviteReceivedDelegate)
		pFnClearFriendInviteReceivedDelegate = (UFunction*)UObject::GObjects()->Data[47249];

	UOnlineSubsystemSteamworks_execClearFriendInviteReceivedDelegate_Parms ClearFriendInviteReceivedDelegate_Parms;
	ClearFriendInviteReceivedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy(&ClearFriendInviteReceivedDelegate_Parms.InviteDelegate, &InviteDelegate, 0xC);

	this->ProcessEvent(pFnClearFriendInviteReceivedDelegate, &ClearFriendInviteReceivedDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendInviteReceivedDelegate
// [0x00020002]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InviteDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddFriendInviteReceivedDelegate(unsigned char LocalUserNum, struct FScriptDelegate InviteDelegate)
{
	static UFunction* pFnAddFriendInviteReceivedDelegate = NULL;

	if (!pFnAddFriendInviteReceivedDelegate)
		pFnAddFriendInviteReceivedDelegate = (UFunction*)UObject::GObjects()->Data[47245];

	UOnlineSubsystemSteamworks_execAddFriendInviteReceivedDelegate_Parms AddFriendInviteReceivedDelegate_Parms;
	AddFriendInviteReceivedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy(&AddFriendInviteReceivedDelegate_Parms.InviteDelegate, &InviteDelegate, 0xC);

	this->ProcessEvent(pFnAddFriendInviteReceivedDelegate, &AddFriendInviteReceivedDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendInviteReceived
// [0x00120000]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            RequestingPlayer               ( CPF_Parm )
// struct FString                 RequestingNick                 ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnFriendInviteReceived(unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer, struct FString RequestingNick, struct FString Message)
{
	static UFunction* pFnOnFriendInviteReceived = NULL;

	if (!pFnOnFriendInviteReceived)
		pFnOnFriendInviteReceived = (UFunction*)UObject::GObjects()->Data[47240];

	UOnlineSubsystemSteamworks_execOnFriendInviteReceived_Parms OnFriendInviteReceived_Parms;
	OnFriendInviteReceived_Parms.LocalUserNum = LocalUserNum;
	memcpy(&OnFriendInviteReceived_Parms.RequestingPlayer, &RequestingPlayer, 0x18);
	memcpy(&OnFriendInviteReceived_Parms.RequestingNick, &RequestingNick, 0xC);
	memcpy(&OnFriendInviteReceived_Parms.Message, &Message, 0xC);

	this->ProcessEvent(pFnOnFriendInviteReceived, &OnFriendInviteReceived_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DenyFriendInvite
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            RequestingPlayer               ( CPF_Parm )

bool UOnlineSubsystemSteamworks::DenyFriendInvite(unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer)
{
	static UFunction* pFnDenyFriendInvite = NULL;

	if (!pFnDenyFriendInvite)
		pFnDenyFriendInvite = (UFunction*)UObject::GObjects()->Data[47236];

	UOnlineSubsystemSteamworks_execDenyFriendInvite_Parms DenyFriendInvite_Parms;
	DenyFriendInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy(&DenyFriendInvite_Parms.RequestingPlayer, &RequestingPlayer, 0x18);

	pFnDenyFriendInvite->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDenyFriendInvite, &DenyFriendInvite_Parms, NULL);

	pFnDenyFriendInvite->FunctionFlags |= 0x400;

	return DenyFriendInvite_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AcceptFriendInvite
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            RequestingPlayer               ( CPF_Parm )

bool UOnlineSubsystemSteamworks::AcceptFriendInvite(unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer)
{
	static UFunction* pFnAcceptFriendInvite = NULL;

	if (!pFnAcceptFriendInvite)
		pFnAcceptFriendInvite = (UFunction*)UObject::GObjects()->Data[47232];

	UOnlineSubsystemSteamworks_execAcceptFriendInvite_Parms AcceptFriendInvite_Parms;
	AcceptFriendInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy(&AcceptFriendInvite_Parms.RequestingPlayer, &RequestingPlayer, 0x18);

	pFnAcceptFriendInvite->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAcceptFriendInvite, &AcceptFriendInvite_Parms, NULL);

	pFnAcceptFriendInvite->FunctionFlags |= 0x400;

	return AcceptFriendInvite_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveFriend
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            FormerFriend                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::RemoveFriend(unsigned char LocalUserNum, struct FUniqueNetId FormerFriend)
{
	static UFunction* pFnRemoveFriend = NULL;

	if (!pFnRemoveFriend)
		pFnRemoveFriend = (UFunction*)UObject::GObjects()->Data[47228];

	UOnlineSubsystemSteamworks_execRemoveFriend_Parms RemoveFriend_Parms;
	RemoveFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy(&RemoveFriend_Parms.FormerFriend, &FormerFriend, 0x18);

	pFnRemoveFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRemoveFriend, &RemoveFriend_Parms, NULL);

	pFnRemoveFriend->FunctionFlags |= 0x400;

	return RemoveFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAddFriendByNameCompleteDelegate
// [0x00020002]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         FriendDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearAddFriendByNameCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* pFnClearAddFriendByNameCompleteDelegate = NULL;

	if (!pFnClearAddFriendByNameCompleteDelegate)
		pFnClearAddFriendByNameCompleteDelegate = (UFunction*)UObject::GObjects()->Data[47225];

	UOnlineSubsystemSteamworks_execClearAddFriendByNameCompleteDelegate_Parms ClearAddFriendByNameCompleteDelegate_Parms;
	ClearAddFriendByNameCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy(&ClearAddFriendByNameCompleteDelegate_Parms.FriendDelegate, &FriendDelegate, 0xC);

	this->ProcessEvent(pFnClearAddFriendByNameCompleteDelegate, &ClearAddFriendByNameCompleteDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAddFriendByNameCompleteDelegate
// [0x00020002]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         FriendDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddAddFriendByNameCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* pFnAddAddFriendByNameCompleteDelegate = NULL;

	if (!pFnAddAddFriendByNameCompleteDelegate)
		pFnAddAddFriendByNameCompleteDelegate = (UFunction*)UObject::GObjects()->Data[47221];

	UOnlineSubsystemSteamworks_execAddAddFriendByNameCompleteDelegate_Parms AddAddFriendByNameCompleteDelegate_Parms;
	AddAddFriendByNameCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy(&AddAddFriendByNameCompleteDelegate_Parms.FriendDelegate, &FriendDelegate, 0xC);

	this->ProcessEvent(pFnAddAddFriendByNameCompleteDelegate, &AddAddFriendByNameCompleteDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAddFriendByNameComplete
// [0x00120000]
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnAddFriendByNameComplete(unsigned long bWasSuccessful)
{
	static UFunction* pFnOnAddFriendByNameComplete = NULL;

	if (!pFnOnAddFriendByNameComplete)
		pFnOnAddFriendByNameComplete = (UFunction*)UObject::GObjects()->Data[47219];

	UOnlineSubsystemSteamworks_execOnAddFriendByNameComplete_Parms OnAddFriendByNameComplete_Parms;
	OnAddFriendByNameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnAddFriendByNameComplete, &OnAddFriendByNameComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendByName
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 FriendName                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Message                        ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::AddFriendByName(unsigned char LocalUserNum, struct FString FriendName, struct FString Message)
{
	static UFunction* pFnAddFriendByName = NULL;

	if (!pFnAddFriendByName)
		pFnAddFriendByName = (UFunction*)UObject::GObjects()->Data[47214];

	UOnlineSubsystemSteamworks_execAddFriendByName_Parms AddFriendByName_Parms;
	AddFriendByName_Parms.LocalUserNum = LocalUserNum;
	memcpy(&AddFriendByName_Parms.FriendName, &FriendName, 0xC);
	memcpy(&AddFriendByName_Parms.Message, &Message, 0xC);

	pFnAddFriendByName->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAddFriendByName, &AddFriendByName_Parms, NULL);

	pFnAddFriendByName->FunctionFlags |= 0x400;

	return AddFriendByName_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriend
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            NewFriend                      ( CPF_Parm )
// struct FString                 Message                        ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::AddFriend(unsigned char LocalUserNum, struct FUniqueNetId NewFriend, struct FString Message)
{
	static UFunction* pFnAddFriend = NULL;

	if (!pFnAddFriend)
		pFnAddFriend = (UFunction*)UObject::GObjects()->Data[47209];

	UOnlineSubsystemSteamworks_execAddFriend_Parms AddFriend_Parms;
	AddFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy(&AddFriend_Parms.NewFriend, &NewFriend, 0x18);
	memcpy(&AddFriend_Parms.Message, &Message, 0xC);

	pFnAddFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAddFriend, &AddFriend_Parms, NULL);

	pFnAddFriend->FunctionFlags |= 0x400;

	return AddFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetKeyboardInputResults
// [0x00420002]
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// unsigned char                  bWasCanceled                   ( CPF_Parm | CPF_OutParm )

struct FString UOnlineSubsystemSteamworks::GetKeyboardInputResults(unsigned char* bWasCanceled)
{
	static UFunction* pFnGetKeyboardInputResults = NULL;

	if (!pFnGetKeyboardInputResults)
		pFnGetKeyboardInputResults = (UFunction*)UObject::GObjects()->Data[47204];

	UOnlineSubsystemSteamworks_execGetKeyboardInputResults_Parms GetKeyboardInputResults_Parms;

	this->ProcessEvent(pFnGetKeyboardInputResults, &GetKeyboardInputResults_Parms, NULL);

	if (bWasCanceled)
		*bWasCanceled = GetKeyboardInputResults_Parms.bWasCanceled;

	return GetKeyboardInputResults_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearKeyboardInputDoneDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         InputDelegate                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearKeyboardInputDoneDelegate(struct FScriptDelegate InputDelegate)
{
	static UFunction* pFnClearKeyboardInputDoneDelegate = NULL;

	if (!pFnClearKeyboardInputDoneDelegate)
		pFnClearKeyboardInputDoneDelegate = (UFunction*)UObject::GObjects()->Data[47202];

	UOnlineSubsystemSteamworks_execClearKeyboardInputDoneDelegate_Parms ClearKeyboardInputDoneDelegate_Parms;
	memcpy(&ClearKeyboardInputDoneDelegate_Parms.InputDelegate, &InputDelegate, 0xC);

	this->ProcessEvent(pFnClearKeyboardInputDoneDelegate, &ClearKeyboardInputDoneDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddKeyboardInputDoneDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         InputDelegate                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddKeyboardInputDoneDelegate(struct FScriptDelegate InputDelegate)
{
	static UFunction* pFnAddKeyboardInputDoneDelegate = NULL;

	if (!pFnAddKeyboardInputDoneDelegate)
		pFnAddKeyboardInputDoneDelegate = (UFunction*)UObject::GObjects()->Data[47199];

	UOnlineSubsystemSteamworks_execAddKeyboardInputDoneDelegate_Parms AddKeyboardInputDoneDelegate_Parms;
	memcpy(&AddKeyboardInputDoneDelegate_Parms.InputDelegate, &InputDelegate, 0xC);

	this->ProcessEvent(pFnAddKeyboardInputDoneDelegate, &AddKeyboardInputDoneDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnKeyboardInputComplete
// [0x00120000]
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnKeyboardInputComplete(unsigned long bWasSuccessful)
{
	static UFunction* pFnOnKeyboardInputComplete = NULL;

	if (!pFnOnKeyboardInputComplete)
		pFnOnKeyboardInputComplete = (UFunction*)UObject::GObjects()->Data[47197];

	UOnlineSubsystemSteamworks_execOnKeyboardInputComplete_Parms OnKeyboardInputComplete_Parms;
	OnKeyboardInputComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnKeyboardInputComplete, &OnKeyboardInputComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowKeyboardUI
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 TitleText                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 DescriptionText                ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  KeyboardType                   ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bShouldValidate                ( CPF_OptionalParm | CPF_Parm )
// struct FString                 DefaultText                    ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// int                            MaxResultLength                ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowKeyboardUI(unsigned char LocalUserNum, struct FString TitleText, struct FString DescriptionText, unsigned char KeyboardType, unsigned long bShouldValidate, struct FString DefaultText, int MaxResultLength)
{
	static UFunction* pFnShowKeyboardUI = NULL;

	if (!pFnShowKeyboardUI)
		pFnShowKeyboardUI = (UFunction*)UObject::GObjects()->Data[47188];

	UOnlineSubsystemSteamworks_execShowKeyboardUI_Parms ShowKeyboardUI_Parms;
	ShowKeyboardUI_Parms.LocalUserNum = LocalUserNum;
	memcpy(&ShowKeyboardUI_Parms.TitleText, &TitleText, 0xC);
	memcpy(&ShowKeyboardUI_Parms.DescriptionText, &DescriptionText, 0xC);
	ShowKeyboardUI_Parms.KeyboardType = KeyboardType;
	ShowKeyboardUI_Parms.bShouldValidate = bShouldValidate;
	memcpy(&ShowKeyboardUI_Parms.DefaultText, &DefaultText, 0xC);
	ShowKeyboardUI_Parms.MaxResultLength = MaxResultLength;

	pFnShowKeyboardUI->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnShowKeyboardUI, &ShowKeyboardUI_Parms, NULL);

	pFnShowKeyboardUI->FunctionFlags |= 0x400;

	return ShowKeyboardUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetOnlineStatus
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            StatusId                       ( CPF_Parm )
// TArray< struct FLocalizedStringSetting > LocalizedStringSettings        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// TArray< struct FSettingsProperty > Properties                     ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::SetOnlineStatus(unsigned char LocalUserNum, int StatusId, TArray< struct FLocalizedStringSetting >* LocalizedStringSettings, TArray< struct FSettingsProperty >* Properties)
{
	static UFunction* pFnSetOnlineStatus = NULL;

	if (!pFnSetOnlineStatus)
		pFnSetOnlineStatus = (UFunction*)UObject::GObjects()->Data[47181];

	UOnlineSubsystemSteamworks_execSetOnlineStatus_Parms SetOnlineStatus_Parms;
	SetOnlineStatus_Parms.LocalUserNum = LocalUserNum;
	SetOnlineStatus_Parms.StatusId = StatusId;

	pFnSetOnlineStatus->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetOnlineStatus, &SetOnlineStatus_Parms, NULL);

	pFnSetOnlineStatus->FunctionFlags |= 0x400;

	if (LocalizedStringSettings)
		memcpy(LocalizedStringSettings, &SetOnlineStatus_Parms.LocalizedStringSettings, 0xC);

	if (Properties)
		memcpy(Properties, &SetOnlineStatus_Parms.Properties, 0xC);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLocalAccountNames
// [0x00420000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< struct FString >       Accounts                       ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::GetLocalAccountNames(TArray< struct FString >* Accounts)
{
	static UFunction* pFnGetLocalAccountNames = NULL;

	if (!pFnGetLocalAccountNames)
		pFnGetLocalAccountNames = (UFunction*)UObject::GObjects()->Data[47177];

	UOnlineSubsystemSteamworks_execGetLocalAccountNames_Parms GetLocalAccountNames_Parms;

	this->ProcessEvent(pFnGetLocalAccountNames, &GetLocalAccountNames_Parms, NULL);

	if (Accounts)
		memcpy(Accounts, &GetLocalAccountNames_Parms.Accounts, 0xC);

	return GetLocalAccountNames_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteLocalAccount
// [0x00024000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UserName                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Password                       ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::DeleteLocalAccount(struct FString UserName, struct FString Password)
{
	static UFunction* pFnDeleteLocalAccount = NULL;

	if (!pFnDeleteLocalAccount)
		pFnDeleteLocalAccount = (UFunction*)UObject::GObjects()->Data[47173];

	UOnlineSubsystemSteamworks_execDeleteLocalAccount_Parms DeleteLocalAccount_Parms;
	memcpy(&DeleteLocalAccount_Parms.UserName, &UserName, 0xC);
	memcpy(&DeleteLocalAccount_Parms.Password, &Password, 0xC);

	this->ProcessEvent(pFnDeleteLocalAccount, &DeleteLocalAccount_Parms, NULL);

	return DeleteLocalAccount_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RenameLocalAccount
// [0x00024000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 NewUserName                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 OldUserName                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Password                       ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::RenameLocalAccount(struct FString NewUserName, struct FString OldUserName, struct FString Password)
{
	static UFunction* pFnRenameLocalAccount = NULL;

	if (!pFnRenameLocalAccount)
		pFnRenameLocalAccount = (UFunction*)UObject::GObjects()->Data[47168];

	UOnlineSubsystemSteamworks_execRenameLocalAccount_Parms RenameLocalAccount_Parms;
	memcpy(&RenameLocalAccount_Parms.NewUserName, &NewUserName, 0xC);
	memcpy(&RenameLocalAccount_Parms.OldUserName, &OldUserName, 0xC);
	memcpy(&RenameLocalAccount_Parms.Password, &Password, 0xC);

	this->ProcessEvent(pFnRenameLocalAccount, &RenameLocalAccount_Parms, NULL);

	return RenameLocalAccount_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLocalAccount
// [0x00024000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UserName                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Password                       ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::CreateLocalAccount(struct FString UserName, struct FString Password)
{
	static UFunction* pFnCreateLocalAccount = NULL;

	if (!pFnCreateLocalAccount)
		pFnCreateLocalAccount = (UFunction*)UObject::GObjects()->Data[47164];

	UOnlineSubsystemSteamworks_execCreateLocalAccount_Parms CreateLocalAccount_Parms;
	memcpy(&CreateLocalAccount_Parms.UserName, &UserName, 0xC);
	memcpy(&CreateLocalAccount_Parms.Password, &Password, 0xC);

	this->ProcessEvent(pFnCreateLocalAccount, &CreateLocalAccount_Parms, NULL);

	return CreateLocalAccount_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCreateOnlineAccountCompletedDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         AccountCreateDelegate          ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearCreateOnlineAccountCompletedDelegate(struct FScriptDelegate AccountCreateDelegate)
{
	static UFunction* pFnClearCreateOnlineAccountCompletedDelegate = NULL;

	if (!pFnClearCreateOnlineAccountCompletedDelegate)
		pFnClearCreateOnlineAccountCompletedDelegate = (UFunction*)UObject::GObjects()->Data[47162];

	UOnlineSubsystemSteamworks_execClearCreateOnlineAccountCompletedDelegate_Parms ClearCreateOnlineAccountCompletedDelegate_Parms;
	memcpy(&ClearCreateOnlineAccountCompletedDelegate_Parms.AccountCreateDelegate, &AccountCreateDelegate, 0xC);

	this->ProcessEvent(pFnClearCreateOnlineAccountCompletedDelegate, &ClearCreateOnlineAccountCompletedDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCreateOnlineAccountCompletedDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         AccountCreateDelegate          ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddCreateOnlineAccountCompletedDelegate(struct FScriptDelegate AccountCreateDelegate)
{
	static UFunction* pFnAddCreateOnlineAccountCompletedDelegate = NULL;

	if (!pFnAddCreateOnlineAccountCompletedDelegate)
		pFnAddCreateOnlineAccountCompletedDelegate = (UFunction*)UObject::GObjects()->Data[47159];

	UOnlineSubsystemSteamworks_execAddCreateOnlineAccountCompletedDelegate_Parms AddCreateOnlineAccountCompletedDelegate_Parms;
	memcpy(&AddCreateOnlineAccountCompletedDelegate_Parms.AccountCreateDelegate, &AccountCreateDelegate, 0xC);

	this->ProcessEvent(pFnAddCreateOnlineAccountCompletedDelegate, &AddCreateOnlineAccountCompletedDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCreateOnlineAccountCompleted
// [0x00120000]
// Parameters infos:
// unsigned char                  ErrorStatus                    ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnCreateOnlineAccountCompleted(unsigned char ErrorStatus)
{
	static UFunction* pFnOnCreateOnlineAccountCompleted = NULL;

	if (!pFnOnCreateOnlineAccountCompleted)
		pFnOnCreateOnlineAccountCompleted = (UFunction*)UObject::GObjects()->Data[47157];

	UOnlineSubsystemSteamworks_execOnCreateOnlineAccountCompleted_Parms OnCreateOnlineAccountCompleted_Parms;
	OnCreateOnlineAccountCompleted_Parms.ErrorStatus = ErrorStatus;

	this->ProcessEvent(pFnOnCreateOnlineAccountCompleted, &OnCreateOnlineAccountCompleted_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateOnlineAccount
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UserName                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Password                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 EmailAddress                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 ProductKey                     ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::CreateOnlineAccount(struct FString UserName, struct FString Password, struct FString EmailAddress, struct FString ProductKey)
{
	static UFunction* pFnCreateOnlineAccount = NULL;

	if (!pFnCreateOnlineAccount)
		pFnCreateOnlineAccount = (UFunction*)UObject::GObjects()->Data[47151];

	UOnlineSubsystemSteamworks_execCreateOnlineAccount_Parms CreateOnlineAccount_Parms;
	memcpy(&CreateOnlineAccount_Parms.UserName, &UserName, 0xC);
	memcpy(&CreateOnlineAccount_Parms.Password, &Password, 0xC);
	memcpy(&CreateOnlineAccount_Parms.EmailAddress, &EmailAddress, 0xC);
	memcpy(&CreateOnlineAccount_Parms.ProductKey, &ProductKey, 0xC);

	pFnCreateOnlineAccount->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnCreateOnlineAccount, &CreateOnlineAccount_Parms, NULL);

	pFnCreateOnlineAccount->FunctionFlags |= 0x400;

	return CreateOnlineAccount_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDownloadedFile
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ClearDownloadedFile(struct FString Filename)
{
	static UFunction* pFnClearDownloadedFile = NULL;

	if (!pFnClearDownloadedFile)
		pFnClearDownloadedFile = (UFunction*)UObject::GObjects()->Data[47148];

	UOnlineSubsystemSteamworks_execClearDownloadedFile_Parms ClearDownloadedFile_Parms;
	memcpy(&ClearDownloadedFile_Parms.Filename, &Filename, 0xC);

	pFnClearDownloadedFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnClearDownloadedFile, &ClearDownloadedFile_Parms, NULL);

	pFnClearDownloadedFile->FunctionFlags |= 0x400;

	return ClearDownloadedFile_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDownloadedFiles
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemSteamworks::ClearDownloadedFiles()
{
	static UFunction* pFnClearDownloadedFiles = NULL;

	if (!pFnClearDownloadedFiles)
		pFnClearDownloadedFiles = (UFunction*)UObject::GObjects()->Data[47146];

	UOnlineSubsystemSteamworks_execClearDownloadedFiles_Parms ClearDownloadedFiles_Parms;

	pFnClearDownloadedFiles->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnClearDownloadedFiles, &ClearDownloadedFiles_Parms, NULL);

	pFnClearDownloadedFiles->FunctionFlags |= 0x400;

	return ClearDownloadedFiles_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileState
// [0x00020002]
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

unsigned char UOnlineSubsystemSteamworks::GetTitleFileState(struct FString Filename)
{
	static UFunction* pFnGetTitleFileState = NULL;

	if (!pFnGetTitleFileState)
		pFnGetTitleFileState = (UFunction*)UObject::GObjects()->Data[47142];

	UOnlineSubsystemSteamworks_execGetTitleFileState_Parms GetTitleFileState_Parms;
	memcpy(&GetTitleFileState_Parms.Filename, &Filename, 0xC);

	this->ProcessEvent(pFnGetTitleFileState, &GetTitleFileState_Parms, NULL);

	return GetTitleFileState_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileContents
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// TArray< unsigned char >        FileContents                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::GetTitleFileContents(struct FString Filename, TArray< unsigned char >* FileContents)
{
	static UFunction* pFnGetTitleFileContents = NULL;

	if (!pFnGetTitleFileContents)
		pFnGetTitleFileContents = (UFunction*)UObject::GObjects()->Data[47137];

	UOnlineSubsystemSteamworks_execGetTitleFileContents_Parms GetTitleFileContents_Parms;
	memcpy(&GetTitleFileContents_Parms.Filename, &Filename, 0xC);

	pFnGetTitleFileContents->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetTitleFileContents, &GetTitleFileContents_Parms, NULL);

	pFnGetTitleFileContents->FunctionFlags |= 0x400;

	if (FileContents)
		memcpy(FileContents, &GetTitleFileContents_Parms.FileContents, 0xC);

	return GetTitleFileContents_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadTitleFileCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadTitleFileCompleteDelegate(struct FScriptDelegate ReadTitleFileCompleteDelegate)
{
	static UFunction* pFnClearReadTitleFileCompleteDelegate = NULL;

	if (!pFnClearReadTitleFileCompleteDelegate)
		pFnClearReadTitleFileCompleteDelegate = (UFunction*)UObject::GObjects()->Data[47135];

	UOnlineSubsystemSteamworks_execClearReadTitleFileCompleteDelegate_Parms ClearReadTitleFileCompleteDelegate_Parms;
	memcpy(&ClearReadTitleFileCompleteDelegate_Parms.ReadTitleFileCompleteDelegate, &ReadTitleFileCompleteDelegate, 0xC);

	this->ProcessEvent(pFnClearReadTitleFileCompleteDelegate, &ClearReadTitleFileCompleteDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadTitleFileCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadTitleFileCompleteDelegate(struct FScriptDelegate ReadTitleFileCompleteDelegate)
{
	static UFunction* pFnAddReadTitleFileCompleteDelegate = NULL;

	if (!pFnAddReadTitleFileCompleteDelegate)
		pFnAddReadTitleFileCompleteDelegate = (UFunction*)UObject::GObjects()->Data[47132];

	UOnlineSubsystemSteamworks_execAddReadTitleFileCompleteDelegate_Parms AddReadTitleFileCompleteDelegate_Parms;
	memcpy(&AddReadTitleFileCompleteDelegate_Parms.ReadTitleFileCompleteDelegate, &ReadTitleFileCompleteDelegate, 0xC);

	this->ProcessEvent(pFnAddReadTitleFileCompleteDelegate, &AddReadTitleFileCompleteDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadTitleFile
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 FileToRead                     ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ReadTitleFile(unsigned char LocalUserNum, struct FString FileToRead)
{
	static UFunction* pFnReadTitleFile = NULL;

	if (!pFnReadTitleFile)
		pFnReadTitleFile = (UFunction*)UObject::GObjects()->Data[47128];

	UOnlineSubsystemSteamworks_execReadTitleFile_Parms ReadTitleFile_Parms;
	ReadTitleFile_Parms.LocalUserNum = LocalUserNum;
	memcpy(&ReadTitleFile_Parms.FileToRead, &FileToRead, 0xC);

	pFnReadTitleFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnReadTitleFile, &ReadTitleFile_Parms, NULL);

	pFnReadTitleFile->FunctionFlags |= 0x400;

	return ReadTitleFile_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadTitleFileComplete
// [0x00120000]
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnReadTitleFileComplete(unsigned long bWasSuccessful, struct FString Filename)
{
	static UFunction* pFnOnReadTitleFileComplete = NULL;

	if (!pFnOnReadTitleFileComplete)
		pFnOnReadTitleFileComplete = (UFunction*)UObject::GObjects()->Data[47125];

	UOnlineSubsystemSteamworks_execOnReadTitleFileComplete_Parms OnReadTitleFileComplete_Parms;
	OnReadTitleFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy(&OnReadTitleFileComplete_Parms.Filename, &Filename, 0xC);

	this->ProcessEvent(pFnOnReadTitleFileComplete, &OnReadTitleFileComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearShareTitleFileCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         ShareTitleFileCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearShareTitleFileCompleteDelegate(struct FScriptDelegate ShareTitleFileCompleteDelegate)
{
	static UFunction* pFnClearShareTitleFileCompleteDelegate = NULL;

	if (!pFnClearShareTitleFileCompleteDelegate)
		pFnClearShareTitleFileCompleteDelegate = (UFunction*)UObject::GObjects()->Data[47123];

	UOnlineSubsystemSteamworks_execClearShareTitleFileCompleteDelegate_Parms ClearShareTitleFileCompleteDelegate_Parms;
	memcpy(&ClearShareTitleFileCompleteDelegate_Parms.ShareTitleFileCompleteDelegate, &ShareTitleFileCompleteDelegate, 0xC);

	this->ProcessEvent(pFnClearShareTitleFileCompleteDelegate, &ClearShareTitleFileCompleteDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddShareTitleFileCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         ShareTitleFileCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddShareTitleFileCompleteDelegate(struct FScriptDelegate ShareTitleFileCompleteDelegate)
{
	static UFunction* pFnAddShareTitleFileCompleteDelegate = NULL;

	if (!pFnAddShareTitleFileCompleteDelegate)
		pFnAddShareTitleFileCompleteDelegate = (UFunction*)UObject::GObjects()->Data[47120];

	UOnlineSubsystemSteamworks_execAddShareTitleFileCompleteDelegate_Parms AddShareTitleFileCompleteDelegate_Parms;
	memcpy(&AddShareTitleFileCompleteDelegate_Parms.ShareTitleFileCompleteDelegate, &ShareTitleFileCompleteDelegate, 0xC);

	this->ProcessEvent(pFnAddShareTitleFileCompleteDelegate, &AddShareTitleFileCompleteDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShareTitleFile
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 FileToShare                    ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ShareTitleFile(struct FString FileToShare)
{
	static UFunction* pFnShareTitleFile = NULL;

	if (!pFnShareTitleFile)
		pFnShareTitleFile = (UFunction*)UObject::GObjects()->Data[47117];

	UOnlineSubsystemSteamworks_execShareTitleFile_Parms ShareTitleFile_Parms;
	memcpy(&ShareTitleFile_Parms.FileToShare, &FileToShare, 0xC);

	pFnShareTitleFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnShareTitleFile, &ShareTitleFile_Parms, NULL);

	pFnShareTitleFile->FunctionFlags |= 0x400;

	return ShareTitleFile_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnShareTitleFileComplete
// [0x00120000]
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 UGCHandle                      ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::OnShareTitleFileComplete(unsigned long bWasSuccessful, struct FString Filename, struct FString UGCHandle)
{
	static UFunction* pFnOnShareTitleFileComplete = NULL;

	if (!pFnOnShareTitleFileComplete)
		pFnOnShareTitleFileComplete = (UFunction*)UObject::GObjects()->Data[47113];

	UOnlineSubsystemSteamworks_execOnShareTitleFileComplete_Parms OnShareTitleFileComplete_Parms;
	OnShareTitleFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy(&OnShareTitleFileComplete_Parms.Filename, &Filename, 0xC);
	memcpy(&OnShareTitleFileComplete_Parms.UGCHandle, &UGCHandle, 0xC);

	this->ProcessEvent(pFnOnShareTitleFileComplete, &OnShareTitleFileComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearStorageDeviceChangeDelegate
// [0x00020000]
// Parameters infos:
// struct FScriptDelegate         StorageDeviceChangeDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearStorageDeviceChangeDelegate(struct FScriptDelegate StorageDeviceChangeDelegate)
{
	static UFunction* pFnClearStorageDeviceChangeDelegate = NULL;

	if (!pFnClearStorageDeviceChangeDelegate)
		pFnClearStorageDeviceChangeDelegate = (UFunction*)UObject::GObjects()->Data[47111];

	UOnlineSubsystemSteamworks_execClearStorageDeviceChangeDelegate_Parms ClearStorageDeviceChangeDelegate_Parms;
	memcpy(&ClearStorageDeviceChangeDelegate_Parms.StorageDeviceChangeDelegate, &StorageDeviceChangeDelegate, 0xC);

	this->ProcessEvent(pFnClearStorageDeviceChangeDelegate, &ClearStorageDeviceChangeDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddStorageDeviceChangeDelegate
// [0x00020000]
// Parameters infos:
// struct FScriptDelegate         StorageDeviceChangeDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddStorageDeviceChangeDelegate(struct FScriptDelegate StorageDeviceChangeDelegate)
{
	static UFunction* pFnAddStorageDeviceChangeDelegate = NULL;

	if (!pFnAddStorageDeviceChangeDelegate)
		pFnAddStorageDeviceChangeDelegate = (UFunction*)UObject::GObjects()->Data[47109];

	UOnlineSubsystemSteamworks_execAddStorageDeviceChangeDelegate_Parms AddStorageDeviceChangeDelegate_Parms;
	memcpy(&AddStorageDeviceChangeDelegate_Parms.StorageDeviceChangeDelegate, &StorageDeviceChangeDelegate, 0xC);

	this->ProcessEvent(pFnAddStorageDeviceChangeDelegate, &AddStorageDeviceChangeDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStorageDeviceChange
// [0x00120000]
// Parameters infos:

void UOnlineSubsystemSteamworks::OnStorageDeviceChange()
{
	static UFunction* pFnOnStorageDeviceChange = NULL;

	if (!pFnOnStorageDeviceChange)
		pFnOnStorageDeviceChange = (UFunction*)UObject::GObjects()->Data[47108];

	UOnlineSubsystemSteamworks_execOnStorageDeviceChange_Parms OnStorageDeviceChange_Parms;

	this->ProcessEvent(pFnOnStorageDeviceChange, &OnStorageDeviceChange_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLocale
// [0x00020002]
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UOnlineSubsystemSteamworks::GetLocale()
{
	static UFunction* pFnGetLocale = NULL;

	if (!pFnGetLocale)
		pFnGetLocale = (UFunction*)UObject::GObjects()->Data[47106];

	UOnlineSubsystemSteamworks_execGetLocale_Parms GetLocale_Parms;

	this->ProcessEvent(pFnGetLocale, &GetLocale_Parms, NULL);

	return GetLocale_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNATType
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char UOnlineSubsystemSteamworks::GetNATType()
{
	static UFunction* pFnGetNATType = NULL;

	if (!pFnGetNATType)
		pFnGetNATType = (UFunction*)UObject::GObjects()->Data[47104];

	UOnlineSubsystemSteamworks_execGetNATType_Parms GetNATType_Parms;

	pFnGetNATType->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetNATType, &GetNATType_Parms, NULL);

	pFnGetNATType->FunctionFlags |= 0x400;

	return GetNATType_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearConnectionStatusChangeDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         ConnectionStatusDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearConnectionStatusChangeDelegate(struct FScriptDelegate ConnectionStatusDelegate)
{
	static UFunction* pFnClearConnectionStatusChangeDelegate = NULL;

	if (!pFnClearConnectionStatusChangeDelegate)
		pFnClearConnectionStatusChangeDelegate = (UFunction*)UObject::GObjects()->Data[47102];

	UOnlineSubsystemSteamworks_execClearConnectionStatusChangeDelegate_Parms ClearConnectionStatusChangeDelegate_Parms;
	memcpy(&ClearConnectionStatusChangeDelegate_Parms.ConnectionStatusDelegate, &ConnectionStatusDelegate, 0xC);

	this->ProcessEvent(pFnClearConnectionStatusChangeDelegate, &ClearConnectionStatusChangeDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddConnectionStatusChangeDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         ConnectionStatusDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddConnectionStatusChangeDelegate(struct FScriptDelegate ConnectionStatusDelegate)
{
	static UFunction* pFnAddConnectionStatusChangeDelegate = NULL;

	if (!pFnAddConnectionStatusChangeDelegate)
		pFnAddConnectionStatusChangeDelegate = (UFunction*)UObject::GObjects()->Data[47099];

	UOnlineSubsystemSteamworks_execAddConnectionStatusChangeDelegate_Parms AddConnectionStatusChangeDelegate_Parms;
	memcpy(&AddConnectionStatusChangeDelegate_Parms.ConnectionStatusDelegate, &ConnectionStatusDelegate, 0xC);

	this->ProcessEvent(pFnAddConnectionStatusChangeDelegate, &AddConnectionStatusChangeDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnConnectionStatusChange
// [0x00120000]
// Parameters infos:
// unsigned char                  ConnectionStatus               ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnConnectionStatusChange(unsigned char ConnectionStatus)
{
	static UFunction* pFnOnConnectionStatusChange = NULL;

	if (!pFnOnConnectionStatusChange)
		pFnOnConnectionStatusChange = (UFunction*)UObject::GObjects()->Data[47097];

	UOnlineSubsystemSteamworks_execOnConnectionStatusChange_Parms OnConnectionStatusChange_Parms;
	OnConnectionStatusChange_Parms.ConnectionStatus = ConnectionStatus;

	this->ProcessEvent(pFnOnConnectionStatusChange, &OnConnectionStatusChange_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsControllerConnected
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ControllerId                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::IsControllerConnected(int ControllerId)
{
	static UFunction* pFnIsControllerConnected = NULL;

	if (!pFnIsControllerConnected)
		pFnIsControllerConnected = (UFunction*)UObject::GObjects()->Data[47094];

	UOnlineSubsystemSteamworks_execIsControllerConnected_Parms IsControllerConnected_Parms;
	IsControllerConnected_Parms.ControllerId = ControllerId;

	pFnIsControllerConnected->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIsControllerConnected, &IsControllerConnected_Parms, NULL);

	pFnIsControllerConnected->FunctionFlags |= 0x400;

	return IsControllerConnected_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearControllerChangeDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         ControllerChangeDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearControllerChangeDelegate(struct FScriptDelegate ControllerChangeDelegate)
{
	static UFunction* pFnClearControllerChangeDelegate = NULL;

	if (!pFnClearControllerChangeDelegate)
		pFnClearControllerChangeDelegate = (UFunction*)UObject::GObjects()->Data[47092];

	UOnlineSubsystemSteamworks_execClearControllerChangeDelegate_Parms ClearControllerChangeDelegate_Parms;
	memcpy(&ClearControllerChangeDelegate_Parms.ControllerChangeDelegate, &ControllerChangeDelegate, 0xC);

	this->ProcessEvent(pFnClearControllerChangeDelegate, &ClearControllerChangeDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddControllerChangeDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         ControllerChangeDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddControllerChangeDelegate(struct FScriptDelegate ControllerChangeDelegate)
{
	static UFunction* pFnAddControllerChangeDelegate = NULL;

	if (!pFnAddControllerChangeDelegate)
		pFnAddControllerChangeDelegate = (UFunction*)UObject::GObjects()->Data[47089];

	UOnlineSubsystemSteamworks_execAddControllerChangeDelegate_Parms AddControllerChangeDelegate_Parms;
	memcpy(&AddControllerChangeDelegate_Parms.ControllerChangeDelegate, &ControllerChangeDelegate, 0xC);

	this->ProcessEvent(pFnAddControllerChangeDelegate, &AddControllerChangeDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerChange
// [0x00120000]
// Parameters infos:
// int                            ControllerId                   ( CPF_Parm )
// unsigned long                  bIsConnected                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnControllerChange(int ControllerId, unsigned long bIsConnected)
{
	static UFunction* pFnOnControllerChange = NULL;

	if (!pFnOnControllerChange)
		pFnOnControllerChange = (UFunction*)UObject::GObjects()->Data[47086];

	UOnlineSubsystemSteamworks_execOnControllerChange_Parms OnControllerChange_Parms;
	OnControllerChange_Parms.ControllerId = ControllerId;
	OnControllerChange_Parms.bIsConnected = bIsConnected;

	this->ProcessEvent(pFnOnControllerChange, &OnControllerChange_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetNetworkNotificationPosition
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  NewPos                         ( CPF_Parm )

void UOnlineSubsystemSteamworks::SetNetworkNotificationPosition(unsigned char NewPos)
{
	static UFunction* pFnSetNetworkNotificationPosition = NULL;

	if (!pFnSetNetworkNotificationPosition)
		pFnSetNetworkNotificationPosition = (UFunction*)UObject::GObjects()->Data[47084];

	UOnlineSubsystemSteamworks_execSetNetworkNotificationPosition_Parms SetNetworkNotificationPosition_Parms;
	SetNetworkNotificationPosition_Parms.NewPos = NewPos;

	pFnSetNetworkNotificationPosition->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetNetworkNotificationPosition, &SetNetworkNotificationPosition_Parms, NULL);

	pFnSetNetworkNotificationPosition->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNetworkNotificationPosition
// [0x00020002]
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char UOnlineSubsystemSteamworks::GetNetworkNotificationPosition()
{
	static UFunction* pFnGetNetworkNotificationPosition = NULL;

	if (!pFnGetNetworkNotificationPosition)
		pFnGetNetworkNotificationPosition = (UFunction*)UObject::GObjects()->Data[47081];

	UOnlineSubsystemSteamworks_execGetNetworkNotificationPosition_Parms GetNetworkNotificationPosition_Parms;

	this->ProcessEvent(pFnGetNetworkNotificationPosition, &GetNetworkNotificationPosition_Parms, NULL);

	return GetNetworkNotificationPosition_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearExternalUIChangeDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         ExternalUIDelegate             ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearExternalUIChangeDelegate(struct FScriptDelegate ExternalUIDelegate)
{
	static UFunction* pFnClearExternalUIChangeDelegate = NULL;

	if (!pFnClearExternalUIChangeDelegate)
		pFnClearExternalUIChangeDelegate = (UFunction*)UObject::GObjects()->Data[47079];

	UOnlineSubsystemSteamworks_execClearExternalUIChangeDelegate_Parms ClearExternalUIChangeDelegate_Parms;
	memcpy(&ClearExternalUIChangeDelegate_Parms.ExternalUIDelegate, &ExternalUIDelegate, 0xC);

	this->ProcessEvent(pFnClearExternalUIChangeDelegate, &ClearExternalUIChangeDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddExternalUIChangeDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         ExternalUIDelegate             ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddExternalUIChangeDelegate(struct FScriptDelegate ExternalUIDelegate)
{
	static UFunction* pFnAddExternalUIChangeDelegate = NULL;

	if (!pFnAddExternalUIChangeDelegate)
		pFnAddExternalUIChangeDelegate = (UFunction*)UObject::GObjects()->Data[47076];

	UOnlineSubsystemSteamworks_execAddExternalUIChangeDelegate_Parms AddExternalUIChangeDelegate_Parms;
	memcpy(&AddExternalUIChangeDelegate_Parms.ExternalUIDelegate, &ExternalUIDelegate, 0xC);

	this->ProcessEvent(pFnAddExternalUIChangeDelegate, &AddExternalUIChangeDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnExternalUIChange
// [0x00120000]
// Parameters infos:
// unsigned long                  bIsOpening                     ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnExternalUIChange(unsigned long bIsOpening)
{
	static UFunction* pFnOnExternalUIChange = NULL;

	if (!pFnOnExternalUIChange)
		pFnOnExternalUIChange = (UFunction*)UObject::GObjects()->Data[47074];

	UOnlineSubsystemSteamworks_execOnExternalUIChange_Parms OnExternalUIChange_Parms;
	OnExternalUIChange_Parms.bIsOpening = bIsOpening;

	this->ProcessEvent(pFnOnExternalUIChange, &OnExternalUIChange_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLinkStatusChangeDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         LinkStatusDelegate             ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearLinkStatusChangeDelegate(struct FScriptDelegate LinkStatusDelegate)
{
	static UFunction* pFnClearLinkStatusChangeDelegate = NULL;

	if (!pFnClearLinkStatusChangeDelegate)
		pFnClearLinkStatusChangeDelegate = (UFunction*)UObject::GObjects()->Data[47072];

	UOnlineSubsystemSteamworks_execClearLinkStatusChangeDelegate_Parms ClearLinkStatusChangeDelegate_Parms;
	memcpy(&ClearLinkStatusChangeDelegate_Parms.LinkStatusDelegate, &LinkStatusDelegate, 0xC);

	this->ProcessEvent(pFnClearLinkStatusChangeDelegate, &ClearLinkStatusChangeDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLinkStatusChangeDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         LinkStatusDelegate             ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddLinkStatusChangeDelegate(struct FScriptDelegate LinkStatusDelegate)
{
	static UFunction* pFnAddLinkStatusChangeDelegate = NULL;

	if (!pFnAddLinkStatusChangeDelegate)
		pFnAddLinkStatusChangeDelegate = (UFunction*)UObject::GObjects()->Data[47069];

	UOnlineSubsystemSteamworks_execAddLinkStatusChangeDelegate_Parms AddLinkStatusChangeDelegate_Parms;
	memcpy(&AddLinkStatusChangeDelegate_Parms.LinkStatusDelegate, &LinkStatusDelegate, 0xC);

	this->ProcessEvent(pFnAddLinkStatusChangeDelegate, &AddLinkStatusChangeDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLinkStatusChange
// [0x00120000]
// Parameters infos:
// unsigned long                  bIsConnected                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnLinkStatusChange(unsigned long bIsConnected)
{
	static UFunction* pFnOnLinkStatusChange = NULL;

	if (!pFnOnLinkStatusChange)
		pFnOnLinkStatusChange = (UFunction*)UObject::GObjects()->Data[47067];

	UOnlineSubsystemSteamworks_execOnLinkStatusChange_Parms OnLinkStatusChange_Parms;
	OnLinkStatusChange_Parms.bIsConnected = bIsConnected;

	this->ProcessEvent(pFnOnLinkStatusChange, &OnLinkStatusChange_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasLinkConnection
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemSteamworks::HasLinkConnection()
{
	static UFunction* pFnHasLinkConnection = NULL;

	if (!pFnHasLinkConnection)
		pFnHasLinkConnection = (UFunction*)UObject::GObjects()->Data[47065];

	UOnlineSubsystemSteamworks_execHasLinkConnection_Parms HasLinkConnection_Parms;

	pFnHasLinkConnection->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnHasLinkConnection, &HasLinkConnection_Parms, NULL);

	pFnHasLinkConnection->FunctionFlags |= 0x400;

	return HasLinkConnection_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerUniqueNetIdFromIndex
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// struct FUniqueNetId            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            UserIndex                      ( CPF_Parm )

struct FUniqueNetId UOnlineSubsystemSteamworks::eventGetPlayerUniqueNetIdFromIndex(int UserIndex)
{
	static UFunction* pFnGetPlayerUniqueNetIdFromIndex = NULL;

	if (!pFnGetPlayerUniqueNetIdFromIndex)
		pFnGetPlayerUniqueNetIdFromIndex = (UFunction*)UObject::GObjects()->Data[47061];

	UOnlineSubsystemSteamworks_eventGetPlayerUniqueNetIdFromIndex_Parms GetPlayerUniqueNetIdFromIndex_Parms;
	GetPlayerUniqueNetIdFromIndex_Parms.UserIndex = UserIndex;

	this->ProcessEvent(pFnGetPlayerUniqueNetIdFromIndex, &GetPlayerUniqueNetIdFromIndex_Parms, NULL);

	return GetPlayerUniqueNetIdFromIndex_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNicknameFromIndex
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            UserIndex                      ( CPF_Parm )

struct FString UOnlineSubsystemSteamworks::eventGetPlayerNicknameFromIndex(int UserIndex)
{
	static UFunction* pFnGetPlayerNicknameFromIndex = NULL;

	if (!pFnGetPlayerNicknameFromIndex)
		pFnGetPlayerNicknameFromIndex = (UFunction*)UObject::GObjects()->Data[47058];

	UOnlineSubsystemSteamworks_eventGetPlayerNicknameFromIndex_Parms GetPlayerNicknameFromIndex_Parms;
	GetPlayerNicknameFromIndex_Parms.UserIndex = UserIndex;

	this->ProcessEvent(pFnGetPlayerNicknameFromIndex, &GetPlayerNicknameFromIndex_Parms, NULL);

	return GetPlayerNicknameFromIndex_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlinePlayerScores
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// int                            LeaderboardId                  ( CPF_Parm )
// TArray< struct FOnlinePlayerScore > PlayerScores                   ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::WriteOnlinePlayerScores(struct FName SessionName, int LeaderboardId, TArray< struct FOnlinePlayerScore >* PlayerScores)
{
	static UFunction* pFnWriteOnlinePlayerScores = NULL;

	if (!pFnWriteOnlinePlayerScores)
		pFnWriteOnlinePlayerScores = (UFunction*)UObject::GObjects()->Data[47052];

	UOnlineSubsystemSteamworks_execWriteOnlinePlayerScores_Parms WriteOnlinePlayerScores_Parms;
	memcpy(&WriteOnlinePlayerScores_Parms.SessionName, &SessionName, 0x8);
	WriteOnlinePlayerScores_Parms.LeaderboardId = LeaderboardId;

	pFnWriteOnlinePlayerScores->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnWriteOnlinePlayerScores, &WriteOnlinePlayerScores_Parms, NULL);

	pFnWriteOnlinePlayerScores->FunctionFlags |= 0x400;

	if (PlayerScores)
		memcpy(PlayerScores, &WriteOnlinePlayerScores_Parms.PlayerScores, 0xC);

	return WriteOnlinePlayerScores_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFlushOnlineStatsCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearFlushOnlineStatsCompleteDelegate(struct FScriptDelegate FlushOnlineStatsCompleteDelegate)
{
	static UFunction* pFnClearFlushOnlineStatsCompleteDelegate = NULL;

	if (!pFnClearFlushOnlineStatsCompleteDelegate)
		pFnClearFlushOnlineStatsCompleteDelegate = (UFunction*)UObject::GObjects()->Data[47050];

	UOnlineSubsystemSteamworks_execClearFlushOnlineStatsCompleteDelegate_Parms ClearFlushOnlineStatsCompleteDelegate_Parms;
	memcpy(&ClearFlushOnlineStatsCompleteDelegate_Parms.FlushOnlineStatsCompleteDelegate, &FlushOnlineStatsCompleteDelegate, 0xC);

	this->ProcessEvent(pFnClearFlushOnlineStatsCompleteDelegate, &ClearFlushOnlineStatsCompleteDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFlushOnlineStatsCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddFlushOnlineStatsCompleteDelegate(struct FScriptDelegate FlushOnlineStatsCompleteDelegate)
{
	static UFunction* pFnAddFlushOnlineStatsCompleteDelegate = NULL;

	if (!pFnAddFlushOnlineStatsCompleteDelegate)
		pFnAddFlushOnlineStatsCompleteDelegate = (UFunction*)UObject::GObjects()->Data[47047];

	UOnlineSubsystemSteamworks_execAddFlushOnlineStatsCompleteDelegate_Parms AddFlushOnlineStatsCompleteDelegate_Parms;
	memcpy(&AddFlushOnlineStatsCompleteDelegate_Parms.FlushOnlineStatsCompleteDelegate, &FlushOnlineStatsCompleteDelegate, 0xC);

	this->ProcessEvent(pFnAddFlushOnlineStatsCompleteDelegate, &AddFlushOnlineStatsCompleteDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFlushOnlineStatsComplete
// [0x00120000]
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnFlushOnlineStatsComplete(struct FName SessionName, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnFlushOnlineStatsComplete = NULL;

	if (!pFnOnFlushOnlineStatsComplete)
		pFnOnFlushOnlineStatsComplete = (UFunction*)UObject::GObjects()->Data[47044];

	UOnlineSubsystemSteamworks_execOnFlushOnlineStatsComplete_Parms OnFlushOnlineStatsComplete_Parms;
	memcpy(&OnFlushOnlineStatsComplete_Parms.SessionName, &SessionName, 0x8);
	OnFlushOnlineStatsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnFlushOnlineStatsComplete, &OnFlushOnlineStatsComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FlushOnlineStats
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineSubsystemSteamworks::FlushOnlineStats(struct FName SessionName)
{
	static UFunction* pFnFlushOnlineStats = NULL;

	if (!pFnFlushOnlineStats)
		pFnFlushOnlineStats = (UFunction*)UObject::GObjects()->Data[47041];

	UOnlineSubsystemSteamworks_execFlushOnlineStats_Parms FlushOnlineStats_Parms;
	memcpy(&FlushOnlineStats_Parms.SessionName, &SessionName, 0x8);

	pFnFlushOnlineStats->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFlushOnlineStats, &FlushOnlineStats_Parms, NULL);

	pFnFlushOnlineStats->FunctionFlags |= 0x400;

	return FlushOnlineStats_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlineStats
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            Player                         ( CPF_Parm )
// class UOnlineStatsWrite*       StatsWrite                     ( CPF_Parm )

bool UOnlineSubsystemSteamworks::WriteOnlineStats(struct FName SessionName, struct FUniqueNetId Player, class UOnlineStatsWrite* StatsWrite)
{
	static UFunction* pFnWriteOnlineStats = NULL;

	if (!pFnWriteOnlineStats)
		pFnWriteOnlineStats = (UFunction*)UObject::GObjects()->Data[47036];

	UOnlineSubsystemSteamworks_execWriteOnlineStats_Parms WriteOnlineStats_Parms;
	memcpy(&WriteOnlineStats_Parms.SessionName, &SessionName, 0x8);
	memcpy(&WriteOnlineStats_Parms.Player, &Player, 0x18);
	WriteOnlineStats_Parms.StatsWrite = StatsWrite;

	pFnWriteOnlineStats->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnWriteOnlineStats, &WriteOnlineStats_Parms, NULL);

	pFnWriteOnlineStats->FunctionFlags |= 0x400;

	return WriteOnlineStats_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FreeStats
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UOnlineStatsRead*        StatsRead                      ( CPF_Parm )

void UOnlineSubsystemSteamworks::FreeStats(class UOnlineStatsRead* StatsRead)
{
	static UFunction* pFnFreeStats = NULL;

	if (!pFnFreeStats)
		pFnFreeStats = (UFunction*)UObject::GObjects()->Data[47034];

	UOnlineSubsystemSteamworks_execFreeStats_Parms FreeStats_Parms;
	FreeStats_Parms.StatsRead = StatsRead;

	pFnFreeStats->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFreeStats, &FreeStats_Parms, NULL);

	pFnFreeStats->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadOnlineStatsCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadOnlineStatsCompleteDelegate(struct FScriptDelegate ReadOnlineStatsCompleteDelegate)
{
	static UFunction* pFnClearReadOnlineStatsCompleteDelegate = NULL;

	if (!pFnClearReadOnlineStatsCompleteDelegate)
		pFnClearReadOnlineStatsCompleteDelegate = (UFunction*)UObject::GObjects()->Data[47032];

	UOnlineSubsystemSteamworks_execClearReadOnlineStatsCompleteDelegate_Parms ClearReadOnlineStatsCompleteDelegate_Parms;
	memcpy(&ClearReadOnlineStatsCompleteDelegate_Parms.ReadOnlineStatsCompleteDelegate, &ReadOnlineStatsCompleteDelegate, 0xC);

	this->ProcessEvent(pFnClearReadOnlineStatsCompleteDelegate, &ClearReadOnlineStatsCompleteDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadOnlineStatsCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadOnlineStatsCompleteDelegate(struct FScriptDelegate ReadOnlineStatsCompleteDelegate)
{
	static UFunction* pFnAddReadOnlineStatsCompleteDelegate = NULL;

	if (!pFnAddReadOnlineStatsCompleteDelegate)
		pFnAddReadOnlineStatsCompleteDelegate = (UFunction*)UObject::GObjects()->Data[47029];

	UOnlineSubsystemSteamworks_execAddReadOnlineStatsCompleteDelegate_Parms AddReadOnlineStatsCompleteDelegate_Parms;
	memcpy(&AddReadOnlineStatsCompleteDelegate_Parms.ReadOnlineStatsCompleteDelegate, &ReadOnlineStatsCompleteDelegate, 0xC);

	this->ProcessEvent(pFnAddReadOnlineStatsCompleteDelegate, &AddReadOnlineStatsCompleteDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineStatsComplete
// [0x00120000]
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnReadOnlineStatsComplete(unsigned long bWasSuccessful)
{
	static UFunction* pFnOnReadOnlineStatsComplete = NULL;

	if (!pFnOnReadOnlineStatsComplete)
		pFnOnReadOnlineStatsComplete = (UFunction*)UObject::GObjects()->Data[47027];

	UOnlineSubsystemSteamworks_execOnReadOnlineStatsComplete_Parms OnReadOnlineStatsComplete_Parms;
	OnReadOnlineStatsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnReadOnlineStatsComplete, &OnReadOnlineStatsComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRankAroundPlayer
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlineStatsRead*        StatsRead                      ( CPF_Parm )
// int                            NumRows                        ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadOnlineStatsByRankAroundPlayer(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int NumRows)
{
	static UFunction* pFnReadOnlineStatsByRankAroundPlayer = NULL;

	if (!pFnReadOnlineStatsByRankAroundPlayer)
		pFnReadOnlineStatsByRankAroundPlayer = (UFunction*)UObject::GObjects()->Data[47022];

	UOnlineSubsystemSteamworks_execReadOnlineStatsByRankAroundPlayer_Parms ReadOnlineStatsByRankAroundPlayer_Parms;
	ReadOnlineStatsByRankAroundPlayer_Parms.LocalUserNum = LocalUserNum;
	ReadOnlineStatsByRankAroundPlayer_Parms.StatsRead = StatsRead;
	ReadOnlineStatsByRankAroundPlayer_Parms.NumRows = NumRows;

	pFnReadOnlineStatsByRankAroundPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnReadOnlineStatsByRankAroundPlayer, &ReadOnlineStatsByRankAroundPlayer_Parms, NULL);

	pFnReadOnlineStatsByRankAroundPlayer->FunctionFlags |= 0x400;

	return ReadOnlineStatsByRankAroundPlayer_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRank
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UOnlineStatsRead*        StatsRead                      ( CPF_Parm )
// int                            StartIndex                     ( CPF_OptionalParm | CPF_Parm )
// int                            NumToRead                      ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadOnlineStatsByRank(class UOnlineStatsRead* StatsRead, int StartIndex, int NumToRead)
{
	static UFunction* pFnReadOnlineStatsByRank = NULL;

	if (!pFnReadOnlineStatsByRank)
		pFnReadOnlineStatsByRank = (UFunction*)UObject::GObjects()->Data[47017];

	UOnlineSubsystemSteamworks_execReadOnlineStatsByRank_Parms ReadOnlineStatsByRank_Parms;
	ReadOnlineStatsByRank_Parms.StatsRead = StatsRead;
	ReadOnlineStatsByRank_Parms.StartIndex = StartIndex;
	ReadOnlineStatsByRank_Parms.NumToRead = NumToRead;

	pFnReadOnlineStatsByRank->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnReadOnlineStatsByRank, &ReadOnlineStatsByRank_Parms, NULL);

	pFnReadOnlineStatsByRank->FunctionFlags |= 0x400;

	return ReadOnlineStatsByRank_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsForFriends
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlineStatsRead*        StatsRead                      ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadOnlineStatsForFriends(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead)
{
	static UFunction* pFnReadOnlineStatsForFriends = NULL;

	if (!pFnReadOnlineStatsForFriends)
		pFnReadOnlineStatsForFriends = (UFunction*)UObject::GObjects()->Data[47013];

	UOnlineSubsystemSteamworks_execReadOnlineStatsForFriends_Parms ReadOnlineStatsForFriends_Parms;
	ReadOnlineStatsForFriends_Parms.LocalUserNum = LocalUserNum;
	ReadOnlineStatsForFriends_Parms.StatsRead = StatsRead;

	pFnReadOnlineStatsForFriends->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnReadOnlineStatsForFriends, &ReadOnlineStatsForFriends_Parms, NULL);

	pFnReadOnlineStatsForFriends->FunctionFlags |= 0x400;

	return ReadOnlineStatsForFriends_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStats
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UOnlineStatsRead*        StatsRead                      ( CPF_Parm )
// TArray< struct FUniqueNetId >  Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::ReadOnlineStats(class UOnlineStatsRead* StatsRead, TArray< struct FUniqueNetId >* Players)
{
	static UFunction* pFnReadOnlineStats = NULL;

	if (!pFnReadOnlineStats)
		pFnReadOnlineStats = (UFunction*)UObject::GObjects()->Data[47008];

	UOnlineSubsystemSteamworks_execReadOnlineStats_Parms ReadOnlineStats_Parms;
	ReadOnlineStats_Parms.StatsRead = StatsRead;

	pFnReadOnlineStats->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnReadOnlineStats, &ReadOnlineStats_Parms, NULL);

	pFnReadOnlineStats->FunctionFlags |= 0x400;

	if (Players)
		memcpy(Players, &ReadOnlineStats_Parms.Players, 0xC);

	return ReadOnlineStats_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSpeechRecognitionObject
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class USpeechRecognition*      SpeechRecogObj                 ( CPF_Parm )

bool UOnlineSubsystemSteamworks::SetSpeechRecognitionObject(unsigned char LocalUserNum, class USpeechRecognition* SpeechRecogObj)
{
	static UFunction* pFnSetSpeechRecognitionObject = NULL;

	if (!pFnSetSpeechRecognitionObject)
		pFnSetSpeechRecognitionObject = (UFunction*)UObject::GObjects()->Data[47004];

	UOnlineSubsystemSteamworks_execSetSpeechRecognitionObject_Parms SetSpeechRecognitionObject_Parms;
	SetSpeechRecognitionObject_Parms.LocalUserNum = LocalUserNum;
	SetSpeechRecognitionObject_Parms.SpeechRecogObj = SpeechRecogObj;

	pFnSetSpeechRecognitionObject->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetSpeechRecognitionObject, &SetSpeechRecognitionObject_Parms, NULL);

	pFnSetSpeechRecognitionObject->FunctionFlags |= 0x400;

	return SetSpeechRecognitionObject_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SelectVocabulary
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            VocabularyId                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::SelectVocabulary(unsigned char LocalUserNum, int VocabularyId)
{
	static UFunction* pFnSelectVocabulary = NULL;

	if (!pFnSelectVocabulary)
		pFnSelectVocabulary = (UFunction*)UObject::GObjects()->Data[47000];

	UOnlineSubsystemSteamworks_execSelectVocabulary_Parms SelectVocabulary_Parms;
	SelectVocabulary_Parms.LocalUserNum = LocalUserNum;
	SelectVocabulary_Parms.VocabularyId = VocabularyId;

	pFnSelectVocabulary->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSelectVocabulary, &SelectVocabulary_Parms, NULL);

	pFnSelectVocabulary->FunctionFlags |= 0x400;

	return SelectVocabulary_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRecognitionCompleteDelegate
// [0x00020002]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         RecognitionDelegate            ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearRecognitionCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate RecognitionDelegate)
{
	static UFunction* pFnClearRecognitionCompleteDelegate = NULL;

	if (!pFnClearRecognitionCompleteDelegate)
		pFnClearRecognitionCompleteDelegate = (UFunction*)UObject::GObjects()->Data[46997];

	UOnlineSubsystemSteamworks_execClearRecognitionCompleteDelegate_Parms ClearRecognitionCompleteDelegate_Parms;
	ClearRecognitionCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy(&ClearRecognitionCompleteDelegate_Parms.RecognitionDelegate, &RecognitionDelegate, 0xC);

	this->ProcessEvent(pFnClearRecognitionCompleteDelegate, &ClearRecognitionCompleteDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRecognitionCompleteDelegate
// [0x00020002]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         RecognitionDelegate            ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddRecognitionCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate RecognitionDelegate)
{
	static UFunction* pFnAddRecognitionCompleteDelegate = NULL;

	if (!pFnAddRecognitionCompleteDelegate)
		pFnAddRecognitionCompleteDelegate = (UFunction*)UObject::GObjects()->Data[46993];

	UOnlineSubsystemSteamworks_execAddRecognitionCompleteDelegate_Parms AddRecognitionCompleteDelegate_Parms;
	AddRecognitionCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy(&AddRecognitionCompleteDelegate_Parms.RecognitionDelegate, &RecognitionDelegate, 0xC);

	this->ProcessEvent(pFnAddRecognitionCompleteDelegate, &AddRecognitionCompleteDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRecognitionComplete
// [0x00120000]
// Parameters infos:

void UOnlineSubsystemSteamworks::OnRecognitionComplete()
{
	static UFunction* pFnOnRecognitionComplete = NULL;

	if (!pFnOnRecognitionComplete)
		pFnOnRecognitionComplete = (UFunction*)UObject::GObjects()->Data[46992];

	UOnlineSubsystemSteamworks_execOnRecognitionComplete_Parms OnRecognitionComplete_Parms;

	this->ProcessEvent(pFnOnRecognitionComplete, &OnRecognitionComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetRecognitionResults
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FSpeechRecognizedWord > Words                          ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::GetRecognitionResults(unsigned char LocalUserNum, TArray< struct FSpeechRecognizedWord >* Words)
{
	static UFunction* pFnGetRecognitionResults = NULL;

	if (!pFnGetRecognitionResults)
		pFnGetRecognitionResults = (UFunction*)UObject::GObjects()->Data[46987];

	UOnlineSubsystemSteamworks_execGetRecognitionResults_Parms GetRecognitionResults_Parms;
	GetRecognitionResults_Parms.LocalUserNum = LocalUserNum;

	pFnGetRecognitionResults->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetRecognitionResults, &GetRecognitionResults_Parms, NULL);

	pFnGetRecognitionResults->FunctionFlags |= 0x400;

	if (Words)
		memcpy(Words, &GetRecognitionResults_Parms.Words, 0xC);

	return GetRecognitionResults_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopSpeechRecognition
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::StopSpeechRecognition(unsigned char LocalUserNum)
{
	static UFunction* pFnStopSpeechRecognition = NULL;

	if (!pFnStopSpeechRecognition)
		pFnStopSpeechRecognition = (UFunction*)UObject::GObjects()->Data[46984];

	UOnlineSubsystemSteamworks_execStopSpeechRecognition_Parms StopSpeechRecognition_Parms;
	StopSpeechRecognition_Parms.LocalUserNum = LocalUserNum;

	pFnStopSpeechRecognition->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnStopSpeechRecognition, &StopSpeechRecognition_Parms, NULL);

	pFnStopSpeechRecognition->FunctionFlags |= 0x400;

	return StopSpeechRecognition_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartSpeechRecognition
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::StartSpeechRecognition(unsigned char LocalUserNum)
{
	static UFunction* pFnStartSpeechRecognition = NULL;

	if (!pFnStartSpeechRecognition)
		pFnStartSpeechRecognition = (UFunction*)UObject::GObjects()->Data[46981];

	UOnlineSubsystemSteamworks_execStartSpeechRecognition_Parms StartSpeechRecognition_Parms;
	StartSpeechRecognition_Parms.LocalUserNum = LocalUserNum;

	pFnStartSpeechRecognition->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnStartSpeechRecognition, &StartSpeechRecognition_Parms, NULL);

	pFnStartSpeechRecognition->FunctionFlags |= 0x400;

	return StartSpeechRecognition_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopNetworkedVoice
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::StopNetworkedVoice(unsigned char LocalUserNum)
{
	static UFunction* pFnStopNetworkedVoice = NULL;

	if (!pFnStopNetworkedVoice)
		pFnStopNetworkedVoice = (UFunction*)UObject::GObjects()->Data[46979];

	UOnlineSubsystemSteamworks_execStopNetworkedVoice_Parms StopNetworkedVoice_Parms;
	StopNetworkedVoice_Parms.LocalUserNum = LocalUserNum;

	pFnStopNetworkedVoice->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnStopNetworkedVoice, &StopNetworkedVoice_Parms, NULL);

	pFnStopNetworkedVoice->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartNetworkedVoice
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::StartNetworkedVoice(unsigned char LocalUserNum)
{
	static UFunction* pFnStartNetworkedVoice = NULL;

	if (!pFnStartNetworkedVoice)
		pFnStartNetworkedVoice = (UFunction*)UObject::GObjects()->Data[46977];

	UOnlineSubsystemSteamworks_execStartNetworkedVoice_Parms StartNetworkedVoice_Parms;
	StartNetworkedVoice_Parms.LocalUserNum = LocalUserNum;

	pFnStartNetworkedVoice->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnStartNetworkedVoice, &StartNetworkedVoice_Parms, NULL);

	pFnStartNetworkedVoice->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPlayerTalkingDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         TalkerDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearPlayerTalkingDelegate(struct FScriptDelegate TalkerDelegate)
{
	static UFunction* pFnClearPlayerTalkingDelegate = NULL;

	if (!pFnClearPlayerTalkingDelegate)
		pFnClearPlayerTalkingDelegate = (UFunction*)UObject::GObjects()->Data[46975];

	UOnlineSubsystemSteamworks_execClearPlayerTalkingDelegate_Parms ClearPlayerTalkingDelegate_Parms;
	memcpy(&ClearPlayerTalkingDelegate_Parms.TalkerDelegate, &TalkerDelegate, 0xC);

	this->ProcessEvent(pFnClearPlayerTalkingDelegate, &ClearPlayerTalkingDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerTalkingDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         TalkerDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddPlayerTalkingDelegate(struct FScriptDelegate TalkerDelegate)
{
	static UFunction* pFnAddPlayerTalkingDelegate = NULL;

	if (!pFnAddPlayerTalkingDelegate)
		pFnAddPlayerTalkingDelegate = (UFunction*)UObject::GObjects()->Data[46972];

	UOnlineSubsystemSteamworks_execAddPlayerTalkingDelegate_Parms AddPlayerTalkingDelegate_Parms;
	memcpy(&AddPlayerTalkingDelegate_Parms.TalkerDelegate, &TalkerDelegate, 0xC);

	this->ProcessEvent(pFnAddPlayerTalkingDelegate, &AddPlayerTalkingDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerTalkingStateChange
// [0x00120000]
// Parameters infos:
// struct FUniqueNetId            Player                         ( CPF_Parm )
// unsigned long                  bIsTalking                     ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnPlayerTalkingStateChange(struct FUniqueNetId Player, unsigned long bIsTalking)
{
	static UFunction* pFnOnPlayerTalkingStateChange = NULL;

	if (!pFnOnPlayerTalkingStateChange)
		pFnOnPlayerTalkingStateChange = (UFunction*)UObject::GObjects()->Data[46969];

	UOnlineSubsystemSteamworks_execOnPlayerTalkingStateChange_Parms OnPlayerTalkingStateChange_Parms;
	memcpy(&OnPlayerTalkingStateChange_Parms.Player, &Player, 0x18);
	OnPlayerTalkingStateChange_Parms.bIsTalking = bIsTalking;

	this->ProcessEvent(pFnOnPlayerTalkingStateChange, &OnPlayerTalkingStateChange_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteRemoteTalker
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bIsSystemWide                  ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::UnmuteRemoteTalker(unsigned char LocalUserNum, struct FUniqueNetId PlayerID, unsigned long bIsSystemWide)
{
	static UFunction* pFnUnmuteRemoteTalker = NULL;

	if (!pFnUnmuteRemoteTalker)
		pFnUnmuteRemoteTalker = (UFunction*)UObject::GObjects()->Data[46964];

	UOnlineSubsystemSteamworks_execUnmuteRemoteTalker_Parms UnmuteRemoteTalker_Parms;
	UnmuteRemoteTalker_Parms.LocalUserNum = LocalUserNum;
	memcpy(&UnmuteRemoteTalker_Parms.PlayerID, &PlayerID, 0x18);
	UnmuteRemoteTalker_Parms.bIsSystemWide = bIsSystemWide;

	pFnUnmuteRemoteTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnUnmuteRemoteTalker, &UnmuteRemoteTalker_Parms, NULL);

	pFnUnmuteRemoteTalker->FunctionFlags |= 0x400;

	return UnmuteRemoteTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteRemoteTalker
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bIsSystemWide                  ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::MuteRemoteTalker(unsigned char LocalUserNum, struct FUniqueNetId PlayerID, unsigned long bIsSystemWide)
{
	static UFunction* pFnMuteRemoteTalker = NULL;

	if (!pFnMuteRemoteTalker)
		pFnMuteRemoteTalker = (UFunction*)UObject::GObjects()->Data[46959];

	UOnlineSubsystemSteamworks_execMuteRemoteTalker_Parms MuteRemoteTalker_Parms;
	MuteRemoteTalker_Parms.LocalUserNum = LocalUserNum;
	memcpy(&MuteRemoteTalker_Parms.PlayerID, &PlayerID, 0x18);
	MuteRemoteTalker_Parms.bIsSystemWide = bIsSystemWide;

	pFnMuteRemoteTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMuteRemoteTalker, &MuteRemoteTalker_Parms, NULL);

	pFnMuteRemoteTalker->FunctionFlags |= 0x400;

	return MuteRemoteTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetRemoteTalkerPriority
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// int                            Priority                       ( CPF_Parm )

bool UOnlineSubsystemSteamworks::SetRemoteTalkerPriority(unsigned char LocalUserNum, struct FUniqueNetId PlayerID, int Priority)
{
	static UFunction* pFnSetRemoteTalkerPriority = NULL;

	if (!pFnSetRemoteTalkerPriority)
		pFnSetRemoteTalkerPriority = (UFunction*)UObject::GObjects()->Data[46954];

	UOnlineSubsystemSteamworks_execSetRemoteTalkerPriority_Parms SetRemoteTalkerPriority_Parms;
	SetRemoteTalkerPriority_Parms.LocalUserNum = LocalUserNum;
	memcpy(&SetRemoteTalkerPriority_Parms.PlayerID, &PlayerID, 0x18);
	SetRemoteTalkerPriority_Parms.Priority = Priority;

	pFnSetRemoteTalkerPriority->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetRemoteTalkerPriority, &SetRemoteTalkerPriority_Parms, NULL);

	pFnSetRemoteTalkerPriority->FunctionFlags |= 0x400;

	return SetRemoteTalkerPriority_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsHeadsetPresent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::IsHeadsetPresent(unsigned char LocalUserNum)
{
	static UFunction* pFnIsHeadsetPresent = NULL;

	if (!pFnIsHeadsetPresent)
		pFnIsHeadsetPresent = (UFunction*)UObject::GObjects()->Data[46951];

	UOnlineSubsystemSteamworks_execIsHeadsetPresent_Parms IsHeadsetPresent_Parms;
	IsHeadsetPresent_Parms.LocalUserNum = LocalUserNum;

	pFnIsHeadsetPresent->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIsHeadsetPresent, &IsHeadsetPresent_Parms, NULL);

	pFnIsHeadsetPresent->FunctionFlags |= 0x400;

	return IsHeadsetPresent_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsRemotePlayerTalking
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemSteamworks::IsRemotePlayerTalking(struct FUniqueNetId PlayerID)
{
	static UFunction* pFnIsRemotePlayerTalking = NULL;

	if (!pFnIsRemotePlayerTalking)
		pFnIsRemotePlayerTalking = (UFunction*)UObject::GObjects()->Data[46948];

	UOnlineSubsystemSteamworks_execIsRemotePlayerTalking_Parms IsRemotePlayerTalking_Parms;
	memcpy(&IsRemotePlayerTalking_Parms.PlayerID, &PlayerID, 0x18);

	pFnIsRemotePlayerTalking->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIsRemotePlayerTalking, &IsRemotePlayerTalking_Parms, NULL);

	pFnIsRemotePlayerTalking->FunctionFlags |= 0x400;

	return IsRemotePlayerTalking_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalPlayerTalking
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::IsLocalPlayerTalking(unsigned char LocalUserNum)
{
	static UFunction* pFnIsLocalPlayerTalking = NULL;

	if (!pFnIsLocalPlayerTalking)
		pFnIsLocalPlayerTalking = (UFunction*)UObject::GObjects()->Data[46945];

	UOnlineSubsystemSteamworks_execIsLocalPlayerTalking_Parms IsLocalPlayerTalking_Parms;
	IsLocalPlayerTalking_Parms.LocalUserNum = LocalUserNum;

	pFnIsLocalPlayerTalking->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIsLocalPlayerTalking, &IsLocalPlayerTalking_Parms, NULL);

	pFnIsLocalPlayerTalking->FunctionFlags |= 0x400;

	return IsLocalPlayerTalking_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterRemoteTalker
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemSteamworks::UnregisterRemoteTalker(struct FUniqueNetId PlayerID)
{
	static UFunction* pFnUnregisterRemoteTalker = NULL;

	if (!pFnUnregisterRemoteTalker)
		pFnUnregisterRemoteTalker = (UFunction*)UObject::GObjects()->Data[46942];

	UOnlineSubsystemSteamworks_execUnregisterRemoteTalker_Parms UnregisterRemoteTalker_Parms;
	memcpy(&UnregisterRemoteTalker_Parms.PlayerID, &PlayerID, 0x18);

	pFnUnregisterRemoteTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnUnregisterRemoteTalker, &UnregisterRemoteTalker_Parms, NULL);

	pFnUnregisterRemoteTalker->FunctionFlags |= 0x400;

	return UnregisterRemoteTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterRemoteTalker
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemSteamworks::RegisterRemoteTalker(struct FUniqueNetId PlayerID)
{
	static UFunction* pFnRegisterRemoteTalker = NULL;

	if (!pFnRegisterRemoteTalker)
		pFnRegisterRemoteTalker = (UFunction*)UObject::GObjects()->Data[46939];

	UOnlineSubsystemSteamworks_execRegisterRemoteTalker_Parms RegisterRemoteTalker_Parms;
	memcpy(&RegisterRemoteTalker_Parms.PlayerID, &PlayerID, 0x18);

	pFnRegisterRemoteTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRegisterRemoteTalker, &RegisterRemoteTalker_Parms, NULL);

	pFnRegisterRemoteTalker->FunctionFlags |= 0x400;

	return RegisterRemoteTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterLocalTalker
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::UnregisterLocalTalker(unsigned char LocalUserNum)
{
	static UFunction* pFnUnregisterLocalTalker = NULL;

	if (!pFnUnregisterLocalTalker)
		pFnUnregisterLocalTalker = (UFunction*)UObject::GObjects()->Data[46936];

	UOnlineSubsystemSteamworks_execUnregisterLocalTalker_Parms UnregisterLocalTalker_Parms;
	UnregisterLocalTalker_Parms.LocalUserNum = LocalUserNum;

	pFnUnregisterLocalTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnUnregisterLocalTalker, &UnregisterLocalTalker_Parms, NULL);

	pFnUnregisterLocalTalker->FunctionFlags |= 0x400;

	return UnregisterLocalTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterLocalTalker
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::RegisterLocalTalker(unsigned char LocalUserNum)
{
	static UFunction* pFnRegisterLocalTalker = NULL;

	if (!pFnRegisterLocalTalker)
		pFnRegisterLocalTalker = (UFunction*)UObject::GObjects()->Data[46933];

	UOnlineSubsystemSteamworks_execRegisterLocalTalker_Parms RegisterLocalTalker_Parms;
	RegisterLocalTalker_Parms.LocalUserNum = LocalUserNum;

	pFnRegisterLocalTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRegisterLocalTalker, &RegisterLocalTalker_Parms, NULL);

	pFnRegisterLocalTalker->FunctionFlags |= 0x400;

	return RegisterLocalTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendsList
// [0x00424400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            Count                          ( CPF_OptionalParm | CPF_Parm )
// int                            StartingAt                     ( CPF_OptionalParm | CPF_Parm )
// TArray< struct FOnlineFriend > Friends                        ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

unsigned char UOnlineSubsystemSteamworks::GetFriendsList(unsigned char LocalUserNum, int Count, int StartingAt, TArray< struct FOnlineFriend >* Friends)
{
	static UFunction* pFnGetFriendsList = NULL;

	if (!pFnGetFriendsList)
		pFnGetFriendsList = (UFunction*)UObject::GObjects()->Data[46926];

	UOnlineSubsystemSteamworks_execGetFriendsList_Parms GetFriendsList_Parms;
	GetFriendsList_Parms.LocalUserNum = LocalUserNum;
	GetFriendsList_Parms.Count = Count;
	GetFriendsList_Parms.StartingAt = StartingAt;

	pFnGetFriendsList->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetFriendsList, &GetFriendsList_Parms, NULL);

	pFnGetFriendsList->FunctionFlags |= 0x400;

	if (Friends)
		memcpy(Friends, &GetFriendsList_Parms.Friends, 0xC);

	return GetFriendsList_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadFriendsCompleteDelegate
// [0x00020002]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadFriendsCompleteDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadFriendsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate)
{
	static UFunction* pFnClearReadFriendsCompleteDelegate = NULL;

	if (!pFnClearReadFriendsCompleteDelegate)
		pFnClearReadFriendsCompleteDelegate = (UFunction*)UObject::GObjects()->Data[46923];

	UOnlineSubsystemSteamworks_execClearReadFriendsCompleteDelegate_Parms ClearReadFriendsCompleteDelegate_Parms;
	ClearReadFriendsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy(&ClearReadFriendsCompleteDelegate_Parms.ReadFriendsCompleteDelegate, &ReadFriendsCompleteDelegate, 0xC);

	this->ProcessEvent(pFnClearReadFriendsCompleteDelegate, &ClearReadFriendsCompleteDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadFriendsCompleteDelegate
// [0x00020002]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadFriendsCompleteDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadFriendsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate)
{
	static UFunction* pFnAddReadFriendsCompleteDelegate = NULL;

	if (!pFnAddReadFriendsCompleteDelegate)
		pFnAddReadFriendsCompleteDelegate = (UFunction*)UObject::GObjects()->Data[46919];

	UOnlineSubsystemSteamworks_execAddReadFriendsCompleteDelegate_Parms AddReadFriendsCompleteDelegate_Parms;
	AddReadFriendsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy(&AddReadFriendsCompleteDelegate_Parms.ReadFriendsCompleteDelegate, &ReadFriendsCompleteDelegate, 0xC);

	this->ProcessEvent(pFnAddReadFriendsCompleteDelegate, &AddReadFriendsCompleteDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadFriendsComplete
// [0x00120000]
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnReadFriendsComplete(unsigned long bWasSuccessful)
{
	static UFunction* pFnOnReadFriendsComplete = NULL;

	if (!pFnOnReadFriendsComplete)
		pFnOnReadFriendsComplete = (UFunction*)UObject::GObjects()->Data[46917];

	UOnlineSubsystemSteamworks_execOnReadFriendsComplete_Parms OnReadFriendsComplete_Parms;
	OnReadFriendsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnReadFriendsComplete, &OnReadFriendsComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadFriendsList
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            Count                          ( CPF_OptionalParm | CPF_Parm )
// int                            StartingAt                     ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadFriendsList(unsigned char LocalUserNum, int Count, int StartingAt)
{
	static UFunction* pFnReadFriendsList = NULL;

	if (!pFnReadFriendsList)
		pFnReadFriendsList = (UFunction*)UObject::GObjects()->Data[46912];

	UOnlineSubsystemSteamworks_execReadFriendsList_Parms ReadFriendsList_Parms;
	ReadFriendsList_Parms.LocalUserNum = LocalUserNum;
	ReadFriendsList_Parms.Count = Count;
	ReadFriendsList_Parms.StartingAt = StartingAt;

	pFnReadFriendsList->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnReadFriendsList, &ReadFriendsList_Parms, NULL);

	pFnReadFriendsList->FunctionFlags |= 0x400;

	return ReadFriendsList_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWritePlayerStorageCompleteDelegate
// [0x00020002]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         WritePlayerStorageCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearWritePlayerStorageCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate)
{
	static UFunction* pFnClearWritePlayerStorageCompleteDelegate = NULL;

	if (!pFnClearWritePlayerStorageCompleteDelegate)
		pFnClearWritePlayerStorageCompleteDelegate = (UFunction*)UObject::GObjects()->Data[46909];

	UOnlineSubsystemSteamworks_execClearWritePlayerStorageCompleteDelegate_Parms ClearWritePlayerStorageCompleteDelegate_Parms;
	ClearWritePlayerStorageCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy(&ClearWritePlayerStorageCompleteDelegate_Parms.WritePlayerStorageCompleteDelegate, &WritePlayerStorageCompleteDelegate, 0xC);

	this->ProcessEvent(pFnClearWritePlayerStorageCompleteDelegate, &ClearWritePlayerStorageCompleteDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWritePlayerStorageCompleteDelegate
// [0x00020002]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         WritePlayerStorageCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddWritePlayerStorageCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate)
{
	static UFunction* pFnAddWritePlayerStorageCompleteDelegate = NULL;

	if (!pFnAddWritePlayerStorageCompleteDelegate)
		pFnAddWritePlayerStorageCompleteDelegate = (UFunction*)UObject::GObjects()->Data[46905];

	UOnlineSubsystemSteamworks_execAddWritePlayerStorageCompleteDelegate_Parms AddWritePlayerStorageCompleteDelegate_Parms;
	AddWritePlayerStorageCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy(&AddWritePlayerStorageCompleteDelegate_Parms.WritePlayerStorageCompleteDelegate, &WritePlayerStorageCompleteDelegate, 0xC);

	this->ProcessEvent(pFnAddWritePlayerStorageCompleteDelegate, &AddWritePlayerStorageCompleteDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWritePlayerStorageComplete
// [0x00120000]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnWritePlayerStorageComplete(unsigned char LocalUserNum, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnWritePlayerStorageComplete = NULL;

	if (!pFnOnWritePlayerStorageComplete)
		pFnOnWritePlayerStorageComplete = (UFunction*)UObject::GObjects()->Data[46902];

	UOnlineSubsystemSteamworks_execOnWritePlayerStorageComplete_Parms OnWritePlayerStorageComplete_Parms;
	OnWritePlayerStorageComplete_Parms.LocalUserNum = LocalUserNum;
	OnWritePlayerStorageComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnWritePlayerStorageComplete, &OnWritePlayerStorageComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WritePlayerStorage
// [0x00024000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlinePlayerStorage*    PlayerStorage                  ( CPF_Parm )
// int                            DeviceID                       ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::WritePlayerStorage(unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID)
{
	static UFunction* pFnWritePlayerStorage = NULL;

	if (!pFnWritePlayerStorage)
		pFnWritePlayerStorage = (UFunction*)UObject::GObjects()->Data[46897];

	UOnlineSubsystemSteamworks_execWritePlayerStorage_Parms WritePlayerStorage_Parms;
	WritePlayerStorage_Parms.LocalUserNum = LocalUserNum;
	WritePlayerStorage_Parms.PlayerStorage = PlayerStorage;
	WritePlayerStorage_Parms.DeviceID = DeviceID;

	this->ProcessEvent(pFnWritePlayerStorage, &WritePlayerStorage_Parms, NULL);

	return WritePlayerStorage_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerStorage
// [0x00020002]
// Parameters infos:
// class UOnlinePlayerStorage*    ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

class UOnlinePlayerStorage* UOnlineSubsystemSteamworks::GetPlayerStorage(unsigned char LocalUserNum)
{
	static UFunction* pFnGetPlayerStorage = NULL;

	if (!pFnGetPlayerStorage)
		pFnGetPlayerStorage = (UFunction*)UObject::GObjects()->Data[46893];

	UOnlineSubsystemSteamworks_execGetPlayerStorage_Parms GetPlayerStorage_Parms;
	GetPlayerStorage_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnGetPlayerStorage, &GetPlayerStorage_Parms, NULL);

	return GetPlayerStorage_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageForNetIdCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FUniqueNetId            NetId                          ( CPF_Parm )
// struct FScriptDelegate         ReadPlayerStorageForNetIdCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadPlayerStorageForNetIdCompleteDelegate(struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate)
{
	static UFunction* pFnClearReadPlayerStorageForNetIdCompleteDelegate = NULL;

	if (!pFnClearReadPlayerStorageForNetIdCompleteDelegate)
		pFnClearReadPlayerStorageForNetIdCompleteDelegate = (UFunction*)UObject::GObjects()->Data[46890];

	UOnlineSubsystemSteamworks_execClearReadPlayerStorageForNetIdCompleteDelegate_Parms ClearReadPlayerStorageForNetIdCompleteDelegate_Parms;
	memcpy(&ClearReadPlayerStorageForNetIdCompleteDelegate_Parms.NetId, &NetId, 0x18);
	memcpy(&ClearReadPlayerStorageForNetIdCompleteDelegate_Parms.ReadPlayerStorageForNetIdCompleteDelegate, &ReadPlayerStorageForNetIdCompleteDelegate, 0xC);

	this->ProcessEvent(pFnClearReadPlayerStorageForNetIdCompleteDelegate, &ClearReadPlayerStorageForNetIdCompleteDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageForNetIdCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FUniqueNetId            NetId                          ( CPF_Parm )
// struct FScriptDelegate         ReadPlayerStorageForNetIdCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadPlayerStorageForNetIdCompleteDelegate(struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate)
{
	static UFunction* pFnAddReadPlayerStorageForNetIdCompleteDelegate = NULL;

	if (!pFnAddReadPlayerStorageForNetIdCompleteDelegate)
		pFnAddReadPlayerStorageForNetIdCompleteDelegate = (UFunction*)UObject::GObjects()->Data[46886];

	UOnlineSubsystemSteamworks_execAddReadPlayerStorageForNetIdCompleteDelegate_Parms AddReadPlayerStorageForNetIdCompleteDelegate_Parms;
	memcpy(&AddReadPlayerStorageForNetIdCompleteDelegate_Parms.NetId, &NetId, 0x18);
	memcpy(&AddReadPlayerStorageForNetIdCompleteDelegate_Parms.ReadPlayerStorageForNetIdCompleteDelegate, &ReadPlayerStorageForNetIdCompleteDelegate, 0xC);

	this->ProcessEvent(pFnAddReadPlayerStorageForNetIdCompleteDelegate, &AddReadPlayerStorageForNetIdCompleteDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageForNetIdComplete
// [0x00120000]
// Parameters infos:
// struct FUniqueNetId            NetId                          ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnReadPlayerStorageForNetIdComplete(struct FUniqueNetId NetId, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnReadPlayerStorageForNetIdComplete = NULL;

	if (!pFnOnReadPlayerStorageForNetIdComplete)
		pFnOnReadPlayerStorageForNetIdComplete = (UFunction*)UObject::GObjects()->Data[46883];

	UOnlineSubsystemSteamworks_execOnReadPlayerStorageForNetIdComplete_Parms OnReadPlayerStorageForNetIdComplete_Parms;
	memcpy(&OnReadPlayerStorageForNetIdComplete_Parms.NetId, &NetId, 0x18);
	OnReadPlayerStorageForNetIdComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnReadPlayerStorageForNetIdComplete, &OnReadPlayerStorageForNetIdComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorageForNetId
// [0x00020000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            NetId                          ( CPF_Parm )
// class UOnlinePlayerStorage*    PlayerStorage                  ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadPlayerStorageForNetId(unsigned char LocalUserNum, struct FUniqueNetId NetId, class UOnlinePlayerStorage* PlayerStorage)
{
	static UFunction* pFnReadPlayerStorageForNetId = NULL;

	if (!pFnReadPlayerStorageForNetId)
		pFnReadPlayerStorageForNetId = (UFunction*)UObject::GObjects()->Data[46878];

	UOnlineSubsystemSteamworks_execReadPlayerStorageForNetId_Parms ReadPlayerStorageForNetId_Parms;
	ReadPlayerStorageForNetId_Parms.LocalUserNum = LocalUserNum;
	memcpy(&ReadPlayerStorageForNetId_Parms.NetId, &NetId, 0x18);
	ReadPlayerStorageForNetId_Parms.PlayerStorage = PlayerStorage;

	this->ProcessEvent(pFnReadPlayerStorageForNetId, &ReadPlayerStorageForNetId_Parms, NULL);

	return ReadPlayerStorageForNetId_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageCompleteDelegate
// [0x00020002]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadPlayerStorageCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadPlayerStorageCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate)
{
	static UFunction* pFnClearReadPlayerStorageCompleteDelegate = NULL;

	if (!pFnClearReadPlayerStorageCompleteDelegate)
		pFnClearReadPlayerStorageCompleteDelegate = (UFunction*)UObject::GObjects()->Data[46875];

	UOnlineSubsystemSteamworks_execClearReadPlayerStorageCompleteDelegate_Parms ClearReadPlayerStorageCompleteDelegate_Parms;
	ClearReadPlayerStorageCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy(&ClearReadPlayerStorageCompleteDelegate_Parms.ReadPlayerStorageCompleteDelegate, &ReadPlayerStorageCompleteDelegate, 0xC);

	this->ProcessEvent(pFnClearReadPlayerStorageCompleteDelegate, &ClearReadPlayerStorageCompleteDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageCompleteDelegate
// [0x00020002]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadPlayerStorageCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadPlayerStorageCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate)
{
	static UFunction* pFnAddReadPlayerStorageCompleteDelegate = NULL;

	if (!pFnAddReadPlayerStorageCompleteDelegate)
		pFnAddReadPlayerStorageCompleteDelegate = (UFunction*)UObject::GObjects()->Data[46871];

	UOnlineSubsystemSteamworks_execAddReadPlayerStorageCompleteDelegate_Parms AddReadPlayerStorageCompleteDelegate_Parms;
	AddReadPlayerStorageCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy(&AddReadPlayerStorageCompleteDelegate_Parms.ReadPlayerStorageCompleteDelegate, &ReadPlayerStorageCompleteDelegate, 0xC);

	this->ProcessEvent(pFnAddReadPlayerStorageCompleteDelegate, &AddReadPlayerStorageCompleteDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageComplete
// [0x00120000]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnReadPlayerStorageComplete(unsigned char LocalUserNum, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnReadPlayerStorageComplete = NULL;

	if (!pFnOnReadPlayerStorageComplete)
		pFnOnReadPlayerStorageComplete = (UFunction*)UObject::GObjects()->Data[46868];

	UOnlineSubsystemSteamworks_execOnReadPlayerStorageComplete_Parms OnReadPlayerStorageComplete_Parms;
	OnReadPlayerStorageComplete_Parms.LocalUserNum = LocalUserNum;
	OnReadPlayerStorageComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnReadPlayerStorageComplete, &OnReadPlayerStorageComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorage
// [0x00024000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlinePlayerStorage*    PlayerStorage                  ( CPF_Parm )
// int                            DeviceID                       ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadPlayerStorage(unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID)
{
	static UFunction* pFnReadPlayerStorage = NULL;

	if (!pFnReadPlayerStorage)
		pFnReadPlayerStorage = (UFunction*)UObject::GObjects()->Data[46863];

	UOnlineSubsystemSteamworks_execReadPlayerStorage_Parms ReadPlayerStorage_Parms;
	ReadPlayerStorage_Parms.LocalUserNum = LocalUserNum;
	ReadPlayerStorage_Parms.PlayerStorage = PlayerStorage;
	ReadPlayerStorage_Parms.DeviceID = DeviceID;

	this->ProcessEvent(pFnReadPlayerStorage, &ReadPlayerStorage_Parms, NULL);

	return ReadPlayerStorage_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteProfileSettingsCompleteDelegate
// [0x00020002]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearWriteProfileSettingsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate)
{
	static UFunction* pFnClearWriteProfileSettingsCompleteDelegate = NULL;

	if (!pFnClearWriteProfileSettingsCompleteDelegate)
		pFnClearWriteProfileSettingsCompleteDelegate = (UFunction*)UObject::GObjects()->Data[46860];

	UOnlineSubsystemSteamworks_execClearWriteProfileSettingsCompleteDelegate_Parms ClearWriteProfileSettingsCompleteDelegate_Parms;
	ClearWriteProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy(&ClearWriteProfileSettingsCompleteDelegate_Parms.WriteProfileSettingsCompleteDelegate, &WriteProfileSettingsCompleteDelegate, 0xC);

	this->ProcessEvent(pFnClearWriteProfileSettingsCompleteDelegate, &ClearWriteProfileSettingsCompleteDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteProfileSettingsCompleteDelegate
// [0x00020002]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddWriteProfileSettingsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate)
{
	static UFunction* pFnAddWriteProfileSettingsCompleteDelegate = NULL;

	if (!pFnAddWriteProfileSettingsCompleteDelegate)
		pFnAddWriteProfileSettingsCompleteDelegate = (UFunction*)UObject::GObjects()->Data[46856];

	UOnlineSubsystemSteamworks_execAddWriteProfileSettingsCompleteDelegate_Parms AddWriteProfileSettingsCompleteDelegate_Parms;
	AddWriteProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy(&AddWriteProfileSettingsCompleteDelegate_Parms.WriteProfileSettingsCompleteDelegate, &WriteProfileSettingsCompleteDelegate, 0xC);

	this->ProcessEvent(pFnAddWriteProfileSettingsCompleteDelegate, &AddWriteProfileSettingsCompleteDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteProfileSettingsComplete
// [0x00120000]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnWriteProfileSettingsComplete(unsigned char LocalUserNum, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnWriteProfileSettingsComplete = NULL;

	if (!pFnOnWriteProfileSettingsComplete)
		pFnOnWriteProfileSettingsComplete = (UFunction*)UObject::GObjects()->Data[46853];

	UOnlineSubsystemSteamworks_execOnWriteProfileSettingsComplete_Parms OnWriteProfileSettingsComplete_Parms;
	OnWriteProfileSettingsComplete_Parms.LocalUserNum = LocalUserNum;
	OnWriteProfileSettingsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnWriteProfileSettingsComplete, &OnWriteProfileSettingsComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteProfileSettings
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlineProfileSettings*  ProfileSettings                ( CPF_Parm )

bool UOnlineSubsystemSteamworks::WriteProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings)
{
	static UFunction* pFnWriteProfileSettings = NULL;

	if (!pFnWriteProfileSettings)
		pFnWriteProfileSettings = (UFunction*)UObject::GObjects()->Data[46849];

	UOnlineSubsystemSteamworks_execWriteProfileSettings_Parms WriteProfileSettings_Parms;
	WriteProfileSettings_Parms.LocalUserNum = LocalUserNum;
	WriteProfileSettings_Parms.ProfileSettings = ProfileSettings;

	pFnWriteProfileSettings->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnWriteProfileSettings, &WriteProfileSettings_Parms, NULL);

	pFnWriteProfileSettings->FunctionFlags |= 0x400;

	return WriteProfileSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetProfileSettings
// [0x00020002]
// Parameters infos:
// class UOnlineProfileSettings*  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

class UOnlineProfileSettings* UOnlineSubsystemSteamworks::GetProfileSettings(unsigned char LocalUserNum)
{
	static UFunction* pFnGetProfileSettings = NULL;

	if (!pFnGetProfileSettings)
		pFnGetProfileSettings = (UFunction*)UObject::GObjects()->Data[46845];

	UOnlineSubsystemSteamworks_execGetProfileSettings_Parms GetProfileSettings_Parms;
	GetProfileSettings_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnGetProfileSettings, &GetProfileSettings_Parms, NULL);

	return GetProfileSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadProfileSettingsCompleteDelegate
// [0x00020002]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearReadProfileSettingsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate)
{
	static UFunction* pFnClearReadProfileSettingsCompleteDelegate = NULL;

	if (!pFnClearReadProfileSettingsCompleteDelegate)
		pFnClearReadProfileSettingsCompleteDelegate = (UFunction*)UObject::GObjects()->Data[46842];

	UOnlineSubsystemSteamworks_execClearReadProfileSettingsCompleteDelegate_Parms ClearReadProfileSettingsCompleteDelegate_Parms;
	ClearReadProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy(&ClearReadProfileSettingsCompleteDelegate_Parms.ReadProfileSettingsCompleteDelegate, &ReadProfileSettingsCompleteDelegate, 0xC);

	this->ProcessEvent(pFnClearReadProfileSettingsCompleteDelegate, &ClearReadProfileSettingsCompleteDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadProfileSettingsCompleteDelegate
// [0x00020002]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddReadProfileSettingsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate)
{
	static UFunction* pFnAddReadProfileSettingsCompleteDelegate = NULL;

	if (!pFnAddReadProfileSettingsCompleteDelegate)
		pFnAddReadProfileSettingsCompleteDelegate = (UFunction*)UObject::GObjects()->Data[46836];

	UOnlineSubsystemSteamworks_execAddReadProfileSettingsCompleteDelegate_Parms AddReadProfileSettingsCompleteDelegate_Parms;
	AddReadProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy(&AddReadProfileSettingsCompleteDelegate_Parms.ReadProfileSettingsCompleteDelegate, &ReadProfileSettingsCompleteDelegate, 0xC);

	this->ProcessEvent(pFnAddReadProfileSettingsCompleteDelegate, &AddReadProfileSettingsCompleteDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadProfileSettingsComplete
// [0x00120000]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnReadProfileSettingsComplete(unsigned char LocalUserNum, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnReadProfileSettingsComplete = NULL;

	if (!pFnOnReadProfileSettingsComplete)
		pFnOnReadProfileSettingsComplete = (UFunction*)UObject::GObjects()->Data[46833];

	UOnlineSubsystemSteamworks_execOnReadProfileSettingsComplete_Parms OnReadProfileSettingsComplete_Parms;
	OnReadProfileSettingsComplete_Parms.LocalUserNum = LocalUserNum;
	OnReadProfileSettingsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnReadProfileSettingsComplete, &OnReadProfileSettingsComplete_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadProfileSettings
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlineProfileSettings*  ProfileSettings                ( CPF_Parm )

bool UOnlineSubsystemSteamworks::ReadProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings)
{
	static UFunction* pFnReadProfileSettings = NULL;

	if (!pFnReadProfileSettings)
		pFnReadProfileSettings = (UFunction*)UObject::GObjects()->Data[46829];

	UOnlineSubsystemSteamworks_execReadProfileSettings_Parms ReadProfileSettings_Parms;
	ReadProfileSettings_Parms.LocalUserNum = LocalUserNum;
	ReadProfileSettings_Parms.ProfileSettings = ProfileSettings;

	pFnReadProfileSettings->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnReadProfileSettings, &ReadProfileSettings_Parms, NULL);

	pFnReadProfileSettings->FunctionFlags |= 0x400;

	return ReadProfileSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendsChangeDelegate
// [0x00020002]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         FriendsDelegate                ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearFriendsChangeDelegate(unsigned char LocalUserNum, struct FScriptDelegate FriendsDelegate)
{
	static UFunction* pFnClearFriendsChangeDelegate = NULL;

	if (!pFnClearFriendsChangeDelegate)
		pFnClearFriendsChangeDelegate = (UFunction*)UObject::GObjects()->Data[46826];

	UOnlineSubsystemSteamworks_execClearFriendsChangeDelegate_Parms ClearFriendsChangeDelegate_Parms;
	ClearFriendsChangeDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy(&ClearFriendsChangeDelegate_Parms.FriendsDelegate, &FriendsDelegate, 0xC);

	this->ProcessEvent(pFnClearFriendsChangeDelegate, &ClearFriendsChangeDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendsChangeDelegate
// [0x00020002]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         FriendsDelegate                ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddFriendsChangeDelegate(unsigned char LocalUserNum, struct FScriptDelegate FriendsDelegate)
{
	static UFunction* pFnAddFriendsChangeDelegate = NULL;

	if (!pFnAddFriendsChangeDelegate)
		pFnAddFriendsChangeDelegate = (UFunction*)UObject::GObjects()->Data[46822];

	UOnlineSubsystemSteamworks_execAddFriendsChangeDelegate_Parms AddFriendsChangeDelegate_Parms;
	AddFriendsChangeDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy(&AddFriendsChangeDelegate_Parms.FriendsDelegate, &FriendsDelegate, 0xC);

	this->ProcessEvent(pFnAddFriendsChangeDelegate, &AddFriendsChangeDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearMutingChangeDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         MutingDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearMutingChangeDelegate(struct FScriptDelegate MutingDelegate)
{
	static UFunction* pFnClearMutingChangeDelegate = NULL;

	if (!pFnClearMutingChangeDelegate)
		pFnClearMutingChangeDelegate = (UFunction*)UObject::GObjects()->Data[46820];

	UOnlineSubsystemSteamworks_execClearMutingChangeDelegate_Parms ClearMutingChangeDelegate_Parms;
	memcpy(&ClearMutingChangeDelegate_Parms.MutingDelegate, &MutingDelegate, 0xC);

	this->ProcessEvent(pFnClearMutingChangeDelegate, &ClearMutingChangeDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddMutingChangeDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         MutingDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddMutingChangeDelegate(struct FScriptDelegate MutingDelegate)
{
	static UFunction* pFnAddMutingChangeDelegate = NULL;

	if (!pFnAddMutingChangeDelegate)
		pFnAddMutingChangeDelegate = (UFunction*)UObject::GObjects()->Data[46817];

	UOnlineSubsystemSteamworks_execAddMutingChangeDelegate_Parms AddMutingChangeDelegate_Parms;
	memcpy(&AddMutingChangeDelegate_Parms.MutingDelegate, &MutingDelegate, 0xC);

	this->ProcessEvent(pFnAddMutingChangeDelegate, &AddMutingChangeDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginCancelledDelegate
// [0x00020000]
// Parameters infos:
// struct FScriptDelegate         CancelledDelegate              ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearLoginCancelledDelegate(struct FScriptDelegate CancelledDelegate)
{
	static UFunction* pFnClearLoginCancelledDelegate = NULL;

	if (!pFnClearLoginCancelledDelegate)
		pFnClearLoginCancelledDelegate = (UFunction*)UObject::GObjects()->Data[46815];

	UOnlineSubsystemSteamworks_execClearLoginCancelledDelegate_Parms ClearLoginCancelledDelegate_Parms;
	memcpy(&ClearLoginCancelledDelegate_Parms.CancelledDelegate, &CancelledDelegate, 0xC);

	this->ProcessEvent(pFnClearLoginCancelledDelegate, &ClearLoginCancelledDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginCancelledDelegate
// [0x00020000]
// Parameters infos:
// struct FScriptDelegate         CancelledDelegate              ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddLoginCancelledDelegate(struct FScriptDelegate CancelledDelegate)
{
	static UFunction* pFnAddLoginCancelledDelegate = NULL;

	if (!pFnAddLoginCancelledDelegate)
		pFnAddLoginCancelledDelegate = (UFunction*)UObject::GObjects()->Data[46813];

	UOnlineSubsystemSteamworks_execAddLoginCancelledDelegate_Parms AddLoginCancelledDelegate_Parms;
	memcpy(&AddLoginCancelledDelegate_Parms.CancelledDelegate, &CancelledDelegate, 0xC);

	this->ProcessEvent(pFnAddLoginCancelledDelegate, &AddLoginCancelledDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginStatusChangeDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         LoginStatusDelegate            ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::ClearLoginStatusChangeDelegate(struct FScriptDelegate LoginStatusDelegate, unsigned char LocalUserNum)
{
	static UFunction* pFnClearLoginStatusChangeDelegate = NULL;

	if (!pFnClearLoginStatusChangeDelegate)
		pFnClearLoginStatusChangeDelegate = (UFunction*)UObject::GObjects()->Data[46810];

	UOnlineSubsystemSteamworks_execClearLoginStatusChangeDelegate_Parms ClearLoginStatusChangeDelegate_Parms;
	memcpy(&ClearLoginStatusChangeDelegate_Parms.LoginStatusDelegate, &LoginStatusDelegate, 0xC);
	ClearLoginStatusChangeDelegate_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnClearLoginStatusChangeDelegate, &ClearLoginStatusChangeDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginStatusChangeDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         LoginStatusDelegate            ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::AddLoginStatusChangeDelegate(struct FScriptDelegate LoginStatusDelegate, unsigned char LocalUserNum)
{
	static UFunction* pFnAddLoginStatusChangeDelegate = NULL;

	if (!pFnAddLoginStatusChangeDelegate)
		pFnAddLoginStatusChangeDelegate = (UFunction*)UObject::GObjects()->Data[46805];

	UOnlineSubsystemSteamworks_execAddLoginStatusChangeDelegate_Parms AddLoginStatusChangeDelegate_Parms;
	memcpy(&AddLoginStatusChangeDelegate_Parms.LoginStatusDelegate, &LoginStatusDelegate, 0xC);
	AddLoginStatusChangeDelegate_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnAddLoginStatusChangeDelegate, &AddLoginStatusChangeDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginStatusChange
// [0x00120000]
// Parameters infos:
// unsigned char                  NewStatus                      ( CPF_Parm )
// struct FUniqueNetId            NewId                          ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnLoginStatusChange(unsigned char NewStatus, struct FUniqueNetId NewId)
{
	static UFunction* pFnOnLoginStatusChange = NULL;

	if (!pFnOnLoginStatusChange)
		pFnOnLoginStatusChange = (UFunction*)UObject::GObjects()->Data[46802];

	UOnlineSubsystemSteamworks_execOnLoginStatusChange_Parms OnLoginStatusChange_Parms;
	OnLoginStatusChange_Parms.NewStatus = NewStatus;
	memcpy(&OnLoginStatusChange_Parms.NewId, &NewId, 0x18);

	this->ProcessEvent(pFnOnLoginStatusChange, &OnLoginStatusChange_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginChangeDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         LoginDelegate                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearLoginChangeDelegate(struct FScriptDelegate LoginDelegate)
{
	static UFunction* pFnClearLoginChangeDelegate = NULL;

	if (!pFnClearLoginChangeDelegate)
		pFnClearLoginChangeDelegate = (UFunction*)UObject::GObjects()->Data[46800];

	UOnlineSubsystemSteamworks_execClearLoginChangeDelegate_Parms ClearLoginChangeDelegate_Parms;
	memcpy(&ClearLoginChangeDelegate_Parms.LoginDelegate, &LoginDelegate, 0xC);

	this->ProcessEvent(pFnClearLoginChangeDelegate, &ClearLoginChangeDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginChangeDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         LoginDelegate                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddLoginChangeDelegate(struct FScriptDelegate LoginDelegate)
{
	static UFunction* pFnAddLoginChangeDelegate = NULL;

	if (!pFnAddLoginChangeDelegate)
		pFnAddLoginChangeDelegate = (UFunction*)UObject::GObjects()->Data[46797];

	UOnlineSubsystemSteamworks_execAddLoginChangeDelegate_Parms AddLoginChangeDelegate_Parms;
	memcpy(&AddLoginChangeDelegate_Parms.LoginDelegate, &LoginDelegate, 0xC);

	this->ProcessEvent(pFnAddLoginChangeDelegate, &AddLoginChangeDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsMuted
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemSteamworks::IsMuted(unsigned char LocalUserNum, struct FUniqueNetId PlayerID)
{
	static UFunction* pFnIsMuted = NULL;

	if (!pFnIsMuted)
		pFnIsMuted = (UFunction*)UObject::GObjects()->Data[46793];

	UOnlineSubsystemSteamworks_execIsMuted_Parms IsMuted_Parms;
	IsMuted_Parms.LocalUserNum = LocalUserNum;
	memcpy(&IsMuted_Parms.PlayerID, &PlayerID, 0x18);

	pFnIsMuted->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIsMuted, &IsMuted_Parms, NULL);

	pFnIsMuted->FunctionFlags |= 0x400;

	return IsMuted_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AreAnyFriends
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FFriendsQuery > Query                          ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemSteamworks::AreAnyFriends(unsigned char LocalUserNum, TArray< struct FFriendsQuery >* Query)
{
	static UFunction* pFnAreAnyFriends = NULL;

	if (!pFnAreAnyFriends)
		pFnAreAnyFriends = (UFunction*)UObject::GObjects()->Data[46788];

	UOnlineSubsystemSteamworks_execAreAnyFriends_Parms AreAnyFriends_Parms;
	AreAnyFriends_Parms.LocalUserNum = LocalUserNum;

	pFnAreAnyFriends->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAreAnyFriends, &AreAnyFriends_Parms, NULL);

	pFnAreAnyFriends->FunctionFlags |= 0x400;

	if (Query)
		memcpy(Query, &AreAnyFriends_Parms.Query, 0xC);

	return AreAnyFriends_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsFriend
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemSteamworks::IsFriend(unsigned char LocalUserNum, struct FUniqueNetId PlayerID)
{
	static UFunction* pFnIsFriend = NULL;

	if (!pFnIsFriend)
		pFnIsFriend = (UFunction*)UObject::GObjects()->Data[46784];

	UOnlineSubsystemSteamworks_execIsFriend_Parms IsFriend_Parms;
	IsFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy(&IsFriend_Parms.PlayerID, &PlayerID, 0x18);

	pFnIsFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIsFriend, &IsFriend_Parms, NULL);

	pFnIsFriend->FunctionFlags |= 0x400;

	return IsFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShowPresenceInformation
// [0x00020002]
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemSteamworks::CanShowPresenceInformation(unsigned char LocalUserNum)
{
	static UFunction* pFnCanShowPresenceInformation = NULL;

	if (!pFnCanShowPresenceInformation)
		pFnCanShowPresenceInformation = (UFunction*)UObject::GObjects()->Data[46781];

	UOnlineSubsystemSteamworks_execCanShowPresenceInformation_Parms CanShowPresenceInformation_Parms;
	CanShowPresenceInformation_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnCanShowPresenceInformation, &CanShowPresenceInformation_Parms, NULL);

	return CanShowPresenceInformation_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanViewPlayerProfiles
// [0x00020002]
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemSteamworks::CanViewPlayerProfiles(unsigned char LocalUserNum)
{
	static UFunction* pFnCanViewPlayerProfiles = NULL;

	if (!pFnCanViewPlayerProfiles)
		pFnCanViewPlayerProfiles = (UFunction*)UObject::GObjects()->Data[46778];

	UOnlineSubsystemSteamworks_execCanViewPlayerProfiles_Parms CanViewPlayerProfiles_Parms;
	CanViewPlayerProfiles_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnCanViewPlayerProfiles, &CanViewPlayerProfiles_Parms, NULL);

	return CanViewPlayerProfiles_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPurchaseContent
// [0x00020002]
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemSteamworks::CanPurchaseContent(unsigned char LocalUserNum)
{
	static UFunction* pFnCanPurchaseContent = NULL;

	if (!pFnCanPurchaseContent)
		pFnCanPurchaseContent = (UFunction*)UObject::GObjects()->Data[46775];

	UOnlineSubsystemSteamworks_execCanPurchaseContent_Parms CanPurchaseContent_Parms;
	CanPurchaseContent_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnCanPurchaseContent, &CanPurchaseContent_Parms, NULL);

	return CanPurchaseContent_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanDownloadUserContent
// [0x00020002]
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemSteamworks::CanDownloadUserContent(unsigned char LocalUserNum)
{
	static UFunction* pFnCanDownloadUserContent = NULL;

	if (!pFnCanDownloadUserContent)
		pFnCanDownloadUserContent = (UFunction*)UObject::GObjects()->Data[46772];

	UOnlineSubsystemSteamworks_execCanDownloadUserContent_Parms CanDownloadUserContent_Parms;
	CanDownloadUserContent_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnCanDownloadUserContent, &CanDownloadUserContent_Parms, NULL);

	return CanDownloadUserContent_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicate
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemSteamworks::CanCommunicate(unsigned char LocalUserNum)
{
	static UFunction* pFnCanCommunicate = NULL;

	if (!pFnCanCommunicate)
		pFnCanCommunicate = (UFunction*)UObject::GObjects()->Data[46769];

	UOnlineSubsystemSteamworks_execCanCommunicate_Parms CanCommunicate_Parms;
	CanCommunicate_Parms.LocalUserNum = LocalUserNum;

	pFnCanCommunicate->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnCanCommunicate, &CanCommunicate_Parms, NULL);

	pFnCanCommunicate->FunctionFlags |= 0x400;

	return CanCommunicate_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPlayOnline
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemSteamworks::CanPlayOnline(unsigned char LocalUserNum)
{
	static UFunction* pFnCanPlayOnline = NULL;

	if (!pFnCanPlayOnline)
		pFnCanPlayOnline = (UFunction*)UObject::GObjects()->Data[46766];

	UOnlineSubsystemSteamworks_execCanPlayOnline_Parms CanPlayOnline_Parms;
	CanPlayOnline_Parms.LocalUserNum = LocalUserNum;

	pFnCanPlayOnline->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnCanPlayOnline, &CanPlayOnline_Parms, NULL);

	pFnCanPlayOnline->FunctionFlags |= 0x400;

	return CanPlayOnline_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearGetUserAgeGroupDelegate
// [0x00020002]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         GetUserAgeGroupDelegate        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearGetUserAgeGroupDelegate(unsigned char LocalUserNum, struct FScriptDelegate GetUserAgeGroupDelegate)
{
	static UFunction* pFnClearGetUserAgeGroupDelegate = NULL;

	if (!pFnClearGetUserAgeGroupDelegate)
		pFnClearGetUserAgeGroupDelegate = (UFunction*)UObject::GObjects()->Data[46763];

	UOnlineSubsystemSteamworks_execClearGetUserAgeGroupDelegate_Parms ClearGetUserAgeGroupDelegate_Parms;
	ClearGetUserAgeGroupDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy(&ClearGetUserAgeGroupDelegate_Parms.GetUserAgeGroupDelegate, &GetUserAgeGroupDelegate, 0xC);

	this->ProcessEvent(pFnClearGetUserAgeGroupDelegate, &ClearGetUserAgeGroupDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddGetUserAgeGroupDelegate
// [0x00020002]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         GetUserAgeGroupDelegate        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddGetUserAgeGroupDelegate(unsigned char LocalUserNum, struct FScriptDelegate GetUserAgeGroupDelegate)
{
	static UFunction* pFnAddGetUserAgeGroupDelegate = NULL;

	if (!pFnAddGetUserAgeGroupDelegate)
		pFnAddGetUserAgeGroupDelegate = (UFunction*)UObject::GObjects()->Data[46760];

	UOnlineSubsystemSteamworks_execAddGetUserAgeGroupDelegate_Parms AddGetUserAgeGroupDelegate_Parms;
	AddGetUserAgeGroupDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy(&AddGetUserAgeGroupDelegate_Parms.GetUserAgeGroupDelegate, &GetUserAgeGroupDelegate, 0xC);

	this->ProcessEvent(pFnAddGetUserAgeGroupDelegate, &AddGetUserAgeGroupDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUserAgeGroup
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::GetUserAgeGroup(unsigned char LocalUserNum)
{
	static UFunction* pFnGetUserAgeGroup = NULL;

	if (!pFnGetUserAgeGroup)
		pFnGetUserAgeGroup = (UFunction*)UObject::GObjects()->Data[46754];

	UOnlineSubsystemSteamworks_execGetUserAgeGroup_Parms GetUserAgeGroup_Parms;
	GetUserAgeGroup_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnGetUserAgeGroup, &GetUserAgeGroup_Parms, NULL);

	return GetUserAgeGroup_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnGetUserAgeGroup
// [0x00120000]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  UserAgeGroup                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnGetUserAgeGroup(unsigned char LocalUserNum, unsigned char UserAgeGroup)
{
	static UFunction* pFnOnGetUserAgeGroup = NULL;

	if (!pFnOnGetUserAgeGroup)
		pFnOnGetUserAgeGroup = (UFunction*)UObject::GObjects()->Data[46751];

	UOnlineSubsystemSteamworks_execOnGetUserAgeGroup_Parms OnGetUserAgeGroup_Parms;
	OnGetUserAgeGroup_Parms.LocalUserNum = LocalUserNum;
	OnGetUserAgeGroup_Parms.UserAgeGroup = UserAgeGroup;

	this->ProcessEvent(pFnOnGetUserAgeGroup, &OnGetUserAgeGroup_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNickname
// [0x00020002]
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

struct FString UOnlineSubsystemSteamworks::GetPlayerNickname(unsigned char LocalUserNum)
{
	static UFunction* pFnGetPlayerNickname = NULL;

	if (!pFnGetPlayerNickname)
		pFnGetPlayerNickname = (UFunction*)UObject::GObjects()->Data[46747];

	UOnlineSubsystemSteamworks_execGetPlayerNickname_Parms GetPlayerNickname_Parms;
	GetPlayerNickname_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnGetPlayerNickname, &GetPlayerNickname_Parms, NULL);

	return GetPlayerNickname_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUniquePlayerId
// [0x00420002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemSteamworks::GetUniquePlayerId(unsigned char LocalUserNum, struct FUniqueNetId* PlayerID)
{
	static UFunction* pFnGetUniquePlayerId = NULL;

	if (!pFnGetUniquePlayerId)
		pFnGetUniquePlayerId = (UFunction*)UObject::GObjects()->Data[46742];

	UOnlineSubsystemSteamworks_execGetUniquePlayerId_Parms GetUniquePlayerId_Parms;
	GetUniquePlayerId_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnGetUniquePlayerId, &GetUniquePlayerId_Parms, NULL);

	if (PlayerID)
		memcpy(PlayerID, &GetUniquePlayerId_Parms.PlayerID, 0x18);

	return GetUniquePlayerId_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalLogin
// [0x00020000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::IsLocalLogin(unsigned char LocalUserNum)
{
	static UFunction* pFnIsLocalLogin = NULL;

	if (!pFnIsLocalLogin)
		pFnIsLocalLogin = (UFunction*)UObject::GObjects()->Data[46739];

	UOnlineSubsystemSteamworks_execIsLocalLogin_Parms IsLocalLogin_Parms;
	IsLocalLogin_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnIsLocalLogin, &IsLocalLogin_Parms, NULL);

	return IsLocalLogin_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsGuestLogin
// [0x00020000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::IsGuestLogin(unsigned char LocalUserNum)
{
	static UFunction* pFnIsGuestLogin = NULL;

	if (!pFnIsGuestLogin)
		pFnIsGuestLogin = (UFunction*)UObject::GObjects()->Data[46736];

	UOnlineSubsystemSteamworks_execIsGuestLogin_Parms IsGuestLogin_Parms;
	IsGuestLogin_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnIsGuestLogin, &IsGuestLogin_Parms, NULL);

	return IsGuestLogin_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLoginStatus
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemSteamworks::GetLoginStatus(unsigned char LocalUserNum)
{
	static UFunction* pFnGetLoginStatus = NULL;

	if (!pFnGetLoginStatus)
		pFnGetLoginStatus = (UFunction*)UObject::GObjects()->Data[46733];

	UOnlineSubsystemSteamworks_execGetLoginStatus_Parms GetLoginStatus_Parms;
	GetLoginStatus_Parms.LocalUserNum = LocalUserNum;

	pFnGetLoginStatus->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetLoginStatus, &GetLoginStatus_Parms, NULL);

	pFnGetLoginStatus->FunctionFlags |= 0x400;

	return GetLoginStatus_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLogoutCompletedDelegate
// [0x00020002]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         LogoutDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearLogoutCompletedDelegate(unsigned char LocalUserNum, struct FScriptDelegate LogoutDelegate)
{
	static UFunction* pFnClearLogoutCompletedDelegate = NULL;

	if (!pFnClearLogoutCompletedDelegate)
		pFnClearLogoutCompletedDelegate = (UFunction*)UObject::GObjects()->Data[46730];

	UOnlineSubsystemSteamworks_execClearLogoutCompletedDelegate_Parms ClearLogoutCompletedDelegate_Parms;
	ClearLogoutCompletedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy(&ClearLogoutCompletedDelegate_Parms.LogoutDelegate, &LogoutDelegate, 0xC);

	this->ProcessEvent(pFnClearLogoutCompletedDelegate, &ClearLogoutCompletedDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLogoutCompletedDelegate
// [0x00020002]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         LogoutDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddLogoutCompletedDelegate(unsigned char LocalUserNum, struct FScriptDelegate LogoutDelegate)
{
	static UFunction* pFnAddLogoutCompletedDelegate = NULL;

	if (!pFnAddLogoutCompletedDelegate)
		pFnAddLogoutCompletedDelegate = (UFunction*)UObject::GObjects()->Data[46726];

	UOnlineSubsystemSteamworks_execAddLogoutCompletedDelegate_Parms AddLogoutCompletedDelegate_Parms;
	AddLogoutCompletedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy(&AddLogoutCompletedDelegate_Parms.LogoutDelegate, &LogoutDelegate, 0xC);

	this->ProcessEvent(pFnAddLogoutCompletedDelegate, &AddLogoutCompletedDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLogoutCompleted
// [0x00120000]
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnLogoutCompleted(unsigned long bWasSuccessful)
{
	static UFunction* pFnOnLogoutCompleted = NULL;

	if (!pFnOnLogoutCompleted)
		pFnOnLogoutCompleted = (UFunction*)UObject::GObjects()->Data[46724];

	UOnlineSubsystemSteamworks_execOnLogoutCompleted_Parms OnLogoutCompleted_Parms;
	OnLogoutCompleted_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnLogoutCompleted, &OnLogoutCompleted_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Logout
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemSteamworks::Logout(unsigned char LocalUserNum)
{
	static UFunction* pFnLogout = NULL;

	if (!pFnLogout)
		pFnLogout = (UFunction*)UObject::GObjects()->Data[46721];

	UOnlineSubsystemSteamworks_execLogout_Parms Logout_Parms;
	Logout_Parms.LocalUserNum = LocalUserNum;

	pFnLogout->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLogout, &Logout_Parms, NULL);

	pFnLogout->FunctionFlags |= 0x400;

	return Logout_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginFailedDelegate
// [0x00020002]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         LoginFailedDelegate            ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::ClearLoginFailedDelegate(unsigned char LocalUserNum, struct FScriptDelegate LoginFailedDelegate)
{
	static UFunction* pFnClearLoginFailedDelegate = NULL;

	if (!pFnClearLoginFailedDelegate)
		pFnClearLoginFailedDelegate = (UFunction*)UObject::GObjects()->Data[46718];

	UOnlineSubsystemSteamworks_execClearLoginFailedDelegate_Parms ClearLoginFailedDelegate_Parms;
	ClearLoginFailedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy(&ClearLoginFailedDelegate_Parms.LoginFailedDelegate, &LoginFailedDelegate, 0xC);

	this->ProcessEvent(pFnClearLoginFailedDelegate, &ClearLoginFailedDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginFailedDelegate
// [0x00020002]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         LoginFailedDelegate            ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemSteamworks::AddLoginFailedDelegate(unsigned char LocalUserNum, struct FScriptDelegate LoginFailedDelegate)
{
	static UFunction* pFnAddLoginFailedDelegate = NULL;

	if (!pFnAddLoginFailedDelegate)
		pFnAddLoginFailedDelegate = (UFunction*)UObject::GObjects()->Data[46714];

	UOnlineSubsystemSteamworks_execAddLoginFailedDelegate_Parms AddLoginFailedDelegate_Parms;
	AddLoginFailedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy(&AddLoginFailedDelegate_Parms.LoginFailedDelegate, &LoginFailedDelegate, 0xC);

	this->ProcessEvent(pFnAddLoginFailedDelegate, &AddLoginFailedDelegate_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginFailed
// [0x00120000]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  ErrorCode                      ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnLoginFailed(unsigned char LocalUserNum, unsigned char ErrorCode)
{
	static UFunction* pFnOnLoginFailed = NULL;

	if (!pFnOnLoginFailed)
		pFnOnLoginFailed = (UFunction*)UObject::GObjects()->Data[46711];

	UOnlineSubsystemSteamworks_execOnLoginFailed_Parms OnLoginFailed_Parms;
	OnLoginFailed_Parms.LocalUserNum = LocalUserNum;
	OnLoginFailed_Parms.ErrorCode = ErrorCode;

	this->ProcessEvent(pFnOnLoginFailed, &OnLoginFailed_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AutoLogin
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemSteamworks::AutoLogin()
{
	static UFunction* pFnAutoLogin = NULL;

	if (!pFnAutoLogin)
		pFnAutoLogin = (UFunction*)UObject::GObjects()->Data[46709];

	UOnlineSubsystemSteamworks_execAutoLogin_Parms AutoLogin_Parms;

	pFnAutoLogin->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAutoLogin, &AutoLogin_Parms, NULL);

	pFnAutoLogin->FunctionFlags |= 0x400;

	return AutoLogin_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Login
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 LoginName                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Password                       ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bWantsLocalOnly                ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::Login(unsigned char LocalUserNum, struct FString LoginName, struct FString Password, unsigned long bWantsLocalOnly)
{
	static UFunction* pFnLogin = NULL;

	if (!pFnLogin)
		pFnLogin = (UFunction*)UObject::GObjects()->Data[46703];

	UOnlineSubsystemSteamworks_execLogin_Parms Login_Parms;
	Login_Parms.LocalUserNum = LocalUserNum;
	memcpy(&Login_Parms.LoginName, &LoginName, 0xC);
	memcpy(&Login_Parms.Password, &Password, 0xC);
	Login_Parms.bWantsLocalOnly = bWantsLocalOnly;

	pFnLogin->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLogin, &Login_Parms, NULL);

	pFnLogin->FunctionFlags |= 0x400;

	return Login_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowLoginUI
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bShowOnlineOnly                ( CPF_OptionalParm | CPF_Parm )
// int                            NumLoginOverride               ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bAddUser                       ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemSteamworks::ShowLoginUI(unsigned long bShowOnlineOnly, int NumLoginOverride, unsigned long bAddUser)
{
	static UFunction* pFnShowLoginUI = NULL;

	if (!pFnShowLoginUI)
		pFnShowLoginUI = (UFunction*)UObject::GObjects()->Data[46698];

	UOnlineSubsystemSteamworks_execShowLoginUI_Parms ShowLoginUI_Parms;
	ShowLoginUI_Parms.bShowOnlineOnly = bShowOnlineOnly;
	ShowLoginUI_Parms.NumLoginOverride = NumLoginOverride;
	ShowLoginUI_Parms.bAddUser = bAddUser;

	pFnShowLoginUI->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnShowLoginUI, &ShowLoginUI_Parms, NULL);

	pFnShowLoginUI->FunctionFlags |= 0x400;

	return ShowLoginUI_Parms.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendsChange
// [0x00120000]
// Parameters infos:

void UOnlineSubsystemSteamworks::OnFriendsChange()
{
	static UFunction* pFnOnFriendsChange = NULL;

	if (!pFnOnFriendsChange)
		pFnOnFriendsChange = (UFunction*)UObject::GObjects()->Data[46697];

	UOnlineSubsystemSteamworks_execOnFriendsChange_Parms OnFriendsChange_Parms;

	this->ProcessEvent(pFnOnFriendsChange, &OnFriendsChange_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnMutingChange
// [0x00120000]
// Parameters infos:

void UOnlineSubsystemSteamworks::OnMutingChange()
{
	static UFunction* pFnOnMutingChange = NULL;

	if (!pFnOnMutingChange)
		pFnOnMutingChange = (UFunction*)UObject::GObjects()->Data[46696];

	UOnlineSubsystemSteamworks_execOnMutingChange_Parms OnMutingChange_Parms;

	this->ProcessEvent(pFnOnMutingChange, &OnMutingChange_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginCancelled
// [0x00120000]
// Parameters infos:

void UOnlineSubsystemSteamworks::OnLoginCancelled()
{
	static UFunction* pFnOnLoginCancelled = NULL;

	if (!pFnOnLoginCancelled)
		pFnOnLoginCancelled = (UFunction*)UObject::GObjects()->Data[46695];

	UOnlineSubsystemSteamworks_execOnLoginCancelled_Parms OnLoginCancelled_Parms;

	this->ProcessEvent(pFnOnLoginCancelled, &OnLoginCancelled_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginChange
// [0x00120000]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemSteamworks::OnLoginChange(unsigned char LocalUserNum)
{
	static UFunction* pFnOnLoginChange = NULL;

	if (!pFnOnLoginChange)
		pFnOnLoginChange = (UFunction*)UObject::GObjects()->Data[46693];

	UOnlineSubsystemSteamworks_execOnLoginChange_Parms OnLoginChange_Parms;
	OnLoginChange_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnOnLoginChange, &OnLoginChange_Parms, NULL);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Exit
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::eventExit()
{
	static UFunction* pFnExit = NULL;

	if (!pFnExit)
		pFnExit = (UFunction*)UObject::GObjects()->Data[46692];

	UOnlineSubsystemSteamworks_eventExit_Parms Exit_Parms;

	pFnExit->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnExit, &Exit_Parms, NULL);

	pFnExit->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Init
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemSteamworks::eventInit()
{
	static UFunction* pFnInit = NULL;

	if (!pFnInit)
		pFnInit = (UFunction*)UObject::GObjects()->Data[46690];

	UOnlineSubsystemSteamworks_eventInit_Parms Init_Parms;

	pFnInit->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnInit, &Init_Parms, NULL);

	pFnInit->FunctionFlags |= 0x400;

	return Init_Parms.ReturnValue;
};

#ifdef _MSC_VER
#pragma pack ( pop )
#endif