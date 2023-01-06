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
	 * BlueprintGeneratedClass Base_RaidNode.Base_RaidNode_C
	 * Size -> 0x00A0 (FullSize[0x02F8] - InheritedSize[0x0258])
	 */
	class ABase_RaidNode_C : public ARaidNodeActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0258(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FName                                                AreaDTName;                                              // 0x0268(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          Pod_CameraOffsetOnEntrance;                              // 0x0270(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		float                                                      Pod_Boom_TargetLength;                                   // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HZIN[0x4];                                   // 0x02A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FS_EntranceVolume_GoToLocation>              EntranceVolumeAndArrow;                                  // 0x02A8(0x0010) Edit, BlueprintVisible, ContainsInstancedReference
		struct FLinearColor                                        GlowColour_If_Pod;                                       // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        GlowColour_If_Frigate;                                   // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        LightsColour_If_Pod;                                     // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        LightsColour_If_Frigate;                                 // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Analytics_Used(bool IsPod);
		void ReturnAreaEntranceMoveToLocation(class AActor* ShipActor, class URaidDockingComponent* DockingCompInteractWith, struct FTransform* MoveToTransform, struct FTransform* CameraOffset, float* BoomLength);
		void GetEntranceAreaName(class FName* AreaName);
		void ReceiveBeginPlay();
		void Analytics_DockingHappened(bool WasAPod);
		void PlayerIsInPodVisuals(bool isInPod);
		void ExecuteUbergraph_Base_RaidNode(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
