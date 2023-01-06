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
	 * BlueprintGeneratedClass Ability_DropPod_Launch.Ability_DropPod_Launch_C
	 * Size -> 0x0010 (FullSize[0x0428] - InheritedSize[0x0418])
	 */
	class UAbility_DropPod_Launch_C : public URaidGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class AShip_DropPod_Pawn_C*                                Ref_DropPodPawn;                                         // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void TriggerHUD_Fade(bool Hide);
		void Trigger_FadeToBlack(float FromAlpha, float ToAlpha, float Duration, bool bHoldWhenFinished);
		void EventReceived_86EEC1C74D0BBA807392D194678397D5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCancelled_86EEC1C74D0BBA807392D194678397D5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnInterrupted_86EEC1C74D0BBA807392D194678397D5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnBlendOut_86EEC1C74D0BBA807392D194678397D5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCompleted_86EEC1C74D0BBA807392D194678397D5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnFinish_D1B9EEFE4379C8676B7C8389974E5B56();
		void K2_ActivateAbility();
		void K2_OnEndAbility(bool bWasCancelled);
		void ExecuteUbergraph_Ability_DropPod_Launch(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
