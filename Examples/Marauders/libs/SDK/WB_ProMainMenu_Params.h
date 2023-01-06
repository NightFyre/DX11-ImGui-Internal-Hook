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
	 * Function WB_ProMainMenu.WB_ProMainMenu_C.RemoveCaptureCharacter
	 */
	struct UWB_ProMainMenu_C_RemoveCaptureCharacter_Params
	{	};

	/**
	 * Function WB_ProMainMenu.WB_ProMainMenu_C.CreateCaptureCharacter
	 */
	struct UWB_ProMainMenu_C_CreateCaptureCharacter_Params
	{	};

	/**
	 * Function WB_ProMainMenu.WB_ProMainMenu_C.GetOptionButtons
	 */
	struct UWB_ProMainMenu_C_GetOptionButtons_Params
	{
	public:
		TArray<class UWB_SettingsButton01_C*>                      Array;                                                   // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function WB_ProMainMenu.WB_ProMainMenu_C.SetCurrentOptionButtonFocus
	 */
	struct UWB_ProMainMenu_C_SetCurrentOptionButtonFocus_Params
	{
	public:
		class UWB_SettingsButton01_C*                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ProMainMenu.WB_ProMainMenu_C.SetCurrentTabButtonFocus
	 */
	struct UWB_ProMainMenu_C_SetCurrentTabButtonFocus_Params
	{	};

	/**
	 * Function WB_ProMainMenu.WB_ProMainMenu_C.FindCurrentTabButtonIndex
	 */
	struct UWB_ProMainMenu_C_FindCurrentTabButtonIndex_Params
	{
	public:
		int32_t                                                    CurrentIndex;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ProMainMenu.WB_ProMainMenu_C.SwitchTabButton
	 */
	struct UWB_ProMainMenu_C_SwitchTabButton_Params
	{
	public:
		bool                                                       bIncrease;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AWNL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_ProMainMenu.WB_ProMainMenu_C.GetTabButtons
	 */
	struct UWB_ProMainMenu_C_GetTabButtons_Params
	{
	public:
		TArray<class UWB_TabButton01_C*>                           Array;                                                   // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function WB_ProMainMenu.WB_ProMainMenu_C.OnKeyDown
	 */
	struct UWB_ProMainMenu_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WB_ProMainMenu.WB_ProMainMenu_C.GetOnMouseEntered
	 */
	struct UWB_ProMainMenu_C_GetOnMouseEntered_Params
	{
	public:
		bool                                                       MouseEntered;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_ProMainMenu.WB_ProMainMenu_C.SetWidgetIndex_Global
	 */
	struct UWB_ProMainMenu_C_SetWidgetIndex_Global_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ProMainMenu.WB_ProMainMenu_C.SetWidgetIndex_Tabs
	 */
	struct UWB_ProMainMenu_C_SetWidgetIndex_Tabs_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Home_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UWB_ProMainMenu_C_BndEvt__Button_Home_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Play_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UWB_ProMainMenu_C_BndEvt__Button_Play_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Custom_01_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UWB_ProMainMenu_C_BndEvt__Button_Custom_01_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Custom_02_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct UWB_ProMainMenu_C_BndEvt__Button_Custom_02_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Options_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 */
	struct UWB_ProMainMenu_C_BndEvt__Button_Options_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Gameplay_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 */
	struct UWB_ProMainMenu_C_BndEvt__Button_Gameplay_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Controls_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	 */
	struct UWB_ProMainMenu_C_BndEvt__Button_Controls_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Video_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	 */
	struct UWB_ProMainMenu_C_BndEvt__Button_Video_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Audio_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
	 */
	struct UWB_ProMainMenu_C_BndEvt__Button_Audio_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WB_ProMainMenu.WB_ProMainMenu_C.OnSwitchBackFromChild
	 */
	struct UWB_ProMainMenu_C_OnSwitchBackFromChild_Params
	{	};

	/**
	 * Function WB_ProMainMenu.WB_ProMainMenu_C.Construct
	 */
	struct UWB_ProMainMenu_C_Construct_Params
	{	};

	/**
	 * Function WB_ProMainMenu.WB_ProMainMenu_C.OnInputSwitched
	 */
	struct UWB_ProMainMenu_C_OnInputSwitched_Params
	{
	public:
		EInputType                                                 InputType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ProMainMenu.WB_ProMainMenu_C.SetGamepadAppearance
	 */
	struct UWB_ProMainMenu_C_SetGamepadAppearance_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_ProMainMenu.WB_ProMainMenu_C.CheckMouseEntered
	 */
	struct UWB_ProMainMenu_C_CheckMouseEntered_Params
	{	};

	/**
	 * Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Quit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UWB_ProMainMenu_C_BndEvt__Button_Quit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WB_ProMainMenu.WB_ProMainMenu_C.OnConfirmQuit
	 */
	struct UWB_ProMainMenu_C_OnConfirmQuit_Params
	{	};

	/**
	 * Function WB_ProMainMenu.WB_ProMainMenu_C.ClickQuit
	 */
	struct UWB_ProMainMenu_C_ClickQuit_Params
	{	};

	/**
	 * Function WB_ProMainMenu.WB_ProMainMenu_C.ClickHome
	 */
	struct UWB_ProMainMenu_C_ClickHome_Params
	{	};

	/**
	 * Function WB_ProMainMenu.WB_ProMainMenu_C.OnCancelQuit
	 */
	struct UWB_ProMainMenu_C_OnCancelQuit_Params
	{	};

	/**
	 * Function WB_ProMainMenu.WB_ProMainMenu_C.UpdateCaptureCharacter
	 */
	struct UWB_ProMainMenu_C_UpdateCaptureCharacter_Params
	{
	public:
		bool                                                       bShowCharacter;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_ProMainMenu.WB_ProMainMenu_C.UpdateTabAnim
	 */
	struct UWB_ProMainMenu_C_UpdateTabAnim_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ProMainMenu.WB_ProMainMenu_C.SetBaseColor
	 */
	struct UWB_ProMainMenu_C_SetBaseColor_Params
	{
	public:
		bool                                                       bUseBaseColor;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KXDJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        Grad0;                                                   // 0x0004(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Grad1;                                                   // 0x0014(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Grad2;                                                   // 0x0024(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Grad3;                                                   // 0x0034(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Home01_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UWB_ProMainMenu_C_BndEvt__Button_Home01_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Home02_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UWB_ProMainMenu_C_BndEvt__Button_Home02_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Home03_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UWB_ProMainMenu_C_BndEvt__Button_Home03_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_NewGame_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UWB_ProMainMenu_C_BndEvt__Button_NewGame_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WB_ProMainMenu.WB_ProMainMenu_C.BndEvt__Button_Continue_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UWB_ProMainMenu_C_BndEvt__Button_Continue_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WB_ProMainMenu.WB_ProMainMenu_C.SetupButtonSounds
	 */
	struct UWB_ProMainMenu_C_SetupButtonSounds_Params
	{
	public:
		bool                                                       bUseButtonSounds;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TNF5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USoundBase*                                          Clicked;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          Hovered;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ProMainMenu.WB_ProMainMenu_C.ExecuteUbergraph_WB_ProMainMenu
	 */
	struct UWB_ProMainMenu_C_ExecuteUbergraph_WB_ProMainMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
