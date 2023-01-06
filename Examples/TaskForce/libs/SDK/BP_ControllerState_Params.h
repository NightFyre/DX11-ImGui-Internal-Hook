#pragma once

/**
 * Name: Task_Force
 * Version: 0.3.6.1537
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
	 * Function BP_ControllerState.BP_ControllerState_C.GetTeam
	 */
	struct ABP_ControllerState_C_GetTeam_Params
	{
	public:
		int32_t                                                    Team;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ControllerState.BP_ControllerState_C.GetSeed
	 */
	struct ABP_ControllerState_C_GetSeed_Params
	{
	public:
		int32_t                                                    Seed;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
