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
	 * Function WBP_Button1.WBP_Button1_C.GetSelectedIndex
	 */
	struct UWBP_Button1_C_GetSelectedIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Button1.WBP_Button1_C.GetNavigationAction
	 */
	struct UWBP_Button1_C_GetNavigationAction_Params
	{
	public:
		struct FFNavItemAction                                     Action;                                                  // 0x0000(0x0058)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Button1.WBP_Button1_C.GetIndex
	 */
	struct UWBP_Button1_C_GetIndex_Params
	{
	public:
		int32_t                                                    SelectedIndex;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StepIndex;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Button1.WBP_Button1_C.GetEventHandler
	 */
	struct UWBP_Button1_C_GetEventHandler_Params
	{
	public:
		class UBP_navset_event_handler_C*                          Event_Handler;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Button1.WBP_Button1_C.updateShortcutKeyDisplay
	 */
	struct UWBP_Button1_C_updateShortcutKeyDisplay_Params
	{	};

	/**
	 * Function WBP_Button1.WBP_Button1_C.ChangeShortcutKeyDisplay
	 */
	struct UWBP_Button1_C_ChangeShortcutKeyDisplay_Params
	{
	public:
		EShortcutKeyType                                           ShortcutKeyToDisplay;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Button1.WBP_Button1_C.UpdateButtonStyle
	 */
	struct UWBP_Button1_C_UpdateButtonStyle_Params
	{
	public:
		struct FLinearColor                                        Specified_Color;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Button1.WBP_Button1_C.PreConstruct
	 */
	struct UWBP_Button1_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Button1.WBP_Button1_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Button1_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Button1.WBP_Button1_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_Button1_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Button1.WBP_Button1_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_Button1_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Button1.WBP_Button1_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWBP_Button1_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Button1.WBP_Button1_C.HoverSelect
	 */
	struct UWBP_Button1_C_HoverSelect_Params
	{	};

	/**
	 * Function WBP_Button1.WBP_Button1_C.HoverDeselect
	 */
	struct UWBP_Button1_C_HoverDeselect_Params
	{	};

	/**
	 * Function WBP_Button1.WBP_Button1_C.OnClick
	 */
	struct UWBP_Button1_C_OnClick_Params
	{	};

	/**
	 * Function WBP_Button1.WBP_Button1_C.SetEventHandler
	 */
	struct UWBP_Button1_C_SetEventHandler_Params
	{
	public:
		class UBP_navset_event_handler_C*                          Event_Handler;                                           // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Button1.WBP_Button1_C.SetIndex
	 */
	struct UWBP_Button1_C_SetIndex_Params
	{
	public:
		int32_t                                                    SelectedIndex;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StepIndex;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Button1.WBP_Button1_C.SetFocusBPIVersion
	 */
	struct UWBP_Button1_C_SetFocusBPIVersion_Params
	{	};

	/**
	 * Function WBP_Button1.WBP_Button1_C.RemoveFocus
	 */
	struct UWBP_Button1_C_RemoveFocus_Params
	{	};

	/**
	 * Function WBP_Button1.WBP_Button1_C.ChangeValue
	 */
	struct UWBP_Button1_C_ChangeValue_Params
	{
	public:
		bool                                                       Right;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Button1.WBP_Button1_C.UpdateShortcut
	 */
	struct UWBP_Button1_C_UpdateShortcut_Params
	{
	public:
		EShortcutKeyType                                           ShortcutToDisplay;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Button1.WBP_Button1_C.ExecuteUbergraph_WBP_Button1
	 */
	struct UWBP_Button1_C_ExecuteUbergraph_WBP_Button1_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Button1.WBP_Button1_C.OnUnhover__DelegateSignature
	 */
	struct UWBP_Button1_C_OnUnhover__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Button1.WBP_Button1_C.OnHover__DelegateSignature
	 */
	struct UWBP_Button1_C_OnHover__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Button1.WBP_Button1_C.OnClicked__DelegateSignature
	 */
	struct UWBP_Button1_C_OnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
