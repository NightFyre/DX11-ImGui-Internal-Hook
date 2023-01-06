#pragma once

/**
 * Name: Task_Force
 * Version: 0.3.6.1537
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
	 * AnimBlueprintGeneratedClass BlackHawkAnimations.BlackHawkAnimations_C
	 * Size -> 0x04BC (FullSize[0x0724] - InheritedSize[0x0268])
	 */
	class UBlackHawkAnimations_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_YL1F[0x8];                                   // 0x0268(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_DA5E8AE74B3BEEACBFF2D6B72CA5D89B;     // 0x0278(0x0030)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_9DD14D93495B2E52DC04DA83B4B751EE; // 0x02A8(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_8B194FB840CC403D1A70DD95BA7E441C; // 0x02C8(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2AC343CF40DCC69673FECDBCF680E8D0; // 0x03D0(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_5C27AA154330767E61D7ABB466B79A1D; // 0x04D8(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_0106D8E64BBE2A4862F1298BFC100CFB; // 0x05E0(0x0108)
		float                                                      TopRotorSpeed;                                           // 0x06E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TailRotorSpeed;                                          // 0x06EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            TopRotorRotation;                                        // 0x06F0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            TailRotorRotation;                                       // 0x06FC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      PercentVariation;                                        // 0x0708(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             RightDoorOffset;                                         // 0x070C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             LeftDoorOffset;                                          // 0x0718(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void UpdateRotationBasedUponSpeed(const struct FRotator& InRotation, float Speed, ERotorRotation Axis, struct FRotator* OutRotation);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BlackHawkAnimations_AnimGraphNode_ModifyBone_8B194FB840CC403D1A70DD95BA7E441C();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_BlackHawkAnimations(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
