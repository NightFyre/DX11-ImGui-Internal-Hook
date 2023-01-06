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
	 * Function WB_Options_Gameplay.WB_Options_Gameplay_C.GetIsGamepad
	 */
	struct UWB_Options_Gameplay_C_GetIsGamepad_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_Options_Gameplay.WB_Options_Gameplay_C.NavToBackButton
	 */
	struct UWB_Options_Gameplay_C_NavToBackButton_Params
	{	};

	/**
	 * Function WB_Options_Gameplay.WB_Options_Gameplay_C.NavToOptionsButtons
	 */
	struct UWB_Options_Gameplay_C_NavToOptionsButtons_Params
	{	};

	/**
	 * Function WB_Options_Gameplay.WB_Options_Gameplay_C.NavToTextButtons
	 */
	struct UWB_Options_Gameplay_C_NavToTextButtons_Params
	{	};

	/**
	 * Function WB_Options_Gameplay.WB_Options_Gameplay_C.OnPreviewKeyDown
	 */
	struct UWB_Options_Gameplay_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WB_Options_Gameplay.WB_Options_Gameplay_C.ClickBack
	 */
	struct UWB_Options_Gameplay_C_ClickBack_Params
	{	};

	/**
	 * Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__Option_ShowHUD_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature
	 */
	struct UWB_Options_Gameplay_C_BndEvt__Option_ShowHUD_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature_Params
	{
	public:
		class FName                                                StateName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StateIndex;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__Option_GameplayOption_02_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature
	 */
	struct UWB_Options_Gameplay_C_BndEvt__Option_GameplayOption_02_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature_Params
	{
	public:
		class FName                                                StateName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StateIndex;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__Option_GameplayOption_03_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature
	 */
	struct UWB_Options_Gameplay_C_BndEvt__Option_GameplayOption_03_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature_Params
	{
	public:
		class FName                                                StateName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StateIndex;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__Option_GameplayOption_04_K2Node_ComponentBoundEvent_3_OnStateChanged__DelegateSignature
	 */
	struct UWB_Options_Gameplay_C_BndEvt__Option_GameplayOption_04_K2Node_ComponentBoundEvent_3_OnStateChanged__DelegateSignature_Params
	{
	public:
		class FName                                                StateName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StateIndex;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__Option_GameplayOption_05_K2Node_ComponentBoundEvent_4_OnStateChanged__DelegateSignature
	 */
	struct UWB_Options_Gameplay_C_BndEvt__Option_GameplayOption_05_K2Node_ComponentBoundEvent_4_OnStateChanged__DelegateSignature_Params
	{
	public:
		class FName                                                StateName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StateIndex;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__Option_GameplayOption_06_K2Node_ComponentBoundEvent_5_OnStateChanged__DelegateSignature
	 */
	struct UWB_Options_Gameplay_C_BndEvt__Option_GameplayOption_06_K2Node_ComponentBoundEvent_5_OnStateChanged__DelegateSignature_Params
	{
	public:
		class FName                                                StateName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StateIndex;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__Option_GameplayOption_07_K2Node_ComponentBoundEvent_6_OnStateChanged__DelegateSignature
	 */
	struct UWB_Options_Gameplay_C_BndEvt__Option_GameplayOption_07_K2Node_ComponentBoundEvent_6_OnStateChanged__DelegateSignature_Params
	{
	public:
		class FName                                                StateName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StateIndex;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Gameplay.WB_Options_Gameplay_C.CheckFocus
	 */
	struct UWB_Options_Gameplay_C_CheckFocus_Params
	{	};

	/**
	 * Function WB_Options_Gameplay.WB_Options_Gameplay_C.OnInputSwitched
	 */
	struct UWB_Options_Gameplay_C_OnInputSwitched_Params
	{
	public:
		EInputType                                                 InputType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Gameplay.WB_Options_Gameplay_C.SetGamepadAppearance
	 */
	struct UWB_Options_Gameplay_C_SetGamepadAppearance_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_Options_Gameplay.WB_Options_Gameplay_C.OnConfirmReset
	 */
	struct UWB_Options_Gameplay_C_OnConfirmReset_Params
	{	};

	/**
	 * Function WB_Options_Gameplay.WB_Options_Gameplay_C.OnCancelRequest
	 */
	struct UWB_Options_Gameplay_C_OnCancelRequest_Params
	{	};

	/**
	 * Function WB_Options_Gameplay.WB_Options_Gameplay_C.SetDefaultValues
	 */
	struct UWB_Options_Gameplay_C_SetDefaultValues_Params
	{	};

	/**
	 * Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__MM_GenericBtn_Audio_ResetToDefault_K2Node_ComponentBoundEvent_7_GenericSmallBtnPressed__DelegateSignature
	 */
	struct UWB_Options_Gameplay_C_BndEvt__MM_GenericBtn_Audio_ResetToDefault_K2Node_ComponentBoundEvent_7_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__WB_Options_Gameplay_ComboBoxString_280_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UWB_Options_Gameplay_C_BndEvt__WB_Options_Gameplay_ComboBoxString_280_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Gameplay.WB_Options_Gameplay_C.GAMEPLAY_OPENED
	 */
	struct UWB_Options_Gameplay_C_GAMEPLAY_OPENED_Params
	{	};

	/**
	 * Function WB_Options_Gameplay.WB_Options_Gameplay_C.ActivateWidget
	 */
	struct UWB_Options_Gameplay_C_ActivateWidget_Params
	{	};

	/**
	 * Function WB_Options_Gameplay.WB_Options_Gameplay_C.ExecuteUbergraph_WB_Options_Gameplay
	 */
	struct UWB_Options_Gameplay_C_ExecuteUbergraph_WB_Options_Gameplay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Gameplay.WB_Options_Gameplay_C.OnClicked_Back__DelegateSignature
	 */
	struct UWB_Options_Gameplay_C_OnClicked_Back__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
