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
	 * Function PoolProjBullet.PoolProjBullet_C.OnPoolDeactive
	 */
	struct APoolProjBullet_C_OnPoolDeactive_Params
	{	};

	/**
	 * Function PoolProjBullet.PoolProjBullet_C.OnPoolActive
	 */
	struct APoolProjBullet_C_OnPoolActive_Params
	{	};

	/**
	 * Function PoolProjBullet.PoolProjBullet_C.ReceiveTick
	 */
	struct APoolProjBullet_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PoolProjBullet.PoolProjBullet_C.ExecuteUbergraph_PoolProjBullet
	 */
	struct APoolProjBullet_C_ExecuteUbergraph_PoolProjBullet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
