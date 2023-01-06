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
	 * BlueprintGeneratedClass BasePoolHitEffect.BasePoolHitEffect_C
	 * Size -> 0x0008 (FullSize[0x0290] - InheritedSize[0x0288])
	 */
	class ABasePoolHitEffect_C : public ARaidPoolImpactEffect
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0288(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void ExecuteUbergraph_BasePoolHitEffect(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
