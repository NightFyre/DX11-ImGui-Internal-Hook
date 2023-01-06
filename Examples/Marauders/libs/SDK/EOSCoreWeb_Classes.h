#pragma once

/**
 * Name: RaidGame
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class EOSCoreWeb.EOSWebAuthLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEOSWebAuthLibrary : public UObject
	{
	public:
		void RequestAuthAccessToken(const class FScriptDelegate& Callback, const struct FRequestAuthAccessTokenRequest& Request);
		void InitiateEpicAuthentication(const class FScriptDelegate& Callback, const struct FInitiateEpicAuthenticationRequest& Request);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCoreWeb.EOSWebConnectLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEOSWebConnectLibrary : public UObject
	{
	public:
		void RequestAccessToken(const struct FRequestAccessTokenRequest& Request, const class FScriptDelegate& Callback);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCoreWeb.EOSWebPlayerTicketLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEOSWebPlayerTicketLibrary : public UObject
	{
	public:
		void SubmitTicket(const class FString& WebApiKey, const struct FSubmitTicketRequest& Request, const class FScriptDelegate& Callback);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCoreWeb.EOSWebShared
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEOSWebShared : public UObject
	{
	public:
		void GetPublicIp(const class FScriptDelegate& Callback);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCoreWeb.EOSWebVoiceLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEOSWebVoiceLibrary : public UObject
	{
	public:
		void RemoveParticipant(const class FString& AccessToken, const class FString& ProductUserId, const class FString& DeploymentId, const class FString& roomName, const class FScriptDelegate& Callback);
		void ModifyParticipant(const class FString& AccessToken, const class FString& ProductUserId, const class FString& DeploymentId, const class FString& roomName, bool bHardMuted, const class FScriptDelegate& Callback);
		void CreateRoomToken(const class FString& AccessToken, TArray<struct FWebRequestParticipantData> Participants, const class FString& DeploymentId, const class FString& roomName, const class FScriptDelegate& Callback);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
