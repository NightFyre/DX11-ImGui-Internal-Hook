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
	 * Function Ability_DropPod_Launch.Ability_DropPod_Launch_C.TriggerHUD_Fade
	 */
	struct UAbility_DropPod_Launch_C_TriggerHUD_Fade_Params
	{
	public:
		bool                                                       Hide;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KN31[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_DropPod_Launch.Ability_DropPod_Launch_C.Trigger_FadeToBlack
	 */
	struct UAbility_DropPod_Launch_C_Trigger_FadeToBlack_Params
	{
	public:
		float                                                      FromAlpha;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ToAlpha;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Duration;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bHoldWhenFinished;                                       // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_561Z[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_DropPod_Launch.Ability_DropPod_Launch_C.EventReceived_86EEC1C74D0BBA807392D194678397D5
	 */
	struct UAbility_DropPod_Launch_C_EventReceived_86EEC1C74D0BBA807392D194678397D5_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_DropPod_Launch.Ability_DropPod_Launch_C.OnCancelled_86EEC1C74D0BBA807392D194678397D5
	 */
	struct UAbility_DropPod_Launch_C_OnCancelled_86EEC1C74D0BBA807392D194678397D5_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_DropPod_Launch.Ability_DropPod_Launch_C.OnInterrupted_86EEC1C74D0BBA807392D194678397D5
	 */
	struct UAbility_DropPod_Launch_C_OnInterrupted_86EEC1C74D0BBA807392D194678397D5_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_DropPod_Launch.Ability_DropPod_Launch_C.OnBlendOut_86EEC1C74D0BBA807392D194678397D5
	 */
	struct UAbility_DropPod_Launch_C_OnBlendOut_86EEC1C74D0BBA807392D194678397D5_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_DropPod_Launch.Ability_DropPod_Launch_C.OnCompleted_86EEC1C74D0BBA807392D194678397D5
	 */
	struct UAbility_DropPod_Launch_C_OnCompleted_86EEC1C74D0BBA807392D194678397D5_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_DropPod_Launch.Ability_DropPod_Launch_C.OnFinish_D1B9EEFE4379C8676B7C8389974E5B56
	 */
	struct UAbility_DropPod_Launch_C_OnFinish_D1B9EEFE4379C8676B7C8389974E5B56_Params
	{	};

	/**
	 * Function Ability_DropPod_Launch.Ability_DropPod_Launch_C.K2_ActivateAbility
	 */
	struct UAbility_DropPod_Launch_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function Ability_DropPod_Launch.Ability_DropPod_Launch_C.K2_OnEndAbility
	 */
	struct UAbility_DropPod_Launch_C_K2_OnEndAbility_Params
	{
	public:
		bool                                                       bWasCancelled;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_DropPod_Launch.Ability_DropPod_Launch_C.ExecuteUbergraph_Ability_DropPod_Launch
	 */
	struct UAbility_DropPod_Launch_C_ExecuteUbergraph_Ability_DropPod_Launch_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
