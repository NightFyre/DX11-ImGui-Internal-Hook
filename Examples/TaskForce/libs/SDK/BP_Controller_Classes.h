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
	 * BlueprintGeneratedClass BP_Controller.BP_Controller_C
	 * Size -> 0x01DC (FullSize[0x08CC] - InheritedSize[0x06F0])
	 */
	class ABP_Controller_C : public ATaskForcePlayerController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FString                                              URL;                                                     // 0x06F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              File;                                                    // 0x0708(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              Script;                                                  // 0x0718(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              NetKey;                                                  // 0x0728(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       ready;                                                   // 0x0738(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       BindingListener;                                         // 0x0739(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LDZA[0x2];                                   // 0x073A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                BindingAction;                                           // 0x073C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_224A[0x4];                                   // 0x0744(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKey                                                BindingKey;                                              // 0x0748(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class UAudioComponent*                                     RoundStartMusic2D;                                       // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUserWidget*                                         Widget;                                                  // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsChat;                                                  // 0x0770(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsTeam;                                                  // 0x0771(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4O8M[0x6];                                   // 0x0772(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_Armory_C*                                        armory;                                                  // 0x0778(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBP_ArmoryOverlay_C*                                 ArmoryOverlay;                                           // 0x0780(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     RoundWinMusic2D;                                         // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              CommandURL;                                              // 0x0790(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              SnapshotURL;                                             // 0x07A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              RenderURL;                                               // 0x07B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       RemoteFlag;                                              // 0x07C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       RemoteWait;                                              // 0x07C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BVY3[0x2];                                   // 0x07C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FadeAlpha;                                               // 0x07C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class USoundCue*>                                   RoundStartMusic1;                                        // 0x07C8(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance
		TArray<class USoundCue*>                                   RoundStartMusic2;                                        // 0x07D8(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance
		TArray<class USoundCue*>                                   RoundWinVoice1;                                          // 0x07E8(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance
		TArray<class USoundCue*>                                   RoundWinMusic1;                                          // 0x07F8(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance
		TArray<class USoundCue*>                                   RoundWinVoice2;                                          // 0x0808(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance
		TArray<class USoundCue*>                                   RoundWinMusic2;                                          // 0x0818(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance
		TArray<class USoundCue*>                                   BombPickupMusic;                                         // 0x0828(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance
		TArray<class USoundCue*>                                   BombPlantedVoice;                                        // 0x0838(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance
		TArray<class USoundCue*>                                   BombPlantedMusic;                                        // 0x0848(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance
		class UAudioComponent*                                     BombPickupMusic2D;                                       // 0x0858(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     BombPlantMusic2D;                                        // 0x0860(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class USoundCue*>                                   BombExplodedVoice;                                       // 0x0868(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance
		TArray<class USoundCue*>                                   BombDefusedVoice;                                        // 0x0878(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance
		TArray<class USoundCue*>                                   HostageGrabbedVoice;                                     // 0x0888(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance
		TArray<class USoundCue*>                                   HostageKilledVoice;                                      // 0x0898(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance
		TArray<class USoundCue*>                                   HostageExtractedVoice;                                   // 0x08A8(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance
		float                                                      StartMusicVolume;                                        // 0x08B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PickupMusicVolume;                                       // 0x08BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PlantedMusicVolume;                                      // 0x08C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WinMusicVolume;                                          // 0x08C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      VoiceVolume;                                             // 0x08C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void FindDefaultSkin(class FString* Skin);
		void OpenLegacySettings(TArray<class FString> WorkshopSkins1, TArray<class FString> WorkshopSkins2);
		void OpenChat(bool TeamOnly);
		void FindWorkshopSkins(TArray<class FString>* Skins1, TArray<class FString>* Skins2);
		void FindWorkshop(class ATaskForceSettings_C** Workshop);
		void PickTeamSound(int32_t Team, TArray<class USoundCue*>* Sounds1, TArray<class USoundCue*>* Sounds2, class USoundCue* Default1, class USoundCue* Default2, class USoundCue** Sound);
		void PickSound(TArray<class USoundCue*>* Sounds, class USoundCue* Default, class USoundCue** Sound);
		void SetHostageSounds(TArray<class USoundCue*>* HostageGrabbedVoice, TArray<class USoundCue*>* HostageKilledVoice, TArray<class USoundCue*>* HostageExtractedVoice);
		void SetSkins(TArray<class FString>* Skins1, TArray<class FString>* Skins2);
		void StopMusic();
		void PlayBombPlantedMusic(int32_t PlantTeam);
		void PlayBombPickupMusic(int32_t PickupTeam);
		void FindRoundWinMusic(int32_t Team, class USoundCue** RoundWin, float* FadeIn);
		void FindRoundStartMusic(class USoundCue** RoundStart, float* FadeIn, float* Delay, float* FadeOut);
		void SetBombSounds(TArray<class USoundCue*>* BombPickupMusic, TArray<class USoundCue*>* BombPlantedVoice, TArray<class USoundCue*>* BombPlantedMusic, TArray<class USoundCue*>* BombExplodedVoice, TArray<class USoundCue*>* BombDefusedVoice);
		void SetRoundSounds(TArray<class USoundCue*>* RoundStartMusic1, TArray<class USoundCue*>* RoundStartMusic2, TArray<class USoundCue*>* RoundWinVoice1, TArray<class USoundCue*>* RoundWinMusic1, TArray<class USoundCue*>* RoundWinVoice2, TArray<class USoundCue*>* RoundWinMusic2);
		void UpdateCameras(TArray<class ATaskForceCharacter*>* Characters, float AspectRatio);
		void PlayRoundEndMusic(int32_t WinnerTeam);
		void PlayRoundStartMusic();
		void PlayRoundWin(int32_t WinnerTeam);
		void ReturnEvent(const struct FKey& Key);
		void InterfaceEvent(const class FName& Name, const struct FJsonLibraryValue& Data, const struct FWebInterfaceCallback& Callback);
		void KickAway();
		void OnArmoryRender();
		void OnArmorySleep();
		void OnBombPlanted(int32_t PlantTeam);
		void OnBombDefused(int32_t DefuseTeam);
		void OnBombExploded(int32_t PlantTeam);
		void OnHostageKilled(int32_t AttackerTeam, int32_t WinnerTeam);
		void OnHostageExtracted(int32_t WinnerTeam);
		void OnRoundStart(const class FString& GameMode);
		void OnRoundEnd(const class FString& GameMode, int32_t WinnerTeam);
		void OnRoundWin(const class FString& GameMode, int32_t WinnerTeam);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void CommandCallback(const class FString& Output, const class FString& Key);
		void SnapshotCallback(TArray<struct FProcessInfo> Output, const class FString& Key);
		void RenderCallback(const class FString& Output, const class FString& Key);
		void OnChatMessage();
		void OnTeamMessage();
		void ReceiveTick(float DeltaSeconds);
		void LoadHUD();
		void DebugJavaScript(bool bAdvanced, bool bExperimental);
		void ReceiveBeginPlay();
		void OnBombPickup(int32_t PickupTeam);
		void LegacySettings();
		void ExecuteUbergraph_BP_Controller(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
