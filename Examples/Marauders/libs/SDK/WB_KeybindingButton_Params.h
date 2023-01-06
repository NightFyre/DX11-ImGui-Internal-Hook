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
	 * Function WB_KeybindingButton.WB_KeybindingButton_C.GetSelectedKey
	 */
	struct UWB_KeybindingButton_C_GetSelectedKey_Params
	{
	public:
		ESelectedKey                                               ESelectedKey;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O496[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FInputChord                                         SelectedKey;                                             // 0x0008(0x0020)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function WB_KeybindingButton.WB_KeybindingButton_C.GetHasFocus
	 */
	struct UWB_KeybindingButton_C_GetHasFocus_Params
	{
	public:
		class APlayerController*                                   InputPin;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_KeybindingButton.WB_KeybindingButton_C.SetKeyRebindingJustification
	 */
	struct UWB_KeybindingButton_C_SetKeyRebindingJustification_Params
	{	};

	/**
	 * Function WB_KeybindingButton.WB_KeybindingButton_C.SetIsSelectingText
	 */
	struct UWB_KeybindingButton_C_SetIsSelectingText_Params
	{
	public:
		class FText                                                InKeySelectionText;                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WB_KeybindingButton.WB_KeybindingButton_C.HandleIsEnabled
	 */
	struct UWB_KeybindingButton_C_HandleIsEnabled_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_KeybindingButton.WB_KeybindingButton_C.FindKey
	 */
	struct UWB_KeybindingButton_C_FindKey_Params
	{
	public:
		ESelectedKey                                               ESelectedKey;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NDBI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWB_InputKeySelector_C*                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_KeybindingButton.WB_KeybindingButton_C.SetNoKeySpecifiedText
	 */
	struct UWB_KeybindingButton_C_SetNoKeySpecifiedText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WB_KeybindingButton.WB_KeybindingButton_C.SetKeybindingKeysButtonInfo_Hovered
	 */
	struct UWB_KeybindingButton_C_SetKeybindingKeysButtonInfo_Hovered_Params
	{	};

	/**
	 * Function WB_KeybindingButton.WB_KeybindingButton_C.SetKeybindingKeysButtonInfo_Normal
	 */
	struct UWB_KeybindingButton_C_SetKeybindingKeysButtonInfo_Normal_Params
	{	};

	/**
	 * Function WB_KeybindingButton.WB_KeybindingButton_C.SetKeybindingText
	 */
	struct UWB_KeybindingButton_C_SetKeybindingText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WB_KeybindingButton.WB_KeybindingButton_C.SetKeyRebinding_OptionFont_Hovered
	 */
	struct UWB_KeybindingButton_C_SetKeyRebinding_OptionFont_Hovered_Params
	{	};

	/**
	 * Function WB_KeybindingButton.WB_KeybindingButton_C.SetKeyRebinding_OptionFont_Normal
	 */
	struct UWB_KeybindingButton_C_SetKeyRebinding_OptionFont_Normal_Params
	{	};

	/**
	 * Function WB_KeybindingButton.WB_KeybindingButton_C.UnhoverAllOptionsButton
	 */
	struct UWB_KeybindingButton_C_UnhoverAllOptionsButton_Params
	{	};

	/**
	 * Function WB_KeybindingButton.WB_KeybindingButton_C.SetupSizes
	 */
	struct UWB_KeybindingButton_C_SetupSizes_Params
	{
	public:
		struct FVector2D                                           Size;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_KeybindingButton.WB_KeybindingButton_C.SetUser_Focus
	 */
	struct UWB_KeybindingButton_C_SetUser_Focus_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_KeybindingButton.WB_KeybindingButton_C.SetSelectedKey
	 */
	struct UWB_KeybindingButton_C_SetSelectedKey_Params
	{
	public:
		ESelectedKey                                               Key;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7OIJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FInputChord                                         SelectedKey;                                             // 0x0008(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WB_KeybindingButton.WB_KeybindingButton_C.SetKeyEnabled
	 */
	struct UWB_KeybindingButton_C_SetKeyEnabled_Params
	{
	public:
		ESelectedKey                                               Key;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bEnabled;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_KeybindingButton.WB_KeybindingButton_C.SetKeySelectionText
	 */
	struct UWB_KeybindingButton_C_SetKeySelectionText_Params
	{
	public:
		ESelectedKey                                               Key;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_76QN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                KeySelectionText;                                        // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WB_KeybindingButton.WB_KeybindingButton_C.PreConstruct
	 */
	struct UWB_KeybindingButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_KeybindingButton.WB_KeybindingButton_C.Construct
	 */
	struct UWB_KeybindingButton_C_Construct_Params
	{	};

	/**
	 * Function WB_KeybindingButton.WB_KeybindingButton_C.BndEvt__KeybindingKey2_K2Node_ComponentBoundEvent_93_OnKeyEmptied__DelegateSignature
	 */
	struct UWB_KeybindingButton_C_BndEvt__KeybindingKey2_K2Node_ComponentBoundEvent_93_OnKeyEmptied__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         LastSelectedKey;                                         // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WB_KeybindingButton.WB_KeybindingButton_C.BndEvt__KeybindingKey1_K2Node_ComponentBoundEvent_88_OnKeyEmptied__DelegateSignature
	 */
	struct UWB_KeybindingButton_C_BndEvt__KeybindingKey1_K2Node_ComponentBoundEvent_88_OnKeyEmptied__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         LastSelectedKey;                                         // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WB_KeybindingButton.WB_KeybindingButton_C.BndEvt__KeybindingKey2_K2Node_ComponentBoundEvent_42_OnKeySelected__DelegateSignature
	 */
	struct UWB_KeybindingButton_C_BndEvt__KeybindingKey2_K2Node_ComponentBoundEvent_42_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WB_KeybindingButton.WB_KeybindingButton_C.BndEvt__KeybindingKey1_K2Node_ComponentBoundEvent_23_OnKeySelected__DelegateSignature
	 */
	struct UWB_KeybindingButton_C_BndEvt__KeybindingKey1_K2Node_ComponentBoundEvent_23_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WB_KeybindingButton.WB_KeybindingButton_C.UnhoverKeyRebindingButton
	 */
	struct UWB_KeybindingButton_C_UnhoverKeyRebindingButton_Params
	{	};

	/**
	 * Function WB_KeybindingButton.WB_KeybindingButton_C.BndEvt__Button_KeyRebinding_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWB_KeybindingButton_C_BndEvt__Button_KeyRebinding_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WB_KeybindingButton.WB_KeybindingButton_C.BndEvt__Button_KeyRebinding_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWB_KeybindingButton_C_BndEvt__Button_KeyRebinding_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WB_KeybindingButton.WB_KeybindingButton_C.Construct_KeyRebindingOption
	 */
	struct UWB_KeybindingButton_C_Construct_KeyRebindingOption_Params
	{	};

	/**
	 * Function WB_KeybindingButton.WB_KeybindingButton_C.PreConstruct_KeyRebindingOption
	 */
	struct UWB_KeybindingButton_C_PreConstruct_KeyRebindingOption_Params
	{	};

	/**
	 * Function WB_KeybindingButton.WB_KeybindingButton_C.BndEvt__KeybindingKey1_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature
	 */
	struct UWB_KeybindingButton_C_BndEvt__KeybindingKey1_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function WB_KeybindingButton.WB_KeybindingButton_C.BndEvt__KeybindingKey2_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature
	 */
	struct UWB_KeybindingButton_C_BndEvt__KeybindingKey2_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function WB_KeybindingButton.WB_KeybindingButton_C.ResetHovered
	 */
	struct UWB_KeybindingButton_C_ResetHovered_Params
	{	};

	/**
	 * Function WB_KeybindingButton.WB_KeybindingButton_C.SetBaseColor
	 */
	struct UWB_KeybindingButton_C_SetBaseColor_Params
	{
	public:
		bool                                                       bUseBaseColor;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TL79[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        Grad0;                                                   // 0x0004(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Grad1;                                                   // 0x0014(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Grad2;                                                   // 0x0024(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Grad3;                                                   // 0x0034(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_KeybindingButton.WB_KeybindingButton_C.SetupButtonSounds
	 */
	struct UWB_KeybindingButton_C_SetupButtonSounds_Params
	{
	public:
		bool                                                       bUseButtonSounds;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5W5J[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USoundBase*                                          Clicked;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          Hovered;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_KeybindingButton.WB_KeybindingButton_C.ExecuteUbergraph_WB_KeybindingButton
	 */
	struct UWB_KeybindingButton_C_ExecuteUbergraph_WB_KeybindingButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_KeybindingButton.WB_KeybindingButton_C.On Key Emptied Right__DelegateSignature
	 */
	struct UWB_KeybindingButton_C_On_Key_Emptied_Right__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         Last_Selected_Key;                                       // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WB_KeybindingButton.WB_KeybindingButton_C.On Key Emptied Left__DelegateSignature
	 */
	struct UWB_KeybindingButton_C_On_Key_Emptied_Left__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         Last_Selected_Key;                                       // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WB_KeybindingButton.WB_KeybindingButton_C.On Selected Key Right__DelegateSignature
	 */
	struct UWB_KeybindingButton_C_On_Selected_Key_Right__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_KeybindingButton.WB_KeybindingButton_C.On Selected Key Left__DelegateSignature
	 */
	struct UWB_KeybindingButton_C_On_Selected_Key_Left__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AxisDirection;                                           // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
