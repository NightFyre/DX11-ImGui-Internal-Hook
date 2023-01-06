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
	 * BlueprintGeneratedClass Base_ShipInsideActor.Base_ShipInsideActor_C
	 * Size -> 0x0018 (FullSize[0x0238] - InheritedSize[0x0220])
	 */
	class ABase_ShipInsideActor_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     Scene;                                                   // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UBillboardComponent*                                 Billboard;                                               // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		void TriggerInsideShipActor_Damage();
		void TriggerCriticalLightState(bool TurnOnCriticalState);
		void TriggerCritcialWarningSpinningLights(bool TurnOnCriticalState);
		void TriggerDamageLightFlicker();
		void Trigger();
		void ExecuteUbergraph_Base_ShipInsideActor(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
