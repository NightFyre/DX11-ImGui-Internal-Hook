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
	 * BlueprintGeneratedClass Ability_HumanBreachedIn.Ability_HumanBreachedIn_C
	 * Size -> 0x0010 (FullSize[0x0428] - InheritedSize[0x0418])
	 */
	class UAbility_HumanBreachedIn_C : public URaidGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class ARaidCharacter*                                      PlayerChar;                                              // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AlignControlRotation();
		void SetUpBaseActors(bool* failed);
		void EventReceived_40ED19D24FCBDD28EC1290A90A05732D(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCancelled_40ED19D24FCBDD28EC1290A90A05732D(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnInterrupted_40ED19D24FCBDD28EC1290A90A05732D(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnBlendOut_40ED19D24FCBDD28EC1290A90A05732D(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCompleted_40ED19D24FCBDD28EC1290A90A05732D(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void K2_ActivateAbility();
		void K2_OnEndAbility(bool bWasCancelled);
		void ExecuteUbergraph_Ability_HumanBreachedIn(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
