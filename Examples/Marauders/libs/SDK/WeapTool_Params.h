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
	 * Function WeapTool.WeapTool_C.GetToolSkeletalMesh
	 */
	struct AWeapTool_C_GetToolSkeletalMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              SkelMesh;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeapTool.WeapTool_C.BrokenWeaponEvent
	 */
	struct AWeapTool_C_BrokenWeaponEvent_Params
	{	};

	/**
	 * Function WeapTool.WeapTool_C.ExecuteUbergraph_WeapTool
	 */
	struct AWeapTool_C_ExecuteUbergraph_WeapTool_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
