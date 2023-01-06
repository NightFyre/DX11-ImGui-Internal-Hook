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
	 * Function TargetAnimations.TargetAnimations_C.AnimGraph
	 */
	struct UTargetAnimations_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function TargetAnimations.TargetAnimations_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TargetAnimations_AnimGraphNode_ModifyBone_81D9975142E368A80BC1549F0FF8892D
	 */
	struct UTargetAnimations_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TargetAnimations_AnimGraphNode_ModifyBone_81D9975142E368A80BC1549F0FF8892D_Params
	{	};

	/**
	 * Function TargetAnimations.TargetAnimations_C.BlueprintUpdateAnimation
	 */
	struct UTargetAnimations_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TargetAnimations.TargetAnimations_C.ExecuteUbergraph_TargetAnimations
	 */
	struct UTargetAnimations_C_ExecuteUbergraph_TargetAnimations_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
