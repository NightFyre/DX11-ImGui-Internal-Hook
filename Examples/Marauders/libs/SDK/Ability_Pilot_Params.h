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
	 * Function Ability_Pilot.Ability_Pilot_C.CloseInventoryIfOpen
	 */
	struct UAbility_Pilot_C_CloseInventoryIfOpen_Params
	{	};

	/**
	 * Function Ability_Pilot.Ability_Pilot_C.Trigger_CameraFade
	 */
	struct UAbility_Pilot_C_Trigger_CameraFade_Params
	{
	public:
		float                                                      FromAlpha;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ToAlpha;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Duration;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bHoldWhenFinished;                                       // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SF9B[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_Pilot.Ability_Pilot_C.K2_CanActivateAbility
	 */
	struct UAbility_Pilot_C_K2_CanActivateAbility_Params
	{
	public:
		struct FGameplayAbilityActorInfo                           ActorInfo;                                               // 0x0000(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
		struct FGameplayTagContainer                               RelevantTags;                                            // 0x0048(0x0020)  (Parm, OutParm)
		bool                                                       ReturnValue;                                             // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6CIO[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_Pilot.Ability_Pilot_C.TriggerHUDfadeOut
	 */
	struct UAbility_Pilot_C_TriggerHUDfadeOut_Params
	{
	public:
		bool                                                       Hide;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_47UH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_Pilot.Ability_Pilot_C.SetUpBaseActors
	 */
	struct UAbility_Pilot_C_SetUpBaseActors_Params
	{
	public:
		bool                                                       failed;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8ANQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_Pilot.Ability_Pilot_C.OnSync_BC1CFFA7429F81D07725EBB565FDA119
	 */
	struct UAbility_Pilot_C_OnSync_BC1CFFA7429F81D07725EBB565FDA119_Params
	{	};

	/**
	 * Function Ability_Pilot.Ability_Pilot_C.OnSync_E40EECA5499C085E86C4FDB7D993BD62
	 */
	struct UAbility_Pilot_C_OnSync_E40EECA5499C085E86C4FDB7D993BD62_Params
	{	};

	/**
	 * Function Ability_Pilot.Ability_Pilot_C.OnTimedOutAndDestinationReached_81BB39CB404C7FBEBDCF948AA9B42AA7
	 */
	struct UAbility_Pilot_C_OnTimedOutAndDestinationReached_81BB39CB404C7FBEBDCF948AA9B42AA7_Params
	{	};

	/**
	 * Function Ability_Pilot.Ability_Pilot_C.OnTimedOut_81BB39CB404C7FBEBDCF948AA9B42AA7
	 */
	struct UAbility_Pilot_C_OnTimedOut_81BB39CB404C7FBEBDCF948AA9B42AA7_Params
	{	};

	/**
	 * Function Ability_Pilot.Ability_Pilot_C.EventReceived_25FF25254834C5C5C86EF8B7FA35B3E0
	 */
	struct UAbility_Pilot_C_EventReceived_25FF25254834C5C5C86EF8B7FA35B3E0_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_Pilot.Ability_Pilot_C.OnCancelled_25FF25254834C5C5C86EF8B7FA35B3E0
	 */
	struct UAbility_Pilot_C_OnCancelled_25FF25254834C5C5C86EF8B7FA35B3E0_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_Pilot.Ability_Pilot_C.OnInterrupted_25FF25254834C5C5C86EF8B7FA35B3E0
	 */
	struct UAbility_Pilot_C_OnInterrupted_25FF25254834C5C5C86EF8B7FA35B3E0_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_Pilot.Ability_Pilot_C.OnBlendOut_25FF25254834C5C5C86EF8B7FA35B3E0
	 */
	struct UAbility_Pilot_C_OnBlendOut_25FF25254834C5C5C86EF8B7FA35B3E0_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_Pilot.Ability_Pilot_C.OnCompleted_25FF25254834C5C5C86EF8B7FA35B3E0
	 */
	struct UAbility_Pilot_C_OnCompleted_25FF25254834C5C5C86EF8B7FA35B3E0_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_Pilot.Ability_Pilot_C.OnTargetLocationReached_BAA0A1BE4FD08FDD4AA0E8B0A8911E47
	 */
	struct UAbility_Pilot_C_OnTargetLocationReached_BAA0A1BE4FD08FDD4AA0E8B0A8911E47_Params
	{	};

	/**
	 * Function Ability_Pilot.Ability_Pilot_C.EventReceived_6C661FAE4B3C0E195531B1A07B77DEBF
	 */
	struct UAbility_Pilot_C_EventReceived_6C661FAE4B3C0E195531B1A07B77DEBF_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_Pilot.Ability_Pilot_C.OnCancelled_6C661FAE4B3C0E195531B1A07B77DEBF
	 */
	struct UAbility_Pilot_C_OnCancelled_6C661FAE4B3C0E195531B1A07B77DEBF_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_Pilot.Ability_Pilot_C.OnInterrupted_6C661FAE4B3C0E195531B1A07B77DEBF
	 */
	struct UAbility_Pilot_C_OnInterrupted_6C661FAE4B3C0E195531B1A07B77DEBF_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_Pilot.Ability_Pilot_C.OnBlendOut_6C661FAE4B3C0E195531B1A07B77DEBF
	 */
	struct UAbility_Pilot_C_OnBlendOut_6C661FAE4B3C0E195531B1A07B77DEBF_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_Pilot.Ability_Pilot_C.OnCompleted_6C661FAE4B3C0E195531B1A07B77DEBF
	 */
	struct UAbility_Pilot_C_OnCompleted_6C661FAE4B3C0E195531B1A07B77DEBF_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_Pilot.Ability_Pilot_C.OnFinish_35F7A38E40F73F3BFA24D1A474AC4104
	 */
	struct UAbility_Pilot_C_OnFinish_35F7A38E40F73F3BFA24D1A474AC4104_Params
	{	};

	/**
	 * Function Ability_Pilot.Ability_Pilot_C.OnFinish_7515B0F74611DFBF6CD9858C4FA3A41D
	 */
	struct UAbility_Pilot_C_OnFinish_7515B0F74611DFBF6CD9858C4FA3A41D_Params
	{	};

	/**
	 * Function Ability_Pilot.Ability_Pilot_C.OnTimedOutAndDestinationReached_F98EAFFA4EB8F2B73E8AA3898C193C31
	 */
	struct UAbility_Pilot_C_OnTimedOutAndDestinationReached_F98EAFFA4EB8F2B73E8AA3898C193C31_Params
	{	};

	/**
	 * Function Ability_Pilot.Ability_Pilot_C.OnTimedOut_F98EAFFA4EB8F2B73E8AA3898C193C31
	 */
	struct UAbility_Pilot_C_OnTimedOut_F98EAFFA4EB8F2B73E8AA3898C193C31_Params
	{	};

	/**
	 * Function Ability_Pilot.Ability_Pilot_C.OnFinish_424362CC44B952BC93648AB72DF8D170
	 */
	struct UAbility_Pilot_C_OnFinish_424362CC44B952BC93648AB72DF8D170_Params
	{	};

	/**
	 * Function Ability_Pilot.Ability_Pilot_C.OnFinish_9E6D3C174D4E65C228999AAE1552C474
	 */
	struct UAbility_Pilot_C_OnFinish_9E6D3C174D4E65C228999AAE1552C474_Params
	{	};

	/**
	 * Function Ability_Pilot.Ability_Pilot_C.K2_ActivateAbility
	 */
	struct UAbility_Pilot_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function Ability_Pilot.Ability_Pilot_C.K2_OnEndAbility
	 */
	struct UAbility_Pilot_C_K2_OnEndAbility_Params
	{
	public:
		bool                                                       bWasCancelled;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_Pilot.Ability_Pilot_C.ExecuteUbergraph_Ability_Pilot
	 */
	struct UAbility_Pilot_C_ExecuteUbergraph_Ability_Pilot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
