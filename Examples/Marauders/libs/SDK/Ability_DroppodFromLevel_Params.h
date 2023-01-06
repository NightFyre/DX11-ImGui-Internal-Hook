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
	 * Function Ability_DroppodFromLevel.Ability_DroppodFromLevel_C.Analytics_DropPodUsed
	 */
	struct UAbility_DroppodFromLevel_C_Analytics_DropPodUsed_Params
	{	};

	/**
	 * Function Ability_DroppodFromLevel.Ability_DroppodFromLevel_C.Trigger_FadeToBlack
	 */
	struct UAbility_DroppodFromLevel_C_Trigger_FadeToBlack_Params
	{
	public:
		float                                                      FromAlpha;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ToAlpha;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Duration;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bHoldWhenFinished;                                       // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6YTK[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_DroppodFromLevel.Ability_DroppodFromLevel_C.TriggerHudFade
	 */
	struct UAbility_DroppodFromLevel_C_TriggerHudFade_Params
	{
	public:
		bool                                                       Hide;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KS95[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_DroppodFromLevel.Ability_DroppodFromLevel_C.TurnBackOnInteractionCollision
	 */
	struct UAbility_DroppodFromLevel_C_TurnBackOnInteractionCollision_Params
	{	};

	/**
	 * Function Ability_DroppodFromLevel.Ability_DroppodFromLevel_C.SetUpBaseActors
	 */
	struct UAbility_DroppodFromLevel_C_SetUpBaseActors_Params
	{
	public:
		bool                                                       failed;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XC8Q[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_DroppodFromLevel.Ability_DroppodFromLevel_C.OnTimedOutAndDestinationReached_8344B3D046B4B5B104D3328136032080
	 */
	struct UAbility_DroppodFromLevel_C_OnTimedOutAndDestinationReached_8344B3D046B4B5B104D3328136032080_Params
	{	};

	/**
	 * Function Ability_DroppodFromLevel.Ability_DroppodFromLevel_C.OnTimedOut_8344B3D046B4B5B104D3328136032080
	 */
	struct UAbility_DroppodFromLevel_C_OnTimedOut_8344B3D046B4B5B104D3328136032080_Params
	{	};

	/**
	 * Function Ability_DroppodFromLevel.Ability_DroppodFromLevel_C.OnSync_B710567540721154D7ACDFA6C244E99D
	 */
	struct UAbility_DroppodFromLevel_C_OnSync_B710567540721154D7ACDFA6C244E99D_Params
	{	};

	/**
	 * Function Ability_DroppodFromLevel.Ability_DroppodFromLevel_C.OnTargetLocationReached_B1B242F94474EDF1D3821FB99A54E681
	 */
	struct UAbility_DroppodFromLevel_C_OnTargetLocationReached_B1B242F94474EDF1D3821FB99A54E681_Params
	{	};

	/**
	 * Function Ability_DroppodFromLevel.Ability_DroppodFromLevel_C.OnSync_D430EA49467F5BF5DAA6F1B83E2AD2BA
	 */
	struct UAbility_DroppodFromLevel_C_OnSync_D430EA49467F5BF5DAA6F1B83E2AD2BA_Params
	{	};

	/**
	 * Function Ability_DroppodFromLevel.Ability_DroppodFromLevel_C.OnFinish_9B99B61941195161A64223A4E335E710
	 */
	struct UAbility_DroppodFromLevel_C_OnFinish_9B99B61941195161A64223A4E335E710_Params
	{	};

	/**
	 * Function Ability_DroppodFromLevel.Ability_DroppodFromLevel_C.OnTimedOutAndDestinationReached_D38E26684DC6214AF973A4BCCC50993F
	 */
	struct UAbility_DroppodFromLevel_C_OnTimedOutAndDestinationReached_D38E26684DC6214AF973A4BCCC50993F_Params
	{	};

	/**
	 * Function Ability_DroppodFromLevel.Ability_DroppodFromLevel_C.OnTimedOut_D38E26684DC6214AF973A4BCCC50993F
	 */
	struct UAbility_DroppodFromLevel_C_OnTimedOut_D38E26684DC6214AF973A4BCCC50993F_Params
	{	};

	/**
	 * Function Ability_DroppodFromLevel.Ability_DroppodFromLevel_C.OnFinish_D0A5F2154FC0700A3F99FBBE9272B707
	 */
	struct UAbility_DroppodFromLevel_C_OnFinish_D0A5F2154FC0700A3F99FBBE9272B707_Params
	{	};

	/**
	 * Function Ability_DroppodFromLevel.Ability_DroppodFromLevel_C.EventReceived_ECBE06694A8DBF32F173339BF017C691
	 */
	struct UAbility_DroppodFromLevel_C_EventReceived_ECBE06694A8DBF32F173339BF017C691_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_DroppodFromLevel.Ability_DroppodFromLevel_C.OnCancelled_ECBE06694A8DBF32F173339BF017C691
	 */
	struct UAbility_DroppodFromLevel_C_OnCancelled_ECBE06694A8DBF32F173339BF017C691_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_DroppodFromLevel.Ability_DroppodFromLevel_C.OnInterrupted_ECBE06694A8DBF32F173339BF017C691
	 */
	struct UAbility_DroppodFromLevel_C_OnInterrupted_ECBE06694A8DBF32F173339BF017C691_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_DroppodFromLevel.Ability_DroppodFromLevel_C.OnBlendOut_ECBE06694A8DBF32F173339BF017C691
	 */
	struct UAbility_DroppodFromLevel_C_OnBlendOut_ECBE06694A8DBF32F173339BF017C691_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_DroppodFromLevel.Ability_DroppodFromLevel_C.OnCompleted_ECBE06694A8DBF32F173339BF017C691
	 */
	struct UAbility_DroppodFromLevel_C_OnCompleted_ECBE06694A8DBF32F173339BF017C691_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_DroppodFromLevel.Ability_DroppodFromLevel_C.EventReceived_C4CE6C9D4364E5B5EE6622BCD33B9C67
	 */
	struct UAbility_DroppodFromLevel_C_EventReceived_C4CE6C9D4364E5B5EE6622BCD33B9C67_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_DroppodFromLevel.Ability_DroppodFromLevel_C.OnCancelled_C4CE6C9D4364E5B5EE6622BCD33B9C67
	 */
	struct UAbility_DroppodFromLevel_C_OnCancelled_C4CE6C9D4364E5B5EE6622BCD33B9C67_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_DroppodFromLevel.Ability_DroppodFromLevel_C.OnInterrupted_C4CE6C9D4364E5B5EE6622BCD33B9C67
	 */
	struct UAbility_DroppodFromLevel_C_OnInterrupted_C4CE6C9D4364E5B5EE6622BCD33B9C67_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_DroppodFromLevel.Ability_DroppodFromLevel_C.OnBlendOut_C4CE6C9D4364E5B5EE6622BCD33B9C67
	 */
	struct UAbility_DroppodFromLevel_C_OnBlendOut_C4CE6C9D4364E5B5EE6622BCD33B9C67_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_DroppodFromLevel.Ability_DroppodFromLevel_C.OnCompleted_C4CE6C9D4364E5B5EE6622BCD33B9C67
	 */
	struct UAbility_DroppodFromLevel_C_OnCompleted_C4CE6C9D4364E5B5EE6622BCD33B9C67_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_DroppodFromLevel.Ability_DroppodFromLevel_C.OnTargetLocationReached_364FE8A34E01D9E19457F8BA6AED19C3
	 */
	struct UAbility_DroppodFromLevel_C_OnTargetLocationReached_364FE8A34E01D9E19457F8BA6AED19C3_Params
	{	};

	/**
	 * Function Ability_DroppodFromLevel.Ability_DroppodFromLevel_C.OnFinish_7DF91A564D33C31E210D76919ED872E9
	 */
	struct UAbility_DroppodFromLevel_C_OnFinish_7DF91A564D33C31E210D76919ED872E9_Params
	{	};

	/**
	 * Function Ability_DroppodFromLevel.Ability_DroppodFromLevel_C.K2_OnEndAbility
	 */
	struct UAbility_DroppodFromLevel_C_K2_OnEndAbility_Params
	{
	public:
		bool                                                       bWasCancelled;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_DroppodFromLevel.Ability_DroppodFromLevel_C.K2_ActivateAbility
	 */
	struct UAbility_DroppodFromLevel_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function Ability_DroppodFromLevel.Ability_DroppodFromLevel_C.ExecuteUbergraph_Ability_DroppodFromLevel
	 */
	struct UAbility_DroppodFromLevel_C_ExecuteUbergraph_Ability_DroppodFromLevel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
