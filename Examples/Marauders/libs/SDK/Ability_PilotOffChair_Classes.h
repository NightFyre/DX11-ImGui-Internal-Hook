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
	 * BlueprintGeneratedClass Ability_PilotOffChair.Ability_PilotOffChair_C
	 * Size -> 0x0020 (FullSize[0x0438] - InheritedSize[0x0418])
	 */
	class UAbility_PilotOffChair_C : public URaidGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UAnimMontage*                                        PilotChairV2Anim;                                        // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class URaidUseableComponent*                               UseableComp;                                             // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARaidCharacter*                                      PlayerChar;                                              // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AlignControlRotation();
		void SetUpBaseActors(bool* failed);
		void OnSync_2ADC627D45541B5D3C3BA0BCA47752DD();
		void EventReceived_0A1466BE4CA8AB32B958978757338BD8(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCancelled_0A1466BE4CA8AB32B958978757338BD8(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnInterrupted_0A1466BE4CA8AB32B958978757338BD8(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnBlendOut_0A1466BE4CA8AB32B958978757338BD8(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCompleted_0A1466BE4CA8AB32B958978757338BD8(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void EventReceived_2BB641324DDA55D29F0599A55D511D8B(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCancelled_2BB641324DDA55D29F0599A55D511D8B(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnInterrupted_2BB641324DDA55D29F0599A55D511D8B(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnBlendOut_2BB641324DDA55D29F0599A55D511D8B(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCompleted_2BB641324DDA55D29F0599A55D511D8B(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnFinish_7D92FB174D7A409EEBC2D6BBA4EEFF6D();
		void K2_ActivateAbility();
		void K2_OnEndAbility(bool bWasCancelled);
		void ExecuteUbergraph_Ability_PilotOffChair(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
