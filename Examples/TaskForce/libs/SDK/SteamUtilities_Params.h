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
	 * Function SteamUtilities.SteamUtilitiesDownloadLeaderboardEntriesCallbackProxy.CreateProxyObjectForDownloadLeaderboardEntriesForUsers
	 */
	struct USteamUtilitiesDownloadLeaderboardEntriesCallbackProxy_CreateProxyObjectForDownloadLeaderboardEntriesForUsers_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<int64_t>                                            SteamIDs;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class USteamUtilitiesDownloadLeaderboardEntriesCallbackProxy* ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SteamUtilities.SteamUtilitiesDownloadLeaderboardEntriesCallbackProxy.CreateProxyObjectForDownloadLeaderboardEntries
	 */
	struct USteamUtilitiesDownloadLeaderboardEntriesCallbackProxy_CreateProxyObjectForDownloadLeaderboardEntries_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESteamUtilitiesLeaderboardDataRequest                      Type;                                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6UBH[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Start;                                                   // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    End;                                                     // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XE4L[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USteamUtilitiesDownloadLeaderboardEntriesCallbackProxy* ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SteamUtilities.SteamUtilitiesGetNumberOfCurrentPlayersCallbackProxy.CreateProxyObjectForGetNumberOfCurrentPlayers
	 */
	struct USteamUtilitiesGetNumberOfCurrentPlayersCallbackProxy_CreateProxyObjectForGetNumberOfCurrentPlayers_Params
	{
	public:
		class USteamUtilitiesGetNumberOfCurrentPlayersCallbackProxy* ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SteamUtilities.SteamUtilitiesRequestClanOfficerListCallbackProxy.CreateProxyObjectForRequestClanOfficerList
	 */
	struct USteamUtilitiesRequestClanOfficerListCallbackProxy_CreateProxyObjectForRequestClanOfficerList_Params
	{
	public:
		int64_t                                                    GroupID;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USteamUtilitiesRequestClanOfficerListCallbackProxy*  ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SteamUtilities.SteamUtilitiesRequestUserStatsCallbackProxy.CreateProxyObjectForRequestUserStats
	 */
	struct USteamUtilitiesRequestUserStatsCallbackProxy_CreateProxyObjectForRequestUserStats_Params
	{
	public:
		int64_t                                                    SteamID;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<class FString, bool>                                  Stats;                                                   // 0x0008(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class USteamUtilitiesRequestUserStatsCallbackProxy*        ReturnValue;                                             // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
