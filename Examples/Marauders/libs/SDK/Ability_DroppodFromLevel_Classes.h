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
	 * BlueprintGeneratedClass Ability_DroppodFromLevel.Ability_DroppodFromLevel_C
	 * Size -> 0x0028 (FullSize[0x0440] - InheritedSize[0x0418])
	 */
	class UAbility_DroppodFromLevel_C : public URaidGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UAnimMontage*                                        DropPodAnim;                                             // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARaidCharacter*                                      PlayerChar;                                              // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class URaidUseableComponent*                               UseableComp;                                             // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARaidFrigateShuttleControl*                          UseableActor;                                            // 0x0438(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Analytics_DropPodUsed();
		void Trigger_FadeToBlack(float FromAlpha, float ToAlpha, float Duration, bool bHoldWhenFinished);
		void TriggerHudFade(bool Hide);
		void TurnBackOnInteractionCollision();
		void SetUpBaseActors(bool* failed);
		void OnTimedOutAndDestinationReached_8344B3D046B4B5B104D3328136032080();
		void OnTimedOut_8344B3D046B4B5B104D3328136032080();
		void OnSync_B710567540721154D7ACDFA6C244E99D();
		void OnTargetLocationReached_B1B242F94474EDF1D3821FB99A54E681();
		void OnSync_D430EA49467F5BF5DAA6F1B83E2AD2BA();
		void OnFinish_9B99B61941195161A64223A4E335E710();
		void OnTimedOutAndDestinationReached_D38E26684DC6214AF973A4BCCC50993F();
		void OnTimedOut_D38E26684DC6214AF973A4BCCC50993F();
		void OnFinish_D0A5F2154FC0700A3F99FBBE9272B707();
		void EventReceived_ECBE06694A8DBF32F173339BF017C691(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCancelled_ECBE06694A8DBF32F173339BF017C691(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnInterrupted_ECBE06694A8DBF32F173339BF017C691(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnBlendOut_ECBE06694A8DBF32F173339BF017C691(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCompleted_ECBE06694A8DBF32F173339BF017C691(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void EventReceived_C4CE6C9D4364E5B5EE6622BCD33B9C67(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCancelled_C4CE6C9D4364E5B5EE6622BCD33B9C67(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnInterrupted_C4CE6C9D4364E5B5EE6622BCD33B9C67(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnBlendOut_C4CE6C9D4364E5B5EE6622BCD33B9C67(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCompleted_C4CE6C9D4364E5B5EE6622BCD33B9C67(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnTargetLocationReached_364FE8A34E01D9E19457F8BA6AED19C3();
		void OnFinish_7DF91A564D33C31E210D76919ED872E9();
		void K2_OnEndAbility(bool bWasCancelled);
		void K2_ActivateAbility();
		void ExecuteUbergraph_Ability_DroppodFromLevel(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
