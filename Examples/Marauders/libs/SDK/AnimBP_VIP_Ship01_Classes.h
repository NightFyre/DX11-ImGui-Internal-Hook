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
	 * AnimBlueprintGeneratedClass AnimBP_VIP_Ship01.AnimBP_VIP_Ship01_C
	 * Size -> 0x13E1 (FullSize[0x1699] - InheritedSize[0x02B8])
	 */
	class UAnimBP_VIP_Ship01_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_AOLC[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_13;                         // 0x02C8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_12;                         // 0x0348(0x0080)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_12;                       // 0x03C8(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_11;                         // 0x0488(0x0080)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_11;                       // 0x0508(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10;                         // 0x05C8(0x0080)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_10;                       // 0x0648(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x0708(0x0080)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_9;                        // 0x0788(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x0848(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x08C8(0x0080)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_8;                        // 0x0948(0x00C0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_7;                        // 0x0A08(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x0AC8(0x0080)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_6;                        // 0x0B48(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x0C08(0x0080)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_5;                        // 0x0C88(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x0D48(0x0080)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_4;                        // 0x0DC8(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0E88(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0F08(0x0080)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_3;                        // 0x0F88(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x1048(0x0080)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0x10C8(0x00C0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x1188(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x11D0(0x0048)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x1218(0x0030)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x1248(0x0108)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x1350(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x1370(0x0020)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x1390(0x00A0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x1430(0x00E8)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x1518(0x00C0)
		bool                                                       IsDead;                                                  // 0x15D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GJ32[0x3];                                   // 0x15D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DeltaTimeX;                                              // 0x15DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SpeedAsPercentage;                                       // 0x15E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsAccelerating;                                          // 0x15E4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6JMG[0x3];                                   // 0x15E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HealthAs0to1;                                            // 0x15E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AccelerationSpeed;                                       // 0x15EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AccelerationValue;                                       // 0x15F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PreviousSpeed;                                           // 0x15F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LeanAcceleration;                                        // 0x15F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Lean_Direction;                                          // 0x15FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            LastDirectionRotation;                                   // 0x1600(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Speed;                                                   // 0x160C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxSpeedPossible;                                        // 0x1610(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            LastVelocityRotation;                                    // 0x1614(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Moving;                                                  // 0x1620(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_H8OD[0x3];                                   // 0x1621(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Direction;                                               // 0x1624(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Velocity;                                                // 0x1628(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            ActorRotation;                                           // 0x1634(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            BaseAimRotation;                                         // 0x1640(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       b_HullIsDamaged;                                         // 0x164C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1WAO[0x3];                                   // 0x164D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      f_isHullDamaged;                                         // 0x1650(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       b_TurretIsDamaged;                                       // 0x1654(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       b_HelmGunIsDamaged;                                      // 0x1655(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       b_EngineIsDamaged;                                       // 0x1656(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Debug_ShipAnimsToScreen;                                 // 0x1657(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      PlayerInputAxis;                                         // 0x1658(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IputBasedRotationCurrent;                                // 0x165C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SidePistons_Playrate;                                    // 0x1660(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DeckRotate_Playrate;                                     // 0x1664(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EngineBlock_Playrate;                                    // 0x1668(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EngineProngs_Playrate;                                   // 0x166C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EngineSpherePlayrate;                                    // 0x1670(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LargeEngineCylinder_Playrate;                            // 0x1674(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EngineShaking_Playrate;                                  // 0x1678(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RearBrackets_Playrate;                                   // 0x167C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MidShipFlapRots_Playrate;                                // 0x1680(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MidShipRots_Playrate;                                    // 0x1684(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MidShipBracket_Playrate;                                 // 0x1688(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IputBasedUpDownRotationCurrent;                          // 0x168C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PlayerInputUpDownAxis;                                   // 0x1690(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ActorPitch_Amount;                                       // 0x1694(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsServer;                                                // 0x1698(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void GetLeanAndAccelerationValues();
		void GetHealthState();
		void GetSpeed();
		void GetDirection();
		void GetVarsFromPawn();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void DropPodBoosting(bool IsBoosting);
		void PlayerLeftRightInputAxis(float Float);
		void DropPod_Movement(const struct FRotator& RotMovementDelta, int32_t CurrentGear);
		void Shoot(int32_t TurretID);
		void Frigate_Damage_Engine(bool isDamaged);
		void Frigate_Damage_HelmGun(bool isDamaged);
		void Frigate_Damage_Turret(bool isDamaged);
		void Frigate_Damage_Hull(bool isDamaged);
		void DebugShipAnimations(bool ShouldDebugAnimations);
		void Frigate_SpeedAsApercentage(float SpeedAsPercentage, float XY_Speed, float Z_Speed);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_VIP_Ship01_AnimGraphNode_ModifyBone_B6E8F0074EB48D66FD7681A2A78DD1BD();
		void CameraRotation(const struct FRotator& CameraRotation, float RotClamp_Min, float RotClamp_Max, float TurretAnimRotSpeed);
		void GearChange(int32_t WhatGear);
		void Turret_ControlAimPoint(const struct FVector& ControlAimLoc);
		void PlayerUpDownInputAxis(float Float);
		void Ship_ActorPitchAmount(float PitchAmount);
		void DropPodisBreaching(bool isBreaching);
		void ExecuteUbergraph_AnimBP_VIP_Ship01(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
