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
	 * AnimBlueprintGeneratedClass AnimBP_DropPod01.AnimBP_DropPod01_C
	 * Size -> 0x0D9F (FullSize[0x1057] - InheritedSize[0x02B8])
	 */
	class UAnimBP_DropPod01_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_3DL7[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x02C8(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x0388(0x0080)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_3;                        // 0x0408(0x00E8)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x04F0(0x00C8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_2;                        // 0x05B8(0x00E8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x06A0(0x0080)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x0720(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0768(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_4;                         // 0x07B0(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x0850(0x0080)
		struct FAnimNode_RotateRootBone                            AnimGraphNode_RotateRootBone;                            // 0x08D0(0x00A0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x0970(0x0108)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0A78(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0A98(0x0020)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x0AB8(0x00E8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x0BA0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0C20(0x0080)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0CA0(0x0030)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0x0CD0(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x0D70(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0E10(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0E90(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x0F10(0x00A0)
		float                                                      DeltaTimeX;                                              // 0x0FB0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsDead;                                                  // 0x0FB4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Moving;                                                  // 0x0FB5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsAccelerating;                                          // 0x0FB6(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RUCY[0x1];                                   // 0x0FB7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            LastVelocityRotation;                                    // 0x0FB8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Direction;                                               // 0x0FC4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Speed;                                                   // 0x0FC8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Velocity;                                                // 0x0FCC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            ActorRotation;                                           // 0x0FD8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            BaseAimRotation;                                         // 0x0FE4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      HealthAs0to1;                                            // 0x0FF0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            LastDirectionRotation;                                   // 0x0FF4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Lean_Direction;                                          // 0x1000(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AccelerationSpeed;                                       // 0x1004(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PreviousSpeed;                                           // 0x1008(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AccelerationValue;                                       // 0x100C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LeanAcceleration;                                        // 0x1010(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Debug_ShipAnimsToScreen;                                 // 0x1014(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y93D[0x3];                                   // 0x1015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxSpeedPossible;                                        // 0x1018(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SpeedAsPercentage;                                       // 0x101C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ProngsPlayrate_Target;                                   // 0x1020(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ProngsPlayrate_Current;                                  // 0x1024(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentGear;                                             // 0x1028(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      GearAsFloat;                                             // 0x102C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isGoingUpAGear;                                          // 0x1030(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P3GZ[0x3];                                   // 0x1031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      YawRotationDelta;                                        // 0x1034(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Yaw_Roll_Interped;                                       // 0x1038(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PitchRotationDelta;                                      // 0x103C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PitchRotation_Interped;                                  // 0x1040(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      YawInClampMin;                                           // 0x1044(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      YawInClampMax;                                           // 0x1048(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      YawInterpSpeed;                                          // 0x104C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PitchInterpSpeed;                                        // 0x1050(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsBoosting;                                              // 0x1054(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isBreaching;                                             // 0x1055(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsServer;                                                // 0x1056(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void Get_3ProngsValue();
		void Get_LeanAndAccelerationValues();
		void GetHealthState();
		void Get_Speed();
		void Get_Direction();
		void Get_VarsFromPawn();
		void Frigate_SpeedAsApercentage(float SpeedAsPercentage, float XY_Speed, float Z_Speed);
		void PlayerUpDownInputAxis(float Float);
		void Ship_ActorPitchAmount(float PitchAmount);
		void Turret_ControlAimPoint(const struct FVector& ControlAimLoc);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_DropPod01_AnimGraphNode_ModifyBone_03379852492D8E3E2E81CDBDE131959C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_DropPod01_AnimGraphNode_RotateRootBone_B8579A784B208A16F9EFF79E9308747C();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void Frigate_Damage_Engine(bool isDamaged);
		void DebugShipAnimations(bool ShouldDebugAnimations);
		void GearChange(int32_t WhatGear);
		void PlayerLeftRightInputAxis(float Float);
		void Shoot(int32_t TurretID);
		void CameraRotation(const struct FRotator& CameraRotation, float RotClamp_Min, float RotClamp_Max, float TurretAnimRotSpeed);
		void DropPod_Movement(const struct FRotator& RotMovementDelta, int32_t CurrentGear);
		void Frigate_Damage_Hull(bool isDamaged);
		void Frigate_Damage_HelmGun(bool isDamaged);
		void DropPodBoosting(bool IsBoosting);
		void DropPodisBreaching(bool isBreaching);
		void Frigate_Damage_Turret(bool isDamaged);
		void ExecuteUbergraph_AnimBP_DropPod01(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
