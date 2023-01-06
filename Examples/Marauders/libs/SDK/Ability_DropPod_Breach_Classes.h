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
	 * BlueprintGeneratedClass Ability_DropPod_Breach.Ability_DropPod_Breach_C
	 * Size -> 0x0024 (FullSize[0x043C] - InheritedSize[0x0418])
	 */
	class UAbility_DropPod_Breach_C : public URaidGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class AShip_DropPod_Pawn_C*                                Ref_DropPod_Pawn;                                        // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              TargetFrigate;                                           // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                SocketNameToMoveTo;                                      // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EndDelayTimeAmount;                                      // 0x0438(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Analytics_DidAShipBreach();
		void Trigger_HudFade(bool Hide);
		void OnTimedOutAndDestinationReached_1817C8BE4EBE5FFC894E93851098DF35();
		void OnTimedOut_1817C8BE4EBE5FFC894E93851098DF35();
		void OnTargetLocationReached_E504D9E1474ECB72137583805F2E4BDE();
		void OnTargetLocationReached_51C359B1498285B3589B55B035CDD5F9();
		void OnTimedOutAndDestinationReached_FAE6C3BB4D16BD4BBC3D3ABB5A034FAE();
		void OnTimedOut_FAE6C3BB4D16BD4BBC3D3ABB5A034FAE();
		void OnFinish_5C5FD7CE49472463DD3A30A576086B1B();
		void OnFinish_2A0226434F505DEBA5E93C94DFDC72C3();
		void K2_ActivateAbility();
		void K2_OnEndAbility(bool bWasCancelled);
		void ExecuteUbergraph_Ability_DropPod_Breach(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
