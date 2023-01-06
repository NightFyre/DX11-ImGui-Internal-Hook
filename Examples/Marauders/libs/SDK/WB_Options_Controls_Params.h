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
	 * Function WB_Options_Controls.WB_Options_Controls_C.RecalculateByMinMax
	 */
	struct UWB_Options_Controls_C_RecalculateByMinMax_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TWS1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWB_ProgressButton_C*                                ProgressOption;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Controls.WB_Options_Controls_C.GetIsGamepad
	 */
	struct UWB_Options_Controls_C_GetIsGamepad_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_Options_Controls.WB_Options_Controls_C.NavToBackButton
	 */
	struct UWB_Options_Controls_C_NavToBackButton_Params
	{	};

	/**
	 * Function WB_Options_Controls.WB_Options_Controls_C.NavToOptionsButtons
	 */
	struct UWB_Options_Controls_C_NavToOptionsButtons_Params
	{	};

	/**
	 * Function WB_Options_Controls.WB_Options_Controls_C.NavToTextButtons
	 */
	struct UWB_Options_Controls_C_NavToTextButtons_Params
	{	};

	/**
	 * Function WB_Options_Controls.WB_Options_Controls_C.OnPreviewKeyDown
	 */
	struct UWB_Options_Controls_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WB_Options_Controls.WB_Options_Controls_C.ActivateWidget
	 */
	struct UWB_Options_Controls_C_ActivateWidget_Params
	{	};

	/**
	 * Function WB_Options_Controls.WB_Options_Controls_C.OnInputSwitched
	 */
	struct UWB_Options_Controls_C_OnInputSwitched_Params
	{
	public:
		EInputType                                                 InputType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Controls.WB_Options_Controls_C.CheckFocus
	 */
	struct UWB_Options_Controls_C_CheckFocus_Params
	{	};

	/**
	 * Function WB_Options_Controls.WB_Options_Controls_C.ClickBack
	 */
	struct UWB_Options_Controls_C_ClickBack_Params
	{	};

	/**
	 * Function WB_Options_Controls.WB_Options_Controls_C.SetGamepadAppearance
	 */
	struct UWB_Options_Controls_C_SetGamepadAppearance_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_Options_Controls.WB_Options_Controls_C.SetDefaultValues
	 */
	struct UWB_Options_Controls_C_SetDefaultValues_Params
	{	};

	/**
	 * Function WB_Options_Controls.WB_Options_Controls_C.OnConfirmReset
	 */
	struct UWB_Options_Controls_C_OnConfirmReset_Params
	{	};

	/**
	 * Function WB_Options_Controls.WB_Options_Controls_C.OnCancelRequest
	 */
	struct UWB_Options_Controls_C_OnCancelRequest_Params
	{	};

	/**
	 * Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__Option_MouseSensi_01_K2Node_ComponentBoundEvent_2_OnProgressChanged__DelegateSignature
	 */
	struct UWB_Options_Controls_C_BndEvt__Option_MouseSensi_01_K2Node_ComponentBoundEvent_2_OnProgressChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__Option_MouseSensi_02_K2Node_ComponentBoundEvent_3_OnProgressChanged__DelegateSignature
	 */
	struct UWB_Options_Controls_C_BndEvt__Option_MouseSensi_02_K2Node_ComponentBoundEvent_3_OnProgressChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__Option_MouseSensi_03_K2Node_ComponentBoundEvent_4_OnProgressChanged__DelegateSignature
	 */
	struct UWB_Options_Controls_C_BndEvt__Option_MouseSensi_03_K2Node_ComponentBoundEvent_4_OnProgressChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__Option_MouseSensi_04_K2Node_ComponentBoundEvent_5_OnProgressChanged__DelegateSignature
	 */
	struct UWB_Options_Controls_C_BndEvt__Option_MouseSensi_04_K2Node_ComponentBoundEvent_5_OnProgressChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__Option_InvertX_K2Node_ComponentBoundEvent_6_OnStateChanged__DelegateSignature
	 */
	struct UWB_Options_Controls_C_BndEvt__Option_InvertX_K2Node_ComponentBoundEvent_6_OnStateChanged__DelegateSignature_Params
	{
	public:
		class FName                                                StateName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StateIndex;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__Option_InvertY_K2Node_ComponentBoundEvent_7_OnStateChanged__DelegateSignature
	 */
	struct UWB_Options_Controls_C_BndEvt__Option_InvertY_K2Node_ComponentBoundEvent_7_OnStateChanged__DelegateSignature_Params
	{
	public:
		class FName                                                StateName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StateIndex;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Controls.WB_Options_Controls_C.SetupButtons
	 */
	struct UWB_Options_Controls_C_SetupButtons_Params
	{	};

	/**
	 * Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__MM_GenericBtn_ControlsExtras_ResetToDefault_K2Node_ComponentBoundEvent_8_GenericSmallBtnPressed__DelegateSignature
	 */
	struct UWB_Options_Controls_C_BndEvt__MM_GenericBtn_ControlsExtras_ResetToDefault_K2Node_ComponentBoundEvent_8_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__MM_GenericBtn_ControlsExtras_ResetToDefault_1_K2Node_ComponentBoundEvent_9_GenericSmallBtnPressed__DelegateSignature
	 */
	struct UWB_Options_Controls_C_BndEvt__MM_GenericBtn_ControlsExtras_ResetToDefault_1_K2Node_ComponentBoundEvent_9_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__WB_Options_Controls_Option_CrouchType_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature
	 */
	struct UWB_Options_Controls_C_BndEvt__WB_Options_Controls_Option_CrouchType_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature_Params
	{
	public:
		class FName                                                StateName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StateIndex;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__WB_Options_Controls_Option_ADSType_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature
	 */
	struct UWB_Options_Controls_C_BndEvt__WB_Options_Controls_Option_ADSType_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature_Params
	{
	public:
		class FName                                                StateName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StateIndex;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Controls.WB_Options_Controls_C.Return_HaveClosedTheKeybindsMenu
	 */
	struct UWB_Options_Controls_C_Return_HaveClosedTheKeybindsMenu_Params
	{	};

	/**
	 * Function WB_Options_Controls.WB_Options_Controls_C.ExecuteUbergraph_WB_Options_Controls
	 */
	struct UWB_Options_Controls_C_ExecuteUbergraph_WB_Options_Controls_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Controls.WB_Options_Controls_C.OnClicked_Back__DelegateSignature
	 */
	struct UWB_Options_Controls_C_OnClicked_Back__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
