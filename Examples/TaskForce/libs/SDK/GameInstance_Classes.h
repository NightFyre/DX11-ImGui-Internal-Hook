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
	 * BlueprintGeneratedClass GameInstance.GameInstance_C
	 * Size -> 0x0148 (FullSize[0x0658] - InheritedSize[0x0510])
	 */
	class UGameInstance_C : public UTFGameInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       Debug;                                                   // 0x0518(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9SBP[0x7];                                   // 0x0519(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              File;                                                    // 0x0520(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              FileHUD;                                                 // 0x0530(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              WorkshopFile;                                            // 0x0540(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              DebugFile;                                               // 0x0550(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              DebugFileHUD;                                            // 0x0560(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		float                                                      Init;                                                    // 0x0570(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Exit;                                                    // 0x0574(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDiscordHelpers*                                     Discord;                                                 // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ReadyHUD;                                                // 0x0580(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9NRR[0x7];                                   // 0x0581(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, bool>                                  SteamStats;                                              // 0x0588(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       Activated;                                               // 0x05D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K5EV[0x3];                                   // 0x05D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ActivateDelay;                                           // 0x05DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          MusicCue;                                                // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MusicStart;                                              // 0x05E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MusicDelay;                                              // 0x05EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class USoundBase*>                                  BackgroundCues;                                          // 0x05F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TMap<class FString, class USoundBase*>                     SoundCues;                                               // 0x0600(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UAudioComponent*                                     Music;                                                   // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void StartBackgroundMusic(const class FScriptDelegate& Replay, float* Volume);
		void ReplayBackgroundMusic(const class FScriptDelegate& Replay);
		void PlayLogoAnimation();
		void StringArrayToInt64Array(const struct FJsonLibraryList& Users, TArray<int64_t>* SteamIDs);
		void LoadMenu(class UWebInterface* Menu);
		void LoadHUD(class UWebInterface* HUD);
		void CreateInterface(class UWebInterface** Menu, class UWebInterface** HUD);
		void CreateDiscord(const class FScriptDelegate& OnJoin, const class FScriptDelegate& OnJoinRequest);
		void OnFailure_2E881757433C96B2B6C0889453997A7E(TArray<unsigned char> Response, EHttpLibraryContentType ContentType, int32_t StatusCode, int32_t BytesSent, int32_t BytesReceived);
		void OnProgress_2E881757433C96B2B6C0889453997A7E(TArray<unsigned char> Response, EHttpLibraryContentType ContentType, int32_t StatusCode, int32_t BytesSent, int32_t BytesReceived);
		void OnSuccess_2E881757433C96B2B6C0889453997A7E(TArray<unsigned char> Response, EHttpLibraryContentType ContentType, int32_t StatusCode, int32_t BytesSent, int32_t BytesReceived);
		void OnFailure_274D3B3547CA4840B66A16BA981AAE01(const struct FJsonLibraryObject& Leaderboard);
		void OnSuccess_274D3B3547CA4840B66A16BA981AAE01(const struct FJsonLibraryObject& Leaderboard);
		void OnFailure_569004EB42568F4A3DF9E6B9B1347237(const struct FJsonLibraryObject& Leaderboard);
		void OnSuccess_569004EB42568F4A3DF9E6B9B1347237(const struct FJsonLibraryObject& Leaderboard);
		void OnFailure_586FE2974B4246A54F3D0682A8E17CA3(int32_t CurrentPlayers);
		void OnSuccess_586FE2974B4246A54F3D0682A8E17CA3(int32_t CurrentPlayers);
		void OnFailure_E01D25D4437511AE1B409FAD0579C20B(const struct FJsonLibraryObject& Stats);
		void OnSuccess_E01D25D4437511AE1B409FAD0579C20B(const struct FJsonLibraryObject& Stats);
		void OnFailure_24492C2A4A0BB3EEF1280B8C4EEF2515(const struct FJsonLibraryObject& Stats);
		void OnSuccess_24492C2A4A0BB3EEF1280B8C4EEF2515(const struct FJsonLibraryObject& Stats);
		void OnFailure_F41B63974E2B94C3188FD7998AB5C7A8(TArray<struct FWorkshopItem> Items, int32_t Page, int32_t Matches, bool bCached, EWorkshopResult Result);
		void OnSuccess_F41B63974E2B94C3188FD7998AB5C7A8(TArray<struct FWorkshopItem> Items, int32_t Page, int32_t Matches, bool bCached, EWorkshopResult Result);
		void ReceiveOnStart();
		void OnBroadcast(const class FName& Name, const struct FJsonLibraryValue& Data, const struct FWebInterfaceCallback& Callback);
		void OnDiscordInit(const class FString& DiscordAppID, const class FString& SteamAppID);
		void OnDiscordShutdown();
		void OnDiscordCallbacks();
		void OnDiscordPresence(const struct FDiscordRichPresence& Presence);
		void OnDiscordJoinRequest(const struct FDiscordJoinRequestData& joinRequest);
		void OnDiscordRespond(const class FString& DiscordUserID, bool bAccept);
		void OnDiscordJoin(const class FString& joinSecret);
		void OnBroadcastHUD(const class FName& Name, const struct FJsonLibraryValue& Data, const struct FWebInterfaceCallback& Callback);
		void OnBroadcastShared(const class FName& Name, const struct FJsonLibraryValue& Data, const struct FWebInterfaceCallback& Callback);
		void OnMenu();
		void ReceiveOnBackgroundMusic();
		void OnReplay();
		void ExecuteUbergraph_GameInstance(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
