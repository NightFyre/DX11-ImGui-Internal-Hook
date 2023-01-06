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
	 * Function Ability_HangerFromShip.Ability_HangerFromShip_C.SetUpBase
	 */
	struct UAbility_HangerFromShip_C_SetUpBase_Params
	{
	public:
		bool                                                       failed;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NE15[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_HangerFromShip.Ability_HangerFromShip_C.K2_ActivateAbility
	 */
	struct UAbility_HangerFromShip_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function Ability_HangerFromShip.Ability_HangerFromShip_C.ExecuteUbergraph_Ability_HangerFromShip
	 */
	struct UAbility_HangerFromShip_C_ExecuteUbergraph_Ability_HangerFromShip_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
