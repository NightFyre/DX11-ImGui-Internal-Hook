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
	 * BlueprintGeneratedClass TaskForceDemolitionMode.TaskForceDemolitionMode_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTaskForceDemolitionMode_C : public UInterface
	{
	public:
		void SetDemolitionMessages(TMap<int32_t, class FString> BombPickup, TMap<int32_t, class FString> BombDropped, TMap<int32_t, class FString> BombPlanted, TMap<int32_t, class FString> BombExploded, TMap<int32_t, class FString> BombDefused);
		void SetDemolitionSounds(TArray<class USoundCue*> BombPickupMusic, TArray<class USoundCue*> BombPlantedVoice, TArray<class USoundCue*> BombPlantedMusic, TArray<class USoundCue*> BombExplodedVoice, TArray<class USoundCue*> BombDefusedVoice);
		void RemoveBombZone(class UBoxComponent* Zone);
		void ClearBombZones();
		void AddBombZone(class UBoxComponent* Zone, int32_t TeamID, const struct FTaskForceIcon& AttackIcon, const struct FTaskForceIcon& DefendIcon);
		void SetBomb(const struct FTransform& Transform, class UStaticMesh* Mesh, bool AttachCustom, ETaskForceBone AttachBone, const struct FTransform& AttachTransform, const struct FTaskForceIcon& Icon);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
