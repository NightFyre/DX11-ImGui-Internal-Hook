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
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.Calculate_HowManyPrestigePointsWouldGet
	 */
	struct USIGIS_MainOverlay_C_Calculate_HowManyPrestigePointsWouldGet_Params
	{
	public:
		int32_t                                                    CurrentPrestigeLevel;                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    HowManyPtsWouldGet;                                      // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.CalculateAndGiveNextLevelPrestigePoints
	 */
	struct USIGIS_MainOverlay_C_CalculateAndGiveNextLevelPrestigePoints_Params
	{	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.Analytics_Prestiging
	 */
	struct USIGIS_MainOverlay_C_Analytics_Prestiging_Params
	{	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.Get_SizeBox_CanPrestige_Visibility_1
	 */
	struct USIGIS_MainOverlay_C_Get_SizeBox_CanPrestige_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1QUT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.Set_EquipmentSubMenu_BtnsVisuals
	 */
	struct USIGIS_MainOverlay_C_Set_EquipmentSubMenu_BtnsVisuals_Params
	{
	public:
		E_InvEquipmentStates                                       Which_MenuState;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CSJY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.SetupMM_SubMenusButtons
	 */
	struct USIGIS_MainOverlay_C_SetupMM_SubMenusButtons_Params
	{	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.Setup_MM_SecondaryButtons
	 */
	struct USIGIS_MainOverlay_C_Setup_MM_SecondaryButtons_Params
	{	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.CheckIfYouHaveGifts
	 */
	struct USIGIS_MainOverlay_C_CheckIfYouHaveGifts_Params
	{	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.Bind_PrestigePoints
	 */
	struct USIGIS_MainOverlay_C_Bind_PrestigePoints_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.Switch_EndMatchScreen
	 */
	struct USIGIS_MainOverlay_C_Switch_EndMatchScreen_Params
	{
	public:
		bool                                                       Close;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ERaidResult                                                RaidResult;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.SwitchToMyPlayerInfo
	 */
	struct USIGIS_MainOverlay_C_SwitchToMyPlayerInfo_Params
	{
	public:
		bool                                                       GoBackTo_MM;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LWHU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.Bind_SkillPoints
	 */
	struct USIGIS_MainOverlay_C_Bind_SkillPoints_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.isGoingToMatch
	 */
	struct USIGIS_MainOverlay_C_isGoingToMatch_Params
	{	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.SwitchToOptions
	 */
	struct USIGIS_MainOverlay_C_SwitchToOptions_Params
	{
	public:
		bool                                                       GoBackTo_MM;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.Bind_PlayerGold
	 */
	struct USIGIS_MainOverlay_C_Bind_PlayerGold_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.Set_MM_MainBtnsVisuals
	 */
	struct USIGIS_MainOverlay_C_Set_MM_MainBtnsVisuals_Params
	{
	public:
		EMenuState                                                 Which_MenuState;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_R2XD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.ForceHideTheInventoryExtras
	 */
	struct USIGIS_MainOverlay_C_ForceHideTheInventoryExtras_Params
	{	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.Construct
	 */
	struct USIGIS_MainOverlay_C_Construct_Params
	{	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.DragItemStarted
	 */
	struct USIGIS_MainOverlay_C_DragItemStarted_Params
	{
	public:
		ESlotType                                                  DraggedFrom;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.DragItemStopped
	 */
	struct USIGIS_MainOverlay_C_DragItemStopped_Params
	{	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.GotToMatchFadeOut
	 */
	struct USIGIS_MainOverlay_C_GotToMatchFadeOut_Params
	{
	public:
		float                                                      PlaybackSpeed;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.AfterLoginOpenMainMenu
	 */
	struct USIGIS_MainOverlay_C_AfterLoginOpenMainMenu_Params
	{	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.MM_MainBtnHasBeenPressed
	 */
	struct USIGIS_MainOverlay_C_MM_MainBtnHasBeenPressed_Params
	{
	public:
		EMenuState                                                 WhichPressed;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.MM_SecBtnHasBeenPressed
	 */
	struct USIGIS_MainOverlay_C_MM_SecBtnHasBeenPressed_Params
	{
	public:
		E_MM_SecondaryOptions                                      WhichPressed;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.EscapeKeyHasBeenPressed
	 */
	struct USIGIS_MainOverlay_C_EscapeKeyHasBeenPressed_Params
	{	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.OptionsPressed
	 */
	struct USIGIS_MainOverlay_C_OptionsPressed_Params
	{	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.BndEvt__Btn_DevDebug_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct USIGIS_MainOverlay_C_BndEvt__Btn_DevDebug_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.ForceDebugClose
	 */
	struct USIGIS_MainOverlay_C_ForceDebugClose_Params
	{	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.CustomEvent_1
	 */
	struct USIGIS_MainOverlay_C_CustomEvent_1_Params
	{
	public:
		bool                                                       IsMatchmaking;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.BndEvt__MM_GenericSmallBtn01_1_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_MainOverlay_C_BndEvt__MM_GenericSmallBtn01_1_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.GoToMatchTimerchanged
	 */
	struct USIGIS_MainOverlay_C_GoToMatchTimerchanged_Params
	{
	public:
		class FText                                                TimeAsText;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.BndEvt__MM_GenericSmallBtn01_SinglePlayer_CancelMatchmaking_1_K2Node_ComponentBoundEvent_2_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_MainOverlay_C_BndEvt__MM_GenericSmallBtn01_SinglePlayer_CancelMatchmaking_1_K2Node_ComponentBoundEvent_2_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.CustomEvent_2
	 */
	struct USIGIS_MainOverlay_C_CustomEvent_2_Params
	{
	public:
		bool                                                       IsinATeam;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.CustomEvent_3
	 */
	struct USIGIS_MainOverlay_C_CustomEvent_3_Params
	{
	public:
		ECrewEvents                                                CrewState;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.MoneyAmountHasChanged
	 */
	struct USIGIS_MainOverlay_C_MoneyAmountHasChanged_Params
	{	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.BndEvt__SIGIS_MyRank_K2Node_ComponentBoundEvent_4_ED_MyPlayerProfilePressed__DelegateSignature
	 */
	struct USIGIS_MainOverlay_C_BndEvt__SIGIS_MyRank_K2Node_ComponentBoundEvent_4_ED_MyPlayerProfilePressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.ForceClose_MyStatsMenu
	 */
	struct USIGIS_MainOverlay_C_ForceClose_MyStatsMenu_Params
	{	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.TriggerCrew_JoinPressed
	 */
	struct USIGIS_MainOverlay_C_TriggerCrew_JoinPressed_Params
	{	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.TriggerCrew_CreatePressed
	 */
	struct USIGIS_MainOverlay_C_TriggerCrew_CreatePressed_Params
	{	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.CraftQue_IsSomethingReadyToCollect_Event_1
	 */
	struct USIGIS_MainOverlay_C_CraftQue_IsSomethingReadyToCollect_Event_1_Params
	{
	public:
		bool                                                       ReadyToCollect;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.BndEvt__Btn_DevDebug_2_FakeEndMatch_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_MainOverlay_C_BndEvt__Btn_DevDebug_2_FakeEndMatch_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.Close the EndMatchMenu
	 */
	struct USIGIS_MainOverlay_C_Close_the_EndMatchMenu_Params
	{	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.Equipment_SubTabPressed
	 */
	struct USIGIS_MainOverlay_C_Equipment_SubTabPressed_Params
	{
	public:
		E_InvEquipmentStates                                       WhichMenuPressed;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.BndEvt__MM_GenericLargeBtn01_K2Node_ComponentBoundEvent_5_GenericLargeBtn_Pressed__DelegateSignature
	 */
	struct USIGIS_MainOverlay_C_BndEvt__MM_GenericLargeBtn01_K2Node_ComponentBoundEvent_5_GenericLargeBtn_Pressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.PrestigeAccept
	 */
	struct USIGIS_MainOverlay_C_PrestigeAccept_Params
	{
	public:
		int32_t                                                    PrestPointsToGive;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.PrestigeCancel
	 */
	struct USIGIS_MainOverlay_C_PrestigeCancel_Params
	{	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.HaveStatsLoaded
	 */
	struct USIGIS_MainOverlay_C_HaveStatsLoaded_Params
	{
	public:
		bool                                                       validstats;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.ForceTabChangeFromInventory
	 */
	struct USIGIS_MainOverlay_C_ForceTabChangeFromInventory_Params
	{
	public:
		EMenuState                                                 ForceToWhichMenu;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.BndEvt__SIGIS_MainOverlay_Btn_TempPrestige_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_MainOverlay_C_BndEvt__SIGIS_MainOverlay_Btn_TempPrestige_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.OnNaughtyReturn_Event_1
	 */
	struct USIGIS_MainOverlay_C_OnNaughtyReturn_Event_1_Params
	{
	public:
		bool                                                       isNaughty;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_760I[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReasonNaughty;                                           // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.ReturnOnNotification
	 */
	struct USIGIS_MainOverlay_C_ReturnOnNotification_Params
	{
	public:
		TArray<struct FNakamaNotification>                         returnednotification;                                    // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.UpdateGiftsMenu
	 */
	struct USIGIS_MainOverlay_C_UpdateGiftsMenu_Params
	{	};

	/**
	 * Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.ExecuteUbergraph_SIGIS_MainOverlay
	 */
	struct USIGIS_MainOverlay_C_ExecuteUbergraph_SIGIS_MainOverlay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
