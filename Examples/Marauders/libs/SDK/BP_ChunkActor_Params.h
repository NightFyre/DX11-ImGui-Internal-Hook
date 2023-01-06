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
	 * Function BP_ChunkActor.BP_ChunkActor_C.UserConstructionScript
	 */
	struct ABP_ChunkActor_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_ChunkActor.BP_ChunkActor_C.ReceiveBeginPlay
	 */
	struct ABP_ChunkActor_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_ChunkActor.BP_ChunkActor_C.ExecuteUbergraph_BP_ChunkActor
	 */
	struct ABP_ChunkActor_C_ExecuteUbergraph_BP_ChunkActor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
