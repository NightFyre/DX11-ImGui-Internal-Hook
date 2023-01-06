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
	 * Function Ship_StarterFrigate01_Pawn.Ship_StarterFrigate01_Pawn_C.NiagaraTrails_OnOff
	 */
	struct AShip_StarterFrigate01_Pawn_C_NiagaraTrails_OnOff_Params
	{	};

	/**
	 * Function Ship_StarterFrigate01_Pawn.Ship_StarterFrigate01_Pawn_C.Ship_ForwardSpeed
	 */
	struct AShip_StarterFrigate01_Pawn_C_Ship_ForwardSpeed_Params
	{
	public:
		float                                                      ForwardSpeed;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ship_StarterFrigate01_Pawn.Ship_StarterFrigate01_Pawn_C.Thrusters_UpDown_OnOff
	 */
	struct AShip_StarterFrigate01_Pawn_C_Thrusters_UpDown_OnOff_Params
	{	};

	/**
	 * Function Ship_StarterFrigate01_Pawn.Ship_StarterFrigate01_Pawn_C.Thrusters_LeftRight_OnOff
	 */
	struct AShip_StarterFrigate01_Pawn_C_Thrusters_LeftRight_OnOff_Params
	{	};

	/**
	 * Function Ship_StarterFrigate01_Pawn.Ship_StarterFrigate01_Pawn_C.CinematicMoveFrigateCamera
	 */
	struct AShip_StarterFrigate01_Pawn_C_CinematicMoveFrigateCamera_Params
	{	};

	/**
	 * Function Ship_StarterFrigate01_Pawn.Ship_StarterFrigate01_Pawn_C.ThrustersDirectionalChanges
	 */
	struct AShip_StarterFrigate01_Pawn_C_ThrustersDirectionalChanges_Params
	{	};

	/**
	 * Function Ship_StarterFrigate01_Pawn.Ship_StarterFrigate01_Pawn_C.GoingUpThrusterParticle
	 */
	struct AShip_StarterFrigate01_Pawn_C_GoingUpThrusterParticle_Params
	{
	public:
		bool                                                       TryTurnOn;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ship_StarterFrigate01_Pawn.Ship_StarterFrigate01_Pawn_C.GoingDownThrusterParticle
	 */
	struct AShip_StarterFrigate01_Pawn_C_GoingDownThrusterParticle_Params
	{
	public:
		bool                                                       TryTurnOn;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ship_StarterFrigate01_Pawn.Ship_StarterFrigate01_Pawn_C.DamageEffects_ShipHull
	 */
	struct AShip_StarterFrigate01_Pawn_C_DamageEffects_ShipHull_Params
	{
	public:
		float                                                      DamageAmount_Percent;                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ship_StarterFrigate01_Pawn.Ship_StarterFrigate01_Pawn_C.DamageEffects_HelmGun
	 */
	struct AShip_StarterFrigate01_Pawn_C_DamageEffects_HelmGun_Params
	{
	public:
		bool                                                       TurnOn;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BRPX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ship_StarterFrigate01_Pawn.Ship_StarterFrigate01_Pawn_C.DamageEffects_Engine
	 */
	struct AShip_StarterFrigate01_Pawn_C_DamageEffects_Engine_Params
	{
	public:
		bool                                                       TurnOn;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AF42[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ship_StarterFrigate01_Pawn.Ship_StarterFrigate01_Pawn_C.DamageEffects_Turret
	 */
	struct AShip_StarterFrigate01_Pawn_C_DamageEffects_Turret_Params
	{
	public:
		bool                                                       TurnOn;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BE27[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ship_StarterFrigate01_Pawn.Ship_StarterFrigate01_Pawn_C.AdjustBoomLength
	 */
	struct AShip_StarterFrigate01_Pawn_C_AdjustBoomLength_Params
	{	};

	/**
	 * Function Ship_StarterFrigate01_Pawn.Ship_StarterFrigate01_Pawn_C.PlayLeftRightThrusterSound
	 */
	struct AShip_StarterFrigate01_Pawn_C_PlayLeftRightThrusterSound_Params
	{
	public:
		bool                                                       TryTurnOn;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ship_StarterFrigate01_Pawn.Ship_StarterFrigate01_Pawn_C.SetMainThrusterParticle
	 */
	struct AShip_StarterFrigate01_Pawn_C_SetMainThrusterParticle_Params
	{
	public:
		bool                                                       TryTurnOn;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NVJ9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ship_StarterFrigate01_Pawn.Ship_StarterFrigate01_Pawn_C.ActivateSubThrusters
	 */
	struct AShip_StarterFrigate01_Pawn_C_ActivateSubThrusters_Params
	{
	public:
		bool                                                       TryTurnOn;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ship_StarterFrigate01_Pawn.Ship_StarterFrigate01_Pawn_C.LeftThrusterParticle
	 */
	struct AShip_StarterFrigate01_Pawn_C_LeftThrusterParticle_Params
	{
	public:
		bool                                                       TryTurnOn;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ship_StarterFrigate01_Pawn.Ship_StarterFrigate01_Pawn_C.RightThrusterParticle
	 */
	struct AShip_StarterFrigate01_Pawn_C_RightThrusterParticle_Params
	{
	public:
		bool                                                       TryTurnOn;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ship_StarterFrigate01_Pawn.Ship_StarterFrigate01_Pawn_C.Timeline_0__FinishedFunc
	 */
	struct AShip_StarterFrigate01_Pawn_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function Ship_StarterFrigate01_Pawn.Ship_StarterFrigate01_Pawn_C.Timeline_0__UpdateFunc
	 */
	struct AShip_StarterFrigate01_Pawn_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function Ship_StarterFrigate01_Pawn.Ship_StarterFrigate01_Pawn_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_3
	 */
	struct AShip_StarterFrigate01_Pawn_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Ship_StarterFrigate01_Pawn.Ship_StarterFrigate01_Pawn_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_2
	 */
	struct AShip_StarterFrigate01_Pawn_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Ship_StarterFrigate01_Pawn.Ship_StarterFrigate01_Pawn_C.InpActEvt_N_K2Node_InputKeyEvent_1
	 */
	struct AShip_StarterFrigate01_Pawn_C_InpActEvt_N_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Ship_StarterFrigate01_Pawn.Ship_StarterFrigate01_Pawn_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_1
	 */
	struct AShip_StarterFrigate01_Pawn_C_InpAxisEvt_MoveUp_K2Node_InputAxisEvent_1_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ship_StarterFrigate01_Pawn.Ship_StarterFrigate01_Pawn_C.BndEvt__RaidUseableFrigatePodDock1_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 */
	struct AShip_StarterFrigate01_Pawn_C_BndEvt__RaidUseableFrigatePodDock1_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Ship_StarterFrigate01_Pawn.Ship_StarterFrigate01_Pawn_C.BndEvt__RaidUseableFrigatePodDock_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
	 */
	struct AShip_StarterFrigate01_Pawn_C_BndEvt__RaidUseableFrigatePodDock_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Ship_StarterFrigate01_Pawn.Ship_StarterFrigate01_Pawn_C.ReceiveTick
	 */
	struct AShip_StarterFrigate01_Pawn_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ship_StarterFrigate01_Pawn.Ship_StarterFrigate01_Pawn_C.ReceiveBeginPlay
	 */
	struct AShip_StarterFrigate01_Pawn_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Ship_StarterFrigate01_Pawn.Ship_StarterFrigate01_Pawn_C.InitialCheck_TurningHard
	 */
	struct AShip_StarterFrigate01_Pawn_C_InitialCheck_TurningHard_Params
	{	};

	/**
	 * Function Ship_StarterFrigate01_Pawn.Ship_StarterFrigate01_Pawn_C.PlayAHardTurnSound
	 */
	struct AShip_StarterFrigate01_Pawn_C_PlayAHardTurnSound_Params
	{	};

	/**
	 * Function Ship_StarterFrigate01_Pawn.Ship_StarterFrigate01_Pawn_C.ShipHealthCheck
	 */
	struct AShip_StarterFrigate01_Pawn_C_ShipHealthCheck_Params
	{	};

	/**
	 * Function Ship_StarterFrigate01_Pawn.Ship_StarterFrigate01_Pawn_C.Trigger_FrigateCinematicCameraMove
	 */
	struct AShip_StarterFrigate01_Pawn_C_Trigger_FrigateCinematicCameraMove_Params
	{
	public:
		struct FTransform                                          ToSocketOffset;                                          // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FRotator                                            ToRotation;                                              // 0x0030(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ToBoomLength;                                            // 0x003C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ship_StarterFrigate01_Pawn.Ship_StarterFrigate01_Pawn_C.Frigate_IsEnteringArea
	 */
	struct AShip_StarterFrigate01_Pawn_C_Frigate_IsEnteringArea_Params
	{	};

	/**
	 * Function Ship_StarterFrigate01_Pawn.Ship_StarterFrigate01_Pawn_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_4
	 */
	struct AShip_StarterFrigate01_Pawn_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_4_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ship_StarterFrigate01_Pawn.Ship_StarterFrigate01_Pawn_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_5
	 */
	struct AShip_StarterFrigate01_Pawn_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_5_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ship_StarterFrigate01_Pawn.Ship_StarterFrigate01_Pawn_C.OnFaceRotation
	 */
	struct AShip_StarterFrigate01_Pawn_C_OnFaceRotation_Params
	{
	public:
		struct FRotator                                            NewRotation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ship_StarterFrigate01_Pawn.Ship_StarterFrigate01_Pawn_C.PawnTakenDamage
	 */
	struct AShip_StarterFrigate01_Pawn_C_PawnTakenDamage_Params
	{
	public:
		float                                                      DamageTaken;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BCK9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class APawn*                                               PawnInstigator;                                          // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ship_StarterFrigate01_Pawn.Ship_StarterFrigate01_Pawn_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3
	 */
	struct AShip_StarterFrigate01_Pawn_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ship_StarterFrigate01_Pawn.Ship_StarterFrigate01_Pawn_C.ReceiveAnyDamage
	 */
	struct AShip_StarterFrigate01_Pawn_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7AAD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ship_StarterFrigate01_Pawn.Ship_StarterFrigate01_Pawn_C.ShipTakeDamage
	 */
	struct AShip_StarterFrigate01_Pawn_C_ShipTakeDamage_Params
	{
	public:
		float                                                      DamageAmount;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Direction;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ship_StarterFrigate01_Pawn.Ship_StarterFrigate01_Pawn_C.ExecuteUbergraph_Ship_StarterFrigate01_Pawn
	 */
	struct AShip_StarterFrigate01_Pawn_C_ExecuteUbergraph_Ship_StarterFrigate01_Pawn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
