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
	 * Function DropPodHatch.DropPodHatch_C.UserConstructionScript
	 */
	struct ADropPodHatch_C_UserConstructionScript_Params
	{	};

	/**
	 * Function DropPodHatch.DropPodHatch_C.PodLightingOn__FinishedFunc
	 */
	struct ADropPodHatch_C_PodLightingOn__FinishedFunc_Params
	{	};

	/**
	 * Function DropPodHatch.DropPodHatch_C.PodLightingOn__UpdateFunc
	 */
	struct ADropPodHatch_C_PodLightingOn__UpdateFunc_Params
	{	};

	/**
	 * Function DropPodHatch.DropPodHatch_C.Timeline_0__FinishedFunc
	 */
	struct ADropPodHatch_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function DropPodHatch.DropPodHatch_C.Timeline_0__UpdateFunc
	 */
	struct ADropPodHatch_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function DropPodHatch.DropPodHatch_C.Timeline_1__FinishedFunc
	 */
	struct ADropPodHatch_C_Timeline_1__FinishedFunc_Params
	{	};

	/**
	 * Function DropPodHatch.DropPodHatch_C.Timeline_1__UpdateFunc
	 */
	struct ADropPodHatch_C_Timeline_1__UpdateFunc_Params
	{	};

	/**
	 * Function DropPodHatch.DropPodHatch_C.Timeline_2__FinishedFunc
	 */
	struct ADropPodHatch_C_Timeline_2__FinishedFunc_Params
	{	};

	/**
	 * Function DropPodHatch.DropPodHatch_C.Timeline_2__UpdateFunc
	 */
	struct ADropPodHatch_C_Timeline_2__UpdateFunc_Params
	{	};

	/**
	 * Function DropPodHatch.DropPodHatch_C.Timeline_3__FinishedFunc
	 */
	struct ADropPodHatch_C_Timeline_3__FinishedFunc_Params
	{	};

	/**
	 * Function DropPodHatch.DropPodHatch_C.Timeline_3__UpdateFunc
	 */
	struct ADropPodHatch_C_Timeline_3__UpdateFunc_Params
	{	};

	/**
	 * Function DropPodHatch.DropPodHatch_C.Timeline_4__FinishedFunc
	 */
	struct ADropPodHatch_C_Timeline_4__FinishedFunc_Params
	{	};

	/**
	 * Function DropPodHatch.DropPodHatch_C.Timeline_4__UpdateFunc
	 */
	struct ADropPodHatch_C_Timeline_4__UpdateFunc_Params
	{	};

	/**
	 * Function DropPodHatch.DropPodHatch_C.ReceiveBeginPlay
	 */
	struct ADropPodHatch_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function DropPodHatch.DropPodHatch_C.OnPlayCompAnimNotify
	 */
	struct ADropPodHatch_C_OnPlayCompAnimNotify_Params
	{
	public:
		class USkeletalMeshComponent*                              CompToPlayOn;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                NotifyName;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DropPodHatch.DropPodHatch_C.Using_DropPod01
	 */
	struct ADropPodHatch_C_Using_DropPod01_Params
	{	};

	/**
	 * Function DropPodHatch.DropPodHatch_C.ResetThePod
	 */
	struct ADropPodHatch_C_ResetThePod_Params
	{	};

	/**
	 * Function DropPodHatch.DropPodHatch_C.TriggerDoorCinematicSeq
	 */
	struct ADropPodHatch_C_TriggerDoorCinematicSeq_Params
	{	};

	/**
	 * Function DropPodHatch.DropPodHatch_C.ExecuteUbergraph_DropPodHatch
	 */
	struct ADropPodHatch_C_ExecuteUbergraph_DropPodHatch_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8LQC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
