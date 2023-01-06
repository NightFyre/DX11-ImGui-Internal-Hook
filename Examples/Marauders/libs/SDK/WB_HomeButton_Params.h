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
	 * Function WB_HomeButton.WB_HomeButton_C.SetFrameBlockColor
	 */
	struct UWB_HomeButton_C_SetFrameBlockColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_HomeButton.WB_HomeButton_C.GetCurrentScale
	 */
	struct UWB_HomeButton_C_GetCurrentScale_Params
	{
	public:
		struct FVector2D                                           Scale;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_HomeButton.WB_HomeButton_C.UpdateImageSaturation
	 */
	struct UWB_HomeButton_C_UpdateImageSaturation_Params
	{	};

	/**
	 * Function WB_HomeButton.WB_HomeButton_C.UpdateImageColors
	 */
	struct UWB_HomeButton_C_UpdateImageColors_Params
	{	};

	/**
	 * Function WB_HomeButton.WB_HomeButton_C.RemoveContentWidget
	 */
	struct UWB_HomeButton_C_RemoveContentWidget_Params
	{	};

	/**
	 * Function WB_HomeButton.WB_HomeButton_C.CreateContentWidget
	 */
	struct UWB_HomeButton_C_CreateContentWidget_Params
	{
	public:
		class UClass*                                              ContentWidget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_HomeButton.WB_HomeButton_C.IsContentWidgetValid
	 */
	struct UWB_HomeButton_C_IsContentWidgetValid_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_HomeButton.WB_HomeButton_C.Set_AllFrameColours
	 */
	struct UWB_HomeButton_C_Set_AllFrameColours_Params
	{	};

	/**
	 * Function WB_HomeButton.WB_HomeButton_C.UpdateIsEnabled
	 */
	struct UWB_HomeButton_C_UpdateIsEnabled_Params
	{
	public:
		bool                                                       bIsEnabled;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3U00[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_HomeButton.WB_HomeButton_C.SetFontInfo_OnDisabled
	 */
	struct UWB_HomeButton_C_SetFontInfo_OnDisabled_Params
	{	};

	/**
	 * Function WB_HomeButton.WB_HomeButton_C.SetButtonSizeScale
	 */
	struct UWB_HomeButton_C_SetButtonSizeScale_Params
	{
	public:
		struct FVector2D                                           Size;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_HomeButton.WB_HomeButton_C.SetResponsiveHoveringToNativeButton
	 */
	struct UWB_HomeButton_C_SetResponsiveHoveringToNativeButton_Params
	{	};

	/**
	 * Function WB_HomeButton.WB_HomeButton_C.UnhoverAllNativeButtons
	 */
	struct UWB_HomeButton_C_UnhoverAllNativeButtons_Params
	{	};

	/**
	 * Function WB_HomeButton.WB_HomeButton_C.SetButtonSounds
	 */
	struct UWB_HomeButton_C_SetButtonSounds_Params
	{
	public:
		class USoundBase*                                          OnClicked_Sound;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          OnHovered_Sound;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_HomeButton.WB_HomeButton_C.GetButton
	 */
	struct UWB_HomeButton_C_GetButton_Params
	{
	public:
		class UButton*                                             Base_Button;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_HomeButton.WB_HomeButton_C.SetFontInfo_OnClicked
	 */
	struct UWB_HomeButton_C_SetFontInfo_OnClicked_Params
	{	};

	/**
	 * Function WB_HomeButton.WB_HomeButton_C.SetFontInfo_OnNormal
	 */
	struct UWB_HomeButton_C_SetFontInfo_OnNormal_Params
	{	};

	/**
	 * Function WB_HomeButton.WB_HomeButton_C.SetFontInfo_OnHovered
	 */
	struct UWB_HomeButton_C_SetFontInfo_OnHovered_Params
	{	};

	/**
	 * Function WB_HomeButton.WB_HomeButton_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 */
	struct UWB_HomeButton_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WB_HomeButton.WB_HomeButton_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature
	 */
	struct UWB_HomeButton_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function WB_HomeButton.WB_HomeButton_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature
	 */
	struct UWB_HomeButton_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function WB_HomeButton.WB_HomeButton_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature
	 */
	struct UWB_HomeButton_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function WB_HomeButton.WB_HomeButton_C.Construct
	 */
	struct UWB_HomeButton_C_Construct_Params
	{	};

	/**
	 * Function WB_HomeButton.WB_HomeButton_C.CheckHasFocus
	 */
	struct UWB_HomeButton_C_CheckHasFocus_Params
	{	};

	/**
	 * Function WB_HomeButton.WB_HomeButton_C.OnInputSwitched
	 */
	struct UWB_HomeButton_C_OnInputSwitched_Params
	{
	public:
		EInputType                                                 InputType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_HomeButton.WB_HomeButton_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_0_OnDisabled__DelegateSignature
	 */
	struct UWB_HomeButton_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_0_OnDisabled__DelegateSignature_Params
	{	};

	/**
	 * Function WB_HomeButton.WB_HomeButton_C.CheckScale
	 */
	struct UWB_HomeButton_C_CheckScale_Params
	{	};

	/**
	 * Function WB_HomeButton.WB_HomeButton_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_143_OnUnfocused__DelegateSignature
	 */
	struct UWB_HomeButton_C_BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_143_OnUnfocused__DelegateSignature_Params
	{	};

	/**
	 * Function WB_HomeButton.WB_HomeButton_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_142_OnFocused__DelegateSignature
	 */
	struct UWB_HomeButton_C_BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_142_OnFocused__DelegateSignature_Params
	{	};

	/**
	 * Function WB_HomeButton.WB_HomeButton_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature
	 */
	struct UWB_HomeButton_C_BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature_Params
	{
	public:
		bool                                                       bNativeHovered;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_HomeButton.WB_HomeButton_C.Reconstruct
	 */
	struct UWB_HomeButton_C_Reconstruct_Params
	{	};

	/**
	 * Function WB_HomeButton.WB_HomeButton_C.SetBaseColor
	 */
	struct UWB_HomeButton_C_SetBaseColor_Params
	{
	public:
		bool                                                       bUseBaseColor;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KUNB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        Grad0;                                                   // 0x0004(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Grad1;                                                   // 0x0014(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Grad2;                                                   // 0x0024(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Grad3;                                                   // 0x0034(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_HomeButton.WB_HomeButton_C.SetupButtonSounds
	 */
	struct UWB_HomeButton_C_SetupButtonSounds_Params
	{
	public:
		bool                                                       bUseButtonSounds;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_THU9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USoundBase*                                          Clicked;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          Hovered;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_HomeButton.WB_HomeButton_C.PreConstruct
	 */
	struct UWB_HomeButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_HomeButton.WB_HomeButton_C.ExecuteUbergraph_WB_HomeButton
	 */
	struct UWB_HomeButton_C_ExecuteUbergraph_WB_HomeButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_HomeButton.WB_HomeButton_C.OnUnfocused__DelegateSignature
	 */
	struct UWB_HomeButton_C_OnUnfocused__DelegateSignature_Params
	{	};

	/**
	 * Function WB_HomeButton.WB_HomeButton_C.OnFocused__DelegateSignature
	 */
	struct UWB_HomeButton_C_OnFocused__DelegateSignature_Params
	{	};

	/**
	 * Function WB_HomeButton.WB_HomeButton_C.OnDisabled__DelegateSignature
	 */
	struct UWB_HomeButton_C_OnDisabled__DelegateSignature_Params
	{	};

	/**
	 * Function WB_HomeButton.WB_HomeButton_C.OnReleased__DelegateSignature
	 */
	struct UWB_HomeButton_C_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function WB_HomeButton.WB_HomeButton_C.OnPressed__DelegateSignature
	 */
	struct UWB_HomeButton_C_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function WB_HomeButton.WB_HomeButton_C.OnUnhovered__DelegateSignature
	 */
	struct UWB_HomeButton_C_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function WB_HomeButton.WB_HomeButton_C.OnHovered__DelegateSignature
	 */
	struct UWB_HomeButton_C_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function WB_HomeButton.WB_HomeButton_C.OnClicked__DelegateSignature
	 */
	struct UWB_HomeButton_C_OnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
