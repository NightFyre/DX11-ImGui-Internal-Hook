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
	 * BlueprintGeneratedClass Base_ExitGateCinematic.Base_ExitGateCinematic_C
	 * Size -> 0x0064 (FullSize[0x0284] - InheritedSize[0x0220])
	 */
	class ABase_ExitGateCinematic_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class USkeletalMeshComponent*                              Ship_SkelMesh;                                           // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UBillboardComponent*                                 Billboard;                                               // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UCineCameraComponent*                                CineCamera;                                              // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USceneComponent*                                     Scene;                                                   // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Timeline_0_Movement_518C09E7438CD164FFBBBB933676630E;    // 0x0248(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_518C09E7438CD164FFBBBB933676630E;  // 0x024C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_X9IL[0x3];                                   // 0x024D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              SkelMeshToUse[0x28];                                     // 0x0258(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      ScaleToUse;                                              // 0x0280(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void OnLoaded_F35158C34C07B2A5A38E7AB5D7360091(class UObject* Loaded);
		void RunCinematic(class ARaidPlayerController* WhichPlayerController, bool IsFrigate, const class FName& NameOfShip);
		void ExecuteUbergraph_Base_ExitGateCinematic(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
