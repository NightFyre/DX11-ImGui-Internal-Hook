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
	 * BlueprintGeneratedClass Ability_Mantle.Ability_Mantle_C
	 * Size -> 0x0114 (FullSize[0x052C] - InheritedSize[0x0418])
	 */
	class UAbility_Mantle_C : public URaidGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UAnimMontage*                                        MantleAnim;                                              // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARaidCharacter*                                      PlayerChar;                                              // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              MantledActor;                                            // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             MantledToLoc;                                            // 0x0438(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bWasRunningWhenStarted;                                  // 0x0444(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsAVault;                                               // 0x0445(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bHasAWeaponOut;                                          // 0x0446(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P65F[0x1];                                   // 0x0447(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Weapon_Data_Table_Name;                                  // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FPlayer_Anims_Struct                                WeaponAnims;                                             // 0x0450(0x00D0) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             MantledToLocSecondHalfVault;                             // 0x0520(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags);
		void Trigger_FadeToBlack(float FromAlpha, float ToAlpha, float Duration, bool bHoldWhenFinished);
		void TriggerHudFade(bool Hide);
		void SetUpBaseActors(bool* failed);
		void OnTargetLocationReached_F20E66A24B2ECF9715537288F9A1A50E();
		void EventReceived_757C3958423C24801B47EBBC279D509C(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCancelled_757C3958423C24801B47EBBC279D509C(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnInterrupted_757C3958423C24801B47EBBC279D509C(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnBlendOut_757C3958423C24801B47EBBC279D509C(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCompleted_757C3958423C24801B47EBBC279D509C(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnTargetLocationReached_62B07651482F54AC48337FABE33C716B();
		void OnSync_BFDD39A549CA24C2218CA1B8E3308202();
		void EventReceived_7FC55D3C4874BE522DDF52864A687141(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCancelled_7FC55D3C4874BE522DDF52864A687141(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnInterrupted_7FC55D3C4874BE522DDF52864A687141(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnBlendOut_7FC55D3C4874BE522DDF52864A687141(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCompleted_7FC55D3C4874BE522DDF52864A687141(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void K2_OnEndAbility(bool bWasCancelled);
		void K2_ActivateAbility();
		void ExecuteUbergraph_Ability_Mantle(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
