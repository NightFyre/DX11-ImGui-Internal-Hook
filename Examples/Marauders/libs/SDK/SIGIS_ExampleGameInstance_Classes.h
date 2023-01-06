#pragma once

/**
 * Name: RaidGame
 * Version: 1
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
	 * BlueprintGeneratedClass SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C
	 * Size -> 0x01D8 (FullSize[0x1BE8] - InheritedSize[0x1A10])
	 */
	class USIGIS_ExampleGameInstance_C : public USIGISGameInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1A10(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		TArray<int32_t>                                            Ports;                                                   // 0x1A18(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      Regions;                                                 // 0x1A28(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       StartedMM;                                               // 0x1A38(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T0HS[0x7];                                   // 0x1A39(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              RegionSettings;                                          // 0x1A40(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		float                                                      QuickestTime;                                            // 0x1A50(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumberToDo;                                              // 0x1A54(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RegionInd;                                               // 0x1A58(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StartPin;                                                // 0x1A5C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      lastHealthCheckTime;                                     // 0x1A60(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LastEmptyServerTime;                                     // 0x1A64(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxEmptyServerTime;                                      // 0x1A68(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxHealthCheckTime;                                      // 0x1A6C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              MapName;                                                 // 0x1A70(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              GameMode;                                                // 0x1A80(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              PlayerId;                                                // 0x1A90(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              SessionId;                                               // 0x1AA0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		bool                                                       HasAlreadySeenNewsPopup;                                 // 0x1AB0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZZ2X[0x7];                                   // 0x1AB1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              RTC_StoredRoom_ID;                                       // 0x1AB8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		struct FNakamaAccount                                      MyNakamaAccount;                                         // 0x1AC8(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FNakamaNGroupBP                                     NakamaMyCurrentCrew;                                     // 0x1B50(0x0078) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FNakamaNGroupUser>                           NakamaCurrentCrewMembers;                                // 0x1BC8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              LangFirstTimePlaySetting;                                // 0x1BD8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash

	public:
		bool Save_LangFirstTimePlaySetting(bool HasBeenThroughFirstTimeCheck);
		void Load_LangFirstTimePlaySetting(bool* DoesSaveGameExist);
		void RunDevMessagePopup(const class FText& Popup_Title, const class FText& Popup_Desc, class USoundCue* SoundToPlay, float TimeUpFor);
		void GetAmICurrentCaptain(bool* AmIACaptain);
		void GetCurrentCrewMembers(TArray<struct FNakamaNGroupUser>* NakamaCurrentCrewMembers);
		void Get_Current_Crew_Info(struct FNakamaNGroupBP* NakamaMyCurrentCrew, bool* isPlayingSolo);
		void GetMyNakamaAccountInfo(struct FNakamaAccount* Myaccount);
		void SetCurrentCrewMembersInfo(bool Clear, TArray<struct FNakamaNGroupUser>* GroupMembers);
		void SetCurrentCrewInfo(bool Clear, const struct FNakamaNGroupBP& NakamaMyCurrentCrew);
		void SetMemberInOutMatchAttribute(bool isMainMenu);
		bool SaveRegionSetting(int32_t RegionToUse);
		bool LoadRegionSetting(int32_t* RegionInt);
		void OnError_744898654031C91A8C1DE3A1171966EB(const struct FNakamaRPCResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse);
		void OnSuccess_744898654031C91A8C1DE3A1171966EB(const struct FNakamaRPCResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse);
		void OnError_38A69B2E4E0C6365B52D5C8E43B0F1E1(const struct FNakamaListGroupsResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse);
		void OnSuccess_38A69B2E4E0C6365B52D5C8E43B0F1E1(const struct FNakamaListGroupsResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse);
		void OnError_F9C7A97D4A8D1E85CF087FA143318A5B(const struct FNakamaRPCResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse);
		void OnSuccess_F9C7A97D4A8D1E85CF087FA143318A5B(const struct FNakamaRPCResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse);
		void OnStartGameSessionEvent(TArray<struct FGameLiftProperty> Properties);
		void OnHealthCheckEvent();
		void SwitchAWSRegion(unsigned char Region);
		void FoundRecommenedRegionToUse(EAmazonRegions RecommendedReturn);
		void SetVoiceRoomID(const class FString& RoomIDOut);
		void ValidateHealthCheck();
		void SetAndSaveRegionSelect(int32_t WhichRegion);
		void RoomID(const struct FEOSJoinRoomCallbackInfo& Data);
		void RecommenedRegionSelect();
		void CustomEvent_1(const struct FEOSUpdateSendingCallbackInfo& Data);
		void CustomEvent_2(const struct FEOSUpdateReceivingCallbackInfo& Data);
		void SetAsHaveSeenNewsMessage();
		void ClientHasBeenDisconectedEvent(const class FString& Reason);
		void ClientHasnotGotOnlinePrivalige();
		void Refresh_MuteMyMicrophoneSettings();
		void ReceiveInit();
		void RefreshOthersMicrophoneVolume();
		void PingReturn(const class FString& Target, float Duration, const class FString& Resolved, const class FString& Error);
		void ValidateEmptyServer();
		void Callback_RefreshMyMicrophoneOnOff(const struct FEOSUpdateSendingCallbackInfo& Data);
		void SendDynamoRequest(const struct FQueryRequest& RequstOut, EDynamoLeaderBoardEvent RequestType);
		void SendDynamoScoreRequest(const struct FUpdateItemRequest& RequstOut, EDynamoLeaderBoardEvent RequestType);
		void OnKickedCrewMember_Event_1(bool sucessfulkick);
		void Return_NakamaConnected();
		void Return_NakamaDisconnected();
		void Return_NakamaGetAccountDetails(const struct FNakamaAccount& Myaccount);
		void DestroyServerMatchmaking();
		void EndServerhMatchmaking();
		void NakamaBP_DisbandAllMyCrews();
		void NakamaBP_SetPlayerReadyNotReady(bool IsReady);
		void StartAndRefreshMatchmaking();
		void Return_Nakama_Error(const class FString& errorBack);
		void ExitGame_ForceDisbandOrLeaveCrew();
		void Return_GotAnUpdate(TArray<struct FNakamaNotification> returnednotification);
		void SendDelayedUpdateNotify();
		void ExecuteUbergraph_SIGIS_ExampleGameInstance(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
