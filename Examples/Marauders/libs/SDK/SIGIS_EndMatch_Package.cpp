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
	 * 		Name   -> Function SIGIS_EndMatch.SIGIS_EndMatch_C.SendInfoToBackendLeaderboards
	 * 		Flags  -> ()
	 */
	void USIGIS_EndMatch_C::SendInfoToBackendLeaderboards()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_EndMatch.SIGIS_EndMatch_C.SendInfoToBackendLeaderboards");
		
		USIGIS_EndMatch_C_SendInfoToBackendLeaderboards_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_EndMatch.SIGIS_EndMatch_C.RunErrorPopup
	 * 		Flags  -> ()
	 */
	void USIGIS_EndMatch_C::RunErrorPopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_EndMatch.SIGIS_EndMatch_C.RunErrorPopup");
		
		USIGIS_EndMatch_C_RunErrorPopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_EndMatch.SIGIS_EndMatch_C.AnalyticsEndMatchInfo
	 * 		Flags  -> ()
	 */
	void USIGIS_EndMatch_C::AnalyticsEndMatchInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_EndMatch.SIGIS_EndMatch_C.AnalyticsEndMatchInfo");
		
		USIGIS_EndMatch_C_AnalyticsEndMatchInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_EndMatch.SIGIS_EndMatch_C.Set_ContainersLooted_Stat
	 * 		Flags  -> ()
	 */
	void USIGIS_EndMatch_C::Set_ContainersLooted_Stat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_EndMatch.SIGIS_EndMatch_C.Set_ContainersLooted_Stat");
		
		USIGIS_EndMatch_C_Set_ContainersLooted_Stat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_EndMatch.SIGIS_EndMatch_C.FillInCurrentXpBarAndNumbers
	 * 		Flags  -> ()
	 */
	void USIGIS_EndMatch_C::FillInCurrentXpBarAndNumbers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_EndMatch.SIGIS_EndMatch_C.FillInCurrentXpBarAndNumbers");
		
		USIGIS_EndMatch_C_FillInCurrentXpBarAndNumbers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_EndMatch.SIGIS_EndMatch_C.CalculateEndMatchXP
	 * 		Flags  -> ()
	 */
	void USIGIS_EndMatch_C::CalculateEndMatchXP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_EndMatch.SIGIS_EndMatch_C.CalculateEndMatchXP");
		
		USIGIS_EndMatch_C_CalculateEndMatchXP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_EndMatch.SIGIS_EndMatch_C.SetEndMatchTime
	 * 		Flags  -> ()
	 */
	void USIGIS_EndMatch_C::SetEndMatchTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_EndMatch.SIGIS_EndMatch_C.SetEndMatchTime");
		
		USIGIS_EndMatch_C_SetEndMatchTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_EndMatch.SIGIS_EndMatch_C.RefreshKillsList
	 * 		Flags  -> ()
	 */
	void USIGIS_EndMatch_C::RefreshKillsList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_EndMatch.SIGIS_EndMatch_C.RefreshKillsList");
		
		USIGIS_EndMatch_C_RefreshKillsList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_EndMatch.SIGIS_EndMatch_C.Switch_EndMatch_State
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERaidResult                                        SwitchToOptionsMenu                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_EndMatch_C::Switch_EndMatch_State(ERaidResult SwitchToOptionsMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_EndMatch.SIGIS_EndMatch_C.Switch_EndMatch_State");
		
		USIGIS_EndMatch_C_Switch_EndMatch_State_Params params {};
		params.SwitchToOptionsMenu = SwitchToOptionsMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_EndMatch.SIGIS_EndMatch_C.DidLevelUpFromMatch
	 * 		Flags  -> ()
	 */
	void USIGIS_EndMatch_C::DidLevelUpFromMatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_EndMatch.SIGIS_EndMatch_C.DidLevelUpFromMatch");
		
		USIGIS_EndMatch_C_DidLevelUpFromMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_EndMatch.SIGIS_EndMatch_C.Refresh_EndMatchInfo
	 * 		Flags  -> ()
	 */
	void USIGIS_EndMatch_C::Refresh_EndMatchInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_EndMatch.SIGIS_EndMatch_C.Refresh_EndMatchInfo");
		
		USIGIS_EndMatch_C_Refresh_EndMatchInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_EndMatch.SIGIS_EndMatch_C.Construct
	 * 		Flags  -> ()
	 */
	void USIGIS_EndMatch_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_EndMatch.SIGIS_EndMatch_C.Construct");
		
		USIGIS_EndMatch_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_EndMatch.SIGIS_EndMatch_C.BndEvt__MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_7_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_EndMatch_C::BndEvt__MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_7_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_EndMatch.SIGIS_EndMatch_C.BndEvt__MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_7_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_EndMatch_C_BndEvt__MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_7_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_EndMatch.SIGIS_EndMatch_C.CloseAnimFinished
	 * 		Flags  -> ()
	 */
	void USIGIS_EndMatch_C::CloseAnimFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_EndMatch.SIGIS_EndMatch_C.CloseAnimFinished");
		
		USIGIS_EndMatch_C_CloseAnimFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_EndMatch.SIGIS_EndMatch_C.DelayThenRefreshXPBars
	 * 		Flags  -> ()
	 */
	void USIGIS_EndMatch_C::DelayThenRefreshXPBars()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_EndMatch.SIGIS_EndMatch_C.DelayThenRefreshXPBars");
		
		USIGIS_EndMatch_C_DelayThenRefreshXPBars_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_EndMatch.SIGIS_EndMatch_C.LoggedInSuccess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               LoginFine                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_EndMatch_C::LoggedInSuccess(bool LoginFine)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_EndMatch.SIGIS_EndMatch_C.LoggedInSuccess");
		
		USIGIS_EndMatch_C_LoggedInSuccess_Params params {};
		params.LoginFine = LoginFine;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_EndMatch.SIGIS_EndMatch_C.RunPopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Popup_Title                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Popup_Desc                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        RightButtonText                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               OnlyShowOneButton                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_EndMatch_C::RunPopup(const class FText& Popup_Title, const class FText& Popup_Desc, const class FText& RightButtonText, bool OnlyShowOneButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_EndMatch.SIGIS_EndMatch_C.RunPopup");
		
		USIGIS_EndMatch_C_RunPopup_Params params {};
		params.Popup_Title = Popup_Title;
		params.Popup_Desc = Popup_Desc;
		params.RightButtonText = RightButtonText;
		params.OnlyShowOneButton = OnlyShowOneButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_EndMatch.SIGIS_EndMatch_C.ReturnedButtonPress
	 * 		Flags  -> ()
	 */
	void USIGIS_EndMatch_C::ReturnedButtonPress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_EndMatch.SIGIS_EndMatch_C.ReturnedButtonPress");
		
		USIGIS_EndMatch_C_ReturnedButtonPress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_EndMatch.SIGIS_EndMatch_C.TimedOutTryingToLogin
	 * 		Flags  -> ()
	 */
	void USIGIS_EndMatch_C::TimedOutTryingToLogin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_EndMatch.SIGIS_EndMatch_C.TimedOutTryingToLogin");
		
		USIGIS_EndMatch_C_TimedOutTryingToLogin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_EndMatch.SIGIS_EndMatch_C.BndEvt__SIGIS_EndMatch_Button_89_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_EndMatch_C::BndEvt__SIGIS_EndMatch_Button_89_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_EndMatch.SIGIS_EndMatch_C.BndEvt__SIGIS_EndMatch_Button_89_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_EndMatch_C_BndEvt__SIGIS_EndMatch_Button_89_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_EndMatch.SIGIS_EndMatch_C.BndEvt__SIGIS_EndMatch_MM_GenericSmallBtn01_ReportPlayer_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_EndMatch_C::BndEvt__SIGIS_EndMatch_MM_GenericSmallBtn01_ReportPlayer_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_EndMatch.SIGIS_EndMatch_C.BndEvt__SIGIS_EndMatch_MM_GenericSmallBtn01_ReportPlayer_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_EndMatch_C_BndEvt__SIGIS_EndMatch_MM_GenericSmallBtn01_ReportPlayer_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_EndMatch.SIGIS_EndMatch_C.OnReportSent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        MessageToSend                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_EndMatch_C::OnReportSent(const class FText& MessageToSend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_EndMatch.SIGIS_EndMatch_C.OnReportSent");
		
		USIGIS_EndMatch_C_OnReportSent_Params params {};
		params.MessageToSend = MessageToSend;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_EndMatch.SIGIS_EndMatch_C.OnReportCancelled
	 * 		Flags  -> ()
	 */
	void USIGIS_EndMatch_C::OnReportCancelled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_EndMatch.SIGIS_EndMatch_C.OnReportCancelled");
		
		USIGIS_EndMatch_C_OnReportCancelled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_EndMatch.SIGIS_EndMatch_C.GetMyPlayerScore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLeaderBoardMemberInfo                      PlayerInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_EndMatch_C::GetMyPlayerScore(bool Success, const struct FLeaderBoardMemberInfo& PlayerInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_EndMatch.SIGIS_EndMatch_C.GetMyPlayerScore");
		
		USIGIS_EndMatch_C_GetMyPlayerScore_Params params {};
		params.Success = Success;
		params.PlayerInfo = PlayerInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_EndMatch.SIGIS_EndMatch_C.FillKilledByPlayerName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SteamNameToFill                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_EndMatch_C::FillKilledByPlayerName(const class FString& SteamNameToFill)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_EndMatch.SIGIS_EndMatch_C.FillKilledByPlayerName");
		
		USIGIS_EndMatch_C_FillKilledByPlayerName_Params params {};
		params.SteamNameToFill = SteamNameToFill;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_EndMatch.SIGIS_EndMatch_C.ExecuteUbergraph_SIGIS_EndMatch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_EndMatch_C::ExecuteUbergraph_SIGIS_EndMatch(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_EndMatch.SIGIS_EndMatch_C.ExecuteUbergraph_SIGIS_EndMatch");
		
		USIGIS_EndMatch_C_ExecuteUbergraph_SIGIS_EndMatch_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_EndMatch.SIGIS_EndMatch_C.TriggerRelogin__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_EndMatch_C::TriggerRelogin__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_EndMatch.SIGIS_EndMatch_C.TriggerRelogin__DelegateSignature");
		
		USIGIS_EndMatch_C_TriggerRelogin__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_EndMatch.SIGIS_EndMatch_C.ED_CloseEndMatchMenu__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_EndMatch_C::ED_CloseEndMatchMenu__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_EndMatch.SIGIS_EndMatch_C.ED_CloseEndMatchMenu__DelegateSignature");
		
		USIGIS_EndMatch_C_ED_CloseEndMatchMenu__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGIS_EndMatch_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGIS_EndMatch_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SIGIS_EndMatch.SIGIS_EndMatch_C");
		return ptr;
	}

}


