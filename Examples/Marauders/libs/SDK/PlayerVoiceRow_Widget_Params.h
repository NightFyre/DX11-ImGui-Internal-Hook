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
	 * Function PlayerVoiceRow_Widget.PlayerVoiceRow_Widget_C.Set_isSelectedLook
	 */
	struct UPlayerVoiceRow_Widget_C_Set_isSelectedLook_Params
	{
	public:
		bool                                                       isSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerVoiceRow_Widget.PlayerVoiceRow_Widget_C.ISLockedLook
	 */
	struct UPlayerVoiceRow_Widget_C_ISLockedLook_Params
	{
	public:
		bool                                                       isUnlocked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	};

	/**
	 * Function PlayerVoiceRow_Widget.PlayerVoiceRow_Widget_C.OnLoaded_6C6C03D9443944A002A16088673A5CDC
	 */
	struct UPlayerVoiceRow_Widget_C_OnLoaded_6C6C03D9443944A002A16088673A5CDC_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerVoiceRow_Widget.PlayerVoiceRow_Widget_C.OnLoaded_F71ADA55421CD5B29983DA95F68769DF
	 */
	struct UPlayerVoiceRow_Widget_C_OnLoaded_F71ADA55421CD5B29983DA95F68769DF_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerVoiceRow_Widget.PlayerVoiceRow_Widget_C.Construct
	 */
	struct UPlayerVoiceRow_Widget_C_Construct_Params
	{	};

	/**
	 * Function PlayerVoiceRow_Widget.PlayerVoiceRow_Widget_C.BndEvt__PlayerVoiceRow_Widget_ActiveButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct UPlayerVoiceRow_Widget_C_BndEvt__PlayerVoiceRow_Widget_ActiveButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function PlayerVoiceRow_Widget.PlayerVoiceRow_Widget_C.BndEvt__PlayerVoiceRow_Widget_Btn_Pressed_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 */
	struct UPlayerVoiceRow_Widget_C_BndEvt__PlayerVoiceRow_Widget_Btn_Pressed_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function PlayerVoiceRow_Widget.PlayerVoiceRow_Widget_C.ExecuteUbergraph_PlayerVoiceRow_Widget
	 */
	struct UPlayerVoiceRow_Widget_C_ExecuteUbergraph_PlayerVoiceRow_Widget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NLY6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerVoiceRow_Widget.PlayerVoiceRow_Widget_C.ED_VoiceBtnPressed__DelegateSignature
	 */
	struct UPlayerVoiceRow_Widget_C_ED_VoiceBtnPressed__DelegateSignature_Params
	{
	public:
		class FName                                                Voice_DTnamePressed;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
