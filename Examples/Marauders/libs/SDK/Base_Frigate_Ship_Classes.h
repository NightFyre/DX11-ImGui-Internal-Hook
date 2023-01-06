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
	 * BlueprintGeneratedClass Base_Frigate_Ship.Base_Frigate_Ship_C
	 * Size -> 0x0018 (FullSize[0x0CD8] - InheritedSize[0x0CC0])
	 */
	class ABase_Frigate_Ship_C : public ARaidFrigate
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0CC0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UPostProcessComponent*                               PostProcess;                                             // 0x0CC8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UCurveFloat*                                         RotationSpeedCurve;                                      // 0x0CD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CheckifAbleToDock(bool isAllowedToDock);
		void ReceiveBeginPlay();
		void CheckIfCanDock();
		void ExecuteUbergraph_Base_Frigate_Ship(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
