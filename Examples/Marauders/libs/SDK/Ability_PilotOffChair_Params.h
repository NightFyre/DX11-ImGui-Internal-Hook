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
	 * Function Ability_PilotOffChair.Ability_PilotOffChair_C.AlignControlRotation
	 */
	struct UAbility_PilotOffChair_C_AlignControlRotation_Params
	{	};

	/**
	 * Function Ability_PilotOffChair.Ability_PilotOffChair_C.SetUpBaseActors
	 */
	struct UAbility_PilotOffChair_C_SetUpBaseActors_Params
	{
	public:
		bool                                                       failed;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WI95[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_PilotOffChair.Ability_PilotOffChair_C.OnSync_2ADC627D45541B5D3C3BA0BCA47752DD
	 */
	struct UAbility_PilotOffChair_C_OnSync_2ADC627D45541B5D3C3BA0BCA47752DD_Params
	{	};

	/**
	 * Function Ability_PilotOffChair.Ability_PilotOffChair_C.EventReceived_0A1466BE4CA8AB32B958978757338BD8
	 */
	struct UAbility_PilotOffChair_C_EventReceived_0A1466BE4CA8AB32B958978757338BD8_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_PilotOffChair.Ability_PilotOffChair_C.OnCancelled_0A1466BE4CA8AB32B958978757338BD8
	 */
	struct UAbility_PilotOffChair_C_OnCancelled_0A1466BE4CA8AB32B958978757338BD8_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_PilotOffChair.Ability_PilotOffChair_C.OnInterrupted_0A1466BE4CA8AB32B958978757338BD8
	 */
	struct UAbility_PilotOffChair_C_OnInterrupted_0A1466BE4CA8AB32B958978757338BD8_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_PilotOffChair.Ability_PilotOffChair_C.OnBlendOut_0A1466BE4CA8AB32B958978757338BD8
	 */
	struct UAbility_PilotOffChair_C_OnBlendOut_0A1466BE4CA8AB32B958978757338BD8_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_PilotOffChair.Ability_PilotOffChair_C.OnCompleted_0A1466BE4CA8AB32B958978757338BD8
	 */
	struct UAbility_PilotOffChair_C_OnCompleted_0A1466BE4CA8AB32B958978757338BD8_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_PilotOffChair.Ability_PilotOffChair_C.EventReceived_2BB641324DDA55D29F0599A55D511D8B
	 */
	struct UAbility_PilotOffChair_C_EventReceived_2BB641324DDA55D29F0599A55D511D8B_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_PilotOffChair.Ability_PilotOffChair_C.OnCancelled_2BB641324DDA55D29F0599A55D511D8B
	 */
	struct UAbility_PilotOffChair_C_OnCancelled_2BB641324DDA55D29F0599A55D511D8B_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_PilotOffChair.Ability_PilotOffChair_C.OnInterrupted_2BB641324DDA55D29F0599A55D511D8B
	 */
	struct UAbility_PilotOffChair_C_OnInterrupted_2BB641324DDA55D29F0599A55D511D8B_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_PilotOffChair.Ability_PilotOffChair_C.OnBlendOut_2BB641324DDA55D29F0599A55D511D8B
	 */
	struct UAbility_PilotOffChair_C_OnBlendOut_2BB641324DDA55D29F0599A55D511D8B_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_PilotOffChair.Ability_PilotOffChair_C.OnCompleted_2BB641324DDA55D29F0599A55D511D8B
	 */
	struct UAbility_PilotOffChair_C_OnCompleted_2BB641324DDA55D29F0599A55D511D8B_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_PilotOffChair.Ability_PilotOffChair_C.OnFinish_7D92FB174D7A409EEBC2D6BBA4EEFF6D
	 */
	struct UAbility_PilotOffChair_C_OnFinish_7D92FB174D7A409EEBC2D6BBA4EEFF6D_Params
	{	};

	/**
	 * Function Ability_PilotOffChair.Ability_PilotOffChair_C.K2_ActivateAbility
	 */
	struct UAbility_PilotOffChair_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function Ability_PilotOffChair.Ability_PilotOffChair_C.K2_OnEndAbility
	 */
	struct UAbility_PilotOffChair_C_K2_OnEndAbility_Params
	{
	public:
		bool                                                       bWasCancelled;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_PilotOffChair.Ability_PilotOffChair_C.ExecuteUbergraph_Ability_PilotOffChair
	 */
	struct UAbility_PilotOffChair_C_ExecuteUbergraph_Ability_PilotOffChair_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
