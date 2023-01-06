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
	 * BlueprintGeneratedClass Ability_DropPod_BoardStation.Ability_DropPod_BoardStation_C
	 * Size -> 0x0019 (FullSize[0x0431] - InheritedSize[0x0418])
	 */
	class UAbility_DropPod_BoardStation_C : public URaidGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class ARaidCharacter*                                      PlayerChar;                                              // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AShip_DropPod_Pawn_C*                                Ref_DropPawn;                                            // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DropPodWasBoosting;                                      // 0x0430(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetAreaEnteringNameInHUD(const class FName& AreaName);
		void TriggerFadeToBlack(float FromAlpha, float ToAlpha, float Duration, bool bHoldWhenFinished);
		void TriggerHudFade(bool Hide);
		void OnTimedOutAndDestinationReached_512F646845DEB0C19FB038A3655F0758();
		void OnTimedOut_512F646845DEB0C19FB038A3655F0758();
		void OnTargetLocationReached_004372334EDBE57A1EAB7B851CA4FB48();
		void OnFinish_A9E6EAD64F7459B3095D3084A75921BB();
		void OnFinish_8B325BF24B52E46D98BD959E03AB1D01();
		void OnSync_F1B6FF5F4279EB7107639E984C09593F();
		void K2_ActivateAbility();
		void K2_OnEndAbility(bool bWasCancelled);
		void ExecuteUbergraph_Ability_DropPod_BoardStation(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
