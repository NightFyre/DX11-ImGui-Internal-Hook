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
	 * BlueprintGeneratedClass TaskForceGameMode.TaskForceGameMode_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTaskForceGameMode_C : public UInterface
	{
	public:
		void SetDefaultSkins(int32_t TeamID, ETaskForceRegions Region, bool ColdWeather);
		void AddSkin(int32_t TeamID, const class FString& Name, const struct FTaskForceSkin& Skin);
		void GetMode(ETaskForceModes* Mode);
		void AddBreach(const struct FTransform& Transform, class UStaticMesh* Mesh, class UStaticMesh* ExplodedMesh, const struct FVector& Offset, const struct FVector& Extents);
		void AddButton(class AActor* Target, const struct FVector& Extents, const class FString& Text, class USoundCue* PressedSound, class USoundCue* ReleasedSound);
		void AddWeapon(const struct FTransform& Transform, const class FString& Name);
		void AddDoor(const struct FTransform& Transform, class UStaticMesh* Mesh, const struct FVector& Offset, float Rotation, float Angle, bool IsOpen);
		void AddLadder(const struct FTransform& Transform, float Width, float Height);
		void RemoveSpawn(class APlayerStart* Spawn);
		void ClearSpawns();
		void AddSpawn(class APlayerStart* Spawn, int32_t TeamID);
		void SetRoundMessages(TMap<int32_t, class FString> RoundStart, TMap<int32_t, class FString> RoundWin, TMap<int32_t, class FString> RoundDraw);
		void SetRoundSounds(TArray<class USoundCue*> RoundStartMusic1, TArray<class USoundCue*> RoundStartMusic2, TArray<class USoundCue*> RoundWinVoice1, TArray<class USoundCue*> RoundWinMusic1, TArray<class USoundCue*> RoundWinVoice2, TArray<class USoundCue*> RoundWinMusic2);
		void RemoveCharacter(const class FName& Name);
		void ClearCharacters();
		void AddCharacter(const class FName& Name, int32_t TeamID, class USkeletalMeshComponent* Head, class USkeletalMeshComponent* Body, TMap<class FName, class USkeletalMeshComponent*> Helmets, TMap<class FName, class USkeletalMeshComponent*> Shirts, TMap<class FName, class USkeletalMeshComponent*> Pants, TMap<class FName, class USkeletalMeshComponent*> Boots, TMap<class FName, class USkeletalMeshComponent*> Gloves, TMap<class FName, class USkeletalMeshComponent*> Gear);
		void SetRegion(const class FName& Region);
		void SetTeamIcon(int32_t ID, const struct FTaskForceIcon& Icon);
		void SetTeamName(int32_t ID, const class FString& Name);
		void SetTeams(TMap<class FString, struct FTaskForceIcon> Teams);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
