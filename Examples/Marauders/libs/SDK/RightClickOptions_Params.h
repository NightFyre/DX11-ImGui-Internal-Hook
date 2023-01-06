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
	 * Function RightClickOptions.RightClickOptions_C.Run Reason Cant Rename
	 */
	struct URightClickOptions_C_Run_Reason_Cant_Rename_Params
	{
	public:
		class FText                                                WarningMessage;                                          // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class USoundBase*                                          Sound;                                                   // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidgetAnimation*                                    InAnimation;                                             // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RightClickOptions.RightClickOptions_C.GetButtonTextForInt
	 */
	struct URightClickOptions_C_GetButtonTextForInt_Params
	{
	public:
		int32_t                                                    ButtonNumber;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DUZQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTextBlock*                                          ReturnField;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RightClickOptions.RightClickOptions_C.GetButtonForIntAndSetOption
	 */
	struct URightClickOptions_C_GetButtonForIntAndSetOption_Params
	{
	public:
		int32_t                                                    ButtonNumber;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemOptions                                               OptionIn;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UFZ6[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UButton*                                             Button;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RightClickOptions.RightClickOptions_C.Force_RightClickOptionsClose
	 */
	struct URightClickOptions_C_Force_RightClickOptionsClose_Params
	{	};

	/**
	 * Function RightClickOptions.RightClickOptions_C.BndEvt__MM_GenericSmallBtn01_GoBack_Crew_PasswordScreen_K2Node_ComponentBoundEvent_9_GenericSmallBtnPressed__DelegateSignature
	 */
	struct URightClickOptions_C_BndEvt__MM_GenericSmallBtn01_GoBack_Crew_PasswordScreen_K2Node_ComponentBoundEvent_9_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function RightClickOptions.RightClickOptions_C.BndEvt__RightClickOptions_MM_GenericSmallBtn01_GoBack_Tooltip_1_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature
	 */
	struct URightClickOptions_C_BndEvt__RightClickOptions_MM_GenericSmallBtn01_GoBack_Tooltip_1_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function RightClickOptions.RightClickOptions_C.ForceOption03_Unselected
	 */
	struct URightClickOptions_C_ForceOption03_Unselected_Params
	{	};

	/**
	 * Function RightClickOptions.RightClickOptions_C.OnRightClickOpen
	 */
	struct URightClickOptions_C_OnRightClickOpen_Params
	{	};

	/**
	 * Function RightClickOptions.RightClickOptions_C.BndEvt__RightClickOptions_Option5BTN_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
	 */
	struct URightClickOptions_C_BndEvt__RightClickOptions_Option5BTN_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function RightClickOptions.RightClickOptions_C.BndEvt__RightClickOptions_Option5BTN_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
	 */
	struct URightClickOptions_C_BndEvt__RightClickOptions_Option5BTN_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function RightClickOptions.RightClickOptions_C.ForceOption05_Unselected
	 */
	struct URightClickOptions_C_ForceOption05_Unselected_Params
	{	};

	/**
	 * Function RightClickOptions.RightClickOptions_C.ForceOption02_Unselected
	 */
	struct URightClickOptions_C_ForceOption02_Unselected_Params
	{	};

	/**
	 * Function RightClickOptions.RightClickOptions_C.BndEvt__RightClickOptions_Option2BTN_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature
	 */
	struct URightClickOptions_C_BndEvt__RightClickOptions_Option2BTN_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function RightClickOptions.RightClickOptions_C.BndEvt__RightClickOptions_Option1BTN_K2Node_ComponentBoundEvent_17_OnButtonPressedEvent__DelegateSignature
	 */
	struct URightClickOptions_C_BndEvt__RightClickOptions_Option1BTN_K2Node_ComponentBoundEvent_17_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function RightClickOptions.RightClickOptions_C.BndEvt__RightClickOptions_Option3BTN_K2Node_ComponentBoundEvent_18_OnButtonPressedEvent__DelegateSignature
	 */
	struct URightClickOptions_C_BndEvt__RightClickOptions_Option3BTN_K2Node_ComponentBoundEvent_18_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function RightClickOptions.RightClickOptions_C.BndEvt__RightClickOptions_Option4BTN_K2Node_ComponentBoundEvent_19_OnButtonPressedEvent__DelegateSignature
	 */
	struct URightClickOptions_C_BndEvt__RightClickOptions_Option4BTN_K2Node_ComponentBoundEvent_19_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function RightClickOptions.RightClickOptions_C.SetButtonOptions
	 */
	struct URightClickOptions_C_SetButtonOptions_Params
	{
	public:
		int32_t                                                    Button;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemOptions                                               OptionToSet;                                             // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RightClickOptions.RightClickOptions_C.BndEvt__Option4BTN_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	 */
	struct URightClickOptions_C_BndEvt__Option4BTN_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function RightClickOptions.RightClickOptions_C.BndEvt__Option4BTN_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 */
	struct URightClickOptions_C_BndEvt__Option4BTN_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function RightClickOptions.RightClickOptions_C.BndEvt__Option3BTN_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 */
	struct URightClickOptions_C_BndEvt__Option3BTN_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function RightClickOptions.RightClickOptions_C.BndEvt__Option3BTN_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 */
	struct URightClickOptions_C_BndEvt__Option3BTN_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function RightClickOptions.RightClickOptions_C.BndEvt__Option2BTN_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct URightClickOptions_C_BndEvt__Option2BTN_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function RightClickOptions.RightClickOptions_C.BndEvt__Option2BTN_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct URightClickOptions_C_BndEvt__Option2BTN_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function RightClickOptions.RightClickOptions_C.BndEvt__RightClickOptions_MM_GenericSmallBtn01_GoBack_Tooltip_2_K2Node_ComponentBoundEvent_21_GenericSmallBtnPressed__DelegateSignature
	 */
	struct URightClickOptions_C_BndEvt__RightClickOptions_MM_GenericSmallBtn01_GoBack_Tooltip_2_K2Node_ComponentBoundEvent_21_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function RightClickOptions.RightClickOptions_C.SetOptionArray
	 */
	struct URightClickOptions_C_SetOptionArray_Params
	{
	public:
		TArray<EItemOptions>                                       SentItems;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function RightClickOptions.RightClickOptions_C.ForceOption04_Unselected
	 */
	struct URightClickOptions_C_ForceOption04_Unselected_Params
	{	};

	/**
	 * Function RightClickOptions.RightClickOptions_C.ForceOption01_Unselected
	 */
	struct URightClickOptions_C_ForceOption01_Unselected_Params
	{	};

	/**
	 * Function RightClickOptions.RightClickOptions_C.Construct
	 */
	struct URightClickOptions_C_Construct_Params
	{	};

	/**
	 * Function RightClickOptions.RightClickOptions_C.RightClickButtonHasBeenPressed
	 */
	struct URightClickOptions_C_RightClickButtonHasBeenPressed_Params
	{
	public:
		EItemOptions                                               WhichOptionPressed;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RightClickOptions.RightClickOptions_C.BndEvt__Option1BTN_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct URightClickOptions_C_BndEvt__Option1BTN_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function RightClickOptions.RightClickOptions_C.ShowHideNameStorageElement
	 */
	struct URightClickOptions_C_ShowHideNameStorageElement_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RightClickOptions.RightClickOptions_C.BndEvt__RightClickOptions_EditableTextBox_NewContainerNameToUse_K2Node_ComponentBoundEvent_11_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct URightClickOptions_C_BndEvt__RightClickOptions_EditableTextBox_NewContainerNameToUse_K2Node_ComponentBoundEvent_11_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function RightClickOptions.RightClickOptions_C.BndEvt__Option1BTN_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct URightClickOptions_C_BndEvt__Option1BTN_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function RightClickOptions.RightClickOptions_C.BndEvt__RightClickOptions_RightClickBtn_SubWidget_1_K2Node_ComponentBoundEvent_13_ED_RightClickOptionPressed__DelegateSignature
	 */
	struct URightClickOptions_C_BndEvt__RightClickOptions_RightClickBtn_SubWidget_1_K2Node_ComponentBoundEvent_13_ED_RightClickOptionPressed__DelegateSignature_Params
	{
	public:
		EItemOptions                                               WhichOptionPressed;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RightClickOptions.RightClickOptions_C.BndEvt__RightClickOptions_RightClickBtn_SubWidget_2_K2Node_ComponentBoundEvent_14_ED_RightClickOptionPressed__DelegateSignature
	 */
	struct URightClickOptions_C_BndEvt__RightClickOptions_RightClickBtn_SubWidget_2_K2Node_ComponentBoundEvent_14_ED_RightClickOptionPressed__DelegateSignature_Params
	{
	public:
		EItemOptions                                               WhichOptionPressed;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RightClickOptions.RightClickOptions_C.BndEvt__RightClickOptions_EditableTextBox_NewContainerNameToUse_K2Node_ComponentBoundEvent_20_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct URightClickOptions_C_BndEvt__RightClickOptions_EditableTextBox_NewContainerNameToUse_K2Node_ComponentBoundEvent_20_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RightClickOptions.RightClickOptions_C.BndEvt__RightClickOptions_Btn_DevRandoDamagae_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature
	 */
	struct URightClickOptions_C_BndEvt__RightClickOptions_Btn_DevRandoDamagae_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function RightClickOptions.RightClickOptions_C.ExecuteUbergraph_RightClickOptions
	 */
	struct URightClickOptions_C_ExecuteUbergraph_RightClickOptions_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
