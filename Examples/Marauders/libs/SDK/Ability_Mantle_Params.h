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
	 * Function Ability_Mantle.Ability_Mantle_C.K2_CanActivateAbility
	 */
	struct UAbility_Mantle_C_K2_CanActivateAbility_Params
	{
	public:
		struct FGameplayAbilityActorInfo                           ActorInfo;                                               // 0x0000(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
		struct FGameplayTagContainer                               RelevantTags;                                            // 0x0048(0x0020)  (Parm, OutParm)
		bool                                                       ReturnValue;                                             // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HPSA[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_Mantle.Ability_Mantle_C.Trigger_FadeToBlack
	 */
	struct UAbility_Mantle_C_Trigger_FadeToBlack_Params
	{
	public:
		float                                                      FromAlpha;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ToAlpha;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Duration;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bHoldWhenFinished;                                       // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_12SB[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_Mantle.Ability_Mantle_C.TriggerHudFade
	 */
	struct UAbility_Mantle_C_TriggerHudFade_Params
	{
	public:
		bool                                                       Hide;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HHFN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_Mantle.Ability_Mantle_C.SetUpBaseActors
	 */
	struct UAbility_Mantle_C_SetUpBaseActors_Params
	{
	public:
		bool                                                       failed;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_Mantle.Ability_Mantle_C.OnTargetLocationReached_F20E66A24B2ECF9715537288F9A1A50E
	 */
	struct UAbility_Mantle_C_OnTargetLocationReached_F20E66A24B2ECF9715537288F9A1A50E_Params
	{	};

	/**
	 * Function Ability_Mantle.Ability_Mantle_C.EventReceived_757C3958423C24801B47EBBC279D509C
	 */
	struct UAbility_Mantle_C_EventReceived_757C3958423C24801B47EBBC279D509C_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_Mantle.Ability_Mantle_C.OnCancelled_757C3958423C24801B47EBBC279D509C
	 */
	struct UAbility_Mantle_C_OnCancelled_757C3958423C24801B47EBBC279D509C_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_Mantle.Ability_Mantle_C.OnInterrupted_757C3958423C24801B47EBBC279D509C
	 */
	struct UAbility_Mantle_C_OnInterrupted_757C3958423C24801B47EBBC279D509C_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_Mantle.Ability_Mantle_C.OnBlendOut_757C3958423C24801B47EBBC279D509C
	 */
	struct UAbility_Mantle_C_OnBlendOut_757C3958423C24801B47EBBC279D509C_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_Mantle.Ability_Mantle_C.OnCompleted_757C3958423C24801B47EBBC279D509C
	 */
	struct UAbility_Mantle_C_OnCompleted_757C3958423C24801B47EBBC279D509C_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_Mantle.Ability_Mantle_C.OnTargetLocationReached_62B07651482F54AC48337FABE33C716B
	 */
	struct UAbility_Mantle_C_OnTargetLocationReached_62B07651482F54AC48337FABE33C716B_Params
	{	};

	/**
	 * Function Ability_Mantle.Ability_Mantle_C.OnSync_BFDD39A549CA24C2218CA1B8E3308202
	 */
	struct UAbility_Mantle_C_OnSync_BFDD39A549CA24C2218CA1B8E3308202_Params
	{	};

	/**
	 * Function Ability_Mantle.Ability_Mantle_C.EventReceived_7FC55D3C4874BE522DDF52864A687141
	 */
	struct UAbility_Mantle_C_EventReceived_7FC55D3C4874BE522DDF52864A687141_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_Mantle.Ability_Mantle_C.OnCancelled_7FC55D3C4874BE522DDF52864A687141
	 */
	struct UAbility_Mantle_C_OnCancelled_7FC55D3C4874BE522DDF52864A687141_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_Mantle.Ability_Mantle_C.OnInterrupted_7FC55D3C4874BE522DDF52864A687141
	 */
	struct UAbility_Mantle_C_OnInterrupted_7FC55D3C4874BE522DDF52864A687141_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_Mantle.Ability_Mantle_C.OnBlendOut_7FC55D3C4874BE522DDF52864A687141
	 */
	struct UAbility_Mantle_C_OnBlendOut_7FC55D3C4874BE522DDF52864A687141_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_Mantle.Ability_Mantle_C.OnCompleted_7FC55D3C4874BE522DDF52864A687141
	 */
	struct UAbility_Mantle_C_OnCompleted_7FC55D3C4874BE522DDF52864A687141_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_Mantle.Ability_Mantle_C.K2_OnEndAbility
	 */
	struct UAbility_Mantle_C_K2_OnEndAbility_Params
	{
	public:
		bool                                                       bWasCancelled;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_Mantle.Ability_Mantle_C.K2_ActivateAbility
	 */
	struct UAbility_Mantle_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function Ability_Mantle.Ability_Mantle_C.ExecuteUbergraph_Ability_Mantle
	 */
	struct UAbility_Mantle_C_ExecuteUbergraph_Ability_Mantle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
