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
	 * Class EOSCore.EOSCoreSubsystem
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEOSCoreSubsystem : public UGameInstanceSubsystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.CoreAchievements
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UCoreAchievements : public UEOSCoreSubsystem
	{
	public:
		unsigned char                                              UnknownData_KYZ2[0x50];                                  // 0x0030(0x0050) MISSED OFFSET (PADDING)

	public:
		class UCoreAchievements* GetAchievements(class UObject* WorldContextObject);
		void EOSAchievementsUnlockAchievements(class UObject* WorldContextObject, const struct FEOSAchievementsUnlockAchievementsOptions& Options, const class FScriptDelegate& Callback);
		void EOSAchievementsRemoveNotifyAchievementsUnlocked(class UObject* WorldContextObject, const struct FEOSNotificationId& ID);
		void EOSAchievementsQueryPlayerAchievements(class UObject* WorldContextObject, const struct FEOSAchievementsQueryPlayerAchievementsOptions& Options, const class FScriptDelegate& Callback);
		void EOSAchievementsQueryDefinitions(class UObject* WorldContextObject, const struct FEOSAchievementsQueryDefinitionsOptions& Options, const class FScriptDelegate& Callback);
		int32_t EOSAchievementsGetPlayerAchievementCount(class UObject* WorldContextObject, const struct FEOSAchievementsGetPlayerAchievementCountOptions& Options);
		int32_t EOSAchievementsGetAchievementDefinitionCount(class UObject* WorldContextObject, const struct FEOSAchievementsGetAchievementDefinitionCountOptions& Options);
		EOSResult EOSAchievementsCopyPlayerAchievementByIndex(class UObject* WorldContextObject, const struct FEOSAchievementsCopyPlayerAchievementByIndexOptions& Options, struct FEOSAchievementsPlayerAchievement* OutAchievement);
		EOSResult EOSAchievementsCopyAchievementDefinitionV2ByIndex(class UObject* WorldContextObject, const struct FEOSAchievementsCopyAchievementDefinitionV2ByIndexOptions& Options, struct FEOSAchievementsDefinitionV2* OutDefinition);
		EOSResult EOSAchievementsCopyAchievementDefinitionV2ByAchievementId(class UObject* WorldContextObject, const struct FEOSAchievementsCopyAchievementDefinitionV2ByAchievementIdOptions& Options, struct FEOSAchievementsDefinitionV2* OutDefinition);
		struct FEOSNotificationId EOSAchievementsAddNotifyAchievementsUnlockedV2(class UObject* WorldContextObject, const class FScriptDelegate& Callback);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreAsyncAction
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UEOSCoreAsyncAction : public UBlueprintAsyncActionBase
	{
	public:
		unsigned char                                              UnknownData_JPPC[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreAchievementsQueryDefinitions
	 * Size -> 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
	 */
	class UEOSCoreAchievementsQueryDefinitions : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H11C[0x38];                                  // 0x0048(0x0038) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSAchievementsOnQueryDefinitionsCompleteCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreAchievementsQueryDefinitions* EOSAchievementsQueryDefinitionsAsync(class UObject* WorldContextObject, const struct FEOSAchievementsQueryDefinitionsOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreAchievementsQueryPlayerAchievements
	 * Size -> 0x0068 (FullSize[0x00A0] - InheritedSize[0x0038])
	 */
	class UEOSCoreAchievementsQueryPlayerAchievements : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZZ1F[0x58];                                  // 0x0048(0x0058) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSAchievementsOnQueryPlayerAchievementsCompleteCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreAchievementsQueryPlayerAchievements* EOSAchievementsQueryPlayerAchievementsAsync(class UObject* WorldContextObject, const struct FEOSAchievementsQueryPlayerAchievementsOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreAchievementsUnlockAchievements
	 * Size -> 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
	 */
	class UEOSCoreAchievementsUnlockAchievements : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P72G[0x48];                                  // 0x0048(0x0048) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSAchievementsOnUnlockAchievementsCompleteCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreAchievementsUnlockAchievements* EOSAchievementsUnlockAchievements(class UObject* WorldContextObject, const struct FEOSAchievementsUnlockAchievementsOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.CoreAntiCheatClient
	 * Size -> 0x0190 (FullSize[0x01C0] - InheritedSize[0x0030])
	 */
	class UCoreAntiCheatClient : public UEOSCoreSubsystem
	{
	public:
		unsigned char                                              UnknownData_J1GG[0x190];                                 // 0x0030(0x0190) MISSED OFFSET (PADDING)

	public:
		class UCoreAntiCheatClient* GetAntiCheatClient(class UObject* WorldContextObject);
		EOSResult EOSAntiCheatClientUnregisterPeer(class UObject* WorldContextObject, const struct FEOSAntiCheatClientUnregisterPeerOptions& Options);
		EOSResult EOSAntiCheatClientUnprotectMessage(class UObject* WorldContextObject, const struct FEOSAntiCheatClientUnprotectMessageOptions& Options, TArray<unsigned char> OutBuffer);
		void EOSAntiCheatClientRemoveNotifyPeerAuthStatusChanged(class UObject* WorldContextObject, const struct FEOSNotificationId& NotificationID);
		void EOSAntiCheatClientRemoveNotifyPeerActionRequired(class UObject* WorldContextObject, const struct FEOSNotificationId& NotificationID);
		void EOSAntiCheatClientRemoveNotifyMessageToServer(class UObject* WorldContextObject, const struct FEOSNotificationId& NotificationID);
		void EOSAntiCheatClientRemoveNotifyMessageToPeer(class UObject* WorldContextObject, const struct FEOSNotificationId& NotificationID);
		void EOSAntiCheatClientRemoveNotifyClientIntegrityViolated(class UObject* WorldContextObject, const struct FEOSNotificationId& NotificationID);
		EOSResult EOSAntiCheatClientRegisterPeer(class UObject* WorldContextObject, const struct FEOSAntiCheatClientRegisterPeerOptions& Options);
		EOSResult EOSAntiCheatClientReceiveMessageFromServer(class UObject* WorldContextObject, const struct FEOSAntiCheatClientReceiveMessageFromServerOptions& Options);
		EOSResult EOSAntiCheatClientReceiveMessageFromPeer(class UObject* WorldContextObject, const struct FEOSAntiCheatClientReceiveMessageFromPeerOptions& Options);
		EOSResult EOSAntiCheatClientProtectMessage(class UObject* WorldContextObject, const struct FEOSAntiCheatClientProtectMessageOptions& Options, TArray<unsigned char>* OutBuffer);
		EOSResult EOSAntiCheatClientPollStatus(class UObject* WorldContextObject, const struct FEOSAntiCheatClientPollStatusOptions& Options, EEOSEAntiCheatClientViolationType* ViolationType, class FString* OutMessage);
		EOSResult EOSAntiCheatClientGetProtectMessageOutputLength(class UObject* WorldContextObject, const struct FEOSAntiCheatClientGetProtectMessageOutputLengthOptions& Options, int32_t* OutBufferLengthBytes);
		EOSResult EOSAntiCheatClientEndSession(class UObject* WorldContextObject, const struct FEOSAntiCheatClientEndSessionOptions& Options);
		EOSResult EOSAntiCheatClientBeginSession(class UObject* WorldContextObject, const struct FEOSAntiCheatClientBeginSessionOptions& Options);
		struct FEOSNotificationId EOSAntiCheatClientAddNotifyPeerAuthStatusChanged(class UObject* WorldContextObject, const struct FEOSAntiCheatClientAddNotifyPeerAuthStatusChangedOptions& Options, const class FScriptDelegate& Callback);
		struct FEOSNotificationId EOSAntiCheatClientAddNotifyPeerActionRequired(class UObject* WorldContextObject, const struct FEOSAntiCheatClientAddNotifyPeerActionRequiredOptions& Options, const class FScriptDelegate& Callback);
		struct FEOSNotificationId EOSAntiCheatClientAddNotifyMessageToServer(class UObject* WorldContextObject, const struct FEOSAntiCheatClientAddNotifyMessageToServerOptions& Options, const class FScriptDelegate& Callback);
		struct FEOSNotificationId EOSAntiCheatClientAddNotifyMessageToPeer(class UObject* WorldContextObject, const struct FEOSAntiCheatClientAddNotifyMessageToPeerOptions& Options, const class FScriptDelegate& Callback);
		struct FEOSNotificationId EOSAntiCheatClientAddNotifyClientIntegrityViolated(class UObject* WorldContextObject, const struct FEOSAntiCheatClientAddNotifyClientIntegrityViolatedOptions& Options, const class FScriptDelegate& Callback);
		EOSResult EOSAntiCheatClientAddExternalIntegrityCatalog(class UObject* WorldContextObject, const struct FEOSAntiCheatClientAddExternalIntegrityCatalogOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.CoreAntiCheatServer
	 * Size -> 0x00F0 (FullSize[0x0120] - InheritedSize[0x0030])
	 */
	class UCoreAntiCheatServer : public UEOSCoreSubsystem
	{
	public:
		unsigned char                                              UnknownData_0O2U[0xF0];                                  // 0x0030(0x00F0) MISSED OFFSET (PADDING)

	public:
		class UCoreAntiCheatServer* GetAntiCheatServer(class UObject* WorldContextObject);
		EOSResult EOSAntiCheatServerUnregisterClient(class UObject* WorldContextObject, const struct FEOSAntiCheatServerUnregisterClientOptions& Options);
		EOSResult EOSAntiCheatServerUnprotectMessage(class UObject* WorldContextObject, const struct FEOSAntiCheatServerUnprotectMessageOptions& Options, TArray<unsigned char>* OutBuffer, int32_t* OutBufferLengthBytes);
		EOSResult EOSAntiCheatServerSetGameSessionId(class UObject* WorldContextObject, const struct FEOSAntiCheatCommonSetGameSessionIdOptions& Options);
		EOSResult EOSAntiCheatServerSetClientNetworkState(class UObject* WorldContextObject, const struct FEOSAntiCheatServerSetClientNetworkStateOptions& Options);
		EOSResult EOSAntiCheatServerSetClientDetails(class UObject* WorldContextObject, const struct FEOSAntiCheatCommonSetClientDetailsOptions& Options);
		void EOSAntiCheatServerRemoveNotifyMessageToClient(class UObject* WorldContextObject, const struct FEOSNotificationId& NotificationID);
		void EOSAntiCheatServerRemoveNotifyClientAuthStatusChanged(class UObject* WorldContextObject, const struct FEOSNotificationId& NotificationID);
		void EOSAntiCheatServerRemoveNotifyClientActionRequired(class UObject* WorldContextObject, const struct FEOSNotificationId& NotificationID);
		EOSResult EOSAntiCheatServerRegisterEvent(class UObject* WorldContextObject, const struct FEOSAntiCheatCommonRegisterEventOptions& Options);
		EOSResult EOSAntiCheatServerRegisterClient(class UObject* WorldContextObject, const struct FEOSAntiCheatServerRegisterClientOptions& Options);
		EOSResult EOSAntiCheatServerReceiveMessageFromClient(class UObject* WorldContextObject, const struct FEOSAntiCheatServerReceiveMessageFromClientOptions& Options);
		EOSResult EOSAntiCheatServerProtectMessage(class UObject* WorldContextObject, const struct FEOSAntiCheatServerProtectMessageOptions& Options, TArray<unsigned char>* OutBuffer, int32_t* OutBufferLengthBytes);
		EOSResult EOSAntiCheatServerLogPlayerUseWeapon(class UObject* WorldContextObject, const struct FEOSAntiCheatCommonLogPlayerUseWeaponOptions& Options);
		EOSResult EOSAntiCheatServerLogPlayerUseAbility(class UObject* WorldContextObject, const struct FEOSAntiCheatCommonLogPlayerUseAbilityOptions& Options);
		EOSResult EOSAntiCheatServerLogPlayerTick(class UObject* WorldContextObject, const struct FEOSAntiCheatCommonLogPlayerTickOptions& Options);
		EOSResult EOSAntiCheatServerLogPlayerTakeDamage(class UObject* WorldContextObject, const struct FEOSAntiCheatCommonLogPlayerTakeDamageOptions& Options);
		EOSResult EOSAntiCheatServerLogPlayerSpawn(class UObject* WorldContextObject, const struct FEOSAntiCheatCommonLogPlayerSpawnOptions& Options);
		EOSResult EOSAntiCheatServerLogPlayerRevive(class UObject* WorldContextObject, const struct FEOSAntiCheatCommonLogPlayerReviveOptions& Options);
		EOSResult EOSAntiCheatServerLogPlayerDespawn(class UObject* WorldContextObject, const struct FEOSAntiCheatCommonLogPlayerDespawnOptions& Options);
		EOSResult EOSAntiCheatServerLogGameRoundStart(class UObject* WorldContextObject, const struct FEOSAntiCheatCommonLogGameRoundStartOptions& Options);
		EOSResult EOSAntiCheatServerLogGameRoundEnd(class UObject* WorldContextObject, const struct FEOSAntiCheatCommonLogGameRoundEndOptions& Options);
		EOSResult EOSAntiCheatServerLogEvent(class UObject* WorldContextObject, const struct FEOSAntiCheatCommonLogEventOptions& Options);
		EOSResult EOSAntiCheatServerGetProtectMessageOutputLength(class UObject* WorldContextObject, const struct FEOSAntiCheatServerGetProtectMessageOutputLengthOptions& Options, int32_t* OutBufferLengthBytes);
		EOSResult EOSAntiCheatServerEndSession(class UObject* WorldContextObject, const struct FEOSAntiCheatServerEndSessionOptions& Options);
		EOSResult EOSAntiCheatServerBeginSession(class UObject* WorldContextObject, const struct FEOSAntiCheatServerBeginSessionOptions& Options);
		struct FEOSNotificationId EOSAntiCheatServerAddNotifyMessageToClient(class UObject* WorldContextObject, const struct FEOSAntiCheatServerAddNotifyMessageToClientOptions& Options, const class FScriptDelegate& Callback);
		struct FEOSNotificationId EOSAntiCheatServerAddNotifyClientAuthStatusChanged(class UObject* WorldContextObject, const struct FEOSAntiCheatServerAddNotifyClientAuthStatusChangedOptions& Options, const class FScriptDelegate& Callback);
		struct FEOSNotificationId EOSAntiCheatServerAddNotifyClientActionRequired(class UObject* WorldContextObject, const struct FEOSAntiCheatServerAddNotifyClientActionRequiredOptions& Options, const class FScriptDelegate& Callback);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreAuthLogin
	 * Size -> 0x0060 (FullSize[0x0098] - InheritedSize[0x0038])
	 */
	class UEOSCoreAuthLogin : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E0YX[0x50];                                  // 0x0048(0x0050) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSAuthLoginCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreAuthLogin* EOSAuthLoginAsync(class UObject* WorldContextObject, const struct FEOSAuthLoginOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreAuthLogout
	 * Size -> 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
	 */
	class UEOSCoreAuthLogout : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IQAI[0x38];                                  // 0x0048(0x0038) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSAuthLogoutCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreAuthLogout* EOSAuthLogoutAsync(class UObject* WorldContextObject, const struct FEOSAuthLogoutOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreAuthLinkAccount
	 * Size -> 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
	 */
	class UEOSCoreAuthLinkAccount : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6AFX[0x48];                                  // 0x0048(0x0048) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSAuthLinkAccountCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreAuthLinkAccount* EOSAuthLinkAccount(class UObject* WorldContextObject, const struct FEOSAuthLinkAccountOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreAuthDeletePersistentAuth
	 * Size -> 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
	 */
	class UEOSCoreAuthDeletePersistentAuth : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3GBS[0x20];                                  // 0x0048(0x0020) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSAuthDeletePersistentAuthCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreAuthDeletePersistentAuth* EOSAuthDeletePersistentAuthAsync(class UObject* WorldContextObject, const struct FEOSAuthDeletePersistentAuthOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreAuthVerifyUserAuth
	 * Size -> 0x00D0 (FullSize[0x0108] - InheritedSize[0x0038])
	 */
	class UEOSCoreAuthVerifyUserAuth : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_85ZM[0xC0];                                  // 0x0048(0x00C0) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSAuthVerifyUserAuthCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreAuthVerifyUserAuth* EOSAuthVerifyUserAuthAsync(class UObject* WorldContextObject, const struct FEOSAuthVerifyUserAuthOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.CoreAuthentication
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UCoreAuthentication : public UEOSCoreSubsystem
	{
	public:
		unsigned char                                              UnknownData_8JML[0x50];                                  // 0x0030(0x0050) MISSED OFFSET (PADDING)

	public:
		class UCoreAuthentication* GetAuthentication(class UObject* WorldContextObject);
		void EOSAuthVerifyUserAuth(class UObject* WorldContextObject, const struct FEOSAuthVerifyUserAuthOptions& Options, const class FScriptDelegate& Callback);
		void EOSAuthVerifyIdToken(class UObject* WorldContextObject, const struct FEOSAuthVerifyIdTokenOptions& Options, const class FScriptDelegate& Callback);
		void EOSAuthRemoveNotifyLoginStatusChanged(class UObject* WorldContextObject, const struct FEOSNotificationId& ID);
		void EOSAuthQueryIdToken(class UObject* WorldContextObject, const struct FEOSAuthQueryIdTokenOptions& Options, const class FScriptDelegate& Callback);
		void EOSAuthLogout(class UObject* WorldContextObject, const struct FEOSAuthLogoutOptions& Options, const class FScriptDelegate& Callback);
		void EOSAuthLogin(class UObject* WorldContextObject, const struct FEOSAuthLoginOptions& Options, const class FScriptDelegate& Callback);
		void EOSAuthLinkAccount(class UObject* WorldContextObject, const struct FEOSAuthLinkAccountOptions& Options, const class FScriptDelegate& Callback);
		EOSResult EOSAuthGetSelectedAccountId(class UObject* WorldContextObject, const struct FEOSEpicAccountId& LocalUserId, struct FEOSEpicAccountId* OutSelectedAccountId);
		int32_t EOSAuthGetMergedAccountsCount(class UObject* WorldContextObject, const struct FEOSEpicAccountId& LocalUserId);
		struct FEOSEpicAccountId EOSAuthGetMergedAccountByIndex(class UObject* WorldContextObject, const struct FEOSEpicAccountId& LocalUserId, int32_t Index);
		EOSELoginStatus EOSAuthGetLoginStatusPure(class UObject* WorldContextObject, const struct FEOSEpicAccountId& LocalUserId);
		EOSELoginStatus EOSAuthGetLoginStatus(class UObject* WorldContextObject, const struct FEOSEpicAccountId& LocalUserId);
		int32_t EOSAuthGetLoggedInAccountsCount(class UObject* WorldContextObject);
		struct FEOSEpicAccountId EOSAuthGetLoggedInAccountByIndex(class UObject* WorldContextObject, int32_t Index);
		void EOSAuthDeletePersistentAuth(class UObject* WorldContextObject, const struct FEOSAuthDeletePersistentAuthOptions& Options, const class FScriptDelegate& Callback);
		EOSResult EOSAuthCopyUserAuthToken(class UObject* WorldContextObject, const struct FEOSAuthCopyUserAuthTokenOptions& Options, const struct FEOSEpicAccountId& LocalUserId, struct FEOSAuthToken* OutUserAuthToken);
		EOSResult EOSAuthCopyIdToken(class UObject* WorldContextObject, const struct FEOSAuthCopyIdTokenOptions& Options, struct FEOSAuthIdToken* OutIdToken);
		struct FEOSNotificationId EOSAuthAddNotifyLoginStatusChanged(class UObject* WorldContextObject, const class FScriptDelegate& Callback);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.CoreChat
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UCoreChat : public UEOSCoreSubsystem
	{
	public:
		class FScriptMulticastDelegate                             OnChatMessageReceived;                                   // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U5Q3[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (PADDING)

	public:
		void SendChatMessage(class UObject* WorldContextObject, const struct FEOSProductUserId& LocalUserId, const struct FEOSProductUserId& Target, const class FString& Message, EEOSEPacketReliability Reliability);
		void ListenForChatMessages(class UObject* WorldContextObject, const struct FEOSProductUserId& LocalUserId, const class FScriptDelegate& Callback);
		class UCoreChat* GetChat();
		void ClearAllChatListeners();
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.CoreConnect
	 * Size -> 0x00A0 (FullSize[0x00D0] - InheritedSize[0x0030])
	 */
	class UCoreConnect : public UEOSCoreSubsystem
	{
	public:
		unsigned char                                              UnknownData_V3AH[0xA0];                                  // 0x0030(0x00A0) MISSED OFFSET (PADDING)

	public:
		class UCoreConnect* GetConnect(class UObject* WorldContextObject);
		void EOSConnectVerifyIdToken(class UObject* WorldContextObject, const struct FEOSConnectVerifyIdTokenOptions& Options, const class FScriptDelegate& Callback);
		void EOSConnectUnlinkAccount(class UObject* WorldContextObject, const struct FEOSConnectUnlinkAccountOptions& Options, const class FScriptDelegate& Callback);
		void EOSConnectTransferDeviceIdAccount(class UObject* WorldContextObject, const struct FEOSConnectTransferDeviceIdAccountOptions& Options, const class FScriptDelegate& Callback);
		void EOSConnectRemoveNotifyLoginStatusChanged(class UObject* WorldContextObject, const struct FEOSNotificationId& ID);
		void EOSConnectRemoveNotifyAuthExpiration(class UObject* WorldContextObject, const struct FEOSNotificationId& ID);
		void EOSConnectQueryProductUserIdMappings(class UObject* WorldContextObject, const struct FEOSConnectQueryProductUserIdMappingsOptions& Options, const class FScriptDelegate& Callback);
		void EOSConnectQueryExternalAccountMappings(class UObject* WorldContextObject, const struct FEOSConnectQueryExternalAccountMappingsOptions& Options, const class FScriptDelegate& Callback);
		void EOSConnectLogin(class UObject* WorldContextObject, const struct FEOSConnectLoginOptions& Options, const class FScriptDelegate& Callback);
		void EOSConnectLinkAccount(class UObject* WorldContextObject, const struct FEOSConnectLinkAccountOptions& Options, const class FScriptDelegate& Callback);
		EOSResult EOSConnectGetProductUserIdMapping(class UObject* WorldContextObject, const struct FEOSConnectGetProductUserIdMappingOptions& Options, class FString* OutString);
		int32_t EOSConnectGetProductUserExternalAccountCount(class UObject* WorldContextObject, const struct FEOSConnectGetProductUserExternalAccountCountOptions& Options);
		EEOSELoginStatus EOSConnectGetLoginStatusPure(class UObject* WorldContextObject, const struct FEOSProductUserId& LocalUserId);
		EEOSELoginStatus EOSConnectGetLoginStatus(class UObject* WorldContextObject, const struct FEOSProductUserId& LocalUserId);
		int32_t EOSConnectGetLoggedInUsersCount(class UObject* WorldContextObject);
		struct FEOSProductUserId EOSConnectGetLoggedInUserByIndex(class UObject* WorldContextObject, int32_t Index);
		struct FEOSProductUserId EOSConnectGetExternalAccountMapping(class UObject* WorldContextObject, const struct FEOSConnectGetExternalAccountMappingsOptions& Options);
		void EOSConnectDeleteDeviceId(class UObject* WorldContextObject, const struct FEOSConnectDeleteDeviceIdOptions& Options, const class FScriptDelegate& Callback);
		void EOSConnectCreateUser(class UObject* WorldContextObject, const struct FEOSConnectCreateUserOptions& Options, const class FScriptDelegate& Callback);
		void EOSConnectCreateDeviceId(class UObject* WorldContextObject, const struct FEOSConnectCreateDeviceIdOptions& Options, const class FScriptDelegate& Callback);
		EOSResult EOSConnectCopyProductUserInfo(class UObject* WorldContextObject, const struct FEOSConnectCopyProductUserInfoOptions& Options, struct FEOSConnectExternalAccountInfo* OutExternalAccountInfo);
		EOSResult EOSConnectCopyProductUserExternalAccountByIndex(class UObject* WorldContextObject, const struct FEOSConnectCopyProductUserExternalAccountByIndexOptions& Options, struct FEOSConnectExternalAccountInfo* OutExternalAccountInfo);
		EOSResult EOSConnectCopyProductUserExternalAccountByAccountType(class UObject* WorldContextObject, const struct FEOSConnectCopyProductUserExternalAccountByAccountTypeOptions& Options, struct FEOSConnectExternalAccountInfo* OutExternalAccountInfo);
		EOSResult EOSConnectCopyProductUserExternalAccountByAccountId(class UObject* WorldContextObject, const struct FEOSConnectCopyProductUserExternalAccountByAccountIdOptions& Options, struct FEOSConnectExternalAccountInfo* OutExternalAccountInfo);
		EOSResult EOSConnectCopyIdToken(class UObject* WorldContextObject, const struct FEOSConnectCopyIdTokenOptions& Options, struct FEOSConnectIdToken* OutIdToken);
		struct FEOSNotificationId EOSConnectAddNotifyLoginStatusChanged(class UObject* WorldContextObject, const class FScriptDelegate& Callback);
		struct FEOSNotificationId EOSConnectAddNotifyAuthExpiration(class UObject* WorldContextObject, const class FScriptDelegate& Callback);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreConnectLogin
	 * Size -> 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
	 */
	class UEOSCoreConnectLogin : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GIN6[0x40];                                  // 0x0048(0x0040) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSConnectLoginCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreConnectLogin* EOSConnectLoginAsync(class UObject* WorldContextObject, const struct FEOSConnectLoginOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreConnectCreateUser
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UEOSCoreConnectCreateUser : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L9N0[0x18];                                  // 0x0048(0x0018) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSConnectCreateUserCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreConnectCreateUser* EOSConnectCreateUserAsync(class UObject* WorldContextObject, const struct FEOSConnectCreateUserOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreConnectLinkAccount
	 * Size -> 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
	 */
	class UEOSCoreConnectLinkAccount : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8HKO[0x40];                                  // 0x0048(0x0040) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSConnectLinkAccountCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreConnectLinkAccount* EOSConnectLinkAccountAsync(class UObject* WorldContextObject, const struct FEOSConnectLinkAccountOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreConnectUnlinkAccount
	 * Size -> 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
	 */
	class UEOSCoreConnectUnlinkAccount : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O6HX[0x38];                                  // 0x0048(0x0038) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSConnectUnlinkAccountCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreConnectUnlinkAccount* EOSConnectUnlinkAccountAsync(class UObject* WorldContextObject, const struct FEOSConnectUnlinkAccountOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreConnectCreateDeviceId
	 * Size -> 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
	 */
	class UEOSCoreConnectCreateDeviceId : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BT7Y[0x20];                                  // 0x0048(0x0020) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSConnectCreateDeviceIdCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreConnectCreateDeviceId* EOSConnectCreateDeviceIdAsync(class UObject* WorldContextObject, const struct FEOSConnectCreateDeviceIdOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreConnectDeleteDeviceId
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UEOSCoreConnectDeleteDeviceId : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MX2S[0x18];                                  // 0x0048(0x0018) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSConnectDeleteDeviceIdCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreConnectDeleteDeviceId* EOSConnectDeleteDeviceIdAsync(class UObject* WorldContextObject, const struct FEOSConnectDeleteDeviceIdOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreConnectTransferDeviceIdAccount
	 * Size -> 0x0088 (FullSize[0x00C0] - InheritedSize[0x0038])
	 */
	class UEOSCoreConnectTransferDeviceIdAccount : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FCI3[0x78];                                  // 0x0048(0x0078) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSConnectTransferDeviceIdAccountCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreConnectTransferDeviceIdAccount* EOSConnectTransferDeviceIdAccountAsync(class UObject* WorldContextObject, const struct FEOSConnectTransferDeviceIdAccountOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreConnectQueryExternalAccountMappings
	 * Size -> 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
	 */
	class UEOSCoreConnectQueryExternalAccountMappings : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6QBL[0x48];                                  // 0x0048(0x0048) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSConnectQueryExternalAccountMappingsCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreConnectQueryExternalAccountMappings* EOSConnectQueryExternalAccountMappingsAsync(class UObject* WorldContextObject, const struct FEOSConnectQueryExternalAccountMappingsOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreConnectQueryProductUserIdMappings
	 * Size -> 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
	 */
	class UEOSCoreConnectQueryProductUserIdMappings : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VFOO[0x48];                                  // 0x0048(0x0048) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSConnectQueryProductUserIdMappingsCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreConnectQueryProductUserIdMappings* EOSConnectQueryProductUserIdMappingsAsync(class UObject* WorldContextObject, const struct FEOSConnectQueryProductUserIdMappingsOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEOSCoreLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool UpdateUniqueNetIdFromOSS(class APlayerController* PlayerController);
		void RemoveListenForEOSMessages(class UObject* WorldContextObject);
		struct FEOSSessionSetting MakeString(const class FString& Value);
		struct FEOSSessionSearchSetting MakeSearchString(const class FString& Value);
		struct FEOSSessionSearchSetting MakeSearchInteger(int32_t Value);
		struct FEOSSessionSearchSetting MakeSearchBool(bool Value);
		struct FEOSAntiCheatCommonLogEventParamPair MakeParamString(const class FString& String);
		struct FEOSAntiCheatCommonLogEventParamPair MakeParamInt64(int64_t Value);
		struct FEOSAntiCheatCommonLogEventParamPair MakeParamInt32(int32_t Value);
		struct FEOSSessionSetting MakeInteger(int32_t Value);
		struct FEOSSessionSetting MakeBool(bool Value);
		void Login(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& LoginId, const class FString& Password, EEOSLoginCredentialType AuthType, EEOSEExternalCredentialType CredentialsType, const class FString& AdditionalData, const class FScriptDelegate& Callback);
		void ListenForEOSMessages(class UObject* WorldContextObject, const class FScriptDelegate& Callback);
		bool IsProductUserIdIdenticalWith(const struct FEOSProductUserId& A, const struct FEOSProductUserId& B);
		bool IsEpicAccountIdIdenticalWith(const struct FEOSEpicAccountId& A, const struct FEOSEpicAccountId& B);
		class FString GetString(const struct FEOSSessionSetting& Settings, class FString* Key);
		class FString GetSessionAttributeString(const struct FEOSSessionsAttributeData& Data);
		class FString GetSessionAttributeInt64(const struct FEOSSessionsAttributeData& Data);
		class FString GetSessionAttributeDouble(const struct FEOSSessionsAttributeData& Data);
		bool GetSessionAttributeBool(const struct FEOSSessionsAttributeData& Data);
		class FString GetLobbyAttributeString(const struct FEOSLobbyAttributeData& Data);
		class FString GetLobbyAttributeInt64(const struct FEOSLobbyAttributeData& Data);
		class FString GetLobbyAttributeDouble(const struct FEOSLobbyAttributeData& Data);
		bool GetLobbyAttributeBool(const struct FEOSLobbyAttributeData& Data);
		int32_t GetInteger(const struct FEOSSessionSetting& Settings, class FString* Key);
		struct FEOSProductUserId GetCurrentProductId(class UObject* WorldContextObject, int32_t UserIndex);
		struct FEOSEpicAccountId GetCurrentAccountId(class UObject* WorldContextObject, int32_t UserIndex);
		bool GetBool(const struct FEOSSessionSetting& Settings, class FString* Key);
		struct FDateTime FromUnixTimestamp(const class FString& Timestamp);
		EOSResult EOSProductUserIdToString(const struct FEOSProductUserId& ID, class FString* String);
		bool EOSProductUserIdIsValidPure(const struct FEOSProductUserId& ID);
		bool EOSProductUserIdIsValid(const struct FEOSProductUserId& ID);
		struct FEOSProductUserId EOSProductUserIdFromString(const class FString& String);
		EOSResult EOSPlatformSetNetworkStatus(class UObject* WorldContextObject, EOSENetworkStatus NewStatus);
		EOSResult EOSPlatformSetApplicationStatus(class UObject* WorldContextObject, EOSEApplicationStatus NewStatus);
		EOSENetworkStatus EOSPlatformGetNetworkStatus(class UObject* WorldContextObject);
		EOSResult EOSPlatformGetDesktopCrossplayStatus(class UObject* WorldContextObject, const struct FEOSPlatformGetDesktopCrossplayStatusOptions& Options, struct FEOSPlatformGetDesktopCrossplayStatusInfo* OutDesktopCrossplayStatusInfo);
		EOSEApplicationStatus EOSPlatformGetApplicationStatus(class UObject* WorldContextObject);
		class FString EOSEResultToString(EOSResult Result);
		bool EOSEResultIsOperationComplete(EOSResult Result);
		EOSResult EOSEpicAccountIdToString(const struct FEOSEpicAccountId& ID, class FString* String);
		bool EOSEpicAccountIdIsValidPure(const struct FEOSEpicAccountId& ID);
		bool EOSEpicAccountIdIsValid(const struct FEOSEpicAccountId& ID);
		struct FEOSEpicAccountId EOSEpicAccountIdFromString(const class FString& String);
		EOSResult EOSContinuanceTokenToString(const struct FContinuanceToken& ID, class FString* String);
		EOSResult EOSByteArrayToString(TArray<unsigned char> Array, int32_t Length, class FString* String);
		void EOS_Success(EOSResult status, ESuccessFail* Result);
		bool EOS_Initialized(class UObject* WorldContextObject);
		TArray<unsigned char> CoreStringToByte(const class FString& String);
		class FString CoreBytesToString(TArray<unsigned char> Data);
		void BreakUIEventIdStruct(const struct FEOSUIEventId& eventId, class FString* outEventId);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.CoreCustomInvites
	 * Size -> 0x00F0 (FullSize[0x0120] - InheritedSize[0x0030])
	 */
	class UCoreCustomInvites : public UEOSCoreSubsystem
	{
	public:
		unsigned char                                              UnknownData_8YQI[0xF0];                                  // 0x0030(0x00F0) MISSED OFFSET (PADDING)

	public:
		class UCoreCustomInvites* GetCustomInvites(class UObject* WorldContextObject);
		EOSResult EOSCustomInvitesSetCustomInvite(class UObject* WorldContextObject, const struct FEOSCustomInvitesSetCustomInviteOptions& Options);
		void EOSCustomInvitesSendCustomInvite(class UObject* WorldContextObject, const struct FEOSCustomInvitesSendCustomInviteOptions& Options, const class FScriptDelegate& Callback);
		void EOSCustomInvitesRemoveNotifyCustomInviteRejected(class UObject* WorldContextObject, const struct FEOSNotificationId& ID);
		void EOSCustomInvitesRemoveNotifyCustomInviteReceived(class UObject* WorldContextObject, const struct FEOSNotificationId& ID);
		void EOSCustomInvitesRemoveNotifyCustomInviteAccepted(class UObject* WorldContextObject, const struct FEOSNotificationId& ID);
		EOSResult EOSCustomInvitesFinalizeInvite(class UObject* WorldContextObject, const struct FEOSCustomInvitesFinalizeInviteOptions& Options);
		struct FEOSNotificationId EOSCustomInvitesAddNotifyCustomInviteRejected(class UObject* WorldContextObject, const struct FEOSCustomInvitesAddNotifyCustomInviteRejectedOptions& Options, const class FScriptDelegate& Callback);
		struct FEOSNotificationId EOSCustomInvitesAddNotifyCustomInviteReceived(class UObject* WorldContextObject, const struct FEOSCustomInvitesAddNotifyCustomInviteReceivedOptions& Options, const class FScriptDelegate& Callback);
		struct FEOSNotificationId EOSCustomInvitesAddNotifyCustomInviteAccepted(class UObject* WorldContextObject, const class FScriptDelegate& Callback);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.CoreEcom
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UCoreEcom : public UEOSCoreSubsystem
	{
	public:
		class UCoreEcom* GetEcom(class UObject* WorldContextObject);
		EOSResult EOSEcomTransaction_GetTransactionId(class UObject* WorldContextObject, const struct FEOSEcomHTransaction& Handle, class FString* OutTransactionId);
		int32_t EOSEcomTransaction_GetEntitlementsCount(class UObject* WorldContextObject, const struct FEOSEcomHTransaction& Handle, const struct FEOSEcomTransactionGetEntitlementsCountOptions& Options);
		EOSResult EOSEcomTransaction_CopyEntitlementByIndex(class UObject* WorldContextObject, const struct FEOSEcomHTransaction& Handle, const struct FEOSEcomTransactionCopyEntitlementByIndexOptions& Options, struct FEOSEcomEntitlement* OutEntitlement);
		void EOSEcomRedeemEntitlements(class UObject* WorldContextObject, const struct FEOSEcomRedeemEntitlementsOptions& Options, const class FScriptDelegate& Callback);
		void EOSEcomQueryOwnershipToken(class UObject* WorldContextObject, const struct FEOSEcomQueryOwnershipTokenOptions& Options, const class FScriptDelegate& Callback);
		void EOSEcomQueryOwnership(class UObject* WorldContextObject, const struct FEOSEcomQueryOwnershipOptions& Options, const class FScriptDelegate& Callback);
		void EOSEcomQueryOffers(class UObject* WorldContextObject, const struct FEOSEcomQueryOffersOptions& Options, const class FScriptDelegate& Callback);
		void EOSEcomQueryEntitlements(class UObject* WorldContextObject, const struct FEOSEcomQueryEntitlementsOptions& Options, const class FScriptDelegate& Callback);
		int32_t EOSEcomGetTransactionCount(class UObject* WorldContextObject, const struct FEOSEcomGetTransactionCountOptions& Options);
		int32_t EOSEcomGetOfferItemCount(class UObject* WorldContextObject, const struct FEOSEcomGetOfferItemCountOptions& Options);
		int32_t EOSEcomGetOfferImageInfoCount(class UObject* WorldContextObject, const struct FEOSEcomGetOfferImageInfoCountOptions& Options);
		int32_t EOSEcomGetOfferCount(class UObject* WorldContextObject, const struct FEOSEcomGetOfferCountOptions& Options);
		int32_t EOSEcomGetItemReleaseCount(class UObject* WorldContextObject, const struct FEOSEcomGetItemReleaseCountOptions& Options);
		int32_t EOSEcomGetItemImageInfoCount(class UObject* WorldContextObject, const struct FEOSEcomGetItemImageInfoCountOptions& Options);
		int32_t EOSEcomGetEntitlementsCount(class UObject* WorldContextObject, const struct FEOSEcomGetEntitlementsCountOptions& Options);
		int32_t EOSEcomGetEntitlementsByNameCount(class UObject* WorldContextObject, const struct FEOSEcomGetEntitlementsByNameCountOptions& Options);
		EOSResult EOSEcomCopyTransactionByIndex(class UObject* WorldContextObject, const struct FEOSEcomCopyTransactionByIndexOptions& Options, struct FEOSEcomHTransaction* OutTransaction);
		EOSResult EOSEcomCopyTransactionById(class UObject* WorldContextObject, const struct FEOSEcomCopyTransactionByIdOptions& Options, struct FEOSEcomHTransaction* OutTransaction);
		EOSResult EOSEcomCopyOfferItemByIndex(class UObject* WorldContextObject, const struct FEOSEcomCopyOfferItemByIndexOptions& Options, struct FEOSEcomCatalogItem* OutItem);
		EOSResult EOSEcomCopyOfferImageInfoByIndex(class UObject* WorldContextObject, const struct FEOSEcomCopyOfferImageInfoByIndexOptions& Options, struct FEOSEcomKeyImageInfo* OutImageInfo);
		EOSResult EOSEcomCopyOfferByIndex(class UObject* WorldContextObject, const struct FEOSEcomCopyOfferByIndexOptions& Options, struct FEOSEcomCatalogOffer* OutOffer);
		EOSResult EOSEcomCopyOfferById(class UObject* WorldContextObject, const struct FEOSEcomCopyOfferByIdOptions& Options, struct FEOSEcomCatalogOffer* OutOffer);
		EOSResult EOSEcomCopyItemReleaseByIndex(class UObject* WorldContextObject, const struct FEOSEcomCopyItemReleaseByIndexOptions& Options, struct FEOSEcomCatalogRelease* OutRelease);
		EOSResult EOSEcomCopyItemImageInfoByIndex(class UObject* WorldContextObject, const struct FEOSEcomCopyItemImageInfoByIndexOptions& Options, struct FEOSEcomKeyImageInfo* OutImageInfo);
		EOSResult EOSEcomCopyItemById(class UObject* WorldContextObject, const struct FEOSEcomCopyItemByIdOptions& Options, struct FEOSEcomCatalogItem* OutItem);
		EOSResult EOSEcomCopyEntitlementByNameAndIndex(class UObject* WorldContextObject, const struct FEOSEcomCopyEntitlementByNameAndIndexOptions& Options, struct FEOSEcomEntitlement* OutEntitlement);
		EOSResult EOSEcomCopyEntitlementByIndex(class UObject* WorldContextObject, const struct FEOSEcomCopyEntitlementByIndexOptions& Options, struct FEOSEcomEntitlement* OutEntitlement);
		EOSResult EOSEcomCopyEntitlementById(class UObject* WorldContextObject, const struct FEOSEcomCopyEntitlementByIdOptions& Options, struct FEOSEcomEntitlement* OutEntitlement);
		void EOSEcomCheckout(class UObject* WorldContextObject, const struct FEOSEcomCheckoutOptions& Options, const class FScriptDelegate& Callback);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreEcomQueryOwnership
	 * Size -> 0x0068 (FullSize[0x00A0] - InheritedSize[0x0038])
	 */
	class UEOSCoreEcomQueryOwnership : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6MZ8[0x58];                                  // 0x0048(0x0058) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSEcomQueryOwnershipCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreEcomQueryOwnership* EOSEcomQueryOwnershipAsync(class UObject* WorldContextObject, const struct FEOSEcomQueryOwnershipOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreEcomQueryOwnershipToken
	 * Size -> 0x0070 (FullSize[0x00A8] - InheritedSize[0x0038])
	 */
	class UEOSCoreEcomQueryOwnershipToken : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8BR2[0x60];                                  // 0x0048(0x0060) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSEcomQueryOwnershipTokenCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreEcomQueryOwnershipToken* EOSEcomQueryOwnershipTokenAsync(class UObject* WorldContextObject, const struct FEOSEcomQueryOwnershipTokenOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreEcomQueryEntitlements
	 * Size -> 0x0060 (FullSize[0x0098] - InheritedSize[0x0038])
	 */
	class UEOSCoreEcomQueryEntitlements : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B8OI[0x50];                                  // 0x0048(0x0050) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSEcomQueryEntitlementsCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreEcomQueryEntitlements* EOSEcomQueryEntitlementsAsync(class UObject* WorldContextObject, const struct FEOSEcomQueryEntitlementsOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreEcomQueryOffers
	 * Size -> 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
	 */
	class UEOSCoreEcomQueryOffers : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LZTO[0x48];                                  // 0x0048(0x0048) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSEcomQueryOffersCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreEcomQueryOffers* EOSEcomQueryOffersAsync(class UObject* WorldContextObject, const struct FEOSEcomQueryOffersOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreEcomCheckout
	 * Size -> 0x0068 (FullSize[0x00A0] - InheritedSize[0x0038])
	 */
	class UEOSCoreEcomCheckout : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7H1Q[0x58];                                  // 0x0048(0x0058) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSEcomCheckoutCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreEcomCheckout* EOSEcomCheckoutAsync(class UObject* WorldContextObject, const struct FEOSEcomCheckoutOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreEcomRedeemEntitlements
	 * Size -> 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
	 */
	class UEOSCoreEcomRedeemEntitlements : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RSNN[0x48];                                  // 0x0048(0x0048) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSEcomRedeemEntitlementsCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreEcomRedeemEntitlements* EOSEcomRedeemEntitlementsAsync(class UObject* WorldContextObject, const struct FEOSEcomRedeemEntitlementsOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.CoreFriends
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UCoreFriends : public UEOSCoreSubsystem
	{
	public:
		unsigned char                                              UnknownData_X6T9[0x50];                                  // 0x0030(0x0050) MISSED OFFSET (PADDING)

	public:
		class UCoreFriends* GetFriends(class UObject* WorldContextObject);
		void EOSFriendsSendInvite(class UObject* WorldContextObject, const struct FEOSFriendsSendInviteOptions& Options, const class FScriptDelegate& Callback);
		void EOSFriendsRemoveNotifyFriendsUpdate(class UObject* WorldContextObject, const struct FEOSNotificationId& ID);
		void EOSFriendsRejectInvite(class UObject* WorldContextObject, const struct FEOSFriendsRejectInviteOptions& Options, const class FScriptDelegate& Callback);
		void EOSFriendsQueryFriends(class UObject* WorldContextObject, const struct FEOSFriendsQueryFriendsOptions& Options, const class FScriptDelegate& Callback);
		EEOSEFriendsStatus EOSFriendsGetStatus(class UObject* WorldContextObject, const struct FEOSFriendsGetStatusOptions& Options);
		int32_t EOSFriendsGetFriendsCount(class UObject* WorldContextObject, const struct FEOSFriendsGetFriendsCountOptions& Options);
		struct FEOSEpicAccountId EOSFriendsGetFriendAtIndex(class UObject* WorldContextObject, const struct FEOSFriendsGetFriendAtIndexOptions& Options);
		struct FEOSNotificationId EOSFriendsAddNotifyFriendsUpdate(class UObject* WorldContextObject, const class FScriptDelegate& Callback);
		void EOSFriendsAcceptInvite(class UObject* WorldContextObject, const struct FEOSFriendsAcceptInviteOptions& Options, const class FScriptDelegate& Callback);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreFriendsQueryFriends
	 * Size -> 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
	 */
	class UEOSCoreFriendsQueryFriends : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CKM0[0x38];                                  // 0x0048(0x0038) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSFriendsQueryFriendsCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreFriendsQueryFriends* EOSFriendsQueryFriendsAsync(class UObject* WorldContextObject, const struct FEOSFriendsQueryFriendsOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreFriendsSendInvite
	 * Size -> 0x0068 (FullSize[0x00A0] - InheritedSize[0x0038])
	 */
	class UEOSCoreFriendsSendInvite : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1GVD[0x58];                                  // 0x0048(0x0058) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSFriendsSendInviteCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreFriendsSendInvite* EOSFriendsSendInviteAsync(class UObject* WorldContextObject, const struct FEOSFriendsSendInviteOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreFriendsAcceptInvite
	 * Size -> 0x0068 (FullSize[0x00A0] - InheritedSize[0x0038])
	 */
	class UEOSCoreFriendsAcceptInvite : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7Q4P[0x58];                                  // 0x0048(0x0058) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSFriendsAcceptInviteCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreFriendsAcceptInvite* EOSFriendsAcceptInviteAsync(class UObject* WorldContextObject, const struct FEOSFriendsAcceptInviteOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreFriendsRejectInvite
	 * Size -> 0x0068 (FullSize[0x00A0] - InheritedSize[0x0038])
	 */
	class UEOSCoreFriendsRejectInvite : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CBUI[0x58];                                  // 0x0048(0x0058) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSFriendsRejectInviteCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreFriendsRejectInvite* EOSFriendsRejectInviteAsync(class UObject* WorldContextObject, const struct FEOSFriendsRejectInviteOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.CoreLeaderboards
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UCoreLeaderboards : public UEOSCoreSubsystem
	{
	public:
		class UCoreLeaderboards* GetLeaderboards(class UObject* WorldContextObject);
		void EOSLeaderboardsQueryLeaderboardUserScores(class UObject* WorldContextObject, const struct FEOSLeaderboardsQueryLeaderboardUserScoresOptions& Options, const class FScriptDelegate& Callback);
		void EOSLeaderboardsQueryLeaderboardRanks(class UObject* WorldContextObject, const struct FEOSLeaderboardsQueryLeaderboardRanksOptions& Options, const class FScriptDelegate& Callback);
		void EOSLeaderboardsQueryLeaderboardDefinitions(class UObject* WorldContextObject, const struct FEOSLeaderboardsQueryLeaderboardDefinitionsOptions& Options, const class FScriptDelegate& Callback);
		int32_t EOSLeaderboardsGetLeaderboardUserScoreCount(class UObject* WorldContextObject, const struct FEOSLeaderboardsGetLeaderboardUserScoreCountOptions& Options);
		int32_t EOSLeaderboardsGetLeaderboardRecordCount(class UObject* WorldContextObject, const struct FEOSLeaderboardsGetLeaderboardRecordCountOptions& Options);
		int32_t EOSLeaderboardsGetLeaderboardDefinitionCount(class UObject* WorldContextObject, const struct FEOSLeaderboardsGetLeaderboardDefinitionCountOptions& Options);
		EOSResult EOSLeaderboardsCopyLeaderboardUserScoreByUserId(class UObject* WorldContextObject, const struct FEOSLeaderboardsCopyLeaderboardUserScoreByUserIdOptions& Options, struct FEOSLeaderboardsLeaderboardUserScore* OutLeaderboardUserScore);
		EOSResult EOSLeaderboardsCopyLeaderboardUserScoreByIndex(class UObject* WorldContextObject, const struct FEOSLeaderboardsCopyLeaderboardUserScoreByIndexOptions& Options, struct FEOSLeaderboardsLeaderboardUserScore* OutLeaderboardUserScore);
		EOSResult EOSLeaderboardsCopyLeaderboardRecordByUserId(class UObject* WorldContextObject, const struct FEOSLeaderboardsCopyLeaderboardRecordByUserIdOptions& Options, struct FEOSLeaderboardsLeaderboardRecord* OutLeaderboardRecord);
		EOSResult EOSLeaderboardsCopyLeaderboardRecordByIndex(class UObject* WorldContextObject, const struct FEOSLeaderboardsCopyLeaderboardRecordByIndexOptions& Options, struct FEOSLeaderboardsLeaderboardRecord* OutLeaderboardRecord);
		EOSResult EOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardId(class UObject* WorldContextObject, const struct FEOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardIdOptions& Options, struct FEOSLeaderboardsDefinition* OutLeaderboardDefinition);
		EOSResult EOSLeaderboardsCopyLeaderboardDefinitionByIndex(class UObject* WorldContextObject, const struct FEOSLeaderboardsCopyLeaderboardDefinitionByIndexOptions& Options, struct FEOSLeaderboardsDefinition* OutLeaderboardDefinition);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreLeaderboardsQueryLeaderboardDefinitions
	 * Size -> 0x0070 (FullSize[0x00A8] - InheritedSize[0x0038])
	 */
	class UEOSCoreLeaderboardsQueryLeaderboardDefinitions : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UWSH[0x60];                                  // 0x0048(0x0060) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSLeaderboardsOnQueryLeaderboardDefinitionsCompleteCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreLeaderboardsQueryLeaderboardDefinitions* EOSLeaderboardsQueryLeaderboardDefinitionsAsync(class UObject* WorldContextObject, const struct FEOSLeaderboardsQueryLeaderboardDefinitionsOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreLeaderboardsQueryLeaderboardRanks
	 * Size -> 0x0060 (FullSize[0x0098] - InheritedSize[0x0038])
	 */
	class UEOSCoreLeaderboardsQueryLeaderboardRanks : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EQQ5[0x50];                                  // 0x0048(0x0050) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSLeaderboardsOnQueryLeaderboardRanksCompleteCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreLeaderboardsQueryLeaderboardRanks* EOSLeaderboardsQueryLeaderboardRanksAsync(class UObject* WorldContextObject, const struct FEOSLeaderboardsQueryLeaderboardRanksOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreLeaderboardsQueryLeaderboardUserScores
	 * Size -> 0x0090 (FullSize[0x00C8] - InheritedSize[0x0038])
	 */
	class UEOSCoreLeaderboardsQueryLeaderboardUserScores : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WZ1Z[0x80];                                  // 0x0048(0x0080) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSLeaderboardsOnQueryLeaderboardUserScoresCompleteCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreLeaderboardsQueryLeaderboardUserScores* EOSLeaderboardsQueryLeaderboardUserScoresAsync(class UObject* WorldContextObject, const struct FEOSLeaderboardsQueryLeaderboardUserScoresOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.CoreLobby
	 * Size -> 0x02D0 (FullSize[0x0300] - InheritedSize[0x0030])
	 */
	class UCoreLobby : public UEOSCoreSubsystem
	{
	public:
		unsigned char                                              UnknownData_6RG7[0x2D0];                                 // 0x0030(0x02D0) MISSED OFFSET (PADDING)

	public:
		class UCoreLobby* GetLobby(class UObject* WorldContextObject);
		EOSResult EOSLobbyUpdateLobbyModification(class UObject* WorldContextObject, const struct FEOSLobbyUpdateLobbyModificationOptions& Options, struct FEOSHLobbyModification* OutLobbyModificationHandle);
		void EOSLobbyUpdateLobby(class UObject* WorldContextObject, const struct FEOSLobbyUpdateLobbyOptions& Options, const class FScriptDelegate& Callback);
		void EOSLobbySendInvite(class UObject* WorldContextObject, const struct FEOSLobbySendInviteOptions& Options, const class FScriptDelegate& Callback);
		EOSResult EOSLobbySearchSetTargetUserId(class UObject* WorldContextObject, const struct FEOSHLobbySearch& Handle, const struct FEOSLobbySearchSetTargetUserIdOptions& Options);
		EOSResult EOSLobbySearchSetParameterString(class UObject* WorldContextObject, const struct FEOSHLobbySearch& Handle, const class FString& Key, const class FString& Value, EEOSEComparisonOp ComparisonOp);
		EOSResult EOSLobbySearchSetParameterInt64(class UObject* WorldContextObject, const struct FEOSHLobbySearch& Handle, const class FString& Key, const class FString& Value, EEOSEComparisonOp ComparisonOp);
		EOSResult EOSLobbySearchSetParameterDouble(class UObject* WorldContextObject, const struct FEOSHLobbySearch& Handle, const class FString& Key, const class FString& Value, EEOSEComparisonOp ComparisonOp);
		EOSResult EOSLobbySearchSetParameterBool(class UObject* WorldContextObject, const struct FEOSHLobbySearch& Handle, const class FString& Key, bool bValue, EEOSEComparisonOp ComparisonOp);
		EOSResult EOSLobbySearchSetMaxResults(class UObject* WorldContextObject, const struct FEOSHLobbySearch& Handle, const struct FEOSLobbySearchSetMaxResultsOptions& Options);
		EOSResult EOSLobbySearchSetLobbyId(class UObject* WorldContextObject, const struct FEOSHLobbySearch& Handle, const struct FEOSLobbySearchSetLobbyIdOptions& Options);
		EOSResult EOSLobbySearchRemoveParameter(class UObject* WorldContextObject, const struct FEOSHLobbySearch& Handle, const struct FEOSLobbySearchRemoveParameterOptions& Options);
		void EOSLobbySearchRelease(const struct FEOSHLobbySearch& LobbySearchHandle);
		int32_t EOSLobbySearchGetSearchResultCount(class UObject* WorldContextObject, const struct FEOSHLobbySearch& Handle, const struct FEOSLobbySearchGetSearchResultCountOptions& Options);
		void EOSLobbySearchFind(class UObject* WorldContextObject, const struct FEOSHLobbySearch& Handle, const struct FEOSLobbySearchFindOptions& Options, const class FScriptDelegate& Callback);
		EOSResult EOSLobbySearchCopySearchResultByIndex(class UObject* WorldContextObject, const struct FEOSHLobbySearch& Handle, const struct FEOSLobbySearchCopySearchResultByIndexOptions& Options, struct FEOSHLobbyDetails* OutLobbyDetailsHandle);
		void EOSLobbyRemoveNotifySendLobbyNativeInviteRequested(class UObject* WorldContextObject, const struct FEOSNotificationId& ID);
		void EOSLobbyRemoveNotifyRTCRoomConnectionChanged(class UObject* WorldContextObject, const struct FEOSNotificationId& ID);
		void EOSLobbyRemoveNotifyLobbyUpdateReceived(class UObject* WorldContextObject, const struct FEOSNotificationId& ID);
		void EOSLobbyRemoveNotifyLobbyMemberUpdateReceived(class UObject* WorldContextObject, const struct FEOSNotificationId& ID);
		void EOSLobbyRemoveNotifyLobbyMemberStatusReceived(class UObject* WorldContextObject, const struct FEOSNotificationId& ID);
		void EOSLobbyRemoveNotifyLobbyInviteRejected(class UObject* WorldContextObject, const struct FEOSNotificationId& ID);
		void EOSLobbyRemoveNotifyLobbyInviteReceived(class UObject* WorldContextObject, const struct FEOSNotificationId& ID);
		void EOSLobbyRemoveNotifyLobbyInviteAccepted(class UObject* WorldContextObject, const struct FEOSNotificationId& ID);
		void EOSLobbyRemoveNotifyJoinLobbyAccepted(class UObject* WorldContextObject, const struct FEOSNotificationId& ID);
		void EOSLobbyRejectInvite(class UObject* WorldContextObject, const struct FEOSLobbyRejectInviteOptions& Options, const class FScriptDelegate& Callback);
		void EOSLobbyQueryInvites(class UObject* WorldContextObject, const struct FEOSLobbyQueryInvitesOptions& Options, const class FScriptDelegate& Callback);
		void EOSLobbyPromoteMember(class UObject* WorldContextObject, const struct FEOSLobbyPromoteMemberOptions& Options, const class FScriptDelegate& Callback);
		EOSResult EOSLobbyModificationSetPermissionLevel(class UObject* WorldContextObject, const struct FEOSHLobbyModification& Handle, const struct FEOSLobbyModificationSetPermissionLevelOptions& Options);
		EOSResult EOSLobbyModificationSetMaxMembers(class UObject* WorldContextObject, const struct FEOSHLobbyModification& Handle, const struct FEOSLobbyModificationSetMaxMembersOptions& Options);
		EOSResult EOSLobbyModificationSetInvitesAllowed(class UObject* WorldContextObject, const struct FEOSHLobbyModification& Handle, const struct FEOSLobbyModificationSetInvitesAllowedOptions& Options);
		EOSResult EOSLobbyModificationSetBucketId(class UObject* WorldContextObject, const struct FEOSHLobbyModification& Handle, const struct FEOSLobbyModificationSetBucketIdOptions& Options);
		EOSResult EOSLobbyModificationRemoveMemberAttribute(class UObject* WorldContextObject, const struct FEOSHLobbyModification& Handle, const struct FEOSLobbyModificationRemoveMemberAttributeOptions& Options);
		EOSResult EOSLobbyModificationRemoveAttribute(class UObject* WorldContextObject, const struct FEOSHLobbyModification& Handle, const struct FEOSLobbyModificationRemoveAttributeOptions& Options);
		void EOSLobbyModificationRelease(const struct FEOSHLobbyModification& LobbyModificationHandle);
		EOSResult EOSLobbyModificationAddMemberAttributeString(class UObject* WorldContextObject, const struct FEOSHLobbyModification& Handle, const class FString& Key, const class FString& Value, EEOSELobbyAttributeVisibility Visibility);
		EOSResult EOSLobbyModificationAddMemberAttributeInt64(class UObject* WorldContextObject, const struct FEOSHLobbyModification& Handle, const class FString& Key, const class FString& Value, EEOSELobbyAttributeVisibility Visibility);
		EOSResult EOSLobbyModificationAddMemberAttributeDouble(class UObject* WorldContextObject, const struct FEOSHLobbyModification& Handle, const class FString& Key, const class FString& Value, EEOSELobbyAttributeVisibility Visibility);
		EOSResult EOSLobbyModificationAddMemberAttributeBool(class UObject* WorldContextObject, const struct FEOSHLobbyModification& Handle, const class FString& Key, bool bValue, EEOSELobbyAttributeVisibility Visibility);
		EOSResult EOSLobbyModificationAddAttributeString(class UObject* WorldContextObject, const struct FEOSHLobbyModification& Handle, const class FString& Key, const class FString& Value, EEOSELobbyAttributeVisibility Visibility);
		EOSResult EOSLobbyModificationAddAttributeInt64(class UObject* WorldContextObject, const struct FEOSHLobbyModification& Handle, const class FString& Key, const class FString& Value, EEOSELobbyAttributeVisibility Visibility);
		EOSResult EOSLobbyModificationAddAttributeDouble(class UObject* WorldContextObject, const struct FEOSHLobbyModification& Handle, const class FString& Key, const class FString& Value, EEOSELobbyAttributeVisibility Visibility);
		EOSResult EOSLobbyModificationAddAttributeBool(class UObject* WorldContextObject, const struct FEOSHLobbyModification& Handle, const class FString& Key, bool bValue, EEOSELobbyAttributeVisibility Visibility);
		EOSResult EOSLobbyModificationAddAttribute(class UObject* WorldContextObject, const struct FEOSHLobbyModification& Handle, const struct FEOSLobbyModificationAddAttributeOptions& Options);
		void EOSLobbyLeaveLobby(class UObject* WorldContextObject, const struct FEOSLobbyLeaveLobbyOptions& Options, const class FScriptDelegate& Callback);
		void EOSLobbyKickMember(class UObject* WorldContextObject, const struct FEOSLobbyKickMemberOptions& Options, const class FScriptDelegate& Callback);
		void EOSLobbyJoinLobbyById(class UObject* WorldContextObject, const struct FEOSLobbyJoinLobbyByIdOptions& Options, const class FScriptDelegate& Callback);
		void EOSLobbyJoinLobby(class UObject* WorldContextObject, const struct FEOSLobbyJoinLobbyOptions& Options, const class FScriptDelegate& Callback);
		EOSResult EOSLobbyIsRTCRoomConnected(class UObject* WorldContextObject, const struct FEOSLobbyIsRTCRoomConnectedOptions& Options, bool* bOutIsConnected);
		void EOSLobbyHardMuteMember(class UObject* WorldContextObject, const struct FEOSLobbyHardMuteMemberOptions& Options, const class FScriptDelegate& Callback);
		EOSResult EOSLobbyGetRTCRoomName(class UObject* WorldContextObject, const struct FEOSLobbyGetRTCRoomNameOptions& Options, class FString* OutBuffer, int32_t InOutBufferLength);
		EOSResult EOSLobbyGetInviteIdByIndex(class UObject* WorldContextObject, const struct FEOSLobbyGetInviteIdByIndexOptions& Options, class FString* OutInviteId);
		int32_t EOSLobbyGetInviteCount(class UObject* WorldContextObject, const struct FEOSLobbyGetInviteCountOptions& Options);
		void EOSLobbyDetailsRelease(const struct FEOSHLobbyDetails& LobbyHandle);
		int32_t EOSLobbyDetailsGetMemberCount(class UObject* WorldContextObject, const struct FEOSHLobbyDetails& Handle, const struct FEOSLobbyDetailsGetMemberCountOptions& Options);
		struct FEOSProductUserId EOSLobbyDetailsGetMemberByIndex(class UObject* WorldContextObject, const struct FEOSHLobbyDetails& Handle, const struct FEOSLobbyDetailsGetMemberByIndexOptions& Options);
		int32_t EOSLobbyDetailsGetMemberAttributeCount(class UObject* WorldContextObject, const struct FEOSHLobbyDetails& Handle, const struct FEOSLobbyDetailsGetMemberAttributeCountOptions& Options);
		struct FEOSProductUserId EOSLobbyDetailsGetLobbyOwner(class UObject* WorldContextObject, const struct FEOSHLobbyDetails& Handle, const struct FEOSLobbyDetailsGetLobbyOwnerOptions& Options);
		int32_t EOSLobbyDetailsGetAttributeCount(class UObject* WorldContextObject, const struct FEOSHLobbyDetails& Handle, const struct FEOSLobbyDetailsGetAttributeCountOptions& Options);
		EOSResult EOSLobbyDetailsCopyMemberAttributeByKey(class UObject* WorldContextObject, const struct FEOSHLobbyDetails& Handle, const struct FEOSLobbyDetailsCopyMemberAttributeByKeyOptions& Options, struct FEOSLobbyAttribute* OutAttribute);
		EOSResult EOSLobbyDetailsCopyMemberAttributeByIndex(class UObject* WorldContextObject, const struct FEOSHLobbyDetails& Handle, const struct FEOSLobbyDetailsCopyMemberAttributeByIndexOptions& Options, struct FEOSLobbyAttribute* OutAttribute);
		EOSResult EOSLobbyDetailsCopyInfo(class UObject* WorldContextObject, const struct FEOSHLobbyDetails& Handle, const struct FEOSLobbyDetailsCopyInfoOptions& Options, struct FEOSLobbyDetailsInfo* OutLobbyDetailsInfo);
		EOSResult EOSLobbyDetailsCopyAttributeByKey(class UObject* WorldContextObject, const struct FEOSHLobbyDetails& Handle, const struct FEOSLobbyDetailsCopyAttributeByKeyOptions& Options, struct FEOSLobbyAttribute* OutAttribute);
		EOSResult EOSLobbyDetailsCopyAttributeByIndex(class UObject* WorldContextObject, const struct FEOSHLobbyDetails& Handle, const struct FEOSLobbyDetailsCopyAttributeByIndexOptions& Options, struct FEOSLobbyAttribute* OutAttribute);
		void EOSLobbyDestroyLobby(class UObject* WorldContextObject, const struct FEOSLobbyDestroyLobbyOptions& Options, const class FScriptDelegate& Callback);
		EOSResult EOSLobbyCreateLobbySearch(class UObject* WorldContextObject, const struct FEOSLobbyCreateLobbySearchOptions& Options, struct FEOSHLobbySearch* outLobbySearchHandle);
		void EOSLobbyCreateLobby(class UObject* WorldContextObject, const struct FEOSLobbyCreateLobbyOptions& Options, const class FScriptDelegate& Callback);
		EOSResult EOSLobbyCopyLobbyDetailsHandleByUiEventId(class UObject* WorldContextObject, const struct FEOSLobbyCopyLobbyDetailsHandleByUiEventIdOptions& Options, struct FEOSHLobbyDetails* OutLobbyDetailsHandle);
		EOSResult EOSLobbyCopyLobbyDetailsHandleByInviteId(class UObject* WorldContextObject, const struct FEOSLobbyCopyLobbyDetailsHandleByInviteIdOptions& Options, struct FEOSHLobbyDetails* OutLobbyDetailsHandle);
		EOSResult EOSLobbyCopyLobbyDetailsHandle(class UObject* WorldContextObject, const struct FEOSLobbyCopyLobbyDetailsHandleOptions& Options, struct FEOSHLobbyDetails* OutLobbyDetailsHandle);
		struct FEOSNotificationId EOSLobbyAddNotifySendLobbyNativeInviteRequested(class UObject* WorldContextObject, const struct FEOSLobbyAddNotifySendLobbyNativeInviteRequestedOptions& Options, const class FScriptDelegate& Callback);
		struct FEOSNotificationId EOSLobbyAddNotifyRTCRoomConnectionChanged(class UObject* WorldContextObject, const struct FEOSLobbyAddNotifyRTCRoomConnectionChangedOptions& Options, const class FScriptDelegate& Callback);
		struct FEOSNotificationId EOSLobbyAddNotifyLobbyUpdateReceived(class UObject* WorldContextObject, const class FScriptDelegate& Callback);
		struct FEOSNotificationId EOSLobbyAddNotifyLobbyMemberUpdateReceived(class UObject* WorldContextObject, const class FScriptDelegate& Callback);
		struct FEOSNotificationId EOSLobbyAddNotifyLobbyMemberStatusReceived(class UObject* WorldContextObject, const class FScriptDelegate& Callback);
		struct FEOSNotificationId EOSLobbyAddNotifyLobbyInviteRejected(class UObject* WorldContextObject, const struct FEOSLobbyAddNotifyLobbyInviteRejectedOptions& Options, const class FScriptDelegate& Callback);
		struct FEOSNotificationId EOSLobbyAddNotifyLobbyInviteReceived(class UObject* WorldContextObject, const class FScriptDelegate& Callback);
		struct FEOSNotificationId EOSLobbyAddNotifyLobbyInviteAccepted(class UObject* WorldContextObject, const struct FEOSLobbyAddNotifyLobbyInviteAcceptedOptions& Options, const class FScriptDelegate& Callback);
		struct FEOSNotificationId EOSLobbyAddNotifyJoinLobbyAccepted(class UObject* WorldContextObject, const struct FEOSLobbyAddNotifyJoinLobbyAcceptedOptions& Options, const class FScriptDelegate& Callback);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreLobbyCreateLobby
	 * Size -> 0x0088 (FullSize[0x00C0] - InheritedSize[0x0038])
	 */
	class UEOSCoreLobbyCreateLobby : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IWAY[0x78];                                  // 0x0048(0x0078) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSLobbyCreateLobbyCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreLobbyCreateLobby* EOSLobbyCreateLobbyAsync(class UObject* WorldContextObject, const struct FEOSLobbyCreateLobbyOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreLobbyDestroyLobby
	 * Size -> 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
	 */
	class UEOSCoreLobbyDestroyLobby : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QAX9[0x48];                                  // 0x0048(0x0048) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSLobbyDestroyLobbyCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreLobbyDestroyLobby* EOSLobbyDestroyLobbyAsync(class UObject* WorldContextObject, const struct FEOSLobbyDestroyLobbyOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreLobbyJoinLobby
	 * Size -> 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
	 */
	class UEOSCoreLobbyJoinLobby : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GMAO[0x48];                                  // 0x0048(0x0048) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSLobbyJoinLobbyCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreLobbyJoinLobby* EOSLobbyJoinLobbyAsync(class UObject* WorldContextObject, const struct FEOSLobbyJoinLobbyOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreLobbyLeaveLobby
	 * Size -> 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
	 */
	class UEOSCoreLobbyLeaveLobby : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7ECD[0x48];                                  // 0x0048(0x0048) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSLobbyLeaveLobbyCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreLobbyLeaveLobby* EOSLobbyLeaveLobbyAsync(class UObject* WorldContextObject, const struct FEOSLobbyLeaveLobbyOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreLobbyUpdateLobby
	 * Size -> 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
	 */
	class UEOSCoreLobbyUpdateLobby : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4TV9[0x20];                                  // 0x0048(0x0020) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSLobbyUpdateLobbyCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreLobbyUpdateLobby* EOSLobbyUpdateLobbyAsync(class UObject* WorldContextObject, const struct FEOSLobbyUpdateLobbyOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreLobbyPromoteMember
	 * Size -> 0x0078 (FullSize[0x00B0] - InheritedSize[0x0038])
	 */
	class UEOSCoreLobbyPromoteMember : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DMRS[0x68];                                  // 0x0048(0x0068) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSLobbyPromoteMemberCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreLobbyPromoteMember* EOSLobbyPromoteMemberAsync(class UObject* WorldContextObject, const struct FEOSLobbyPromoteMemberOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreLobbyKickMember
	 * Size -> 0x0078 (FullSize[0x00B0] - InheritedSize[0x0038])
	 */
	class UEOSCoreLobbyKickMember : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5V24[0x68];                                  // 0x0048(0x0068) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSLobbyKickMemberCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreLobbyKickMember* EOSLobbyKickMemberAsync(class UObject* WorldContextObject, const struct FEOSLobbyKickMemberOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreLobbySendInvite
	 * Size -> 0x0078 (FullSize[0x00B0] - InheritedSize[0x0038])
	 */
	class UEOSCoreLobbySendInvite : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_41NX[0x68];                                  // 0x0048(0x0068) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSLobbySendInviteCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreLobbySendInvite* EOSLobbySendInviteAsync(class UObject* WorldContextObject, const struct FEOSLobbySendInviteOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreLobbyRejectInvite
	 * Size -> 0x0060 (FullSize[0x0098] - InheritedSize[0x0038])
	 */
	class UEOSCoreLobbyRejectInvite : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JYZW[0x50];                                  // 0x0048(0x0050) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSLobbyRejectInviteCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreLobbyRejectInvite* EOSLobbyRejectInviteAsync(class UObject* WorldContextObject, const struct FEOSLobbyRejectInviteOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreLobbyQueryInvites
	 * Size -> 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
	 */
	class UEOSCoreLobbyQueryInvites : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EW0R[0x38];                                  // 0x0048(0x0038) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSLobbyQueryInvitesCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreLobbyQueryInvites* EOSLobbyQueryInvitesAsync(class UObject* WorldContextObject, const struct FEOSLobbyQueryInvitesOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreLobbySearchFind
	 * Size -> 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
	 */
	class UEOSCoreLobbySearchFind : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D6GX[0x40];                                  // 0x0048(0x0040) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSLobbySearchFindCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreLobbySearchFind* EOSLobbySearchFindAsync(class UObject* WorldContextObject, const struct FEOSHLobbySearch& Handle, const struct FEOSLobbySearchFindOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.CoreMetrics
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UCoreMetrics : public UEOSCoreSubsystem
	{
	public:
		class UCoreMetrics* GetMetrics(class UObject* WorldContextObject);
		EOSResult EOSMetricsEndPlayerSession(class UObject* WorldContextObject, const struct FEOSMetricsEndPlayerSessionOptions& Options);
		EOSResult EOSMetricsBeginPlayerSession(class UObject* WorldContextObject, const struct FEOSMetricsBeginPlayerSessionOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.CoreMods
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UCoreMods : public UEOSCoreSubsystem
	{
	public:
		class UCoreMods* GetMods(class UObject* WorldContextObject);
		void EOSModsUpdateMod(class UObject* WorldContextObject, const struct FEOSModsUpdateModOptions& Options, const class FScriptDelegate& Callback);
		void EOSModsUninstallMod(class UObject* WorldContextObject, const struct FEOSModsUninstallModOptions& Options, const class FScriptDelegate& Callback);
		void EOSModsInstallMod(class UObject* WorldContextObject, const struct FEOSModsInstallModOptions& Options, const class FScriptDelegate& Callback);
		void EOSModsEnumerateMods(class UObject* WorldContextObject, const struct FEOSModsEnumerateModsOptions& Options, const class FScriptDelegate& Callback);
		EOSResult EOSModsCopyModInfo(class UObject* WorldContextObject, const struct FEOSModsCopyModInfoOptions& Options, struct FEOSModsModInfo* OutEnumeratedMods);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.CoreP2P
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UCoreP2P : public UEOSCoreSubsystem
	{
	public:
		unsigned char                                              UnknownData_0RB8[0x50];                                  // 0x0030(0x0050) MISSED OFFSET (PADDING)

	public:
		class UCoreP2P* GetP2P(class UObject* WorldContextObject);
		EOSResult EOSP2PSetRelayControl(class UObject* WorldContextObject, const struct FEOSP2PSetRelayControlOptions& Options);
		EOSResult EOSP2PSetPortRange(class UObject* WorldContextObject, const struct FEOSP2PSetPortRangeOptions& Options);
		EOSResult EOSP2PSetPacketQueueSize(class UObject* WorldContextObject, const struct FEOSP2PSetPacketQueueSizeOptions& Options);
		EOSResult EOSP2PSendPacket(class UObject* WorldContextObject, const struct FEOSP2PSendPacketOptions& Options);
		void EOSP2PRemoveNotifyPeerConnectionRequest(class UObject* WorldContextObject, const struct FEOSNotificationId& NotificationID);
		void EOSP2PRemoveNotifyPeerConnectionClosed(class UObject* WorldContextObject, const struct FEOSNotificationId& NotificationID);
		void EOSP2PRemoveNotifyIncomingPacketQueueFull(class UObject* WorldContextObject, const struct FEOSNotificationId& NotificationID);
		EOSResult EOSP2PReceivePacket(class UObject* WorldContextObject, const struct FEOSP2PReceivePacketOptions& Options, struct FEOSProductUserId* OutPeerId, struct FEOSP2PSocketId* OutSocketId, int32_t* OutChannel, TArray<unsigned char>* OutData, int32_t* OutBytesWritten);
		void EOSP2PQueryNATType(class UObject* WorldContextObject, const class FScriptDelegate& Callback);
		EOSResult EOSP2PGetRelayControl(class UObject* WorldContextObject, const struct FEOSP2PGetRelayControlOptions& Options, EEOSERelayControl* OutRelayControl);
		EOSResult EOSP2PGetPortRange(class UObject* WorldContextObject, const struct FEOSP2PGetPortRangeOptions& Options, int32_t* OutPort, int32_t OutNumAdditionalPortsToTry);
		EOSResult EOSP2PGetPacketQueueInfo(class UObject* WorldContextObject, const struct FEOSP2PGetPacketQueueInfoOptions& Options, struct FEOSP2PPacketQueueInfo* OutPacketQueueInfo);
		EOSResult EOSP2PGetNextReceivedPacketSize(class UObject* WorldContextObject, const struct FEOSP2PGetNextReceivedPacketSizeOptions& Options, int32_t* OutPacketSizeBytes);
		EOSResult EOSP2PGetNATType(class UObject* WorldContextObject, const struct FEOSP2PGetNATTypeOptions& Options, EEOSENATType* OutNatType);
		EOSResult EOSP2PCloseConnections(class UObject* WorldContextObject, const struct FEOSP2PCloseConnectionsOptions& Options);
		EOSResult EOSP2PCloseConnection(class UObject* WorldContextObject, const struct FEOSP2PCloseConnectionOptions& Options);
		struct FEOSNotificationId EOSP2PAddNotifyPeerConnectionRequest(class UObject* WorldContextObject, const struct FEOSP2PAddNotifyPeerConnectionRequestOptions& Options, const class FScriptDelegate& Callback);
		struct FEOSNotificationId EOSP2PAddNotifyPeerConnectionClosed(class UObject* WorldContextObject, const struct FEOSP2PAddNotifyPeerConnectionClosedOptions& Options);
		struct FEOSNotificationId EOSP2PAddNotifyIncomingPacketQueueFull(class UObject* WorldContextObject, const struct FEOSP2PAddNotifyIncomingPacketQueueFullOptions& Options, const class FScriptDelegate& Callback);
		EOSResult EOSP2PAcceptConnection(class UObject* WorldContextObject, const struct FEOSP2PAcceptConnectionOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.CorePlayerDataStorage
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UCorePlayerDataStorage : public UEOSCoreSubsystem
	{
	public:
		class UCorePlayerDataStorage* GetPlayerDataStorage(class UObject* WorldContextObject);
		void EOSPlayerDataStorageWriteFile(class UObject* WorldContextObject, const struct FEOSPlayerDataStorageWriteFileOptions& WriteOptions, const class FScriptDelegate& Callback);
		void EOSPlayerDataStorageReadFile(class UObject* WorldContextObject, const struct FEOSPlayerDataStorageReadFileOptions& ReadOptions, const class FScriptDelegate& Callback);
		void EOSPlayerDataStorageQueryFileList(class UObject* WorldContextObject, const struct FEOSPlayerDataStorageQueryFileListOptions& QueryFileListOptions, const class FScriptDelegate& Callback);
		void EOSPlayerDataStorageQueryFile(class UObject* WorldContextObject, const struct FEOSPlayerDataStorageQueryFileOptions& QueryFileOptions, const class FScriptDelegate& Callback);
		EOSResult EOSPlayerDataStorageGetFileMetadataCount(class UObject* WorldContextObject, const struct FEOSPlayerDataStorageGetFileMetadataCountOptions& GetFileMetadataCountOptions, int32_t* OutFileMetadataCount);
		void EOSPlayerDataStorageFileTransferRequestRelease(class UObject* WorldContextObject, const struct FEOSHPlayerDataStorageFileTransferRequest& Handle);
		EOSResult EOSPlayerDataStorageFileTransferRequestGetFileRequestState(class UObject* WorldContextObject, const struct FEOSHPlayerDataStorageFileTransferRequest& Handle);
		EOSResult EOSPlayerDataStorageFileTransferRequestGetFilename(class UObject* WorldContextObject, const struct FEOSHPlayerDataStorageFileTransferRequest& Handle, int32_t FilenameStringBufferSizeBytes, class FString* OutStringBuffer);
		EOSResult EOSPlayerDataStorageFileTransferRequestCancelRequest(class UObject* WorldContextObject, const struct FEOSHPlayerDataStorageFileTransferRequest& Handle);
		void EOSPlayerDataStorageDuplicateFile(class UObject* WorldContextObject, const struct FEOSPlayerDataStorageDuplicateFileOptions& DuplicateOptions, const class FScriptDelegate& Callback);
		void EOSPlayerDataStorageDeleteFile(class UObject* WorldContextObject, const struct FEOSPlayerDataStorageDeleteFileOptions& DeleteOptions, const class FScriptDelegate& Callback);
		EOSResult EOSPlayerDataStorageDeleteCache(class UObject* WorldContextObject, const struct FEOSPlayerDataStorageDeleteCacheOptions& Options, const class FScriptDelegate& Callback);
		EOSResult EOSPlayerDataStorageCopyFileMetadataByFilename(class UObject* WorldContextObject, const struct FEOSPlayerDataStorageCopyFileMetadataByFilenameOptions& CopyFileMetadataOptions, struct FEOSPlayerDataStorageFileMetadata* OutMetadata);
		EOSResult EOSPlayerDataStorageCopyFileMetadataAtIndex(class UObject* WorldContextObject, const struct FEOSPlayerDataStorageCopyFileMetadataAtIndexOptions& CopyFileMetadataOptions, struct FEOSPlayerDataStorageFileMetadata* OutMetadata);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCorePlayerDataStorageQueryFile
	 * Size -> 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
	 */
	class UEOSCorePlayerDataStorageQueryFile : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U0AG[0x48];                                  // 0x0048(0x0048) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSPlayerDataStorageQueryFileCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCorePlayerDataStorageQueryFile* EOSPlayerDataStorageQueryFileAsync(class UObject* WorldContextObject, const struct FEOSPlayerDataStorageQueryFileOptions& QueryFileOptions);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCorePlayerDataStorageQueryFileList
	 * Size -> 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
	 */
	class UEOSCorePlayerDataStorageQueryFileList : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9NVB[0x38];                                  // 0x0048(0x0038) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSPlayerDataStorageQueryFileListCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCorePlayerDataStorageQueryFileList* EOSPlayerDataStorageQueryFileListAsync(class UObject* WorldContextObject, const struct FEOSPlayerDataStorageQueryFileListOptions& QueryFileListOptions);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCorePlayerDataStorageDuplicateFile
	 * Size -> 0x0068 (FullSize[0x00A0] - InheritedSize[0x0038])
	 */
	class UEOSCorePlayerDataStorageDuplicateFile : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1IR7[0x58];                                  // 0x0048(0x0058) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSPlayerDataStorageDuplicateFileCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCorePlayerDataStorageDuplicateFile* EOSPlayerDataStorageDuplicateFileAsync(class UObject* WorldContextObject, const struct FEOSPlayerDataStorageDuplicateFileOptions& DuplicateOptions);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCorePlayerDataStorageDeleteFile
	 * Size -> 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
	 */
	class UEOSCorePlayerDataStorageDeleteFile : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O5GW[0x48];                                  // 0x0048(0x0048) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSPlayerDataStorageDeleteFileCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCorePlayerDataStorageDeleteFile* EOSPlayerDataStorageDeleteFileAsync(class UObject* WorldContextObject, const struct FEOSPlayerDataStorageDeleteFileOptions& DeleteOptions);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCorePlayerDataStorageReadFile
	 * Size -> 0x0090 (FullSize[0x00C8] - InheritedSize[0x0038])
	 */
	class UEOSCorePlayerDataStorageReadFile : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XW42[0x80];                                  // 0x0048(0x0080) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSPlayerDataStorageReadFileCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCorePlayerDataStorageReadFile* EOSPlayerDataStorageReadFileAsync(class UObject* WorldContextObject, const struct FEOSPlayerDataStorageReadFileOptions& ReadOptions);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCorePlayerDataStorageWriteFile
	 * Size -> 0x0090 (FullSize[0x00C8] - InheritedSize[0x0038])
	 */
	class UEOSCorePlayerDataStorageWriteFile : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X8JW[0x80];                                  // 0x0048(0x0080) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSPlayerDataStorageWriteFileCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCorePlayerDataStorageWriteFile* EOSPlayerDataStorageWriteFileAsync(class UObject* WorldContextObject, const struct FEOSPlayerDataStorageWriteFileOptions& WriteOptions);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.CorePresence
	 * Size -> 0x00A0 (FullSize[0x00D0] - InheritedSize[0x0030])
	 */
	class UCorePresence : public UEOSCoreSubsystem
	{
	public:
		unsigned char                                              UnknownData_JGLB[0xA0];                                  // 0x0030(0x00A0) MISSED OFFSET (PADDING)

	public:
		class UCorePresence* GetPresence(class UObject* WorldContextObject);
		void EOSPresenceSetPresence(class UObject* WorldContextObject, const struct FEOSPresenceSetPresenceOptions& Options, const class FScriptDelegate& Callback);
		void EOSPresenceRemoveNotifyOnPresenceChanged(class UObject* WorldContextObject, const struct FEOSNotificationId& NotificationID);
		void EOSPresenceRemoveNotifyJoinGameAccepted(class UObject* WorldContextObject, const struct FEOSNotificationId& ID);
		void EOSPresenceQueryPresence(class UObject* WorldContextObject, const struct FEOSPresenceQueryPresenceOptions& Options, const class FScriptDelegate& Callback);
		EOSResult EOSPresenceModificationSetStatus(class UObject* WorldContextObject, const struct FEOSHPresenceModification& Handle, const struct FEOSPresenceModificationSetStatusOptions& Options);
		EOSResult EOSPresenceModificationSetRawRichText(class UObject* WorldContextObject, const struct FEOSHPresenceModification& Handle, const struct FEOSPresenceModificationSetRawRichTextOptions& Options);
		EOSResult EOSPresenceModificationSetJoinInfo(class UObject* WorldContextObject, const struct FEOSHPresenceModification& Handle, const struct FEOSPresenceModificationSetJoinInfoOptions& Options);
		EOSResult EOSPresenceModificationSetData(class UObject* WorldContextObject, const struct FEOSHPresenceModification& Handle, const struct FEOSPresenceModificationSetDataOptions& Options);
		void EOSPresenceModificationRelease(class UObject* WorldContextObject, const struct FEOSHPresenceModification& PresenceModificationHandle);
		EOSResult EOSPresenceModificationDeleteData(class UObject* WorldContextObject, const struct FEOSHPresenceModification& Handle, const struct FEOSPresenceModificationDeleteDataOptions& Options);
		bool EOSPresenceHasPresence(class UObject* WorldContextObject, const struct FEOSPresenceHasPresenceOptions& Options);
		EOSResult EOSPresenceGetJoinInfo(class UObject* WorldContextObject, const struct FEOSPresenceGetJoinInfoOptions& Options, class FString* OutInfo);
		EOSResult EOSPresenceCreatePresenceModification(class UObject* WorldContextObject, const struct FEOSPresenceCreatePresenceModificationOptions& Options, struct FEOSHPresenceModification* OutPresenceModificationHandle);
		EOSResult EOSPresenceCopyPresence(class UObject* WorldContextObject, const struct FEOSPresenceCopyPresenceOptions& Options, struct FEOSPresenceInfo* OutPresence);
		struct FEOSNotificationId EOSPresenceAddNotifyOnPresenceChanged(class UObject* WorldContextObject, const class FScriptDelegate& Callback);
		struct FEOSNotificationId EOSPresenceAddNotifyJoinGameAccepted(class UObject* WorldContextObject, const class FScriptDelegate& Callback);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCorePresenceQueryPresence
	 * Size -> 0x0068 (FullSize[0x00A0] - InheritedSize[0x0038])
	 */
	class UEOSCorePresenceQueryPresence : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GRYL[0x58];                                  // 0x0048(0x0058) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSPresenceQueryPresenceCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCorePresenceQueryPresence* EOSPresenceQueryPresenceAsync(class UObject* WorldContextObject, const struct FEOSPresenceQueryPresenceOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCorePresenceSetPresence
	 * Size -> 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
	 */
	class UEOSCorePresenceSetPresence : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AEBC[0x40];                                  // 0x0048(0x0040) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSPresenceSetPresenceCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCorePresenceSetPresence* EOSPresenceSetPresenceAsync(class UObject* WorldContextObject, const struct FEOSPresenceSetPresenceOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.CoreProgressionSnapshot
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UCoreProgressionSnapshot : public UEOSCoreSubsystem
	{
	public:
		class UCoreProgressionSnapshot* GetProgressionSnapshot(class UObject* WorldContextObject);
		void EOSProgressionSnapshotSubmitSnapshot(class UObject* WorldContextObject, const struct FEOSProgressionSnapshotSubmitSnapshotOptions& Options, const class FScriptDelegate& Callback);
		EOSResult EOSProgressionSnapshotEndSnapshot(class UObject* WorldContextObject, const struct FEOSProgressionSnapshotEndSnapshotOptions& Options);
		void EOSProgressionSnapshotDeleteSnapshot(class UObject* WorldContextObject, const struct FEOSProgressionSnapshotDeleteSnapshotOptions& Options, const class FScriptDelegate& Callback);
		EOSResult EOSProgressionSnapshotBeginSnapshot(class UObject* WorldContextObject, const struct FEOSProgressionSnapshotBeginSnapshotOptions& Options, int32_t* OutSnapshotId);
		EOSResult EOSProgressionSnapshotAddProgression(class UObject* WorldContextObject, const struct FEOSProgressionSnapshotAddProgressionOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.CoreReports
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UCoreReports : public UEOSCoreSubsystem
	{
	public:
		class UCoreReports* GetReports(class UObject* WorldContextObject);
		void EOSReportsSendPlayerBehaviorReport(class UObject* WorldContextObject, const struct FEOSReportsSendPlayerBehaviorReportOptions& Options, const class FScriptDelegate& Callback);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSReportsSendPlayerBehaviorReport
	 * Size -> 0x0088 (FullSize[0x00C0] - InheritedSize[0x0038])
	 */
	class UEOSReportsSendPlayerBehaviorReport : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CXO8[0x78];                                  // 0x0048(0x0078) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSReportsSendPlayerBehaviorReportCompleteCallbackInfo& Data, bool bWasSuccessful);
		class UEOSReportsSendPlayerBehaviorReport* EOSReportsSendPlayerBehaviorReportAsync(class UObject* WorldContextObject, const struct FEOSReportsSendPlayerBehaviorReportOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.CoreRTC
	 * Size -> 0x00A0 (FullSize[0x00D0] - InheritedSize[0x0030])
	 */
	class UCoreRTC : public UEOSCoreSubsystem
	{
	public:
		unsigned char                                              UnknownData_Y8R5[0xA0];                                  // 0x0030(0x00A0) MISSED OFFSET (PADDING)

	public:
		class UCoreRTC* GetRTC(class UObject* WorldContextObject);
		void EOSRTCRemoveNotifyParticipantStatusChanged(class UObject* WorldContextObject, const struct FEOSNotificationId& NotificationID);
		void EOSRTCRemoveNotifyDisconnected(class UObject* WorldContextObject, const struct FEOSNotificationId& NotificationID);
		void EOSRTCLeaveRoom(class UObject* WorldContextObject, const struct FLeaveRoomOptions& Options, const class FScriptDelegate& Callback);
		void EOSRTCJoinRoom(class UObject* WorldContextObject, const struct FJoinRoomOptions& Options, const class FScriptDelegate& Callback);
		struct FEOSHRTCAudio EOSRTCGetAudioInterface(class UObject* WorldContextObject);
		void EOSRTCBlockParticipant(class UObject* WorldContextObject, const struct FBlockParticipantOptions& Options, const class FScriptDelegate& Callback);
		struct FEOSNotificationId EOSRTCAddNotifyParticipantStatusChanged(class UObject* WorldContextObject, const struct FAddNotifyParticipantStatusChangedOptions& Options, const class FScriptDelegate& Callback);
		struct FEOSNotificationId EOSRTCAddNotifyDisconnected(class UObject* WorldContextObject, const struct FAddNotifyDisconnectedOptions& Options, const class FScriptDelegate& Callback);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.CoreRTCAdmin
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UCoreRTCAdmin : public UEOSCoreSubsystem
	{
	public:
		class UCoreRTCAdmin* GetRTCAdmin(class UObject* WorldContextObject);
		void EOSRTCAdminSetParticipantHardMute(class UObject* WorldContextObject, const struct FEOSSetParticipantHardMuteOptions& Options, const class FScriptDelegate& Callback);
		void EOSRTCAdminQueryJoinRoomToken(class UObject* WorldContextObject, const struct FEOSQueryJoinRoomTokenOptions& Options, const class FScriptDelegate& Callback);
		void EOSRTCAdminKick(class UObject* WorldContextObject, const struct FEOSKickOptions& Options, const class FScriptDelegate& Callback);
		EOSResult EOSRTCAdminCopyUserTokenByUserId(class UObject* WorldContextObject, const struct FEOSCopyUserTokenByUserIdOptions& Options, struct FEOSUserToken* OutUserToken);
		EOSResult EOSRTCAdminCopyUserTokenByIndex(class UObject* WorldContextObject, const struct FEOSCopyUserTokenByIndexOptions& Options, struct FEOSUserToken* OutUserToken);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.CoreRTCAudio
	 * Size -> 0x01E0 (FullSize[0x0210] - InheritedSize[0x0030])
	 */
	class UCoreRTCAudio : public UEOSCoreSubsystem
	{
	public:
		unsigned char                                              UnknownData_RFGB[0x1E0];                                 // 0x0030(0x01E0) MISSED OFFSET (PADDING)

	public:
		class UCoreRTCAudio* GetRTCAudio(class UObject* WorldContextObject);
		void EOSRTCAudioUpdateSendingVolume(const struct FEOSHRTCAudio& Handle, const struct FEOSRTCAudioUpdateSendingVolumeOptions& Options, const class FScriptDelegate& Callback);
		void EOSRTCAudioUpdateSending(const struct FEOSHRTCAudio& Handle, const struct FEOSUpdateSendingOptions& Options, const class FScriptDelegate& Callback);
		void EOSRTCAudioUpdateReceivingVolume(const struct FEOSHRTCAudio& Handle, const struct FEOSRTCAudioUpdateReceivingVolumeOptions& Options, const class FScriptDelegate& Callback);
		void EOSRTCAudioUpdateReceiving(const struct FEOSHRTCAudio& Handle, const struct FEOSUpdateReceivingOptions& Options, const class FScriptDelegate& Callback);
		void EOSRTCAudioUpdateParticipantVolume(const struct FEOSHRTCAudio& Handle, const struct FEOSRTCAudioUpdateParticipantVolumeOptions& Options, const class FScriptDelegate& Callback);
		EOSResult EOSRTCAudioUnregisterPlatformAudioUser(const struct FEOSHRTCAudio& Handle, const struct FEOSUnregisterPlatformAudioUserOptions& Options);
		EOSResult EOSRTCAudioSetAudioOutputSettings(const struct FEOSHRTCAudio& Handle, const struct FEOSSetAudioOutputSettingsOptions& Options);
		EOSResult EOSRTCAudioSetAudioInputSettings(const struct FEOSHRTCAudio& Handle, const struct FEOSSetAudioInputSettingsOptions& Options);
		EOSResult EOSRTCAudioSendAudio(const struct FEOSHRTCAudio& Handle, const struct FEOSSendAudioOptions& Options);
		void EOSRTCAudioRemoveNotifyParticipantUpdated(class UObject* WorldContextObject, const struct FEOSHRTCAudio& Handle, const struct FEOSNotificationId& NotificationID);
		void EOSRTCAudioRemoveNotifyAudioOutputState(class UObject* WorldContextObject, const struct FEOSHRTCAudio& Handle, const struct FEOSNotificationId& NotificationID);
		void EOSRTCAudioRemoveNotifyAudioInputState(class UObject* WorldContextObject, const struct FEOSHRTCAudio& Handle, const struct FEOSNotificationId& NotificationID);
		void EOSRTCAudioRemoveNotifyAudioDevicesChanged(class UObject* WorldContextObject, const struct FEOSHRTCAudio& Handle, const struct FEOSNotificationId& NotificationID);
		void EOSRTCAudioRemoveNotifyAudioBeforeSend(class UObject* WorldContextObject, const struct FEOSHRTCAudio& Handle, const struct FEOSNotificationId& NotificationID);
		void EOSRTCAudioRemoveNotifyAudioBeforeRender(class UObject* WorldContextObject, const struct FEOSHRTCAudio& Handle, const struct FEOSNotificationId& NotificationID);
		EOSResult EOSRTCAudioRegisterPlatformAudioUser(const struct FEOSHRTCAudio& Handle, const struct FEOSRegisterPlatformAudioUserOptions& Options);
		int32_t EOSRTCAudioGetAudioOutputDevicesCount(const struct FEOSHRTCAudio& Handle, const struct FEOSGetAudioOutputDevicesCountOptions& Options);
		struct FEOSAudioOutputDeviceInfo EOSRTCAudioGetAudioOutputDeviceByIndex(const struct FEOSHRTCAudio& Handle, const struct FEOSGetAudioOutputDeviceByIndexOptions& Options);
		int32_t EOSRTCAudioGetAudioInputDevicesCount(const struct FEOSHRTCAudio& Handle, const struct FEOSGetAudioInputDevicesCountOptions& Options);
		struct FEOSAudioInputDeviceInfo EOSRTCAudioGetAudioInputDeviceByIndex(const struct FEOSHRTCAudio& Handle, const struct FEOSGetAudioOutputDeviceByIndexOptions& Options);
		struct FEOSNotificationId EOSRTCAudioAddNotifyParticipantUpdated(class UObject* WorldContextObject, const struct FEOSHRTCAudio& Handle, const struct FEOSAddNotifyParticipantUpdatedOptions& Options, const class FScriptDelegate& Callback);
		struct FEOSNotificationId EOSRTCAudioAddNotifyAudioOutputState(class UObject* WorldContextObject, const struct FEOSHRTCAudio& Handle, const struct FEOSAddNotifyAudioOutputStateOptions& Options, const class FScriptDelegate& Callback);
		struct FEOSNotificationId EOSRTCAudioAddNotifyAudioInputState(class UObject* WorldContextObject, const struct FEOSHRTCAudio& Handle, const struct FEOSAddNotifyAudioInputStateOptions& Options, const class FScriptDelegate& Callback);
		struct FEOSNotificationId EOSRTCAudioAddNotifyAudioDevicesChanged(class UObject* WorldContextObject, const struct FEOSHRTCAudio& Handle, const struct FEOSAddNotifyAudioDevicesChangedOptions& Options, const class FScriptDelegate& Callback);
		struct FEOSNotificationId EOSRTCAudioAddNotifyAudioBeforeSend(class UObject* WorldContextObject, const struct FEOSHRTCAudio& Handle, const struct FEOSAddNotifyAudioBeforeSendOptions& Options, const class FScriptDelegate& Callback);
		struct FEOSNotificationId EOSRTCAudioAddNotifyAudioBeforeRender(class UObject* WorldContextObject, const struct FEOSHRTCAudio& Handle, const struct FEOSAddNotifyAudioBeforeRenderOptions& Options, const class FScriptDelegate& Callback);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.CoreSanctions
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UCoreSanctions : public UEOSCoreSubsystem
	{
	public:
		class UCoreSanctions* GetSanctions(class UObject* WorldContextObject);
		void EOSSanctionsQueryActivePlayerSanctions(class UObject* WorldContextObject, const struct FEOSSanctionsQueryActivePlayerSanctionsOptions& Options, const class FScriptDelegate& Callback);
		int32_t EOSSanctionsGetPlayerSanctionCount(class UObject* WorldContextObject, const struct FEOSSanctionsGetPlayerSanctionCountOptions& Options);
		EOSResult EOSSanctionsCopyPlayerSanctionByIndex(class UObject* WorldContextObject, const struct FEOSSanctionsCopyPlayerSanctionByIndexOptions& Options, struct FEOSSanctionsPlayerSanction* OutSanction);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSSanctionsQueryActivePlayerSanctions
	 * Size -> 0x0068 (FullSize[0x00A0] - InheritedSize[0x0038])
	 */
	class UEOSSanctionsQueryActivePlayerSanctions : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PO9S[0x58];                                  // 0x0048(0x0058) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSSanctionsQueryActivePlayerSanctionsCallbackInfo& Data, bool bWasSuccessful);
		class UEOSSanctionsQueryActivePlayerSanctions* EOSSanctionsQueryActivePlayerSanctionsAsync(class UObject* WorldContextObject, const struct FEOSSanctionsQueryActivePlayerSanctionsOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.CoreSessions
	 * Size -> 0x00F0 (FullSize[0x0120] - InheritedSize[0x0030])
	 */
	class UCoreSessions : public UEOSCoreSubsystem
	{
	public:
		unsigned char                                              UnknownData_14HH[0xF0];                                  // 0x0030(0x00F0) MISSED OFFSET (PADDING)

	public:
		class UCoreSessions* GetSessions(class UObject* WorldContextObject);
		EOSResult EOSSessionsUpdateSessionModification(class UObject* WorldContextObject, const struct FEOSSessionsUpdateSessionModificationOptions& Options, struct FEOSHSessionModification* OutSessionModificationHandle);
		void EOSSessionsUpdateSession(class UObject* WorldContextObject, const struct FEOSSessionsUpdateSessionOptions& Options, const class FScriptDelegate& Callback);
		void EOSSessionsUnregisterPlayers(class UObject* WorldContextObject, const struct FEOSSessionsUnregisterPlayersOptions& Options, const class FScriptDelegate& Callback);
		void EOSSessionsStartSession(class UObject* WorldContextObject, const struct FEOSSessionsStartSessionOptions& Options, const class FScriptDelegate& Callback);
		void EOSSessionsSendInvite(class UObject* WorldContextObject, const struct FEOSSessionsSendInviteOptions& Options, const class FScriptDelegate& Callback);
		void EOSSessionsRemoveNotifySessionInviteReceived(class UObject* WorldContextObject, const struct FEOSNotificationId& ID);
		void EOSSessionsRemoveNotifySessionInviteAccepted(class UObject* WorldContextObject, const struct FEOSNotificationId& ID);
		void EOSSessionsRemoveNotifyJoinSessionAccepted(class UObject* WorldContextObject, const struct FEOSNotificationId& ID);
		void EOSSessionsRejectInvite(class UObject* WorldContextObject, const struct FEOSSessionsRejectInviteOptions& Options, const class FScriptDelegate& Callback);
		void EOSSessionsRegisterPlayers(class UObject* WorldContextObject, const struct FEOSSessionsRegisterPlayersOptions& Options, const class FScriptDelegate& Callback);
		void EOSSessionsQueryInvites(class UObject* WorldContextObject, const struct FEOSSessionsQueryInvitesOptions& Options, const class FScriptDelegate& Callback);
		void EOSSessionsJoinSession(class UObject* WorldContextObject, const struct FEOSSessionsJoinSessionOptions& Options, const class FScriptDelegate& Callback);
		EOSResult EOSSessionsIsUserInSession(class UObject* WorldContextObject, const struct FEOSSessionsIsUserInSessionOptions& Options);
		EOSResult EOSSessionsGetInviteIdByIndex(class UObject* WorldContextObject, const struct FEOSSessionsGetInviteIdByIndexOptions& Options, class FString* OutBuffer);
		int32_t EOSSessionsGetInviteCount(class UObject* WorldContextObject, const struct FEOSSessionsGetInviteCountOptions& Options);
		void EOSSessionsEndSession(class UObject* WorldContextObject, const struct FEOSSessionsEndSessionOptions& Options, const class FScriptDelegate& Callback);
		EOSResult EOSSessionSearchSetTargetUserId(class UObject* WorldContextObject, const struct FEOSHSessionSearch& Handle, const struct FEOSSessionSearchSetTargetUserIdOptions& Options);
		EOSResult EOSSessionSearchSetSessionId(class UObject* WorldContextObject, const struct FEOSHSessionSearch& Handle, const struct FEOSSessionSearchSetSessionIdOptions& Options);
		EOSResult EOSSessionSearchSetParameterString(class UObject* WorldContextObject, const struct FEOSHSessionSearch& Handle, const class FString& Key, const class FString& Value, EEOSEComparisonOp ComparisonOp);
		EOSResult EOSSessionSearchSetParameterInt64(class UObject* WorldContextObject, const struct FEOSHSessionSearch& Handle, const class FString& Key, const class FString& Value, EEOSEComparisonOp ComparisonOp);
		EOSResult EOSSessionSearchSetParameterDouble(class UObject* WorldContextObject, const struct FEOSHSessionSearch& Handle, const class FString& Key, const class FString& Value, EEOSEComparisonOp ComparisonOp);
		EOSResult EOSSessionSearchSetParameterBool(class UObject* WorldContextObject, const struct FEOSHSessionSearch& Handle, const class FString& Key, bool bValue, EEOSEComparisonOp ComparisonOp);
		EOSResult EOSSessionSearchSetMaxResults(class UObject* WorldContextObject, const struct FEOSHSessionSearch& Handle, const struct FEOSSessionSearchSetMaxResultsOptions& Options);
		EOSResult EOSSessionSearchRemoveParameter(class UObject* WorldContextObject, const struct FEOSHSessionSearch& Handle, const struct FEOSSessionSearchRemoveParameterOptions& Options);
		void EOSSessionSearchRelease(class UObject* WorldContextObject, const struct FEOSHSessionSearch& SessionSearchHandle);
		int32_t EOSSessionSearchGetSearchResultCount(class UObject* WorldContextObject, const struct FEOSHSessionSearch& Handle, const struct FEOSSessionSearchGetSearchResultCountOptions& Options);
		void EOSSessionSearchFind(class UObject* WorldContextObject, const struct FEOSHSessionSearch& Handle, const struct FEOSSessionSearchFindOptions& Options, const class FScriptDelegate& Callback);
		EOSResult EOSSessionSearchCopySearchResultByIndex(class UObject* WorldContextObject, const struct FEOSHSessionSearch& Handle, const struct FEOSSessionSearchCopySearchResultByIndexOptions& Options, struct FEOSHSessionDetails* OutSessionHandle);
		EOSResult EOSSessionsDumpSessionState(class UObject* WorldContextObject, const struct FEOSSessionsDumpSessionStateOptions& Options);
		void EOSSessionsDestroySession(class UObject* WorldContextObject, const struct FEOSSessionsDestroySessionOptions& Options, const class FScriptDelegate& Callback);
		EOSResult EOSSessionsCreateSessionSearch(class UObject* WorldContextObject, const struct FEOSSessionsCreateSessionSearchOptions& Options, struct FEOSHSessionSearch* OutSessionSearchHandle);
		EOSResult EOSSessionsCreateSessionModification(class UObject* WorldContextObject, const struct FEOSSessionsCreateSessionModificationOptions& Options, struct FEOSHSessionModification* OutSessionModificationHandle);
		EOSResult EOSSessionsCopySessionHandleForPresence(class UObject* WorldContextObject, const struct FEOSSessionsCopySessionHandleForPresenceOptions& Options, struct FEOSHSessionDetails* OutSessionHandle);
		EOSResult EOSSessionsCopySessionHandleByUiEventId(class UObject* WorldContextObject, const struct FEOSSessionsCopySessionHandleByUiEventIdOptions& Options, struct FEOSHSessionDetails* OutSessionHandle);
		EOSResult EOSSessionsCopySessionHandleByInviteId(class UObject* WorldContextObject, const struct FEOSSessionsCopySessionHandleByInviteIdOptions& Options, struct FEOSHSessionDetails* OutSessionHandle);
		EOSResult EOSSessionsCopyActiveSessionHandle(class UObject* WorldContextObject, const struct FEOSSessionsCopyActiveSessionHandleOptions& Options, struct FEOSHActiveSession* OutSessionHandle);
		struct FEOSNotificationId EOSSessionsAddNotifySessionInviteReceived(class UObject* WorldContextObject, const class FScriptDelegate& Callback);
		struct FEOSNotificationId EOSSessionsAddNotifySessionInviteAccepted(class UObject* WorldContextObject, const class FScriptDelegate& Callback);
		struct FEOSNotificationId EOSSessionsAddNotifyJoinSessionAccepted(class UObject* WorldContextObject, const class FScriptDelegate& Callback);
		EOSResult EOSSessionModificationSetPermissionLevel(class UObject* WorldContextObject, const struct FEOSHSessionModification& Handle, const struct FEOSSessionModificationSetPermissionLevelOptions& Options);
		EOSResult EOSSessionModificationSetMaxPlayers(class UObject* WorldContextObject, const struct FEOSHSessionModification& Handle, const struct FEOSSessionModificationSetMaxPlayersOptions& Options);
		EOSResult EOSSessionModificationSetJoinInProgressAllowed(class UObject* WorldContextObject, const struct FEOSHSessionModification& Handle, const struct FEOSSessionModificationSetJoinInProgressAllowedOptions& Options);
		EOSResult EOSSessionModificationSetInvitesAllowed(class UObject* WorldContextObject, const struct FEOSHSessionModification& Handle, const struct FEOSSessionModificationSetInvitesAllowedOptions& Options);
		EOSResult EOSSessionModificationSetHostAddress(class UObject* WorldContextObject, const struct FEOSHSessionModification& Handle, const struct FEOSSessionModificationSetHostAddressOptions& Options);
		EOSResult EOSSessionModificationSetBucketId(class UObject* WorldContextObject, const struct FEOSHSessionModification& Handle, const struct FEOSSessionModificationSetBucketIdOptions& Options);
		EOSResult EOSSessionModificationRemoveAttribute(class UObject* WorldContextObject, const struct FEOSHSessionModification& Handle, const struct FEOSSessionModificationRemoveAttributeOptions& Options);
		void EOSSessionModificationRelease(class UObject* WorldContextObject, const struct FEOSHSessionModification& SessionModificationHandle);
		EOSResult EOSSessionModificationAddAttributeString(class UObject* WorldContextObject, const struct FEOSHSessionModification& Handle, EEOSESessionAttributeAdvertisementType AdvertisementType, const class FString& Key, const class FString& Value);
		EOSResult EOSSessionModificationAddAttributeInt64(class UObject* WorldContextObject, const struct FEOSHSessionModification& Handle, EEOSESessionAttributeAdvertisementType AdvertisementType, const class FString& Key, const class FString& Value);
		EOSResult EOSSessionModificationAddAttributeDouble(class UObject* WorldContextObject, const struct FEOSHSessionModification& Handle, EEOSESessionAttributeAdvertisementType AdvertisementType, const class FString& Key, const class FString& Value);
		EOSResult EOSSessionModificationAddAttributeBool(class UObject* WorldContextObject, const struct FEOSHSessionModification& Handle, EEOSESessionAttributeAdvertisementType AdvertisementType, const class FString& Key, bool bValue);
		void EOSSessionDetailsRelease(class UObject* WorldContextObject, const struct FEOSHSessionDetails& SessionHandle);
		int32_t EOSSessionDetailsGetSessionAttributeCount(class UObject* WorldContextObject, const struct FEOSHSessionDetails& Handle, const struct FEOSSessionDetailsGetSessionAttributeCountOptions& Options);
		EOSResult EOSSessionDetailsCopySessionAttributeByKey(class UObject* WorldContextObject, const struct FEOSHSessionDetails& Handle, const struct FEOSSessionDetailsCopySessionAttributeByKeyOptions& Options, struct FEOSSessionDetailsAttribute* OutSessionAttribute);
		EOSResult EOSSessionDetailsCopySessionAttributeByIndex(class UObject* WorldContextObject, const struct FEOSHSessionDetails& Handle, const struct FEOSSessionDetailsCopySessionAttributeByIndexOptions& Options, struct FEOSSessionDetailsAttribute* OutSessionAttribute);
		EOSResult EOSSessionDetailsCopyInfo(class UObject* WorldContextObject, const struct FEOSHSessionDetails& Handle, const struct FEOSSessionDetailsCopyInfoOptions& Options, struct FEOSSessionDetailsInfo* outSessionInfo);
		void EOSActiveSessionRelease(class UObject* WorldContextObject, const struct FEOSHActiveSession& ActiveSessionHandle);
		int32_t EOSActiveSessionGetRegisteredPlayerCount(class UObject* WorldContextObject, const struct FEOSHActiveSession& Handle, const struct FEOSActiveSessionGetRegisteredPlayerCountOptions& Options);
		struct FEOSProductUserId EOSActiveSessionGetRegisteredPlayerByIndex(class UObject* WorldContextObject, const struct FEOSHActiveSession& Handle, const struct FEOSActiveSessionGetRegisteredPlayerByIndexOptions& Options);
		EOSResult EOSActiveSessionCopyInfo(class UObject* WorldContextObject, const struct FEOSHActiveSession& Handle, const struct FEOSActiveSessionCopyInfoOptions& Options, struct FEOSActiveSessionInfo* OutActiveSessionInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreSessionsUpdateSession
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UEOSCoreSessionsUpdateSession : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VB08[0x18];                                  // 0x0048(0x0018) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSSessionsUpdateSessionCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreSessionsUpdateSession* EOSSessionsUpdateSessionAsync(class UObject* WorldContextObject, const struct FEOSSessionsUpdateSessionOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreSessionsDestroySession
	 * Size -> 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
	 */
	class UEOSCoreSessionsDestroySession : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G4FB[0x20];                                  // 0x0048(0x0020) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSSessionsDestroySessionCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreSessionsDestroySession* EOSSessionsDestroySessionAsync(class UObject* WorldContextObject, const struct FEOSSessionsDestroySessionOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreSessionsJoinSession
	 * Size -> 0x0060 (FullSize[0x0098] - InheritedSize[0x0038])
	 */
	class UEOSCoreSessionsJoinSession : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UMP3[0x50];                                  // 0x0048(0x0050) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSSessionsJoinSessionCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreSessionsJoinSession* EOSSessionsJoinSessionAsync(class UObject* WorldContextObject, const struct FEOSSessionsJoinSessionOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreSessionsStartSession
	 * Size -> 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
	 */
	class UEOSCoreSessionsStartSession : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7KZE[0x20];                                  // 0x0048(0x0020) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSSessionsStartSessionCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreSessionsStartSession* EOSSessionsStartSessionAsync(class UObject* WorldContextObject, const struct FEOSSessionsStartSessionOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreSessionsEndSession
	 * Size -> 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
	 */
	class UEOSCoreSessionsEndSession : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OMTM[0x20];                                  // 0x0048(0x0020) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSSessionsEndSessionCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreSessionsEndSession* EOSSessionsEndSessionAsync(class UObject* WorldContextObject, const struct FEOSSessionsEndSessionOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreSessionsRegisterPlayers
	 * Size -> 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
	 */
	class UEOSCoreSessionsRegisterPlayers : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T14S[0x30];                                  // 0x0048(0x0030) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSSessionsRegisterPlayersCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreSessionsRegisterPlayers* EOSSessionsRegisterPlayersAsync(class UObject* WorldContextObject, const struct FEOSSessionsRegisterPlayersOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreSessionsUnregisterPlayers
	 * Size -> 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
	 */
	class UEOSCoreSessionsUnregisterPlayers : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JPHJ[0x30];                                  // 0x0048(0x0030) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSSessionsUnregisterPlayersCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreSessionsUnregisterPlayers* EOSSessionsUnregisterPlayersAsync(class UObject* WorldContextObject, const struct FEOSSessionsUnregisterPlayersOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreSessionsSendInvite
	 * Size -> 0x0078 (FullSize[0x00B0] - InheritedSize[0x0038])
	 */
	class UEOSCoreSessionsSendInvite : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8AN7[0x68];                                  // 0x0048(0x0068) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSSessionsSendInviteCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreSessionsSendInvite* EOSSessionsSendInviteAsync(class UObject* WorldContextObject, const struct FEOSSessionsSendInviteOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreSessionsRejectInvite
	 * Size -> 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
	 */
	class UEOSCoreSessionsRejectInvite : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FX8A[0x48];                                  // 0x0048(0x0048) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSSessionsRejectInviteCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreSessionsRejectInvite* EOSSessionsRejectInviteAsync(class UObject* WorldContextObject, const struct FEOSSessionsRejectInviteOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreSessionsQueryInvites
	 * Size -> 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
	 */
	class UEOSCoreSessionsQueryInvites : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CJ02[0x38];                                  // 0x0048(0x0038) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSSessionsQueryInvitesCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreSessionsQueryInvites* EOSSessionsQueryInvitesAsync(class UObject* WorldContextObject, const struct FEOSSessionsQueryInvitesOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreSessionsSearchFind
	 * Size -> 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
	 */
	class UEOSCoreSessionsSearchFind : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CIF3[0x40];                                  // 0x0048(0x0040) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSSessionSearchFindCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreSessionsSearchFind* EOSSessionSearchFindAsync(class UObject* WorldContextObject, const struct FEOSHSessionSearch& SearchHandle, const struct FEOSSessionSearchFindOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.CoreStats
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UCoreStats : public UEOSCoreSubsystem
	{
	public:
		class UCoreStats* GetStats(class UObject* WorldContextObject);
		void EOSStatsQueryStats(class UObject* WorldContextObject, const struct FEOSStatsQueryStatsOptions& Options, const class FScriptDelegate& Callback);
		void EOSStatsIngestStat(class UObject* WorldContextObject, const struct FEOSStatsIngestStatOptions& Options, const class FScriptDelegate& Callback);
		int32_t EOSStatsGetStatsCount(class UObject* WorldContextObject, const struct FEOSStatsGetStatCountOptions& Options);
		EOSResult EOSStatsCopyStatByName(class UObject* WorldContextObject, const struct FEOSStatsCopyStatByNameOptions& Options, struct FEOSStatsStat* OutStat);
		EOSResult EOSStatsCopyStatByIndex(class UObject* WorldContextObject, const struct FEOSStatsCopyStatByIndexOptions& Options, struct FEOSStatsStat* OutStat);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreStatsIngestStat
	 * Size -> 0x0080 (FullSize[0x00B8] - InheritedSize[0x0038])
	 */
	class UEOSCoreStatsIngestStat : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XVDH[0x70];                                  // 0x0048(0x0070) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSStatsIngestStatCompleteCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreStatsIngestStat* EOSStatsIngestStatAsync(class UObject* WorldContextObject, const struct FEOSStatsIngestStatOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreStatsQueryStats
	 * Size -> 0x00A0 (FullSize[0x00D8] - InheritedSize[0x0038])
	 */
	class UEOSCoreStatsQueryStats : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NVC3[0x90];                                  // 0x0048(0x0090) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSStatsOnQueryStatsCompleteCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreStatsQueryStats* EOSStatsQueryStatsAsync(class UObject* WorldContextObject, const struct FEOSStatsQueryStatsOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.CoreTitleStorage
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UCoreTitleStorage : public UEOSCoreSubsystem
	{
	public:
		class UCoreTitleStorage* GetTitleStorage(class UObject* WorldContextObject);
		struct FEOSTitleStorageFileTransferRequestHandle EOSTitleStorageReadFile(class UObject* WorldContextObject, const struct FEOSTitleStorageReadFileOptions& Options, const class FScriptDelegate& Callback);
		void EOSTitleStorageQueryFileList(class UObject* WorldContextObject, const struct FEOSTitleStorageQueryFileListOptions& Options, const class FScriptDelegate& Callback);
		void EOSTitleStorageQueryFile(class UObject* WorldContextObject, const struct FEOSTitleStorageQueryFileOptions& Options, const class FScriptDelegate& Callback);
		int32_t EOSTitleStorageGetFileMetadataCount(class UObject* WorldContextObject, const struct FEOSTitleStorageGetFileMetadataCountOptions& Options);
		EOSResult EOSTitleStorageFileTransferRequestGetFileRequestState(class UObject* WorldContextObject, const struct FEOSTitleStorageFileTransferRequestHandle& Handle);
		EOSResult EOSTitleStorageFileTransferRequestGetFilename(class UObject* WorldContextObject, const struct FEOSTitleStorageFileTransferRequestHandle& Handle, int32_t FilenameStringBufferSizeBytes, class FString* OutStringBuffer);
		EOSResult EOSTitleStorageFileTransferRequestCancelRequest(class UObject* WorldContextObject, const struct FEOSTitleStorageFileTransferRequestHandle& Handle);
		EOSResult EOSTitleStorageDeleteCache(class UObject* WorldContextObject, const struct FEOSTitleStorageDeleteCacheOptions& Options, const class FScriptDelegate& Callback);
		EOSResult EOSTitleStorageCopyFileMetadataByFilename(class UObject* WorldContextObject, const struct FEOSTitleStorageCopyFileMetadataByFilenameOptions& Options, struct FEOSTitleStorageFileMetadata* OutMetadata);
		EOSResult EOSTitleStorageCopyFileMetadataAtIndex(class UObject* WorldContextObject, const struct FEOSTitleStorageCopyFileMetadataAtIndexOptions& Options, struct FEOSTitleStorageFileMetadata* OutMetadata);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreTitleStorageQueryFile
	 * Size -> 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
	 */
	class UEOSCoreTitleStorageQueryFile : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BC0B[0x48];                                  // 0x0048(0x0048) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSTitleStorageQueryFileCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreTitleStorageQueryFile* EOSTitleStorageQueryFileAsync(class UObject* WorldContextObject, const struct FEOSTitleStorageQueryFileOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreTitleStorageQueryFileList
	 * Size -> 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
	 */
	class UEOSCoreTitleStorageQueryFileList : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0NA2[0x48];                                  // 0x0048(0x0048) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSTitleStorageQueryFileListCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreTitleStorageQueryFileList* EOSTitleStorageQueryFileListAsync(class UObject* WorldContextObject, const struct FEOSTitleStorageQueryFileListOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreTitleStorageReadFile
	 * Size -> 0x0078 (FullSize[0x00B0] - InheritedSize[0x0038])
	 */
	class UEOSCoreTitleStorageReadFile : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F598[0x68];                                  // 0x0048(0x0068) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSTitleStorageReadFileCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreTitleStorageReadFile* EOSTitleStorageReadFileAsync(class UObject* WorldContextObject, const struct FEOSTitleStorageReadFileOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreTitleStorageDeleteCache
	 * Size -> 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
	 */
	class UEOSCoreTitleStorageDeleteCache : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T2MM[0x38];                                  // 0x0048(0x0038) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSTitleStorageDeleteCacheCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreTitleStorageDeleteCache* EOSTitleStorageDeleteCacheAsync(class UObject* WorldContextObject, const struct FEOSTitleStorageDeleteCacheOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.CoreUI
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UCoreUI : public UEOSCoreSubsystem
	{
	public:
		unsigned char                                              UnknownData_KHFY[0x50];                                  // 0x0030(0x0050) MISSED OFFSET (PADDING)

	public:
		class UCoreUI* GetUI(class UObject* WorldContextObject);
		void EOSUIShowReportPlayer(class UObject* WorldContextObject, const struct FEOSUIShowReportPlayerOptions& Options, const class FScriptDelegate& Callback);
		void EOSUIShowFriends(class UObject* WorldContextObject, const struct FEOSUIShowFriendsOptions& Options, const class FScriptDelegate& Callback);
		void EOSUIShowBlockPlayer(class UObject* WorldContextObject, const struct FEOSUIShowBlockPlayerOptions& Options, const class FScriptDelegate& Callback);
		EOSResult EOSUISetToggleFriendsKey(class UObject* WorldContextObject, const struct FEOSUISetToggleFriendsKeyOptions& Options);
		EOSResult EOSUISetDisplayPreference(class UObject* WorldContextObject, const struct FEOSUISetDisplayPreferenceOptions& Options);
		void EOSUIRemoveNotifyDisplaySettingsUpdated(class UObject* WorldContextObject, const struct FEOSNotificationId& ID);
		EOSResult EOSUIPauseSocialOverlay(class UObject* WorldContextObject, const struct FEOSUIPauseSocialOverlayOptions& Options);
		bool EOSUIIsValidKeyCombination(class UObject* WorldContextObject, int32_t keyCombination);
		bool EOSUIIsSocialOverlayPaused(class UObject* WorldContextObject, const struct FEOSUIIsSocialOverlayPausedOptions& Options);
		void EOSUIHideFriends(class UObject* WorldContextObject, const struct FEOSUIHideFriendsOptions& Options, const class FScriptDelegate& Callback);
		int32_t EOSUIGetToggleFriendsKey(class UObject* WorldContextObject, const struct FEOSUIGetToggleFriendsKeyOptions& Options);
		EEOSUIENotificationLocation EOSUIGetNotificationLocationPreference(class UObject* WorldContextObject);
		bool EOSUIGetFriendsVisible(class UObject* WorldContextObject, const struct FEOSUIGetFriendsVisibleOptions& Options);
		bool EOSUIGetFriendsExclusiveInput(class UObject* WorldContextObject, const struct FEOSUIGetFriendsExclusiveInputOptions& Options);
		struct FEOSNotificationId EOSUIAddNotifyDisplaySettingsUpdated(class UObject* WorldContextObject, const struct FEOSUIAddNotifyDisplaySettingsUpdatedOptions& Options, const class FScriptDelegate& Callback);
		EOSResult EOSUIAcknowledgeEventId(class UObject* WorldContextObject, const struct FEOSUIAcknowledgeEventIdOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreUIShowFriends
	 * Size -> 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
	 */
	class UEOSCoreUIShowFriends : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X426[0x38];                                  // 0x0048(0x0038) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSUIShowFriendsCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreUIShowFriends* EOSUIShowFriendsAsync(class UObject* WorldContextObject, const struct FEOSUIShowFriendsOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreUIHideFriends
	 * Size -> 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
	 */
	class UEOSCoreUIHideFriends : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DYRC[0x38];                                  // 0x0048(0x0038) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSUIHideFriendsCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreUIHideFriends* EOSUIHideFriendsAsync(class UObject* WorldContextObject, const struct FEOSUIHideFriendsOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.CoreUserInfo
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UCoreUserInfo : public UEOSCoreSubsystem
	{
	public:
		class UCoreUserInfo* GetUserInfo(class UObject* WorldContextObject);
		void EOSUserInfoQueryUserInfoByExternalAccount(class UObject* WorldContextObject, const struct FEOSUserInfoQueryUserInfoByExternalAccountOptions& Options, const class FScriptDelegate& Callback);
		void EOSUserInfoQueryUserInfoByDisplayName(class UObject* WorldContextObject, const struct FEOSUserInfoQueryUserInfoByDisplayNameOptions& Options, const class FScriptDelegate& Callback);
		void EOSUserInfoQueryUserInfo(class UObject* WorldContextObject, const struct FEOSUserInfoQueryUserInfoOptions& Options, const class FScriptDelegate& Callback);
		int32_t EOSUserInfoGetExternalUserInfoCount(class UObject* WorldContextObject, const struct FEOSUserInfoGetExternalUserInfoCountOptions& Options);
		EOSResult EOSUserInfoCopyUserInfo(class UObject* WorldContextObject, const struct FEOSUserInfoCopyUserInfoOptions& Options, struct FEOSUserInfo* OutUserInfo);
		EOSResult EOSUserInfoCopyExternalUserInfoByIndex(class UObject* WorldContextObject, const struct FEOSUserInfoCopyExternalUserInfoByIndexOptions& Options, struct FEOSUserInfoExternalUserInfo* OutExternalUserInfo);
		EOSResult EOSUserInfoCopyExternalUserInfoByAccountType(class UObject* WorldContextObject, const struct FEOSUserInfoCopyExternalUserInfoByAccountTypeOptions& Options, struct FEOSUserInfoExternalUserInfo* OutExternalUserInfo);
		EOSResult EOSUserInfoCopyExternalUserInfoByAccountId(class UObject* WorldContextObject, const struct FEOSUserInfoCopyExternalUserInfoByAccountIdOptions& Options, struct FEOSUserInfoExternalUserInfo* OutExternalUserInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreUserInfoQueryUserInfo
	 * Size -> 0x0068 (FullSize[0x00A0] - InheritedSize[0x0038])
	 */
	class UEOSCoreUserInfoQueryUserInfo : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UR9S[0x58];                                  // 0x0048(0x0058) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSUserInfoQueryUserInfoCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreUserInfoQueryUserInfo* EOSUserInfoQueryUserInfoAsync(class UObject* WorldContextObject, const struct FEOSUserInfoQueryUserInfoOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreUserInfoQueryUserInfoByDisplayName
	 * Size -> 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
	 */
	class UEOSCoreUserInfoQueryUserInfoByDisplayName : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7GYA[0x48];                                  // 0x0048(0x0048) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSUserInfoQueryUserInfoByDisplayNameCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreUserInfoQueryUserInfoByDisplayName* EOSUserInfoQueryUserInfoByDisplayNameAsync(class UObject* WorldContextObject, const struct FEOSUserInfoQueryUserInfoByDisplayNameOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EOSCore.EOSCoreUserInfoByExternalAccount
	 * Size -> 0x0060 (FullSize[0x0098] - InheritedSize[0x0038])
	 */
	class UEOSCoreUserInfoByExternalAccount : public UEOSCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IFTY[0x50];                                  // 0x0048(0x0050) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const struct FEOSUserInfoQueryUserInfoByExternalAccountCallbackInfo& Data, bool bWasSuccessful);
		class UEOSCoreUserInfoByExternalAccount* EOSUserInfoQueryUserInfoByExternalAccountAsync(class UObject* WorldContextObject, const struct FEOSUserInfoQueryUserInfoByExternalAccountOptions& Options);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
