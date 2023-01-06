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
	 * BlueprintGeneratedClass TaskForceSettings.TaskForceSettings_C
	 * Size -> 0x040A (FullSize[0x064A] - InheritedSize[0x0240])
	 */
	class ATaskForceSettings_C : public AActor
	{
	public:
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TMap<class FString, struct FTaskForceSkin>                 Skins1;                                                  // 0x0248(0x0050) Edit, BlueprintVisible, ZeroConstructor
		TMap<class FString, struct FTaskForceSkin>                 Skins2;                                                  // 0x0298(0x0050) Edit, BlueprintVisible, ZeroConstructor
		TArray<class USoundCue*>                                   RoundStartMusic1;                                        // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class USoundCue*>                                   RoundStartMusic2;                                        // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		class FString                                              RoundStartText0;                                         // 0x0308(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              RoundStartText1;                                         // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              RoundStartText2;                                         // 0x0328(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              RoundEndText1;                                           // 0x0338(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              RoundEndText2;                                           // 0x0348(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              RoundWinText1;                                           // 0x0358(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              RoundWinText2;                                           // 0x0368(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		TArray<class USoundCue*>                                   RoundWinMusic1;                                          // 0x0378(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class USoundCue*>                                   RoundWinMusic2;                                          // 0x0388(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class USoundCue*>                                   BombPickupMusic;                                         // 0x0398(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class USoundCue*>                                   BombPlantMusic;                                          // 0x03A8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		class FString                                              BombPickupText1;                                         // 0x03B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              BombPickupText2;                                         // 0x03C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              BombDroppedText1;                                        // 0x03D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              BombDroppedText2;                                        // 0x03E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              BombPlantedText1;                                        // 0x03F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              BombPlantedText2;                                        // 0x0408(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              HostageFollowText1;                                      // 0x0418(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              HostageFollowText2;                                      // 0x0428(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              HostageKilledText1;                                      // 0x0438(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              HostageKilledText2;                                      // 0x0448(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              HostageExtractedText;                                    // 0x0458(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		TMap<class FString, struct FTaskForceSkin>                 Skins0;                                                  // 0x0468(0x0050) Edit, BlueprintVisible, ZeroConstructor
		TArray<class USoundCue*>                                   RoundWinVoice1;                                          // 0x04B8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class USoundCue*>                                   RoundWinVoice2;                                          // 0x04C8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class USoundCue*>                                   BombPlantVoice;                                          // 0x04D8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class USoundCue*>                                   BombExplodedVoice;                                       // 0x04E8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class USoundCue*>                                   BombDefusedVoice;                                        // 0x04F8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class USoundCue*>                                   HostageFollowVoice;                                      // 0x0508(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class USoundCue*>                                   HostageKilledVoice;                                      // 0x0518(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class USoundCue*>                                   HostageExtractedVoice;                                   // 0x0528(0x0010) Edit, BlueprintVisible, ZeroConstructor
		class FString                                              BombExplodedText1;                                       // 0x0538(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              BombExplodedText2;                                       // 0x0548(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              BombDefusedText1;                                        // 0x0558(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              BombDefusedText2;                                        // 0x0568(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              TeamName1;                                               // 0x0578(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              TeamName2;                                               // 0x0588(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		TArray<class USoundCue*>                                   BreachExplodedMusic;                                     // 0x0598(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class USoundCue*>                                   BreachExplodedVoice;                                     // 0x05A8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		class FString                                              BreachPlantedText;                                       // 0x05B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              BreachExplodedText;                                      // 0x05C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		TArray<class USoundCue*>                                   VipRescuedMusic;                                         // 0x05D8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class USoundCue*>                                   VipKilledVoice;                                          // 0x05E8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class USoundCue*>                                   VipTeamKilledVoice;                                      // 0x05F8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class USoundCue*>                                   VipExtractedVoice;                                       // 0x0608(0x0010) Edit, BlueprintVisible, ZeroConstructor
		class FString                                              VipKilledText;                                           // 0x0618(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              VipTeamKilledText;                                       // 0x0628(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              VipExtractedText;                                        // 0x0638(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		ETaskForceRegions                                          Region;                                                  // 0x0648(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ColdWeather;                                             // 0x0649(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
