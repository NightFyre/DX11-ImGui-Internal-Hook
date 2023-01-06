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
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Remap_GamepadKey_Mappings
	 */
	struct UWB_Options_KeyRebinding_C_Remap_GamepadKey_Mappings_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              KeybindingButton;                                        // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.FindAxisScale_Gamepad
	 */
	struct UWB_Options_KeyRebinding_C_FindAxisScale_Gamepad_Params
	{
	public:
		class FName                                                ItemToFind;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Scale;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.FindAxisScale_KeyboardMouse
	 */
	struct UWB_Options_KeyRebinding_C_FindAxisScale_KeyboardMouse_Params
	{
	public:
		class FName                                                ItemToFind;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Scale;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.IsAxisMapping
	 */
	struct UWB_Options_KeyRebinding_C_IsAxisMapping_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		bool                                                       IsAxisMapping;                                           // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.IsActionMapping
	 */
	struct UWB_Options_KeyRebinding_C_IsActionMapping_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		bool                                                       IsActionMapping;                                         // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.FindAxis_GamepadKey
	 */
	struct UWB_Options_KeyRebinding_C_FindAxis_GamepadKey_Params
	{
	public:
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6O82[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FKey                                                Key;                                                     // 0x0010(0x0018)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.FindAction_GamepadKey
	 */
	struct UWB_Options_KeyRebinding_C_FindAction_GamepadKey_Params
	{
	public:
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2X1Z[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FKey                                                Key;                                                     // 0x0010(0x0018)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.FindAxis_KeyboardKey
	 */
	struct UWB_Options_KeyRebinding_C_FindAxis_KeyboardKey_Params
	{
	public:
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z8ZQ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FKey                                                Key;                                                     // 0x0010(0x0018)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.FindAction_KeyboardKey
	 */
	struct UWB_Options_KeyRebinding_C_FindAction_KeyboardKey_Params
	{
	public:
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8OKK[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FKey                                                Key;                                                     // 0x0010(0x0018)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.RemoveMapping
	 */
	struct UWB_Options_KeyRebinding_C_RemoveMapping_Params
	{
	public:
		struct FInputChord                                         InputChord;                                              // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.HandleOnKeyReserved
	 */
	struct UWB_Options_KeyRebinding_C_HandleOnKeyReserved_Params
	{
	public:
		struct FInputChord                                         InputChord;                                              // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanRebind;                                               // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7QYZ[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Remap_KeyboardKey_Mappings
	 */
	struct UWB_Options_KeyRebinding_C_Remap_KeyboardKey_Mappings_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              KeybindingButton;                                        // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AxisDirection;                                           // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.IsAnyKeybindingButtonSelected
	 */
	struct UWB_Options_KeyRebinding_C_IsAnyKeybindingButtonSelected_Params
	{
	public:
		bool                                                       isSelected;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.SaveAxisMappings_Gamepad
	 */
	struct UWB_Options_KeyRebinding_C_SaveAxisMappings_Gamepad_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MYYN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.SaveAxisMappings_KeyboardMouse
	 */
	struct UWB_Options_KeyRebinding_C_SaveAxisMappings_KeyboardMouse_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YUUQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.SaveActionMappings_Gamepad
	 */
	struct UWB_Options_KeyRebinding_C_SaveActionMappings_Gamepad_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VRH7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.SaveActionMappings_KeyboardMouse
	 */
	struct UWB_Options_KeyRebinding_C_SaveActionMappings_KeyboardMouse_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DYQK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.GetAllAxisMappingButtons
	 */
	struct UWB_Options_KeyRebinding_C_GetAllAxisMappingButtons_Params
	{
	public:
		TArray<class UWB_KeybindingButton_C*>                      Array;                                                   // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.GetAllActionMappingButtons
	 */
	struct UWB_Options_KeyRebinding_C_GetAllActionMappingButtons_Params
	{
	public:
		TArray<class UWB_KeybindingButton_C*>                      Array;                                                   // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.ScrollToCurrentlyFocusedWidget
	 */
	struct UWB_Options_KeyRebinding_C_ScrollToCurrentlyFocusedWidget_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.GetIsGamepad
	 */
	struct UWB_Options_KeyRebinding_C_GetIsGamepad_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.NavToBackButton
	 */
	struct UWB_Options_KeyRebinding_C_NavToBackButton_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.NavToOptionsButtons
	 */
	struct UWB_Options_KeyRebinding_C_NavToOptionsButtons_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.NavToTextButtons
	 */
	struct UWB_Options_KeyRebinding_C_NavToTextButtons_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnPreviewKeyDown
	 */
	struct UWB_Options_KeyRebinding_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.ActivateWidget
	 */
	struct UWB_Options_KeyRebinding_C_ActivateWidget_Params
	{
	public:
		bool                                                       StopAnimPlaying;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnInputSwitched
	 */
	struct UWB_Options_KeyRebinding_C_OnInputSwitched_Params
	{
	public:
		EInputType                                                 InputType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.CheckFocus
	 */
	struct UWB_Options_KeyRebinding_C_CheckFocus_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.ClickBack
	 */
	struct UWB_Options_KeyRebinding_C_ClickBack_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.SetGamepadAppearance
	 */
	struct UWB_Options_KeyRebinding_C_SetGamepadAppearance_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_InputEvent01_K2Node_ComponentBoundEvent_0_On Selected Key Left__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_InputEvent01_K2Node_ComponentBoundEvent_0_On_Selected_Key_Left__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AxisDirection;                                           // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_InputEvent01_K2Node_ComponentBoundEvent_1_On Selected Key Right__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_InputEvent01_K2Node_ComponentBoundEvent_1_On_Selected_Key_Right__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.HandleRemoveWidget
	 */
	struct UWB_Options_KeyRebinding_C_HandleRemoveWidget_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.SetupKeybindings
	 */
	struct UWB_Options_KeyRebinding_C_SetupKeybindings_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Setup_ActionMappingKeys
	 */
	struct UWB_Options_KeyRebinding_C_Setup_ActionMappingKeys_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Setup_AxisMappingKeys
	 */
	struct UWB_Options_KeyRebinding_C_Setup_AxisMappingKeys_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.SaveDefaultValues
	 */
	struct UWB_Options_KeyRebinding_C_SaveDefaultValues_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.ResetDefaultValues
	 */
	struct UWB_Options_KeyRebinding_C_ResetDefaultValues_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Construct
	 */
	struct UWB_Options_KeyRebinding_C_Construct_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnConfirmReset
	 */
	struct UWB_Options_KeyRebinding_C_OnConfirmReset_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_AxisMapping01_K2Node_ComponentBoundEvent_2_On Selected Key Left__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_AxisMapping01_K2Node_ComponentBoundEvent_2_On_Selected_Key_Left__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AxisDirection;                                           // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_AxisMapping01_K2Node_ComponentBoundEvent_3_On Selected Key Right__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_AxisMapping01_K2Node_ComponentBoundEvent_3_On_Selected_Key_Right__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping01_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping01_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping01_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping01_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping02_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping02_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping02_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping02_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_ActionMapping02_K2Node_ComponentBoundEvent_0_On Selected Key Left__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_ActionMapping02_K2Node_ComponentBoundEvent_0_On_Selected_Key_Left__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AxisDirection;                                           // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_ActionMapping03_K2Node_ComponentBoundEvent_1_On Selected Key Left__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_ActionMapping03_K2Node_ComponentBoundEvent_1_On_Selected_Key_Left__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AxisDirection;                                           // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_ActionMapping04_K2Node_ComponentBoundEvent_2_On Selected Key Left__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_ActionMapping04_K2Node_ComponentBoundEvent_2_On_Selected_Key_Left__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AxisDirection;                                           // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_ActionMapping05_K2Node_ComponentBoundEvent_3_On Selected Key Left__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_ActionMapping05_K2Node_ComponentBoundEvent_3_On_Selected_Key_Left__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AxisDirection;                                           // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_ActionMapping06_K2Node_ComponentBoundEvent_4_On Selected Key Left__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_ActionMapping06_K2Node_ComponentBoundEvent_4_On_Selected_Key_Left__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AxisDirection;                                           // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_ActionMapping07_K2Node_ComponentBoundEvent_5_On Selected Key Left__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_ActionMapping07_K2Node_ComponentBoundEvent_5_On_Selected_Key_Left__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AxisDirection;                                           // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_ActionMapping08_K2Node_ComponentBoundEvent_6_On Selected Key Left__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_ActionMapping08_K2Node_ComponentBoundEvent_6_On_Selected_Key_Left__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AxisDirection;                                           // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_ActionMapping09_K2Node_ComponentBoundEvent_7_On Selected Key Left__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_ActionMapping09_K2Node_ComponentBoundEvent_7_On_Selected_Key_Left__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AxisDirection;                                           // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_ActionMapping10_K2Node_ComponentBoundEvent_8_On Selected Key Left__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_ActionMapping10_K2Node_ComponentBoundEvent_8_On_Selected_Key_Left__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AxisDirection;                                           // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping03_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping03_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping03_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping03_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping04_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping04_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping04_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping04_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping05_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping05_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping05_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping05_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping06_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping06_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping06_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping06_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping07_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping07_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping07_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping07_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping08_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping08_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping08_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping08_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping09_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping09_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping09_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping09_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping10_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping10_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping10_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping10_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnAxisMapping01_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_OnAxisMapping01_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnAxisMapping01_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_OnAxisMapping01_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_AxisMapping02_K2Node_ComponentBoundEvent_9_On Selected Key Left__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_AxisMapping02_K2Node_ComponentBoundEvent_9_On_Selected_Key_Left__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AxisDirection;                                           // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnAxisMapping02_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_OnAxisMapping02_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnAxisMapping02_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_OnAxisMapping02_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_AxisMapping03_K2Node_ComponentBoundEvent_10_On Selected Key Left__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_AxisMapping03_K2Node_ComponentBoundEvent_10_On_Selected_Key_Left__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AxisDirection;                                           // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_AxisMapping04_K2Node_ComponentBoundEvent_11_On Selected Key Left__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_AxisMapping04_K2Node_ComponentBoundEvent_11_On_Selected_Key_Left__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AxisDirection;                                           // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_AxisMapping05_K2Node_ComponentBoundEvent_12_On Selected Key Left__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_AxisMapping05_K2Node_ComponentBoundEvent_12_On_Selected_Key_Left__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AxisDirection;                                           // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_AxisMapping06_K2Node_ComponentBoundEvent_13_On Selected Key Left__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_AxisMapping06_K2Node_ComponentBoundEvent_13_On_Selected_Key_Left__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AxisDirection;                                           // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_AxisMapping07_K2Node_ComponentBoundEvent_14_On Selected Key Left__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_AxisMapping07_K2Node_ComponentBoundEvent_14_On_Selected_Key_Left__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AxisDirection;                                           // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_AxisMapping08_K2Node_ComponentBoundEvent_15_On Selected Key Left__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_AxisMapping08_K2Node_ComponentBoundEvent_15_On_Selected_Key_Left__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AxisDirection;                                           // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_AxisMapping09_K2Node_ComponentBoundEvent_16_On Selected Key Left__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_AxisMapping09_K2Node_ComponentBoundEvent_16_On_Selected_Key_Left__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AxisDirection;                                           // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_AxisMapping10_K2Node_ComponentBoundEvent_17_On Selected Key Left__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_AxisMapping10_K2Node_ComponentBoundEvent_17_On_Selected_Key_Left__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AxisDirection;                                           // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnAxisMapping03_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_OnAxisMapping03_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnAxisMapping03_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_OnAxisMapping03_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnAxisMapping04_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_OnAxisMapping04_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnAxisMapping04_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_OnAxisMapping04_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnAxisMapping05_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_OnAxisMapping05_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnAxisMapping05_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_OnAxisMapping05_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnAxisMapping06_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_OnAxisMapping06_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnAxisMapping06_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_OnAxisMapping06_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnAxisMapping07_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_OnAxisMapping07_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnAxisMapping07_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_OnAxisMapping07_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnAxisMapping08_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_OnAxisMapping08_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnAxisMapping08_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_OnAxisMapping08_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnAxisMapping09_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_OnAxisMapping09_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnAxisMapping09_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_OnAxisMapping09_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnAxisMapping10_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_OnAxisMapping10_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnAxisMapping10_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_OnAxisMapping10_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnActionMapping01_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_Gamepad_OnActionMapping01_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnActionMapping01_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_Gamepad_OnActionMapping01_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_ActionMapping02_K2Node_ComponentBoundEvent_0_On Selected Key Right__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_ActionMapping02_K2Node_ComponentBoundEvent_0_On_Selected_Key_Right__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnActionMapping02_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_Gamepad_OnActionMapping02_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnActionMapping02_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_Gamepad_OnActionMapping02_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_ActionMapping03_K2Node_ComponentBoundEvent_1_On Selected Key Right__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_ActionMapping03_K2Node_ComponentBoundEvent_1_On_Selected_Key_Right__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_ActionMapping04_K2Node_ComponentBoundEvent_2_On Selected Key Right__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_ActionMapping04_K2Node_ComponentBoundEvent_2_On_Selected_Key_Right__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_ActionMapping05_K2Node_ComponentBoundEvent_3_On Selected Key Right__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_ActionMapping05_K2Node_ComponentBoundEvent_3_On_Selected_Key_Right__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_ActionMapping06_K2Node_ComponentBoundEvent_4_On Selected Key Right__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_ActionMapping06_K2Node_ComponentBoundEvent_4_On_Selected_Key_Right__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_ActionMapping07_K2Node_ComponentBoundEvent_5_On Selected Key Right__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_ActionMapping07_K2Node_ComponentBoundEvent_5_On_Selected_Key_Right__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_ActionMapping08_K2Node_ComponentBoundEvent_6_On Selected Key Right__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_ActionMapping08_K2Node_ComponentBoundEvent_6_On_Selected_Key_Right__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_ActionMapping09_K2Node_ComponentBoundEvent_7_On Selected Key Right__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_ActionMapping09_K2Node_ComponentBoundEvent_7_On_Selected_Key_Right__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_ActionMapping10_K2Node_ComponentBoundEvent_8_On Selected Key Right__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_ActionMapping10_K2Node_ComponentBoundEvent_8_On_Selected_Key_Right__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnActionMapping03_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_Gamepad_OnActionMapping03_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnActionMapping03_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_Gamepad_OnActionMapping03_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnActionMapping04_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_Gamepad_OnActionMapping04_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnActionMapping04_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_Gamepad_OnActionMapping04_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnActionMapping05_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_Gamepad_OnActionMapping05_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnActionMapping05_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_Gamepad_OnActionMapping05_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnActionMapping06_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_Gamepad_OnActionMapping06_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnActionMapping06_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_Gamepad_OnActionMapping06_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnActionMapping07_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_Gamepad_OnActionMapping07_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnActionMapping07_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_Gamepad_OnActionMapping07_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnActionMapping08_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_Gamepad_OnActionMapping08_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnActionMapping08_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_Gamepad_OnActionMapping08_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnActionMapping09_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_Gamepad_OnActionMapping09_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnActionMapping09_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_Gamepad_OnActionMapping09_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnActionMapping10_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_Gamepad_OnActionMapping10_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnActionMapping10_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_Gamepad_OnActionMapping10_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnAxisMapping01_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_Gamepad_OnAxisMapping01_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnAxisMapping01_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_Gamepad_OnAxisMapping01_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_AxisMapping02_K2Node_ComponentBoundEvent_2632_On Selected Key Right__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_AxisMapping02_K2Node_ComponentBoundEvent_2632_On_Selected_Key_Right__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnAxisMapping02_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_Gamepad_OnAxisMapping02_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnAxisMapping02_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_Gamepad_OnAxisMapping02_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_AxisMapping03_K2Node_ComponentBoundEvent_9_On Selected Key Right__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_AxisMapping03_K2Node_ComponentBoundEvent_9_On_Selected_Key_Right__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_AxisMapping04_K2Node_ComponentBoundEvent_10_On Selected Key Right__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_AxisMapping04_K2Node_ComponentBoundEvent_10_On_Selected_Key_Right__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_AxisMapping05_K2Node_ComponentBoundEvent_11_On Selected Key Right__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_AxisMapping05_K2Node_ComponentBoundEvent_11_On_Selected_Key_Right__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_AxisMapping06_K2Node_ComponentBoundEvent_12_On Selected Key Right__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_AxisMapping06_K2Node_ComponentBoundEvent_12_On_Selected_Key_Right__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_AxisMapping07_K2Node_ComponentBoundEvent_13_On Selected Key Right__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_AxisMapping07_K2Node_ComponentBoundEvent_13_On_Selected_Key_Right__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_AxisMapping08_K2Node_ComponentBoundEvent_14_On Selected Key Right__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_AxisMapping08_K2Node_ComponentBoundEvent_14_On_Selected_Key_Right__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_AxisMapping09_K2Node_ComponentBoundEvent_15_On Selected Key Right__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_AxisMapping09_K2Node_ComponentBoundEvent_15_On_Selected_Key_Right__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_AxisMapping10_K2Node_ComponentBoundEvent_16_On Selected Key Right__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_AxisMapping10_K2Node_ComponentBoundEvent_16_On_Selected_Key_Right__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnAxisMapping03_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_Gamepad_OnAxisMapping03_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnAxisMapping03_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_Gamepad_OnAxisMapping03_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnAxisMapping04_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_Gamepad_OnAxisMapping04_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnAxisMapping04_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_Gamepad_OnAxisMapping04_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnAxisMapping05_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_Gamepad_OnAxisMapping05_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnAxisMapping05_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_Gamepad_OnAxisMapping05_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnAxisMapping06_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_Gamepad_OnAxisMapping06_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnAxisMapping06_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_Gamepad_OnAxisMapping06_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnAxisMapping07_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_Gamepad_OnAxisMapping07_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnAxisMapping07_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_Gamepad_OnAxisMapping07_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnAxisMapping08_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_Gamepad_OnAxisMapping08_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnAxisMapping08_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_Gamepad_OnAxisMapping08_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnAxisMapping09_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_Gamepad_OnAxisMapping09_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnAxisMapping09_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_Gamepad_OnAxisMapping09_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnAxisMapping10_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_Gamepad_OnAxisMapping10_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.Gamepad_OnAxisMapping10_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_Gamepad_OnAxisMapping10_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnCancelReset
	 */
	struct UWB_Options_KeyRebinding_C_OnCancelReset_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__MM_GenericSmallBtn01_GoBack_Crew_PasswordScreen_K2Node_ComponentBoundEvent_19_GenericSmallBtnPressed__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__MM_GenericSmallBtn01_GoBack_Crew_PasswordScreen_K2Node_ComponentBoundEvent_19_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_ActionMapping11_K2Node_ComponentBoundEvent_20_On Selected Key Left__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_ActionMapping11_K2Node_ComponentBoundEvent_20_On_Selected_Key_Left__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AxisDirection;                                           // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping11_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping11_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping11_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping11_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_ActionMapping12_K2Node_ComponentBoundEvent_21_On Selected Key Left__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_ActionMapping12_K2Node_ComponentBoundEvent_21_On_Selected_Key_Left__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AxisDirection;                                           // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping12_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping12_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping12_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping12_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__MM_GenericBtn_Audio_ResetToDefault_K2Node_ComponentBoundEvent_22_GenericSmallBtnPressed__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__MM_GenericBtn_Audio_ResetToDefault_K2Node_ComponentBoundEvent_22_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_ActionMapping13_Ship_DropPodBoost_K2Node_ComponentBoundEvent_23_On Selected Key Left__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_ActionMapping13_Ship_DropPodBoost_K2Node_ComponentBoundEvent_23_On_Selected_Key_Left__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AxisDirection;                                           // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_ActionMapping07_Melee_K2Node_ComponentBoundEvent_24_On Selected Key Left__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_ActionMapping07_Melee_K2Node_ComponentBoundEvent_24_On_Selected_Key_Left__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AxisDirection;                                           // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_ActionMapping07_PrimWpn_K2Node_ComponentBoundEvent_25_On Selected Key Left__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_ActionMapping07_PrimWpn_K2Node_ComponentBoundEvent_25_On_Selected_Key_Left__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AxisDirection;                                           // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_ActionMapping07_SecWpn_K2Node_ComponentBoundEvent_26_On Selected Key Left__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_ActionMapping07_SecWpn_K2Node_ComponentBoundEvent_26_On_Selected_Key_Left__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AxisDirection;                                           // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__KeyButton_ActionMapping07_SideArm_K2Node_ComponentBoundEvent_27_On Selected Key Left__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__KeyButton_ActionMapping07_SideArm_K2Node_ComponentBoundEvent_27_On_Selected_Key_Left__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AxisDirection;                                           // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping13_ShipDropBoost_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping13_ShipDropBoost_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping13_ShipDropBoost_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping13_ShipDropBoost_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping7_Melee_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping7_Melee_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping7_PrimWpn_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping7_PrimWpn_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping7_SecWpn_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping7_SecWpn_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping07_SideArm_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping07_SideArm_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping7_Melee_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping7_Melee_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping7_PrimWpn_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping7_PrimWpn_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping7_SecWpn_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping7_SecWpn_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping7_SideArm_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping7_SideArm_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__WB_Options_KeyRebinding_KeyButton_ActionMapping12_1_K2Node_ComponentBoundEvent_0_On Selected Key Left__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__WB_Options_KeyRebinding_KeyButton_ActionMapping12_1_K2Node_ComponentBoundEvent_0_On_Selected_Key_Left__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AxisDirection;                                           // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__WB_Options_KeyRebinding_KeyButton_ActionMapping07_SideArm_1_K2Node_ComponentBoundEvent_1_On Selected Key Left__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__WB_Options_KeyRebinding_KeyButton_ActionMapping07_SideArm_1_K2Node_ComponentBoundEvent_1_On_Selected_Key_Left__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AxisDirection;                                           // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping07_FireMode_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping07_FireMode_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping07_FireMode_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping07_FireMode_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__WB_Options_KeyRebinding_KeyButton_ActionMapping_VoiceLine02_K2Node_ComponentBoundEvent_3_On Selected Key Left__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__WB_Options_KeyRebinding_KeyButton_ActionMapping_VoiceLine02_K2Node_ComponentBoundEvent_3_On_Selected_Key_Left__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AxisDirection;                                           // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__WB_Options_KeyRebinding_KeyButton_ActionMapping_VoiceLine03_K2Node_ComponentBoundEvent_28_On Selected Key Left__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__WB_Options_KeyRebinding_KeyButton_ActionMapping_VoiceLine03_K2Node_ComponentBoundEvent_28_On_Selected_Key_Left__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AxisDirection;                                           // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__WB_Options_KeyRebinding_KeyButton_ActionMapping_VoiceLine04_K2Node_ComponentBoundEvent_29_On Selected Key Left__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__WB_Options_KeyRebinding_KeyButton_ActionMapping_VoiceLine04_K2Node_ComponentBoundEvent_29_On_Selected_Key_Left__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AxisDirection;                                           // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__WB_Options_KeyRebinding_KeyButton_ActionMapping_VoiceLine05_K2Node_ComponentBoundEvent_30_On Selected Key Left__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__WB_Options_KeyRebinding_KeyButton_ActionMapping_VoiceLine05_K2Node_ComponentBoundEvent_30_On_Selected_Key_Left__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AxisDirection;                                           // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__WB_Options_KeyRebinding_KeyButton_ActionMapping_VoiceLine06_K2Node_ComponentBoundEvent_31_On Selected Key Left__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__WB_Options_KeyRebinding_KeyButton_ActionMapping_VoiceLine06_K2Node_ComponentBoundEvent_31_On_Selected_Key_Left__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AxisDirection;                                           // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__WB_Options_KeyRebinding_KeyButton_ActionMapping_VoiceLine07_K2Node_ComponentBoundEvent_32_On Selected Key Left__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__WB_Options_KeyRebinding_KeyButton_ActionMapping_VoiceLine07_K2Node_ComponentBoundEvent_32_On_Selected_Key_Left__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AxisDirection;                                           // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__WB_Options_KeyRebinding_KeyButton_ActionMapping_VoiceLine08_K2Node_ComponentBoundEvent_33_On Selected Key Left__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__WB_Options_KeyRebinding_KeyButton_ActionMapping_VoiceLine08_K2Node_ComponentBoundEvent_33_On_Selected_Key_Left__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AxisDirection;                                           // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping_VoiceLine01_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping_VoiceLine01_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping_VoiceLine01_RebindCanceled
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping_VoiceLine01_RebindCanceled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping_VoiceLine02_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping_VoiceLine02_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping_VoiceLine02_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping_VoiceLine02_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping_VoiceLine03_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping_VoiceLine03_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping_VoiceLine03_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping_VoiceLine03_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping_VoiceLine04_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping_VoiceLine04_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping_VoiceLine04_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping_VoiceLine04_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping_VoiceLine05_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping_VoiceLine05_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping_VoiceLine05_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping_VoiceLine05_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping_VoiceLine06_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping_VoiceLine06_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping_VoiceLine06_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping_VoiceLine06_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping_VoiceLine07_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping_VoiceLine07_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping_VoiceLine07_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping_VoiceLine07_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping_VoiceLine08_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping_VoiceLine08_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping_VoiceLine08_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping_VoiceLine08_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.BndEvt__WB_Options_KeyRebinding_KeyButton_ActionMapping07_Rotate_K2Node_ComponentBoundEvent_10_On Selected Key Left__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_BndEvt__WB_Options_KeyRebinding_KeyButton_ActionMapping07_Rotate_K2Node_ComponentBoundEvent_10_On_Selected_Key_Left__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWB_KeybindingButton_C*                              Button;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AxisDirection;                                           // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping_RotateItem_RebindConfirmed
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping_RotateItem_RebindConfirmed_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnActionMapping_RotateItem_RebindCancelled
	 */
	struct UWB_Options_KeyRebinding_C_OnActionMapping_RotateItem_RebindCancelled_Params
	{	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.ExecuteUbergraph_WB_Options_KeyRebinding
	 */
	struct UWB_Options_KeyRebinding_C_ExecuteUbergraph_WB_Options_KeyRebinding_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_KeyRebinding.WB_Options_KeyRebinding_C.OnClicked_Back__DelegateSignature
	 */
	struct UWB_Options_KeyRebinding_C_OnClicked_Back__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
