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
	 * Function Ability_HumanBreachedIn.Ability_HumanBreachedIn_C.AlignControlRotation
	 */
	struct UAbility_HumanBreachedIn_C_AlignControlRotation_Params
	{	};

	/**
	 * Function Ability_HumanBreachedIn.Ability_HumanBreachedIn_C.SetUpBaseActors
	 */
	struct UAbility_HumanBreachedIn_C_SetUpBaseActors_Params
	{
	public:
		bool                                                       failed;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MM1D[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_HumanBreachedIn.Ability_HumanBreachedIn_C.EventReceived_40ED19D24FCBDD28EC1290A90A05732D
	 */
	struct UAbility_HumanBreachedIn_C_EventReceived_40ED19D24FCBDD28EC1290A90A05732D_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_HumanBreachedIn.Ability_HumanBreachedIn_C.OnCancelled_40ED19D24FCBDD28EC1290A90A05732D
	 */
	struct UAbility_HumanBreachedIn_C_OnCancelled_40ED19D24FCBDD28EC1290A90A05732D_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_HumanBreachedIn.Ability_HumanBreachedIn_C.OnInterrupted_40ED19D24FCBDD28EC1290A90A05732D
	 */
	struct UAbility_HumanBreachedIn_C_OnInterrupted_40ED19D24FCBDD28EC1290A90A05732D_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_HumanBreachedIn.Ability_HumanBreachedIn_C.OnBlendOut_40ED19D24FCBDD28EC1290A90A05732D
	 */
	struct UAbility_HumanBreachedIn_C_OnBlendOut_40ED19D24FCBDD28EC1290A90A05732D_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_HumanBreachedIn.Ability_HumanBreachedIn_C.OnCompleted_40ED19D24FCBDD28EC1290A90A05732D
	 */
	struct UAbility_HumanBreachedIn_C_OnCompleted_40ED19D24FCBDD28EC1290A90A05732D_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_HumanBreachedIn.Ability_HumanBreachedIn_C.K2_ActivateAbility
	 */
	struct UAbility_HumanBreachedIn_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function Ability_HumanBreachedIn.Ability_HumanBreachedIn_C.K2_OnEndAbility
	 */
	struct UAbility_HumanBreachedIn_C_K2_OnEndAbility_Params
	{
	public:
		bool                                                       bWasCancelled;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_HumanBreachedIn.Ability_HumanBreachedIn_C.ExecuteUbergraph_Ability_HumanBreachedIn
	 */
	struct UAbility_HumanBreachedIn_C_ExecuteUbergraph_Ability_HumanBreachedIn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
