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
	 * Function SIGIS_EndMatch.SIGIS_EndMatch_C.SendInfoToBackendLeaderboards
	 */
	struct USIGIS_EndMatch_C_SendInfoToBackendLeaderboards_Params
	{	};

	/**
	 * Function SIGIS_EndMatch.SIGIS_EndMatch_C.RunErrorPopup
	 */
	struct USIGIS_EndMatch_C_RunErrorPopup_Params
	{	};

	/**
	 * Function SIGIS_EndMatch.SIGIS_EndMatch_C.AnalyticsEndMatchInfo
	 */
	struct USIGIS_EndMatch_C_AnalyticsEndMatchInfo_Params
	{	};

	/**
	 * Function SIGIS_EndMatch.SIGIS_EndMatch_C.Set_ContainersLooted_Stat
	 */
	struct USIGIS_EndMatch_C_Set_ContainersLooted_Stat_Params
	{	};

	/**
	 * Function SIGIS_EndMatch.SIGIS_EndMatch_C.FillInCurrentXpBarAndNumbers
	 */
	struct USIGIS_EndMatch_C_FillInCurrentXpBarAndNumbers_Params
	{	};

	/**
	 * Function SIGIS_EndMatch.SIGIS_EndMatch_C.CalculateEndMatchXP
	 */
	struct USIGIS_EndMatch_C_CalculateEndMatchXP_Params
	{	};

	/**
	 * Function SIGIS_EndMatch.SIGIS_EndMatch_C.SetEndMatchTime
	 */
	struct USIGIS_EndMatch_C_SetEndMatchTime_Params
	{	};

	/**
	 * Function SIGIS_EndMatch.SIGIS_EndMatch_C.RefreshKillsList
	 */
	struct USIGIS_EndMatch_C_RefreshKillsList_Params
	{	};

	/**
	 * Function SIGIS_EndMatch.SIGIS_EndMatch_C.Switch_EndMatch_State
	 */
	struct USIGIS_EndMatch_C_Switch_EndMatch_State_Params
	{
	public:
		ERaidResult                                                SwitchToOptionsMenu;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_EndMatch.SIGIS_EndMatch_C.DidLevelUpFromMatch
	 */
	struct USIGIS_EndMatch_C_DidLevelUpFromMatch_Params
	{	};

	/**
	 * Function SIGIS_EndMatch.SIGIS_EndMatch_C.Refresh_EndMatchInfo
	 */
	struct USIGIS_EndMatch_C_Refresh_EndMatchInfo_Params
	{	};

	/**
	 * Function SIGIS_EndMatch.SIGIS_EndMatch_C.Construct
	 */
	struct USIGIS_EndMatch_C_Construct_Params
	{	};

	/**
	 * Function SIGIS_EndMatch.SIGIS_EndMatch_C.BndEvt__MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_7_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_EndMatch_C_BndEvt__MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_7_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_EndMatch.SIGIS_EndMatch_C.CloseAnimFinished
	 */
	struct USIGIS_EndMatch_C_CloseAnimFinished_Params
	{	};

	/**
	 * Function SIGIS_EndMatch.SIGIS_EndMatch_C.DelayThenRefreshXPBars
	 */
	struct USIGIS_EndMatch_C_DelayThenRefreshXPBars_Params
	{	};

	/**
	 * Function SIGIS_EndMatch.SIGIS_EndMatch_C.LoggedInSuccess
	 */
	struct USIGIS_EndMatch_C_LoggedInSuccess_Params
	{
	public:
		bool                                                       LoginFine;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_EndMatch.SIGIS_EndMatch_C.RunPopup
	 */
	struct USIGIS_EndMatch_C_RunPopup_Params
	{
	public:
		class FText                                                Popup_Title;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Popup_Desc;                                              // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                RightButtonText;                                         // 0x0030(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       OnlyShowOneButton;                                       // 0x0048(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_EndMatch.SIGIS_EndMatch_C.ReturnedButtonPress
	 */
	struct USIGIS_EndMatch_C_ReturnedButtonPress_Params
	{	};

	/**
	 * Function SIGIS_EndMatch.SIGIS_EndMatch_C.TimedOutTryingToLogin
	 */
	struct USIGIS_EndMatch_C_TimedOutTryingToLogin_Params
	{	};

	/**
	 * Function SIGIS_EndMatch.SIGIS_EndMatch_C.BndEvt__SIGIS_EndMatch_Button_89_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_EndMatch_C_BndEvt__SIGIS_EndMatch_Button_89_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_EndMatch.SIGIS_EndMatch_C.BndEvt__SIGIS_EndMatch_MM_GenericSmallBtn01_ReportPlayer_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_EndMatch_C_BndEvt__SIGIS_EndMatch_MM_GenericSmallBtn01_ReportPlayer_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_EndMatch.SIGIS_EndMatch_C.OnReportSent
	 */
	struct USIGIS_EndMatch_C_OnReportSent_Params
	{
	public:
		class FText                                                MessageToSend;                                           // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_EndMatch.SIGIS_EndMatch_C.OnReportCancelled
	 */
	struct USIGIS_EndMatch_C_OnReportCancelled_Params
	{	};

	/**
	 * Function SIGIS_EndMatch.SIGIS_EndMatch_C.GetMyPlayerScore
	 */
	struct USIGIS_EndMatch_C_GetMyPlayerScore_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MVDT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLeaderBoardMemberInfo                              PlayerInfo;                                              // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_EndMatch.SIGIS_EndMatch_C.FillKilledByPlayerName
	 */
	struct USIGIS_EndMatch_C_FillKilledByPlayerName_Params
	{
	public:
		class FString                                              SteamNameToFill;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_EndMatch.SIGIS_EndMatch_C.ExecuteUbergraph_SIGIS_EndMatch
	 */
	struct USIGIS_EndMatch_C_ExecuteUbergraph_SIGIS_EndMatch_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D4SA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_EndMatch.SIGIS_EndMatch_C.TriggerRelogin__DelegateSignature
	 */
	struct USIGIS_EndMatch_C_TriggerRelogin__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_EndMatch.SIGIS_EndMatch_C.ED_CloseEndMatchMenu__DelegateSignature
	 */
	struct USIGIS_EndMatch_C_ED_CloseEndMatchMenu__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
