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
	 * Function WB_TabButton01.WB_TabButton01_C.RemoveContentWidget
	 */
	struct UWB_TabButton01_C_RemoveContentWidget_Params
	{	};

	/**
	 * Function WB_TabButton01.WB_TabButton01_C.CreateContentWidget
	 */
	struct UWB_TabButton01_C_CreateContentWidget_Params
	{
	public:
		class UClass*                                              ContentWidget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_TabButton01.WB_TabButton01_C.IsContentWidgetValid
	 */
	struct UWB_TabButton01_C_IsContentWidgetValid_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_TabButton01.WB_TabButton01_C.Set_AllFillColors
	 */
	struct UWB_TabButton01_C_Set_AllFillColors_Params
	{
	public:
		struct FLinearColor                                        FillColor_Normal;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        FillColor_Hovered;                                       // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        FillColor_Clicked;                                       // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        FillColor_Disabled;                                      // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_TabButton01.WB_TabButton01_C.Set_FillColor
	 */
	struct UWB_TabButton01_C_Set_FillColor_Params
	{
	public:
		struct FLinearColor                                        FillColor;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_TabButton01.WB_TabButton01_C.Set_AllFrameColours
	 */
	struct UWB_TabButton01_C_Set_AllFrameColours_Params
	{
	public:
		struct FLinearColor                                        FrameColor_Normal;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        FrameColor_Hovered;                                      // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        FrameColor_Clicked;                                      // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        FrameColor_Disabled;                                     // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_TabButton01.WB_TabButton01_C.Set_FrameColor
	 */
	struct UWB_TabButton01_C_Set_FrameColor_Params
	{
	public:
		struct FLinearColor                                        FrameColor;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_TabButton01.WB_TabButton01_C.UpdateIsEnabled
	 */
	struct UWB_TabButton01_C_UpdateIsEnabled_Params
	{
	public:
		bool                                                       bIsEnabled;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_066M[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_TabButton01.WB_TabButton01_C.SetFontInfo_OnDisabled
	 */
	struct UWB_TabButton01_C_SetFontInfo_OnDisabled_Params
	{	};

	/**
	 * Function WB_TabButton01.WB_TabButton01_C.SetButtonSizeScale
	 */
	struct UWB_TabButton01_C_SetButtonSizeScale_Params
	{
	public:
		struct FVector2D                                           Size;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_TabButton01.WB_TabButton01_C.SetResponsiveHoveringToNativeButton
	 */
	struct UWB_TabButton01_C_SetResponsiveHoveringToNativeButton_Params
	{	};

	/**
	 * Function WB_TabButton01.WB_TabButton01_C.UnhoverAllNativeButtons
	 */
	struct UWB_TabButton01_C_UnhoverAllNativeButtons_Params
	{	};

	/**
	 * Function WB_TabButton01.WB_TabButton01_C.SetButtonSounds
	 */
	struct UWB_TabButton01_C_SetButtonSounds_Params
	{
	public:
		class USoundBase*                                          OnClicked_Sound;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          OnHovered_Sound;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_TabButton01.WB_TabButton01_C.AddHintIcon
	 */
	struct UWB_TabButton01_C_AddHintIcon_Params
	{
	public:
		class UClass*                                              Widget20x20;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_TabButton01.WB_TabButton01_C.GetButton
	 */
	struct UWB_TabButton01_C_GetButton_Params
	{
	public:
		class UButton*                                             Base_Button;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_TabButton01.WB_TabButton01_C.SetFontInfo_OnClicked
	 */
	struct UWB_TabButton01_C_SetFontInfo_OnClicked_Params
	{	};

	/**
	 * Function WB_TabButton01.WB_TabButton01_C.SetFontInfo_OnNormal
	 */
	struct UWB_TabButton01_C_SetFontInfo_OnNormal_Params
	{	};

	/**
	 * Function WB_TabButton01.WB_TabButton01_C.SetFontInfo_OnHovered
	 */
	struct UWB_TabButton01_C_SetFontInfo_OnHovered_Params
	{	};

	/**
	 * Function WB_TabButton01.WB_TabButton01_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 */
	struct UWB_TabButton01_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WB_TabButton01.WB_TabButton01_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature
	 */
	struct UWB_TabButton01_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature_Params
	{
	public:
		bool                                                       bNativeHovered;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_TabButton01.WB_TabButton01_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature
	 */
	struct UWB_TabButton01_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function WB_TabButton01.WB_TabButton01_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature
	 */
	struct UWB_TabButton01_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function WB_TabButton01.WB_TabButton01_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature
	 */
	struct UWB_TabButton01_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function WB_TabButton01.WB_TabButton01_C.Construct
	 */
	struct UWB_TabButton01_C_Construct_Params
	{	};

	/**
	 * Function WB_TabButton01.WB_TabButton01_C.CheckHasFocus
	 */
	struct UWB_TabButton01_C_CheckHasFocus_Params
	{	};

	/**
	 * Function WB_TabButton01.WB_TabButton01_C.OnInputSwitched
	 */
	struct UWB_TabButton01_C_OnInputSwitched_Params
	{
	public:
		EInputType                                                 InputType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_TabButton01.WB_TabButton01_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_0_OnDisabled__DelegateSignature
	 */
	struct UWB_TabButton01_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_0_OnDisabled__DelegateSignature_Params
	{	};

	/**
	 * Function WB_TabButton01.WB_TabButton01_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_6_OnUnfocused__DelegateSignature
	 */
	struct UWB_TabButton01_C_BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_6_OnUnfocused__DelegateSignature_Params
	{	};

	/**
	 * Function WB_TabButton01.WB_TabButton01_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_5_OnFocused__DelegateSignature
	 */
	struct UWB_TabButton01_C_BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_5_OnFocused__DelegateSignature_Params
	{	};

	/**
	 * Function WB_TabButton01.WB_TabButton01_C.UpdateGamepadAppearance
	 */
	struct UWB_TabButton01_C_UpdateGamepadAppearance_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_TabButton01.WB_TabButton01_C.Reconstruct
	 */
	struct UWB_TabButton01_C_Reconstruct_Params
	{	};

	/**
	 * Function WB_TabButton01.WB_TabButton01_C.SetBaseColor
	 */
	struct UWB_TabButton01_C_SetBaseColor_Params
	{
	public:
		bool                                                       bUseBaseColor;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DUWC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        Grad0;                                                   // 0x0004(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Grad1;                                                   // 0x0014(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Grad2;                                                   // 0x0024(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Grad3;                                                   // 0x0034(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_TabButton01.WB_TabButton01_C.SetupButtonSounds
	 */
	struct UWB_TabButton01_C_SetupButtonSounds_Params
	{
	public:
		bool                                                       bUseButtonSounds;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VSJZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USoundBase*                                          Clicked;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          Hovered;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_TabButton01.WB_TabButton01_C.PreConstruct
	 */
	struct UWB_TabButton01_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_TabButton01.WB_TabButton01_C.ExecuteUbergraph_WB_TabButton01
	 */
	struct UWB_TabButton01_C_ExecuteUbergraph_WB_TabButton01_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_TabButton01.WB_TabButton01_C.OnUnfocused__DelegateSignature
	 */
	struct UWB_TabButton01_C_OnUnfocused__DelegateSignature_Params
	{	};

	/**
	 * Function WB_TabButton01.WB_TabButton01_C.OnFocused__DelegateSignature
	 */
	struct UWB_TabButton01_C_OnFocused__DelegateSignature_Params
	{	};

	/**
	 * Function WB_TabButton01.WB_TabButton01_C.OnDisabled__DelegateSignature
	 */
	struct UWB_TabButton01_C_OnDisabled__DelegateSignature_Params
	{	};

	/**
	 * Function WB_TabButton01.WB_TabButton01_C.OnReleased__DelegateSignature
	 */
	struct UWB_TabButton01_C_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function WB_TabButton01.WB_TabButton01_C.OnPressed__DelegateSignature
	 */
	struct UWB_TabButton01_C_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function WB_TabButton01.WB_TabButton01_C.OnUnhovered__DelegateSignature
	 */
	struct UWB_TabButton01_C_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function WB_TabButton01.WB_TabButton01_C.OnHovered__DelegateSignature
	 */
	struct UWB_TabButton01_C_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function WB_TabButton01.WB_TabButton01_C.OnClicked__DelegateSignature
	 */
	struct UWB_TabButton01_C_OnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
