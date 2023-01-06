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
	 * BlueprintGeneratedClass BP_TrainingMode.BP_TrainingMode_C
	 * Size -> 0x0068 (FullSize[0x0638] - InheritedSize[0x05D0])
	 */
	class ABP_TrainingMode_C : public ATaskForceTrainingMode
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x05D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		ESpawnActorCollisionHandlingMethod                         CollisionHandling;                                       // 0x05E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QVZY[0x7];                                   // 0x05E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, class UClass*>                         TrainingWeapons;                                         // 0x05E8(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void GetMode(ETaskForceModes* Mode);
		void ClearCharacters();
		void RemoveCharacter(const class FName& Name);
		void SetRoundSounds(TArray<class USoundCue*> RoundStartMusic1, TArray<class USoundCue*> RoundStartMusic2, TArray<class USoundCue*> RoundWinVoice1, TArray<class USoundCue*> RoundWinMusic1, TArray<class USoundCue*> RoundWinVoice2, TArray<class USoundCue*> RoundWinMusic2);
		void SetRoundMessages(TMap<int32_t, class FString> RoundStart, TMap<int32_t, class FString> RoundWin, TMap<int32_t, class FString> RoundDraw);
		void ClearSpawns();
		void RemoveSpawn(class APlayerStart* Spawn);
		void AddBreach(const struct FTransform& Transform, class UStaticMesh* Mesh, class UStaticMesh* ExplodedMesh, const struct FVector& Offset, const struct FVector& Extents);
		void AddSkin(int32_t TeamID, const class FString& Name, const struct FTaskForceSkin& Skin);
		void SetDefaultSkins(int32_t TeamID, ETaskForceRegions Region, bool ColdWeather);
		void AddSpawn(class APlayerStart* Spawn, int32_t TeamID);
		void AddCharacter(const class FName& Name, int32_t TeamID, class USkeletalMeshComponent* Head, class USkeletalMeshComponent* Body, TMap<class FName, class USkeletalMeshComponent*> Helmets, TMap<class FName, class USkeletalMeshComponent*> Shirts, TMap<class FName, class USkeletalMeshComponent*> Pants, TMap<class FName, class USkeletalMeshComponent*> Boots, TMap<class FName, class USkeletalMeshComponent*> Gloves, TMap<class FName, class USkeletalMeshComponent*> Gear);
		void ReceiveBeginPlay();
		void SetRegion(const class FName& Region);
		void AddLadder(const struct FTransform& Transform, float Width, float Height);
		void SetTeamIcon(int32_t ID, const struct FTaskForceIcon& Icon);
		void AddDoor(const struct FTransform& Transform, class UStaticMesh* Mesh, const struct FVector& Offset, float Rotation, float Angle, bool IsOpen);
		void SetTeamName(int32_t ID, const class FString& Name);
		void AddWeapon(const struct FTransform& Transform, const class FString& Name);
		void SetTeams(TMap<class FString, struct FTaskForceIcon> Teams);
		void SpawnWeapons();
		void AddButton(class AActor* Target, const struct FVector& Extents, const class FString& Text, class USoundCue* PressedSound, class USoundCue* ReleasedSound);
		void ExecuteUbergraph_BP_TrainingMode(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
