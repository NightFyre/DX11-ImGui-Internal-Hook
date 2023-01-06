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
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.SetAbleToBreach
	 */
	struct AShip_DropPod_Pawn_C_SetAbleToBreach_Params
	{
	public:
		bool                                                       isAllowedToBreach;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M7B4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.Pod_Cinematic_CameraMove
	 */
	struct AShip_DropPod_Pawn_C_Pod_Cinematic_CameraMove_Params
	{	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.SetBoostingVisuals
	 */
	struct AShip_DropPod_Pawn_C_SetBoostingVisuals_Params
	{
	public:
		bool                                                       BoostOn;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6CM2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.SetExtraThrustersLightIntensity
	 */
	struct AShip_DropPod_Pawn_C_SetExtraThrustersLightIntensity_Params
	{	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.ThrusterDirectionalChanges
	 */
	struct AShip_DropPod_Pawn_C_ThrusterDirectionalChanges_Params
	{	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.TurnOnOffNiagaraTrails
	 */
	struct AShip_DropPod_Pawn_C_TurnOnOffNiagaraTrails_Params
	{
	public:
		bool                                                       TurnOn;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.PlayThrusterSounds
	 */
	struct AShip_DropPod_Pawn_C_PlayThrusterSounds_Params
	{
	public:
		bool                                                       TryTurnOn;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.WorkOutExtraThrusterSounds
	 */
	struct AShip_DropPod_Pawn_C_WorkOutExtraThrusterSounds_Params
	{	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.GoingUpThrusterParticle
	 */
	struct AShip_DropPod_Pawn_C_GoingUpThrusterParticle_Params
	{
	public:
		bool                                                       TryTurn_On;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.GoingDownThrusterParticle
	 */
	struct AShip_DropPod_Pawn_C_GoingDownThrusterParticle_Params
	{
	public:
		bool                                                       TryTurn_On;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.WorkOutExtraThrustersOnOff
	 */
	struct AShip_DropPod_Pawn_C_WorkOutExtraThrustersOnOff_Params
	{	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.CalculateRotDifferenceForThrusters
	 */
	struct AShip_DropPod_Pawn_C_CalculateRotDifferenceForThrusters_Params
	{	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.LeftThrusterParticle
	 */
	struct AShip_DropPod_Pawn_C_LeftThrusterParticle_Params
	{
	public:
		bool                                                       TryTurn_On;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.RightThrusterParticle
	 */
	struct AShip_DropPod_Pawn_C_RightThrusterParticle_Params
	{
	public:
		bool                                                       TryTurn_On;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.CameraRotationOnMouseMove
	 */
	struct AShip_DropPod_Pawn_C_CameraRotationOnMouseMove_Params
	{	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.AdjustBoomLength
	 */
	struct AShip_DropPod_Pawn_C_AdjustBoomLength_Params
	{	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.UserConstructionScript
	 */
	struct AShip_DropPod_Pawn_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.Timeline_0__FinishedFunc
	 */
	struct AShip_DropPod_Pawn_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.Timeline_0__UpdateFunc
	 */
	struct AShip_DropPod_Pawn_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.Timeline_1__FinishedFunc
	 */
	struct AShip_DropPod_Pawn_C_Timeline_1__FinishedFunc_Params
	{	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.Timeline_1__UpdateFunc
	 */
	struct AShip_DropPod_Pawn_C_Timeline_1__UpdateFunc_Params
	{	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.InpActEvt_N_K2Node_InputKeyEvent_3
	 */
	struct AShip_DropPod_Pawn_C_InpActEvt_N_K2Node_InputKeyEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_2
	 */
	struct AShip_DropPod_Pawn_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1
	 */
	struct AShip_DropPod_Pawn_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.ChangedGear
	 */
	struct AShip_DropPod_Pawn_C_ChangedGear_Params
	{
	public:
		int32_t                                                    NewGear;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 */
	struct AShip_DropPod_Pawn_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.ReceiveTick
	 */
	struct AShip_DropPod_Pawn_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.PawnTakenDamage
	 */
	struct AShip_DropPod_Pawn_C_PawnTakenDamage_Params
	{
	public:
		float                                                      DamageTaken;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G7FR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class APawn*                                               PawnInstigator;                                          // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.ReceiveBeginPlay
	 */
	struct AShip_DropPod_Pawn_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_2
	 */
	struct AShip_DropPod_Pawn_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_2_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.Turret_ControlAimPoint
	 */
	struct AShip_DropPod_Pawn_C_Turret_ControlAimPoint_Params
	{
	public:
		struct FVector                                             ControlAimLoc;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.Ship_ActorPitchAmount
	 */
	struct AShip_DropPod_Pawn_C_Ship_ActorPitchAmount_Params
	{
	public:
		float                                                      PitchAmount;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.DropPodisBreaching
	 */
	struct AShip_DropPod_Pawn_C_DropPodisBreaching_Params
	{
	public:
		bool                                                       isBreaching;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.DropPodBoosting
	 */
	struct AShip_DropPod_Pawn_C_DropPodBoosting_Params
	{
	public:
		bool                                                       IsBoosting;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3
	 */
	struct AShip_DropPod_Pawn_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.DropPod_Movement
	 */
	struct AShip_DropPod_Pawn_C_DropPod_Movement_Params
	{
	public:
		struct FRotator                                            RotMovementDelta;                                        // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    CurrentGear;                                             // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.PlayerUpDownInputAxis
	 */
	struct AShip_DropPod_Pawn_C_PlayerUpDownInputAxis_Params
	{
	public:
		float                                                      Float;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.Frigate_SpeedAsApercentage
	 */
	struct AShip_DropPod_Pawn_C_Frigate_SpeedAsApercentage_Params
	{
	public:
		float                                                      SpeedAsPercentage;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      XY_Speed;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Z_Speed;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.Frigate_Damage_Hull
	 */
	struct AShip_DropPod_Pawn_C_Frigate_Damage_Hull_Params
	{
	public:
		bool                                                       isDamaged;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.BoostEffectEvent
	 */
	struct AShip_DropPod_Pawn_C_BoostEffectEvent_Params
	{	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.Frigate_Damage_HelmGun
	 */
	struct AShip_DropPod_Pawn_C_Frigate_Damage_HelmGun_Params
	{
	public:
		bool                                                       isDamaged;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.Frigate_Damage_Turret
	 */
	struct AShip_DropPod_Pawn_C_Frigate_Damage_Turret_Params
	{
	public:
		bool                                                       isDamaged;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.Frigate_Damage_Engine
	 */
	struct AShip_DropPod_Pawn_C_Frigate_Damage_Engine_Params
	{
	public:
		bool                                                       isDamaged;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.PlayerLeftRightInputAxis
	 */
	struct AShip_DropPod_Pawn_C_PlayerLeftRightInputAxis_Params
	{
	public:
		float                                                      Float;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.Shoot
	 */
	struct AShip_DropPod_Pawn_C_Shoot_Params
	{
	public:
		int32_t                                                    TurretID;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.CameraRotation
	 */
	struct AShip_DropPod_Pawn_C_CameraRotation_Params
	{
	public:
		struct FRotator                                            CameraRotation;                                          // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      RotClamp_Min;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RotClamp_Max;                                            // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TurretAnimRotSpeed;                                      // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.GearChange
	 */
	struct AShip_DropPod_Pawn_C_GearChange_Params
	{
	public:
		int32_t                                                    WhatGear;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.DebugShipAnimations
	 */
	struct AShip_DropPod_Pawn_C_DebugShipAnimations_Params
	{
	public:
		bool                                                       ShouldDebugAnimations;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.Trigger_PodCameraMove
	 */
	struct AShip_DropPod_Pawn_C_Trigger_PodCameraMove_Params
	{
	public:
		struct FVector                                             FromSocketOffset;                                        // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            FromRotation;                                            // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ToSocketOffset;                                          // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            ToRotation;                                              // 0x0024(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ToBoomLength;                                            // 0x0030(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.AttachDropPodToShip
	 */
	struct AShip_DropPod_Pawn_C_AttachDropPodToShip_Params
	{	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.isBreaching
	 */
	struct AShip_DropPod_Pawn_C_isBreaching_Params
	{	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.IsEnteringArea
	 */
	struct AShip_DropPod_Pawn_C_IsEnteringArea_Params
	{	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.Force_DropPodGearChange
	 */
	struct AShip_DropPod_Pawn_C_Force_DropPodGearChange_Params
	{
	public:
		int32_t                                                    NewGearToUse;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.Timed_BreachCheck
	 */
	struct AShip_DropPod_Pawn_C_Timed_BreachCheck_Params
	{	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.ForceDropBoostingEffectForBreach
	 */
	struct AShip_DropPod_Pawn_C_ForceDropBoostingEffectForBreach_Params
	{	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.BreachingEffects_Part1_Movement
	 */
	struct AShip_DropPod_Pawn_C_BreachingEffects_Part1_Movement_Params
	{
	public:
		bool                                                       PlayBreachEffects;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_4
	 */
	struct AShip_DropPod_Pawn_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_4_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_5
	 */
	struct AShip_DropPod_Pawn_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_5_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.OnFaceRotation
	 */
	struct AShip_DropPod_Pawn_C_OnFaceRotation_Params
	{
	public:
		struct FRotator                                            NewRotation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.ReceiveAnyDamage
	 */
	struct AShip_DropPod_Pawn_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YYRY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.DropPodHasTakenDamage
	 */
	struct AShip_DropPod_Pawn_C_DropPodHasTakenDamage_Params
	{
	public:
		float                                                      DamageAmount;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Direction;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.ExecuteUbergraph_Ship_DropPod_Pawn
	 */
	struct AShip_DropPod_Pawn_C_ExecuteUbergraph_Ship_DropPod_Pawn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
