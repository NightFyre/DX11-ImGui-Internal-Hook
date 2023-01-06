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
	 * BlueprintGeneratedClass TaskForceHelpers.TaskForceHelpers_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTaskForceHelpers_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GetButtonMaxHoldTime(class AActor* Target, class UObject* __WorldContext, float* MaxHoldTime);
		void STATIC_IsButtonLocked(class AActor* Target, class UObject* __WorldContext, bool* Locked);
		void STATIC_IsButtonOneTime(class AActor* Target, class UObject* __WorldContext, bool* OneTime);
		void STATIC_ReleaseButton(class AActor* Target, class UObject* __WorldContext, bool* Released);
		void STATIC_PressButton(class AActor* Target, class UObject* __WorldContext, bool* Pressed);
		void STATIC_DestroyActor(class AActor* Target, class UObject* __WorldContext);
		void STATIC_GetDefaultPawnClass(class AController* Controller, class UClass* DefaultClass, bool Skeleton, TArray<class UClass*>* Blueprints, class UObject* __WorldContext, class UClass** Class);
		void STATIC_GetSkin(TMap<class FString, struct FTaskForceSkin> Skins, const class FString& Key, int32_t Seed, class UObject* __WorldContext, bool* Empty, struct FTaskForceSkin* Skin);
		void STATIC_FindSkin(int32_t TeamID, const class FString& Key, int32_t Seed, TMap<class FString, struct FTaskForceSkin> Skins0, TMap<class FString, struct FTaskForceSkin> Skins1, TMap<class FString, struct FTaskForceSkin> Skins2, class UObject* __WorldContext, struct FTaskForceSkin* Skin);
		void STATIC_SpawnDefaultPawn(class AController* Controller, class APawn* Pawn, TMap<class FString, struct FTaskForceSkin> Skins0, TMap<class FString, struct FTaskForceSkin> Skins1, TMap<class FString, struct FTaskForceSkin> Skins2, class UObject* __WorldContext);
		void STATIC_SetupGameSkins(int32_t TeamID, TMap<class FString, struct FTaskForceSkin> Skins, ETaskForceRegions Region, bool ColdWeather, class UObject* __WorldContext);
		void STATIC_SetupGame(class AGameModeBase* GameMode, class UObject* __WorldContext);
		void STATIC_SetupBreaches(class AGameModeBase* GameMode, class UObject* __WorldContext);
		void STATIC_SetupButtons(class AGameModeBase* GameMode, class UObject* __WorldContext);
		void STATIC_ClearAll(class AActor* World_Context, class UObject* __WorldContext);
		void STATIC_SetupWeapons(class AGameModeBase* GameMode, class UObject* __WorldContext);
		void STATIC_SetupDoors(class AGameModeBase* GameMode, class UObject* __WorldContext);
		void STATIC_SetupLadders(class AGameModeBase* GameMode, class UObject* __WorldContext);
		void STATIC_SetupExtraction(class AGameModeBase* GameMode, class UObject* __WorldContext);
		void STATIC_SetupSpawns(class AGameModeBase* GameMode, class UObject* __WorldContext);
		void STATIC_SetupDemolition(class AGameModeBase* GameMode, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
