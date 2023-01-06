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
	 * Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.AlignControlRotation
	 */
	struct UAbility_GunnerOffChair_C_AlignControlRotation_Params
	{	};

	/**
	 * Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.Trigger_FadeToBlack
	 */
	struct UAbility_GunnerOffChair_C_Trigger_FadeToBlack_Params
	{
	public:
		float                                                      FromAlpha;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ToAlpha;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Duration;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bHoldWhenFinished;                                       // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W7I7[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.TriggerHudInstandUIFade
	 */
	struct UAbility_GunnerOffChair_C_TriggerHudInstandUIFade_Params
	{
	public:
		bool                                                       Hide;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B2ZX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.TriggerHudUIFade
	 */
	struct UAbility_GunnerOffChair_C_TriggerHudUIFade_Params
	{
	public:
		bool                                                       Hide;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G1P2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.SetUpBaseActors
	 */
	struct UAbility_GunnerOffChair_C_SetUpBaseActors_Params
	{
	public:
		bool                                                       Fail;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D7S4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.OnSync_5941F9DA413A0B85EDDD188A924EBDCF
	 */
	struct UAbility_GunnerOffChair_C_OnSync_5941F9DA413A0B85EDDD188A924EBDCF_Params
	{	};

	/**
	 * Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.EventReceived_72D673404FF40B4374E1F9AF7F2B85FA
	 */
	struct UAbility_GunnerOffChair_C_EventReceived_72D673404FF40B4374E1F9AF7F2B85FA_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.OnCancelled_72D673404FF40B4374E1F9AF7F2B85FA
	 */
	struct UAbility_GunnerOffChair_C_OnCancelled_72D673404FF40B4374E1F9AF7F2B85FA_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.OnInterrupted_72D673404FF40B4374E1F9AF7F2B85FA
	 */
	struct UAbility_GunnerOffChair_C_OnInterrupted_72D673404FF40B4374E1F9AF7F2B85FA_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.OnBlendOut_72D673404FF40B4374E1F9AF7F2B85FA
	 */
	struct UAbility_GunnerOffChair_C_OnBlendOut_72D673404FF40B4374E1F9AF7F2B85FA_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.OnCompleted_72D673404FF40B4374E1F9AF7F2B85FA
	 */
	struct UAbility_GunnerOffChair_C_OnCompleted_72D673404FF40B4374E1F9AF7F2B85FA_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.EventReceived_89818B24431A8F4E8652A4A821CC0E90
	 */
	struct UAbility_GunnerOffChair_C_EventReceived_89818B24431A8F4E8652A4A821CC0E90_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.OnCancelled_89818B24431A8F4E8652A4A821CC0E90
	 */
	struct UAbility_GunnerOffChair_C_OnCancelled_89818B24431A8F4E8652A4A821CC0E90_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.OnInterrupted_89818B24431A8F4E8652A4A821CC0E90
	 */
	struct UAbility_GunnerOffChair_C_OnInterrupted_89818B24431A8F4E8652A4A821CC0E90_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.OnBlendOut_89818B24431A8F4E8652A4A821CC0E90
	 */
	struct UAbility_GunnerOffChair_C_OnBlendOut_89818B24431A8F4E8652A4A821CC0E90_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.OnCompleted_89818B24431A8F4E8652A4A821CC0E90
	 */
	struct UAbility_GunnerOffChair_C_OnCompleted_89818B24431A8F4E8652A4A821CC0E90_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.OnFinish_604AC427435B40CDA7BF22A0AD45E4FF
	 */
	struct UAbility_GunnerOffChair_C_OnFinish_604AC427435B40CDA7BF22A0AD45E4FF_Params
	{	};

	/**
	 * Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.K2_ActivateAbility
	 */
	struct UAbility_GunnerOffChair_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.K2_OnEndAbility
	 */
	struct UAbility_GunnerOffChair_C_K2_OnEndAbility_Params
	{
	public:
		bool                                                       bWasCancelled;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.ExecuteUbergraph_Ability_GunnerOffChair
	 */
	struct UAbility_GunnerOffChair_C_ExecuteUbergraph_Ability_GunnerOffChair_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
