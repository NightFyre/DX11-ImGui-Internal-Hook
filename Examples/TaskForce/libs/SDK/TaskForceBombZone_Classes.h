#pragma once

/**
 * Name: Task_Force
 * Version: 0.3.6.1537
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
	 * BlueprintGeneratedClass TaskForceBombZone.TaskForceBombZone_C
	 * Size -> 0x0088 (FullSize[0x02C8] - InheritedSize[0x0240])
	 */
	class ATaskForceBombZone_C : public AActor
	{
	public:
		class UBillboardComponent*                                 BombZoneSprite;                                          // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       BombZoneCollision;                                       // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Scene;                                                   // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TeamID;                                                  // 0x0258(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Extents;                                                 // 0x025C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTaskForceIcon                                      AttackIcon;                                              // 0x0268(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTaskForceIcon                                      DefendIcon;                                              // 0x0280(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AStaticMeshActor*>                            ActiveMeshes;                                            // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate
		TArray<class AStaticMeshActor*>                            ExplodedMeshes;                                          // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate
		TArray<class AEmitter*>                                    ExplodedParticles;                                       // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
