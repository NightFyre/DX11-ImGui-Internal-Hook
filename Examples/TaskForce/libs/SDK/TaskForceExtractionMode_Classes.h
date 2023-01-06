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
	 * BlueprintGeneratedClass TaskForceExtractionMode.TaskForceExtractionMode_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTaskForceExtractionMode_C : public UInterface
	{
	public:
		void SetExtractionMessages(TMap<int32_t, class FString> HostageGrabbed, TMap<int32_t, class FString> HostageKilled, TMap<int32_t, class FString> HostageExtracted);
		void SetExtractionSounds(TArray<class USoundCue*> HostageGrabbedVoice, TArray<class USoundCue*> HostageKilledVoice, TMap<int32_t, class USoundCue*> HostageKilledMusic, TArray<class USoundCue*> HostageExtractedVoice, TMap<int32_t, class USoundCue*> HostageExtractedMusic);
		void RemoveExtractionZone(class UBoxComponent* Zone);
		void ClearExtractionZones();
		void AddExtractionZone(class UBoxComponent* Zone, int32_t TeamID, const struct FTaskForceIcon& Icon);
		void RemoveHostage(class APlayerStart* Spawn);
		void ClearHostages();
		void AddHostage(class APlayerStart* Spawn, const class FName& Name, class USkeletalMeshComponent* Head, class USkeletalMeshComponent* Body, class USkeletalMeshComponent* Hat, class USkeletalMeshComponent* Shirt, class USkeletalMeshComponent* Pants, class USkeletalMeshComponent* Shoes, class USkeletalMeshComponent* Gloves, class USkeletalMeshComponent* Gear);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
