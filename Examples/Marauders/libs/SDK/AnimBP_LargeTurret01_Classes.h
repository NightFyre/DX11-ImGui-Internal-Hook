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
	 * AnimBlueprintGeneratedClass AnimBP_LargeTurret01.AnimBP_LargeTurret01_C
	 * Size -> 0x05B8 (FullSize[0x0870] - InheritedSize[0x02B8])
	 */
	class UAnimBP_LargeTurret01_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_TWZP[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x02F8(0x0080)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x0378(0x00C0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x0438(0x00E8)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0520(0x0048)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x0568(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x06C0(0x0028)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x06E8(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x0708(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0810(0x0020)
		bool                                                       Debug_ShipAnimsToScreen;                                 // 0x0830(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WWNJ[0x3];                                   // 0x0831(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            RotationFromCamera;                                      // 0x0834(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DeltaTimeX;                                              // 0x0840(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Yaw_Delayed;                                             // 0x0844(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            LastRotation;                                            // 0x0848(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      NewPitch;                                                // 0x0854(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TurretRotClamp_Min;                                      // 0x0858(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TurretRotClamp_Max;                                      // 0x085C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Turret_Control_Aim_Loc;                                  // 0x0860(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Turret_AnimRotInterpSpeed;                               // 0x086C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void DebugShipAnimations(bool ShouldDebugAnimations);
		void DropPodBoosting(bool IsBoosting);
		void CameraRotation(const struct FRotator& CameraRotation, float RotClamp_Min, float RotClamp_Max, float TurretAnimRotSpeed);
		void DropPod_Movement(const struct FRotator& RotMovementDelta, int32_t CurrentGear);
		void PlayerUpDownInputAxis(float Float);
		void Frigate_SpeedAsApercentage(float SpeedAsPercentage, float XY_Speed, float Z_Speed);
		void Frigate_Damage_Hull(bool isDamaged);
		void Frigate_Damage_HelmGun(bool isDamaged);
		void Shoot(int32_t TurretID);
		void Frigate_Damage_Turret(bool isDamaged);
		void Frigate_Damage_Engine(bool isDamaged);
		void Ship_ActorPitchAmount(float PitchAmount);
		void Turret_ControlAimPoint(const struct FVector& ControlAimLoc);
		void DropPodisBreaching(bool isBreaching);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_LargeTurret01_AnimGraphNode_ModifyBone_2A229ABC44A67F66A9A35E98C308B095();
		void PlayerLeftRightInputAxis(float Float);
		void GearChange(int32_t WhatGear);
		void ExecuteUbergraph_AnimBP_LargeTurret01(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
