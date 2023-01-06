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
	 * BlueprintGeneratedClass Ability_Frigate_BoardStation.Ability_Frigate_BoardStation_C
	 * Size -> 0x0020 (FullSize[0x0438] - InheritedSize[0x0418])
	 */
	class UAbility_Frigate_BoardStation_C : public URaidGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class AShip_DropPod_Pawn_C*                                Ref_DropPawn;                                            // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DropPodWasBoosting;                                      // 0x0428(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0KBO[0x7];                                   // 0x0429(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ARaidFrigate*                                        Ref_FrigateShip;                                         // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetAreaEnteringNameInHUD(const class FName& AreaName);
		void TriggerFadeToBlack(float FromAlpha, float ToAlpha, float Duration, bool bHoldWhenFinished);
		void TriggerHudFade(bool Hide);
		void OnTargetLocationReached_762C00C14E5E793715B3AB8A44DE2874();
		void OnFinish_734400844FF4F53D9C21258DBA9378DA();
		void OnSync_598D8C174778802182186D86370C04DC();
		void OnFinish_48B5AF244282B4801DD13EB0075CE4D6();
		void OnTimedOutAndDestinationReached_317FF0D34187C62BC22D05B801A3AE3C();
		void OnTimedOut_317FF0D34187C62BC22D05B801A3AE3C();
		void K2_OnEndAbility(bool bWasCancelled);
		void K2_ActivateAbility();
		void ExecuteUbergraph_Ability_Frigate_BoardStation(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
