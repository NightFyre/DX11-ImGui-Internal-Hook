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
	 * Function WB_ProgressButton.WB_ProgressButton_C.SetProgressInfo
	 */
	struct UWB_ProgressButton_C_SetProgressInfo_Params
	{
	public:
		float                                                      ProgressMinValue;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ProgressMaxValue;                                        // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              ProgressDefinition;                                      // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      DefaultValue;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ProgressButton.WB_ProgressButton_C.SetProgressValue
	 */
	struct UWB_ProgressButton_C_SetProgressValue_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ProgressButton.WB_ProgressButton_C.GetHasFocus
	 */
	struct UWB_ProgressButton_C_GetHasFocus_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_ProgressButton.WB_ProgressButton_C.HandleIsEnabled
	 */
	struct UWB_ProgressButton_C_HandleIsEnabled_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_ProgressButton.WB_ProgressButton_C.SetMultiState_OptionFont_Normal
	 */
	struct UWB_ProgressButton_C_SetMultiState_OptionFont_Normal_Params
	{	};

	/**
	 * Function WB_ProgressButton.WB_ProgressButton_C.SetMultiState_OptionFont_Hovered
	 */
	struct UWB_ProgressButton_C_SetMultiState_OptionFont_Hovered_Params
	{	};

	/**
	 * Function WB_ProgressButton.WB_ProgressButton_C.SetStateButtonInfo
	 */
	struct UWB_ProgressButton_C_SetStateButtonInfo_Params
	{
	public:
		struct FLinearColor                                        ButtonIconColor_Normal;                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        ButtonIconColor_Hovered;                                 // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        ButtonIconColor_Clicked;                                 // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             ButtonIcon;                                              // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ProgressButton.WB_ProgressButton_C.SetMultiState_FontInfo
	 */
	struct UWB_ProgressButton_C_SetMultiState_FontInfo_Params
	{
	public:
		class UFont*                                               MultiState_Font_Normal;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UFontFace*                                           MultiState_FontFace_Normal;                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MultiState_FontSize_Normal;                              // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        MultiState_FontColor_Normal;                             // 0x0014(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U2WI[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UFont*                                               MultiState_Font_Hovered;                                 // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UFontFace*                                           MultiState_FontFace_Hovered;                             // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MultiState_FontSize_Hovered;                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        MultiState_FontColor_Hovered;                            // 0x003C(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ProgressButton.WB_ProgressButton_C.SetMultiStateJustification
	 */
	struct UWB_ProgressButton_C_SetMultiStateJustification_Params
	{	};

	/**
	 * Function WB_ProgressButton.WB_ProgressButton_C.SetMultiStateText
	 */
	struct UWB_ProgressButton_C_SetMultiStateText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WB_ProgressButton.WB_ProgressButton_C.UnhoverAllOptionsButton
	 */
	struct UWB_ProgressButton_C_UnhoverAllOptionsButton_Params
	{	};

	/**
	 * Function WB_ProgressButton.WB_ProgressButton_C.SetupSizes
	 */
	struct UWB_ProgressButton_C_SetupSizes_Params
	{
	public:
		struct FVector2D                                           Size;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ProgressButton.WB_ProgressButton_C.SetUser_Focus
	 */
	struct UWB_ProgressButton_C_SetUser_Focus_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ProgressButton.WB_ProgressButton_C.PreConstruct
	 */
	struct UWB_ProgressButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_ProgressButton.WB_ProgressButton_C.Construct
	 */
	struct UWB_ProgressButton_C_Construct_Params
	{	};

	/**
	 * Function WB_ProgressButton.WB_ProgressButton_C.BndEvt__WB_Progress_K2Node_ComponentBoundEvent_42_OnHovered__DelegateSignature
	 */
	struct UWB_ProgressButton_C_BndEvt__WB_Progress_K2Node_ComponentBoundEvent_42_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function WB_ProgressButton.WB_ProgressButton_C.UnhoverProgressButton
	 */
	struct UWB_ProgressButton_C_UnhoverProgressButton_Params
	{	};

	/**
	 * Function WB_ProgressButton.WB_ProgressButton_C.Construct_ProgressButton
	 */
	struct UWB_ProgressButton_C_Construct_ProgressButton_Params
	{	};

	/**
	 * Function WB_ProgressButton.WB_ProgressButton_C.PreConstruct_ProgressButton
	 */
	struct UWB_ProgressButton_C_PreConstruct_ProgressButton_Params
	{	};

	/**
	 * Function WB_ProgressButton.WB_ProgressButton_C.BndEvt__Button_Multistate_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWB_ProgressButton_C_BndEvt__Button_Multistate_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WB_ProgressButton.WB_ProgressButton_C.BndEvt__Button_Multistate_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWB_ProgressButton_C_BndEvt__Button_Multistate_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WB_ProgressButton.WB_ProgressButton_C.BndEvt__WB_Progress_K2Node_ComponentBoundEvent_0_OnProgressChanged__DelegateSignature
	 */
	struct UWB_ProgressButton_C_BndEvt__WB_Progress_K2Node_ComponentBoundEvent_0_OnProgressChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ProgressButton.WB_ProgressButton_C.SetBaseColor
	 */
	struct UWB_ProgressButton_C_SetBaseColor_Params
	{
	public:
		bool                                                       bUseBaseColor;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XPD2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        Grad0;                                                   // 0x0004(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Grad1;                                                   // 0x0014(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Grad2;                                                   // 0x0024(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Grad3;                                                   // 0x0034(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ProgressButton.WB_ProgressButton_C.SetupButtonSounds
	 */
	struct UWB_ProgressButton_C_SetupButtonSounds_Params
	{
	public:
		bool                                                       bUseButtonSounds;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QNP1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USoundBase*                                          Clicked;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          Hovered;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ProgressButton.WB_ProgressButton_C.MultiState_CheckUserFocus
	 */
	struct UWB_ProgressButton_C_MultiState_CheckUserFocus_Params
	{	};

	/**
	 * Function WB_ProgressButton.WB_ProgressButton_C.ExecuteUbergraph_WB_ProgressButton
	 */
	struct UWB_ProgressButton_C_ExecuteUbergraph_WB_ProgressButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ProgressButton.WB_ProgressButton_C.OnProgressChanged__DelegateSignature
	 */
	struct UWB_ProgressButton_C_OnProgressChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
