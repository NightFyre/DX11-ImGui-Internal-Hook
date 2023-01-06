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
	 * BlueprintGeneratedClass AnimNotify_GAStagCall.AnimNotify_GASTagCall_C
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UAnimNotify_GASTagCall_C : public UAnimNotify
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0038(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash

	public:
		bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
