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
	 * Class OnlineSubsystemUtils.OnlineSessionClient
	 * Size -> 0x01B8 (FullSize[0x01E0] - InheritedSize[0x0028])
	 */
	class UOnlineSessionClient : public UOnlineSession
	{
	public:
		unsigned char                                              UnknownData_CJ5V[0x1B0];                                 // 0x0028(0x01B0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsFromInvite;                                           // 0x01D8(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHandlingDisconnect;                                     // 0x01D9(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WY04[0x6];                                   // 0x01DA(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.AchievementBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void GetCachedAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FName& AchievementId, bool* bFoundID, float* Progress);
		void GetCachedAchievementDescription(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FName& AchievementId, bool* bFoundID, class FText* Title, class FText* LockedDescription, class FText* UnlockedDescription, bool* bHidden);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZCVN[0x18];                                  // 0x0050(0x0018) MISSED OFFSET (PADDING)

	public:
		class UAchievementQueryCallbackProxy* CacheAchievements(class UObject* WorldContextObject, class APlayerController* PlayerController);
		class UAchievementQueryCallbackProxy* CacheAchievementDescriptions(class UObject* WorldContextObject, class APlayerController* PlayerController);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A9QH[0x30];                                  // 0x0050(0x0030) MISSED OFFSET (PADDING)

	public:
		class UAchievementWriteCallbackProxy* WriteAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FName& AchievementName, float Progress, int32_t UserTag);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.ConnectionCallbackProxy
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A9AA[0x28];                                  // 0x0050(0x0028) MISSED OFFSET (PADDING)

	public:
		class UConnectionCallbackProxy* ConnectToService(class UObject* WorldContextObject, class APlayerController* PlayerController);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.CreateSessionCallbackProxy
	 * Size -> 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
	 */
	class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7YX9[0x48];                                  // 0x0050(0x0048) MISSED OFFSET (PADDING)

	public:
		class UCreateSessionCallbackProxy* CreateSession(class UObject* WorldContextObject, class APlayerController* PlayerController, int32_t PublicConnections, bool bUseLAN);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.DestroySessionCallbackProxy
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JY8P[0x28];                                  // 0x0050(0x0028) MISSED OFFSET (PADDING)

	public:
		class UDestroySessionCallbackProxy* DestroySession(class UObject* WorldContextObject, class APlayerController* PlayerController);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.EndMatchCallbackProxy
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O6G0[0x30];                                  // 0x0050(0x0030) MISSED OFFSET (PADDING)

	public:
		class UEndMatchCallbackProxy* EndMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, EMPMatchOutcome LocalPlayerOutcome, EMPMatchOutcome OtherPlayersOutcome);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.EndTurnCallbackProxy
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KMX5[0x28];                                  // 0x0050(0x0028) MISSED OFFSET (PADDING)

	public:
		class UEndTurnCallbackProxy* EndTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.FindSessionsCallbackProxy
	 * Size -> 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
	 */
	class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WMU5[0x40];                                  // 0x0050(0x0040) MISSED OFFSET (PADDING)

	public:
		class FString GetServerName(const struct FBlueprintSessionResult& Result);
		int32_t GetPingInMs(const struct FBlueprintSessionResult& Result);
		int32_t GetMaxPlayers(const struct FBlueprintSessionResult& Result);
		int32_t GetCurrentPlayers(const struct FBlueprintSessionResult& Result);
		class UFindSessionsCallbackProxy* FindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, int32_t maxResults, bool bUseLAN);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
	 * Size -> 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
	 */
	class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SIS2[0x38];                                  // 0x0050(0x0038) MISSED OFFSET (PADDING)

	public:
		class UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, int32_t Minplayers, int32_t MaxPlayers, int32_t PlayerGroup, bool ShowExistingMatches);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UInAppPurchaseCallbackProxy : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TNEG[0x38];                                  // 0x0048(0x0038) MISSED OFFSET (PADDING)

	public:
		class UInAppPurchaseCallbackProxy* CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, const struct FInAppPurchaseProductRequest& ProductRequest);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class UInAppPurchaseCallbackProxy2 : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EV38[0x60];                                  // 0x0048(0x0060) MISSED OFFSET (PADDING)

	public:
		class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseUnprocessedPurchases(class APlayerController* PlayerController);
		class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseQueryOwned(class APlayerController* PlayerController);
		class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, const struct FInAppPurchaseProductRequest2& ProductRequest);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UInAppPurchaseQueryCallbackProxy : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SQ52[0x48];                                  // 0x0048(0x0048) MISSED OFFSET (PADDING)

	public:
		class UInAppPurchaseQueryCallbackProxy* CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, TArray<class FString> ProductIdentifiers);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UInAppPurchaseQueryCallbackProxy2 : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K1UD[0x20];                                  // 0x0048(0x0020) MISSED OFFSET (PADDING)

	public:
		class UInAppPurchaseQueryCallbackProxy2* CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, TArray<class FString> ProductIdentifiers);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UInAppPurchaseRestoreCallbackProxy : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TACZ[0x48];                                  // 0x0048(0x0048) MISSED OFFSET (PADDING)

	public:
		class UInAppPurchaseRestoreCallbackProxy* CreateProxyObjectForInAppPurchaseRestore(TArray<struct FInAppPurchaseProductRequest> ConsumableProductFlags, class APlayerController* PlayerController);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class UInAppPurchaseRestoreCallbackProxy2 : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E92F[0x60];                                  // 0x0048(0x0060) MISSED OFFSET (PADDING)

	public:
		class UInAppPurchaseRestoreCallbackProxy2* CreateProxyObjectForInAppPurchaseRestore(TArray<struct FInAppPurchaseProductRequest2> ConsumableProductFlags, class APlayerController* PlayerController);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.IpConnection
	 * Size -> 0x00A0 (FullSize[0x1B90] - InheritedSize[0x1AF0])
	 */
	class UIpConnection : public UNetConnection
	{
	public:
		unsigned char                                              UnknownData_YSY4[0x50];                                  // 0x1AF0(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SocketErrorDisconnectDelay;                              // 0x1B40(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AQCD[0x4C];                                  // 0x1B44(0x004C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.IpNetDriver
	 * Size -> 0x0070 (FullSize[0x07B8] - InheritedSize[0x0748])
	 */
	class UIpNetDriver : public UNetDriver
	{
	public:
		unsigned char                                              LogPortUnreach : 1;                                      // 0x0748(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              AllowPlayerPortUnreach : 1;                              // 0x0748(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T3I3[0x3];                                   // 0x0749(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   MaxPortCountToTry;                                       // 0x074C(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VTNH[0xC];                                   // 0x0750(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   ServerDesiredSocketReceiveBufferBytes;                   // 0x075C(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint32_t                                                   ServerDesiredSocketSendBufferBytes;                      // 0x0760(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint32_t                                                   ClientDesiredSocketReceiveBufferBytes;                   // 0x0764(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint32_t                                                   ClientDesiredSocketSendBufferBytes;                      // 0x0768(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WHX1[0x4];                                   // 0x076C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     MaxSecondsInReceive;                                     // 0x0770(0x0008) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    NbPacketsBetweenReceiveTimeTest;                         // 0x0778(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      ResolutionConnectionTimeout;                             // 0x077C(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_T3FY[0x38];                                  // 0x0780(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.JoinSessionCallbackProxy
	 * Size -> 0x0150 (FullSize[0x0180] - InheritedSize[0x0030])
	 */
	class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UJ35[0x130];                                 // 0x0050(0x0130) MISSED OFFSET (PADDING)

	public:
		class UJoinSessionCallbackProxy* JoinSession(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBlueprintSessionResult& SearchResult);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool WriteLeaderboardInteger(class APlayerController* PlayerController, const class FName& StatName, int32_t StatValue);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class ULeaderboardFlushCallbackProxy : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H6UL[0x20];                                  // 0x0048(0x0020) MISSED OFFSET (PADDING)

	public:
		class ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(class APlayerController* PlayerController, const class FName& SessionName);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class ULeaderboardQueryCallbackProxy : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R0KU[0x50];                                  // 0x0048(0x0050) MISSED OFFSET (PADDING)

	public:
		class ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery(class APlayerController* PlayerController, const class FName& StatName);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.LogoutCallbackProxy
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class ULogoutCallbackProxy : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HF03[0x18];                                  // 0x0050(0x0018) MISSED OFFSET (PADDING)

	public:
		class ULogoutCallbackProxy* Logout(class UObject* WorldContextObject, class APlayerController* PlayerController);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.OnlineBeacon
	 * Size -> 0x0030 (FullSize[0x0250] - InheritedSize[0x0220])
	 */
	class AOnlineBeacon : public AActor
	{
	public:
		unsigned char                                              UnknownData_D0B6[0x8];                                   // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BeaconConnectionInitialTimeout;                          // 0x0228(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BeaconConnectionTimeout;                                 // 0x022C(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UNetDriver*                                          NetDriver;                                               // 0x0230(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GRQS[0x18];                                  // 0x0238(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.OnlineBeaconClient
	 * Size -> 0x0060 (FullSize[0x02B0] - InheritedSize[0x0250])
	 */
	class AOnlineBeaconClient : public AOnlineBeacon
	{
	public:
		class AOnlineBeaconHostObject*                             BeaconOwner;                                             // 0x0250(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UNetConnection*                                      BeaconConnection;                                        // 0x0258(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EBeaconConnectionState                                     ConnectionState;                                         // 0x0260(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_E3TI[0x4F];                                  // 0x0261(0x004F) MISSED OFFSET (PADDING)

	public:
		void ClientOnConnected();
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.OnlineBeaconHost
	 * Size -> 0x00B8 (FullSize[0x0308] - InheritedSize[0x0250])
	 */
	class AOnlineBeaconHost : public AOnlineBeacon
	{
	public:
		int32_t                                                    ListenPort;                                              // 0x0250(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N50Y[0x4];                                   // 0x0254(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AOnlineBeaconClient*>                         ClientActors;                                            // 0x0258(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_R1J9[0xA0];                                  // 0x0268(0x00A0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.OnlineBeaconHostObject
	 * Size -> 0x0028 (FullSize[0x0248] - InheritedSize[0x0220])
	 */
	class AOnlineBeaconHostObject : public AActor
	{
	public:
		class FString                                              BeaconTypeName;                                          // 0x0220(0x0010) ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              ClientBeaconActorClass;                                  // 0x0230(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class AOnlineBeaconClient*>                         ClientActors;                                            // 0x0238(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
	 * Size -> 0x0100 (FullSize[0x0128] - InheritedSize[0x0028])
	 */
	class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
	{
	public:
		class FName                                                VoiceSubsystemNameOverride;                              // 0x0028(0x0008) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AFPE[0xF8];                                  // 0x0030(0x00F8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.OnlinePIESettings
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UOnlinePIESettings : public UDeveloperSettings
	{
	public:
		bool                                                       bOnlinePIEEnabled;                                       // 0x0038(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AHBD[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPIELoginSettingsInternal>                   Logins;                                                  // 0x0040(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.PartyBeaconClient
	 * Size -> 0x00C0 (FullSize[0x0370] - InheritedSize[0x02B0])
	 */
	class APartyBeaconClient : public AOnlineBeaconClient
	{
	public:
		unsigned char                                              UnknownData_9IGV[0x30];                                  // 0x02B0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DestSessionId;                                           // 0x02E0(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FPartyReservation                                   PendingReservation;                                      // 0x02F0(0x0050) Protected, NativeAccessSpecifierProtected
		EClientRequestType                                         RequestType;                                             // 0x0340(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPendingReservationSent;                                 // 0x0341(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCancelReservation;                                      // 0x0342(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6RGJ[0x2D];                                  // 0x0343(0x002D) MISSED OFFSET (PADDING)

	public:
		void ServerUpdateReservationRequest(const class FString& SessionId, const struct FPartyReservation& ReservationUpdate);
		void ServerReservationRequest(const class FString& SessionId, const struct FPartyReservation& Reservation);
		void ServerRemoveMemberFromReservationRequest(const class FString& SessionId, const struct FPartyReservation& ReservationUpdate);
		void ServerCancelReservationRequest(const struct FUniqueNetIdRepl& PartyLeader);
		void ClientSendReservationUpdates(int32_t NumRemainingReservations);
		void ClientSendReservationFull();
		void ClientReservationResponse(EPartyReservationResult ReservationResponse);
		void ClientCancelReservationResponse(EPartyReservationResult ReservationResponse);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.PartyBeaconHost
	 * Size -> 0x0078 (FullSize[0x02C0] - InheritedSize[0x0248])
	 */
	class APartyBeaconHost : public AOnlineBeaconHostObject
	{
	public:
		class UPartyBeaconState*                                   State;                                                   // 0x0248(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZKEL[0x60];                                  // 0x0250(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bLogoutOnSessionTimeout;                                 // 0x02B0(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RNGZ[0x3];                                   // 0x02B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SessionTimeoutSecs;                                      // 0x02B4(0x0004) ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TravelSessionTimeoutSecs;                                // 0x02B8(0x0004) ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UB5Q[0x4];                                   // 0x02BC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.PartyBeaconState
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UPartyBeaconState : public UObject
	{
	public:
		class FName                                                SessionName;                                             // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumConsumedReservations;                                 // 0x0030(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MaxReservations;                                         // 0x0034(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumTeams;                                                // 0x0038(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumPlayersPerTeam;                                       // 0x003C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                TeamAssignmentMethod;                                    // 0x0040(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ReservedHostTeamNum;                                     // 0x0048(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ForceTeamNum;                                            // 0x004C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRestrictCrossConsole;                                   // 0x0050(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableRemovalRequests;                                  // 0x0051(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BGEW[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPartyReservation>                           Reservations;                                            // 0x0058(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GQGQ[0x10];                                  // 0x0068(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.QuitMatchCallbackProxy
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_618P[0x28];                                  // 0x0050(0x0028) MISSED OFFSET (PADDING)

	public:
		class UQuitMatchCallbackProxy* QuitMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, EMPMatchOutcome Outcome, int32_t TurnTimeoutInSeconds);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_79ST[0x10];                                  // 0x0050(0x0010) MISSED OFFSET (PADDING)

	public:
		class UShowLoginUICallbackProxy* ShowExternalLoginUI(class UObject* WorldContextObject, class APlayerController* InPlayerController);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.SpectatorBeaconClient
	 * Size -> 0x00E8 (FullSize[0x0398] - InheritedSize[0x02B0])
	 */
	class ASpectatorBeaconClient : public AOnlineBeaconClient
	{
	public:
		unsigned char                                              UnknownData_K36R[0x30];                                  // 0x02B0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DestSessionId;                                           // 0x02E0(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSpectatorReservation                               PendingReservation;                                      // 0x02F0(0x0078) Protected, NativeAccessSpecifierProtected
		ESpectatorClientRequestType                                RequestType;                                             // 0x0368(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPendingReservationSent;                                 // 0x0369(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCancelReservation;                                      // 0x036A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZA68[0x2D];                                  // 0x036B(0x002D) MISSED OFFSET (PADDING)

	public:
		void ServerReservationRequest(const class FString& SessionId, const struct FSpectatorReservation& Reservation);
		void ServerCancelReservationRequest(const struct FUniqueNetIdRepl& Spectator);
		void ClientSendReservationUpdates(int32_t NumRemainingReservations);
		void ClientSendReservationFull();
		void ClientReservationResponse(ESpectatorReservationResult ReservationResponse);
		void ClientCancelReservationResponse(ESpectatorReservationResult ReservationResponse);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.SpectatorBeaconHost
	 * Size -> 0x0078 (FullSize[0x02C0] - InheritedSize[0x0248])
	 */
	class ASpectatorBeaconHost : public AOnlineBeaconHostObject
	{
	public:
		class USpectatorBeaconState*                               State;                                                   // 0x0248(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PSSL[0x60];                                  // 0x0250(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bLogoutOnSessionTimeout;                                 // 0x02B0(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_R8DP[0x3];                                   // 0x02B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SessionTimeoutSecs;                                      // 0x02B4(0x0004) ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TravelSessionTimeoutSecs;                                // 0x02B8(0x0004) ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IZP3[0x4];                                   // 0x02BC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.SpectatorBeaconState
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class USpectatorBeaconState : public UObject
	{
	public:
		class FName                                                SessionName;                                             // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumConsumedReservations;                                 // 0x0030(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MaxReservations;                                         // 0x0034(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRestrictCrossConsole;                                   // 0x0038(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Z6DL[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSpectatorReservation>                       Reservations;                                            // 0x0040(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TDD5[0x10];                                  // 0x0050(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.TestBeaconClient
	 * Size -> 0x0000 (FullSize[0x02B0] - InheritedSize[0x02B0])
	 */
	class ATestBeaconClient : public AOnlineBeaconClient
	{
	public:
		void ServerPong();
		void ClientPing();
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.TestBeaconHost
	 * Size -> 0x0000 (FullSize[0x0248] - InheritedSize[0x0248])
	 */
	class ATestBeaconHost : public AOnlineBeaconHostObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void RegisterTurnBasedMatchInterfaceObject(class UObject* WorldContextObject, class APlayerController* PlayerController, class UObject* Object);
		void GetPlayerDisplayName(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, int32_t PlayerIndex, class FString* PlayerDisplayName);
		void GetMyPlayerIndex(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, int32_t* PlayerIndex);
		void GetIsMyTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, bool* bIsMyTurn);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.VoipListenerSynthComponent
	 * Size -> 0x0060 (FullSize[0x0720] - InheritedSize[0x06C0])
	 */
	class UVoipListenerSynthComponent : public USynthComponent
	{
	public:
		unsigned char                                              UnknownData_3EQN[0x60];                                  // 0x06C0(0x0060) MISSED OFFSET (PADDING)

	public:
		bool IsIdling();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
