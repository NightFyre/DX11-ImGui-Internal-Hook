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
	 * Function WB_NativeButton.WB_NativeButton_C.BndEvt__Base_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWB_NativeButton_C_BndEvt__Base_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WB_NativeButton.WB_NativeButton_C.BndEvt__Base_Button_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWB_NativeButton_C_BndEvt__Base_Button_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WB_NativeButton.WB_NativeButton_C.BndEvt__Base_Button_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UWB_NativeButton_C_BndEvt__Base_Button_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WB_NativeButton.WB_NativeButton_C.BndEvt__Base_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWB_NativeButton_C_BndEvt__Base_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WB_NativeButton.WB_NativeButton_C.BndEvt__Base_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWB_NativeButton_C_BndEvt__Base_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WB_NativeButton.WB_NativeButton_C.OnMouseLeave
	 */
	struct UWB_NativeButton_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_NativeButton.WB_NativeButton_C.OnMouseEnter
	 */
	struct UWB_NativeButton_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_NativeButton.WB_NativeButton_C.Construct
	 */
	struct UWB_NativeButton_C_Construct_Params
	{	};

	/**
	 * Function WB_NativeButton.WB_NativeButton_C.CheckIsDisabled
	 */
	struct UWB_NativeButton_C_CheckIsDisabled_Params
	{	};

	/**
	 * Function WB_NativeButton.WB_NativeButton_C.ShowButtonAreaPreview
	 */
	struct UWB_NativeButton_C_ShowButtonAreaPreview_Params
	{
	public:
		struct FLinearColor                                        PreviewColor;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PreviewTime;                                             // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_NativeButton.WB_NativeButton_C.CheckFocused
	 */
	struct UWB_NativeButton_C_CheckFocused_Params
	{	};

	/**
	 * Function WB_NativeButton.WB_NativeButton_C.ExecuteUbergraph_WB_NativeButton
	 */
	struct UWB_NativeButton_C_ExecuteUbergraph_WB_NativeButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_NativeButton.WB_NativeButton_C.OnUnfocused__DelegateSignature
	 */
	struct UWB_NativeButton_C_OnUnfocused__DelegateSignature_Params
	{	};

	/**
	 * Function WB_NativeButton.WB_NativeButton_C.OnFocused__DelegateSignature
	 */
	struct UWB_NativeButton_C_OnFocused__DelegateSignature_Params
	{	};

	/**
	 * Function WB_NativeButton.WB_NativeButton_C.OnDisabled__DelegateSignature
	 */
	struct UWB_NativeButton_C_OnDisabled__DelegateSignature_Params
	{	};

	/**
	 * Function WB_NativeButton.WB_NativeButton_C.OnReleased__DelegateSignature
	 */
	struct UWB_NativeButton_C_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function WB_NativeButton.WB_NativeButton_C.OnPressed__DelegateSignature
	 */
	struct UWB_NativeButton_C_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function WB_NativeButton.WB_NativeButton_C.OnUnhovered__DelegateSignature
	 */
	struct UWB_NativeButton_C_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function WB_NativeButton.WB_NativeButton_C.OnHovered__DelegateSignature
	 */
	struct UWB_NativeButton_C_OnHovered__DelegateSignature_Params
	{
	public:
		bool                                                       bNativeHovered;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_NativeButton.WB_NativeButton_C.OnClicked__DelegateSignature
	 */
	struct UWB_NativeButton_C_OnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
