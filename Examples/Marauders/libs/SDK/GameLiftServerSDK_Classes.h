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
	 * Class GameLiftServerSDK.GameLiftServerFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGameLiftServerFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void UpdatePlayerSessionCreationPolicy(bool* Success, EGameLiftServerError* errorType, class FString* ErrorMessage, EPlayerSessionCreationPolicyServer policy);
		void StopMatchBackfill(bool* Success, EGameLiftServerError* errorType, class FString* ErrorMessage, const struct FStopMatchBackfillRequest& StopMatchBackfillRequest);
		struct FStartMatchBackfillResultServer StartMatchBackfill(bool* Success, EGameLiftServerError* errorType, class FString* ErrorMessage, const struct FStartMatchBackfillRequestServer& StartMatchBackfillRequestServer);
		void RemovePlayerSession(bool* Success, EGameLiftServerError* errorType, class FString* ErrorMessage, const class FString& PlayerSessionId);
		void ProcessReady(bool* Success, EGameLiftServerError* errorType, class FString* ErrorMessage, class UProcessParameters* ProcessParameters);
		void ProcessEnding(bool* Success, EGameLiftServerError* errorType, class FString* ErrorMessage);
		void InitSDK(bool* Success, EGameLiftServerError* errorType, class FString* ErrorMessage);
		struct FDateTime GetTerminationTime(bool* Success, EGameLiftServerError* errorType, class FString* ErrorMessage);
		class FString GetSdkVersion(bool* Success, EGameLiftServerError* errorType, class FString* ErrorMessage);
		struct FGetInstanceCertificateResult GetInstanceCertificate(bool* Success, EGameLiftServerError* errorType, class FString* ErrorMessage);
		class FString GetGameSessionId(bool* Success, EGameLiftServerError* errorType, class FString* ErrorMessage);
		void Destroy(bool* Success, EGameLiftServerError* errorType, class FString* ErrorMessage);
		struct FDescribePlayerSessionsResultServer DescribePlayerSessions(bool* Success, EGameLiftServerError* errorType, class FString* ErrorMessage, const struct FDescribePlayerSessionsRequestServer& DescribePlayerSessionsRequest);
		void ActivateGameSession(bool* Success, EGameLiftServerError* errorType, class FString* ErrorMessage);
		void AcceptPlayerSession(bool* Success, EGameLiftServerError* errorType, class FString* ErrorMessage, const class FString& PlayerSessionId);
		static UClass* StaticClass();
	};

	/**
	 * Class GameLiftServerSDK.ProcessParameters
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UProcessParameters : public UObject
	{
	public:
		int32_t                                                    Port;                                                    // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V5DR[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      logPaths;                                                // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUpdateGameSession;                                     // 0x0040(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnStartGameSession;                                      // 0x0050(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic

	public:
		void UpdateGameSession(const struct FUpdateGameSessionServer& UpdateGameSession);
		void StartGameSession(const struct FAWSGameSessionServer& GameSession);
		void ProcessTerminate();
		bool HealthCheck();
		static UClass* StaticClass();
	};

	/**
	 * Class GameLiftServerSDK.ServerHelper
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UServerHelper : public UBlueprintFunctionLibrary
	{
	public:
		void ServerIPAndPort(class UObject* WorldContextObject, class FString* ip, int32_t* Port);
		void QuitServer(bool Force);
		void LogFilePath(class FString* LogFilePath);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
