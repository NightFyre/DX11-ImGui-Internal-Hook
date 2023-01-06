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
	 * 		Name   -> Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.CheckSetFirstTimeLanguage
	 * 		Flags  -> ()
	 */
	void USIGIS_LoginWidget_C::CheckSetFirstTimeLanguage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.CheckSetFirstTimeLanguage");
		
		USIGIS_LoginWidget_C_CheckSetFirstTimeLanguage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.CheckCompletlyLoggedInYet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsReady                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_LoginWidget_C::CheckCompletlyLoggedInYet(bool* IsReady)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.CheckCompletlyLoggedInYet");
		
		USIGIS_LoginWidget_C_CheckCompletlyLoggedInYet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsReady != nullptr)
			*IsReady = params.IsReady;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.Set_LoginButtonLook
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isLoading                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_LoginWidget_C::Set_LoginButtonLook(bool isLoading)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.Set_LoginButtonLook");
		
		USIGIS_LoginWidget_C_Set_LoginButtonLook_Params params {};
		params.isLoading = isLoading;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.GetBootTextFields
	 * 		Flags  -> ()
	 */
	void USIGIS_LoginWidget_C::GetBootTextFields()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.GetBootTextFields");
		
		USIGIS_LoginWidget_C_GetBootTextFields_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.SwitchToLoginState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_LoginStates                                      SwitchToLoginState                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_ConnectionErrorStates                            ErrorWarningTitle                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_LoginWidget_C::SwitchToLoginState(E_LoginStates SwitchToLoginState, E_ConnectionErrorStates ErrorWarningTitle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.SwitchToLoginState");
		
		USIGIS_LoginWidget_C_SwitchToLoginState_Params params {};
		params.SwitchToLoginState = SwitchToLoginState;
		params.ErrorWarningTitle = ErrorWarningTitle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void USIGIS_LoginWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.Construct");
		
		USIGIS_LoginWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.WaitingForLogIn
	 * 		Flags  -> ()
	 */
	void USIGIS_LoginWidget_C::WaitingForLogIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.WaitingForLogIn");
		
		USIGIS_LoginWidget_C_WaitingForLogIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.LoginSucces
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               failed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_LoginWidget_C::LoginSucces(bool failed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.LoginSucces");
		
		USIGIS_LoginWidget_C_LoginSucces_Params params {};
		params.failed = failed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.BndEvt__Btn_ErrorScreenContinue_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_LoginWidget_C::BndEvt__Btn_ErrorScreenContinue_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.BndEvt__Btn_ErrorScreenContinue_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_LoginWidget_C_BndEvt__Btn_ErrorScreenContinue_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.BndEvt__Btn_LoginExitGame_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_LoginWidget_C::BndEvt__Btn_LoginExitGame_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.BndEvt__Btn_LoginExitGame_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_LoginWidget_C_BndEvt__Btn_LoginExitGame_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.LoginDiscordNotValid
	 * 		Flags  -> ()
	 */
	void USIGIS_LoginWidget_C::LoginDiscordNotValid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.LoginDiscordNotValid");
		
		USIGIS_LoginWidget_C_LoginDiscordNotValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.TriggerDossStartup
	 * 		Flags  -> ()
	 */
	void USIGIS_LoginWidget_C::TriggerDossStartup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.TriggerDossStartup");
		
		USIGIS_LoginWidget_C_TriggerDossStartup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.ResetDosScreen
	 * 		Flags  -> ()
	 */
	void USIGIS_LoginWidget_C::ResetDosScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.ResetDosScreen");
		
		USIGIS_LoginWidget_C_ResetDosScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.BndEvt__MM_GenericSmallBtn01_Exit_K2Node_ComponentBoundEvent_4_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_LoginWidget_C::BndEvt__MM_GenericSmallBtn01_Exit_K2Node_ComponentBoundEvent_4_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.BndEvt__MM_GenericSmallBtn01_Exit_K2Node_ComponentBoundEvent_4_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_LoginWidget_C_BndEvt__MM_GenericSmallBtn01_Exit_K2Node_ComponentBoundEvent_4_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.BndEvt__MM_GenericSmallBtn01_Exit_DiscordWarning_K2Node_ComponentBoundEvent_3_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_LoginWidget_C::BndEvt__MM_GenericSmallBtn01_Exit_DiscordWarning_K2Node_ComponentBoundEvent_3_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.BndEvt__MM_GenericSmallBtn01_Exit_DiscordWarning_K2Node_ComponentBoundEvent_3_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_LoginWidget_C_BndEvt__MM_GenericSmallBtn01_Exit_DiscordWarning_K2Node_ComponentBoundEvent_3_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.BndEvt__MM_GenericSmallBtn01_Exit_ConnectErrorGoToLogin_K2Node_ComponentBoundEvent_5_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_LoginWidget_C::BndEvt__MM_GenericSmallBtn01_Exit_ConnectErrorGoToLogin_K2Node_ComponentBoundEvent_5_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.BndEvt__MM_GenericSmallBtn01_Exit_ConnectErrorGoToLogin_K2Node_ComponentBoundEvent_5_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_LoginWidget_C_BndEvt__MM_GenericSmallBtn01_Exit_ConnectErrorGoToLogin_K2Node_ComponentBoundEvent_5_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.FirstTimeLogin
	 * 		Flags  -> ()
	 */
	void USIGIS_LoginWidget_C::FirstTimeLogin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.FirstTimeLogin");
		
		USIGIS_LoginWidget_C_FirstTimeLogin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.BndEvt__MM_GenericSmallBtn01_1_K2Node_ComponentBoundEvent_6_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_LoginWidget_C::BndEvt__MM_GenericSmallBtn01_1_K2Node_ComponentBoundEvent_6_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.BndEvt__MM_GenericSmallBtn01_1_K2Node_ComponentBoundEvent_6_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_LoginWidget_C_BndEvt__MM_GenericSmallBtn01_1_K2Node_ComponentBoundEvent_6_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.RestartLoginScreen
	 * 		Flags  -> ()
	 */
	void USIGIS_LoginWidget_C::RestartLoginScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.RestartLoginScreen");
		
		USIGIS_LoginWidget_C_RestartLoginScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_LoginWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.Tick");
		
		USIGIS_LoginWidget_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.SetPlatformWarningText
	 * 		Flags  -> ()
	 */
	void USIGIS_LoginWidget_C::SetPlatformWarningText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.SetPlatformWarningText");
		
		USIGIS_LoginWidget_C_SetPlatformWarningText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.BackEndConnected
	 * 		Flags  -> ()
	 */
	void USIGIS_LoginWidget_C::BackEndConnected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.BackEndConnected");
		
		USIGIS_LoginWidget_C_BackEndConnected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.STEAM APP STARTED
	 * 		Flags  -> ()
	 */
	void USIGIS_LoginWidget_C::STEAM_APP_STARTED()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.STEAM APP STARTED");
		
		USIGIS_LoginWidget_C_STEAM_APP_STARTED_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.XBOX APP STARTED
	 * 		Flags  -> ()
	 */
	void USIGIS_LoginWidget_C::XBOX_APP_STARTED()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.XBOX APP STARTED");
		
		USIGIS_LoginWidget_C_XBOX_APP_STARTED_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.SetConnectionWarningMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_ConnectionErrorStates                            ConnectionErrorType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_LoginWidget_C::SetConnectionWarningMessage(E_ConnectionErrorStates ConnectionErrorType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.SetConnectionWarningMessage");
		
		USIGIS_LoginWidget_C_SetConnectionWarningMessage_Params params {};
		params.ConnectionErrorType = ConnectionErrorType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.ReturnTheAnySanctionsOnThePlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSanStr>                             SanctionInfo                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void USIGIS_LoginWidget_C::ReturnTheAnySanctionsOnThePlayer(TArray<struct FSanStr> SanctionInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.ReturnTheAnySanctionsOnThePlayer");
		
		USIGIS_LoginWidget_C_ReturnTheAnySanctionsOnThePlayer_Params params {};
		params.SanctionInfo = SanctionInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.NonNormalDisconnectFromMatch
	 * 		Flags  -> ()
	 */
	void USIGIS_LoginWidget_C::NonNormalDisconnectFromMatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.NonNormalDisconnectFromMatch");
		
		USIGIS_LoginWidget_C_NonNormalDisconnectFromMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.Return_PlayerisBanned
	 * 		Flags  -> ()
	 */
	void USIGIS_LoginWidget_C::Return_PlayerisBanned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.Return_PlayerisBanned");
		
		USIGIS_LoginWidget_C_Return_PlayerisBanned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.ExecuteUbergraph_SIGIS_LoginWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_LoginWidget_C::ExecuteUbergraph_SIGIS_LoginWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.ExecuteUbergraph_SIGIS_LoginWidget");
		
		USIGIS_LoginWidget_C_ExecuteUbergraph_SIGIS_LoginWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGIS_LoginWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGIS_LoginWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SIGIS_LoginWidget.SIGIS_LoginWidget_C");
		return ptr;
	}

}


