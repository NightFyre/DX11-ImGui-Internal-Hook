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
	 * Function WB_Options_Audio.WB_Options_Audio_C.GetIsGamepad
	 */
	struct UWB_Options_Audio_C_GetIsGamepad_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_Options_Audio.WB_Options_Audio_C.NavToBackButton
	 */
	struct UWB_Options_Audio_C_NavToBackButton_Params
	{	};

	/**
	 * Function WB_Options_Audio.WB_Options_Audio_C.NavToOptionsButtons
	 */
	struct UWB_Options_Audio_C_NavToOptionsButtons_Params
	{	};

	/**
	 * Function WB_Options_Audio.WB_Options_Audio_C.NavToTextButtons
	 */
	struct UWB_Options_Audio_C_NavToTextButtons_Params
	{	};

	/**
	 * Function WB_Options_Audio.WB_Options_Audio_C.OnPreviewKeyDown
	 */
	struct UWB_Options_Audio_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WB_Options_Audio.WB_Options_Audio_C.OnInputSwitched
	 */
	struct UWB_Options_Audio_C_OnInputSwitched_Params
	{
	public:
		EInputType                                                 InputType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Audio.WB_Options_Audio_C.ActivateWidget
	 */
	struct UWB_Options_Audio_C_ActivateWidget_Params
	{	};

	/**
	 * Function WB_Options_Audio.WB_Options_Audio_C.SetGamepadAppearance
	 */
	struct UWB_Options_Audio_C_SetGamepadAppearance_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_Options_Audio.WB_Options_Audio_C.HandleRemoveWidget
	 */
	struct UWB_Options_Audio_C_HandleRemoveWidget_Params
	{	};

	/**
	 * Function WB_Options_Audio.WB_Options_Audio_C.OnConfirmReset
	 */
	struct UWB_Options_Audio_C_OnConfirmReset_Params
	{	};

	/**
	 * Function WB_Options_Audio.WB_Options_Audio_C.BndEvt__Option_MasterVolume_K2Node_ComponentBoundEvent_0_OnProgressChanged__DelegateSignature
	 */
	struct UWB_Options_Audio_C_BndEvt__Option_MasterVolume_K2Node_ComponentBoundEvent_0_OnProgressChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Audio.WB_Options_Audio_C.BndEvt__Option_MusicVolume_K2Node_ComponentBoundEvent_1_OnProgressChanged__DelegateSignature
	 */
	struct UWB_Options_Audio_C_BndEvt__Option_MusicVolume_K2Node_ComponentBoundEvent_1_OnProgressChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Audio.WB_Options_Audio_C.BndEvt__Option_DialogueVolume_K2Node_ComponentBoundEvent_2_OnProgressChanged__DelegateSignature
	 */
	struct UWB_Options_Audio_C_BndEvt__Option_DialogueVolume_K2Node_ComponentBoundEvent_2_OnProgressChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Audio.WB_Options_Audio_C.BndEvt__Option_EffectsVolume_K2Node_ComponentBoundEvent_3_OnProgressChanged__DelegateSignature
	 */
	struct UWB_Options_Audio_C_BndEvt__Option_EffectsVolume_K2Node_ComponentBoundEvent_3_OnProgressChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Audio.WB_Options_Audio_C.BndEvt__Option_AudioProfile_K2Node_ComponentBoundEvent_4_OnStateChanged__DelegateSignature
	 */
	struct UWB_Options_Audio_C_BndEvt__Option_AudioProfile_K2Node_ComponentBoundEvent_4_OnStateChanged__DelegateSignature_Params
	{
	public:
		class FName                                                StateName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StateIndex;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Audio.WB_Options_Audio_C.BndEvt__Option_Music_K2Node_ComponentBoundEvent_5_OnStateChanged__DelegateSignature
	 */
	struct UWB_Options_Audio_C_BndEvt__Option_Music_K2Node_ComponentBoundEvent_5_OnStateChanged__DelegateSignature_Params
	{
	public:
		class FName                                                StateName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StateIndex;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Audio.WB_Options_Audio_C.BndEvt__Option_Subtitles_K2Node_ComponentBoundEvent_6_OnStateChanged__DelegateSignature
	 */
	struct UWB_Options_Audio_C_BndEvt__Option_Subtitles_K2Node_ComponentBoundEvent_6_OnStateChanged__DelegateSignature_Params
	{
	public:
		class FName                                                StateName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StateIndex;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Audio.WB_Options_Audio_C.SetupButtons
	 */
	struct UWB_Options_Audio_C_SetupButtons_Params
	{	};

	/**
	 * Function WB_Options_Audio.WB_Options_Audio_C.CheckFocus
	 */
	struct UWB_Options_Audio_C_CheckFocus_Params
	{	};

	/**
	 * Function WB_Options_Audio.WB_Options_Audio_C.OnCancelRequest
	 */
	struct UWB_Options_Audio_C_OnCancelRequest_Params
	{	};

	/**
	 * Function WB_Options_Audio.WB_Options_Audio_C.BndEvt__MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_7_GenericSmallBtnPressed__DelegateSignature
	 */
	struct UWB_Options_Audio_C_BndEvt__MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_7_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function WB_Options_Audio.WB_Options_Audio_C.BndEvt__WB_Options_Audio_Option_OthersMicVolume_K2Node_ComponentBoundEvent_0_OnProgressChanged__DelegateSignature
	 */
	struct UWB_Options_Audio_C_BndEvt__WB_Options_Audio_Option_OthersMicVolume_K2Node_ComponentBoundEvent_0_OnProgressChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Audio.WB_Options_Audio_C.ClickBack
	 */
	struct UWB_Options_Audio_C_ClickBack_Params
	{	};

	/**
	 * Function WB_Options_Audio.WB_Options_Audio_C.ExecuteUbergraph_WB_Options_Audio
	 */
	struct UWB_Options_Audio_C_ExecuteUbergraph_WB_Options_Audio_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Audio.WB_Options_Audio_C.OnClicked_Back__DelegateSignature
	 */
	struct UWB_Options_Audio_C_OnClicked_Back__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
