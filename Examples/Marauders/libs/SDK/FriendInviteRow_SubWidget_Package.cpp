/**
 * Name: RaidGame
 * Version: 1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FriendInviteRow_SubWidget.FriendInviteRow_SubWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UFriendInviteRow_SubWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FriendInviteRow_SubWidget.FriendInviteRow_SubWidget_C.Construct");
		
		UFriendInviteRow_SubWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FriendInviteRow_SubWidget.FriendInviteRow_SubWidget_C.BndEvt__FriendInviteRow_SubWidget_MM_Crew_KickPlayer_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFriendInviteRow_SubWidget_C::BndEvt__FriendInviteRow_SubWidget_MM_Crew_KickPlayer_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FriendInviteRow_SubWidget.FriendInviteRow_SubWidget_C.BndEvt__FriendInviteRow_SubWidget_MM_Crew_KickPlayer_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature");
		
		UFriendInviteRow_SubWidget_C_BndEvt__FriendInviteRow_SubWidget_MM_Crew_KickPlayer_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FriendInviteRow_SubWidget.FriendInviteRow_SubWidget_C.ShowIsSendingState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShowSending                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFriendInviteRow_SubWidget_C::ShowIsSendingState(bool ShowSending)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FriendInviteRow_SubWidget.FriendInviteRow_SubWidget_C.ShowIsSendingState");
		
		UFriendInviteRow_SubWidget_C_ShowIsSendingState_Params params {};
		params.ShowSending = ShowSending;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FriendInviteRow_SubWidget.FriendInviteRow_SubWidget_C.RefreshFriendInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamNakamaFriend                          FriendInfoToRefresh                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               CrewisCompletelyFull                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFriendInviteRow_SubWidget_C::RefreshFriendInfo(const struct FSteamNakamaFriend& FriendInfoToRefresh, bool CrewisCompletelyFull)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FriendInviteRow_SubWidget.FriendInviteRow_SubWidget_C.RefreshFriendInfo");
		
		UFriendInviteRow_SubWidget_C_RefreshFriendInfo_Params params {};
		params.FriendInfoToRefresh = FriendInfoToRefresh;
		params.CrewisCompletelyFull = CrewisCompletelyFull;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FriendInviteRow_SubWidget.FriendInviteRow_SubWidget_C.ExecuteUbergraph_FriendInviteRow_SubWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFriendInviteRow_SubWidget_C::ExecuteUbergraph_FriendInviteRow_SubWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FriendInviteRow_SubWidget.FriendInviteRow_SubWidget_C.ExecuteUbergraph_FriendInviteRow_SubWidget");
		
		UFriendInviteRow_SubWidget_C_ExecuteUbergraph_FriendInviteRow_SubWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FriendInviteRow_SubWidget.FriendInviteRow_SubWidget_C.ED_SendInvite__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamNakamaFriend                          NakamaFriend                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UFriendInviteRow_SubWidget_C::ED_SendInvite__DelegateSignature(const struct FSteamNakamaFriend& NakamaFriend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FriendInviteRow_SubWidget.FriendInviteRow_SubWidget_C.ED_SendInvite__DelegateSignature");
		
		UFriendInviteRow_SubWidget_C_ED_SendInvite__DelegateSignature_Params params {};
		params.NakamaFriend = NakamaFriend;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFriendInviteRow_SubWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFriendInviteRow_SubWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FriendInviteRow_SubWidget.FriendInviteRow_SubWidget_C");
		return ptr;
	}

}


