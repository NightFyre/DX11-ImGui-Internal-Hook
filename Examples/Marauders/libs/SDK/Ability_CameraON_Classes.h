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
	 * BlueprintGeneratedClass Ability_CameraON.Ability_CameraON_C
	 * Size -> 0x0020 (FullSize[0x0438] - InheritedSize[0x0418])
	 */
	class UAbility_CameraON_C : public URaidGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UAnimMontage*                                        OnCameraControlsAnim;                                    // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARaidCharacter*                                      PlayerChar;                                              // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class URaidUseableComponent*                               UseableComp;                                             // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CloseInventoryIfOpen();
		void Trigger_CameraFade(float FromAlpha, float ToAlpha, float Duration, bool bHoldWhenFinished);
		bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags);
		void TriggerHudFade(bool Hide);
		void SetUpBaseActors(bool* NewParam);
		void OnTimedOutAndDestinationReached_32F0515B4AE5A3A625D965B96941AEAE();
		void OnTimedOut_32F0515B4AE5A3A625D965B96941AEAE();
		void OnTargetLocationReached_870CAC394F04FB9867A1DD89E3C44AE4();
		void OnSync_2F6414B64E8DE5C2E721AF991AC025CB();
		void OnSync_F848B6A6478FAC1302667BB8E5137043();
		void OnTimedOutAndDestinationReached_31BE29944A5F3A73FABA0FBC36DECE74();
		void OnTimedOut_31BE29944A5F3A73FABA0FBC36DECE74();
		void OnFinish_999CF7E543FE86CFD2322B80EBBE58E7();
		void EventReceived_1A04A3644D70EB872F6EC2A3DA20697A(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCancelled_1A04A3644D70EB872F6EC2A3DA20697A(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnInterrupted_1A04A3644D70EB872F6EC2A3DA20697A(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnBlendOut_1A04A3644D70EB872F6EC2A3DA20697A(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCompleted_1A04A3644D70EB872F6EC2A3DA20697A(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void EventReceived_5E9FDF624A5C93BB706C9CB8EB450C7F(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCancelled_5E9FDF624A5C93BB706C9CB8EB450C7F(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnInterrupted_5E9FDF624A5C93BB706C9CB8EB450C7F(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnBlendOut_5E9FDF624A5C93BB706C9CB8EB450C7F(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCompleted_5E9FDF624A5C93BB706C9CB8EB450C7F(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnFinish_E8BF4A904B01CB4E81FFFAAACF819857();
		void OnFinish_BCCBAAAF4B5415DA910E82A1EF3FD65C();
		void OnFinish_F3C3F12B4FB1D0799E02A08CFB2E6E40();
		void K2_ActivateAbility();
		void K2_OnEndAbility(bool bWasCancelled);
		void ExecuteUbergraph_Ability_CameraON(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
