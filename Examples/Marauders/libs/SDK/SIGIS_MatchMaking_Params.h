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
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.SetMatchStartedDontLetOthersJoin
	 */
	struct USIGIS_MatchMaking_C_SetMatchStartedDontLetOthersJoin_Params
	{
	public:
		bool                                                       SetMatchHasStarted;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.SetTeamSoloIDS
	 */
	struct USIGIS_MatchMaking_C_SetTeamSoloIDS_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.GetSetShipCurrentName
	 */
	struct USIGIS_MatchMaking_C_GetSetShipCurrentName_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.SetServerLocation_TAB
	 */
	struct USIGIS_MatchMaking_C_SetServerLocation_TAB_Params
	{
	public:
		int32_t                                                    WhichTabActive;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.SetServerLocationPreference
	 */
	struct USIGIS_MatchMaking_C_SetServerLocationPreference_Params
	{
	public:
		int32_t                                                    WhichRegion;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OnlyVisuals;                                             // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8CDK[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.SetupReqPasswordInfo
	 */
	struct USIGIS_MatchMaking_C_SetupReqPasswordInfo_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.LoadLastCrewDetails
	 */
	struct USIGIS_MatchMaking_C_LoadLastCrewDetails_Params
	{
	public:
		bool                                                       DidLoad;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_46KE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              PrevCrewName;                                            // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.SaveLastCrewDetails
	 */
	struct USIGIS_MatchMaking_C_SaveLastCrewDetails_Params
	{
	public:
		class FString                                              PrevCrewName;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1086[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.UpdateFindingMatchStatus
	 */
	struct USIGIS_MatchMaking_C_UpdateFindingMatchStatus_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RYKH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Message;                                                 // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.StopSearchingForMatchUI
	 */
	struct USIGIS_MatchMaking_C_StopSearchingForMatchUI_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.SetCaptainAllowedToSearchForMatch
	 */
	struct USIGIS_MatchMaking_C_SetCaptainAllowedToSearchForMatch_Params
	{
	public:
		bool                                                       b_AllowSearchForMatch;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.ShowBtnQuitMatchMakeDuringLoadingScreen
	 */
	struct USIGIS_MatchMaking_C_ShowBtnQuitMatchMakeDuringLoadingScreen_Params
	{
	public:
		bool                                                       isCaptain;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isSoloMatch;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.FadeOutLoadingScreenToLaunchMatch
	 */
	struct USIGIS_MatchMaking_C_FadeOutLoadingScreenToLaunchMatch_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.Set_Region_TabLook
	 */
	struct USIGIS_MatchMaking_C_Set_Region_TabLook_Params
	{
	public:
		ERegionSig                                                 Region;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.IsSlotFullOrEmpty
	 */
	struct USIGIS_MatchMaking_C_IsSlotFullOrEmpty_Params
	{
	public:
		bool                                                       ForceAllEmpty;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L4VT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.Get_AllCrewMemberWidgets
	 */
	struct USIGIS_MatchMaking_C_Get_AllCrewMemberWidgets_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.SetCrewUI_AsType
	 */
	struct USIGIS_MatchMaking_C_SetCrewUI_AsType_Params
	{
	public:
		bool                                                       isCaptain;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.SetLoadingScreenDetails
	 */
	struct USIGIS_MatchMaking_C_SetLoadingScreenDetails_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.ShowHideLoadingListIcon
	 */
	struct USIGIS_MatchMaking_C_ShowHideLoadingListIcon_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.GetCrewID
	 */
	struct USIGIS_MatchMaking_C_GetCrewID_Params
	{
	public:
		class FString                                              Output_Get;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.SwitchMatchmakingState
	 */
	struct USIGIS_MatchMaking_C_SwitchMatchmakingState_Params
	{
	public:
		E_MatchMakingStates                                        SwitchToMatchMakingState;                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.RefreshThis
	 */
	struct USIGIS_MatchMaking_C_RefreshThis_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.KickPlayer
	 */
	struct USIGIS_MatchMaking_C_KickPlayer_Params
	{
	public:
		class FString                                              userId;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__RefreshBtn_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct USIGIS_MatchMaking_C_BndEvt__RefreshBtn_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.RefreshCrewMembers
	 */
	struct USIGIS_MatchMaking_C_RefreshCrewMembers_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.RefreshCrewLobby
	 */
	struct USIGIS_MatchMaking_C_RefreshCrewLobby_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.Construct
	 */
	struct USIGIS_MatchMaking_C_Construct_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__ServerBrowse_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct USIGIS_MatchMaking_C_BndEvt__ServerBrowse_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_StartASquad_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_MatchMaking_C_BndEvt__Btn_StartASquad_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_CancelCreateCrew_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_MatchMaking_C_BndEvt__Btn_CancelCreateCrew_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Button_124_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct USIGIS_MatchMaking_C_BndEvt__Button_124_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.OpenSearchForCrew
	 */
	struct USIGIS_MatchMaking_C_OpenSearchForCrew_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.CloseSearchForCrew
	 */
	struct USIGIS_MatchMaking_C_CloseSearchForCrew_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_RefreshList_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 */
	struct USIGIS_MatchMaking_C_BndEvt__Btn_RefreshList_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_LeaveGroup_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_MatchMaking_C_BndEvt__Btn_LeaveGroup_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_DestroyGroup_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_MatchMaking_C_BndEvt__Btn_DestroyGroup_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.InACrewOpen
	 */
	struct USIGIS_MatchMaking_C_InACrewOpen_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.InACrewClose
	 */
	struct USIGIS_MatchMaking_C_InACrewClose_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.HeartbreatInCaptain
	 */
	struct USIGIS_MatchMaking_C_HeartbreatInCaptain_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.RefreshUIForCrewMembers
	 */
	struct USIGIS_MatchMaking_C_RefreshUIForCrewMembers_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__FetchLobby_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct USIGIS_MatchMaking_C_BndEvt__FetchLobby_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__StartMatchMake_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct USIGIS_MatchMaking_C_BndEvt__StartMatchMake_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.MMFail
	 */
	struct USIGIS_MatchMaking_C_MMFail_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_StartANewSquad_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_MatchMaking_C_BndEvt__Btn_StartANewSquad_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_RefreshCrewListNoCrewsFound_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_MatchMaking_C_BndEvt__Btn_RefreshCrewListNoCrewsFound_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.OpenedMatchmaking
	 */
	struct USIGIS_MatchMaking_C_OpenedMatchmaking_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.Heartbeat_NonCaptain
	 */
	struct USIGIS_MatchMaking_C_Heartbeat_NonCaptain_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.FoundIP
	 */
	struct USIGIS_MatchMaking_C_FoundIP_Params
	{
	public:
		class FString                                              ip;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.CptMatchMake
	 */
	struct USIGIS_MatchMaking_C_CptMatchMake_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.MM Fake Players
	 */
	struct USIGIS_MatchMaking_C_MM_Fake_Players_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.FailedCptMM
	 */
	struct USIGIS_MatchMaking_C_FailedCptMM_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.FindingMatchOvertime
	 */
	struct USIGIS_MatchMaking_C_FindingMatchOvertime_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.FILLMM
	 */
	struct USIGIS_MatchMaking_C_FILLMM_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.SearchingForMatchTimer
	 */
	struct USIGIS_MatchMaking_C_SearchingForMatchTimer_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.SearchForMatch_StartTimer
	 */
	struct USIGIS_MatchMaking_C_SearchForMatch_StartTimer_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.SearchForMatch_StopTimer
	 */
	struct USIGIS_MatchMaking_C_SearchForMatch_StopTimer_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__BACKBTN_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_MatchMaking_C_BndEvt__BACKBTN_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.GoBack_CaptainLeaveGroup
	 */
	struct USIGIS_MatchMaking_C_GoBack_CaptainLeaveGroup_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.GoBack_CrewMemberLeave
	 */
	struct USIGIS_MatchMaking_C_GoBack_CrewMemberLeave_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_Region_USA_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_MatchMaking_C_BndEvt__Btn_Region_USA_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_Region_EU_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_MatchMaking_C_BndEvt__Btn_Region_EU_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_CancelFindMatch_CrewVersion_K2Node_ComponentBoundEvent_17_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_MatchMaking_C_BndEvt__Btn_CancelFindMatch_CrewVersion_K2Node_ComponentBoundEvent_17_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_CancelFindMatch_CaptainVersion_K2Node_ComponentBoundEvent_18_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_MatchMaking_C_BndEvt__Btn_CancelFindMatch_CaptainVersion_K2Node_ComponentBoundEvent_18_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_CancelFindMatch_SoloVersion_K2Node_ComponentBoundEvent_19_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_MatchMaking_C_BndEvt__Btn_CancelFindMatch_SoloVersion_K2Node_ComponentBoundEvent_19_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.FakeGoBackPress_Matchmaking
	 */
	struct USIGIS_MatchMaking_C_FakeGoBackPress_Matchmaking_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.ClosedMatchmaking
	 */
	struct USIGIS_MatchMaking_C_ClosedMatchmaking_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.RefreshServerBrowserList
	 */
	struct USIGIS_MatchMaking_C_RefreshServerBrowserList_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_RefreshServerBrowserList_K2Node_ComponentBoundEvent_20_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_MatchMaking_C_BndEvt__Btn_RefreshServerBrowserList_K2Node_ComponentBoundEvent_20_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_RefreshServerBrowsList_NoCrewsFound_K2Node_ComponentBoundEvent_21_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_MatchMaking_C_BndEvt__Btn_RefreshServerBrowsList_NoCrewsFound_K2Node_ComponentBoundEvent_21_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.NewStatus
	 */
	struct USIGIS_MatchMaking_C_NewStatus_Params
	{
	public:
		EMMatchmakingStatus                                        MatchmakingStatus;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.Error
	 */
	struct USIGIS_MatchMaking_C_Error_Params
	{
	public:
		class FString                                              Reason;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.JoinGAmePressed
	 */
	struct USIGIS_MatchMaking_C_JoinGAmePressed_Params
	{
	public:
		class FString                                              address;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.PlayFab_CancelMatchmaking
	 */
	struct USIGIS_MatchMaking_C_PlayFab_CancelMatchmaking_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.JoinCrew_New
	 */
	struct USIGIS_MatchMaking_C_JoinCrew_New_Params
	{
	public:
		class FString                                              CrewID;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       HasPassword;                                             // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6FRO[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                CrewNiceName;                                            // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_ReqPasswordTry_K2Node_ComponentBoundEvent_24_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_MatchMaking_C_BndEvt__Btn_ReqPasswordTry_K2Node_ComponentBoundEvent_24_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_ReqPasswordCancel_K2Node_ComponentBoundEvent_25_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_MatchMaking_C_BndEvt__Btn_ReqPasswordCancel_K2Node_ComponentBoundEvent_25_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.CustomEvent_3
	 */
	struct USIGIS_MatchMaking_C_CustomEvent_3_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.SeeIfPasswordCorrectHeartbeat
	 */
	struct USIGIS_MatchMaking_C_SeeIfPasswordCorrectHeartbeat_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_RegionSelect_USAWEST_K2Node_ComponentBoundEvent_23_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_MatchMaking_C_BndEvt__Btn_RegionSelect_USAWEST_K2Node_ComponentBoundEvent_23_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_RegionSelect_USA_EAST_K2Node_ComponentBoundEvent_26_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_MatchMaking_C_BndEvt__Btn_RegionSelect_USA_EAST_K2Node_ComponentBoundEvent_26_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_RegionSelect_EU_K2Node_ComponentBoundEvent_27_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_MatchMaking_C_BndEvt__Btn_RegionSelect_EU_K2Node_ComponentBoundEvent_27_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_RegionSelect_Recomended_K2Node_ComponentBoundEvent_28_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_MatchMaking_C_BndEvt__Btn_RegionSelect_Recomended_K2Node_ComponentBoundEvent_28_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.EmptyCustom
	 */
	struct USIGIS_MatchMaking_C_EmptyCustom_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.Cancel_FindMatch_FromCaptainView
	 */
	struct USIGIS_MatchMaking_C_Cancel_FindMatch_FromCaptainView_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.Cancel_FindMatch_SoloVersion
	 */
	struct USIGIS_MatchMaking_C_Cancel_FindMatch_SoloVersion_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.SoloPlayerGoToMatch
	 */
	struct USIGIS_MatchMaking_C_SoloPlayerGoToMatch_Params
	{
	public:
		class FString                                              URLToUse;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.AWS_Start MM
	 */
	struct USIGIS_MatchMaking_C_AWS_Start_MM_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.AWS_UPDATE MM
	 */
	struct USIGIS_MatchMaking_C_AWS_UPDATE_MM_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.AWS_Cancel MM
	 */
	struct USIGIS_MatchMaking_C_AWS_Cancel_MM_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.AWS_PartyConnect
	 */
	struct USIGIS_MatchMaking_C_AWS_PartyConnect_Params
	{
	public:
		class FString                                              PlayerSessionId;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              ip;                                                      // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.MMQueryReturn_2
	 */
	struct USIGIS_MatchMaking_C_MMQueryReturn_2_Params
	{	};

	/**
	 * Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.ExecuteUbergraph_SIGIS_MatchMaking
	 */
	struct USIGIS_MatchMaking_C_ExecuteUbergraph_SIGIS_MatchMaking_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6IE2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
