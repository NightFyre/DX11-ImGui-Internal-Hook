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
	 * Function Ability_Gunner.Ability_Gunner_C.CloseInventoryIfOpen
	 */
	struct UAbility_Gunner_C_CloseInventoryIfOpen_Params
	{	};

	/**
	 * Function Ability_Gunner.Ability_Gunner_C.Trigger_CameraFade
	 */
	struct UAbility_Gunner_C_Trigger_CameraFade_Params
	{
	public:
		float                                                      FromAlpha;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ToAlpha;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Duration;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bHoldWhenFinished;                                       // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LE1Z[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_Gunner.Ability_Gunner_C.K2_CanActivateAbility
	 */
	struct UAbility_Gunner_C_K2_CanActivateAbility_Params
	{
	public:
		struct FGameplayAbilityActorInfo                           ActorInfo;                                               // 0x0000(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
		struct FGameplayTagContainer                               RelevantTags;                                            // 0x0048(0x0020)  (Parm, OutParm)
		bool                                                       ReturnValue;                                             // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_32VP[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_Gunner.Ability_Gunner_C.TriggerHudFade
	 */
	struct UAbility_Gunner_C_TriggerHudFade_Params
	{
	public:
		bool                                                       Hide;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R868[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_Gunner.Ability_Gunner_C.SetUpBaseActors
	 */
	struct UAbility_Gunner_C_SetUpBaseActors_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TSP7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_Gunner.Ability_Gunner_C.OnSync_31631862425308A0DC0255B378883A75
	 */
	struct UAbility_Gunner_C_OnSync_31631862425308A0DC0255B378883A75_Params
	{	};

	/**
	 * Function Ability_Gunner.Ability_Gunner_C.OnSync_40F1C9104B9227C05D971DAB001B1C07
	 */
	struct UAbility_Gunner_C_OnSync_40F1C9104B9227C05D971DAB001B1C07_Params
	{	};

	/**
	 * Function Ability_Gunner.Ability_Gunner_C.OnTimedOutAndDestinationReached_3566C3414D4DB957A0AB70970F31C741
	 */
	struct UAbility_Gunner_C_OnTimedOutAndDestinationReached_3566C3414D4DB957A0AB70970F31C741_Params
	{	};

	/**
	 * Function Ability_Gunner.Ability_Gunner_C.OnTimedOut_3566C3414D4DB957A0AB70970F31C741
	 */
	struct UAbility_Gunner_C_OnTimedOut_3566C3414D4DB957A0AB70970F31C741_Params
	{	};

	/**
	 * Function Ability_Gunner.Ability_Gunner_C.OnTimedOutAndDestinationReached_37A351EF4A3E920F4AE2B9AF491E4974
	 */
	struct UAbility_Gunner_C_OnTimedOutAndDestinationReached_37A351EF4A3E920F4AE2B9AF491E4974_Params
	{	};

	/**
	 * Function Ability_Gunner.Ability_Gunner_C.OnTimedOut_37A351EF4A3E920F4AE2B9AF491E4974
	 */
	struct UAbility_Gunner_C_OnTimedOut_37A351EF4A3E920F4AE2B9AF491E4974_Params
	{	};

	/**
	 * Function Ability_Gunner.Ability_Gunner_C.EventReceived_246C1C784F82EFC688D648ACA332E4E9
	 */
	struct UAbility_Gunner_C_EventReceived_246C1C784F82EFC688D648ACA332E4E9_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_Gunner.Ability_Gunner_C.OnCancelled_246C1C784F82EFC688D648ACA332E4E9
	 */
	struct UAbility_Gunner_C_OnCancelled_246C1C784F82EFC688D648ACA332E4E9_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_Gunner.Ability_Gunner_C.OnInterrupted_246C1C784F82EFC688D648ACA332E4E9
	 */
	struct UAbility_Gunner_C_OnInterrupted_246C1C784F82EFC688D648ACA332E4E9_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_Gunner.Ability_Gunner_C.OnBlendOut_246C1C784F82EFC688D648ACA332E4E9
	 */
	struct UAbility_Gunner_C_OnBlendOut_246C1C784F82EFC688D648ACA332E4E9_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_Gunner.Ability_Gunner_C.OnCompleted_246C1C784F82EFC688D648ACA332E4E9
	 */
	struct UAbility_Gunner_C_OnCompleted_246C1C784F82EFC688D648ACA332E4E9_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_Gunner.Ability_Gunner_C.EventReceived_C232B99945EC6CD2F9AC2B9B424FC7FC
	 */
	struct UAbility_Gunner_C_EventReceived_C232B99945EC6CD2F9AC2B9B424FC7FC_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_Gunner.Ability_Gunner_C.OnCancelled_C232B99945EC6CD2F9AC2B9B424FC7FC
	 */
	struct UAbility_Gunner_C_OnCancelled_C232B99945EC6CD2F9AC2B9B424FC7FC_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_Gunner.Ability_Gunner_C.OnInterrupted_C232B99945EC6CD2F9AC2B9B424FC7FC
	 */
	struct UAbility_Gunner_C_OnInterrupted_C232B99945EC6CD2F9AC2B9B424FC7FC_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_Gunner.Ability_Gunner_C.OnBlendOut_C232B99945EC6CD2F9AC2B9B424FC7FC
	 */
	struct UAbility_Gunner_C_OnBlendOut_C232B99945EC6CD2F9AC2B9B424FC7FC_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_Gunner.Ability_Gunner_C.OnCompleted_C232B99945EC6CD2F9AC2B9B424FC7FC
	 */
	struct UAbility_Gunner_C_OnCompleted_C232B99945EC6CD2F9AC2B9B424FC7FC_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_Gunner.Ability_Gunner_C.OnFinish_343182354082AEEAFF31568A1F88BB38
	 */
	struct UAbility_Gunner_C_OnFinish_343182354082AEEAFF31568A1F88BB38_Params
	{	};

	/**
	 * Function Ability_Gunner.Ability_Gunner_C.OnFinish_D0980CD14CF03D166382FFA091E167D7
	 */
	struct UAbility_Gunner_C_OnFinish_D0980CD14CF03D166382FFA091E167D7_Params
	{	};

	/**
	 * Function Ability_Gunner.Ability_Gunner_C.OnFinish_F537D4154B7A6E0F34E6B08F1B3BACB7
	 */
	struct UAbility_Gunner_C_OnFinish_F537D4154B7A6E0F34E6B08F1B3BACB7_Params
	{	};

	/**
	 * Function Ability_Gunner.Ability_Gunner_C.OnFinish_8DFA5C274D16403C195F64B33C38D6D9
	 */
	struct UAbility_Gunner_C_OnFinish_8DFA5C274D16403C195F64B33C38D6D9_Params
	{	};

	/**
	 * Function Ability_Gunner.Ability_Gunner_C.OnTargetLocationReached_7A38C7E341F2617FDD0E97B172486612
	 */
	struct UAbility_Gunner_C_OnTargetLocationReached_7A38C7E341F2617FDD0E97B172486612_Params
	{	};

	/**
	 * Function Ability_Gunner.Ability_Gunner_C.K2_OnEndAbility
	 */
	struct UAbility_Gunner_C_K2_OnEndAbility_Params
	{
	public:
		bool                                                       bWasCancelled;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_Gunner.Ability_Gunner_C.K2_ActivateAbility
	 */
	struct UAbility_Gunner_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function Ability_Gunner.Ability_Gunner_C.ExecuteUbergraph_Ability_Gunner
	 */
	struct UAbility_Gunner_C_ExecuteUbergraph_Ability_Gunner_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
