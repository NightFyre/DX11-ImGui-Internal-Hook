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
	 * Function BP_Door.BP_Door_C.IsDoorMoving
	 */
	struct ABP_Door_C_IsDoorMoving_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Door.BP_Door_C.IsDoorOpen
	 */
	struct ABP_Door_C_IsDoorOpen_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Door.BP_Door_C.OnRep_Angle
	 */
	struct ABP_Door_C_OnRep_Angle_Params
	{	};

	/**
	 * Function BP_Door.BP_Door_C.OnRep_Rotation
	 */
	struct ABP_Door_C_OnRep_Rotation_Params
	{	};

	/**
	 * Function BP_Door.BP_Door_C.OnRep_Offset
	 */
	struct ABP_Door_C_OnRep_Offset_Params
	{	};

	/**
	 * Function BP_Door.BP_Door_C.OnRep_Mesh
	 */
	struct ABP_Door_C_OnRep_Mesh_Params
	{	};

	/**
	 * Function BP_Door.BP_Door_C.ForceUpdate
	 */
	struct ABP_Door_C_ForceUpdate_Params
	{	};

	/**
	 * Function BP_Door.BP_Door_C.CloseDoor
	 */
	struct ABP_Door_C_CloseDoor_Params
	{
	public:
		bool                                                       Animate;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S15K[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Door.BP_Door_C.OpenDoor
	 */
	struct ABP_Door_C_OpenDoor_Params
	{
	public:
		bool                                                       Animate;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O9F5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Door.BP_Door_C.UserConstructionScript
	 */
	struct ABP_Door_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Door.BP_Door_C.DoorOpen
	 */
	struct ABP_Door_C_DoorOpen_Params
	{	};

	/**
	 * Function BP_Door.BP_Door_C.DoorClose
	 */
	struct ABP_Door_C_DoorClose_Params
	{	};

	/**
	 * Function BP_Door.BP_Door_C.ReceiveTick
	 */
	struct ABP_Door_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Door.BP_Door_C.ToggleDoor
	 */
	struct ABP_Door_C_ToggleDoor_Params
	{	};

	/**
	 * Function BP_Door.BP_Door_C.ReceiveBeginPlay
	 */
	struct ABP_Door_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Door.BP_Door_C.ResetState
	 */
	struct ABP_Door_C_ResetState_Params
	{	};

	/**
	 * Function BP_Door.BP_Door_C.ExecuteUbergraph_BP_Door
	 */
	struct ABP_Door_C_ExecuteUbergraph_BP_Door_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
