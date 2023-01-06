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
	 * Function Ability_Droppod.Ability_Droppod_C.Analytics_UsedDropPod
	 */
	struct UAbility_Droppod_C_Analytics_UsedDropPod_Params
	{	};

	/**
	 * Function Ability_Droppod.Ability_Droppod_C.CloseInventoryIfOpen
	 */
	struct UAbility_Droppod_C_CloseInventoryIfOpen_Params
	{	};

	/**
	 * Function Ability_Droppod.Ability_Droppod_C.K2_CanActivateAbility
	 */
	struct UAbility_Droppod_C_K2_CanActivateAbility_Params
	{
	public:
		struct FGameplayAbilityActorInfo                           ActorInfo;                                               // 0x0000(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
		struct FGameplayTagContainer                               RelevantTags;                                            // 0x0048(0x0020)  (Parm, OutParm)
		bool                                                       ReturnValue;                                             // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2N9S[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_Droppod.Ability_Droppod_C.Trigger_FadeToBlack
	 */
	struct UAbility_Droppod_C_Trigger_FadeToBlack_Params
	{
	public:
		float                                                      FromAlpha;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ToAlpha;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Duration;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bHoldWhenFinished;                                       // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PD0D[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_Droppod.Ability_Droppod_C.TriggerHudFade
	 */
	struct UAbility_Droppod_C_TriggerHudFade_Params
	{
	public:
		bool                                                       Hide;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SJ3H[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_Droppod.Ability_Droppod_C.TurnBackOnInteractionCollision
	 */
	struct UAbility_Droppod_C_TurnBackOnInteractionCollision_Params
	{	};

	/**
	 * Function Ability_Droppod.Ability_Droppod_C.SetUpBaseActors
	 */
	struct UAbility_Droppod_C_SetUpBaseActors_Params
	{
	public:
		bool                                                       failed;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VT20[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_Droppod.Ability_Droppod_C.OnTargetLocationReached_E223A6AB499A7A8B1AF5A58228FEE367
	 */
	struct UAbility_Droppod_C_OnTargetLocationReached_E223A6AB499A7A8B1AF5A58228FEE367_Params
	{	};

	/**
	 * Function Ability_Droppod.Ability_Droppod_C.OnTimedOutAndDestinationReached_3830054047D00FCDB2E0D88C40822CEA
	 */
	struct UAbility_Droppod_C_OnTimedOutAndDestinationReached_3830054047D00FCDB2E0D88C40822CEA_Params
	{	};

	/**
	 * Function Ability_Droppod.Ability_Droppod_C.OnTimedOut_3830054047D00FCDB2E0D88C40822CEA
	 */
	struct UAbility_Droppod_C_OnTimedOut_3830054047D00FCDB2E0D88C40822CEA_Params
	{	};

	/**
	 * Function Ability_Droppod.Ability_Droppod_C.OnSync_00A035E74C8708DF59208A8829D61CFB
	 */
	struct UAbility_Droppod_C_OnSync_00A035E74C8708DF59208A8829D61CFB_Params
	{	};

	/**
	 * Function Ability_Droppod.Ability_Droppod_C.OnSync_0A31F94743E1D8FDB5647FB1EFE0EDB8
	 */
	struct UAbility_Droppod_C_OnSync_0A31F94743E1D8FDB5647FB1EFE0EDB8_Params
	{	};

	/**
	 * Function Ability_Droppod.Ability_Droppod_C.OnFinish_2D9AC5B04B15584F646029B671420EB8
	 */
	struct UAbility_Droppod_C_OnFinish_2D9AC5B04B15584F646029B671420EB8_Params
	{	};

	/**
	 * Function Ability_Droppod.Ability_Droppod_C.OnTimedOutAndDestinationReached_D1607FA74A6ED8D267192484DC89644B
	 */
	struct UAbility_Droppod_C_OnTimedOutAndDestinationReached_D1607FA74A6ED8D267192484DC89644B_Params
	{	};

	/**
	 * Function Ability_Droppod.Ability_Droppod_C.OnTimedOut_D1607FA74A6ED8D267192484DC89644B
	 */
	struct UAbility_Droppod_C_OnTimedOut_D1607FA74A6ED8D267192484DC89644B_Params
	{	};

	/**
	 * Function Ability_Droppod.Ability_Droppod_C.OnFinish_7C07E5894D1606F9FA7C92887F8DA834
	 */
	struct UAbility_Droppod_C_OnFinish_7C07E5894D1606F9FA7C92887F8DA834_Params
	{	};

	/**
	 * Function Ability_Droppod.Ability_Droppod_C.EventReceived_71D9BA7B4988ED3BC908F5901C0F4857
	 */
	struct UAbility_Droppod_C_EventReceived_71D9BA7B4988ED3BC908F5901C0F4857_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_Droppod.Ability_Droppod_C.OnCancelled_71D9BA7B4988ED3BC908F5901C0F4857
	 */
	struct UAbility_Droppod_C_OnCancelled_71D9BA7B4988ED3BC908F5901C0F4857_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_Droppod.Ability_Droppod_C.OnInterrupted_71D9BA7B4988ED3BC908F5901C0F4857
	 */
	struct UAbility_Droppod_C_OnInterrupted_71D9BA7B4988ED3BC908F5901C0F4857_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_Droppod.Ability_Droppod_C.OnBlendOut_71D9BA7B4988ED3BC908F5901C0F4857
	 */
	struct UAbility_Droppod_C_OnBlendOut_71D9BA7B4988ED3BC908F5901C0F4857_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_Droppod.Ability_Droppod_C.OnCompleted_71D9BA7B4988ED3BC908F5901C0F4857
	 */
	struct UAbility_Droppod_C_OnCompleted_71D9BA7B4988ED3BC908F5901C0F4857_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_Droppod.Ability_Droppod_C.EventReceived_446521CD4516F81934C2489C07074A82
	 */
	struct UAbility_Droppod_C_EventReceived_446521CD4516F81934C2489C07074A82_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_Droppod.Ability_Droppod_C.OnCancelled_446521CD4516F81934C2489C07074A82
	 */
	struct UAbility_Droppod_C_OnCancelled_446521CD4516F81934C2489C07074A82_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_Droppod.Ability_Droppod_C.OnInterrupted_446521CD4516F81934C2489C07074A82
	 */
	struct UAbility_Droppod_C_OnInterrupted_446521CD4516F81934C2489C07074A82_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_Droppod.Ability_Droppod_C.OnBlendOut_446521CD4516F81934C2489C07074A82
	 */
	struct UAbility_Droppod_C_OnBlendOut_446521CD4516F81934C2489C07074A82_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_Droppod.Ability_Droppod_C.OnCompleted_446521CD4516F81934C2489C07074A82
	 */
	struct UAbility_Droppod_C_OnCompleted_446521CD4516F81934C2489C07074A82_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_Droppod.Ability_Droppod_C.OnTargetLocationReached_262B4D1C4EBFF78F126BFC9E6CD8FC11
	 */
	struct UAbility_Droppod_C_OnTargetLocationReached_262B4D1C4EBFF78F126BFC9E6CD8FC11_Params
	{	};

	/**
	 * Function Ability_Droppod.Ability_Droppod_C.K2_OnEndAbility
	 */
	struct UAbility_Droppod_C_K2_OnEndAbility_Params
	{
	public:
		bool                                                       bWasCancelled;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_Droppod.Ability_Droppod_C.K2_ActivateAbility
	 */
	struct UAbility_Droppod_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function Ability_Droppod.Ability_Droppod_C.ExecuteUbergraph_Ability_Droppod
	 */
	struct UAbility_Droppod_C_ExecuteUbergraph_Ability_Droppod_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
