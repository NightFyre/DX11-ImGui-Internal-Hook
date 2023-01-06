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
	 * AnimBlueprintGeneratedClass AnimBP_LightTurret01.AnimBP_LightTurret01_C
	 * Size -> 0x0438 (FullSize[0x06F0] - InheritedSize[0x02B8])
	 */
	class UAnimBP_LightTurret01_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_WCV8[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x02F8(0x00C0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x03B8(0x0048)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0400(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0420(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0440(0x0080)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x04C0(0x00E8)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x05A8(0x0108)
		float                                                      DeltaTimeX;                                              // 0x06B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Yaw_Delayed;                                             // 0x06B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Debug_ShipAnimsToScreen;                                 // 0x06B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SW3J[0x3];                                   // 0x06B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            RotationFromCamera;                                      // 0x06BC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            LastRotation;                                            // 0x06C8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            Cam_RotationDelta;                                       // 0x06D4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      NewPitch;                                                // 0x06E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TurretRotClamp_Max;                                      // 0x06E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TurretRotClamp_Min;                                      // 0x06E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Turret_AnimRotInterpSpeed;                               // 0x06EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

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
		void Turret_ControlAimPoint(const struct FVector& ControlAimLoc);
		void Ship_ActorPitchAmount(float PitchAmount);
		void DropPodisBreaching(bool isBreaching);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_LightTurret01_AnimGraphNode_ModifyBone_4C5D28D14B6015B486BAA5AB389526A3();
		void PlayerLeftRightInputAxis(float Float);
		void GearChange(int32_t WhatGear);
		void ExecuteUbergraph_AnimBP_LightTurret01(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
