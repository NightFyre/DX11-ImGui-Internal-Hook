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
	 * Function WB_InputKeySelector.WB_InputKeySelector_C.OnPreviewKeyDown
	 */
	struct UWB_InputKeySelector_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WB_InputKeySelector.WB_InputKeySelector_C.SetButtonSounds
	 */
	struct UWB_InputKeySelector_C_SetButtonSounds_Params
	{
	public:
		class USoundBase*                                          HoveredSound;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          ClickedSound;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_InputKeySelector.WB_InputKeySelector_C.UnhoverAllKeyButtons
	 */
	struct UWB_InputKeySelector_C_UnhoverAllKeyButtons_Params
	{	};

	/**
	 * Function WB_InputKeySelector.WB_InputKeySelector_C.FindKeyboardKey
	 */
	struct UWB_InputKeySelector_C_FindKeyboardKey_Params
	{
	public:
		struct FInputChord                                         InputChord;                                              // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		class FText                                                ReturnValue;                                             // 0x0020(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WB_InputKeySelector.WB_InputKeySelector_C.TranslateCombKey
	 */
	struct UWB_InputKeySelector_C_TranslateCombKey_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		bool                                                       IsCombKey;                                               // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RRJN[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              A;                                                       // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                ReturnValue;                                             // 0x0030(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WB_InputKeySelector.WB_InputKeySelector_C.TranslateGamepadKeys
	 */
	struct UWB_InputKeySelector_C_TranslateGamepadKeys_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class FText                                                Key_Text;                                                // 0x0018(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function WB_InputKeySelector.WB_InputKeySelector_C.GetIsGamepadKey
	 */
	struct UWB_InputKeySelector_C_GetIsGamepadKey_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		bool                                                       bIsGamepadKey;                                           // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_InputKeySelector.WB_InputKeySelector_C.GetIsKeyboardKey
	 */
	struct UWB_InputKeySelector_C_GetIsKeyboardKey_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		bool                                                       bIsKeyboardKey;                                          // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_InputKeySelector.WB_InputKeySelector_C.SetCurrentMappingByIndex
	 */
	struct UWB_InputKeySelector_C_SetCurrentMappingByIndex_Params
	{
	public:
		int32_t                                                    MappingIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_InputKeySelector.WB_InputKeySelector_C.GetIsAxisMapping
	 */
	struct UWB_InputKeySelector_C_GetIsAxisMapping_Params
	{
	public:
		class FName                                                ItemToFind;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsAxisMapping;                                          // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R6AI[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_InputKeySelector.WB_InputKeySelector_C.GetIsActionMapping
	 */
	struct UWB_InputKeySelector_C_GetIsActionMapping_Params
	{
	public:
		class FName                                                ItemToFind;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsActionMapping;                                        // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KHCU[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_InputKeySelector.WB_InputKeySelector_C.SetKeymappingName
	 */
	struct UWB_InputKeySelector_C_SetKeymappingName_Params
	{
	public:
		class FText                                                KeymappingText;                                          // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WB_InputKeySelector.WB_InputKeySelector_C.SetInfo_Normal
	 */
	struct UWB_InputKeySelector_C_SetInfo_Normal_Params
	{	};

	/**
	 * Function WB_InputKeySelector.WB_InputKeySelector_C.SetInfo_Hovered
	 */
	struct UWB_InputKeySelector_C_SetInfo_Hovered_Params
	{	};

	/**
	 * Function WB_InputKeySelector.WB_InputKeySelector_C.SetButtonInfo
	 */
	struct UWB_InputKeySelector_C_SetButtonInfo_Params
	{
	public:
		class UFont*                                               Font;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UFontFace*                                           FontFace;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    FontSize;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        TextColor;                                               // 0x0014(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        FrameColor;                                              // 0x0024(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        FillColor;                                               // 0x0034(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AKAO[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_InputKeySelector.WB_InputKeySelector_C.PreConstruct
	 */
	struct UWB_InputKeySelector_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_InputKeySelector.WB_InputKeySelector_C.BndEvt__Input_KeySelector_K2Node_ComponentBoundEvent_289_OnKeySelected__DelegateSignature
	 */
	struct UWB_InputKeySelector_C_BndEvt__Input_KeySelector_K2Node_ComponentBoundEvent_289_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WB_InputKeySelector.WB_InputKeySelector_C.BndEvt__Input_KeySelector_K2Node_ComponentBoundEvent_290_OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UWB_InputKeySelector_C_BndEvt__Input_KeySelector_K2Node_ComponentBoundEvent_290_OnIsSelectingKeyChanged__DelegateSignature_Params
	{	};

	/**
	 * Function WB_InputKeySelector.WB_InputKeySelector_C.InitConstruct
	 */
	struct UWB_InputKeySelector_C_InitConstruct_Params
	{	};

	/**
	 * Function WB_InputKeySelector.WB_InputKeySelector_C.CheckHovered
	 */
	struct UWB_InputKeySelector_C_CheckHovered_Params
	{	};

	/**
	 * Function WB_InputKeySelector.WB_InputKeySelector_C.SetNoKeySpecifiedText
	 */
	struct UWB_InputKeySelector_C_SetNoKeySpecifiedText_Params
	{
	public:
		class FText                                                InNoKeySpecifiedText;                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WB_InputKeySelector.WB_InputKeySelector_C.SetSelectedKey
	 */
	struct UWB_InputKeySelector_C_SetSelectedKey_Params
	{
	public:
		struct FInputChord                                         InSelectedKey;                                           // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function WB_InputKeySelector.WB_InputKeySelector_C.SetKeyRebindingText
	 */
	struct UWB_InputKeySelector_C_SetKeyRebindingText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WB_InputKeySelector.WB_InputKeySelector_C.SetKeySelectionText
	 */
	struct UWB_InputKeySelector_C_SetKeySelectionText_Params
	{
	public:
		class FText                                                InKeySelectionText;                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WB_InputKeySelector.WB_InputKeySelector_C.SetEnabled
	 */
	struct UWB_InputKeySelector_C_SetEnabled_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_InputKeySelector.WB_InputKeySelector_C.SetAllowGamepadKeys
	 */
	struct UWB_InputKeySelector_C_SetAllowGamepadKeys_Params
	{
	public:
		bool                                                       AllowGamepadKeys;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_InputKeySelector.WB_InputKeySelector_C.SetAllowModifierKeys
	 */
	struct UWB_InputKeySelector_C_SetAllowModifierKeys_Params
	{
	public:
		bool                                                       bAllowModifierKeys;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_InputKeySelector.WB_InputKeySelector_C.SetEscapeKeys
	 */
	struct UWB_InputKeySelector_C_SetEscapeKeys_Params
	{
	public:
		TArray<struct FKey>                                        InKeys;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_InputKeySelector.WB_InputKeySelector_C.UpdateKeyInfo
	 */
	struct UWB_InputKeySelector_C_UpdateKeyInfo_Params
	{	};

	/**
	 * Function WB_InputKeySelector.WB_InputKeySelector_C.SetResponsiveHovering
	 */
	struct UWB_InputKeySelector_C_SetResponsiveHovering_Params
	{
	public:
		bool                                                       bResponsiveHovering;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_InputKeySelector.WB_InputKeySelector_C.SetLocalSize
	 */
	struct UWB_InputKeySelector_C_SetLocalSize_Params
	{
	public:
		struct FVector2D                                           LocalSize;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_InputKeySelector.WB_InputKeySelector_C.ExecuteUbergraph_WB_InputKeySelector
	 */
	struct UWB_InputKeySelector_C_ExecuteUbergraph_WB_InputKeySelector_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_InputKeySelector.WB_InputKeySelector_C.OnHovered__DelegateSignature
	 */
	struct UWB_InputKeySelector_C_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function WB_InputKeySelector.WB_InputKeySelector_C.OnKeyEmptied__DelegateSignature
	 */
	struct UWB_InputKeySelector_C_OnKeyEmptied__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         LastSelectedKey;                                         // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WB_InputKeySelector.WB_InputKeySelector_C.OnKeySelected__DelegateSignature
	 */
	struct UWB_InputKeySelector_C_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
