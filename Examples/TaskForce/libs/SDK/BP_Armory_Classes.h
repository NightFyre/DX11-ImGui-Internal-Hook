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
	 * BlueprintGeneratedClass BP_Armory.BP_Armory_C
	 * Size -> 0x05B0 (FullSize[0x07F0] - InheritedSize[0x0240])
	 */
	class ABP_Armory_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USpotLightComponent*                                 SpotLight2;                                              // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Body;                                                    // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Gear;                                                    // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Shoes;                                                   // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Gloves;                                                  // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Bottom;                                                  // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Top;                                                     // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                WallTop;                                                 // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                WallBottom;                                              // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                WallBack;                                                // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                WallFront;                                               // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                WallLeft;                                                // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                WallRight;                                               // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Walls;                                                   // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCameraComponent*                                    Camera;                                                  // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Hat;                                                     // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Head;                                                    // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpotLightComponent*                                 SpotLight1;                                              // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneCaptureComponent2D*                            SceneCaptureComponent2D;                                 // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Soldier;                                                 // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TMap<class FString, struct FBP_ArmoryItem>                 CommandoBodies;                                          // 0x02F0(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TMap<class FString, struct FBP_ArmoryItem>                 CommandoHats;                                            // 0x0340(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TMap<class FString, struct FBP_ArmoryItem>                 CommandoHeads;                                           // 0x0390(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TMap<class FString, struct FBP_ArmoryItem>                 CommandoTops;                                            // 0x03E0(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TMap<class FString, struct FBP_ArmoryItem>                 CommandoBottoms;                                         // 0x0430(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TMap<class FString, struct FBP_ArmoryItem>                 CommandoGloves;                                          // 0x0480(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TMap<class FString, struct FBP_ArmoryItem>                 CommandoShoes;                                           // 0x04D0(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TMap<class FString, struct FBP_ArmoryItem>                 CommandoGear;                                            // 0x0520(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TMap<class FString, struct FBP_ArmoryItem>                 TerroristBodies;                                         // 0x0570(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TMap<class FString, struct FBP_ArmoryItem>                 TerroristHats;                                           // 0x05C0(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TMap<class FString, struct FBP_ArmoryItem>                 TerroristHeads;                                          // 0x0610(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TMap<class FString, struct FBP_ArmoryItem>                 TerroristTops;                                           // 0x0660(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TMap<class FString, struct FBP_ArmoryItem>                 TerroristBottoms;                                        // 0x06B0(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TMap<class FString, struct FBP_ArmoryItem>                 TerroristGloves;                                         // 0x0700(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TMap<class FString, struct FBP_ArmoryItem>                 TerroristShoes;                                          // 0x0750(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TMap<class FString, struct FBP_ArmoryItem>                 TerroristGear;                                           // 0x07A0(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void ResetSkin();
		void UpdateWorkshopMesh(class USkeletalMeshComponent* Mesh, class USkeletalMesh* SkinMesh, TMap<class FString, class UMaterialInterface*> SkinMaterials);
		void UpdateWorkshopArmory(TMap<class FString, struct FTaskForceSkin> CommandoLookup, TMap<class FString, struct FTaskForceSkin> TerroristLookup, TMap<class FString, struct FTaskForceSkin> BotLookup, int32_t TeamID, const class FString& Key);
		void UpdateWorkshopSkin(TMap<class FString, struct FTaskForceSkin> Skins, const class FString& Key);
		void UpdateArmoryMesh(class USkeletalMeshComponent* Mesh, const struct FBP_ArmoryItem& Item);
		void UpdateArmoryComponent(TMap<class FString, struct FBP_ArmoryItem> CommandoLookup, TMap<class FString, struct FBP_ArmoryItem> TerroristLookup, int32_t TeamID, const class FString& Key, class USkeletalMeshComponent* Mesh);
		void updateArmory(int32_t TeamID, class ATaskForceSettings_C* Workshop, const class FString& Body, const class FString& Head, const class FString& Top, const class FString& Bottom, const class FString& Hat, const class FString& Gloves, const class FString& Shoes, const class FString& Gear);
		void sleepArmory();
		void renderArmory(const struct FVector& Location);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_Armory(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
