/**
 * Name: Task_Force
 * Version: 0.3.6.1537
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0041FA80
	 * 		Name   -> Function SteamUtilities.SteamUtilitiesDownloadLeaderboardEntriesCallbackProxy.CreateProxyObjectForDownloadLeaderboardEntriesForUsers
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int64_t>                                    SteamIDs                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class USteamUtilitiesDownloadLeaderboardEntriesCallbackProxy* USteamUtilitiesDownloadLeaderboardEntriesCallbackProxy::STATIC_CreateProxyObjectForDownloadLeaderboardEntriesForUsers(const class FString& Name, TArray<int64_t> SteamIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamUtilities.SteamUtilitiesDownloadLeaderboardEntriesCallbackProxy.CreateProxyObjectForDownloadLeaderboardEntriesForUsers");
		
		USteamUtilitiesDownloadLeaderboardEntriesCallbackProxy_CreateProxyObjectForDownloadLeaderboardEntriesForUsers_Params params {};
		params.Name = Name;
		params.SteamIDs = SteamIDs;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0041F940
	 * 		Name   -> Function SteamUtilities.SteamUtilitiesDownloadLeaderboardEntriesCallbackProxy.CreateProxyObjectForDownloadLeaderboardEntries
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamUtilitiesLeaderboardDataRequest              Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamUtilitiesDownloadLeaderboardEntriesCallbackProxy* USteamUtilitiesDownloadLeaderboardEntriesCallbackProxy::STATIC_CreateProxyObjectForDownloadLeaderboardEntries(const class FString& Name, ESteamUtilitiesLeaderboardDataRequest Type, int32_t Start, int32_t End)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamUtilities.SteamUtilitiesDownloadLeaderboardEntriesCallbackProxy.CreateProxyObjectForDownloadLeaderboardEntries");
		
		USteamUtilitiesDownloadLeaderboardEntriesCallbackProxy_CreateProxyObjectForDownloadLeaderboardEntries_Params params {};
		params.Name = Name;
		params.Type = Type;
		params.Start = Start;
		params.End = End;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USteamUtilitiesDownloadLeaderboardEntriesCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamUtilitiesDownloadLeaderboardEntriesCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamUtilities.SteamUtilitiesDownloadLeaderboardEntriesCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0041FB80
	 * 		Name   -> Function SteamUtilities.SteamUtilitiesGetNumberOfCurrentPlayersCallbackProxy.CreateProxyObjectForGetNumberOfCurrentPlayers
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class USteamUtilitiesGetNumberOfCurrentPlayersCallbackProxy* USteamUtilitiesGetNumberOfCurrentPlayersCallbackProxy::STATIC_CreateProxyObjectForGetNumberOfCurrentPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamUtilities.SteamUtilitiesGetNumberOfCurrentPlayersCallbackProxy.CreateProxyObjectForGetNumberOfCurrentPlayers");
		
		USteamUtilitiesGetNumberOfCurrentPlayersCallbackProxy_CreateProxyObjectForGetNumberOfCurrentPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USteamUtilitiesGetNumberOfCurrentPlayersCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamUtilitiesGetNumberOfCurrentPlayersCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamUtilities.SteamUtilitiesGetNumberOfCurrentPlayersCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USteamUtilitiesHelpers.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamUtilitiesHelpers::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamUtilities.SteamUtilitiesHelpers");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0041FBB0
	 * 		Name   -> Function SteamUtilities.SteamUtilitiesRequestClanOfficerListCallbackProxy.CreateProxyObjectForRequestClanOfficerList
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int64_t                                            GroupID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamUtilitiesRequestClanOfficerListCallbackProxy* USteamUtilitiesRequestClanOfficerListCallbackProxy::STATIC_CreateProxyObjectForRequestClanOfficerList(int64_t GroupID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamUtilities.SteamUtilitiesRequestClanOfficerListCallbackProxy.CreateProxyObjectForRequestClanOfficerList");
		
		USteamUtilitiesRequestClanOfficerListCallbackProxy_CreateProxyObjectForRequestClanOfficerList_Params params {};
		params.GroupID = GroupID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USteamUtilitiesRequestClanOfficerListCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamUtilitiesRequestClanOfficerListCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamUtilities.SteamUtilitiesRequestClanOfficerListCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0041FC30
	 * 		Name   -> Function SteamUtilities.SteamUtilitiesRequestUserStatsCallbackProxy.CreateProxyObjectForRequestUserStats
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int64_t                                            SteamID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, bool>                          Stats                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class USteamUtilitiesRequestUserStatsCallbackProxy* USteamUtilitiesRequestUserStatsCallbackProxy::STATIC_CreateProxyObjectForRequestUserStats(int64_t SteamID, TMap<class FString, bool> Stats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamUtilities.SteamUtilitiesRequestUserStatsCallbackProxy.CreateProxyObjectForRequestUserStats");
		
		USteamUtilitiesRequestUserStatsCallbackProxy_CreateProxyObjectForRequestUserStats_Params params {};
		params.SteamID = SteamID;
		params.Stats = Stats;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USteamUtilitiesRequestUserStatsCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamUtilitiesRequestUserStatsCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamUtilities.SteamUtilitiesRequestUserStatsCallbackProxy");
		return ptr;
	}

}


