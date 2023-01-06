#pragma once

/**
 * Name: RaidGame
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * AnimBlueprintGeneratedClass AnimBP_StarterShipLight01.AnimBP_StarterShipLight01_C
	 * Size -> 0x0F71 (FullSize[0x1229] - InheritedSize[0x02B8])
	 */
	class UAnimBP_StarterShipLight01_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_D5L1[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_3;                        // 0x02C8(0x00E8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x03B0(0x0080)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_3;                        // 0x0430(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x04F0(0x0080)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x0570(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x05B8(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0x0600(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x06C0(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x0740(0x00A0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_2;                        // 0x07E0(0x00E8)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x08C8(0x00C8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x0990(0x0080)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x0A10(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x0B68(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0B90(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0C10(0x0080)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x0C90(0x0108)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x0D98(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x0DB8(0x0020)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x0DD8(0x00E8)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x0EC0(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0F80(0x0080)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x1000(0x0108)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x1108(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x1128(0x0020)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x1148(0x0030)
		float                                                      Lean_Direction;                                          // 0x1178(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            LastDirectionRotation;                                   // 0x117C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DeltaTimeX;                                              // 0x1188(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AccelerationValue;                                       // 0x118C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PreviousSpeed;                                           // 0x1190(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AccelerationSpeed;                                       // 0x1194(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LeanAcceleration;                                        // 0x1198(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsDead;                                                  // 0x119C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3O8C[0x3];                                   // 0x119D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      f_isHullDamaged;                                         // 0x11A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SpeedAsPercentage;                                       // 0x11A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       b_EngineIsDamaged;                                       // 0x11A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NXLB[0x3];                                   // 0x11A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      IputBasedRotationCurrent;                                // 0x11AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PlayerInputAxis;                                         // 0x11B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Direction;                                               // 0x11B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       b_HullIsDamaged;                                         // 0x11B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LS48[0x3];                                   // 0x11B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Velocity;                                                // 0x11BC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            ActorRotation;                                           // 0x11C8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            BaseAimRotation;                                         // 0x11D4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxSpeedPossible;                                        // 0x11E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            LastVelocityRotation;                                    // 0x11E4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Moving;                                                  // 0x11F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsAccelerating;                                          // 0x11F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_W4GB[0x2];                                   // 0x11F2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Speed;                                                   // 0x11F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HealthAs0to1;                                            // 0x11F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SideExhausts_Speed;                                      // 0x11FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TopEnginesRot_Speed;                                     // 0x1200(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MainEngineRotSpeed;                                      // 0x1204(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MainEngineThrottlePower;                                 // 0x1208(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TopRearEnginesRot01;                                     // 0x120C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TopEngineExhaustSpeed;                                   // 0x1210(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       b_HelmGunIsDamaged;                                      // 0x1214(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       b_TurretIsDamaged;                                       // 0x1215(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Debug_ShipAnimsToScreen;                                 // 0x1216(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DM1X[0x1];                                   // 0x1217(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Test_UpDownAnims;                                        // 0x1218(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IputBasedUpDownRotationCurrent;                          // 0x121C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PlayerInputUpDownAxis;                                   // 0x1220(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ActorPitch_Amount;                                       // 0x1224(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsServer;                                                // 0x1228(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void GetLeanAndAccelerationValues();
		void GetHealthState();
		void GetSpeed();
		void GetDirection();
		void GetVarsFromPawn();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void DropPodisBreaching(bool isBreaching);
		void PlayerLeftRightInputAxis(float Float);
		void DropPodBoosting(bool IsBoosting);
		void DropPod_Movement(const struct FRotator& RotMovementDelta, int32_t CurrentGear);
		void Frigate_Damage_Engine(bool isDamaged);
		void Frigate_Damage_HelmGun(bool isDamaged);
		void Frigate_Damage_Turret(bool isDamaged);
		void Frigate_Damage_Hull(bool isDamaged);
		void DebugShipAnimations(bool ShouldDebugAnimations);
		void Frigate_SpeedAsApercentage(float SpeedAsPercentage, float XY_Speed, float Z_Speed);
		void Shoot(int32_t TurretID);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_StarterShipLight01_AnimGraphNode_ModifyBone_E7F5FFEB4202F11210781480AE25C655();
		void CameraRotation(const struct FRotator& CameraRotation, float RotClamp_Min, float RotClamp_Max, float TurretAnimRotSpeed);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_StarterShipLight01_AnimGraphNode_ModifyBone_6CC114294DF9A71E5C877FA09E5020E2();
		void GearChange(int32_t WhatGear);
		void PlayerUpDownInputAxis(float Float);
		void Ship_ActorPitchAmount(float PitchAmount);
		void Turret_ControlAimPoint(const struct FVector& ControlAimLoc);
		void ExecuteUbergraph_AnimBP_StarterShipLight01(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
