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
	 * AnimBlueprintGeneratedClass TargetAnimations.TargetAnimations_C
	 * Size -> 0x016D (FullSize[0x03D5] - InheritedSize[0x0268])
	 */
	class UTargetAnimations_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_06HB[0x8];                                   // 0x0268(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_FECD038444C3BF43B0B76483219B37A4;     // 0x0278(0x0030)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_81D9975142E368A80BC1549F0FF8892D; // 0x02A8(0x0108)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_B308B2CF41A2A1D89DB7ADA0A9D80CE0; // 0x03B0(0x0020)
		float                                                      Rotation;                                                // 0x03D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsHit;                                                   // 0x03D4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_TargetAnimations_AnimGraphNode_ModifyBone_81D9975142E368A80BC1549F0FF8892D();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_TargetAnimations(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
