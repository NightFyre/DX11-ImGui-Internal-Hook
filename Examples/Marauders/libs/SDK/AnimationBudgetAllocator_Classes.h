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
	 * Class AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAnimationBudgetBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void SetAnimationBudgetParameters(class UObject* WorldContextObject, const struct FAnimationBudgetAllocatorParameters& InParameters);
		void EnableAnimationBudget(class UObject* WorldContextObject, bool bEnabled);
		static UClass* StaticClass();
	};

	/**
	 * Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted
	 * Size -> 0x0030 (FullSize[0x0F00] - InheritedSize[0x0ED0])
	 */
	class USkeletalMeshComponentBudgeted : public USkeletalMeshComponent
	{
	public:
		unsigned char                                              UnknownData_APXJ[0x20];                                  // 0x0ED0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bAutoRegisterWithBudgetAllocator : 1;                    // 0x0EF0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bAutoCalculateSignificance : 1;                          // 0x0EF0(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bShouldUseActorRenderedFlag : 1;                         // 0x0EF0(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XT4Z[0xF];                                   // 0x0EF1(0x000F) MISSED OFFSET (PADDING)

	public:
		void SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
