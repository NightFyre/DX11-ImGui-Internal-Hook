#pragma once

/**
 * Name: RaidGame
 * Version: 1
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function EOSCore.CoreAchievements.GetAchievements
	 */
	struct UCoreAchievements_GetAchievements_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCoreAchievements*                                   ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAchievements.EOSAchievementsUnlockAchievements
	 */
	struct UCoreAchievements_EOSAchievementsUnlockAchievements_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAchievementsUnlockAchievementsOptions           Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAchievements.EOSAchievementsRemoveNotifyAchievementsUnlocked
	 */
	struct UCoreAchievements_EOSAchievementsRemoveNotifyAchievementsUnlocked_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  ID;                                                      // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAchievements.EOSAchievementsQueryPlayerAchievements
	 */
	struct UCoreAchievements_EOSAchievementsQueryPlayerAchievements_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAchievementsQueryPlayerAchievementsOptions      Options;                                                 // 0x0008(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0050(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAchievements.EOSAchievementsQueryDefinitions
	 */
	struct UCoreAchievements_EOSAchievementsQueryDefinitions_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAchievementsQueryDefinitionsOptions             Options;                                                 // 0x0008(0x0021)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VG4R[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Callback;                                                // 0x002C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAchievements.EOSAchievementsGetPlayerAchievementCount
	 */
	struct UCoreAchievements_EOSAchievementsGetPlayerAchievementCount_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAchievementsGetPlayerAchievementCountOptions    Options;                                                 // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAchievements.EOSAchievementsGetAchievementDefinitionCount
	 */
	struct UCoreAchievements_EOSAchievementsGetAchievementDefinitionCount_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAchievementsGetAchievementDefinitionCountOptions Options;                                                 // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAchievements.EOSAchievementsCopyPlayerAchievementByIndex
	 */
	struct UCoreAchievements_EOSAchievementsCopyPlayerAchievementByIndex_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAchievementsCopyPlayerAchievementByIndexOptions Options;                                                 // 0x0008(0x0050)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSAchievementsPlayerAchievement                   OutAchievement;                                          // 0x0058(0x0088)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x00E0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAchievements.EOSAchievementsCopyAchievementDefinitionV2ByIndex
	 */
	struct UCoreAchievements_EOSAchievementsCopyAchievementDefinitionV2ByIndex_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAchievementsCopyAchievementDefinitionV2ByIndexOptions Options;                                                 // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5R8J[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEOSAchievementsDefinitionV2                        OutDefinition;                                           // 0x0010(0x00A0)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x00B0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAchievements.EOSAchievementsCopyAchievementDefinitionV2ByAchievementId
	 */
	struct UCoreAchievements_EOSAchievementsCopyAchievementDefinitionV2ByAchievementId_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAchievementsCopyAchievementDefinitionV2ByAchievementIdOptions Options;                                                 // 0x0008(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FEOSAchievementsDefinitionV2                        OutDefinition;                                           // 0x0018(0x00A0)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x00B8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAchievements.EOSAchievementsAddNotifyAchievementsUnlockedV2
	 */
	struct UCoreAchievements_EOSAchievementsAddNotifyAchievementsUnlockedV2_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreAchievementsQueryDefinitions.HandleCallback
	 */
	struct UEOSCoreAchievementsQueryDefinitions_HandleCallback_Params
	{
	public:
		struct FEOSAchievementsOnQueryDefinitionsCompleteCallbackInfo Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreAchievementsQueryDefinitions.EOSAchievementsQueryDefinitionsAsync
	 */
	struct UEOSCoreAchievementsQueryDefinitions_EOSAchievementsQueryDefinitionsAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAchievementsQueryDefinitionsOptions             Options;                                                 // 0x0008(0x0021)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XGPO[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UEOSCoreAchievementsQueryDefinitions*                ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreAchievementsQueryPlayerAchievements.HandleCallback
	 */
	struct UEOSCoreAchievementsQueryPlayerAchievements_HandleCallback_Params
	{
	public:
		struct FEOSAchievementsOnQueryPlayerAchievementsCompleteCallbackInfo Data;                                                    // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreAchievementsQueryPlayerAchievements.EOSAchievementsQueryPlayerAchievementsAsync
	 */
	struct UEOSCoreAchievementsQueryPlayerAchievements_EOSAchievementsQueryPlayerAchievementsAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAchievementsQueryPlayerAchievementsOptions      Options;                                                 // 0x0008(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class UEOSCoreAchievementsQueryPlayerAchievements*         ReturnValue;                                             // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreAchievementsUnlockAchievements.HandleCallback
	 */
	struct UEOSCoreAchievementsUnlockAchievements_HandleCallback_Params
	{
	public:
		struct FEOSAchievementsOnUnlockAchievementsCompleteCallbackInfo Data;                                                    // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreAchievementsUnlockAchievements.EOSAchievementsUnlockAchievements
	 */
	struct UEOSCoreAchievementsUnlockAchievements_EOSAchievementsUnlockAchievements_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAchievementsUnlockAchievementsOptions           Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		class UEOSCoreAchievementsUnlockAchievements*              ReturnValue;                                             // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatClient.GetAntiCheatClient
	 */
	struct UCoreAntiCheatClient_GetAntiCheatClient_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCoreAntiCheatClient*                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientUnregisterPeer
	 */
	struct UCoreAntiCheatClient_EOSAntiCheatClientUnregisterPeer_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAntiCheatClientUnregisterPeerOptions            Options;                                                 // 0x0008(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientUnprotectMessage
	 */
	struct UCoreAntiCheatClient_EOSAntiCheatClientUnprotectMessage_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAntiCheatClientUnprotectMessageOptions          Options;                                                 // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
		TArray<unsigned char>                                      OutBuffer;                                               // 0x0020(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientRemoveNotifyPeerAuthStatusChanged
	 */
	struct UCoreAntiCheatClient_EOSAntiCheatClientRemoveNotifyPeerAuthStatusChanged_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  NotificationID;                                          // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientRemoveNotifyPeerActionRequired
	 */
	struct UCoreAntiCheatClient_EOSAntiCheatClientRemoveNotifyPeerActionRequired_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  NotificationID;                                          // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientRemoveNotifyMessageToServer
	 */
	struct UCoreAntiCheatClient_EOSAntiCheatClientRemoveNotifyMessageToServer_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  NotificationID;                                          // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientRemoveNotifyMessageToPeer
	 */
	struct UCoreAntiCheatClient_EOSAntiCheatClientRemoveNotifyMessageToPeer_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  NotificationID;                                          // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientRemoveNotifyClientIntegrityViolated
	 */
	struct UCoreAntiCheatClient_EOSAntiCheatClientRemoveNotifyClientIntegrityViolated_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  NotificationID;                                          // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientRegisterPeer
	 */
	struct UCoreAntiCheatClient_EOSAntiCheatClientRegisterPeer_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAntiCheatClientRegisterPeerOptions              Options;                                                 // 0x0008(0x0058)  (Parm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientReceiveMessageFromServer
	 */
	struct UCoreAntiCheatClient_EOSAntiCheatClientReceiveMessageFromServer_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAntiCheatClientReceiveMessageFromServerOptions  Options;                                                 // 0x0008(0x0010)  (Parm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientReceiveMessageFromPeer
	 */
	struct UCoreAntiCheatClient_EOSAntiCheatClientReceiveMessageFromPeer_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAntiCheatClientReceiveMessageFromPeerOptions    Options;                                                 // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientProtectMessage
	 */
	struct UCoreAntiCheatClient_EOSAntiCheatClientProtectMessage_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAntiCheatClientProtectMessageOptions            Options;                                                 // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
		TArray<unsigned char>                                      OutBuffer;                                               // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientPollStatus
	 */
	struct UCoreAntiCheatClient_EOSAntiCheatClientPollStatus_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAntiCheatClientPollStatusOptions                Options;                                                 // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		EEOSEAntiCheatClientViolationType                          ViolationType;                                           // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RCQ7[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              OutMessage;                                              // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientGetProtectMessageOutputLength
	 */
	struct UCoreAntiCheatClient_EOSAntiCheatClientGetProtectMessageOutputLength_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAntiCheatClientGetProtectMessageOutputLengthOptions Options;                                                 // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    OutBufferLengthBytes;                                    // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientEndSession
	 */
	struct UCoreAntiCheatClient_EOSAntiCheatClientEndSession_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAntiCheatClientEndSessionOptions                Options;                                                 // 0x0008(0x0001)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientBeginSession
	 */
	struct UCoreAntiCheatClient_EOSAntiCheatClientBeginSession_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAntiCheatClientBeginSessionOptions              Options;                                                 // 0x0008(0x0022)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x002A(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientAddNotifyPeerAuthStatusChanged
	 */
	struct UCoreAntiCheatClient_EOSAntiCheatClientAddNotifyPeerAuthStatusChanged_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAntiCheatClientAddNotifyPeerAuthStatusChangedOptions Options;                                                 // 0x0008(0x0001)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DP93[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Callback;                                                // 0x000C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6AMK[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEOSNotificationId                                  ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientAddNotifyPeerActionRequired
	 */
	struct UCoreAntiCheatClient_EOSAntiCheatClientAddNotifyPeerActionRequired_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAntiCheatClientAddNotifyPeerActionRequiredOptions Options;                                                 // 0x0008(0x0001)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6QTJ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Callback;                                                // 0x000C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_D7VN[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEOSNotificationId                                  ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientAddNotifyMessageToServer
	 */
	struct UCoreAntiCheatClient_EOSAntiCheatClientAddNotifyMessageToServer_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAntiCheatClientAddNotifyMessageToServerOptions  Options;                                                 // 0x0008(0x0001)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PS3Q[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Callback;                                                // 0x000C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VQCL[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEOSNotificationId                                  ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientAddNotifyMessageToPeer
	 */
	struct UCoreAntiCheatClient_EOSAntiCheatClientAddNotifyMessageToPeer_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAntiCheatClientAddNotifyMessageToPeerOptions    Options;                                                 // 0x0008(0x0001)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4Q9G[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Callback;                                                // 0x000C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_I65A[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEOSNotificationId                                  ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientAddNotifyClientIntegrityViolated
	 */
	struct UCoreAntiCheatClient_EOSAntiCheatClientAddNotifyClientIntegrityViolated_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAntiCheatClientAddNotifyClientIntegrityViolatedOptions Options;                                                 // 0x0008(0x0001)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZOVJ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Callback;                                                // 0x000C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3ZVJ[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEOSNotificationId                                  ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientAddExternalIntegrityCatalog
	 */
	struct UCoreAntiCheatClient_EOSAntiCheatClientAddExternalIntegrityCatalog_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAntiCheatClientAddExternalIntegrityCatalogOptions Options;                                                 // 0x0008(0x0010)  (Parm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatServer.GetAntiCheatServer
	 */
	struct UCoreAntiCheatServer_GetAntiCheatServer_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCoreAntiCheatServer*                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerUnregisterClient
	 */
	struct UCoreAntiCheatServer_EOSAntiCheatServerUnregisterClient_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAntiCheatServerUnregisterClientOptions          Options;                                                 // 0x0008(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerUnprotectMessage
	 */
	struct UCoreAntiCheatServer_EOSAntiCheatServerUnprotectMessage_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAntiCheatServerUnprotectMessageOptions          Options;                                                 // 0x0008(0x0028)  (Parm, NativeAccessSpecifierPublic)
		TArray<unsigned char>                                      OutBuffer;                                               // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    OutBufferLengthBytes;                                    // 0x0040(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0044(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerSetGameSessionId
	 */
	struct UCoreAntiCheatServer_EOSAntiCheatServerSetGameSessionId_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAntiCheatCommonSetGameSessionIdOptions          Options;                                                 // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerSetClientNetworkState
	 */
	struct UCoreAntiCheatServer_EOSAntiCheatServerSetClientNetworkState_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAntiCheatServerSetClientNetworkStateOptions     Options;                                                 // 0x0008(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerSetClientDetails
	 */
	struct UCoreAntiCheatServer_EOSAntiCheatServerSetClientDetails_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAntiCheatCommonSetClientDetailsOptions          Options;                                                 // 0x0008(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerRemoveNotifyMessageToClient
	 */
	struct UCoreAntiCheatServer_EOSAntiCheatServerRemoveNotifyMessageToClient_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  NotificationID;                                          // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerRemoveNotifyClientAuthStatusChanged
	 */
	struct UCoreAntiCheatServer_EOSAntiCheatServerRemoveNotifyClientAuthStatusChanged_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  NotificationID;                                          // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerRemoveNotifyClientActionRequired
	 */
	struct UCoreAntiCheatServer_EOSAntiCheatServerRemoveNotifyClientActionRequired_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  NotificationID;                                          // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerRegisterEvent
	 */
	struct UCoreAntiCheatServer_EOSAntiCheatServerRegisterEvent_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAntiCheatCommonRegisterEventOptions             Options;                                                 // 0x0008(0x0030)  (Parm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerRegisterClient
	 */
	struct UCoreAntiCheatServer_EOSAntiCheatServerRegisterClient_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAntiCheatServerRegisterClientOptions            Options;                                                 // 0x0008(0x0030)  (Parm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerReceiveMessageFromClient
	 */
	struct UCoreAntiCheatServer_EOSAntiCheatServerReceiveMessageFromClient_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAntiCheatServerReceiveMessageFromClientOptions  Options;                                                 // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerProtectMessage
	 */
	struct UCoreAntiCheatServer_EOSAntiCheatServerProtectMessage_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAntiCheatServerProtectMessageOptions            Options;                                                 // 0x0008(0x0028)  (Parm, NativeAccessSpecifierPublic)
		TArray<unsigned char>                                      OutBuffer;                                               // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    OutBufferLengthBytes;                                    // 0x0040(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0044(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerLogPlayerUseWeapon
	 */
	struct UCoreAntiCheatServer_EOSAntiCheatServerLogPlayerUseWeapon_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAntiCheatCommonLogPlayerUseWeaponOptions        Options;                                                 // 0x0008(0x0048)  (Parm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerLogPlayerUseAbility
	 */
	struct UCoreAntiCheatServer_EOSAntiCheatServerLogPlayerUseAbility_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAntiCheatCommonLogPlayerUseAbilityOptions       Options;                                                 // 0x0008(0x0020)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerLogPlayerTick
	 */
	struct UCoreAntiCheatServer_EOSAntiCheatServerLogPlayerTick_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAntiCheatCommonLogPlayerTickOptions             Options;                                                 // 0x0008(0x0038)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerLogPlayerTakeDamage
	 */
	struct UCoreAntiCheatServer_EOSAntiCheatServerLogPlayerTakeDamage_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAntiCheatCommonLogPlayerTakeDamageOptions       Options;                                                 // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x00B8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerLogPlayerSpawn
	 */
	struct UCoreAntiCheatServer_EOSAntiCheatServerLogPlayerSpawn_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAntiCheatCommonLogPlayerSpawnOptions            Options;                                                 // 0x0008(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerLogPlayerRevive
	 */
	struct UCoreAntiCheatServer_EOSAntiCheatServerLogPlayerRevive_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAntiCheatCommonLogPlayerReviveOptions           Options;                                                 // 0x0008(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerLogPlayerDespawn
	 */
	struct UCoreAntiCheatServer_EOSAntiCheatServerLogPlayerDespawn_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAntiCheatCommonLogPlayerDespawnOptions          Options;                                                 // 0x0008(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerLogGameRoundStart
	 */
	struct UCoreAntiCheatServer_EOSAntiCheatServerLogGameRoundStart_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAntiCheatCommonLogGameRoundStartOptions         Options;                                                 // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerLogGameRoundEnd
	 */
	struct UCoreAntiCheatServer_EOSAntiCheatServerLogGameRoundEnd_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAntiCheatCommonLogGameRoundEndOptions           Options;                                                 // 0x0008(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerLogEvent
	 */
	struct UCoreAntiCheatServer_EOSAntiCheatServerLogEvent_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAntiCheatCommonLogEventOptions                  Options;                                                 // 0x0008(0x0028)  (Parm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerGetProtectMessageOutputLength
	 */
	struct UCoreAntiCheatServer_EOSAntiCheatServerGetProtectMessageOutputLength_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAntiCheatServerGetProtectMessageOutputLengthOptions Options;                                                 // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    OutBufferLengthBytes;                                    // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerEndSession
	 */
	struct UCoreAntiCheatServer_EOSAntiCheatServerEndSession_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAntiCheatServerEndSessionOptions                Options;                                                 // 0x0008(0x0001)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerBeginSession
	 */
	struct UCoreAntiCheatServer_EOSAntiCheatServerBeginSession_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAntiCheatServerBeginSessionOptions              Options;                                                 // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerAddNotifyMessageToClient
	 */
	struct UCoreAntiCheatServer_EOSAntiCheatServerAddNotifyMessageToClient_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAntiCheatServerAddNotifyMessageToClientOptions  Options;                                                 // 0x0008(0x0001)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OG15[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Callback;                                                // 0x000C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LMX2[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEOSNotificationId                                  ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerAddNotifyClientAuthStatusChanged
	 */
	struct UCoreAntiCheatServer_EOSAntiCheatServerAddNotifyClientAuthStatusChanged_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAntiCheatServerAddNotifyClientAuthStatusChangedOptions Options;                                                 // 0x0008(0x0001)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_E4R7[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Callback;                                                // 0x000C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TLL7[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEOSNotificationId                                  ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerAddNotifyClientActionRequired
	 */
	struct UCoreAntiCheatServer_EOSAntiCheatServerAddNotifyClientActionRequired_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAntiCheatServerAddNotifyClientActionRequiredOptions Options;                                                 // 0x0008(0x0001)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HZFP[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Callback;                                                // 0x000C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1QOV[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEOSNotificationId                                  ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreAuthLogin.HandleCallback
	 */
	struct UEOSCoreAuthLogin_HandleCallback_Params
	{
	public:
		struct FEOSAuthLoginCallbackInfo                           Data;                                                    // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0090(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreAuthLogin.EOSAuthLoginAsync
	 */
	struct UEOSCoreAuthLogin_EOSAuthLoginAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAuthLoginOptions                                Options;                                                 // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
		class UEOSCoreAuthLogin*                                   ReturnValue;                                             // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreAuthLogout.HandleCallback
	 */
	struct UEOSCoreAuthLogout_HandleCallback_Params
	{
	public:
		struct FEOSAuthLogoutCallbackInfo                          Data;                                                    // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreAuthLogout.EOSAuthLogoutAsync
	 */
	struct UEOSCoreAuthLogout_EOSAuthLogoutAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAuthLogoutOptions                               Options;                                                 // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class UEOSCoreAuthLogout*                                  ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreAuthLinkAccount.HandleCallback
	 */
	struct UEOSCoreAuthLinkAccount_HandleCallback_Params
	{
	public:
		struct FEOSAuthLinkAccountCallbackInfo                     Data;                                                    // 0x0000(0x00A0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x00A0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreAuthLinkAccount.EOSAuthLinkAccount
	 */
	struct UEOSCoreAuthLinkAccount_EOSAuthLinkAccount_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAuthLinkAccountOptions                          Options;                                                 // 0x0008(0x0038)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class UEOSCoreAuthLinkAccount*                             ReturnValue;                                             // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreAuthDeletePersistentAuth.HandleCallback
	 */
	struct UEOSCoreAuthDeletePersistentAuth_HandleCallback_Params
	{
	public:
		struct FEOSAuthDeletePersistentAuthCallbackInfo            Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreAuthDeletePersistentAuth.EOSAuthDeletePersistentAuthAsync
	 */
	struct UEOSCoreAuthDeletePersistentAuth_EOSAuthDeletePersistentAuthAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAuthDeletePersistentAuthOptions                 Options;                                                 // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UEOSCoreAuthDeletePersistentAuth*                    ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreAuthVerifyUserAuth.HandleCallback
	 */
	struct UEOSCoreAuthVerifyUserAuth_HandleCallback_Params
	{
	public:
		struct FEOSAuthVerifyUserAuthCallbackInfo                  Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreAuthVerifyUserAuth.EOSAuthVerifyUserAuthAsync
	 */
	struct UEOSCoreAuthVerifyUserAuth_EOSAuthVerifyUserAuthAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAuthVerifyUserAuthOptions                       Options;                                                 // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
		class UEOSCoreAuthVerifyUserAuth*                          ReturnValue;                                             // 0x00B8(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAuthentication.GetAuthentication
	 */
	struct UCoreAuthentication_GetAuthentication_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCoreAuthentication*                                 ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAuthentication.EOSAuthVerifyUserAuth
	 */
	struct UCoreAuthentication_EOSAuthVerifyUserAuth_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAuthVerifyUserAuthOptions                       Options;                                                 // 0x0008(0x00B0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x00B8(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAuthentication.EOSAuthVerifyIdToken
	 */
	struct UCoreAuthentication_EOSAuthVerifyIdToken_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAuthVerifyIdTokenOptions                        Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAuthentication.EOSAuthRemoveNotifyLoginStatusChanged
	 */
	struct UCoreAuthentication_EOSAuthRemoveNotifyLoginStatusChanged_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  ID;                                                      // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAuthentication.EOSAuthQueryIdToken
	 */
	struct UCoreAuthentication_EOSAuthQueryIdToken_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAuthQueryIdTokenOptions                         Options;                                                 // 0x0008(0x0042)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IWF8[0x2];                                   // 0x004A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Callback;                                                // 0x004C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAuthentication.EOSAuthLogout
	 */
	struct UCoreAuthentication_EOSAuthLogout_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAuthLogoutOptions                               Options;                                                 // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAuthentication.EOSAuthLogin
	 */
	struct UCoreAuthentication_EOSAuthLogin_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAuthLoginOptions                                Options;                                                 // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAuthentication.EOSAuthLinkAccount
	 */
	struct UCoreAuthentication_EOSAuthLinkAccount_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAuthLinkAccountOptions                          Options;                                                 // 0x0008(0x0038)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAuthentication.EOSAuthGetSelectedAccountId
	 */
	struct UCoreAuthentication_EOSAuthGetSelectedAccountId_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0008(0x0021)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSEpicAccountId                                   OutSelectedAccountId;                                    // 0x0029(0x0021)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x004A(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAuthentication.EOSAuthGetMergedAccountsCount
	 */
	struct UCoreAuthentication_EOSAuthGetMergedAccountsCount_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0008(0x0021)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KBF2[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x002C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAuthentication.EOSAuthGetMergedAccountByIndex
	 */
	struct UCoreAuthentication_EOSAuthGetMergedAccountByIndex_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0008(0x0021)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FTWV[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Index;                                                   // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSEpicAccountId                                   ReturnValue;                                             // 0x0030(0x0021)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAuthentication.EOSAuthGetLoginStatusPure
	 */
	struct UCoreAuthentication_EOSAuthGetLoginStatusPure_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0008(0x0021)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSELoginStatus                                            ReturnValue;                                             // 0x0029(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAuthentication.EOSAuthGetLoginStatus
	 */
	struct UCoreAuthentication_EOSAuthGetLoginStatus_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0008(0x0021)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSELoginStatus                                            ReturnValue;                                             // 0x0029(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAuthentication.EOSAuthGetLoggedInAccountsCount
	 */
	struct UCoreAuthentication_EOSAuthGetLoggedInAccountsCount_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAuthentication.EOSAuthGetLoggedInAccountByIndex
	 */
	struct UCoreAuthentication_EOSAuthGetLoggedInAccountByIndex_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSEpicAccountId                                   ReturnValue;                                             // 0x000C(0x0021)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAuthentication.EOSAuthDeletePersistentAuth
	 */
	struct UCoreAuthentication_EOSAuthDeletePersistentAuth_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAuthDeletePersistentAuthOptions                 Options;                                                 // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAuthentication.EOSAuthCopyUserAuthToken
	 */
	struct UCoreAuthentication_EOSAuthCopyUserAuthToken_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAuthCopyUserAuthTokenOptions                    Options;                                                 // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x000C(0x0021)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7XP6[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEOSAuthToken                                       OutUserAuthToken;                                        // 0x0030(0x00B0)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x00E0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAuthentication.EOSAuthCopyIdToken
	 */
	struct UCoreAuthentication_EOSAuthCopyIdToken_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAuthCopyIdTokenOptions                          Options;                                                 // 0x0008(0x0021)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UN1W[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEOSAuthIdToken                                     OutIdToken;                                              // 0x0030(0x0038)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreAuthentication.EOSAuthAddNotifyLoginStatusChanged
	 */
	struct UCoreAuthentication_EOSAuthAddNotifyLoginStatusChanged_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreChat.SendChatMessage
	 */
	struct UCoreChat_SendChatMessage_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0008(0x0021)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSProductUserId                                   Target;                                                  // 0x0029(0x0021)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JFKA[0x6];                                   // 0x004A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Message;                                                 // 0x0050(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEOSEPacketReliability                                     Reliability;                                             // 0x0060(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreChat.ListenForChatMessages
	 */
	struct UCoreChat_ListenForChatMessages_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0008(0x0021)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Y7JE[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Callback;                                                // 0x002C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreChat.GetChat
	 */
	struct UCoreChat_GetChat_Params
	{
	public:
		class UCoreChat*                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreChat.ClearAllChatListeners
	 */
	struct UCoreChat_ClearAllChatListeners_Params
	{	};

	/**
	 * Function EOSCore.CoreConnect.GetConnect
	 */
	struct UCoreConnect_GetConnect_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCoreConnect*                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreConnect.EOSConnectVerifyIdToken
	 */
	struct UCoreConnect_EOSConnectVerifyIdToken_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSConnectVerifyIdTokenOptions                     Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreConnect.EOSConnectUnlinkAccount
	 */
	struct UCoreConnect_EOSConnectUnlinkAccount_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSConnectUnlinkAccountOptions                     Options;                                                 // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreConnect.EOSConnectTransferDeviceIdAccount
	 */
	struct UCoreConnect_EOSConnectTransferDeviceIdAccount_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSConnectTransferDeviceIdAccountOptions           Options;                                                 // 0x0008(0x0063)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BOSE[0x1];                                   // 0x006B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Callback;                                                // 0x006C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreConnect.EOSConnectRemoveNotifyLoginStatusChanged
	 */
	struct UCoreConnect_EOSConnectRemoveNotifyLoginStatusChanged_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  ID;                                                      // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreConnect.EOSConnectRemoveNotifyAuthExpiration
	 */
	struct UCoreConnect_EOSConnectRemoveNotifyAuthExpiration_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  ID;                                                      // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreConnect.EOSConnectQueryProductUserIdMappings
	 */
	struct UCoreConnect_EOSConnectQueryProductUserIdMappings_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSConnectQueryProductUserIdMappingsOptions        Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreConnect.EOSConnectQueryExternalAccountMappings
	 */
	struct UCoreConnect_EOSConnectQueryExternalAccountMappings_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSConnectQueryExternalAccountMappingsOptions      Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreConnect.EOSConnectLogin
	 */
	struct UCoreConnect_EOSConnectLogin_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSConnectLoginOptions                             Options;                                                 // 0x0008(0x0030)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreConnect.EOSConnectLinkAccount
	 */
	struct UCoreConnect_EOSConnectLinkAccount_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSConnectLinkAccountOptions                       Options;                                                 // 0x0008(0x0030)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreConnect.EOSConnectGetProductUserIdMapping
	 */
	struct UCoreConnect_EOSConnectGetProductUserIdMapping_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSConnectGetProductUserIdMappingOptions           Options;                                                 // 0x0008(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class FString                                              OutString;                                               // 0x0050(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreConnect.EOSConnectGetProductUserExternalAccountCount
	 */
	struct UCoreConnect_EOSConnectGetProductUserExternalAccountCount_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSConnectGetProductUserExternalAccountCountOptions Options;                                                 // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreConnect.EOSConnectGetLoginStatusPure
	 */
	struct UCoreConnect_EOSConnectGetLoginStatusPure_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0008(0x0021)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEOSELoginStatus                                           ReturnValue;                                             // 0x0029(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreConnect.EOSConnectGetLoginStatus
	 */
	struct UCoreConnect_EOSConnectGetLoginStatus_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0008(0x0021)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEOSELoginStatus                                           ReturnValue;                                             // 0x0029(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreConnect.EOSConnectGetLoggedInUsersCount
	 */
	struct UCoreConnect_EOSConnectGetLoggedInUsersCount_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreConnect.EOSConnectGetLoggedInUserByIndex
	 */
	struct UCoreConnect_EOSConnectGetLoggedInUserByIndex_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSProductUserId                                   ReturnValue;                                             // 0x000C(0x0021)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreConnect.EOSConnectGetExternalAccountMapping
	 */
	struct UCoreConnect_EOSConnectGetExternalAccountMapping_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSConnectGetExternalAccountMappingsOptions        Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		struct FEOSProductUserId                                   ReturnValue;                                             // 0x0040(0x0021)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreConnect.EOSConnectDeleteDeviceId
	 */
	struct UCoreConnect_EOSConnectDeleteDeviceId_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSConnectDeleteDeviceIdOptions                    Options;                                                 // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x000C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreConnect.EOSConnectCreateUser
	 */
	struct UCoreConnect_EOSConnectCreateUser_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSConnectCreateUserOptions                        Options;                                                 // 0x0008(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreConnect.EOSConnectCreateDeviceId
	 */
	struct UCoreConnect_EOSConnectCreateDeviceId_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSConnectCreateDeviceIdOptions                    Options;                                                 // 0x0008(0x0010)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreConnect.EOSConnectCopyProductUserInfo
	 */
	struct UCoreConnect_EOSConnectCopyProductUserInfo_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSConnectCopyProductUserInfoOptions               Options;                                                 // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSConnectExternalAccountInfo                      OutExternalAccountInfo;                                  // 0x0030(0x0060)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreConnect.EOSConnectCopyProductUserExternalAccountByIndex
	 */
	struct UCoreConnect_EOSConnectCopyProductUserExternalAccountByIndex_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSConnectCopyProductUserExternalAccountByIndexOptions Options;                                                 // 0x0008(0x002C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZOXO[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEOSConnectExternalAccountInfo                      OutExternalAccountInfo;                                  // 0x0038(0x0060)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0098(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreConnect.EOSConnectCopyProductUserExternalAccountByAccountType
	 */
	struct UCoreConnect_EOSConnectCopyProductUserExternalAccountByAccountType_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSConnectCopyProductUserExternalAccountByAccountTypeOptions Options;                                                 // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSConnectExternalAccountInfo                      OutExternalAccountInfo;                                  // 0x0030(0x0060)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreConnect.EOSConnectCopyProductUserExternalAccountByAccountId
	 */
	struct UCoreConnect_EOSConnectCopyProductUserExternalAccountByAccountId_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSConnectCopyProductUserExternalAccountByAccountIdOptions Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		struct FEOSConnectExternalAccountInfo                      OutExternalAccountInfo;                                  // 0x0040(0x0060)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x00A0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreConnect.EOSConnectCopyIdToken
	 */
	struct UCoreConnect_EOSConnectCopyIdToken_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSConnectCopyIdTokenOptions                       Options;                                                 // 0x0008(0x0021)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3PQB[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEOSConnectIdToken                                  OutIdToken;                                              // 0x0030(0x0038)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreConnect.EOSConnectAddNotifyLoginStatusChanged
	 */
	struct UCoreConnect_EOSConnectAddNotifyLoginStatusChanged_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreConnect.EOSConnectAddNotifyAuthExpiration
	 */
	struct UCoreConnect_EOSConnectAddNotifyAuthExpiration_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreConnectLogin.HandleCallback
	 */
	struct UEOSCoreConnectLogin_HandleCallback_Params
	{
	public:
		struct FEOSConnectLoginCallbackInfo                        Data;                                                    // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreConnectLogin.EOSConnectLoginAsync
	 */
	struct UEOSCoreConnectLogin_EOSConnectLoginAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSConnectLoginOptions                             Options;                                                 // 0x0008(0x0030)  (Parm, NativeAccessSpecifierPublic)
		class UEOSCoreConnectLogin*                                ReturnValue;                                             // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreConnectCreateUser.HandleCallback
	 */
	struct UEOSCoreConnectCreateUser_HandleCallback_Params
	{
	public:
		struct FEOSConnectCreateUserCallbackInfo                   Data;                                                    // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreConnectCreateUser.EOSConnectCreateUserAsync
	 */
	struct UEOSCoreConnectCreateUser_EOSConnectCreateUserAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSConnectCreateUserOptions                        Options;                                                 // 0x0008(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class UEOSCoreConnectCreateUser*                           ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreConnectLinkAccount.HandleCallback
	 */
	struct UEOSCoreConnectLinkAccount_HandleCallback_Params
	{
	public:
		struct FEOSConnectLinkAccountCallbackInfo                  Data;                                                    // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreConnectLinkAccount.EOSConnectLinkAccountAsync
	 */
	struct UEOSCoreConnectLinkAccount_EOSConnectLinkAccountAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSConnectLinkAccountOptions                       Options;                                                 // 0x0008(0x0030)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class UEOSCoreConnectLinkAccount*                          ReturnValue;                                             // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreConnectUnlinkAccount.HandleCallback
	 */
	struct UEOSCoreConnectUnlinkAccount_HandleCallback_Params
	{
	public:
		struct FEOSConnectUnlinkAccountCallbackInfo                Data;                                                    // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreConnectUnlinkAccount.EOSConnectUnlinkAccountAsync
	 */
	struct UEOSCoreConnectUnlinkAccount_EOSConnectUnlinkAccountAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSConnectUnlinkAccountOptions                     Options;                                                 // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class UEOSCoreConnectUnlinkAccount*                        ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreConnectCreateDeviceId.HandleCallback
	 */
	struct UEOSCoreConnectCreateDeviceId_HandleCallback_Params
	{
	public:
		struct FEOSConnectCreateDeviceIdCallbackInfo               Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreConnectCreateDeviceId.EOSConnectCreateDeviceIdAsync
	 */
	struct UEOSCoreConnectCreateDeviceId_EOSConnectCreateDeviceIdAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSConnectCreateDeviceIdOptions                    Options;                                                 // 0x0008(0x0010)  (Parm, NativeAccessSpecifierPublic)
		class UEOSCoreConnectCreateDeviceId*                       ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreConnectDeleteDeviceId.HandleCallback
	 */
	struct UEOSCoreConnectDeleteDeviceId_HandleCallback_Params
	{
	public:
		struct FEOSConnectDeleteDeviceIdCallbackInfo               Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreConnectDeleteDeviceId.EOSConnectDeleteDeviceIdAsync
	 */
	struct UEOSCoreConnectDeleteDeviceId_EOSConnectDeleteDeviceIdAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSConnectDeleteDeviceIdOptions                    Options;                                                 // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DP42[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UEOSCoreConnectDeleteDeviceId*                       ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreConnectTransferDeviceIdAccount.HandleCallback
	 */
	struct UEOSCoreConnectTransferDeviceIdAccount_HandleCallback_Params
	{
	public:
		struct FEOSConnectTransferDeviceIdAccountCallbackInfo      Data;                                                    // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreConnectTransferDeviceIdAccount.EOSConnectTransferDeviceIdAccountAsync
	 */
	struct UEOSCoreConnectTransferDeviceIdAccount_EOSConnectTransferDeviceIdAccountAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSConnectTransferDeviceIdAccountOptions           Options;                                                 // 0x0008(0x0063)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_F7IM[0x5];                                   // 0x006B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UEOSCoreConnectTransferDeviceIdAccount*              ReturnValue;                                             // 0x0070(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreConnectQueryExternalAccountMappings.HandleCallback
	 */
	struct UEOSCoreConnectQueryExternalAccountMappings_HandleCallback_Params
	{
	public:
		struct FEOSConnectQueryExternalAccountMappingsCallbackInfo Data;                                                    // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreConnectQueryExternalAccountMappings.EOSConnectQueryExternalAccountMappingsAsync
	 */
	struct UEOSCoreConnectQueryExternalAccountMappings_EOSConnectQueryExternalAccountMappingsAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSConnectQueryExternalAccountMappingsOptions      Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		class UEOSCoreConnectQueryExternalAccountMappings*         ReturnValue;                                             // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreConnectQueryProductUserIdMappings.HandleCallback
	 */
	struct UEOSCoreConnectQueryProductUserIdMappings_HandleCallback_Params
	{
	public:
		struct FEOSConnectQueryProductUserIdMappingsCallbackInfo   Data;                                                    // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreConnectQueryProductUserIdMappings.EOSConnectQueryProductUserIdMappingsAsync
	 */
	struct UEOSCoreConnectQueryProductUserIdMappings_EOSConnectQueryProductUserIdMappingsAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSConnectQueryProductUserIdMappingsOptions        Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		class UEOSCoreConnectQueryProductUserIdMappings*           ReturnValue;                                             // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.UpdateUniqueNetIdFromOSS
	 */
	struct UEOSCoreLibrary_UpdateUniqueNetIdFromOSS_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.RemoveListenForEOSMessages
	 */
	struct UEOSCoreLibrary_RemoveListenForEOSMessages_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.MakeString
	 */
	struct UEOSCoreLibrary_MakeString_Params
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionSetting                                  ReturnValue;                                             // 0x0010(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.MakeSearchString
	 */
	struct UEOSCoreLibrary_MakeSearchString_Params
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionSearchSetting                            ReturnValue;                                             // 0x0010(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.MakeSearchInteger
	 */
	struct UEOSCoreLibrary_MakeSearchInteger_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_374J[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEOSSessionSearchSetting                            ReturnValue;                                             // 0x0008(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.MakeSearchBool
	 */
	struct UEOSCoreLibrary_MakeSearchBool_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NKLO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEOSSessionSearchSetting                            ReturnValue;                                             // 0x0008(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.MakeParamString
	 */
	struct UEOSCoreLibrary_MakeParamString_Params
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAntiCheatCommonLogEventParamPair                ReturnValue;                                             // 0x0010(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.MakeParamInt64
	 */
	struct UEOSCoreLibrary_MakeParamInt64_Params
	{
	public:
		int64_t                                                    Value;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAntiCheatCommonLogEventParamPair                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.MakeParamInt32
	 */
	struct UEOSCoreLibrary_MakeParamInt32_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MESR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEOSAntiCheatCommonLogEventParamPair                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.MakeInteger
	 */
	struct UEOSCoreLibrary_MakeInteger_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IV4Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEOSSessionSetting                                  ReturnValue;                                             // 0x0008(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.MakeBool
	 */
	struct UEOSCoreLibrary_MakeBool_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BKDE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEOSSessionSetting                                  ReturnValue;                                             // 0x0008(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.Login
	 */
	struct UEOSCoreLibrary_Login_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              LoginId;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Password;                                                // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEOSLoginCredentialType                                    AuthType;                                                // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEOSEExternalCredentialType                                CredentialsType;                                         // 0x0031(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JH3C[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              AdditionalData;                                          // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.ListenForEOSMessages
	 */
	struct UEOSCoreLibrary_ListenForEOSMessages_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.IsProductUserIdIdenticalWith
	 */
	struct UEOSCoreLibrary_IsProductUserIdIdenticalWith_Params
	{
	public:
		struct FEOSProductUserId                                   A;                                                       // 0x0000(0x0021)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSProductUserId                                   B;                                                       // 0x0021(0x0021)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0042(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.IsEpicAccountIdIdenticalWith
	 */
	struct UEOSCoreLibrary_IsEpicAccountIdIdenticalWith_Params
	{
	public:
		struct FEOSEpicAccountId                                   A;                                                       // 0x0000(0x0021)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSEpicAccountId                                   B;                                                       // 0x0021(0x0021)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0042(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.GetString
	 */
	struct UEOSCoreLibrary_GetString_Params
	{
	public:
		struct FEOSSessionSetting                                  Settings;                                                // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.GetSessionAttributeString
	 */
	struct UEOSCoreLibrary_GetSessionAttributeString_Params
	{
	public:
		struct FEOSSessionsAttributeData                           Data;                                                    // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.GetSessionAttributeInt64
	 */
	struct UEOSCoreLibrary_GetSessionAttributeInt64_Params
	{
	public:
		struct FEOSSessionsAttributeData                           Data;                                                    // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.GetSessionAttributeDouble
	 */
	struct UEOSCoreLibrary_GetSessionAttributeDouble_Params
	{
	public:
		struct FEOSSessionsAttributeData                           Data;                                                    // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.GetSessionAttributeBool
	 */
	struct UEOSCoreLibrary_GetSessionAttributeBool_Params
	{
	public:
		struct FEOSSessionsAttributeData                           Data;                                                    // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.GetLobbyAttributeString
	 */
	struct UEOSCoreLibrary_GetLobbyAttributeString_Params
	{
	public:
		struct FEOSLobbyAttributeData                              Data;                                                    // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.GetLobbyAttributeInt64
	 */
	struct UEOSCoreLibrary_GetLobbyAttributeInt64_Params
	{
	public:
		struct FEOSLobbyAttributeData                              Data;                                                    // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.GetLobbyAttributeDouble
	 */
	struct UEOSCoreLibrary_GetLobbyAttributeDouble_Params
	{
	public:
		struct FEOSLobbyAttributeData                              Data;                                                    // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.GetLobbyAttributeBool
	 */
	struct UEOSCoreLibrary_GetLobbyAttributeBool_Params
	{
	public:
		struct FEOSLobbyAttributeData                              Data;                                                    // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.GetInteger
	 */
	struct UEOSCoreLibrary_GetInteger_Params
	{
	public:
		struct FEOSSessionSetting                                  Settings;                                                // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0038(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.GetCurrentProductId
	 */
	struct UEOSCoreLibrary_GetCurrentProductId_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSProductUserId                                   ReturnValue;                                             // 0x000C(0x0021)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.GetCurrentAccountId
	 */
	struct UEOSCoreLibrary_GetCurrentAccountId_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    UserIndex;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSEpicAccountId                                   ReturnValue;                                             // 0x000C(0x0021)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.GetBool
	 */
	struct UEOSCoreLibrary_GetBool_Params
	{
	public:
		struct FEOSSessionSetting                                  Settings;                                                // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.FromUnixTimestamp
	 */
	struct UEOSCoreLibrary_FromUnixTimestamp_Params
	{
	public:
		class FString                                              Timestamp;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDateTime                                           ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.EOSProductUserIdToString
	 */
	struct UEOSCoreLibrary_EOSProductUserIdToString_Params
	{
	public:
		struct FEOSProductUserId                                   ID;                                                      // 0x0000(0x0021)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6HVA[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              String;                                                  // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.EOSProductUserIdIsValidPure
	 */
	struct UEOSCoreLibrary_EOSProductUserIdIsValidPure_Params
	{
	public:
		struct FEOSProductUserId                                   ID;                                                      // 0x0000(0x0021)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.EOSProductUserIdIsValid
	 */
	struct UEOSCoreLibrary_EOSProductUserIdIsValid_Params
	{
	public:
		struct FEOSProductUserId                                   ID;                                                      // 0x0000(0x0021)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.EOSProductUserIdFromString
	 */
	struct UEOSCoreLibrary_EOSProductUserIdFromString_Params
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSProductUserId                                   ReturnValue;                                             // 0x0010(0x0021)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.EOSPlatformSetNetworkStatus
	 */
	struct UEOSCoreLibrary_EOSPlatformSetNetworkStatus_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSENetworkStatus                                          NewStatus;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.EOSPlatformSetApplicationStatus
	 */
	struct UEOSCoreLibrary_EOSPlatformSetApplicationStatus_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSEApplicationStatus                                      NewStatus;                                               // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.EOSPlatformGetNetworkStatus
	 */
	struct UEOSCoreLibrary_EOSPlatformGetNetworkStatus_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSENetworkStatus                                          ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.EOSPlatformGetDesktopCrossplayStatus
	 */
	struct UEOSCoreLibrary_EOSPlatformGetDesktopCrossplayStatus_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSPlatformGetDesktopCrossplayStatusOptions        Options;                                                 // 0x0008(0x0021)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IC3A[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEOSPlatformGetDesktopCrossplayStatusInfo           OutDesktopCrossplayStatusInfo;                           // 0x002C(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0034(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.EOSPlatformGetApplicationStatus
	 */
	struct UEOSCoreLibrary_EOSPlatformGetApplicationStatus_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSEApplicationStatus                                      ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.EOSEResultToString
	 */
	struct UEOSCoreLibrary_EOSEResultToString_Params
	{
	public:
		EOSResult                                                  Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XWPF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.EOSEResultIsOperationComplete
	 */
	struct UEOSCoreLibrary_EOSEResultIsOperationComplete_Params
	{
	public:
		EOSResult                                                  Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.EOSEpicAccountIdToString
	 */
	struct UEOSCoreLibrary_EOSEpicAccountIdToString_Params
	{
	public:
		struct FEOSEpicAccountId                                   ID;                                                      // 0x0000(0x0021)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LJRH[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              String;                                                  // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.EOSEpicAccountIdIsValidPure
	 */
	struct UEOSCoreLibrary_EOSEpicAccountIdIsValidPure_Params
	{
	public:
		struct FEOSEpicAccountId                                   ID;                                                      // 0x0000(0x0021)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.EOSEpicAccountIdIsValid
	 */
	struct UEOSCoreLibrary_EOSEpicAccountIdIsValid_Params
	{
	public:
		struct FEOSEpicAccountId                                   ID;                                                      // 0x0000(0x0021)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.EOSEpicAccountIdFromString
	 */
	struct UEOSCoreLibrary_EOSEpicAccountIdFromString_Params
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSEpicAccountId                                   ReturnValue;                                             // 0x0010(0x0021)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.EOSContinuanceTokenToString
	 */
	struct UEOSCoreLibrary_EOSContinuanceTokenToString_Params
	{
	public:
		struct FContinuanceToken                                   ID;                                                      // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              String;                                                  // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.EOSByteArrayToString
	 */
	struct UEOSCoreLibrary_EOSByteArrayToString_Params
	{
	public:
		TArray<unsigned char>                                      Array;                                                   // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    Length;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7BPB[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              String;                                                  // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.EOS_Success
	 */
	struct UEOSCoreLibrary_EOS_Success_Params
	{
	public:
		EOSResult                                                  status;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESuccessFail                                               Result;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.EOS_Initialized
	 */
	struct UEOSCoreLibrary_EOS_Initialized_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.CoreStringToByte
	 */
	struct UEOSCoreLibrary_CoreStringToByte_Params
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<unsigned char>                                      ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.CoreBytesToString
	 */
	struct UEOSCoreLibrary_CoreBytesToString_Params
	{
	public:
		TArray<unsigned char>                                      Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLibrary.BreakUIEventIdStruct
	 */
	struct UEOSCoreLibrary_BreakUIEventIdStruct_Params
	{
	public:
		struct FEOSUIEventId                                       eventId;                                                 // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              outEventId;                                              // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreCustomInvites.GetCustomInvites
	 */
	struct UCoreCustomInvites_GetCustomInvites_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCoreCustomInvites*                                  ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreCustomInvites.EOSCustomInvitesSetCustomInvite
	 */
	struct UCoreCustomInvites_EOSCustomInvitesSetCustomInvite_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSCustomInvitesSetCustomInviteOptions             Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreCustomInvites.EOSCustomInvitesSendCustomInvite
	 */
	struct UCoreCustomInvites_EOSCustomInvitesSendCustomInvite_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSCustomInvitesSendCustomInviteOptions            Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreCustomInvites.EOSCustomInvitesRemoveNotifyCustomInviteRejected
	 */
	struct UCoreCustomInvites_EOSCustomInvitesRemoveNotifyCustomInviteRejected_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  ID;                                                      // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreCustomInvites.EOSCustomInvitesRemoveNotifyCustomInviteReceived
	 */
	struct UCoreCustomInvites_EOSCustomInvitesRemoveNotifyCustomInviteReceived_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  ID;                                                      // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreCustomInvites.EOSCustomInvitesRemoveNotifyCustomInviteAccepted
	 */
	struct UCoreCustomInvites_EOSCustomInvitesRemoveNotifyCustomInviteAccepted_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  ID;                                                      // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreCustomInvites.EOSCustomInvitesFinalizeInvite
	 */
	struct UCoreCustomInvites_EOSCustomInvitesFinalizeInvite_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSCustomInvitesFinalizeInviteOptions              Options;                                                 // 0x0008(0x0060)  (Parm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreCustomInvites.EOSCustomInvitesAddNotifyCustomInviteRejected
	 */
	struct UCoreCustomInvites_EOSCustomInvitesAddNotifyCustomInviteRejected_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSCustomInvitesAddNotifyCustomInviteRejectedOptions Options;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IRRD[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Callback;                                                // 0x000C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7EXW[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEOSNotificationId                                  ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreCustomInvites.EOSCustomInvitesAddNotifyCustomInviteReceived
	 */
	struct UCoreCustomInvites_EOSCustomInvitesAddNotifyCustomInviteReceived_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSCustomInvitesAddNotifyCustomInviteReceivedOptions Options;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_95VZ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Callback;                                                // 0x000C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3E86[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEOSNotificationId                                  ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreCustomInvites.EOSCustomInvitesAddNotifyCustomInviteAccepted
	 */
	struct UCoreCustomInvites_EOSCustomInvitesAddNotifyCustomInviteAccepted_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreEcom.GetEcom
	 */
	struct UCoreEcom_GetEcom_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCoreEcom*                                           ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreEcom.EOSEcomTransaction_GetTransactionId
	 */
	struct UCoreEcom_EOSEcomTransaction_GetTransactionId_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSEcomHTransaction                                Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OutTransactionId;                                        // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreEcom.EOSEcomTransaction_GetEntitlementsCount
	 */
	struct UCoreEcom_EOSEcomTransaction_GetEntitlementsCount_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSEcomHTransaction                                Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSEcomTransactionGetEntitlementsCountOptions      Options;                                                 // 0x0010(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0038(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreEcom.EOSEcomTransaction_CopyEntitlementByIndex
	 */
	struct UCoreEcom_EOSEcomTransaction_CopyEntitlementByIndex_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSEcomHTransaction                                Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSEcomTransactionCopyEntitlementByIndexOptions    Options;                                                 // 0x0010(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSEcomEntitlement                                 OutEntitlement;                                          // 0x0018(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreEcom.EOSEcomRedeemEntitlements
	 */
	struct UCoreEcom_EOSEcomRedeemEntitlements_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSEcomRedeemEntitlementsOptions                   Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreEcom.EOSEcomQueryOwnershipToken
	 */
	struct UCoreEcom_EOSEcomQueryOwnershipToken_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSEcomQueryOwnershipTokenOptions                  Options;                                                 // 0x0008(0x0050)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0058(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreEcom.EOSEcomQueryOwnership
	 */
	struct UCoreEcom_EOSEcomQueryOwnership_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSEcomQueryOwnershipOptions                       Options;                                                 // 0x0008(0x0048)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0050(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreEcom.EOSEcomQueryOffers
	 */
	struct UCoreEcom_EOSEcomQueryOffers_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSEcomQueryOffersOptions                          Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreEcom.EOSEcomQueryEntitlements
	 */
	struct UCoreEcom_EOSEcomQueryEntitlements_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSEcomQueryEntitlementsOptions                    Options;                                                 // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreEcom.EOSEcomGetTransactionCount
	 */
	struct UCoreEcom_EOSEcomGetTransactionCount_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSEcomGetTransactionCountOptions                  Options;                                                 // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreEcom.EOSEcomGetOfferItemCount
	 */
	struct UCoreEcom_EOSEcomGetOfferItemCount_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSEcomGetOfferItemCountOptions                    Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0040(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreEcom.EOSEcomGetOfferImageInfoCount
	 */
	struct UCoreEcom_EOSEcomGetOfferImageInfoCount_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSEcomGetOfferImageInfoCountOptions               Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0040(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreEcom.EOSEcomGetOfferCount
	 */
	struct UCoreEcom_EOSEcomGetOfferCount_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSEcomGetOfferCountOptions                        Options;                                                 // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreEcom.EOSEcomGetItemReleaseCount
	 */
	struct UCoreEcom_EOSEcomGetItemReleaseCount_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSEcomGetItemReleaseCountOptions                  Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0040(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreEcom.EOSEcomGetItemImageInfoCount
	 */
	struct UCoreEcom_EOSEcomGetItemImageInfoCount_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSEcomGetItemImageInfoCountOptions                Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0040(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreEcom.EOSEcomGetEntitlementsCount
	 */
	struct UCoreEcom_EOSEcomGetEntitlementsCount_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSEcomGetEntitlementsCountOptions                 Options;                                                 // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreEcom.EOSEcomGetEntitlementsByNameCount
	 */
	struct UCoreEcom_EOSEcomGetEntitlementsByNameCount_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSEcomGetEntitlementsByNameCountOptions           Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0040(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreEcom.EOSEcomCopyTransactionByIndex
	 */
	struct UCoreEcom_EOSEcomCopyTransactionByIndex_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSEcomCopyTransactionByIndexOptions               Options;                                                 // 0x0008(0x002C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ESUF[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEOSEcomHTransaction                                OutTransaction;                                          // 0x0038(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreEcom.EOSEcomCopyTransactionById
	 */
	struct UCoreEcom_EOSEcomCopyTransactionById_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSEcomCopyTransactionByIdOptions                  Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		struct FEOSEcomHTransaction                                OutTransaction;                                          // 0x0040(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreEcom.EOSEcomCopyOfferItemByIndex
	 */
	struct UCoreEcom_EOSEcomCopyOfferItemByIndex_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSEcomCopyOfferItemByIndexOptions                 Options;                                                 // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FEOSEcomCatalogItem                                 OutItem;                                                 // 0x0048(0x00A0)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x00E8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreEcom.EOSEcomCopyOfferImageInfoByIndex
	 */
	struct UCoreEcom_EOSEcomCopyOfferImageInfoByIndex_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSEcomCopyOfferImageInfoByIndexOptions            Options;                                                 // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FEOSEcomKeyImageInfo                                OutImageInfo;                                            // 0x0048(0x0030)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0078(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreEcom.EOSEcomCopyOfferByIndex
	 */
	struct UCoreEcom_EOSEcomCopyOfferByIndex_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSEcomCopyOfferByIndexOptions                     Options;                                                 // 0x0008(0x002C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CGFF[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEOSEcomCatalogOffer                                OutOffer;                                                // 0x0038(0x00B8)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x00F0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreEcom.EOSEcomCopyOfferById
	 */
	struct UCoreEcom_EOSEcomCopyOfferById_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSEcomCopyOfferByIdOptions                        Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		struct FEOSEcomCatalogOffer                                OutOffer;                                                // 0x0040(0x00B8)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x00F8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreEcom.EOSEcomCopyItemReleaseByIndex
	 */
	struct UCoreEcom_EOSEcomCopyItemReleaseByIndex_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSEcomCopyItemReleaseByIndexOptions               Options;                                                 // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FEOSEcomCatalogRelease                              OutRelease;                                              // 0x0048(0x0040)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0088(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreEcom.EOSEcomCopyItemImageInfoByIndex
	 */
	struct UCoreEcom_EOSEcomCopyItemImageInfoByIndex_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSEcomCopyItemImageInfoByIndexOptions             Options;                                                 // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FEOSEcomKeyImageInfo                                OutImageInfo;                                            // 0x0048(0x0030)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0078(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreEcom.EOSEcomCopyItemById
	 */
	struct UCoreEcom_EOSEcomCopyItemById_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSEcomCopyItemByIdOptions                         Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		struct FEOSEcomCatalogItem                                 OutItem;                                                 // 0x0040(0x00A0)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x00E0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreEcom.EOSEcomCopyEntitlementByNameAndIndex
	 */
	struct UCoreEcom_EOSEcomCopyEntitlementByNameAndIndex_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSEcomCopyEntitlementByNameAndIndexOptions        Options;                                                 // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FEOSEcomEntitlement                                 OutEntitlement;                                          // 0x0048(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0098(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreEcom.EOSEcomCopyEntitlementByIndex
	 */
	struct UCoreEcom_EOSEcomCopyEntitlementByIndex_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSEcomCopyEntitlementByIndexOptions               Options;                                                 // 0x0008(0x002C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_X02J[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEOSEcomEntitlement                                 OutEntitlement;                                          // 0x0038(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0088(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreEcom.EOSEcomCopyEntitlementById
	 */
	struct UCoreEcom_EOSEcomCopyEntitlementById_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSEcomCopyEntitlementByIdOptions                  Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		struct FEOSEcomEntitlement                                 OutEntitlement;                                          // 0x0040(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreEcom.EOSEcomCheckout
	 */
	struct UCoreEcom_EOSEcomCheckout_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSEcomCheckoutOptions                             Options;                                                 // 0x0008(0x0048)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0050(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreEcomQueryOwnership.HandleCallback
	 */
	struct UEOSCoreEcomQueryOwnership_HandleCallback_Params
	{
	public:
		struct FEOSEcomQueryOwnershipCallbackInfo                  Data;                                                    // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreEcomQueryOwnership.EOSEcomQueryOwnershipAsync
	 */
	struct UEOSCoreEcomQueryOwnership_EOSEcomQueryOwnershipAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSEcomQueryOwnershipOptions                       Options;                                                 // 0x0008(0x0048)  (Parm, NativeAccessSpecifierPublic)
		class UEOSCoreEcomQueryOwnership*                          ReturnValue;                                             // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreEcomQueryOwnershipToken.HandleCallback
	 */
	struct UEOSCoreEcomQueryOwnershipToken_HandleCallback_Params
	{
	public:
		struct FEOSEcomQueryOwnershipTokenCallbackInfo             Data;                                                    // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0048(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreEcomQueryOwnershipToken.EOSEcomQueryOwnershipTokenAsync
	 */
	struct UEOSCoreEcomQueryOwnershipToken_EOSEcomQueryOwnershipTokenAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSEcomQueryOwnershipTokenOptions                  Options;                                                 // 0x0008(0x0050)  (Parm, NativeAccessSpecifierPublic)
		class UEOSCoreEcomQueryOwnershipToken*                     ReturnValue;                                             // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreEcomQueryEntitlements.HandleCallback
	 */
	struct UEOSCoreEcomQueryEntitlements_HandleCallback_Params
	{
	public:
		struct FEOSEcomQueryEntitlementsCallbackInfo               Data;                                                    // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreEcomQueryEntitlements.EOSEcomQueryEntitlementsAsync
	 */
	struct UEOSCoreEcomQueryEntitlements_EOSEcomQueryEntitlementsAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSEcomQueryEntitlementsOptions                    Options;                                                 // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
		class UEOSCoreEcomQueryEntitlements*                       ReturnValue;                                             // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreEcomQueryOffers.HandleCallback
	 */
	struct UEOSCoreEcomQueryOffers_HandleCallback_Params
	{
	public:
		struct FEOSEcomQueryOffersCallbackInfo                     Data;                                                    // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreEcomQueryOffers.EOSEcomQueryOffersAsync
	 */
	struct UEOSCoreEcomQueryOffers_EOSEcomQueryOffersAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSEcomQueryOffersOptions                          Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		class UEOSCoreEcomQueryOffers*                             ReturnValue;                                             // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreEcomCheckout.HandleCallback
	 */
	struct UEOSCoreEcomCheckout_HandleCallback_Params
	{
	public:
		struct FEOSEcomCheckoutCallbackInfo                        Data;                                                    // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0048(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreEcomCheckout.EOSEcomCheckoutAsync
	 */
	struct UEOSCoreEcomCheckout_EOSEcomCheckoutAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSEcomCheckoutOptions                             Options;                                                 // 0x0008(0x0048)  (Parm, NativeAccessSpecifierPublic)
		class UEOSCoreEcomCheckout*                                ReturnValue;                                             // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreEcomRedeemEntitlements.HandleCallback
	 */
	struct UEOSCoreEcomRedeemEntitlements_HandleCallback_Params
	{
	public:
		struct FEOSEcomRedeemEntitlementsCallbackInfo              Data;                                                    // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreEcomRedeemEntitlements.EOSEcomRedeemEntitlementsAsync
	 */
	struct UEOSCoreEcomRedeemEntitlements_EOSEcomRedeemEntitlementsAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSEcomRedeemEntitlementsOptions                   Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		class UEOSCoreEcomRedeemEntitlements*                      ReturnValue;                                             // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreFriends.GetFriends
	 */
	struct UCoreFriends_GetFriends_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCoreFriends*                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreFriends.EOSFriendsSendInvite
	 */
	struct UCoreFriends_EOSFriendsSendInvite_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSFriendsSendInviteOptions                        Options;                                                 // 0x0008(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0050(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreFriends.EOSFriendsRemoveNotifyFriendsUpdate
	 */
	struct UCoreFriends_EOSFriendsRemoveNotifyFriendsUpdate_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  ID;                                                      // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreFriends.EOSFriendsRejectInvite
	 */
	struct UCoreFriends_EOSFriendsRejectInvite_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSFriendsRejectInviteOptions                      Options;                                                 // 0x0008(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0050(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreFriends.EOSFriendsQueryFriends
	 */
	struct UCoreFriends_EOSFriendsQueryFriends_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSFriendsQueryFriendsOptions                      Options;                                                 // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreFriends.EOSFriendsGetStatus
	 */
	struct UCoreFriends_EOSFriendsGetStatus_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSFriendsGetStatusOptions                         Options;                                                 // 0x0008(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		EEOSEFriendsStatus                                         ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreFriends.EOSFriendsGetFriendsCount
	 */
	struct UCoreFriends_EOSFriendsGetFriendsCount_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSFriendsGetFriendsCountOptions                   Options;                                                 // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreFriends.EOSFriendsGetFriendAtIndex
	 */
	struct UCoreFriends_EOSFriendsGetFriendAtIndex_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSFriendsGetFriendAtIndexOptions                  Options;                                                 // 0x0008(0x002C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSEpicAccountId                                   ReturnValue;                                             // 0x0034(0x0021)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreFriends.EOSFriendsAddNotifyFriendsUpdate
	 */
	struct UCoreFriends_EOSFriendsAddNotifyFriendsUpdate_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreFriends.EOSFriendsAcceptInvite
	 */
	struct UCoreFriends_EOSFriendsAcceptInvite_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSFriendsAcceptInviteOptions                      Options;                                                 // 0x0008(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0050(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreFriendsQueryFriends.HandleCallback
	 */
	struct UEOSCoreFriendsQueryFriends_HandleCallback_Params
	{
	public:
		struct FEOSFriendsQueryFriendsCallbackInfo                 Data;                                                    // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreFriendsQueryFriends.EOSFriendsQueryFriendsAsync
	 */
	struct UEOSCoreFriendsQueryFriends_EOSFriendsQueryFriendsAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSFriendsQueryFriendsOptions                      Options;                                                 // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class UEOSCoreFriendsQueryFriends*                         ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreFriendsSendInvite.HandleCallback
	 */
	struct UEOSCoreFriendsSendInvite_HandleCallback_Params
	{
	public:
		struct FEOSFriendsSendInviteCallbackInfo                   Data;                                                    // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0058(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreFriendsSendInvite.EOSFriendsSendInviteAsync
	 */
	struct UEOSCoreFriendsSendInvite_EOSFriendsSendInviteAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSFriendsSendInviteOptions                        Options;                                                 // 0x0008(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class UEOSCoreFriendsSendInvite*                           ReturnValue;                                             // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreFriendsAcceptInvite.HandleCallback
	 */
	struct UEOSCoreFriendsAcceptInvite_HandleCallback_Params
	{
	public:
		struct FEOSFriendsAcceptInviteCallbackInfo                 Data;                                                    // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0058(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreFriendsAcceptInvite.EOSFriendsAcceptInviteAsync
	 */
	struct UEOSCoreFriendsAcceptInvite_EOSFriendsAcceptInviteAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSFriendsAcceptInviteOptions                      Options;                                                 // 0x0008(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class UEOSCoreFriendsAcceptInvite*                         ReturnValue;                                             // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreFriendsRejectInvite.HandleCallback
	 */
	struct UEOSCoreFriendsRejectInvite_HandleCallback_Params
	{
	public:
		struct FEOSFriendsRejectInviteCallbackInfo                 Data;                                                    // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0058(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreFriendsRejectInvite.EOSFriendsRejectInviteAsync
	 */
	struct UEOSCoreFriendsRejectInvite_EOSFriendsRejectInviteAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSFriendsRejectInviteOptions                      Options;                                                 // 0x0008(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class UEOSCoreFriendsRejectInvite*                         ReturnValue;                                             // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLeaderboards.GetLeaderboards
	 */
	struct UCoreLeaderboards_GetLeaderboards_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCoreLeaderboards*                                   ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLeaderboards.EOSLeaderboardsQueryLeaderboardUserScores
	 */
	struct UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardUserScores_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLeaderboardsQueryLeaderboardUserScoresOptions   Options;                                                 // 0x0008(0x0070)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0078(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLeaderboards.EOSLeaderboardsQueryLeaderboardRanks
	 */
	struct UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardRanks_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLeaderboardsQueryLeaderboardRanksOptions        Options;                                                 // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLeaderboards.EOSLeaderboardsQueryLeaderboardDefinitions
	 */
	struct UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardDefinitions_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLeaderboardsQueryLeaderboardDefinitionsOptions  Options;                                                 // 0x0008(0x0050)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0058(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLeaderboards.EOSLeaderboardsGetLeaderboardUserScoreCount
	 */
	struct UCoreLeaderboards_EOSLeaderboardsGetLeaderboardUserScoreCount_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLeaderboardsGetLeaderboardUserScoreCountOptions Options;                                                 // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLeaderboards.EOSLeaderboardsGetLeaderboardRecordCount
	 */
	struct UCoreLeaderboards_EOSLeaderboardsGetLeaderboardRecordCount_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLeaderboardsGetLeaderboardRecordCountOptions    Options;                                                 // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLeaderboards.EOSLeaderboardsGetLeaderboardDefinitionCount
	 */
	struct UCoreLeaderboards_EOSLeaderboardsGetLeaderboardDefinitionCount_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLeaderboardsGetLeaderboardDefinitionCountOptions Options;                                                 // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLeaderboards.EOSLeaderboardsCopyLeaderboardUserScoreByUserId
	 */
	struct UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardUserScoreByUserId_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLeaderboardsCopyLeaderboardUserScoreByUserIdOptions Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		struct FEOSLeaderboardsLeaderboardUserScore                OutLeaderboardUserScore;                                 // 0x0040(0x002C)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x006C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLeaderboards.EOSLeaderboardsCopyLeaderboardUserScoreByIndex
	 */
	struct UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardUserScoreByIndex_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLeaderboardsCopyLeaderboardUserScoreByIndexOptions Options;                                                 // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FEOSLeaderboardsLeaderboardUserScore                OutLeaderboardUserScore;                                 // 0x0020(0x002C)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x004C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLeaderboards.EOSLeaderboardsCopyLeaderboardRecordByUserId
	 */
	struct UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardRecordByUserId_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLeaderboardsCopyLeaderboardRecordByUserIdOptions Options;                                                 // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSLeaderboardsLeaderboardRecord                   OutLeaderboardRecord;                                    // 0x0030(0x0040)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLeaderboards.EOSLeaderboardsCopyLeaderboardRecordByIndex
	 */
	struct UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardRecordByIndex_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLeaderboardsCopyLeaderboardRecordByIndexOptions Options;                                                 // 0x0008(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSLeaderboardsLeaderboardRecord                   OutLeaderboardRecord;                                    // 0x0010(0x0040)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLeaderboards.EOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardId
	 */
	struct UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardId_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardIdOptions Options;                                                 // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FEOSLeaderboardsDefinition                          OutLeaderboardDefinition;                                // 0x0020(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLeaderboards.EOSLeaderboardsCopyLeaderboardDefinitionByIndex
	 */
	struct UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardDefinitionByIndex_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLeaderboardsCopyLeaderboardDefinitionByIndexOptions Options;                                                 // 0x0008(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSLeaderboardsDefinition                          OutLeaderboardDefinition;                                // 0x0010(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLeaderboardsQueryLeaderboardDefinitions.HandleCallback
	 */
	struct UEOSCoreLeaderboardsQueryLeaderboardDefinitions_HandleCallback_Params
	{
	public:
		struct FEOSLeaderboardsOnQueryLeaderboardDefinitionsCompleteCallbackInfo Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLeaderboardsQueryLeaderboardDefinitions.EOSLeaderboardsQueryLeaderboardDefinitionsAsync
	 */
	struct UEOSCoreLeaderboardsQueryLeaderboardDefinitions_EOSLeaderboardsQueryLeaderboardDefinitionsAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLeaderboardsQueryLeaderboardDefinitionsOptions  Options;                                                 // 0x0008(0x0050)  (Parm, NativeAccessSpecifierPublic)
		class UEOSCoreLeaderboardsQueryLeaderboardDefinitions*     ReturnValue;                                             // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLeaderboardsQueryLeaderboardRanks.HandleCallback
	 */
	struct UEOSCoreLeaderboardsQueryLeaderboardRanks_HandleCallback_Params
	{
	public:
		struct FEOSLeaderboardsOnQueryLeaderboardRanksCompleteCallbackInfo Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLeaderboardsQueryLeaderboardRanks.EOSLeaderboardsQueryLeaderboardRanksAsync
	 */
	struct UEOSCoreLeaderboardsQueryLeaderboardRanks_EOSLeaderboardsQueryLeaderboardRanksAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLeaderboardsQueryLeaderboardRanksOptions        Options;                                                 // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
		class UEOSCoreLeaderboardsQueryLeaderboardRanks*           ReturnValue;                                             // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLeaderboardsQueryLeaderboardUserScores.HandleCallback
	 */
	struct UEOSCoreLeaderboardsQueryLeaderboardUserScores_HandleCallback_Params
	{
	public:
		struct FEOSLeaderboardsOnQueryLeaderboardUserScoresCompleteCallbackInfo Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLeaderboardsQueryLeaderboardUserScores.EOSLeaderboardsQueryLeaderboardUserScoresAsync
	 */
	struct UEOSCoreLeaderboardsQueryLeaderboardUserScores_EOSLeaderboardsQueryLeaderboardUserScoresAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLeaderboardsQueryLeaderboardUserScoresOptions   Options;                                                 // 0x0008(0x0070)  (Parm, NativeAccessSpecifierPublic)
		class UEOSCoreLeaderboardsQueryLeaderboardUserScores*      ReturnValue;                                             // 0x0078(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.GetLobby
	 */
	struct UCoreLobby_GetLobby_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCoreLobby*                                          ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyUpdateLobbyModification
	 */
	struct UCoreLobby_EOSLobbyUpdateLobbyModification_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyUpdateLobbyModificationOptions             Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		struct FEOSHLobbyModification                              OutLobbyModificationHandle;                              // 0x0040(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyUpdateLobby
	 */
	struct UCoreLobby_EOSLobbyUpdateLobby_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyUpdateLobbyOptions                         Options;                                                 // 0x0008(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbySendInvite
	 */
	struct UCoreLobby_EOSLobbySendInvite_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbySendInviteOptions                          Options;                                                 // 0x0008(0x0058)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0060(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbySearchSetTargetUserId
	 */
	struct UCoreLobby_EOSLobbySearchSetTargetUserId_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHLobbySearch                                    Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbySearchSetTargetUserIdOptions               Options;                                                 // 0x0010(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbySearchSetParameterString
	 */
	struct UCoreLobby_EOSLobbySearchSetParameterString_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHLobbySearch                                    Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEOSEComparisonOp                                          ComparisonOp;                                            // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0031(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbySearchSetParameterInt64
	 */
	struct UCoreLobby_EOSLobbySearchSetParameterInt64_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHLobbySearch                                    Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEOSEComparisonOp                                          ComparisonOp;                                            // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0031(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbySearchSetParameterDouble
	 */
	struct UCoreLobby_EOSLobbySearchSetParameterDouble_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHLobbySearch                                    Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEOSEComparisonOp                                          ComparisonOp;                                            // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0031(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbySearchSetParameterBool
	 */
	struct UCoreLobby_EOSLobbySearchSetParameterBool_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHLobbySearch                                    Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bValue;                                                  // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEOSEComparisonOp                                          ComparisonOp;                                            // 0x0021(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0022(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbySearchSetMaxResults
	 */
	struct UCoreLobby_EOSLobbySearchSetMaxResults_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHLobbySearch                                    Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbySearchSetMaxResultsOptions                 Options;                                                 // 0x0010(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbySearchSetLobbyId
	 */
	struct UCoreLobby_EOSLobbySearchSetLobbyId_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHLobbySearch                                    Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbySearchSetLobbyIdOptions                    Options;                                                 // 0x0010(0x0010)  (Parm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbySearchRemoveParameter
	 */
	struct UCoreLobby_EOSLobbySearchRemoveParameter_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHLobbySearch                                    Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbySearchRemoveParameterOptions               Options;                                                 // 0x0010(0x0020)  (Parm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbySearchRelease
	 */
	struct UCoreLobby_EOSLobbySearchRelease_Params
	{
	public:
		struct FEOSHLobbySearch                                    LobbySearchHandle;                                       // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbySearchGetSearchResultCount
	 */
	struct UCoreLobby_EOSLobbySearchGetSearchResultCount_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHLobbySearch                                    Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbySearchGetSearchResultCountOptions          Options;                                                 // 0x0010(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbySearchFind
	 */
	struct UCoreLobby_EOSLobbySearchFind_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHLobbySearch                                    Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbySearchFindOptions                          Options;                                                 // 0x0010(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbySearchCopySearchResultByIndex
	 */
	struct UCoreLobby_EOSLobbySearchCopySearchResultByIndex_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHLobbySearch                                    Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbySearchCopySearchResultByIndexOptions       Options;                                                 // 0x0010(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSHLobbyDetails                                   OutLobbyDetailsHandle;                                   // 0x0018(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyRemoveNotifySendLobbyNativeInviteRequested
	 */
	struct UCoreLobby_EOSLobbyRemoveNotifySendLobbyNativeInviteRequested_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  ID;                                                      // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyRemoveNotifyRTCRoomConnectionChanged
	 */
	struct UCoreLobby_EOSLobbyRemoveNotifyRTCRoomConnectionChanged_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  ID;                                                      // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyRemoveNotifyLobbyUpdateReceived
	 */
	struct UCoreLobby_EOSLobbyRemoveNotifyLobbyUpdateReceived_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  ID;                                                      // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyRemoveNotifyLobbyMemberUpdateReceived
	 */
	struct UCoreLobby_EOSLobbyRemoveNotifyLobbyMemberUpdateReceived_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  ID;                                                      // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyRemoveNotifyLobbyMemberStatusReceived
	 */
	struct UCoreLobby_EOSLobbyRemoveNotifyLobbyMemberStatusReceived_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  ID;                                                      // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyRemoveNotifyLobbyInviteRejected
	 */
	struct UCoreLobby_EOSLobbyRemoveNotifyLobbyInviteRejected_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  ID;                                                      // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyRemoveNotifyLobbyInviteReceived
	 */
	struct UCoreLobby_EOSLobbyRemoveNotifyLobbyInviteReceived_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  ID;                                                      // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyRemoveNotifyLobbyInviteAccepted
	 */
	struct UCoreLobby_EOSLobbyRemoveNotifyLobbyInviteAccepted_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  ID;                                                      // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyRemoveNotifyJoinLobbyAccepted
	 */
	struct UCoreLobby_EOSLobbyRemoveNotifyJoinLobbyAccepted_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  ID;                                                      // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyRejectInvite
	 */
	struct UCoreLobby_EOSLobbyRejectInvite_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyRejectInviteOptions                        Options;                                                 // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyQueryInvites
	 */
	struct UCoreLobby_EOSLobbyQueryInvites_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyQueryInvitesOptions                        Options;                                                 // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyPromoteMember
	 */
	struct UCoreLobby_EOSLobbyPromoteMember_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyPromoteMemberOptions                       Options;                                                 // 0x0008(0x0058)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0060(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyModificationSetPermissionLevel
	 */
	struct UCoreLobby_EOSLobbyModificationSetPermissionLevel_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHLobbyModification                              Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyModificationSetPermissionLevelOptions      Options;                                                 // 0x0010(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyModificationSetMaxMembers
	 */
	struct UCoreLobby_EOSLobbyModificationSetMaxMembers_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHLobbyModification                              Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyModificationSetMaxMembersOptions           Options;                                                 // 0x0010(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyModificationSetInvitesAllowed
	 */
	struct UCoreLobby_EOSLobbyModificationSetInvitesAllowed_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHLobbyModification                              Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyModificationSetInvitesAllowedOptions       Options;                                                 // 0x0010(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyModificationSetBucketId
	 */
	struct UCoreLobby_EOSLobbyModificationSetBucketId_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHLobbyModification                              Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyModificationSetBucketIdOptions             Options;                                                 // 0x0010(0x0018)  (Parm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyModificationRemoveMemberAttribute
	 */
	struct UCoreLobby_EOSLobbyModificationRemoveMemberAttribute_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHLobbyModification                              Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyModificationRemoveMemberAttributeOptions   Options;                                                 // 0x0010(0x0018)  (Parm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyModificationRemoveAttribute
	 */
	struct UCoreLobby_EOSLobbyModificationRemoveAttribute_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHLobbyModification                              Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyModificationRemoveAttributeOptions         Options;                                                 // 0x0010(0x0018)  (Parm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyModificationRelease
	 */
	struct UCoreLobby_EOSLobbyModificationRelease_Params
	{
	public:
		struct FEOSHLobbyModification                              LobbyModificationHandle;                                 // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyModificationAddMemberAttributeString
	 */
	struct UCoreLobby_EOSLobbyModificationAddMemberAttributeString_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHLobbyModification                              Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEOSELobbyAttributeVisibility                              Visibility;                                              // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0031(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyModificationAddMemberAttributeInt64
	 */
	struct UCoreLobby_EOSLobbyModificationAddMemberAttributeInt64_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHLobbyModification                              Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEOSELobbyAttributeVisibility                              Visibility;                                              // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0031(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyModificationAddMemberAttributeDouble
	 */
	struct UCoreLobby_EOSLobbyModificationAddMemberAttributeDouble_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHLobbyModification                              Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEOSELobbyAttributeVisibility                              Visibility;                                              // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0031(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyModificationAddMemberAttributeBool
	 */
	struct UCoreLobby_EOSLobbyModificationAddMemberAttributeBool_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHLobbyModification                              Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bValue;                                                  // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEOSELobbyAttributeVisibility                              Visibility;                                              // 0x0021(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0022(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyModificationAddAttributeString
	 */
	struct UCoreLobby_EOSLobbyModificationAddAttributeString_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHLobbyModification                              Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEOSELobbyAttributeVisibility                              Visibility;                                              // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0031(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyModificationAddAttributeInt64
	 */
	struct UCoreLobby_EOSLobbyModificationAddAttributeInt64_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHLobbyModification                              Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEOSELobbyAttributeVisibility                              Visibility;                                              // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0031(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyModificationAddAttributeDouble
	 */
	struct UCoreLobby_EOSLobbyModificationAddAttributeDouble_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHLobbyModification                              Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEOSELobbyAttributeVisibility                              Visibility;                                              // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0031(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyModificationAddAttributeBool
	 */
	struct UCoreLobby_EOSLobbyModificationAddAttributeBool_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHLobbyModification                              Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bValue;                                                  // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEOSELobbyAttributeVisibility                              Visibility;                                              // 0x0021(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0022(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyModificationAddAttribute
	 */
	struct UCoreLobby_EOSLobbyModificationAddAttribute_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHLobbyModification                              Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyModificationAddAttributeOptions            Options;                                                 // 0x0010(0x0038)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyLeaveLobby
	 */
	struct UCoreLobby_EOSLobbyLeaveLobby_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyLeaveLobbyOptions                          Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyKickMember
	 */
	struct UCoreLobby_EOSLobbyKickMember_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyKickMemberOptions                          Options;                                                 // 0x0008(0x0058)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0060(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyJoinLobbyById
	 */
	struct UCoreLobby_EOSLobbyJoinLobbyById_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyJoinLobbyByIdOptions                       Options;                                                 // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyJoinLobby
	 */
	struct UCoreLobby_EOSLobbyJoinLobby_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyJoinLobbyOptions                           Options;                                                 // 0x0008(0x0038)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyIsRTCRoomConnected
	 */
	struct UCoreLobby_EOSLobbyIsRTCRoomConnected_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyIsRTCRoomConnectedOptions                  Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       bOutIsConnected;                                         // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0041(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyHardMuteMember
	 */
	struct UCoreLobby_EOSLobbyHardMuteMember_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyHardMuteMemberOptions                      Options;                                                 // 0x0008(0x0058)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0060(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyGetRTCRoomName
	 */
	struct UCoreLobby_EOSLobbyGetRTCRoomName_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyGetRTCRoomNameOptions                      Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              OutBuffer;                                               // 0x0040(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InOutBufferLength;                                       // 0x0050(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0054(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyGetInviteIdByIndex
	 */
	struct UCoreLobby_EOSLobbyGetInviteIdByIndex_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyGetInviteIdByIndexOptions                  Options;                                                 // 0x0008(0x002C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WU8M[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              OutInviteId;                                             // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyGetInviteCount
	 */
	struct UCoreLobby_EOSLobbyGetInviteCount_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyGetInviteCountOptions                      Options;                                                 // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyDetailsRelease
	 */
	struct UCoreLobby_EOSLobbyDetailsRelease_Params
	{
	public:
		struct FEOSHLobbyDetails                                   LobbyHandle;                                             // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyDetailsGetMemberCount
	 */
	struct UCoreLobby_EOSLobbyDetailsGetMemberCount_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHLobbyDetails                                   Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyDetailsGetMemberCountOptions               Options;                                                 // 0x0010(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyDetailsGetMemberByIndex
	 */
	struct UCoreLobby_EOSLobbyDetailsGetMemberByIndex_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHLobbyDetails                                   Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyDetailsGetMemberByIndexOptions             Options;                                                 // 0x0010(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSProductUserId                                   ReturnValue;                                             // 0x0018(0x0021)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyDetailsGetMemberAttributeCount
	 */
	struct UCoreLobby_EOSLobbyDetailsGetMemberAttributeCount_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHLobbyDetails                                   Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyDetailsGetMemberAttributeCountOptions      Options;                                                 // 0x0010(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0038(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyDetailsGetLobbyOwner
	 */
	struct UCoreLobby_EOSLobbyDetailsGetLobbyOwner_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHLobbyDetails                                   Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyDetailsGetLobbyOwnerOptions                Options;                                                 // 0x0010(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSProductUserId                                   ReturnValue;                                             // 0x0014(0x0021)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyDetailsGetAttributeCount
	 */
	struct UCoreLobby_EOSLobbyDetailsGetAttributeCount_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHLobbyDetails                                   Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyDetailsGetAttributeCountOptions            Options;                                                 // 0x0010(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyDetailsCopyMemberAttributeByKey
	 */
	struct UCoreLobby_EOSLobbyDetailsCopyMemberAttributeByKey_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHLobbyDetails                                   Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyDetailsCopyMemberAttributeByKeyOptions     Options;                                                 // 0x0010(0x0038)  (Parm, NativeAccessSpecifierPublic)
		struct FEOSLobbyAttribute                                  OutAttribute;                                            // 0x0048(0x0038)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0080(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyDetailsCopyMemberAttributeByIndex
	 */
	struct UCoreLobby_EOSLobbyDetailsCopyMemberAttributeByIndex_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHLobbyDetails                                   Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyDetailsCopyMemberAttributeByIndexOptions   Options;                                                 // 0x0010(0x002C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_S8G2[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEOSLobbyAttribute                                  OutAttribute;                                            // 0x0040(0x0038)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0078(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyDetailsCopyInfo
	 */
	struct UCoreLobby_EOSLobbyDetailsCopyInfo_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHLobbyDetails                                   Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyDetailsCopyInfoOptions                     Options;                                                 // 0x0010(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QM5K[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEOSLobbyDetailsInfo                                OutLobbyDetailsInfo;                                     // 0x0018(0x0058)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyDetailsCopyAttributeByKey
	 */
	struct UCoreLobby_EOSLobbyDetailsCopyAttributeByKey_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHLobbyDetails                                   Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyDetailsCopyAttributeByKeyOptions           Options;                                                 // 0x0010(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FEOSLobbyAttribute                                  OutAttribute;                                            // 0x0028(0x0038)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyDetailsCopyAttributeByIndex
	 */
	struct UCoreLobby_EOSLobbyDetailsCopyAttributeByIndex_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHLobbyDetails                                   Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyDetailsCopyAttributeByIndexOptions         Options;                                                 // 0x0010(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSLobbyAttribute                                  OutAttribute;                                            // 0x0018(0x0038)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyDestroyLobby
	 */
	struct UCoreLobby_EOSLobbyDestroyLobby_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyDestroyLobbyOptions                        Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyCreateLobbySearch
	 */
	struct UCoreLobby_EOSLobbyCreateLobbySearch_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyCreateLobbySearchOptions                   Options;                                                 // 0x0008(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSHLobbySearch                                    outLobbySearchHandle;                                    // 0x0010(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyCreateLobby
	 */
	struct UCoreLobby_EOSLobbyCreateLobby_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyCreateLobbyOptions                         Options;                                                 // 0x0008(0x0068)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0070(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyCopyLobbyDetailsHandleByUiEventId
	 */
	struct UCoreLobby_EOSLobbyCopyLobbyDetailsHandleByUiEventId_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyCopyLobbyDetailsHandleByUiEventIdOptions   Options;                                                 // 0x0008(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSHLobbyDetails                                   OutLobbyDetailsHandle;                                   // 0x0010(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyCopyLobbyDetailsHandleByInviteId
	 */
	struct UCoreLobby_EOSLobbyCopyLobbyDetailsHandleByInviteId_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyCopyLobbyDetailsHandleByInviteIdOptions    Options;                                                 // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FEOSHLobbyDetails                                   OutLobbyDetailsHandle;                                   // 0x0020(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyCopyLobbyDetailsHandle
	 */
	struct UCoreLobby_EOSLobbyCopyLobbyDetailsHandle_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyCopyLobbyDetailsHandleOptions              Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		struct FEOSHLobbyDetails                                   OutLobbyDetailsHandle;                                   // 0x0040(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyAddNotifySendLobbyNativeInviteRequested
	 */
	struct UCoreLobby_EOSLobbyAddNotifySendLobbyNativeInviteRequested_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyAddNotifySendLobbyNativeInviteRequestedOptions Options;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4911[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Callback;                                                // 0x000C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KV5T[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEOSNotificationId                                  ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyAddNotifyRTCRoomConnectionChanged
	 */
	struct UCoreLobby_EOSLobbyAddNotifyRTCRoomConnectionChanged_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyAddNotifyRTCRoomConnectionChangedOptions   Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  ReturnValue;                                             // 0x0050(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyAddNotifyLobbyUpdateReceived
	 */
	struct UCoreLobby_EOSLobbyAddNotifyLobbyUpdateReceived_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyAddNotifyLobbyMemberUpdateReceived
	 */
	struct UCoreLobby_EOSLobbyAddNotifyLobbyMemberUpdateReceived_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyAddNotifyLobbyMemberStatusReceived
	 */
	struct UCoreLobby_EOSLobbyAddNotifyLobbyMemberStatusReceived_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyAddNotifyLobbyInviteRejected
	 */
	struct UCoreLobby_EOSLobbyAddNotifyLobbyInviteRejected_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyAddNotifyLobbyInviteRejectedOptions        Options;                                                 // 0x0008(0x0001)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AFPS[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Callback;                                                // 0x000C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KQVX[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEOSNotificationId                                  ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyAddNotifyLobbyInviteReceived
	 */
	struct UCoreLobby_EOSLobbyAddNotifyLobbyInviteReceived_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyAddNotifyLobbyInviteAccepted
	 */
	struct UCoreLobby_EOSLobbyAddNotifyLobbyInviteAccepted_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyAddNotifyLobbyInviteAcceptedOptions        Options;                                                 // 0x0008(0x0001)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_G678[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Callback;                                                // 0x000C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_38NG[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEOSNotificationId                                  ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreLobby.EOSLobbyAddNotifyJoinLobbyAccepted
	 */
	struct UCoreLobby_EOSLobbyAddNotifyJoinLobbyAccepted_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyAddNotifyJoinLobbyAcceptedOptions          Options;                                                 // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x000C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6M3O[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEOSNotificationId                                  ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLobbyCreateLobby.HandleCallback
	 */
	struct UEOSCoreLobbyCreateLobby_HandleCallback_Params
	{
	public:
		struct FEOSLobbyCreateLobbyCallbackInfo                    Data;                                                    // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLobbyCreateLobby.EOSLobbyCreateLobbyAsync
	 */
	struct UEOSCoreLobbyCreateLobby_EOSLobbyCreateLobbyAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyCreateLobbyOptions                         Options;                                                 // 0x0008(0x0068)  (Parm, NativeAccessSpecifierPublic)
		class UEOSCoreLobbyCreateLobby*                            ReturnValue;                                             // 0x0070(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLobbyDestroyLobby.HandleCallback
	 */
	struct UEOSCoreLobbyDestroyLobby_HandleCallback_Params
	{
	public:
		struct FEOSLobbyDestroyLobbyCallbackInfo                   Data;                                                    // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLobbyDestroyLobby.EOSLobbyDestroyLobbyAsync
	 */
	struct UEOSCoreLobbyDestroyLobby_EOSLobbyDestroyLobbyAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyDestroyLobbyOptions                        Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		class UEOSCoreLobbyDestroyLobby*                           ReturnValue;                                             // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLobbyJoinLobby.HandleCallback
	 */
	struct UEOSCoreLobbyJoinLobby_HandleCallback_Params
	{
	public:
		struct FEOSLobbyJoinLobbyCallbackInfo                      Data;                                                    // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLobbyJoinLobby.EOSLobbyJoinLobbyAsync
	 */
	struct UEOSCoreLobbyJoinLobby_EOSLobbyJoinLobbyAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyJoinLobbyOptions                           Options;                                                 // 0x0008(0x0038)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class UEOSCoreLobbyJoinLobby*                              ReturnValue;                                             // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLobbyLeaveLobby.HandleCallback
	 */
	struct UEOSCoreLobbyLeaveLobby_HandleCallback_Params
	{
	public:
		struct FEOSLobbyLeaveLobbyCallbackInfo                     Data;                                                    // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLobbyLeaveLobby.EOSLobbyLeaveLobbyAsync
	 */
	struct UEOSCoreLobbyLeaveLobby_EOSLobbyLeaveLobbyAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyLeaveLobbyOptions                          Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		class UEOSCoreLobbyLeaveLobby*                             ReturnValue;                                             // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLobbyUpdateLobby.HandleCallback
	 */
	struct UEOSCoreLobbyUpdateLobby_HandleCallback_Params
	{
	public:
		struct FEOSLobbyUpdateLobbyCallbackInfo                    Data;                                                    // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLobbyUpdateLobby.EOSLobbyUpdateLobbyAsync
	 */
	struct UEOSCoreLobbyUpdateLobby_EOSLobbyUpdateLobbyAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyUpdateLobbyOptions                         Options;                                                 // 0x0008(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class UEOSCoreLobbyUpdateLobby*                            ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLobbyPromoteMember.HandleCallback
	 */
	struct UEOSCoreLobbyPromoteMember_HandleCallback_Params
	{
	public:
		struct FEOSLobbyPromoteMemberCallbackInfo                  Data;                                                    // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLobbyPromoteMember.EOSLobbyPromoteMemberAsync
	 */
	struct UEOSCoreLobbyPromoteMember_EOSLobbyPromoteMemberAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyPromoteMemberOptions                       Options;                                                 // 0x0008(0x0058)  (Parm, NativeAccessSpecifierPublic)
		class UEOSCoreLobbyPromoteMember*                          ReturnValue;                                             // 0x0060(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLobbyKickMember.HandleCallback
	 */
	struct UEOSCoreLobbyKickMember_HandleCallback_Params
	{
	public:
		struct FEOSLobbyKickMemberCallbackInfo                     Data;                                                    // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLobbyKickMember.EOSLobbyKickMemberAsync
	 */
	struct UEOSCoreLobbyKickMember_EOSLobbyKickMemberAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyKickMemberOptions                          Options;                                                 // 0x0008(0x0058)  (Parm, NativeAccessSpecifierPublic)
		class UEOSCoreLobbyKickMember*                             ReturnValue;                                             // 0x0060(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLobbySendInvite.HandleCallback
	 */
	struct UEOSCoreLobbySendInvite_HandleCallback_Params
	{
	public:
		struct FEOSLobbySendInviteCallbackInfo                     Data;                                                    // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLobbySendInvite.EOSLobbySendInviteAsync
	 */
	struct UEOSCoreLobbySendInvite_EOSLobbySendInviteAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbySendInviteOptions                          Options;                                                 // 0x0008(0x0058)  (Parm, NativeAccessSpecifierPublic)
		class UEOSCoreLobbySendInvite*                             ReturnValue;                                             // 0x0060(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLobbyRejectInvite.HandleCallback
	 */
	struct UEOSCoreLobbyRejectInvite_HandleCallback_Params
	{
	public:
		struct FEOSLobbyRejectInviteCallbackInfo                   Data;                                                    // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLobbyRejectInvite.EOSLobbyRejectInviteAsync
	 */
	struct UEOSCoreLobbyRejectInvite_EOSLobbyRejectInviteAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyRejectInviteOptions                        Options;                                                 // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
		class UEOSCoreLobbyRejectInvite*                           ReturnValue;                                             // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLobbyQueryInvites.HandleCallback
	 */
	struct UEOSCoreLobbyQueryInvites_HandleCallback_Params
	{
	public:
		struct FEOSLobbyQueryInvitesCallbackInfo                   Data;                                                    // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLobbyQueryInvites.EOSLobbyQueryInvitesAsync
	 */
	struct UEOSCoreLobbyQueryInvites_EOSLobbyQueryInvitesAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbyQueryInvitesOptions                        Options;                                                 // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class UEOSCoreLobbyQueryInvites*                           ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLobbySearchFind.HandleCallback
	 */
	struct UEOSCoreLobbySearchFind_HandleCallback_Params
	{
	public:
		struct FEOSLobbySearchFindCallbackInfo                     Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreLobbySearchFind.EOSLobbySearchFindAsync
	 */
	struct UEOSCoreLobbySearchFind_EOSLobbySearchFindAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHLobbySearch                                    Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSLobbySearchFindOptions                          Options;                                                 // 0x0010(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class UEOSCoreLobbySearchFind*                             ReturnValue;                                             // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreMetrics.GetMetrics
	 */
	struct UCoreMetrics_GetMetrics_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCoreMetrics*                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreMetrics.EOSMetricsEndPlayerSession
	 */
	struct UCoreMetrics_EOSMetricsEndPlayerSession_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSMetricsEndPlayerSessionOptions                  Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreMetrics.EOSMetricsBeginPlayerSession
	 */
	struct UCoreMetrics_EOSMetricsBeginPlayerSession_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSMetricsBeginPlayerSessionOptions                Options;                                                 // 0x0008(0x0070)  (Parm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0078(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreMods.GetMods
	 */
	struct UCoreMods_GetMods_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCoreMods*                                           ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreMods.EOSModsUpdateMod
	 */
	struct UCoreMods_EOSModsUpdateMod_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSModsUpdateModOptions                            Options;                                                 // 0x0008(0x0080)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0088(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreMods.EOSModsUninstallMod
	 */
	struct UCoreMods_EOSModsUninstallMod_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSModsUninstallModOptions                         Options;                                                 // 0x0008(0x0080)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0088(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreMods.EOSModsInstallMod
	 */
	struct UCoreMods_EOSModsInstallMod_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSModsInstallModOptions                           Options;                                                 // 0x0008(0x0088)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0090(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreMods.EOSModsEnumerateMods
	 */
	struct UCoreMods_EOSModsEnumerateMods_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSModsEnumerateModsOptions                        Options;                                                 // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreMods.EOSModsCopyModInfo
	 */
	struct UCoreMods_EOSModsCopyModInfo_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSModsCopyModInfoOptions                          Options;                                                 // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSModsModInfo                                     OutEnumeratedMods;                                       // 0x0030(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreP2P.GetP2P
	 */
	struct UCoreP2P_GetP2P_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCoreP2P*                                            ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreP2P.EOSP2PSetRelayControl
	 */
	struct UCoreP2P_EOSP2PSetRelayControl_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSP2PSetRelayControlOptions                       Options;                                                 // 0x0008(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreP2P.EOSP2PSetPortRange
	 */
	struct UCoreP2P_EOSP2PSetPortRange_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSP2PSetPortRangeOptions                          Options;                                                 // 0x0008(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreP2P.EOSP2PSetPacketQueueSize
	 */
	struct UCoreP2P_EOSP2PSetPacketQueueSize_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSP2PSetPacketQueueSizeOptions                    Options;                                                 // 0x0008(0x0028)  (Parm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreP2P.EOSP2PSendPacket
	 */
	struct UCoreP2P_EOSP2PSendPacket_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSP2PSendPacketOptions                            Options;                                                 // 0x0008(0x0080)  (Parm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0088(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreP2P.EOSP2PRemoveNotifyPeerConnectionRequest
	 */
	struct UCoreP2P_EOSP2PRemoveNotifyPeerConnectionRequest_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  NotificationID;                                          // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreP2P.EOSP2PRemoveNotifyPeerConnectionClosed
	 */
	struct UCoreP2P_EOSP2PRemoveNotifyPeerConnectionClosed_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  NotificationID;                                          // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreP2P.EOSP2PRemoveNotifyIncomingPacketQueueFull
	 */
	struct UCoreP2P_EOSP2PRemoveNotifyIncomingPacketQueueFull_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  NotificationID;                                          // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreP2P.EOSP2PReceivePacket
	 */
	struct UCoreP2P_EOSP2PReceivePacket_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSP2PReceivePacketOptions                         Options;                                                 // 0x0008(0x0030)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSProductUserId                                   OutPeerId;                                               // 0x0038(0x0021)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Q4B3[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEOSP2PSocketId                                     OutSocketId;                                             // 0x0060(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
		int32_t                                                    OutChannel;                                              // 0x0078(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LNT7[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<unsigned char>                                      OutData;                                                 // 0x0080(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    OutBytesWritten;                                         // 0x0090(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0094(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreP2P.EOSP2PQueryNATType
	 */
	struct UCoreP2P_EOSP2PQueryNATType_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreP2P.EOSP2PGetRelayControl
	 */
	struct UCoreP2P_EOSP2PGetRelayControl_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSP2PGetRelayControlOptions                       Options;                                                 // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		EEOSERelayControl                                          OutRelayControl;                                         // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x000D(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreP2P.EOSP2PGetPortRange
	 */
	struct UCoreP2P_EOSP2PGetPortRange_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSP2PGetPortRangeOptions                          Options;                                                 // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    OutPort;                                                 // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OutNumAdditionalPortsToTry;                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreP2P.EOSP2PGetPacketQueueInfo
	 */
	struct UCoreP2P_EOSP2PGetPacketQueueInfo_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSP2PGetPacketQueueInfoOptions                    Options;                                                 // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Y1Q3[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEOSP2PPacketQueueInfo                              OutPacketQueueInfo;                                      // 0x0010(0x0060)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreP2P.EOSP2PGetNextReceivedPacketSize
	 */
	struct UCoreP2P_EOSP2PGetNextReceivedPacketSize_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSP2PGetNextReceivedPacketSizeOptions             Options;                                                 // 0x0008(0x002C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    OutPacketSizeBytes;                                      // 0x0034(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreP2P.EOSP2PGetNATType
	 */
	struct UCoreP2P_EOSP2PGetNATType_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSP2PGetNATTypeOptions                            Options;                                                 // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		EEOSENATType                                               OutNatType;                                              // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x000D(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreP2P.EOSP2PCloseConnections
	 */
	struct UCoreP2P_EOSP2PCloseConnections_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSP2PCloseConnectionsOptions                      Options;                                                 // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreP2P.EOSP2PCloseConnection
	 */
	struct UCoreP2P_EOSP2PCloseConnection_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSP2PCloseConnectionOptions                       Options;                                                 // 0x0008(0x0060)  (Parm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreP2P.EOSP2PAddNotifyPeerConnectionRequest
	 */
	struct UCoreP2P_EOSP2PAddNotifyPeerConnectionRequest_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSP2PAddNotifyPeerConnectionRequestOptions        Options;                                                 // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  ReturnValue;                                             // 0x0058(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreP2P.EOSP2PAddNotifyPeerConnectionClosed
	 */
	struct UCoreP2P_EOSP2PAddNotifyPeerConnectionClosed_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSP2PAddNotifyPeerConnectionClosedOptions         Options;                                                 // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  ReturnValue;                                             // 0x0048(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreP2P.EOSP2PAddNotifyIncomingPacketQueueFull
	 */
	struct UCoreP2P_EOSP2PAddNotifyIncomingPacketQueueFull_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSP2PAddNotifyIncomingPacketQueueFullOptions      Options;                                                 // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x000C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9WKY[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEOSNotificationId                                  ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreP2P.EOSP2PAcceptConnection
	 */
	struct UCoreP2P_EOSP2PAcceptConnection_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSP2PAcceptConnectionOptions                      Options;                                                 // 0x0008(0x0060)  (Parm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CorePlayerDataStorage.GetPlayerDataStorage
	 */
	struct UCorePlayerDataStorage_GetPlayerDataStorage_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCorePlayerDataStorage*                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageWriteFile
	 */
	struct UCorePlayerDataStorage_EOSPlayerDataStorageWriteFile_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSPlayerDataStorageWriteFileOptions               WriteOptions;                                            // 0x0008(0x0060)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0068(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageReadFile
	 */
	struct UCorePlayerDataStorage_EOSPlayerDataStorageReadFile_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSPlayerDataStorageReadFileOptions                ReadOptions;                                             // 0x0008(0x0060)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0068(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageQueryFileList
	 */
	struct UCorePlayerDataStorage_EOSPlayerDataStorageQueryFileList_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSPlayerDataStorageQueryFileListOptions           QueryFileListOptions;                                    // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageQueryFile
	 */
	struct UCorePlayerDataStorage_EOSPlayerDataStorageQueryFile_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSPlayerDataStorageQueryFileOptions               QueryFileOptions;                                        // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageGetFileMetadataCount
	 */
	struct UCorePlayerDataStorage_EOSPlayerDataStorageGetFileMetadataCount_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSPlayerDataStorageGetFileMetadataCountOptions    GetFileMetadataCountOptions;                             // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    OutFileMetadataCount;                                    // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0034(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageFileTransferRequestRelease
	 */
	struct UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestRelease_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHPlayerDataStorageFileTransferRequest           Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageFileTransferRequestGetFileRequestState
	 */
	struct UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFileRequestState_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHPlayerDataStorageFileTransferRequest           Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageFileTransferRequestGetFilename
	 */
	struct UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFilename_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHPlayerDataStorageFileTransferRequest           Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    FilenameStringBufferSizeBytes;                           // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_U1PQ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              OutStringBuffer;                                         // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageFileTransferRequestCancelRequest
	 */
	struct UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestCancelRequest_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHPlayerDataStorageFileTransferRequest           Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageDuplicateFile
	 */
	struct UCorePlayerDataStorage_EOSPlayerDataStorageDuplicateFile_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSPlayerDataStorageDuplicateFileOptions           DuplicateOptions;                                        // 0x0008(0x0048)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0050(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageDeleteFile
	 */
	struct UCorePlayerDataStorage_EOSPlayerDataStorageDeleteFile_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSPlayerDataStorageDeleteFileOptions              DeleteOptions;                                           // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageDeleteCache
	 */
	struct UCorePlayerDataStorage_EOSPlayerDataStorageDeleteCache_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSPlayerDataStorageDeleteCacheOptions             Options;                                                 // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageCopyFileMetadataByFilename
	 */
	struct UCorePlayerDataStorage_EOSPlayerDataStorageCopyFileMetadataByFilename_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSPlayerDataStorageCopyFileMetadataByFilenameOptions CopyFileMetadataOptions;                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		struct FEOSPlayerDataStorageFileMetadata                   OutMetadata;                                             // 0x0040(0x0038)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0078(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageCopyFileMetadataAtIndex
	 */
	struct UCorePlayerDataStorage_EOSPlayerDataStorageCopyFileMetadataAtIndex_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSPlayerDataStorageCopyFileMetadataAtIndexOptions CopyFileMetadataOptions;                                 // 0x0008(0x002C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RCRG[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEOSPlayerDataStorageFileMetadata                   OutMetadata;                                             // 0x0038(0x0038)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCorePlayerDataStorageQueryFile.HandleCallback
	 */
	struct UEOSCorePlayerDataStorageQueryFile_HandleCallback_Params
	{
	public:
		struct FEOSPlayerDataStorageQueryFileCallbackInfo          Data;                                                    // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCorePlayerDataStorageQueryFile.EOSPlayerDataStorageQueryFileAsync
	 */
	struct UEOSCorePlayerDataStorageQueryFile_EOSPlayerDataStorageQueryFileAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSPlayerDataStorageQueryFileOptions               QueryFileOptions;                                        // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		class UEOSCorePlayerDataStorageQueryFile*                  ReturnValue;                                             // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCorePlayerDataStorageQueryFileList.HandleCallback
	 */
	struct UEOSCorePlayerDataStorageQueryFileList_HandleCallback_Params
	{
	public:
		struct FEOSPlayerDataStorageQueryFileListCallbackInfo      Data;                                                    // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCorePlayerDataStorageQueryFileList.EOSPlayerDataStorageQueryFileListAsync
	 */
	struct UEOSCorePlayerDataStorageQueryFileList_EOSPlayerDataStorageQueryFileListAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSPlayerDataStorageQueryFileListOptions           QueryFileListOptions;                                    // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class UEOSCorePlayerDataStorageQueryFileList*              ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCorePlayerDataStorageDuplicateFile.HandleCallback
	 */
	struct UEOSCorePlayerDataStorageDuplicateFile_HandleCallback_Params
	{
	public:
		struct FEOSPlayerDataStorageDuplicateFileCallbackInfo      Data;                                                    // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCorePlayerDataStorageDuplicateFile.EOSPlayerDataStorageDuplicateFileAsync
	 */
	struct UEOSCorePlayerDataStorageDuplicateFile_EOSPlayerDataStorageDuplicateFileAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSPlayerDataStorageDuplicateFileOptions           DuplicateOptions;                                        // 0x0008(0x0048)  (Parm, NativeAccessSpecifierPublic)
		class UEOSCorePlayerDataStorageDuplicateFile*              ReturnValue;                                             // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCorePlayerDataStorageDeleteFile.HandleCallback
	 */
	struct UEOSCorePlayerDataStorageDeleteFile_HandleCallback_Params
	{
	public:
		struct FEOSPlayerDataStorageDeleteFileCallbackInfo         Data;                                                    // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCorePlayerDataStorageDeleteFile.EOSPlayerDataStorageDeleteFileAsync
	 */
	struct UEOSCorePlayerDataStorageDeleteFile_EOSPlayerDataStorageDeleteFileAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSPlayerDataStorageDeleteFileOptions              DeleteOptions;                                           // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		class UEOSCorePlayerDataStorageDeleteFile*                 ReturnValue;                                             // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCorePlayerDataStorageReadFile.HandleCallback
	 */
	struct UEOSCorePlayerDataStorageReadFile_HandleCallback_Params
	{
	public:
		struct FEOSPlayerDataStorageReadFileCallbackInfo           Data;                                                    // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCorePlayerDataStorageReadFile.EOSPlayerDataStorageReadFileAsync
	 */
	struct UEOSCorePlayerDataStorageReadFile_EOSPlayerDataStorageReadFileAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSPlayerDataStorageReadFileOptions                ReadOptions;                                             // 0x0008(0x0060)  (Parm, NativeAccessSpecifierPublic)
		class UEOSCorePlayerDataStorageReadFile*                   ReturnValue;                                             // 0x0068(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCorePlayerDataStorageWriteFile.HandleCallback
	 */
	struct UEOSCorePlayerDataStorageWriteFile_HandleCallback_Params
	{
	public:
		struct FEOSPlayerDataStorageWriteFileCallbackInfo          Data;                                                    // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCorePlayerDataStorageWriteFile.EOSPlayerDataStorageWriteFileAsync
	 */
	struct UEOSCorePlayerDataStorageWriteFile_EOSPlayerDataStorageWriteFileAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSPlayerDataStorageWriteFileOptions               WriteOptions;                                            // 0x0008(0x0060)  (Parm, NativeAccessSpecifierPublic)
		class UEOSCorePlayerDataStorageWriteFile*                  ReturnValue;                                             // 0x0068(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CorePresence.GetPresence
	 */
	struct UCorePresence_GetPresence_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCorePresence*                                       ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CorePresence.EOSPresenceSetPresence
	 */
	struct UCorePresence_EOSPresenceSetPresence_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSPresenceSetPresenceOptions                      Options;                                                 // 0x0008(0x0030)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CorePresence.EOSPresenceRemoveNotifyOnPresenceChanged
	 */
	struct UCorePresence_EOSPresenceRemoveNotifyOnPresenceChanged_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  NotificationID;                                          // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CorePresence.EOSPresenceRemoveNotifyJoinGameAccepted
	 */
	struct UCorePresence_EOSPresenceRemoveNotifyJoinGameAccepted_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  ID;                                                      // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CorePresence.EOSPresenceQueryPresence
	 */
	struct UCorePresence_EOSPresenceQueryPresence_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSPresenceQueryPresenceOptions                    Options;                                                 // 0x0008(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0050(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CorePresence.EOSPresenceModificationSetStatus
	 */
	struct UCorePresence_EOSPresenceModificationSetStatus_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHPresenceModification                           Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSPresenceModificationSetStatusOptions            Options;                                                 // 0x0010(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CorePresence.EOSPresenceModificationSetRawRichText
	 */
	struct UCorePresence_EOSPresenceModificationSetRawRichText_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHPresenceModification                           Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSPresenceModificationSetRawRichTextOptions       Options;                                                 // 0x0010(0x0018)  (Parm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CorePresence.EOSPresenceModificationSetJoinInfo
	 */
	struct UCorePresence_EOSPresenceModificationSetJoinInfo_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHPresenceModification                           Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSPresenceModificationSetJoinInfoOptions          Options;                                                 // 0x0010(0x0018)  (Parm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CorePresence.EOSPresenceModificationSetData
	 */
	struct UCorePresence_EOSPresenceModificationSetData_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHPresenceModification                           Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSPresenceModificationSetDataOptions              Options;                                                 // 0x0010(0x0018)  (Parm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CorePresence.EOSPresenceModificationRelease
	 */
	struct UCorePresence_EOSPresenceModificationRelease_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHPresenceModification                           PresenceModificationHandle;                              // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CorePresence.EOSPresenceModificationDeleteData
	 */
	struct UCorePresence_EOSPresenceModificationDeleteData_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHPresenceModification                           Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSPresenceModificationDeleteDataOptions           Options;                                                 // 0x0010(0x0018)  (Parm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CorePresence.EOSPresenceHasPresence
	 */
	struct UCorePresence_EOSPresenceHasPresence_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSPresenceHasPresenceOptions                      Options;                                                 // 0x0008(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CorePresence.EOSPresenceGetJoinInfo
	 */
	struct UCorePresence_EOSPresenceGetJoinInfo_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSPresenceGetJoinInfoOptions                      Options;                                                 // 0x0008(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class FString                                              OutInfo;                                                 // 0x0050(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CorePresence.EOSPresenceCreatePresenceModification
	 */
	struct UCorePresence_EOSPresenceCreatePresenceModification_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSPresenceCreatePresenceModificationOptions       Options;                                                 // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSHPresenceModification                           OutPresenceModificationHandle;                           // 0x0030(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CorePresence.EOSPresenceCopyPresence
	 */
	struct UCorePresence_EOSPresenceCopyPresence_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSPresenceCopyPresenceOptions                     Options;                                                 // 0x0008(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSPresenceInfo                                    OutPresence;                                             // 0x0050(0x0090)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x00E0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CorePresence.EOSPresenceAddNotifyOnPresenceChanged
	 */
	struct UCorePresence_EOSPresenceAddNotifyOnPresenceChanged_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CorePresence.EOSPresenceAddNotifyJoinGameAccepted
	 */
	struct UCorePresence_EOSPresenceAddNotifyJoinGameAccepted_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCorePresenceQueryPresence.HandleCallback
	 */
	struct UEOSCorePresenceQueryPresence_HandleCallback_Params
	{
	public:
		struct FEOSPresenceQueryPresenceCallbackInfo               Data;                                                    // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0058(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCorePresenceQueryPresence.EOSPresenceQueryPresenceAsync
	 */
	struct UEOSCorePresenceQueryPresence_EOSPresenceQueryPresenceAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSPresenceQueryPresenceOptions                    Options;                                                 // 0x0008(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class UEOSCorePresenceQueryPresence*                       ReturnValue;                                             // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCorePresenceSetPresence.HandleCallback
	 */
	struct UEOSCorePresenceSetPresence_HandleCallback_Params
	{
	public:
		struct FEOSPresenceSetPresenceCallbackInfo                 Data;                                                    // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCorePresenceSetPresence.EOSPresenceSetPresenceAsync
	 */
	struct UEOSCorePresenceSetPresence_EOSPresenceSetPresenceAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSPresenceSetPresenceOptions                      Options;                                                 // 0x0008(0x0030)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class UEOSCorePresenceSetPresence*                         ReturnValue;                                             // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreProgressionSnapshot.GetProgressionSnapshot
	 */
	struct UCoreProgressionSnapshot_GetProgressionSnapshot_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCoreProgressionSnapshot*                            ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreProgressionSnapshot.EOSProgressionSnapshotSubmitSnapshot
	 */
	struct UCoreProgressionSnapshot_EOSProgressionSnapshotSubmitSnapshot_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSProgressionSnapshotSubmitSnapshotOptions        Options;                                                 // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x000C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreProgressionSnapshot.EOSProgressionSnapshotEndSnapshot
	 */
	struct UCoreProgressionSnapshot_EOSProgressionSnapshotEndSnapshot_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSProgressionSnapshotEndSnapshotOptions           Options;                                                 // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreProgressionSnapshot.EOSProgressionSnapshotDeleteSnapshot
	 */
	struct UCoreProgressionSnapshot_EOSProgressionSnapshotDeleteSnapshot_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSProgressionSnapshotDeleteSnapshotOptions        Options;                                                 // 0x0008(0x0021)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_18FK[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Callback;                                                // 0x002C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreProgressionSnapshot.EOSProgressionSnapshotBeginSnapshot
	 */
	struct UCoreProgressionSnapshot_EOSProgressionSnapshotBeginSnapshot_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSProgressionSnapshotBeginSnapshotOptions         Options;                                                 // 0x0008(0x0021)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0U9D[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    OutSnapshotId;                                           // 0x002C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreProgressionSnapshot.EOSProgressionSnapshotAddProgression
	 */
	struct UCoreProgressionSnapshot_EOSProgressionSnapshotAddProgression_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSProgressionSnapshotAddProgressionOptions        Options;                                                 // 0x0008(0x0028)  (Parm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreReports.GetReports
	 */
	struct UCoreReports_GetReports_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCoreReports*                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreReports.EOSReportsSendPlayerBehaviorReport
	 */
	struct UCoreReports_EOSReportsSendPlayerBehaviorReport_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSReportsSendPlayerBehaviorReportOptions          Options;                                                 // 0x0008(0x0068)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0070(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSReportsSendPlayerBehaviorReport.HandleCallback
	 */
	struct UEOSReportsSendPlayerBehaviorReport_HandleCallback_Params
	{
	public:
		struct FEOSReportsSendPlayerBehaviorReportCompleteCallbackInfo Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSReportsSendPlayerBehaviorReport.EOSReportsSendPlayerBehaviorReportAsync
	 */
	struct UEOSReportsSendPlayerBehaviorReport_EOSReportsSendPlayerBehaviorReportAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSReportsSendPlayerBehaviorReportOptions          Options;                                                 // 0x0008(0x0068)  (Parm, NativeAccessSpecifierPublic)
		class UEOSReportsSendPlayerBehaviorReport*                 ReturnValue;                                             // 0x0070(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreRTC.GetRTC
	 */
	struct UCoreRTC_GetRTC_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCoreRTC*                                            ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreRTC.EOSRTCRemoveNotifyParticipantStatusChanged
	 */
	struct UCoreRTC_EOSRTCRemoveNotifyParticipantStatusChanged_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  NotificationID;                                          // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreRTC.EOSRTCRemoveNotifyDisconnected
	 */
	struct UCoreRTC_EOSRTCRemoveNotifyDisconnected_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  NotificationID;                                          // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreRTC.EOSRTCLeaveRoom
	 */
	struct UCoreRTC_EOSRTCLeaveRoom_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLeaveRoomOptions                                   Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreRTC.EOSRTCJoinRoom
	 */
	struct UCoreRTC_EOSRTCJoinRoom_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FJoinRoomOptions                                    Options;                                                 // 0x0008(0x0088)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0090(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreRTC.EOSRTCGetAudioInterface
	 */
	struct UCoreRTC_EOSRTCGetAudioInterface_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHRTCAudio                                       ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreRTC.EOSRTCBlockParticipant
	 */
	struct UCoreRTC_EOSRTCBlockParticipant_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FBlockParticipantOptions                            Options;                                                 // 0x0008(0x0060)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0068(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreRTC.EOSRTCAddNotifyParticipantStatusChanged
	 */
	struct UCoreRTC_EOSRTCAddNotifyParticipantStatusChanged_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAddNotifyParticipantStatusChangedOptions           Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  ReturnValue;                                             // 0x0050(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreRTC.EOSRTCAddNotifyDisconnected
	 */
	struct UCoreRTC_EOSRTCAddNotifyDisconnected_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAddNotifyDisconnectedOptions                       Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  ReturnValue;                                             // 0x0050(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreRTCAdmin.GetRTCAdmin
	 */
	struct UCoreRTCAdmin_GetRTCAdmin_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCoreRTCAdmin*                                       ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreRTCAdmin.EOSRTCAdminSetParticipantHardMute
	 */
	struct UCoreRTCAdmin_EOSRTCAdminSetParticipantHardMute_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSetParticipantHardMuteOptions                   Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreRTCAdmin.EOSRTCAdminQueryJoinRoomToken
	 */
	struct UCoreRTCAdmin_EOSRTCAdminQueryJoinRoomToken_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSQueryJoinRoomTokenOptions                       Options;                                                 // 0x0008(0x0058)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0060(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreRTCAdmin.EOSRTCAdminKick
	 */
	struct UCoreRTCAdmin_EOSRTCAdminKick_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSKickOptions                                     Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreRTCAdmin.EOSRTCAdminCopyUserTokenByUserId
	 */
	struct UCoreRTCAdmin_EOSRTCAdminCopyUserTokenByUserId_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSCopyUserTokenByUserIdOptions                    Options;                                                 // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSUserToken                                       OutUserToken;                                            // 0x0030(0x0038)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreRTCAdmin.EOSRTCAdminCopyUserTokenByIndex
	 */
	struct UCoreRTCAdmin_EOSRTCAdminCopyUserTokenByIndex_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSCopyUserTokenByIndexOptions                     Options;                                                 // 0x0008(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSUserToken                                       OutUserToken;                                            // 0x0010(0x0038)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreRTCAudio.GetRTCAudio
	 */
	struct UCoreRTCAudio_GetRTCAudio_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCoreRTCAudio*                                       ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreRTCAudio.EOSRTCAudioUpdateSendingVolume
	 */
	struct UCoreRTCAudio_EOSRTCAudioUpdateSendingVolume_Params
	{
	public:
		struct FEOSHRTCAudio                                       Handle;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSRTCAudioUpdateSendingVolumeOptions              Options;                                                 // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreRTCAudio.EOSRTCAudioUpdateSending
	 */
	struct UCoreRTCAudio_EOSRTCAudioUpdateSending_Params
	{
	public:
		struct FEOSHRTCAudio                                       Handle;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSUpdateSendingOptions                            Options;                                                 // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreRTCAudio.EOSRTCAudioUpdateReceivingVolume
	 */
	struct UCoreRTCAudio_EOSRTCAudioUpdateReceivingVolume_Params
	{
	public:
		struct FEOSHRTCAudio                                       Handle;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSRTCAudioUpdateReceivingVolumeOptions            Options;                                                 // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreRTCAudio.EOSRTCAudioUpdateReceiving
	 */
	struct UCoreRTCAudio_EOSRTCAudioUpdateReceiving_Params
	{
	public:
		struct FEOSHRTCAudio                                       Handle;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSUpdateReceivingOptions                          Options;                                                 // 0x0008(0x0060)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0068(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreRTCAudio.EOSRTCAudioUpdateParticipantVolume
	 */
	struct UCoreRTCAudio_EOSRTCAudioUpdateParticipantVolume_Params
	{
	public:
		struct FEOSHRTCAudio                                       Handle;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSRTCAudioUpdateParticipantVolumeOptions          Options;                                                 // 0x0008(0x0060)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0068(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreRTCAudio.EOSRTCAudioUnregisterPlatformAudioUser
	 */
	struct UCoreRTCAudio_EOSRTCAudioUnregisterPlatformAudioUser_Params
	{
	public:
		struct FEOSHRTCAudio                                       Handle;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSUnregisterPlatformAudioUserOptions              Options;                                                 // 0x0008(0x0010)  (Parm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreRTCAudio.EOSRTCAudioSetAudioOutputSettings
	 */
	struct UCoreRTCAudio_EOSRTCAudioSetAudioOutputSettings_Params
	{
	public:
		struct FEOSHRTCAudio                                       Handle;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSetAudioOutputSettingsOptions                   Options;                                                 // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreRTCAudio.EOSRTCAudioSetAudioInputSettings
	 */
	struct UCoreRTCAudio_EOSRTCAudioSetAudioInputSettings_Params
	{
	public:
		struct FEOSHRTCAudio                                       Handle;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSetAudioInputSettingsOptions                    Options;                                                 // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreRTCAudio.EOSRTCAudioSendAudio
	 */
	struct UCoreRTCAudio_EOSRTCAudioSendAudio_Params
	{
	public:
		struct FEOSHRTCAudio                                       Handle;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSendAudioOptions                                Options;                                                 // 0x0008(0x0048)  (Parm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreRTCAudio.EOSRTCAudioRemoveNotifyParticipantUpdated
	 */
	struct UCoreRTCAudio_EOSRTCAudioRemoveNotifyParticipantUpdated_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHRTCAudio                                       Handle;                                                  // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  NotificationID;                                          // 0x0010(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreRTCAudio.EOSRTCAudioRemoveNotifyAudioOutputState
	 */
	struct UCoreRTCAudio_EOSRTCAudioRemoveNotifyAudioOutputState_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHRTCAudio                                       Handle;                                                  // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  NotificationID;                                          // 0x0010(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreRTCAudio.EOSRTCAudioRemoveNotifyAudioInputState
	 */
	struct UCoreRTCAudio_EOSRTCAudioRemoveNotifyAudioInputState_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHRTCAudio                                       Handle;                                                  // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  NotificationID;                                          // 0x0010(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreRTCAudio.EOSRTCAudioRemoveNotifyAudioDevicesChanged
	 */
	struct UCoreRTCAudio_EOSRTCAudioRemoveNotifyAudioDevicesChanged_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHRTCAudio                                       Handle;                                                  // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  NotificationID;                                          // 0x0010(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreRTCAudio.EOSRTCAudioRemoveNotifyAudioBeforeSend
	 */
	struct UCoreRTCAudio_EOSRTCAudioRemoveNotifyAudioBeforeSend_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHRTCAudio                                       Handle;                                                  // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  NotificationID;                                          // 0x0010(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreRTCAudio.EOSRTCAudioRemoveNotifyAudioBeforeRender
	 */
	struct UCoreRTCAudio_EOSRTCAudioRemoveNotifyAudioBeforeRender_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHRTCAudio                                       Handle;                                                  // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  NotificationID;                                          // 0x0010(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreRTCAudio.EOSRTCAudioRegisterPlatformAudioUser
	 */
	struct UCoreRTCAudio_EOSRTCAudioRegisterPlatformAudioUser_Params
	{
	public:
		struct FEOSHRTCAudio                                       Handle;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSRegisterPlatformAudioUserOptions                Options;                                                 // 0x0008(0x0010)  (Parm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreRTCAudio.EOSRTCAudioGetAudioOutputDevicesCount
	 */
	struct UCoreRTCAudio_EOSRTCAudioGetAudioOutputDevicesCount_Params
	{
	public:
		struct FEOSHRTCAudio                                       Handle;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSGetAudioOutputDevicesCountOptions               Options;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AAHF[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreRTCAudio.EOSRTCAudioGetAudioOutputDeviceByIndex
	 */
	struct UCoreRTCAudio_EOSRTCAudioGetAudioOutputDeviceByIndex_Params
	{
	public:
		struct FEOSHRTCAudio                                       Handle;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSGetAudioOutputDeviceByIndexOptions              Options;                                                 // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_S4Y6[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEOSAudioOutputDeviceInfo                           ReturnValue;                                             // 0x0010(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreRTCAudio.EOSRTCAudioGetAudioInputDevicesCount
	 */
	struct UCoreRTCAudio_EOSRTCAudioGetAudioInputDevicesCount_Params
	{
	public:
		struct FEOSHRTCAudio                                       Handle;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSGetAudioInputDevicesCountOptions                Options;                                                 // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_X3V6[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreRTCAudio.EOSRTCAudioGetAudioInputDeviceByIndex
	 */
	struct UCoreRTCAudio_EOSRTCAudioGetAudioInputDeviceByIndex_Params
	{
	public:
		struct FEOSHRTCAudio                                       Handle;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSGetAudioOutputDeviceByIndexOptions              Options;                                                 // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LWKA[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEOSAudioInputDeviceInfo                            ReturnValue;                                             // 0x0010(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreRTCAudio.EOSRTCAudioAddNotifyParticipantUpdated
	 */
	struct UCoreRTCAudio_EOSRTCAudioAddNotifyParticipantUpdated_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHRTCAudio                                       Handle;                                                  // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAddNotifyParticipantUpdatedOptions              Options;                                                 // 0x0010(0x0038)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  ReturnValue;                                             // 0x0058(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreRTCAudio.EOSRTCAudioAddNotifyAudioOutputState
	 */
	struct UCoreRTCAudio_EOSRTCAudioAddNotifyAudioOutputState_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHRTCAudio                                       Handle;                                                  // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAddNotifyAudioOutputStateOptions                Options;                                                 // 0x0010(0x0038)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  ReturnValue;                                             // 0x0058(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreRTCAudio.EOSRTCAudioAddNotifyAudioInputState
	 */
	struct UCoreRTCAudio_EOSRTCAudioAddNotifyAudioInputState_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHRTCAudio                                       Handle;                                                  // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAddNotifyAudioInputStateOptions                 Options;                                                 // 0x0010(0x0038)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  ReturnValue;                                             // 0x0058(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreRTCAudio.EOSRTCAudioAddNotifyAudioDevicesChanged
	 */
	struct UCoreRTCAudio_EOSRTCAudioAddNotifyAudioDevicesChanged_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHRTCAudio                                       Handle;                                                  // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAddNotifyAudioDevicesChangedOptions             Options;                                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_L97H[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Callback;                                                // 0x0014(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8JCZ[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEOSNotificationId                                  ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreRTCAudio.EOSRTCAudioAddNotifyAudioBeforeSend
	 */
	struct UCoreRTCAudio_EOSRTCAudioAddNotifyAudioBeforeSend_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHRTCAudio                                       Handle;                                                  // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAddNotifyAudioBeforeSendOptions                 Options;                                                 // 0x0010(0x0038)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  ReturnValue;                                             // 0x0058(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreRTCAudio.EOSRTCAudioAddNotifyAudioBeforeRender
	 */
	struct UCoreRTCAudio_EOSRTCAudioAddNotifyAudioBeforeRender_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHRTCAudio                                       Handle;                                                  // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSAddNotifyAudioBeforeRenderOptions               Options;                                                 // 0x0010(0x0040)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0050(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  ReturnValue;                                             // 0x0060(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSanctions.GetSanctions
	 */
	struct UCoreSanctions_GetSanctions_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCoreSanctions*                                      ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSanctions.EOSSanctionsQueryActivePlayerSanctions
	 */
	struct UCoreSanctions_EOSSanctionsQueryActivePlayerSanctions_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSanctionsQueryActivePlayerSanctionsOptions      Options;                                                 // 0x0008(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0050(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSanctions.EOSSanctionsGetPlayerSanctionCount
	 */
	struct UCoreSanctions_EOSSanctionsGetPlayerSanctionCount_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSanctionsGetPlayerSanctionCountOptions          Options;                                                 // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSanctions.EOSSanctionsCopyPlayerSanctionByIndex
	 */
	struct UCoreSanctions_EOSSanctionsCopyPlayerSanctionByIndex_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSanctionsCopyPlayerSanctionByIndexOptions       Options;                                                 // 0x0008(0x002C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SF33[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEOSSanctionsPlayerSanction                         OutSanction;                                             // 0x0038(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSSanctionsQueryActivePlayerSanctions.HandleCallback
	 */
	struct UEOSSanctionsQueryActivePlayerSanctions_HandleCallback_Params
	{
	public:
		struct FEOSSanctionsQueryActivePlayerSanctionsCallbackInfo Data;                                                    // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0058(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSSanctionsQueryActivePlayerSanctions.EOSSanctionsQueryActivePlayerSanctionsAsync
	 */
	struct UEOSSanctionsQueryActivePlayerSanctions_EOSSanctionsQueryActivePlayerSanctionsAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSanctionsQueryActivePlayerSanctionsOptions      Options;                                                 // 0x0008(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class UEOSSanctionsQueryActivePlayerSanctions*             ReturnValue;                                             // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.GetSessions
	 */
	struct UCoreSessions_GetSessions_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCoreSessions*                                       ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionsUpdateSessionModification
	 */
	struct UCoreSessions_EOSSessionsUpdateSessionModification_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionsUpdateSessionModificationOptions        Options;                                                 // 0x0008(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FEOSHSessionModification                            OutSessionModificationHandle;                            // 0x0018(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionsUpdateSession
	 */
	struct UCoreSessions_EOSSessionsUpdateSession_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionsUpdateSessionOptions                    Options;                                                 // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionsUnregisterPlayers
	 */
	struct UCoreSessions_EOSSessionsUnregisterPlayers_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionsUnregisterPlayersOptions                Options;                                                 // 0x0008(0x0020)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionsStartSession
	 */
	struct UCoreSessions_EOSSessionsStartSession_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionsStartSessionOptions                     Options;                                                 // 0x0008(0x0010)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionsSendInvite
	 */
	struct UCoreSessions_EOSSessionsSendInvite_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionsSendInviteOptions                       Options;                                                 // 0x0008(0x0058)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0060(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionsRemoveNotifySessionInviteReceived
	 */
	struct UCoreSessions_EOSSessionsRemoveNotifySessionInviteReceived_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  ID;                                                      // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionsRemoveNotifySessionInviteAccepted
	 */
	struct UCoreSessions_EOSSessionsRemoveNotifySessionInviteAccepted_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  ID;                                                      // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionsRemoveNotifyJoinSessionAccepted
	 */
	struct UCoreSessions_EOSSessionsRemoveNotifyJoinSessionAccepted_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  ID;                                                      // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionsRejectInvite
	 */
	struct UCoreSessions_EOSSessionsRejectInvite_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionsRejectInviteOptions                     Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionsRegisterPlayers
	 */
	struct UCoreSessions_EOSSessionsRegisterPlayers_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionsRegisterPlayersOptions                  Options;                                                 // 0x0008(0x0020)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionsQueryInvites
	 */
	struct UCoreSessions_EOSSessionsQueryInvites_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionsQueryInvitesOptions                     Options;                                                 // 0x0008(0x0021)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DF5S[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Callback;                                                // 0x002C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionsJoinSession
	 */
	struct UCoreSessions_EOSSessionsJoinSession_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionsJoinSessionOptions                      Options;                                                 // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionsIsUserInSession
	 */
	struct UCoreSessions_EOSSessionsIsUserInSession_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionsIsUserInSessionOptions                  Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionsGetInviteIdByIndex
	 */
	struct UCoreSessions_EOSSessionsGetInviteIdByIndex_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionsGetInviteIdByIndexOptions               Options;                                                 // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class FString                                              OutBuffer;                                               // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionsGetInviteCount
	 */
	struct UCoreSessions_EOSSessionsGetInviteCount_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionsGetInviteCountOptions                   Options;                                                 // 0x0008(0x0021)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6KGH[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x002C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionsEndSession
	 */
	struct UCoreSessions_EOSSessionsEndSession_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionsEndSessionOptions                       Options;                                                 // 0x0008(0x0010)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionSearchSetTargetUserId
	 */
	struct UCoreSessions_EOSSessionSearchSetTargetUserId_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHSessionSearch                                  Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionSearchSetTargetUserIdOptions             Options;                                                 // 0x0010(0x0021)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0031(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionSearchSetSessionId
	 */
	struct UCoreSessions_EOSSessionSearchSetSessionId_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHSessionSearch                                  Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionSearchSetSessionIdOptions                Options;                                                 // 0x0010(0x0010)  (Parm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionSearchSetParameterString
	 */
	struct UCoreSessions_EOSSessionSearchSetParameterString_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHSessionSearch                                  Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEOSEComparisonOp                                          ComparisonOp;                                            // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0031(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionSearchSetParameterInt64
	 */
	struct UCoreSessions_EOSSessionSearchSetParameterInt64_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHSessionSearch                                  Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEOSEComparisonOp                                          ComparisonOp;                                            // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0031(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionSearchSetParameterDouble
	 */
	struct UCoreSessions_EOSSessionSearchSetParameterDouble_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHSessionSearch                                  Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEOSEComparisonOp                                          ComparisonOp;                                            // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0031(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionSearchSetParameterBool
	 */
	struct UCoreSessions_EOSSessionSearchSetParameterBool_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHSessionSearch                                  Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bValue;                                                  // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEOSEComparisonOp                                          ComparisonOp;                                            // 0x0021(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0022(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionSearchSetMaxResults
	 */
	struct UCoreSessions_EOSSessionSearchSetMaxResults_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHSessionSearch                                  Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionSearchSetMaxResultsOptions               Options;                                                 // 0x0010(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionSearchRemoveParameter
	 */
	struct UCoreSessions_EOSSessionSearchRemoveParameter_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHSessionSearch                                  Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionSearchRemoveParameterOptions             Options;                                                 // 0x0010(0x0018)  (Parm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionSearchRelease
	 */
	struct UCoreSessions_EOSSessionSearchRelease_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHSessionSearch                                  SessionSearchHandle;                                     // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionSearchGetSearchResultCount
	 */
	struct UCoreSessions_EOSSessionSearchGetSearchResultCount_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHSessionSearch                                  Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionSearchGetSearchResultCountOptions        Options;                                                 // 0x0010(0x0001)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_52EQ[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionSearchFind
	 */
	struct UCoreSessions_EOSSessionSearchFind_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHSessionSearch                                  Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionSearchFindOptions                        Options;                                                 // 0x0010(0x0021)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3L8I[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Callback;                                                // 0x0034(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionSearchCopySearchResultByIndex
	 */
	struct UCoreSessions_EOSSessionSearchCopySearchResultByIndex_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHSessionSearch                                  Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionSearchCopySearchResultByIndexOptions     Options;                                                 // 0x0010(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2DJZ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEOSHSessionDetails                                 OutSessionHandle;                                        // 0x0018(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionsDumpSessionState
	 */
	struct UCoreSessions_EOSSessionsDumpSessionState_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionsDumpSessionStateOptions                 Options;                                                 // 0x0008(0x0010)  (Parm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionsDestroySession
	 */
	struct UCoreSessions_EOSSessionsDestroySession_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionsDestroySessionOptions                   Options;                                                 // 0x0008(0x0010)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionsCreateSessionSearch
	 */
	struct UCoreSessions_EOSSessionsCreateSessionSearch_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionsCreateSessionSearchOptions              Options;                                                 // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0W3Z[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEOSHSessionSearch                                  OutSessionSearchHandle;                                  // 0x0010(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionsCreateSessionModification
	 */
	struct UCoreSessions_EOSSessionsCreateSessionModification_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionsCreateSessionModificationOptions        Options;                                                 // 0x0008(0x0048)  (Parm, NativeAccessSpecifierPublic)
		struct FEOSHSessionModification                            OutSessionModificationHandle;                            // 0x0050(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionsCopySessionHandleForPresence
	 */
	struct UCoreSessions_EOSSessionsCopySessionHandleForPresence_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionsCopySessionHandleForPresenceOptions     Options;                                                 // 0x0008(0x0021)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_URT0[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEOSHSessionDetails                                 OutSessionHandle;                                        // 0x0030(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionsCopySessionHandleByUiEventId
	 */
	struct UCoreSessions_EOSSessionsCopySessionHandleByUiEventId_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionsCopySessionHandleByUiEventIdOptions     Options;                                                 // 0x0008(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSHSessionDetails                                 OutSessionHandle;                                        // 0x0010(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionsCopySessionHandleByInviteId
	 */
	struct UCoreSessions_EOSSessionsCopySessionHandleByInviteId_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionsCopySessionHandleByInviteIdOptions      Options;                                                 // 0x0008(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FEOSHSessionDetails                                 OutSessionHandle;                                        // 0x0018(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionsCopyActiveSessionHandle
	 */
	struct UCoreSessions_EOSSessionsCopyActiveSessionHandle_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionsCopyActiveSessionHandleOptions          Options;                                                 // 0x0008(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FEOSHActiveSession                                  OutSessionHandle;                                        // 0x0018(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionsAddNotifySessionInviteReceived
	 */
	struct UCoreSessions_EOSSessionsAddNotifySessionInviteReceived_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionsAddNotifySessionInviteAccepted
	 */
	struct UCoreSessions_EOSSessionsAddNotifySessionInviteAccepted_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionsAddNotifyJoinSessionAccepted
	 */
	struct UCoreSessions_EOSSessionsAddNotifyJoinSessionAccepted_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionModificationSetPermissionLevel
	 */
	struct UCoreSessions_EOSSessionModificationSetPermissionLevel_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHSessionModification                            Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionModificationSetPermissionLevelOptions    Options;                                                 // 0x0010(0x0001)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionModificationSetMaxPlayers
	 */
	struct UCoreSessions_EOSSessionModificationSetMaxPlayers_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHSessionModification                            Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionModificationSetMaxPlayersOptions         Options;                                                 // 0x0010(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionModificationSetJoinInProgressAllowed
	 */
	struct UCoreSessions_EOSSessionModificationSetJoinInProgressAllowed_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHSessionModification                            Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionModificationSetJoinInProgressAllowedOptions Options;                                                 // 0x0010(0x0001)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionModificationSetInvitesAllowed
	 */
	struct UCoreSessions_EOSSessionModificationSetInvitesAllowed_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHSessionModification                            Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionModificationSetInvitesAllowedOptions     Options;                                                 // 0x0010(0x0001)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionModificationSetHostAddress
	 */
	struct UCoreSessions_EOSSessionModificationSetHostAddress_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHSessionModification                            Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionModificationSetHostAddressOptions        Options;                                                 // 0x0010(0x0010)  (Parm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionModificationSetBucketId
	 */
	struct UCoreSessions_EOSSessionModificationSetBucketId_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHSessionModification                            Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionModificationSetBucketIdOptions           Options;                                                 // 0x0010(0x0010)  (Parm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionModificationRemoveAttribute
	 */
	struct UCoreSessions_EOSSessionModificationRemoveAttribute_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHSessionModification                            Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionModificationRemoveAttributeOptions       Options;                                                 // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionModificationRelease
	 */
	struct UCoreSessions_EOSSessionModificationRelease_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHSessionModification                            SessionModificationHandle;                               // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionModificationAddAttributeString
	 */
	struct UCoreSessions_EOSSessionModificationAddAttributeString_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHSessionModification                            Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEOSESessionAttributeAdvertisementType                     AdvertisementType;                                       // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TWXA[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Key;                                                     // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionModificationAddAttributeInt64
	 */
	struct UCoreSessions_EOSSessionModificationAddAttributeInt64_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHSessionModification                            Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEOSESessionAttributeAdvertisementType                     AdvertisementType;                                       // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7G3O[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Key;                                                     // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionModificationAddAttributeDouble
	 */
	struct UCoreSessions_EOSSessionModificationAddAttributeDouble_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHSessionModification                            Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEOSESessionAttributeAdvertisementType                     AdvertisementType;                                       // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9XCJ[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Key;                                                     // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionModificationAddAttributeBool
	 */
	struct UCoreSessions_EOSSessionModificationAddAttributeBool_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHSessionModification                            Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEOSESessionAttributeAdvertisementType                     AdvertisementType;                                       // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TYA1[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Key;                                                     // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bValue;                                                  // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0029(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionDetailsRelease
	 */
	struct UCoreSessions_EOSSessionDetailsRelease_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHSessionDetails                                 SessionHandle;                                           // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionDetailsGetSessionAttributeCount
	 */
	struct UCoreSessions_EOSSessionDetailsGetSessionAttributeCount_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHSessionDetails                                 Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionDetailsGetSessionAttributeCountOptions   Options;                                                 // 0x0010(0x0001)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_M3TL[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionDetailsCopySessionAttributeByKey
	 */
	struct UCoreSessions_EOSSessionDetailsCopySessionAttributeByKey_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHSessionDetails                                 Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionDetailsCopySessionAttributeByKeyOptions  Options;                                                 // 0x0010(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FEOSSessionDetailsAttribute                         OutSessionAttribute;                                     // 0x0020(0x0028)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionDetailsCopySessionAttributeByIndex
	 */
	struct UCoreSessions_EOSSessionDetailsCopySessionAttributeByIndex_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHSessionDetails                                 Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionDetailsCopySessionAttributeByIndexOptions Options;                                                 // 0x0010(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_E7C5[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEOSSessionDetailsAttribute                         OutSessionAttribute;                                     // 0x0018(0x0028)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSSessionDetailsCopyInfo
	 */
	struct UCoreSessions_EOSSessionDetailsCopyInfo_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHSessionDetails                                 Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionDetailsCopyInfoOptions                   Options;                                                 // 0x0010(0x0001)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GVDM[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEOSSessionDetailsInfo                              outSessionInfo;                                          // 0x0018(0x0040)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSActiveSessionRelease
	 */
	struct UCoreSessions_EOSActiveSessionRelease_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHActiveSession                                  ActiveSessionHandle;                                     // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSActiveSessionGetRegisteredPlayerCount
	 */
	struct UCoreSessions_EOSActiveSessionGetRegisteredPlayerCount_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHActiveSession                                  Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSActiveSessionGetRegisteredPlayerCountOptions    Options;                                                 // 0x0010(0x0001)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SNF7[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSActiveSessionGetRegisteredPlayerByIndex
	 */
	struct UCoreSessions_EOSActiveSessionGetRegisteredPlayerByIndex_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHActiveSession                                  Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSActiveSessionGetRegisteredPlayerByIndexOptions  Options;                                                 // 0x0010(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSProductUserId                                   ReturnValue;                                             // 0x0014(0x0021)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreSessions.EOSActiveSessionCopyInfo
	 */
	struct UCoreSessions_EOSActiveSessionCopyInfo_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHActiveSession                                  Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSActiveSessionCopyInfoOptions                    Options;                                                 // 0x0010(0x0001)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FK9H[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEOSActiveSessionInfo                               OutActiveSessionInfo;                                    // 0x0018(0x0078)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreSessionsUpdateSession.HandleCallback
	 */
	struct UEOSCoreSessionsUpdateSession_HandleCallback_Params
	{
	public:
		struct FEOSSessionsUpdateSessionCallbackInfo               Data;                                                    // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreSessionsUpdateSession.EOSSessionsUpdateSessionAsync
	 */
	struct UEOSCoreSessionsUpdateSession_EOSSessionsUpdateSessionAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionsUpdateSessionOptions                    Options;                                                 // 0x0008(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class UEOSCoreSessionsUpdateSession*                       ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreSessionsDestroySession.HandleCallback
	 */
	struct UEOSCoreSessionsDestroySession_HandleCallback_Params
	{
	public:
		struct FEOSSessionsDestroySessionCallbackInfo              Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreSessionsDestroySession.EOSSessionsDestroySessionAsync
	 */
	struct UEOSCoreSessionsDestroySession_EOSSessionsDestroySessionAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionsDestroySessionOptions                   Options;                                                 // 0x0008(0x0010)  (Parm, NativeAccessSpecifierPublic)
		class UEOSCoreSessionsDestroySession*                      ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreSessionsJoinSession.HandleCallback
	 */
	struct UEOSCoreSessionsJoinSession_HandleCallback_Params
	{
	public:
		struct FEOSSessionsJoinSessionCallbackInfo                 Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreSessionsJoinSession.EOSSessionsJoinSessionAsync
	 */
	struct UEOSCoreSessionsJoinSession_EOSSessionsJoinSessionAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionsJoinSessionOptions                      Options;                                                 // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
		class UEOSCoreSessionsJoinSession*                         ReturnValue;                                             // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreSessionsStartSession.HandleCallback
	 */
	struct UEOSCoreSessionsStartSession_HandleCallback_Params
	{
	public:
		struct FEOSSessionsStartSessionCallbackInfo                Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreSessionsStartSession.EOSSessionsStartSessionAsync
	 */
	struct UEOSCoreSessionsStartSession_EOSSessionsStartSessionAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionsStartSessionOptions                     Options;                                                 // 0x0008(0x0010)  (Parm, NativeAccessSpecifierPublic)
		class UEOSCoreSessionsStartSession*                        ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreSessionsEndSession.HandleCallback
	 */
	struct UEOSCoreSessionsEndSession_HandleCallback_Params
	{
	public:
		struct FEOSSessionsEndSessionCallbackInfo                  Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreSessionsEndSession.EOSSessionsEndSessionAsync
	 */
	struct UEOSCoreSessionsEndSession_EOSSessionsEndSessionAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionsEndSessionOptions                       Options;                                                 // 0x0008(0x0010)  (Parm, NativeAccessSpecifierPublic)
		class UEOSCoreSessionsEndSession*                          ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreSessionsRegisterPlayers.HandleCallback
	 */
	struct UEOSCoreSessionsRegisterPlayers_HandleCallback_Params
	{
	public:
		struct FEOSSessionsRegisterPlayersCallbackInfo             Data;                                                    // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreSessionsRegisterPlayers.EOSSessionsRegisterPlayersAsync
	 */
	struct UEOSCoreSessionsRegisterPlayers_EOSSessionsRegisterPlayersAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionsRegisterPlayersOptions                  Options;                                                 // 0x0008(0x0020)  (Parm, NativeAccessSpecifierPublic)
		class UEOSCoreSessionsRegisterPlayers*                     ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreSessionsUnregisterPlayers.HandleCallback
	 */
	struct UEOSCoreSessionsUnregisterPlayers_HandleCallback_Params
	{
	public:
		struct FEOSSessionsUnregisterPlayersCallbackInfo           Data;                                                    // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreSessionsUnregisterPlayers.EOSSessionsUnregisterPlayersAsync
	 */
	struct UEOSCoreSessionsUnregisterPlayers_EOSSessionsUnregisterPlayersAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionsUnregisterPlayersOptions                Options;                                                 // 0x0008(0x0020)  (Parm, NativeAccessSpecifierPublic)
		class UEOSCoreSessionsUnregisterPlayers*                   ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreSessionsSendInvite.HandleCallback
	 */
	struct UEOSCoreSessionsSendInvite_HandleCallback_Params
	{
	public:
		struct FEOSSessionsSendInviteCallbackInfo                  Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreSessionsSendInvite.EOSSessionsSendInviteAsync
	 */
	struct UEOSCoreSessionsSendInvite_EOSSessionsSendInviteAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionsSendInviteOptions                       Options;                                                 // 0x0008(0x0058)  (Parm, NativeAccessSpecifierPublic)
		class UEOSCoreSessionsSendInvite*                          ReturnValue;                                             // 0x0060(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreSessionsRejectInvite.HandleCallback
	 */
	struct UEOSCoreSessionsRejectInvite_HandleCallback_Params
	{
	public:
		struct FEOSSessionsRejectInviteCallbackInfo                Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreSessionsRejectInvite.EOSSessionsRejectInviteAsync
	 */
	struct UEOSCoreSessionsRejectInvite_EOSSessionsRejectInviteAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionsRejectInviteOptions                     Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		class UEOSCoreSessionsRejectInvite*                        ReturnValue;                                             // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreSessionsQueryInvites.HandleCallback
	 */
	struct UEOSCoreSessionsQueryInvites_HandleCallback_Params
	{
	public:
		struct FEOSSessionsQueryInvitesCallbackInfo                Data;                                                    // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreSessionsQueryInvites.EOSSessionsQueryInvitesAsync
	 */
	struct UEOSCoreSessionsQueryInvites_EOSSessionsQueryInvitesAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionsQueryInvitesOptions                     Options;                                                 // 0x0008(0x0021)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YQIS[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UEOSCoreSessionsQueryInvites*                        ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreSessionsSearchFind.HandleCallback
	 */
	struct UEOSCoreSessionsSearchFind_HandleCallback_Params
	{
	public:
		struct FEOSSessionSearchFindCallbackInfo                   Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreSessionsSearchFind.EOSSessionSearchFindAsync
	 */
	struct UEOSCoreSessionsSearchFind_EOSSessionSearchFindAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSHSessionSearch                                  SearchHandle;                                            // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSSessionSearchFindOptions                        Options;                                                 // 0x0010(0x0021)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LMMR[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UEOSCoreSessionsSearchFind*                          ReturnValue;                                             // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreStats.GetStats
	 */
	struct UCoreStats_GetStats_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCoreStats*                                          ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreStats.EOSStatsQueryStats
	 */
	struct UCoreStats_EOSStatsQueryStats_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSStatsQueryStatsOptions                          Options;                                                 // 0x0008(0x0080)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0088(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreStats.EOSStatsIngestStat
	 */
	struct UCoreStats_EOSStatsIngestStat_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSStatsIngestStatOptions                          Options;                                                 // 0x0008(0x0060)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0068(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreStats.EOSStatsGetStatsCount
	 */
	struct UCoreStats_EOSStatsGetStatsCount_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSStatsGetStatCountOptions                        Options;                                                 // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreStats.EOSStatsCopyStatByName
	 */
	struct UCoreStats_EOSStatsCopyStatByName_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSStatsCopyStatByNameOptions                      Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		struct FEOSStatsStat                                       OutStat;                                                 // 0x0040(0x0040)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0080(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreStats.EOSStatsCopyStatByIndex
	 */
	struct UCoreStats_EOSStatsCopyStatByIndex_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSStatsCopyStatByIndexOptions                     Options;                                                 // 0x0008(0x002C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HI0Z[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEOSStatsStat                                       OutStat;                                                 // 0x0038(0x0040)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0078(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreStatsIngestStat.HandleCallback
	 */
	struct UEOSCoreStatsIngestStat_HandleCallback_Params
	{
	public:
		struct FEOSStatsIngestStatCompleteCallbackInfo             Data;                                                    // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0058(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreStatsIngestStat.EOSStatsIngestStatAsync
	 */
	struct UEOSCoreStatsIngestStat_EOSStatsIngestStatAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSStatsIngestStatOptions                          Options;                                                 // 0x0008(0x0060)  (Parm, NativeAccessSpecifierPublic)
		class UEOSCoreStatsIngestStat*                             ReturnValue;                                             // 0x0068(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreStatsQueryStats.HandleCallback
	 */
	struct UEOSCoreStatsQueryStats_HandleCallback_Params
	{
	public:
		struct FEOSStatsOnQueryStatsCompleteCallbackInfo           Data;                                                    // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0058(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreStatsQueryStats.EOSStatsQueryStatsAsync
	 */
	struct UEOSCoreStatsQueryStats_EOSStatsQueryStatsAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSStatsQueryStatsOptions                          Options;                                                 // 0x0008(0x0080)  (Parm, NativeAccessSpecifierPublic)
		class UEOSCoreStatsQueryStats*                             ReturnValue;                                             // 0x0088(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreTitleStorage.GetTitleStorage
	 */
	struct UCoreTitleStorage_GetTitleStorage_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCoreTitleStorage*                                   ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreTitleStorage.EOSTitleStorageReadFile
	 */
	struct UCoreTitleStorage_EOSTitleStorageReadFile_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSTitleStorageReadFileOptions                     Options;                                                 // 0x0008(0x0058)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0060(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSTitleStorageFileTransferRequestHandle           ReturnValue;                                             // 0x0070(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreTitleStorage.EOSTitleStorageQueryFileList
	 */
	struct UCoreTitleStorage_EOSTitleStorageQueryFileList_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSTitleStorageQueryFileListOptions                Options;                                                 // 0x0008(0x0038)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreTitleStorage.EOSTitleStorageQueryFile
	 */
	struct UCoreTitleStorage_EOSTitleStorageQueryFile_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSTitleStorageQueryFileOptions                    Options;                                                 // 0x0008(0x0038)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreTitleStorage.EOSTitleStorageGetFileMetadataCount
	 */
	struct UCoreTitleStorage_EOSTitleStorageGetFileMetadataCount_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSTitleStorageGetFileMetadataCountOptions         Options;                                                 // 0x0008(0x0028)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreTitleStorage.EOSTitleStorageFileTransferRequestGetFileRequestState
	 */
	struct UCoreTitleStorage_EOSTitleStorageFileTransferRequestGetFileRequestState_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSTitleStorageFileTransferRequestHandle           Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreTitleStorage.EOSTitleStorageFileTransferRequestGetFilename
	 */
	struct UCoreTitleStorage_EOSTitleStorageFileTransferRequestGetFilename_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSTitleStorageFileTransferRequestHandle           Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    FilenameStringBufferSizeBytes;                           // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_93IO[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              OutStringBuffer;                                         // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreTitleStorage.EOSTitleStorageFileTransferRequestCancelRequest
	 */
	struct UCoreTitleStorage_EOSTitleStorageFileTransferRequestCancelRequest_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSTitleStorageFileTransferRequestHandle           Handle;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreTitleStorage.EOSTitleStorageDeleteCache
	 */
	struct UCoreTitleStorage_EOSTitleStorageDeleteCache_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSTitleStorageDeleteCacheOptions                  Options;                                                 // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreTitleStorage.EOSTitleStorageCopyFileMetadataByFilename
	 */
	struct UCoreTitleStorage_EOSTitleStorageCopyFileMetadataByFilename_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSTitleStorageCopyFileMetadataByFilenameOptions   Options;                                                 // 0x0008(0x0038)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		struct FEOSTitleStorageFileMetadata                        OutMetadata;                                             // 0x0040(0x0028)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreTitleStorage.EOSTitleStorageCopyFileMetadataAtIndex
	 */
	struct UCoreTitleStorage_EOSTitleStorageCopyFileMetadataAtIndex_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSTitleStorageCopyFileMetadataAtIndexOptions      Options;                                                 // 0x0008(0x002C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CZ4Z[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEOSTitleStorageFileMetadata                        OutMetadata;                                             // 0x0038(0x0028)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreTitleStorageQueryFile.HandleCallback
	 */
	struct UEOSCoreTitleStorageQueryFile_HandleCallback_Params
	{
	public:
		struct FEOSTitleStorageQueryFileCallbackInfo               Data;                                                    // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreTitleStorageQueryFile.EOSTitleStorageQueryFileAsync
	 */
	struct UEOSCoreTitleStorageQueryFile_EOSTitleStorageQueryFileAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSTitleStorageQueryFileOptions                    Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		class UEOSCoreTitleStorageQueryFile*                       ReturnValue;                                             // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreTitleStorageQueryFileList.HandleCallback
	 */
	struct UEOSCoreTitleStorageQueryFileList_HandleCallback_Params
	{
	public:
		struct FEOSTitleStorageQueryFileListCallbackInfo           Data;                                                    // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreTitleStorageQueryFileList.EOSTitleStorageQueryFileListAsync
	 */
	struct UEOSCoreTitleStorageQueryFileList_EOSTitleStorageQueryFileListAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSTitleStorageQueryFileListOptions                Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		class UEOSCoreTitleStorageQueryFileList*                   ReturnValue;                                             // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreTitleStorageReadFile.HandleCallback
	 */
	struct UEOSCoreTitleStorageReadFile_HandleCallback_Params
	{
	public:
		struct FEOSTitleStorageReadFileCallbackInfo                Data;                                                    // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0048(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreTitleStorageReadFile.EOSTitleStorageReadFileAsync
	 */
	struct UEOSCoreTitleStorageReadFile_EOSTitleStorageReadFileAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSTitleStorageReadFileOptions                     Options;                                                 // 0x0008(0x0058)  (Parm, NativeAccessSpecifierPublic)
		class UEOSCoreTitleStorageReadFile*                        ReturnValue;                                             // 0x0060(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreTitleStorageDeleteCache.HandleCallback
	 */
	struct UEOSCoreTitleStorageDeleteCache_HandleCallback_Params
	{
	public:
		struct FEOSTitleStorageDeleteCacheCallbackInfo             Data;                                                    // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreTitleStorageDeleteCache.EOSTitleStorageDeleteCacheAsync
	 */
	struct UEOSCoreTitleStorageDeleteCache_EOSTitleStorageDeleteCacheAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSTitleStorageDeleteCacheOptions                  Options;                                                 // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class UEOSCoreTitleStorageDeleteCache*                     ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreUI.GetUI
	 */
	struct UCoreUI_GetUI_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCoreUI*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreUI.EOSUIShowReportPlayer
	 */
	struct UCoreUI_EOSUIShowReportPlayer_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSUIShowReportPlayerOptions                       Options;                                                 // 0x0008(0x0042)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PT03[0x2];                                   // 0x004A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Callback;                                                // 0x004C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreUI.EOSUIShowFriends
	 */
	struct UCoreUI_EOSUIShowFriends_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSUIShowFriendsOptions                            Options;                                                 // 0x0008(0x0021)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NWKD[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Callback;                                                // 0x002C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreUI.EOSUIShowBlockPlayer
	 */
	struct UCoreUI_EOSUIShowBlockPlayer_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSUIShowBlockPlayerOptions                        Options;                                                 // 0x0008(0x0042)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZPSB[0x2];                                   // 0x004A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Callback;                                                // 0x004C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreUI.EOSUISetToggleFriendsKey
	 */
	struct UCoreUI_EOSUISetToggleFriendsKey_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSUISetToggleFriendsKeyOptions                    Options;                                                 // 0x0008(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreUI.EOSUISetDisplayPreference
	 */
	struct UCoreUI_EOSUISetDisplayPreference_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSUISetDisplayPreferenceOptions                   Options;                                                 // 0x0008(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreUI.EOSUIRemoveNotifyDisplaySettingsUpdated
	 */
	struct UCoreUI_EOSUIRemoveNotifyDisplaySettingsUpdated_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSNotificationId                                  ID;                                                      // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreUI.EOSUIPauseSocialOverlay
	 */
	struct UCoreUI_EOSUIPauseSocialOverlay_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSUIPauseSocialOverlayOptions                     Options;                                                 // 0x0008(0x0001)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreUI.EOSUIIsValidKeyCombination
	 */
	struct UCoreUI_EOSUIIsValidKeyCombination_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    keyCombination;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreUI.EOSUIIsSocialOverlayPaused
	 */
	struct UCoreUI_EOSUIIsSocialOverlayPaused_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSUIIsSocialOverlayPausedOptions                  Options;                                                 // 0x0008(0x0001)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreUI.EOSUIHideFriends
	 */
	struct UCoreUI_EOSUIHideFriends_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSUIHideFriendsOptions                            Options;                                                 // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreUI.EOSUIGetToggleFriendsKey
	 */
	struct UCoreUI_EOSUIGetToggleFriendsKey_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSUIGetToggleFriendsKeyOptions                    Options;                                                 // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreUI.EOSUIGetNotificationLocationPreference
	 */
	struct UCoreUI_EOSUIGetNotificationLocationPreference_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEOSUIENotificationLocation                                ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreUI.EOSUIGetFriendsVisible
	 */
	struct UCoreUI_EOSUIGetFriendsVisible_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSUIGetFriendsVisibleOptions                      Options;                                                 // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreUI.EOSUIGetFriendsExclusiveInput
	 */
	struct UCoreUI_EOSUIGetFriendsExclusiveInput_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSUIGetFriendsExclusiveInputOptions               Options;                                                 // 0x0008(0x0021)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0029(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreUI.EOSUIAddNotifyDisplaySettingsUpdated
	 */
	struct UCoreUI_EOSUIAddNotifyDisplaySettingsUpdated_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSUIAddNotifyDisplaySettingsUpdatedOptions        Options;                                                 // 0x0008(0x0004)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x000C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PMIN[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEOSNotificationId                                  ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreUI.EOSUIAcknowledgeEventId
	 */
	struct UCoreUI_EOSUIAcknowledgeEventId_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSUIAcknowledgeEventIdOptions                     Options;                                                 // 0x0008(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreUIShowFriends.HandleCallback
	 */
	struct UEOSCoreUIShowFriends_HandleCallback_Params
	{
	public:
		struct FEOSUIShowFriendsCallbackInfo                       Data;                                                    // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreUIShowFriends.EOSUIShowFriendsAsync
	 */
	struct UEOSCoreUIShowFriends_EOSUIShowFriendsAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSUIShowFriendsOptions                            Options;                                                 // 0x0008(0x0021)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QH48[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UEOSCoreUIShowFriends*                               ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreUIHideFriends.HandleCallback
	 */
	struct UEOSCoreUIHideFriends_HandleCallback_Params
	{
	public:
		struct FEOSUIHideFriendsCallbackInfo                       Data;                                                    // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreUIHideFriends.EOSUIHideFriendsAsync
	 */
	struct UEOSCoreUIHideFriends_EOSUIHideFriendsAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSUIHideFriendsOptions                            Options;                                                 // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class UEOSCoreUIHideFriends*                               ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreUserInfo.GetUserInfo
	 */
	struct UCoreUserInfo_GetUserInfo_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCoreUserInfo*                                       ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreUserInfo.EOSUserInfoQueryUserInfoByExternalAccount
	 */
	struct UCoreUserInfo_EOSUserInfoQueryUserInfoByExternalAccount_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSUserInfoQueryUserInfoByExternalAccountOptions   Options;                                                 // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreUserInfo.EOSUserInfoQueryUserInfoByDisplayName
	 */
	struct UCoreUserInfo_EOSUserInfoQueryUserInfoByDisplayName_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSUserInfoQueryUserInfoByDisplayNameOptions       Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreUserInfo.EOSUserInfoQueryUserInfo
	 */
	struct UCoreUserInfo_EOSUserInfoQueryUserInfo_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSUserInfoQueryUserInfoOptions                    Options;                                                 // 0x0008(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0050(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreUserInfo.EOSUserInfoGetExternalUserInfoCount
	 */
	struct UCoreUserInfo_EOSUserInfoGetExternalUserInfoCount_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSUserInfoGetExternalUserInfoCountOptions         Options;                                                 // 0x0008(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0050(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreUserInfo.EOSUserInfoCopyUserInfo
	 */
	struct UCoreUserInfo_EOSUserInfoCopyUserInfo_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSUserInfoCopyUserInfoOptions                     Options;                                                 // 0x0008(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSUserInfo                                        OutUserInfo;                                             // 0x0050(0x0078)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x00C8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreUserInfo.EOSUserInfoCopyExternalUserInfoByIndex
	 */
	struct UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByIndex_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSUserInfoCopyExternalUserInfoByIndexOptions      Options;                                                 // 0x0008(0x004C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EKEP[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEOSUserInfoExternalUserInfo                        OutExternalUserInfo;                                     // 0x0058(0x0028)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0080(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreUserInfo.EOSUserInfoCopyExternalUserInfoByAccountType
	 */
	struct UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByAccountType_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSUserInfoCopyExternalUserInfoByAccountTypeOptions Options;                                                 // 0x0008(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEOSUserInfoExternalUserInfo                        OutExternalUserInfo;                                     // 0x0050(0x0028)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0078(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.CoreUserInfo.EOSUserInfoCopyExternalUserInfoByAccountId
	 */
	struct UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByAccountId_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSUserInfoCopyExternalUserInfoByAccountIdOptions  Options;                                                 // 0x0008(0x0058)  (Parm, NativeAccessSpecifierPublic)
		struct FEOSUserInfoExternalUserInfo                        OutExternalUserInfo;                                     // 0x0060(0x0028)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EOSResult                                                  ReturnValue;                                             // 0x0088(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreUserInfoQueryUserInfo.HandleCallback
	 */
	struct UEOSCoreUserInfoQueryUserInfo_HandleCallback_Params
	{
	public:
		struct FEOSUserInfoQueryUserInfoCallbackInfo               Data;                                                    // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0058(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreUserInfoQueryUserInfo.EOSUserInfoQueryUserInfoAsync
	 */
	struct UEOSCoreUserInfoQueryUserInfo_EOSUserInfoQueryUserInfoAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSUserInfoQueryUserInfoOptions                    Options;                                                 // 0x0008(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class UEOSCoreUserInfoQueryUserInfo*                       ReturnValue;                                             // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreUserInfoQueryUserInfoByDisplayName.HandleCallback
	 */
	struct UEOSCoreUserInfoQueryUserInfoByDisplayName_HandleCallback_Params
	{
	public:
		struct FEOSUserInfoQueryUserInfoByDisplayNameCallbackInfo  Data;                                                    // 0x0000(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0068(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreUserInfoQueryUserInfoByDisplayName.EOSUserInfoQueryUserInfoByDisplayNameAsync
	 */
	struct UEOSCoreUserInfoQueryUserInfoByDisplayName_EOSUserInfoQueryUserInfoByDisplayNameAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSUserInfoQueryUserInfoByDisplayNameOptions       Options;                                                 // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
		class UEOSCoreUserInfoQueryUserInfoByDisplayName*          ReturnValue;                                             // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreUserInfoByExternalAccount.HandleCallback
	 */
	struct UEOSCoreUserInfoByExternalAccount_HandleCallback_Params
	{
	public:
		struct FEOSUserInfoQueryUserInfoByExternalAccountCallbackInfo Data;                                                    // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0070(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EOSCore.EOSCoreUserInfoByExternalAccount.EOSUserInfoQueryUserInfoByExternalAccountAsync
	 */
	struct UEOSCoreUserInfoByExternalAccount_EOSUserInfoQueryUserInfoByExternalAccountAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSUserInfoQueryUserInfoByExternalAccountOptions   Options;                                                 // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
		class UEOSCoreUserInfoByExternalAccount*                   ReturnValue;                                             // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
