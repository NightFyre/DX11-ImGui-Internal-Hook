#pragma once

/**
 * Name: Task_Force
 * Version: 0.3.6.1537
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
	 * Function BP_Button.BP_Button_C.GetButtonText
	 */
	struct ABP_Button_C_GetButtonText_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Button.BP_Button_C.IsButtonPressable
	 */
	struct ABP_Button_C_IsButtonPressable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Button.BP_Button_C.ResetButton
	 */
	struct ABP_Button_C_ResetButton_Params
	{	};

	/**
	 * Function BP_Button.BP_Button_C.ReleaseButton
	 */
	struct ABP_Button_C_ReleaseButton_Params
	{	};

	/**
	 * Function BP_Button.BP_Button_C.PressButton
	 */
	struct ABP_Button_C_PressButton_Params
	{	};

	/**
	 * Function BP_Button.BP_Button_C.OnRep_Extents
	 */
	struct ABP_Button_C_OnRep_Extents_Params
	{	};

	/**
	 * Function BP_Button.BP_Button_C.ForceUpdate
	 */
	struct ABP_Button_C_ForceUpdate_Params
	{	};

	/**
	 * Function BP_Button.BP_Button_C.UserConstructionScript
	 */
	struct ABP_Button_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Button.BP_Button_C.Trigger
	 */
	struct ABP_Button_C_Trigger_Params
	{
	public:
		bool                                                       Released;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Button.BP_Button_C.ResetState
	 */
	struct ABP_Button_C_ResetState_Params
	{	};

	/**
	 * Function BP_Button.BP_Button_C.ToggleButton
	 */
	struct ABP_Button_C_ToggleButton_Params
	{
	public:
		bool                                                       bReleased;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Button.BP_Button_C.ReceiveTick
	 */
	struct ABP_Button_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Button.BP_Button_C.ExecuteUbergraph_BP_Button
	 */
	struct ABP_Button_C_ExecuteUbergraph_BP_Button_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
