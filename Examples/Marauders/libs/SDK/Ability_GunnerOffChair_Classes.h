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
	 * BlueprintGeneratedClass Ability_GunnerOffChair.Ability_GunnerOffChair_C
	 * Size -> 0x0030 (FullSize[0x0448] - InheritedSize[0x0418])
	 */
	class UAbility_GunnerOffChair_C : public URaidGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UAnimMontage*                                        GunnerChairV2Anim;                                       // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARaidCharacter*                                      PlayerChar;                                              // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            MainRot;                                                 // 0x0430(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_82K4[0x4];                                   // 0x043C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URaidUseableComponent*                               UseableComp;                                             // 0x0440(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AlignControlRotation();
		void Trigger_FadeToBlack(float FromAlpha, float ToAlpha, float Duration, bool bHoldWhenFinished);
		void TriggerHudInstandUIFade(bool Hide);
		void TriggerHudUIFade(bool Hide);
		void SetUpBaseActors(bool* Fail);
		void OnSync_5941F9DA413A0B85EDDD188A924EBDCF();
		void EventReceived_72D673404FF40B4374E1F9AF7F2B85FA(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCancelled_72D673404FF40B4374E1F9AF7F2B85FA(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnInterrupted_72D673404FF40B4374E1F9AF7F2B85FA(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnBlendOut_72D673404FF40B4374E1F9AF7F2B85FA(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCompleted_72D673404FF40B4374E1F9AF7F2B85FA(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void EventReceived_89818B24431A8F4E8652A4A821CC0E90(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCancelled_89818B24431A8F4E8652A4A821CC0E90(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnInterrupted_89818B24431A8F4E8652A4A821CC0E90(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnBlendOut_89818B24431A8F4E8652A4A821CC0E90(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCompleted_89818B24431A8F4E8652A4A821CC0E90(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnFinish_604AC427435B40CDA7BF22A0AD45E4FF();
		void K2_ActivateAbility();
		void K2_OnEndAbility(bool bWasCancelled);
		void ExecuteUbergraph_Ability_GunnerOffChair(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
