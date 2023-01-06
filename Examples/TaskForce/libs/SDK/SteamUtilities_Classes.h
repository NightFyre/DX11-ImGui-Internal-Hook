#pragma once

/**
 * Name: Task_Force
 * Version: 0.3.6.1537
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
	 * Class SteamUtilities.SteamUtilitiesDownloadLeaderboardEntriesCallbackProxy
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class USteamUtilitiesDownloadLeaderboardEntriesCallbackProxy : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YN43[0x40];                                  // 0x0048(0x0040) MISSED OFFSET (PADDING)

	public:
		class USteamUtilitiesDownloadLeaderboardEntriesCallbackProxy* STATIC_CreateProxyObjectForDownloadLeaderboardEntriesForUsers(const class FString& Name, TArray<int64_t> SteamIDs);
		class USteamUtilitiesDownloadLeaderboardEntriesCallbackProxy* STATIC_CreateProxyObjectForDownloadLeaderboardEntries(const class FString& Name, ESteamUtilitiesLeaderboardDataRequest Type, int32_t Start, int32_t End);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamUtilities.SteamUtilitiesGetNumberOfCurrentPlayersCallbackProxy
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class USteamUtilitiesGetNumberOfCurrentPlayersCallbackProxy : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZRMV[0x10];                                  // 0x0048(0x0010) MISSED OFFSET (PADDING)

	public:
		class USteamUtilitiesGetNumberOfCurrentPlayersCallbackProxy* STATIC_CreateProxyObjectForGetNumberOfCurrentPlayers();
		static UClass* StaticClass();
	};

	/**
	 * Class SteamUtilities.SteamUtilitiesHelpers
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USteamUtilitiesHelpers : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SteamUtilities.SteamUtilitiesRequestClanOfficerListCallbackProxy
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class USteamUtilitiesRequestClanOfficerListCallbackProxy : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FLDS[0x10];                                  // 0x0048(0x0010) MISSED OFFSET (PADDING)

	public:
		class USteamUtilitiesRequestClanOfficerListCallbackProxy* STATIC_CreateProxyObjectForRequestClanOfficerList(int64_t GroupID);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamUtilities.SteamUtilitiesRequestUserStatsCallbackProxy
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class USteamUtilitiesRequestUserStatsCallbackProxy : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U49I[0x10];                                  // 0x0048(0x0010) MISSED OFFSET (PADDING)

	public:
		class USteamUtilitiesRequestUserStatsCallbackProxy* STATIC_CreateProxyObjectForRequestUserStats(int64_t SteamID, TMap<class FString, bool> Stats);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
