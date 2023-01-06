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
	 * Function AnimBP_CapitalShip.AnimBP_CapitalShip_C.AnimGraph
	 */
	struct UAnimBP_CapitalShip_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function AnimBP_CapitalShip.AnimBP_CapitalShip_C.GetLeanAndAccelerationValues
	 */
	struct UAnimBP_CapitalShip_C_GetLeanAndAccelerationValues_Params
	{	};

	/**
	 * Function AnimBP_CapitalShip.AnimBP_CapitalShip_C.GetHealthState
	 */
	struct UAnimBP_CapitalShip_C_GetHealthState_Params
	{	};

	/**
	 * Function AnimBP_CapitalShip.AnimBP_CapitalShip_C.GetSpeed
	 */
	struct UAnimBP_CapitalShip_C_GetSpeed_Params
	{	};

	/**
	 * Function AnimBP_CapitalShip.AnimBP_CapitalShip_C.GetDirection
	 */
	struct UAnimBP_CapitalShip_C_GetDirection_Params
	{	};

	/**
	 * Function AnimBP_CapitalShip.AnimBP_CapitalShip_C.GetVarsFromPawn
	 */
	struct UAnimBP_CapitalShip_C_GetVarsFromPawn_Params
	{	};

	/**
	 * Function AnimBP_CapitalShip.AnimBP_CapitalShip_C.BlueprintUpdateAnimation
	 */
	struct UAnimBP_CapitalShip_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AnimBP_CapitalShip.AnimBP_CapitalShip_C.DropPodBoosting
	 */
	struct UAnimBP_CapitalShip_C_DropPodBoosting_Params
	{
	public:
		bool                                                       IsBoosting;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AnimBP_CapitalShip.AnimBP_CapitalShip_C.PlayerLeftRightInputAxis
	 */
	struct UAnimBP_CapitalShip_C_PlayerLeftRightInputAxis_Params
	{
	public:
		float                                                      Float;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AnimBP_CapitalShip.AnimBP_CapitalShip_C.DropPod_Movement
	 */
	struct UAnimBP_CapitalShip_C_DropPod_Movement_Params
	{
	public:
		struct FRotator                                            RotMovementDelta;                                        // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    CurrentGear;                                             // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AnimBP_CapitalShip.AnimBP_CapitalShip_C.Shoot
	 */
	struct UAnimBP_CapitalShip_C_Shoot_Params
	{
	public:
		int32_t                                                    TurretID;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AnimBP_CapitalShip.AnimBP_CapitalShip_C.Frigate_Damage_Engine
	 */
	struct UAnimBP_CapitalShip_C_Frigate_Damage_Engine_Params
	{
	public:
		bool                                                       isDamaged;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AnimBP_CapitalShip.AnimBP_CapitalShip_C.Frigate_Damage_HelmGun
	 */
	struct UAnimBP_CapitalShip_C_Frigate_Damage_HelmGun_Params
	{
	public:
		bool                                                       isDamaged;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AnimBP_CapitalShip.AnimBP_CapitalShip_C.Frigate_Damage_Turret
	 */
	struct UAnimBP_CapitalShip_C_Frigate_Damage_Turret_Params
	{
	public:
		bool                                                       isDamaged;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AnimBP_CapitalShip.AnimBP_CapitalShip_C.Frigate_Damage_Hull
	 */
	struct UAnimBP_CapitalShip_C_Frigate_Damage_Hull_Params
	{
	public:
		bool                                                       isDamaged;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AnimBP_CapitalShip.AnimBP_CapitalShip_C.DebugShipAnimations
	 */
	struct UAnimBP_CapitalShip_C_DebugShipAnimations_Params
	{
	public:
		bool                                                       ShouldDebugAnimations;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AnimBP_CapitalShip.AnimBP_CapitalShip_C.Frigate_SpeedAsApercentage
	 */
	struct UAnimBP_CapitalShip_C_Frigate_SpeedAsApercentage_Params
	{
	public:
		float                                                      SpeedAsPercentage;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      XY_Speed;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Z_Speed;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AnimBP_CapitalShip.AnimBP_CapitalShip_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_CapitalShip_AnimGraphNode_ModifyBone_A81A735F4FB433E137A94C9932C76C18
	 */
	struct UAnimBP_CapitalShip_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_CapitalShip_AnimGraphNode_ModifyBone_A81A735F4FB433E137A94C9932C76C18_Params
	{	};

	/**
	 * Function AnimBP_CapitalShip.AnimBP_CapitalShip_C.CameraRotation
	 */
	struct UAnimBP_CapitalShip_C_CameraRotation_Params
	{
	public:
		struct FRotator                                            CameraRotation;                                          // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      RotClamp_Min;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RotClamp_Max;                                            // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TurretAnimRotSpeed;                                      // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AnimBP_CapitalShip.AnimBP_CapitalShip_C.Turret_ControlAimPoint
	 */
	struct UAnimBP_CapitalShip_C_Turret_ControlAimPoint_Params
	{
	public:
		struct FVector                                             ControlAimLoc;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AnimBP_CapitalShip.AnimBP_CapitalShip_C.GearChange
	 */
	struct UAnimBP_CapitalShip_C_GearChange_Params
	{
	public:
		int32_t                                                    WhatGear;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AnimBP_CapitalShip.AnimBP_CapitalShip_C.PlayerUpDownInputAxis
	 */
	struct UAnimBP_CapitalShip_C_PlayerUpDownInputAxis_Params
	{
	public:
		float                                                      Float;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AnimBP_CapitalShip.AnimBP_CapitalShip_C.Ship_ActorPitchAmount
	 */
	struct UAnimBP_CapitalShip_C_Ship_ActorPitchAmount_Params
	{
	public:
		float                                                      PitchAmount;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AnimBP_CapitalShip.AnimBP_CapitalShip_C.DropPodisBreaching
	 */
	struct UAnimBP_CapitalShip_C_DropPodisBreaching_Params
	{
	public:
		bool                                                       isBreaching;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AnimBP_CapitalShip.AnimBP_CapitalShip_C.ExecuteUbergraph_AnimBP_CapitalShip
	 */
	struct UAnimBP_CapitalShip_C_ExecuteUbergraph_AnimBP_CapitalShip_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
