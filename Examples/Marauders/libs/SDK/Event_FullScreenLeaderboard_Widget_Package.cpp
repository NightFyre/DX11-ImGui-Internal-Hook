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
	 * 		Name   -> Function Event_FullScreenLeaderboard_Widget.Event_FullScreenLeaderboard_Widget_C.isLoading
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SetAsLoading                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEvent_FullScreenLeaderboard_Widget_C::isLoading(bool SetAsLoading)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Event_FullScreenLeaderboard_Widget.Event_FullScreenLeaderboard_Widget_C.isLoading");
		
		UEvent_FullScreenLeaderboard_Widget_C_isLoading_Params params {};
		params.SetAsLoading = SetAsLoading;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Event_FullScreenLeaderboard_Widget.Event_FullScreenLeaderboard_Widget_C.Construct
	 * 		Flags  -> ()
	 */
	void UEvent_FullScreenLeaderboard_Widget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Event_FullScreenLeaderboard_Widget.Event_FullScreenLeaderboard_Widget_C.Construct");
		
		UEvent_FullScreenLeaderboard_Widget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Event_FullScreenLeaderboard_Widget.Event_FullScreenLeaderboard_Widget_C.BndEvt__Event_FullScreenLeaderboard_Widget_MM_GenericSmallBtn01_GoBack_EventLeaderboard_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEvent_FullScreenLeaderboard_Widget_C::BndEvt__Event_FullScreenLeaderboard_Widget_MM_GenericSmallBtn01_GoBack_EventLeaderboard_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Event_FullScreenLeaderboard_Widget.Event_FullScreenLeaderboard_Widget_C.BndEvt__Event_FullScreenLeaderboard_Widget_MM_GenericSmallBtn01_GoBack_EventLeaderboard_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature");
		
		UEvent_FullScreenLeaderboard_Widget_C_BndEvt__Event_FullScreenLeaderboard_Widget_MM_GenericSmallBtn01_GoBack_EventLeaderboard_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Event_FullScreenLeaderboard_Widget.Event_FullScreenLeaderboard_Widget_C.FillList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FLeaderBoardMemberInfo>              leaderboardback                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UEvent_FullScreenLeaderboard_Widget_C::FillList(bool Success, TArray<struct FLeaderBoardMemberInfo> leaderboardback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Event_FullScreenLeaderboard_Widget.Event_FullScreenLeaderboard_Widget_C.FillList");
		
		UEvent_FullScreenLeaderboard_Widget_C_FillList_Params params {};
		params.Success = Success;
		params.leaderboardback = leaderboardback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Event_FullScreenLeaderboard_Widget.Event_FullScreenLeaderboard_Widget_C.BndEvt__Event_FullScreenLeaderboard_Widget_MM_Event_Refresh_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEvent_FullScreenLeaderboard_Widget_C::BndEvt__Event_FullScreenLeaderboard_Widget_MM_Event_Refresh_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Event_FullScreenLeaderboard_Widget.Event_FullScreenLeaderboard_Widget_C.BndEvt__Event_FullScreenLeaderboard_Widget_MM_Event_Refresh_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature");
		
		UEvent_FullScreenLeaderboard_Widget_C_BndEvt__Event_FullScreenLeaderboard_Widget_MM_Event_Refresh_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Event_FullScreenLeaderboard_Widget.Event_FullScreenLeaderboard_Widget_C.ExecuteUbergraph_Event_FullScreenLeaderboard_Widget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEvent_FullScreenLeaderboard_Widget_C::ExecuteUbergraph_Event_FullScreenLeaderboard_Widget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Event_FullScreenLeaderboard_Widget.Event_FullScreenLeaderboard_Widget_C.ExecuteUbergraph_Event_FullScreenLeaderboard_Widget");
		
		UEvent_FullScreenLeaderboard_Widget_C_ExecuteUbergraph_Event_FullScreenLeaderboard_Widget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEvent_FullScreenLeaderboard_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEvent_FullScreenLeaderboard_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Event_FullScreenLeaderboard_Widget.Event_FullScreenLeaderboard_Widget_C");
		return ptr;
	}

}


