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
	 * BlueprintGeneratedClass Ability_Droppod.Ability_Droppod_C
	 * Size -> 0x0020 (FullSize[0x0438] - InheritedSize[0x0418])
	 */
	class UAbility_Droppod_C : public URaidGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UAnimMontage*                                        DropPodAnim;                                             // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARaidCharacter*                                      PlayerChar;                                              // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class URaidUseableComponent*                               UseableComp;                                             // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Analytics_UsedDropPod();
		void CloseInventoryIfOpen();
		bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags);
		void Trigger_FadeToBlack(float FromAlpha, float ToAlpha, float Duration, bool bHoldWhenFinished);
		void TriggerHudFade(bool Hide);
		void TurnBackOnInteractionCollision();
		void SetUpBaseActors(bool* failed);
		void OnTargetLocationReached_E223A6AB499A7A8B1AF5A58228FEE367();
		void OnTimedOutAndDestinationReached_3830054047D00FCDB2E0D88C40822CEA();
		void OnTimedOut_3830054047D00FCDB2E0D88C40822CEA();
		void OnSync_00A035E74C8708DF59208A8829D61CFB();
		void OnSync_0A31F94743E1D8FDB5647FB1EFE0EDB8();
		void OnFinish_2D9AC5B04B15584F646029B671420EB8();
		void OnTimedOutAndDestinationReached_D1607FA74A6ED8D267192484DC89644B();
		void OnTimedOut_D1607FA74A6ED8D267192484DC89644B();
		void OnFinish_7C07E5894D1606F9FA7C92887F8DA834();
		void EventReceived_71D9BA7B4988ED3BC908F5901C0F4857(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCancelled_71D9BA7B4988ED3BC908F5901C0F4857(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnInterrupted_71D9BA7B4988ED3BC908F5901C0F4857(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnBlendOut_71D9BA7B4988ED3BC908F5901C0F4857(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCompleted_71D9BA7B4988ED3BC908F5901C0F4857(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void EventReceived_446521CD4516F81934C2489C07074A82(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCancelled_446521CD4516F81934C2489C07074A82(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnInterrupted_446521CD4516F81934C2489C07074A82(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnBlendOut_446521CD4516F81934C2489C07074A82(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCompleted_446521CD4516F81934C2489C07074A82(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnTargetLocationReached_262B4D1C4EBFF78F126BFC9E6CD8FC11();
		void K2_OnEndAbility(bool bWasCancelled);
		void K2_ActivateAbility();
		void ExecuteUbergraph_Ability_Droppod(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
