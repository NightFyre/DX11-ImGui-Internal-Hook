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
	 * Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.CheckSetFirstTimeLanguage
	 */
	struct USIGIS_LoginWidget_C_CheckSetFirstTimeLanguage_Params
	{	};

	/**
	 * Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.CheckCompletlyLoggedInYet
	 */
	struct USIGIS_LoginWidget_C_CheckCompletlyLoggedInYet_Params
	{
	public:
		bool                                                       IsReady;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QLOC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.Set_LoginButtonLook
	 */
	struct USIGIS_LoginWidget_C_Set_LoginButtonLook_Params
	{
	public:
		bool                                                       isLoading;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.GetBootTextFields
	 */
	struct USIGIS_LoginWidget_C_GetBootTextFields_Params
	{	};

	/**
	 * Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.SwitchToLoginState
	 */
	struct USIGIS_LoginWidget_C_SwitchToLoginState_Params
	{
	public:
		E_LoginStates                                              SwitchToLoginState;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_ConnectionErrorStates                                    ErrorWarningTitle;                                       // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.Construct
	 */
	struct USIGIS_LoginWidget_C_Construct_Params
	{	};

	/**
	 * Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.WaitingForLogIn
	 */
	struct USIGIS_LoginWidget_C_WaitingForLogIn_Params
	{	};

	/**
	 * Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.LoginSucces
	 */
	struct USIGIS_LoginWidget_C_LoginSucces_Params
	{
	public:
		bool                                                       failed;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.BndEvt__Btn_ErrorScreenContinue_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_LoginWidget_C_BndEvt__Btn_ErrorScreenContinue_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.BndEvt__Btn_LoginExitGame_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_LoginWidget_C_BndEvt__Btn_LoginExitGame_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.LoginDiscordNotValid
	 */
	struct USIGIS_LoginWidget_C_LoginDiscordNotValid_Params
	{	};

	/**
	 * Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.TriggerDossStartup
	 */
	struct USIGIS_LoginWidget_C_TriggerDossStartup_Params
	{	};

	/**
	 * Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.ResetDosScreen
	 */
	struct USIGIS_LoginWidget_C_ResetDosScreen_Params
	{	};

	/**
	 * Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.BndEvt__MM_GenericSmallBtn01_Exit_K2Node_ComponentBoundEvent_4_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_LoginWidget_C_BndEvt__MM_GenericSmallBtn01_Exit_K2Node_ComponentBoundEvent_4_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.BndEvt__MM_GenericSmallBtn01_Exit_DiscordWarning_K2Node_ComponentBoundEvent_3_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_LoginWidget_C_BndEvt__MM_GenericSmallBtn01_Exit_DiscordWarning_K2Node_ComponentBoundEvent_3_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.BndEvt__MM_GenericSmallBtn01_Exit_ConnectErrorGoToLogin_K2Node_ComponentBoundEvent_5_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_LoginWidget_C_BndEvt__MM_GenericSmallBtn01_Exit_ConnectErrorGoToLogin_K2Node_ComponentBoundEvent_5_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.FirstTimeLogin
	 */
	struct USIGIS_LoginWidget_C_FirstTimeLogin_Params
	{	};

	/**
	 * Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.BndEvt__MM_GenericSmallBtn01_1_K2Node_ComponentBoundEvent_6_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_LoginWidget_C_BndEvt__MM_GenericSmallBtn01_1_K2Node_ComponentBoundEvent_6_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.RestartLoginScreen
	 */
	struct USIGIS_LoginWidget_C_RestartLoginScreen_Params
	{	};

	/**
	 * Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.Tick
	 */
	struct USIGIS_LoginWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.SetPlatformWarningText
	 */
	struct USIGIS_LoginWidget_C_SetPlatformWarningText_Params
	{	};

	/**
	 * Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.BackEndConnected
	 */
	struct USIGIS_LoginWidget_C_BackEndConnected_Params
	{	};

	/**
	 * Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.STEAM APP STARTED
	 */
	struct USIGIS_LoginWidget_C_STEAM_APP_STARTED_Params
	{	};

	/**
	 * Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.XBOX APP STARTED
	 */
	struct USIGIS_LoginWidget_C_XBOX_APP_STARTED_Params
	{	};

	/**
	 * Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.SetConnectionWarningMessage
	 */
	struct USIGIS_LoginWidget_C_SetConnectionWarningMessage_Params
	{
	public:
		E_ConnectionErrorStates                                    ConnectionErrorType;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.ReturnTheAnySanctionsOnThePlayer
	 */
	struct USIGIS_LoginWidget_C_ReturnTheAnySanctionsOnThePlayer_Params
	{
	public:
		TArray<struct FSanStr>                                     SanctionInfo;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.NonNormalDisconnectFromMatch
	 */
	struct USIGIS_LoginWidget_C_NonNormalDisconnectFromMatch_Params
	{	};

	/**
	 * Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.Return_PlayerisBanned
	 */
	struct USIGIS_LoginWidget_C_Return_PlayerisBanned_Params
	{	};

	/**
	 * Function SIGIS_LoginWidget.SIGIS_LoginWidget_C.ExecuteUbergraph_SIGIS_LoginWidget
	 */
	struct USIGIS_LoginWidget_C_ExecuteUbergraph_SIGIS_LoginWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
