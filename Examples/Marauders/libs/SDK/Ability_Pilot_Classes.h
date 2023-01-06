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
	 * BlueprintGeneratedClass Ability_Pilot.Ability_Pilot_C
	 * Size -> 0x0020 (FullSize[0x0438] - InheritedSize[0x0418])
	 */
	class UAbility_Pilot_C : public URaidGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UAnimMontage*                                        PilotChairV2Anim;                                        // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class URaidUseableComponent*                               UseableComp;                                             // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARaidCharacter*                                      PlayerChar;                                              // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CloseInventoryIfOpen();
		void Trigger_CameraFade(float FromAlpha, float ToAlpha, float Duration, bool bHoldWhenFinished);
		bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags);
		void TriggerHUDfadeOut(bool Hide);
		void SetUpBaseActors(bool* failed);
		void OnSync_BC1CFFA7429F81D07725EBB565FDA119();
		void OnSync_E40EECA5499C085E86C4FDB7D993BD62();
		void OnTimedOutAndDestinationReached_81BB39CB404C7FBEBDCF948AA9B42AA7();
		void OnTimedOut_81BB39CB404C7FBEBDCF948AA9B42AA7();
		void EventReceived_25FF25254834C5C5C86EF8B7FA35B3E0(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCancelled_25FF25254834C5C5C86EF8B7FA35B3E0(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnInterrupted_25FF25254834C5C5C86EF8B7FA35B3E0(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnBlendOut_25FF25254834C5C5C86EF8B7FA35B3E0(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCompleted_25FF25254834C5C5C86EF8B7FA35B3E0(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnTargetLocationReached_BAA0A1BE4FD08FDD4AA0E8B0A8911E47();
		void EventReceived_6C661FAE4B3C0E195531B1A07B77DEBF(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCancelled_6C661FAE4B3C0E195531B1A07B77DEBF(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnInterrupted_6C661FAE4B3C0E195531B1A07B77DEBF(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnBlendOut_6C661FAE4B3C0E195531B1A07B77DEBF(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCompleted_6C661FAE4B3C0E195531B1A07B77DEBF(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnFinish_35F7A38E40F73F3BFA24D1A474AC4104();
		void OnFinish_7515B0F74611DFBF6CD9858C4FA3A41D();
		void OnTimedOutAndDestinationReached_F98EAFFA4EB8F2B73E8AA3898C193C31();
		void OnTimedOut_F98EAFFA4EB8F2B73E8AA3898C193C31();
		void OnFinish_424362CC44B952BC93648AB72DF8D170();
		void OnFinish_9E6D3C174D4E65C228999AAE1552C474();
		void K2_ActivateAbility();
		void K2_OnEndAbility(bool bWasCancelled);
		void ExecuteUbergraph_Ability_Pilot(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
