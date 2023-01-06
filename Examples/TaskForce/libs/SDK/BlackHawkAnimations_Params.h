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
	 * Function BlackHawkAnimations.BlackHawkAnimations_C.AnimGraph
	 */
	struct UBlackHawkAnimations_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function BlackHawkAnimations.BlackHawkAnimations_C.UpdateRotationBasedUponSpeed
	 */
	struct UBlackHawkAnimations_C_UpdateRotationBasedUponSpeed_Params
	{
	public:
		struct FRotator                                            InRotation;                                              // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Speed;                                                   // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ERotorRotation                                             Axis;                                                    // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E20C[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            OutRotation;                                             // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BlackHawkAnimations.BlackHawkAnimations_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BlackHawkAnimations_AnimGraphNode_ModifyBone_8B194FB840CC403D1A70DD95BA7E441C
	 */
	struct UBlackHawkAnimations_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BlackHawkAnimations_AnimGraphNode_ModifyBone_8B194FB840CC403D1A70DD95BA7E441C_Params
	{	};

	/**
	 * Function BlackHawkAnimations.BlackHawkAnimations_C.BlueprintUpdateAnimation
	 */
	struct UBlackHawkAnimations_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BlackHawkAnimations.BlackHawkAnimations_C.ExecuteUbergraph_BlackHawkAnimations
	 */
	struct UBlackHawkAnimations_C_ExecuteUbergraph_BlackHawkAnimations_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RSCT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
