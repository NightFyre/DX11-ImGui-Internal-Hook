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
	 * 		Name   -> Function LeaderboardWidget.LeaderboardWidget_C.SwitchRefreshing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isLoading                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULeaderboardWidget_C::SwitchRefreshing(bool isLoading)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LeaderboardWidget.LeaderboardWidget_C.SwitchRefreshing");
		
		ULeaderboardWidget_C_SwitchRefreshing_Params params {};
		params.isLoading = isLoading;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LeaderboardWidget.LeaderboardWidget_C.SwitchTabLook
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_LeaderboardTypes                                 SwitchTo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULeaderboardWidget_C::SwitchTabLook(E_LeaderboardTypes SwitchTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LeaderboardWidget.LeaderboardWidget_C.SwitchTabLook");
		
		ULeaderboardWidget_C_SwitchTabLook_Params params {};
		params.SwitchTo = SwitchTo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LeaderboardWidget.LeaderboardWidget_C.OnCallback_81F04D564FF37A07EDBD1CA8A81C39B2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSLeaderboardsOnQueryLeaderboardRanksCompleteCallbackInfo Data                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void ULeaderboardWidget_C::OnCallback_81F04D564FF37A07EDBD1CA8A81C39B2(const struct FEOSLeaderboardsOnQueryLeaderboardRanksCompleteCallbackInfo& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LeaderboardWidget.LeaderboardWidget_C.OnCallback_81F04D564FF37A07EDBD1CA8A81C39B2");
		
		ULeaderboardWidget_C_OnCallback_81F04D564FF37A07EDBD1CA8A81C39B2_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LeaderboardWidget.LeaderboardWidget_C.OnCallback_8388F38A4B0CFEF829B713BFE84A3F06
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSLeaderboardsOnQueryLeaderboardDefinitionsCompleteCallbackInfo Data                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void ULeaderboardWidget_C::OnCallback_8388F38A4B0CFEF829B713BFE84A3F06(const struct FEOSLeaderboardsOnQueryLeaderboardDefinitionsCompleteCallbackInfo& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LeaderboardWidget.LeaderboardWidget_C.OnCallback_8388F38A4B0CFEF829B713BFE84A3F06");
		
		ULeaderboardWidget_C_OnCallback_8388F38A4B0CFEF829B713BFE84A3F06_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LeaderboardWidget.LeaderboardWidget_C.BndEvt__MM_GenericSmallBtn01_GoBack_BugReportMenu_K2Node_ComponentBoundEvent_3_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULeaderboardWidget_C::BndEvt__MM_GenericSmallBtn01_GoBack_BugReportMenu_K2Node_ComponentBoundEvent_3_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LeaderboardWidget.LeaderboardWidget_C.BndEvt__MM_GenericSmallBtn01_GoBack_BugReportMenu_K2Node_ComponentBoundEvent_3_GenericSmallBtnPressed__DelegateSignature");
		
		ULeaderboardWidget_C_BndEvt__MM_GenericSmallBtn01_GoBack_BugReportMenu_K2Node_ComponentBoundEvent_3_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LeaderboardWidget.LeaderboardWidget_C.Fill_List
	 * 		Flags  -> ()
	 */
	void ULeaderboardWidget_C::Fill_List()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LeaderboardWidget.LeaderboardWidget_C.Fill_List");
		
		ULeaderboardWidget_C_Fill_List_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LeaderboardWidget.LeaderboardWidget_C.LoadDefault
	 * 		Flags  -> ()
	 */
	void ULeaderboardWidget_C::LoadDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LeaderboardWidget.LeaderboardWidget_C.LoadDefault");
		
		ULeaderboardWidget_C_LoadDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LeaderboardWidget.LeaderboardWidget_C.BndEvt__LeaderboardWidget_MM_GenericTabBtn01_K2Node_ComponentBoundEvent_4_ButtonHasBeenPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      WhatPressed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ULeaderboardWidget_C::BndEvt__LeaderboardWidget_MM_GenericTabBtn01_K2Node_ComponentBoundEvent_4_ButtonHasBeenPressed__DelegateSignature(const class FString& WhatPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LeaderboardWidget.LeaderboardWidget_C.BndEvt__LeaderboardWidget_MM_GenericTabBtn01_K2Node_ComponentBoundEvent_4_ButtonHasBeenPressed__DelegateSignature");
		
		ULeaderboardWidget_C_BndEvt__LeaderboardWidget_MM_GenericTabBtn01_K2Node_ComponentBoundEvent_4_ButtonHasBeenPressed__DelegateSignature_Params params {};
		params.WhatPressed = WhatPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LeaderboardWidget.LeaderboardWidget_C.BndEvt__LeaderboardWidget_MM_GenericTabBtn01_1_K2Node_ComponentBoundEvent_5_ButtonHasBeenPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      WhatPressed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ULeaderboardWidget_C::BndEvt__LeaderboardWidget_MM_GenericTabBtn01_1_K2Node_ComponentBoundEvent_5_ButtonHasBeenPressed__DelegateSignature(const class FString& WhatPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LeaderboardWidget.LeaderboardWidget_C.BndEvt__LeaderboardWidget_MM_GenericTabBtn01_1_K2Node_ComponentBoundEvent_5_ButtonHasBeenPressed__DelegateSignature");
		
		ULeaderboardWidget_C_BndEvt__LeaderboardWidget_MM_GenericTabBtn01_1_K2Node_ComponentBoundEvent_5_ButtonHasBeenPressed__DelegateSignature_Params params {};
		params.WhatPressed = WhatPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LeaderboardWidget.LeaderboardWidget_C.BndEvt__LeaderboardWidget_MM_GenericTabBtn01_2_K2Node_ComponentBoundEvent_6_ButtonHasBeenPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      WhatPressed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ULeaderboardWidget_C::BndEvt__LeaderboardWidget_MM_GenericTabBtn01_2_K2Node_ComponentBoundEvent_6_ButtonHasBeenPressed__DelegateSignature(const class FString& WhatPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LeaderboardWidget.LeaderboardWidget_C.BndEvt__LeaderboardWidget_MM_GenericTabBtn01_2_K2Node_ComponentBoundEvent_6_ButtonHasBeenPressed__DelegateSignature");
		
		ULeaderboardWidget_C_BndEvt__LeaderboardWidget_MM_GenericTabBtn01_2_K2Node_ComponentBoundEvent_6_ButtonHasBeenPressed__DelegateSignature_Params params {};
		params.WhatPressed = WhatPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LeaderboardWidget.LeaderboardWidget_C.FIll_AWS_Lists
	 * 		Flags  -> ()
	 */
	void ULeaderboardWidget_C::FIll_AWS_Lists()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LeaderboardWidget.LeaderboardWidget_C.FIll_AWS_Lists");
		
		ULeaderboardWidget_C_FIll_AWS_Lists_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LeaderboardWidget.LeaderboardWidget_C.aws_AllLeaderboardKills
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FLeaderBoardMemberInfo>              leaderboardback                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ULeaderboardWidget_C::aws_AllLeaderboardKills(TArray<struct FLeaderBoardMemberInfo> leaderboardback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LeaderboardWidget.LeaderboardWidget_C.aws_AllLeaderboardKills");
		
		ULeaderboardWidget_C_aws_AllLeaderboardKills_Params params {};
		params.leaderboardback = leaderboardback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LeaderboardWidget.LeaderboardWidget_C.aws_MyLeaderboardKills
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLeaderBoardMemberInfo                      PlayerInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ULeaderboardWidget_C::aws_MyLeaderboardKills(const struct FLeaderBoardMemberInfo& PlayerInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LeaderboardWidget.LeaderboardWidget_C.aws_MyLeaderboardKills");
		
		ULeaderboardWidget_C_aws_MyLeaderboardKills_Params params {};
		params.PlayerInfo = PlayerInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LeaderboardWidget.LeaderboardWidget_C.BndEvt__LeaderboardWidget_Button_137_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULeaderboardWidget_C::BndEvt__LeaderboardWidget_Button_137_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LeaderboardWidget.LeaderboardWidget_C.BndEvt__LeaderboardWidget_Button_137_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		ULeaderboardWidget_C_BndEvt__LeaderboardWidget_Button_137_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LeaderboardWidget.LeaderboardWidget_C.Fill_NakamaLeaderboard
	 * 		Flags  -> ()
	 */
	void ULeaderboardWidget_C::Fill_NakamaLeaderboard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LeaderboardWidget.LeaderboardWidget_C.Fill_NakamaLeaderboard");
		
		ULeaderboardWidget_C_Fill_NakamaLeaderboard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LeaderboardWidget.LeaderboardWidget_C.Return_NakamaLeaderboard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FNakamaNLeaderBoardRow>              returnedrecords                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FNakamaNLeaderBoardRow>              returnedrecordsSpecific                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FString                                      pageNumNext                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      pageNumPrev                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ULeaderboardWidget_C::Return_NakamaLeaderboard(TArray<struct FNakamaNLeaderBoardRow> returnedrecords, TArray<struct FNakamaNLeaderBoardRow> returnedrecordsSpecific, const class FString& pageNumNext, const class FString& pageNumPrev)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LeaderboardWidget.LeaderboardWidget_C.Return_NakamaLeaderboard");
		
		ULeaderboardWidget_C_Return_NakamaLeaderboard_Params params {};
		params.returnedrecords = returnedrecords;
		params.returnedrecordsSpecific = returnedrecordsSpecific;
		params.pageNumNext = pageNumNext;
		params.pageNumPrev = pageNumPrev;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LeaderboardWidget.LeaderboardWidget_C.ReturnMyAccount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNakamaAccount                              Myaccount                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ULeaderboardWidget_C::ReturnMyAccount(const struct FNakamaAccount& Myaccount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LeaderboardWidget.LeaderboardWidget_C.ReturnMyAccount");
		
		ULeaderboardWidget_C_ReturnMyAccount_Params params {};
		params.Myaccount = Myaccount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LeaderboardWidget.LeaderboardWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void ULeaderboardWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LeaderboardWidget.LeaderboardWidget_C.Construct");
		
		ULeaderboardWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LeaderboardWidget.LeaderboardWidget_C.BndEvt__LeaderboardWidget_MM_GenericTabBtn01_KillsNearMe_K2Node_ComponentBoundEvent_1_ButtonHasBeenPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      WhatPressed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ULeaderboardWidget_C::BndEvt__LeaderboardWidget_MM_GenericTabBtn01_KillsNearMe_K2Node_ComponentBoundEvent_1_ButtonHasBeenPressed__DelegateSignature(const class FString& WhatPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LeaderboardWidget.LeaderboardWidget_C.BndEvt__LeaderboardWidget_MM_GenericTabBtn01_KillsNearMe_K2Node_ComponentBoundEvent_1_ButtonHasBeenPressed__DelegateSignature");
		
		ULeaderboardWidget_C_BndEvt__LeaderboardWidget_MM_GenericTabBtn01_KillsNearMe_K2Node_ComponentBoundEvent_1_ButtonHasBeenPressed__DelegateSignature_Params params {};
		params.WhatPressed = WhatPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LeaderboardWidget.LeaderboardWidget_C.Fill_NakamaLeaderboardAoundMe
	 * 		Flags  -> ()
	 */
	void ULeaderboardWidget_C::Fill_NakamaLeaderboardAoundMe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LeaderboardWidget.LeaderboardWidget_C.Fill_NakamaLeaderboardAoundMe");
		
		ULeaderboardWidget_C_Fill_NakamaLeaderboardAoundMe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LeaderboardWidget.LeaderboardWidget_C.Return_NakamaLeaderboardAroundMe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FNakamaNLeaderBoardRow>              returnedrecords                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FNakamaNLeaderBoardRow>              returnedrecordsSpecific                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FString                                      pageNumNext                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      pageNumPrev                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ULeaderboardWidget_C::Return_NakamaLeaderboardAroundMe(TArray<struct FNakamaNLeaderBoardRow> returnedrecords, TArray<struct FNakamaNLeaderBoardRow> returnedrecordsSpecific, const class FString& pageNumNext, const class FString& pageNumPrev)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LeaderboardWidget.LeaderboardWidget_C.Return_NakamaLeaderboardAroundMe");
		
		ULeaderboardWidget_C_Return_NakamaLeaderboardAroundMe_Params params {};
		params.returnedrecords = returnedrecords;
		params.returnedrecordsSpecific = returnedrecordsSpecific;
		params.pageNumNext = pageNumNext;
		params.pageNumPrev = pageNumPrev;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LeaderboardWidget.LeaderboardWidget_C.ExecuteUbergraph_LeaderboardWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULeaderboardWidget_C::ExecuteUbergraph_LeaderboardWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LeaderboardWidget.LeaderboardWidget_C.ExecuteUbergraph_LeaderboardWidget");
		
		ULeaderboardWidget_C_ExecuteUbergraph_LeaderboardWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULeaderboardWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULeaderboardWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LeaderboardWidget.LeaderboardWidget_C");
		return ptr;
	}

}


