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
	 * BlueprintGeneratedClass Ability_CameraOFF.Ability_CameraOFF_C
	 * Size -> 0x0030 (FullSize[0x0448] - InheritedSize[0x0418])
	 */
	class UAbility_CameraOFF_C : public URaidGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UAnimMontage*                                        CameraGetOffAnim;                                        // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARaidCharacter*                                      PlayerChar;                                              // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            MainRot;                                                 // 0x0430(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1AYH[0x4];                                   // 0x043C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URaidUseableComponent*                               UseableComp;                                             // 0x0440(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AlignControlRotation();
		void Trigger_CameraFade(float FromAlpha, float ToAlpha, float Duration, bool bHoldWhenFinished);
		void TriggerHudInstandUIFade(bool Hide);
		void TriggerHudUIFade(bool Hide);
		void SetUpBaseActors(bool* Fail);
		void EventReceived_02EC29DF42C06CF71DDFAEBDE007F6D5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCancelled_02EC29DF42C06CF71DDFAEBDE007F6D5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnInterrupted_02EC29DF42C06CF71DDFAEBDE007F6D5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnBlendOut_02EC29DF42C06CF71DDFAEBDE007F6D5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCompleted_02EC29DF42C06CF71DDFAEBDE007F6D5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void EventReceived_919C49DE4DECEC0CB0E3F5BB3D292E39(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCancelled_919C49DE4DECEC0CB0E3F5BB3D292E39(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnInterrupted_919C49DE4DECEC0CB0E3F5BB3D292E39(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnBlendOut_919C49DE4DECEC0CB0E3F5BB3D292E39(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnCompleted_919C49DE4DECEC0CB0E3F5BB3D292E39(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
		void OnSync_AE80FE514CCE5623A844018F7EA72236();
		void OnFinish_7D1B8E224CC6E2DCAAB406B52B4DAE30();
		void K2_ActivateAbility();
		void K2_OnEndAbility(bool bWasCancelled);
		void ExecuteUbergraph_Ability_CameraOFF(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
