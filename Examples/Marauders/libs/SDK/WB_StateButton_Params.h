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
	 * Function WB_StateButton.WB_StateButton_C.GetStateByName
	 */
	struct UWB_StateButton_C_GetStateByName_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_StateButton.WB_StateButton_C.GetStateByIndex
	 */
	struct UWB_StateButton_C_GetStateByIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_StateButton.WB_StateButton_C.GetHasFocus
	 */
	struct UWB_StateButton_C_GetHasFocus_Params
	{
	public:
		class APlayerController*                                   InputPin;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E3RU[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_StateButton.WB_StateButton_C.HandleIsEnabled
	 */
	struct UWB_StateButton_C_HandleIsEnabled_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_StateButton.WB_StateButton_C.SetMultiState_OptionFont_Normal
	 */
	struct UWB_StateButton_C_SetMultiState_OptionFont_Normal_Params
	{	};

	/**
	 * Function WB_StateButton.WB_StateButton_C.SetMultiState_OptionFont_Hovered
	 */
	struct UWB_StateButton_C_SetMultiState_OptionFont_Hovered_Params
	{	};

	/**
	 * Function WB_StateButton.WB_StateButton_C.SetStateButtonInfo
	 */
	struct UWB_StateButton_C_SetStateButtonInfo_Params
	{
	public:
		struct FLinearColor                                        ButtonIconColor_Normal;                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        ButtonIconColor_Hovered;                                 // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        ButtonIconColor_Clicked;                                 // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             ButtonIcon;                                              // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_StateButton.WB_StateButton_C.SetMultiState_FontInfo
	 */
	struct UWB_StateButton_C_SetMultiState_FontInfo_Params
	{
	public:
		class UFont*                                               MultiState_Font_Normal;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UFontFace*                                           MultiState_FontFace_Normal;                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MultiState_FontSize_Normal;                              // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        MultiState_FontColor_Normal;                             // 0x0014(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5EMN[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UFont*                                               MultiState_Font_Hovered;                                 // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UFontFace*                                           MultiState_FontFace_Hovered;                             // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MultiState_FontSize_Hovered;                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        MultiState_FontColor_Hovered;                            // 0x003C(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_StateButton.WB_StateButton_C.SetMultiStateJustification
	 */
	struct UWB_StateButton_C_SetMultiStateJustification_Params
	{	};

	/**
	 * Function WB_StateButton.WB_StateButton_C.SetMultiStateText
	 */
	struct UWB_StateButton_C_SetMultiStateText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WB_StateButton.WB_StateButton_C.UnhoverAllOptionsButton
	 */
	struct UWB_StateButton_C_UnhoverAllOptionsButton_Params
	{	};

	/**
	 * Function WB_StateButton.WB_StateButton_C.SetupSizes
	 */
	struct UWB_StateButton_C_SetupSizes_Params
	{
	public:
		struct FVector2D                                           Size;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_StateButton.WB_StateButton_C.SetStateByName
	 */
	struct UWB_StateButton_C_SetStateByName_Params
	{
	public:
		class FName                                                State;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_StateButton.WB_StateButton_C.SetStateByIndex
	 */
	struct UWB_StateButton_C_SetStateByIndex_Params
	{
	public:
		int32_t                                                    State;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_StateButton.WB_StateButton_C.SetUser_Focus
	 */
	struct UWB_StateButton_C_SetUser_Focus_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_StateButton.WB_StateButton_C.UpdateEnabled
	 */
	struct UWB_StateButton_C_UpdateEnabled_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_StateButton.WB_StateButton_C.PreConstruct
	 */
	struct UWB_StateButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_StateButton.WB_StateButton_C.Construct
	 */
	struct UWB_StateButton_C_Construct_Params
	{	};

	/**
	 * Function WB_StateButton.WB_StateButton_C.UnhoverStateButton
	 */
	struct UWB_StateButton_C_UnhoverStateButton_Params
	{	};

	/**
	 * Function WB_StateButton.WB_StateButton_C.Construct_State
	 */
	struct UWB_StateButton_C_Construct_State_Params
	{	};

	/**
	 * Function WB_StateButton.WB_StateButton_C.PreConstruct_State
	 */
	struct UWB_StateButton_C_PreConstruct_State_Params
	{	};

	/**
	 * Function WB_StateButton.WB_StateButton_C.BndEvt__Button_Multistate_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWB_StateButton_C_BndEvt__Button_Multistate_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WB_StateButton.WB_StateButton_C.BndEvt__Button_Multistate_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWB_StateButton_C_BndEvt__Button_Multistate_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WB_StateButton.WB_StateButton_C.BndEvt__WB_States_K2Node_ComponentBoundEvent_37_OnHovered__DelegateSignature
	 */
	struct UWB_StateButton_C_BndEvt__WB_States_K2Node_ComponentBoundEvent_37_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function WB_StateButton.WB_StateButton_C.BndEvt__WB_States_K2Node_ComponentBoundEvent_38_OnStateChanged__DelegateSignature
	 */
	struct UWB_StateButton_C_BndEvt__WB_States_K2Node_ComponentBoundEvent_38_OnStateChanged__DelegateSignature_Params
	{
	public:
		class FName                                                State_Name;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    State_Index;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_StateButton.WB_StateButton_C.Reconstruct
	 */
	struct UWB_StateButton_C_Reconstruct_Params
	{	};

	/**
	 * Function WB_StateButton.WB_StateButton_C.SetBaseColor
	 */
	struct UWB_StateButton_C_SetBaseColor_Params
	{
	public:
		bool                                                       bUseBaseColor;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M16B[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        Grad0;                                                   // 0x0004(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Grad1;                                                   // 0x0014(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Grad2;                                                   // 0x0024(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Grad3;                                                   // 0x0034(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_StateButton.WB_StateButton_C.SetupButtonSounds
	 */
	struct UWB_StateButton_C_SetupButtonSounds_Params
	{
	public:
		bool                                                       bUseButtonSounds;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IT8R[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USoundBase*                                          Clicked;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          Hovered;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_StateButton.WB_StateButton_C.MultiState_CheckUserFocus
	 */
	struct UWB_StateButton_C_MultiState_CheckUserFocus_Params
	{	};

	/**
	 * Function WB_StateButton.WB_StateButton_C.ExecuteUbergraph_WB_StateButton
	 */
	struct UWB_StateButton_C_ExecuteUbergraph_WB_StateButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_StateButton.WB_StateButton_C.OnStateChanged__DelegateSignature
	 */
	struct UWB_StateButton_C_OnStateChanged__DelegateSignature_Params
	{
	public:
		class FName                                                StateName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StateIndex;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
