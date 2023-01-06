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
	 * BlueprintGeneratedClass Ability_Gunner.Ability_Gunner_C
	 * Size -> 0x0020 (FullSize[0x0438] - InheritedSize[0x0418])
	 */
	class UAbility_Gunner_C : public URaidGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UAnimMontage*                                        OnTurretV2Anim;                                          // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARaidCharacter*                                      PlayerChar;                                              // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class URaidUseableComponent*                               UseableComp;                                             // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CloseInventoryIfOpen();
		void Trigger_CameraFade(float FromAlpha, float ToAlpha, float Duration, bool bHoldWhenFinished);
		bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags);
		void TriggerHudFade(bool Hide);
		void SetUpBaseActors(bool* NewParam);
		void OnSync_31631862425308A0DC0255B378883A75();
		void OnSync_40F1C9104B9227C05D971DAB001B1C07();
		void OnTimedOutAndDestinationReached_3566C3414D4DB957A0AB70970F31C741();
		void OnTimedOut_3566C3414D4DB957A0AB70970F31C741();
		void OnTimedOutAndDestinationReached_37A351EF4A3E920F4AE2B9AF491E4974();
		void OnTimedOut_37A351EF4A3E920F4AE2B9AF491E4974();
		void EventReceived_246C1C784F82EFC688D648ACA332E4E9(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCancelled_246C1C784F82EFC688D648ACA332E4E9(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnInterrupted_246C1C784F82EFC688D648ACA332E4E9(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnBlendOut_246C1C784F82EFC688D648ACA332E4E9(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCompleted_246C1C784F82EFC688D648ACA332E4E9(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void EventReceived_C232B99945EC6CD2F9AC2B9B424FC7FC(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCancelled_C232B99945EC6CD2F9AC2B9B424FC7FC(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnInterrupted_C232B99945EC6CD2F9AC2B9B424FC7FC(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnBlendOut_C232B99945EC6CD2F9AC2B9B424FC7FC(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCompleted_C232B99945EC6CD2F9AC2B9B424FC7FC(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnFinish_343182354082AEEAFF31568A1F88BB38();
		void OnFinish_D0980CD14CF03D166382FFA091E167D7();
		void OnFinish_F537D4154B7A6E0F34E6B08F1B3BACB7();
		void OnFinish_8DFA5C274D16403C195F64B33C38D6D9();
		void OnTargetLocationReached_7A38C7E341F2617FDD0E97B172486612();
		void K2_OnEndAbility(bool bWasCancelled);
		void K2_ActivateAbility();
		void ExecuteUbergraph_Ability_Gunner(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
