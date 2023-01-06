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
	 * Function Base_RaidNode.Base_RaidNode_C.Analytics_Used
	 */
	struct ABase_RaidNode_C_Analytics_Used_Params
	{
	public:
		bool                                                       IsPod;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7T4A[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Base_RaidNode.Base_RaidNode_C.ReturnAreaEntranceMoveToLocation
	 */
	struct ABase_RaidNode_C_ReturnAreaEntranceMoveToLocation_Params
	{
	public:
		class AActor*                                              ShipActor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class URaidDockingComponent*                               DockingCompInteractWith;                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FTransform                                          MoveToTransform;                                         // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
		struct FTransform                                          CameraOffset;                                            // 0x0040(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
		float                                                      BoomLength;                                              // 0x0070(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_RaidNode.Base_RaidNode_C.GetEntranceAreaName
	 */
	struct ABase_RaidNode_C_GetEntranceAreaName_Params
	{
	public:
		class FName                                                AreaName;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_RaidNode.Base_RaidNode_C.ReceiveBeginPlay
	 */
	struct ABase_RaidNode_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Base_RaidNode.Base_RaidNode_C.Analytics_DockingHappened
	 */
	struct ABase_RaidNode_C_Analytics_DockingHappened_Params
	{
	public:
		bool                                                       WasAPod;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Base_RaidNode.Base_RaidNode_C.PlayerIsInPodVisuals
	 */
	struct ABase_RaidNode_C_PlayerIsInPodVisuals_Params
	{
	public:
		bool                                                       isInPod;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Base_RaidNode.Base_RaidNode_C.ExecuteUbergraph_Base_RaidNode
	 */
	struct ABase_RaidNode_C_ExecuteUbergraph_Base_RaidNode_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
