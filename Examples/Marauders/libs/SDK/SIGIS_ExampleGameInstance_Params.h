#pragma once

/**
 * Name: RaidGame
 * Version: 1
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.Save_LangFirstTimePlaySetting
	 */
	struct USIGIS_ExampleGameInstance_C_Save_LangFirstTimePlaySetting_Params
	{
	public:
		bool                                                       HasBeenThroughFirstTimeCheck;                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WNNY[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.Load_LangFirstTimePlaySetting
	 */
	struct USIGIS_ExampleGameInstance_C_Load_LangFirstTimePlaySetting_Params
	{
	public:
		bool                                                       DoesSaveGameExist;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.RunDevMessagePopup
	 */
	struct USIGIS_ExampleGameInstance_C_RunDevMessagePopup_Params
	{
	public:
		class FText                                                Popup_Title;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Popup_Desc;                                              // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class USoundCue*                                           SoundToPlay;                                             // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TimeUpFor;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.GetAmICurrentCaptain
	 */
	struct USIGIS_ExampleGameInstance_C_GetAmICurrentCaptain_Params
	{
	public:
		bool                                                       AmIACaptain;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KLAC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.GetCurrentCrewMembers
	 */
	struct USIGIS_ExampleGameInstance_C_GetCurrentCrewMembers_Params
	{
	public:
		TArray<struct FNakamaNGroupUser>                           NakamaCurrentCrewMembers;                                // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.Get Current Crew Info
	 */
	struct USIGIS_ExampleGameInstance_C_Get_Current_Crew_Info_Params
	{
	public:
		struct FNakamaNGroupBP                                     NakamaMyCurrentCrew;                                     // 0x0000(0x0078)  (Parm, OutParm)
		bool                                                       isPlayingSolo;                                           // 0x0078(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.GetMyNakamaAccountInfo
	 */
	struct USIGIS_ExampleGameInstance_C_GetMyNakamaAccountInfo_Params
	{
	public:
		struct FNakamaAccount                                      Myaccount;                                               // 0x0000(0x0088)  (Parm, OutParm)
	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.SetCurrentCrewMembersInfo
	 */
	struct USIGIS_ExampleGameInstance_C_SetCurrentCrewMembersInfo_Params
	{
	public:
		bool                                                       Clear;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UM3C[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FNakamaNGroupUser>                           GroupMembers;                                            // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.SetCurrentCrewInfo
	 */
	struct USIGIS_ExampleGameInstance_C_SetCurrentCrewInfo_Params
	{
	public:
		bool                                                       Clear;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JWDX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FNakamaNGroupBP                                     NakamaMyCurrentCrew;                                     // 0x0008(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.SetMemberInOutMatchAttribute
	 */
	struct USIGIS_ExampleGameInstance_C_SetMemberInOutMatchAttribute_Params
	{
	public:
		bool                                                       isMainMenu;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.SaveRegionSetting
	 */
	struct USIGIS_ExampleGameInstance_C_SaveRegionSetting_Params
	{
	public:
		int32_t                                                    RegionToUse;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PICN[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.LoadRegionSetting
	 */
	struct USIGIS_ExampleGameInstance_C_LoadRegionSetting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4K4P[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RegionInt;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.OnError_744898654031C91A8C1DE3A1171966EB
	 */
	struct USIGIS_ExampleGameInstance_C_OnError_744898654031C91A8C1DE3A1171966EB_Params
	{
	public:
		struct FNakamaRPCResponse                                  SuccessResponse;                                         // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FNakamaErrorResponse                                ErrorResponse;                                           // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.OnSuccess_744898654031C91A8C1DE3A1171966EB
	 */
	struct USIGIS_ExampleGameInstance_C_OnSuccess_744898654031C91A8C1DE3A1171966EB_Params
	{
	public:
		struct FNakamaRPCResponse                                  SuccessResponse;                                         // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FNakamaErrorResponse                                ErrorResponse;                                           // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.OnError_38A69B2E4E0C6365B52D5C8E43B0F1E1
	 */
	struct USIGIS_ExampleGameInstance_C_OnError_38A69B2E4E0C6365B52D5C8E43B0F1E1_Params
	{
	public:
		struct FNakamaListGroupsResponse                           SuccessResponse;                                         // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FNakamaErrorResponse                                ErrorResponse;                                           // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.OnSuccess_38A69B2E4E0C6365B52D5C8E43B0F1E1
	 */
	struct USIGIS_ExampleGameInstance_C_OnSuccess_38A69B2E4E0C6365B52D5C8E43B0F1E1_Params
	{
	public:
		struct FNakamaListGroupsResponse                           SuccessResponse;                                         // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FNakamaErrorResponse                                ErrorResponse;                                           // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.OnError_F9C7A97D4A8D1E85CF087FA143318A5B
	 */
	struct USIGIS_ExampleGameInstance_C_OnError_F9C7A97D4A8D1E85CF087FA143318A5B_Params
	{
	public:
		struct FNakamaRPCResponse                                  SuccessResponse;                                         // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FNakamaErrorResponse                                ErrorResponse;                                           // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.OnSuccess_F9C7A97D4A8D1E85CF087FA143318A5B
	 */
	struct USIGIS_ExampleGameInstance_C_OnSuccess_F9C7A97D4A8D1E85CF087FA143318A5B_Params
	{
	public:
		struct FNakamaRPCResponse                                  SuccessResponse;                                         // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FNakamaErrorResponse                                ErrorResponse;                                           // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.OnStartGameSessionEvent
	 */
	struct USIGIS_ExampleGameInstance_C_OnStartGameSessionEvent_Params
	{
	public:
		TArray<struct FGameLiftProperty>                           Properties;                                              // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.OnHealthCheckEvent
	 */
	struct USIGIS_ExampleGameInstance_C_OnHealthCheckEvent_Params
	{	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.SwitchAWSRegion
	 */
	struct USIGIS_ExampleGameInstance_C_SwitchAWSRegion_Params
	{
	public:
		unsigned char                                              Region;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.FoundRecommenedRegionToUse
	 */
	struct USIGIS_ExampleGameInstance_C_FoundRecommenedRegionToUse_Params
	{
	public:
		EAmazonRegions                                             RecommendedReturn;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.SetVoiceRoomID
	 */
	struct USIGIS_ExampleGameInstance_C_SetVoiceRoomID_Params
	{
	public:
		class FString                                              RoomIDOut;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.ValidateHealthCheck
	 */
	struct USIGIS_ExampleGameInstance_C_ValidateHealthCheck_Params
	{	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.SetAndSaveRegionSelect
	 */
	struct USIGIS_ExampleGameInstance_C_SetAndSaveRegionSelect_Params
	{
	public:
		int32_t                                                    WhichRegion;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.RoomID
	 */
	struct USIGIS_ExampleGameInstance_C_RoomID_Params
	{
	public:
		struct FEOSJoinRoomCallbackInfo                            Data;                                                    // 0x0000(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.RecommenedRegionSelect
	 */
	struct USIGIS_ExampleGameInstance_C_RecommenedRegionSelect_Params
	{	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.CustomEvent_1
	 */
	struct USIGIS_ExampleGameInstance_C_CustomEvent_1_Params
	{
	public:
		struct FEOSUpdateSendingCallbackInfo                       Data;                                                    // 0x0000(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.CustomEvent_2
	 */
	struct USIGIS_ExampleGameInstance_C_CustomEvent_2_Params
	{
	public:
		struct FEOSUpdateReceivingCallbackInfo                     Data;                                                    // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.SetAsHaveSeenNewsMessage
	 */
	struct USIGIS_ExampleGameInstance_C_SetAsHaveSeenNewsMessage_Params
	{	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.ClientHasBeenDisconectedEvent
	 */
	struct USIGIS_ExampleGameInstance_C_ClientHasBeenDisconectedEvent_Params
	{
	public:
		class FString                                              Reason;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.ClientHasnotGotOnlinePrivalige
	 */
	struct USIGIS_ExampleGameInstance_C_ClientHasnotGotOnlinePrivalige_Params
	{	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.Refresh_MuteMyMicrophoneSettings
	 */
	struct USIGIS_ExampleGameInstance_C_Refresh_MuteMyMicrophoneSettings_Params
	{	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.ReceiveInit
	 */
	struct USIGIS_ExampleGameInstance_C_ReceiveInit_Params
	{	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.RefreshOthersMicrophoneVolume
	 */
	struct USIGIS_ExampleGameInstance_C_RefreshOthersMicrophoneVolume_Params
	{	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.PingReturn
	 */
	struct USIGIS_ExampleGameInstance_C_PingReturn_Params
	{
	public:
		class FString                                              Target;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      Duration;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FZ8F[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Resolved;                                                // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Error;                                                   // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.ValidateEmptyServer
	 */
	struct USIGIS_ExampleGameInstance_C_ValidateEmptyServer_Params
	{	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.Callback_RefreshMyMicrophoneOnOff
	 */
	struct USIGIS_ExampleGameInstance_C_Callback_RefreshMyMicrophoneOnOff_Params
	{
	public:
		struct FEOSUpdateSendingCallbackInfo                       Data;                                                    // 0x0000(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.SendDynamoRequest
	 */
	struct USIGIS_ExampleGameInstance_C_SendDynamoRequest_Params
	{
	public:
		struct FQueryRequest                                       RequstOut;                                               // 0x0000(0x0158)  (BlueprintVisible, BlueprintReadOnly, Parm)
		EDynamoLeaderBoardEvent                                    RequestType;                                             // 0x0158(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.SendDynamoScoreRequest
	 */
	struct USIGIS_ExampleGameInstance_C_SendDynamoScoreRequest_Params
	{
	public:
		struct FUpdateItemRequest                                  RequstOut;                                               // 0x0000(0x0128)  (BlueprintVisible, BlueprintReadOnly, Parm)
		EDynamoLeaderBoardEvent                                    RequestType;                                             // 0x0128(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.OnKickedCrewMember_Event_1
	 */
	struct USIGIS_ExampleGameInstance_C_OnKickedCrewMember_Event_1_Params
	{
	public:
		bool                                                       sucessfulkick;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.Return_NakamaConnected
	 */
	struct USIGIS_ExampleGameInstance_C_Return_NakamaConnected_Params
	{	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.Return_NakamaDisconnected
	 */
	struct USIGIS_ExampleGameInstance_C_Return_NakamaDisconnected_Params
	{	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.Return_NakamaGetAccountDetails
	 */
	struct USIGIS_ExampleGameInstance_C_Return_NakamaGetAccountDetails_Params
	{
	public:
		struct FNakamaAccount                                      Myaccount;                                               // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.DestroyServerMatchmaking
	 */
	struct USIGIS_ExampleGameInstance_C_DestroyServerMatchmaking_Params
	{	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.EndServerhMatchmaking
	 */
	struct USIGIS_ExampleGameInstance_C_EndServerhMatchmaking_Params
	{	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.NakamaBP_DisbandAllMyCrews
	 */
	struct USIGIS_ExampleGameInstance_C_NakamaBP_DisbandAllMyCrews_Params
	{	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.NakamaBP_SetPlayerReadyNotReady
	 */
	struct USIGIS_ExampleGameInstance_C_NakamaBP_SetPlayerReadyNotReady_Params
	{
	public:
		bool                                                       IsReady;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.StartAndRefreshMatchmaking
	 */
	struct USIGIS_ExampleGameInstance_C_StartAndRefreshMatchmaking_Params
	{	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.Return_Nakama_Error
	 */
	struct USIGIS_ExampleGameInstance_C_Return_Nakama_Error_Params
	{
	public:
		class FString                                              errorBack;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.ExitGame_ForceDisbandOrLeaveCrew
	 */
	struct USIGIS_ExampleGameInstance_C_ExitGame_ForceDisbandOrLeaveCrew_Params
	{	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.Return_GotAnUpdate
	 */
	struct USIGIS_ExampleGameInstance_C_Return_GotAnUpdate_Params
	{
	public:
		TArray<struct FNakamaNotification>                         returnednotification;                                    // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.SendDelayedUpdateNotify
	 */
	struct USIGIS_ExampleGameInstance_C_SendDelayedUpdateNotify_Params
	{	};

	/**
	 * Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.ExecuteUbergraph_SIGIS_ExampleGameInstance
	 */
	struct USIGIS_ExampleGameInstance_C_ExecuteUbergraph_SIGIS_ExampleGameInstance_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
