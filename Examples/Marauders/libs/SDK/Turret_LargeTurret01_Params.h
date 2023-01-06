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
	 * Function Turret_LargeTurret01.Turret_LargeTurret01_C.GearChange
	 */
	struct ATurret_LargeTurret01_C_GearChange_Params
	{
	public:
		int32_t                                                    WhatGear;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Turret_LargeTurret01.Turret_LargeTurret01_C.PlayerPressedZoom
	 */
	struct ATurret_LargeTurret01_C_PlayerPressedZoom_Params
	{	};

	/**
	 * Function Turret_LargeTurret01.Turret_LargeTurret01_C.PlayerUnPressedZoom
	 */
	struct ATurret_LargeTurret01_C_PlayerUnPressedZoom_Params
	{	};

	/**
	 * Function Turret_LargeTurret01.Turret_LargeTurret01_C.DebugShipAnimations
	 */
	struct ATurret_LargeTurret01_C_DebugShipAnimations_Params
	{
	public:
		bool                                                       ShouldDebugAnimations;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Turret_LargeTurret01.Turret_LargeTurret01_C.CameraRotation
	 */
	struct ATurret_LargeTurret01_C_CameraRotation_Params
	{
	public:
		struct FRotator                                            CameraRotation;                                          // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      RotClamp_Min;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RotClamp_Max;                                            // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TurretAnimRotSpeed;                                      // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Turret_LargeTurret01.Turret_LargeTurret01_C.Shoot
	 */
	struct ATurret_LargeTurret01_C_Shoot_Params
	{
	public:
		int32_t                                                    TurretID;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Turret_LargeTurret01.Turret_LargeTurret01_C.PlayerLeftRightInputAxis
	 */
	struct ATurret_LargeTurret01_C_PlayerLeftRightInputAxis_Params
	{
	public:
		float                                                      Float;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Turret_LargeTurret01.Turret_LargeTurret01_C.Frigate_Damage_Engine
	 */
	struct ATurret_LargeTurret01_C_Frigate_Damage_Engine_Params
	{
	public:
		bool                                                       isDamaged;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Turret_LargeTurret01.Turret_LargeTurret01_C.Frigate_Damage_Turret
	 */
	struct ATurret_LargeTurret01_C_Frigate_Damage_Turret_Params
	{
	public:
		bool                                                       isDamaged;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Turret_LargeTurret01.Turret_LargeTurret01_C.Frigate_Damage_HelmGun
	 */
	struct ATurret_LargeTurret01_C_Frigate_Damage_HelmGun_Params
	{
	public:
		bool                                                       isDamaged;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Turret_LargeTurret01.Turret_LargeTurret01_C.FakeZoom
	 */
	struct ATurret_LargeTurret01_C_FakeZoom_Params
	{
	public:
		bool                                                       isZoomed;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Turret_LargeTurret01.Turret_LargeTurret01_C.FiredTurrentEvent
	 */
	struct ATurret_LargeTurret01_C_FiredTurrentEvent_Params
	{
	public:
		int32_t                                                    SocketArrayNum;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Turret_LargeTurret01.Turret_LargeTurret01_C.Frigate_Damage_Hull
	 */
	struct ATurret_LargeTurret01_C_Frigate_Damage_Hull_Params
	{
	public:
		bool                                                       isDamaged;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Turret_LargeTurret01.Turret_LargeTurret01_C.Frigate_SpeedAsApercentage
	 */
	struct ATurret_LargeTurret01_C_Frigate_SpeedAsApercentage_Params
	{
	public:
		float                                                      SpeedAsPercentage;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      XY_Speed;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Z_Speed;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Turret_LargeTurret01.Turret_LargeTurret01_C.PlayerUpDownInputAxis
	 */
	struct ATurret_LargeTurret01_C_PlayerUpDownInputAxis_Params
	{
	public:
		float                                                      Float;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Turret_LargeTurret01.Turret_LargeTurret01_C.ReceiveTick
	 */
	struct ATurret_LargeTurret01_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Turret_LargeTurret01.Turret_LargeTurret01_C.ReceiveBeginPlay
	 */
	struct ATurret_LargeTurret01_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Turret_LargeTurret01.Turret_LargeTurret01_C.Turret_ControlAimPoint
	 */
	struct ATurret_LargeTurret01_C_Turret_ControlAimPoint_Params
	{
	public:
		struct FVector                                             ControlAimLoc;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Turret_LargeTurret01.Turret_LargeTurret01_C.Ship_ActorPitchAmount
	 */
	struct ATurret_LargeTurret01_C_Ship_ActorPitchAmount_Params
	{
	public:
		float                                                      PitchAmount;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Turret_LargeTurret01.Turret_LargeTurret01_C.DropPodisBreaching
	 */
	struct ATurret_LargeTurret01_C_DropPodisBreaching_Params
	{
	public:
		bool                                                       isBreaching;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Turret_LargeTurret01.Turret_LargeTurret01_C.DropPodBoosting
	 */
	struct ATurret_LargeTurret01_C_DropPodBoosting_Params
	{
	public:
		bool                                                       IsBoosting;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Turret_LargeTurret01.Turret_LargeTurret01_C.DropPod_Movement
	 */
	struct ATurret_LargeTurret01_C_DropPod_Movement_Params
	{
	public:
		struct FRotator                                            RotMovementDelta;                                        // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    CurrentGear;                                             // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Turret_LargeTurret01.Turret_LargeTurret01_C.ExecuteUbergraph_Turret_LargeTurret01
	 */
	struct ATurret_LargeTurret01_C_ExecuteUbergraph_Turret_LargeTurret01_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
