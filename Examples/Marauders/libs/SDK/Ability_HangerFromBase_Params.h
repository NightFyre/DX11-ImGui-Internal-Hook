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
	 * Function Ability_HangerFromBase.Ability_HangerFromBase_C.SetUpBase
	 */
	struct UAbility_HangerFromBase_C_SetUpBase_Params
	{
	public:
		bool                                                       Fail;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JCPK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_HangerFromBase.Ability_HangerFromBase_C.K2_ActivateAbility
	 */
	struct UAbility_HangerFromBase_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function Ability_HangerFromBase.Ability_HangerFromBase_C.ExecuteUbergraph_Ability_HangerFromBase
	 */
	struct UAbility_HangerFromBase_C_ExecuteUbergraph_Ability_HangerFromBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EWR3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
