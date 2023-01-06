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
	 * Class GameLiftFramework.GameLiftGameInstance
	 * Size -> 0x00C0 (FullSize[0x0268] - InheritedSize[0x01A8])
	 */
	class UGameLiftGameInstance : public UGameInstance
	{
	public:
		bool                                                       bHasHadPlayer;                                           // 0x01A8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasStartedExitPlayer;                                   // 0x01A9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K3MH[0x6];                                   // 0x01AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnStartGameSessionDel;                                   // 0x01B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnHealthCheckDel;                                        // 0x01C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FTimerHandle                                        HandleProcessTerminationHandle;                          // 0x01D0(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTimerHandle                                        HandleGameSessionUpdateHandle;                           // 0x01D8(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTimerHandle                                        StopBackFillHandle;                                      // 0x01E0(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTimerHandle                                        SuspendBackfillHandle;                                   // 0x01E8(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTimerHandle                                        NotStartedTimer;                                         // 0x01F0(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FStartGameSessionState                              StartGameSessionState;                                   // 0x01F8(0x0018) NativeAccessSpecifierPublic
		struct FUpdateGameSessionState                             UpdateGameSessionState;                                  // 0x0210(0x0001) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6M44[0x3];                                   // 0x0211(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FProcessTerminateState                              ProcessTerminateState;                                   // 0x0214(0x0008) NoDestructor, NativeAccessSpecifierPublic
		struct FHealthCheckState                                   HealthCheckState;                                        // 0x021C(0x0001) NoDestructor, NativeAccessSpecifierPublic
		bool                                                       GameSessionActivated;                                    // 0x021D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JAUD[0x2];                                   // 0x021E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LatestBackfillTicketId;                                  // 0x0220(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       WaitingForPlayersToJoin;                                 // 0x0230(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K2ZR[0x3];                                   // 0x0231(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TimeSpentWaitingForPlayersToJoin;                        // 0x0234(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTooLateToJoin;                                          // 0x0238(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ServersBeenAvtivated;                                    // 0x0239(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1O01[0x1E];                                  // 0x023A(0x001E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              GameLiftClientCompenentClass;                            // 0x0258(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UVH3[0x8];                                   // 0x0260(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetPlayerSessionId(const class FString& PlayerSessionId);
		void ServerTravel(const class FString& TravelURL);
		void QuitGame();
		void OnUpdateGameSession(const class FString& UpdateGameSession);
		void OnStartGameSession();
		void HandleProcessTermination();
		void HandleGameSessionUpdate();
		class FString GetPlayerSessionId();
		int32_t GetMaxPlayerSessionCount();
		class UGameLiftClientCompenent* GetGameLiftClientCompenent();
		static UClass* StaticClass();
	};

	/**
	 * Class GameLiftFramework.GameLiftPlayerController
	 * Size -> 0x0000 (FullSize[0x0570] - InheritedSize[0x0570])
	 */
	class AGameLiftPlayerController : public APlayerController
	{
	public:
		void ServerRemovePlayer(const class FString& PlayerSessionId);
		void ServerAcceptPlayer(const class FString& PlayerSessionId);
		static UClass* StaticClass();
	};

	/**
	 * Class GameLiftFramework.GameLiftPlayerState
	 * Size -> 0x0010 (FullSize[0x0330] - InheritedSize[0x0320])
	 */
	class AGameLiftPlayerState : public APlayerState
	{
	public:
		class FString                                              PlayerSessionId;                                         // 0x0320(0x0010) BlueprintVisible, Net, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameLiftFramework.CreateGameSessionAsyncTask
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UCreateGameSessionAsyncTask : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFail;                                                  // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UCreateGameSessionAsyncTask* CreateGameSession(const class FString& roomName, const class FString& aliasId, int32_t MaxCount, TArray<struct FGameLiftProperty> Properties);
		static UClass* StaticClass();
	};

	/**
	 * Class GameLiftFramework.CreatePlayerSessionAsyncTask
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UCreatePlayerSessionAsyncTask : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFail;                                                  // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UCreatePlayerSessionAsyncTask* CreatePlayerSession(const class FString& SessionId, const class FString& PlayerId);
		static UClass* StaticClass();
	};

	/**
	 * Class GameLiftFramework.GameLiftBPLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGameLiftBPLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class FString GetGameProperty(class UObject* WorldContextObject, const struct FGameLiftGameSession& GameSession, const class FName& Key);
		class FString GetConnectHost(class UObject* WorldContextObject, const struct FGameLiftGameSession& GameSession);
		class FString GetConnectCommand(class UObject* WorldContextObject, const class FString& Host, const class FString& PlayerSessionId);
		void Connect(class UObject* WorldContextObject, const class FString& Host, const class FString& PlayerSessionId, const class FString& ExtraOptions);
		static UClass* StaticClass();
	};

	/**
	 * Class GameLiftFramework.GameLiftClientCompenent
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UGameLiftClientCompenent : public UObject
	{
	public:
		unsigned char                                              UnknownData_QWW9[0x40];                                  // 0x0028(0x0040) MISSED OFFSET (PADDING)

	public:
		bool StopMatchmaking(const class FString& TicketID);
		bool StartMatchmaking(TArray<struct FGameLiftPlayer> players, const class FString& TicketID, const class FString& configurationName);
		void SetUpAwsClient(const class FString& AccessKey, const class FString& secretKey, const class FString& Region, const class FString& aliasId, const class FString& fleetId, EGameLiftScheme GameLiftScheme);
		void SetTestPoint(const class FString& InTestEndpoint);
		void SetLocalTest(bool IsLocalTest);
		bool SearchGameSessions();
		int32_t GetGameSessionCount();
		bool GetGameSession(int32_t Index, struct FGameLiftGameSession* GameSession);
		bool DescribeMatchmaking(const class FString& TicketID, struct FMatchMakingTicketFrame* MatchmakingTicket);
		bool CreatePlayerSession(const class FString& SessionId, const class FString& PlayerId);
		bool CreateGameSession(const class FString& roomName, const class FString& Password, const class FString& aliasId, int32_t MaxCount, TArray<struct FGameLiftProperty> Properties);
		bool AcceptMatch(const class FString& TicketID, TArray<class FString> playerIds, EAcceptanceTypeFrame AppceptType);
		static UClass* StaticClass();
	};

	/**
	 * Class GameLiftFramework.SearchGameSessionAsyncTask
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class USearchGameSessionAsyncTask : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFail;                                                  // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class USearchGameSessionAsyncTask* SearchGameSession();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
