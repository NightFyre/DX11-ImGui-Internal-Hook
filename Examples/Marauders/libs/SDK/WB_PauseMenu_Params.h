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
	 * Function WB_PauseMenu.WB_PauseMenu_C.RemoveChildren
	 */
	struct UWB_PauseMenu_C_RemoveChildren_Params
	{	};

	/**
	 * Function WB_PauseMenu.WB_PauseMenu_C.SetOptionButtonFocus
	 */
	struct UWB_PauseMenu_C_SetOptionButtonFocus_Params
	{
	public:
		class UWB_SettingsButton01_C*                              Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_PauseMenu.WB_PauseMenu_C.OnPreviewKeyDown
	 */
	struct UWB_PauseMenu_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WB_PauseMenu.WB_PauseMenu_C.SetTabButtonFocus
	 */
	struct UWB_PauseMenu_C_SetTabButtonFocus_Params
	{
	public:
		class UWB_TabButton01_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_PauseMenu.WB_PauseMenu_C.GetOptionButtons
	 */
	struct UWB_PauseMenu_C_GetOptionButtons_Params
	{
	public:
		TArray<class UWB_SettingsButton01_C*>                      Array;                                                   // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function WB_PauseMenu.WB_PauseMenu_C.SetCurrentOptionButtonFocus
	 */
	struct UWB_PauseMenu_C_SetCurrentOptionButtonFocus_Params
	{
	public:
		class UWB_SettingsButton01_C*                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_PauseMenu.WB_PauseMenu_C.GetOnMouseEntered
	 */
	struct UWB_PauseMenu_C_GetOnMouseEntered_Params
	{
	public:
		bool                                                       MouseEntered;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_PauseMenu.WB_PauseMenu_C.SetWidgetIndex_Global
	 */
	struct UWB_PauseMenu_C_SetWidgetIndex_Global_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_PauseMenu.WB_PauseMenu_C.SetWidgetIndex_Tabs
	 */
	struct UWB_PauseMenu_C_SetWidgetIndex_Tabs_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Gameplay_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 */
	struct UWB_PauseMenu_C_BndEvt__Button_Gameplay_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Controls_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	 */
	struct UWB_PauseMenu_C_BndEvt__Button_Controls_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Video_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	 */
	struct UWB_PauseMenu_C_BndEvt__Button_Video_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Audio_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
	 */
	struct UWB_PauseMenu_C_BndEvt__Button_Audio_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WB_PauseMenu.WB_PauseMenu_C.OnSwitchBackFromChild
	 */
	struct UWB_PauseMenu_C_OnSwitchBackFromChild_Params
	{	};

	/**
	 * Function WB_PauseMenu.WB_PauseMenu_C.OnInputSwitched
	 */
	struct UWB_PauseMenu_C_OnInputSwitched_Params
	{
	public:
		EInputType                                                 InputType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_PauseMenu.WB_PauseMenu_C.SetGamepadAppearance
	 */
	struct UWB_PauseMenu_C_SetGamepadAppearance_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_PauseMenu.WB_PauseMenu_C.CheckMouseEntered
	 */
	struct UWB_PauseMenu_C_CheckMouseEntered_Params
	{	};

	/**
	 * Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Quit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UWB_PauseMenu_C_BndEvt__Button_Quit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WB_PauseMenu.WB_PauseMenu_C.OnConfirmQuit
	 */
	struct UWB_PauseMenu_C_OnConfirmQuit_Params
	{	};

	/**
	 * Function WB_PauseMenu.WB_PauseMenu_C.ClickQuit
	 */
	struct UWB_PauseMenu_C_ClickQuit_Params
	{	};

	/**
	 * Function WB_PauseMenu.WB_PauseMenu_C.OnCancelQuit
	 */
	struct UWB_PauseMenu_C_OnCancelQuit_Params
	{	};

	/**
	 * Function WB_PauseMenu.WB_PauseMenu_C.SetCurrentFocus
	 */
	struct UWB_PauseMenu_C_SetCurrentFocus_Params
	{	};

	/**
	 * Function WB_PauseMenu.WB_PauseMenu_C.RemoveWidget
	 */
	struct UWB_PauseMenu_C_RemoveWidget_Params
	{	};

	/**
	 * Function WB_PauseMenu.WB_PauseMenu_C.ActivateWidget
	 */
	struct UWB_PauseMenu_C_ActivateWidget_Params
	{	};

	/**
	 * Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Resume_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UWB_PauseMenu_C_BndEvt__Button_Resume_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Settings_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UWB_PauseMenu_C_BndEvt__Button_Settings_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UWB_PauseMenu_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WB_PauseMenu.WB_PauseMenu_C.ClickBack
	 */
	struct UWB_PauseMenu_C_ClickBack_Params
	{	};

	/**
	 * Function WB_PauseMenu.WB_PauseMenu_C.ClickResume
	 */
	struct UWB_PauseMenu_C_ClickResume_Params
	{	};

	/**
	 * Function WB_PauseMenu.WB_PauseMenu_C.ExecuteUbergraph_WB_PauseMenu
	 */
	struct UWB_PauseMenu_C_ExecuteUbergraph_WB_PauseMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
