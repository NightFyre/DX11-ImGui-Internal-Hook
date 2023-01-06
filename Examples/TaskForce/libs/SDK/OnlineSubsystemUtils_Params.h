#pragma once

/**
 * Name: Task_Force
 * Version: 0.3.6.1537
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
	 * Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress
	 */
	struct UAchievementBlueprintLibrary_GetCachedAchievementProgress_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AchievementID;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFoundID;                                                // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MNPP[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Progress;                                                // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription
	 */
	struct UAchievementBlueprintLibrary_GetCachedAchievementDescription_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AchievementID;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFoundID;                                                // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_G0WC[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Title;                                                   // 0x0020(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
		class FText                                                LockedDescription;                                       // 0x0038(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
		class FText                                                UnlockedDescription;                                     // 0x0050(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       bHidden;                                                 // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements
	 */
	struct UAchievementQueryCallbackProxy_CacheAchievements_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAchievementQueryCallbackProxy*                      ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions
	 */
	struct UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAchievementQueryCallbackProxy*                      ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress
	 */
	struct UAchievementWriteCallbackProxy_WriteAchievementProgress_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AchievementName;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Progress;                                                // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    UserTag;                                                 // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAchievementWriteCallbackProxy*                      ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService
	 */
	struct UConnectionCallbackProxy_ConnectToService_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UConnectionCallbackProxy*                            ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession
	 */
	struct UCreateSessionCallbackProxy_CreateSession_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PublicConnections;                                       // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUseLAN;                                                 // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TZNW[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCreateSessionCallbackProxy*                         ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession
	 */
	struct UDestroySessionCallbackProxy_DestroySession_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDestroySessionCallbackProxy*                        ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch
	 */
	struct UEndMatchCallbackProxy_EndMatch_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8GAO[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              MatchID;                                                 // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMPMatchOutcome                                            LocalPlayerOutcome;                                      // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMPMatchOutcome                                            OtherPlayersOutcome;                                     // 0x0031(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KFPA[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UEndMatchCallbackProxy*                              ReturnValue;                                             // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn
	 */
	struct UEndTurnCallbackProxy_EndTurn_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              MatchID;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_O9ID[0x10];                                  // 0x0020(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UEndTurnCallbackProxy*                               ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName
	 */
	struct UFindSessionsCallbackProxy_GetServerName_Params
	{
	public:
		struct FBlueprintSessionResult                             Result;                                                  // 0x0000(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x00B8(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs
	 */
	struct UFindSessionsCallbackProxy_GetPingInMs_Params
	{
	public:
		struct FBlueprintSessionResult                             Result;                                                  // 0x0000(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x00B8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers
	 */
	struct UFindSessionsCallbackProxy_GetMaxPlayers_Params
	{
	public:
		struct FBlueprintSessionResult                             Result;                                                  // 0x0000(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x00B8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers
	 */
	struct UFindSessionsCallbackProxy_GetCurrentPlayers_Params
	{
	public:
		struct FBlueprintSessionResult                             Result;                                                  // 0x0000(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x00B8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions
	 */
	struct UFindSessionsCallbackProxy_FindSessions_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MaxResults;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUseLAN;                                                 // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_N8MG[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UFindSessionsCallbackProxy*                          ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch
	 */
	struct UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_T1QO[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    MinPlayers;                                              // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MaxPlayers;                                              // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PlayerGroup;                                             // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ShowExistingMatches;                                     // 0x002C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_49GH[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UFindTurnBasedMatchCallbackProxy*                    ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase
	 */
	struct UInAppPurchaseCallbackProxy_CreateProxyObjectForInAppPurchase_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInAppPurchaseProductRequest                        ProductRequest;                                          // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UInAppPurchaseCallbackProxy*                         ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery
	 */
	struct UInAppPurchaseQueryCallbackProxy_CreateProxyObjectForInAppPurchaseQuery_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      ProductIdentifiers;                                      // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class UInAppPurchaseQueryCallbackProxy*                    ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore
	 */
	struct UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Params
	{
	public:
		TArray<struct FInAppPurchaseProductRequest>                ConsumableProductFlags;                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class APlayerController*                                   PlayerController;                                        // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UInAppPurchaseRestoreCallbackProxy*                  ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession
	 */
	struct UJoinSessionCallbackProxy_JoinSession_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FBlueprintSessionResult                             SearchResult;                                            // 0x0010(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UJoinSessionCallbackProxy*                           ReturnValue;                                             // 0x00C8(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger
	 */
	struct ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                StatName;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    StatValue;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush
	 */
	struct ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                SessionName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ULeaderboardFlushCallbackProxy*                      ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
	 */
	struct ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                StatName;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ULeaderboardQueryCallbackProxy*                      ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout
	 */
	struct ULogoutCallbackProxy_Logout_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ULogoutCallbackProxy*                                ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected
	 */
	struct AOnlineBeaconClient_ClientOnConnected_Params
	{	};

	/**
	 * Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest
	 */
	struct APartyBeaconClient_ServerUpdateReservationRequest_Params
	{
	public:
		class FString                                              SessionId;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPartyReservation                                   ReservationUpdate;                                       // 0x0010(0x0050)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest
	 */
	struct APartyBeaconClient_ServerReservationRequest_Params
	{
	public:
		class FString                                              SessionId;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPartyReservation                                   Reservation;                                             // 0x0010(0x0050)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest
	 */
	struct APartyBeaconClient_ServerCancelReservationRequest_Params
	{
	public:
		struct FUniqueNetIdRepl                                    PartyLeader;                                             // 0x0000(0x0028)  (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates
	 */
	struct APartyBeaconClient_ClientSendReservationUpdates_Params
	{
	public:
		int32_t                                                    NumRemainingReservations;                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull
	 */
	struct APartyBeaconClient_ClientSendReservationFull_Params
	{	};

	/**
	 * Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse
	 */
	struct APartyBeaconClient_ClientReservationResponse_Params
	{
	public:
		EPartyReservationResult                                    ReservationResponse;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse
	 */
	struct APartyBeaconClient_ClientCancelReservationResponse_Params
	{
	public:
		EPartyReservationResult                                    ReservationResponse;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch
	 */
	struct UQuitMatchCallbackProxy_QuitMatch_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              MatchID;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMPMatchOutcome                                            Outcome;                                                 // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2UTC[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    TurnTimeoutInSeconds;                                    // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UQuitMatchCallbackProxy*                             ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI
	 */
	struct UShowLoginUICallbackProxy_ShowExternalLoginUI_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   InPlayerController;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UShowLoginUICallbackProxy*                           ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest
	 */
	struct ASpectatorBeaconClient_ServerReservationRequest_Params
	{
	public:
		class FString                                              SessionId;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSpectatorReservation                               Reservation;                                             // 0x0010(0x0078)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest
	 */
	struct ASpectatorBeaconClient_ServerCancelReservationRequest_Params
	{
	public:
		struct FUniqueNetIdRepl                                    Spectator;                                               // 0x0000(0x0028)  (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates
	 */
	struct ASpectatorBeaconClient_ClientSendReservationUpdates_Params
	{
	public:
		int32_t                                                    NumRemainingReservations;                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationFull
	 */
	struct ASpectatorBeaconClient_ClientSendReservationFull_Params
	{	};

	/**
	 * Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse
	 */
	struct ASpectatorBeaconClient_ClientReservationResponse_Params
	{
	public:
		ESpectatorReservationResult                                ReservationResponse;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse
	 */
	struct ASpectatorBeaconClient_ClientCancelReservationResponse_Params
	{
	public:
		ESpectatorReservationResult                                ReservationResponse;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemUtils.TestBeaconClient.ServerPong
	 */
	struct ATestBeaconClient_ServerPong_Params
	{	};

	/**
	 * Function OnlineSubsystemUtils.TestBeaconClient.ClientPing
	 */
	struct ATestBeaconClient_ClientPing_Params
	{	};

	/**
	 * Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject
	 */
	struct UTurnBasedBlueprintLibrary_RegisterTurnBasedMatchInterfaceObject_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             Object;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName
	 */
	struct UTurnBasedBlueprintLibrary_GetPlayerDisplayName_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              MatchID;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PlayerIndex;                                             // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IET1[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              PlayerDisplayName;                                       // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex
	 */
	struct UTurnBasedBlueprintLibrary_GetMyPlayerIndex_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              MatchID;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PlayerIndex;                                             // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn
	 */
	struct UTurnBasedBlueprintLibrary_GetIsMyTurn_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              MatchID;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsMyTurn;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling
	 */
	struct UVoipListenerSynthComponent_IsIdling_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
