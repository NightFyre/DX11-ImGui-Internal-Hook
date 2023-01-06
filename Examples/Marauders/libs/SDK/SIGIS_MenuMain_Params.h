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
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.FrontEndMessage
	 */
	struct USIGIS_MenuMain_C_FrontEndMessage_Params
	{
	public:
		bool                                                       ShowMessage;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I410[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Text;                                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.Nakama_SetPrivateVisuals
	 */
	struct USIGIS_MenuMain_C_Nakama_SetPrivateVisuals_Params
	{
	public:
		bool                                                       b_isCrewLocked;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.Nakama_Notify_RemoveAllInvites
	 */
	struct USIGIS_MenuMain_C_Nakama_Notify_RemoveAllInvites_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.Nakama_SetPlayerReadyNotReady_DontUseNowInGameInstance
	 */
	struct USIGIS_MenuMain_C_Nakama_SetPlayerReadyNotReady_DontUseNowInGameInstance_Params
	{
	public:
		bool                                                       IsReady;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SQQR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.Nakama_RefreshCrewInfo
	 */
	struct USIGIS_MenuMain_C_Nakama_RefreshCrewInfo_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.Nakama_IsPartOfACrew
	 */
	struct USIGIS_MenuMain_C_Nakama_IsPartOfACrew_Params
	{
	public:
		bool                                                       IsInCrew;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3516[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.Event_StartWarningReason
	 */
	struct USIGIS_MenuMain_C_Event_StartWarningReason_Params
	{
	public:
		class FText                                                WarningMessage;                                          // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class USoundBase*                                          Sound;                                                   // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidgetAnimation*                                    InAnimation;                                             // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.CalculateLowestPing
	 */
	struct USIGIS_MenuMain_C_CalculateLowestPing_Params
	{
	public:
		class FString                                              LowestPingName;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.DailyContracts_ShowFullScreen
	 */
	struct USIGIS_MenuMain_C_DailyContracts_ShowFullScreen_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.DailyContracts_RefreshSmallRows
	 */
	struct USIGIS_MenuMain_C_DailyContracts_RefreshSmallRows_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.DailyContracts_RefreshInfo
	 */
	struct USIGIS_MenuMain_C_DailyContracts_RefreshInfo_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.DailyContracts_SetupSmallRows
	 */
	struct USIGIS_MenuMain_C_DailyContracts_SetupSmallRows_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.Setup_CrewRows
	 */
	struct USIGIS_MenuMain_C_Setup_CrewRows_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.CaptSetMemebersGraphQl
	 */
	struct USIGIS_MenuMain_C_CaptSetMemebersGraphQl_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.MatchmakingPendingIntCheck
	 */
	struct USIGIS_MenuMain_C_MatchmakingPendingIntCheck_Params
	{
	public:
		bool                                                       Reset;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FJ0V[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.Region_RecommendedSearching
	 */
	struct USIGIS_MenuMain_C_Region_RecommendedSearching_Params
	{
	public:
		bool                                                       IsSearching;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2SZP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.GetCrewInLobbyOrderWhoArntMe
	 */
	struct USIGIS_MenuMain_C_GetCrewInLobbyOrderWhoArntMe_Params
	{
	public:
		TArray<class FString>                                      PlayersWhoArntMe;                                        // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.CheckCrewHoverInfo
	 */
	struct USIGIS_MenuMain_C_CheckCrewHoverInfo_Params
	{
	public:
		bool                                                       TurnOff;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.Analytics_EnterMatch
	 */
	struct USIGIS_MenuMain_C_Analytics_EnterMatch_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.CheckIfAllCrewReadyToLaunch
	 */
	struct USIGIS_MenuMain_C_CheckIfAllCrewReadyToLaunch_Params
	{
	public:
		bool                                                       AllCrewAreReady;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.SetCrewMemberReadyAttribute
	 */
	struct USIGIS_MenuMain_C_SetCrewMemberReadyAttribute_Params
	{
	public:
		bool                                                       IsReady;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MGPR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.New_RefreshCrewInfo_OldSystem
	 */
	struct USIGIS_MenuMain_C_New_RefreshCrewInfo_OldSystem_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.Bind_PlayerGold
	 */
	struct USIGIS_MenuMain_C_Bind_PlayerGold_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.PlaySoundIfReadyUnreadyStateChanged
	 */
	struct USIGIS_MenuMain_C_PlaySoundIfReadyUnreadyStateChanged_Params
	{
	public:
		bool                                                       ReadyNotReadyState;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.TellInventoryToLockUnlockGear
	 */
	struct USIGIS_MenuMain_C_TellInventoryToLockUnlockGear_Params
	{
	public:
		bool                                                       LockGear;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K7DA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.HideIsSearchingElements
	 */
	struct USIGIS_MenuMain_C_HideIsSearchingElements_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.SetServerLocationTAB
	 */
	struct USIGIS_MenuMain_C_SetServerLocationTAB_Params
	{
	public:
		int32_t                                                    WhichTabActive;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.SetServerLocationPreference
	 */
	struct USIGIS_MenuMain_C_SetServerLocationPreference_Params
	{
	public:
		int32_t                                                    WhichRegion;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OnlyVisuals;                                             // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.ShowHideMatchSearchState
	 */
	struct USIGIS_MenuMain_C_ShowHideMatchSearchState_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.LaunchBtnState
	 */
	struct USIGIS_MenuMain_C_LaunchBtnState_Params
	{
	public:
		E_LaunchBtnStates                                          LaunchBtnState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_21KW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.SetCptGameliftPlayerAttributes
	 */
	struct USIGIS_MenuMain_C_SetCptGameliftPlayerAttributes_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.SetSoloGameliftPlayerAttributes
	 */
	struct USIGIS_MenuMain_C_SetSoloGameliftPlayerAttributes_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.SetPlayerIsReady
	 */
	struct USIGIS_MenuMain_C_SetPlayerIsReady_Params
	{
	public:
		bool                                                       PlayerIsReady;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isReset;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XKBH[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.UpdateCurrentMatchmakingState
	 */
	struct USIGIS_MenuMain_C_UpdateCurrentMatchmakingState_Params
	{
	public:
		ECrewEvents                                                Selection;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.SetupCrewInfoWidgets
	 */
	struct USIGIS_MenuMain_C_SetupCrewInfoWidgets_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.RefreshCrewInfo_VeryOldSystem
	 */
	struct USIGIS_MenuMain_C_RefreshCrewInfo_VeryOldSystem_Params
	{
	public:
		struct FCrewPartyInfo                                      CrewInfo;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.IsPartOfACrew_OldSystem
	 */
	struct USIGIS_MenuMain_C_IsPartOfACrew_OldSystem_Params
	{
	public:
		bool                                                       IsInCrew;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZCMF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.SetMatchmakingState
	 */
	struct USIGIS_MenuMain_C_SetMatchmakingState_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.ClearPanelContains
	 */
	struct USIGIS_MenuMain_C_ClearPanelContains_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.LoadPanel
	 */
	struct USIGIS_MenuMain_C_LoadPanel_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             Panel;                                                   // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnError_6FEE0C094126DD3E77316881F964EC00
	 */
	struct USIGIS_MenuMain_C_OnError_6FEE0C094126DD3E77316881F964EC00_Params
	{
	public:
		struct FNakamaListGroupMembersResponse                     SuccessResponse;                                         // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FNakamaErrorResponse                                ErrorResponse;                                           // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnSuccess_6FEE0C094126DD3E77316881F964EC00
	 */
	struct USIGIS_MenuMain_C_OnSuccess_6FEE0C094126DD3E77316881F964EC00_Params
	{
	public:
		struct FNakamaListGroupMembersResponse                     SuccessResponse;                                         // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FNakamaErrorResponse                                ErrorResponse;                                           // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnError_A9CA40AA438296FB46AB1DAF2CDE8B59
	 */
	struct USIGIS_MenuMain_C_OnError_A9CA40AA438296FB46AB1DAF2CDE8B59_Params
	{
	public:
		struct FNakamaRPCResponse                                  SuccessResponse;                                         // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FNakamaErrorResponse                                ErrorResponse;                                           // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnSuccess_A9CA40AA438296FB46AB1DAF2CDE8B59
	 */
	struct USIGIS_MenuMain_C_OnSuccess_A9CA40AA438296FB46AB1DAF2CDE8B59_Params
	{
	public:
		struct FNakamaRPCResponse                                  SuccessResponse;                                         // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FNakamaErrorResponse                                ErrorResponse;                                           // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnError_47B24EB741A75DA442B47DAA25851F4B
	 */
	struct USIGIS_MenuMain_C_OnError_47B24EB741A75DA442B47DAA25851F4B_Params
	{
	public:
		struct FNakamaRPCResponse                                  SuccessResponse;                                         // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FNakamaErrorResponse                                ErrorResponse;                                           // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnSuccess_47B24EB741A75DA442B47DAA25851F4B
	 */
	struct USIGIS_MenuMain_C_OnSuccess_47B24EB741A75DA442B47DAA25851F4B_Params
	{
	public:
		struct FNakamaRPCResponse                                  SuccessResponse;                                         // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FNakamaErrorResponse                                ErrorResponse;                                           // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnError_2FF4F3E24B80F6F826DB5F9303902B33
	 */
	struct USIGIS_MenuMain_C_OnError_2FF4F3E24B80F6F826DB5F9303902B33_Params
	{
	public:
		struct FNakamaRPCResponse                                  SuccessResponse;                                         // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FNakamaErrorResponse                                ErrorResponse;                                           // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnSuccess_2FF4F3E24B80F6F826DB5F9303902B33
	 */
	struct USIGIS_MenuMain_C_OnSuccess_2FF4F3E24B80F6F826DB5F9303902B33_Params
	{
	public:
		struct FNakamaRPCResponse                                  SuccessResponse;                                         // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FNakamaErrorResponse                                ErrorResponse;                                           // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnError_8A7F283F4733C1EBA8B12D9337940E57
	 */
	struct USIGIS_MenuMain_C_OnError_8A7F283F4733C1EBA8B12D9337940E57_Params
	{
	public:
		struct FNakamaRPCResponse                                  SuccessResponse;                                         // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FNakamaErrorResponse                                ErrorResponse;                                           // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnSuccess_8A7F283F4733C1EBA8B12D9337940E57
	 */
	struct USIGIS_MenuMain_C_OnSuccess_8A7F283F4733C1EBA8B12D9337940E57_Params
	{
	public:
		struct FNakamaRPCResponse                                  SuccessResponse;                                         // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FNakamaErrorResponse                                ErrorResponse;                                           // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnError_6E45E12547E677374CF48CA51A3E3B64
	 */
	struct USIGIS_MenuMain_C_OnError_6E45E12547E677374CF48CA51A3E3B64_Params
	{
	public:
		struct FNakamaRPCResponse                                  SuccessResponse;                                         // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FNakamaErrorResponse                                ErrorResponse;                                           // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnSuccess_6E45E12547E677374CF48CA51A3E3B64
	 */
	struct USIGIS_MenuMain_C_OnSuccess_6E45E12547E677374CF48CA51A3E3B64_Params
	{
	public:
		struct FNakamaRPCResponse                                  SuccessResponse;                                         // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FNakamaErrorResponse                                ErrorResponse;                                           // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.Construct
	 */
	struct USIGIS_MenuMain_C_Construct_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.CloseSetting
	 */
	struct USIGIS_MenuMain_C_CloseSetting_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.ReFocus
	 */
	struct USIGIS_MenuMain_C_ReFocus_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.CustomEvent
	 */
	struct USIGIS_MenuMain_C_CustomEvent_Params
	{
	public:
		int32_t                                                    StepIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.Tick
	 */
	struct USIGIS_MenuMain_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__dummyFocusBtn_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__dummyFocusBtn_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.ForceDebugClose
	 */
	struct USIGIS_MenuMain_C_ForceDebugClose_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.RefreshedLobbyInfo
	 */
	struct USIGIS_MenuMain_C_RefreshedLobbyInfo_Params
	{
	public:
		struct FCrewPartyInfo                                      LobbyRefreshed;                                          // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.CaptainWantsToKickPlayer
	 */
	struct USIGIS_MenuMain_C_CaptainWantsToKickPlayer_Params
	{
	public:
		struct FEOSProductUserId                                   EOS_ID_ToKick;                                           // 0x0000(0x0021)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KFZ3[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FNakamaNGroupUser                                   NakamaMemberInfo;                                        // 0x0028(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Btn_LockCrew_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__Btn_LockCrew_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Btn_UnlockCrew_K2Node_ComponentBoundEvent_17_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__Btn_UnlockCrew_K2Node_ComponentBoundEvent_17_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.LobbyStateHasChanged
	 */
	struct USIGIS_MenuMain_C_LobbyStateHasChanged_Params
	{
	public:
		ECrewEvents                                                NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Btn_SetAsReady_K2Node_ComponentBoundEvent_19_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__Btn_SetAsReady_K2Node_ComponentBoundEvent_19_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Button_61_K2Node_ComponentBoundEvent_21_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__Button_61_K2Node_ComponentBoundEvent_21_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.LaunchGameSolo
	 */
	struct USIGIS_MenuMain_C_LaunchGameSolo_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.StartedSoloMatchSearch
	 */
	struct USIGIS_MenuMain_C_StartedSoloMatchSearch_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.CancelledCptMatchSearch
	 */
	struct USIGIS_MenuMain_C_CancelledCptMatchSearch_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.CancelledSoloMatchSearch
	 */
	struct USIGIS_MenuMain_C_CancelledSoloMatchSearch_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.PollSoloMatchMaking
	 */
	struct USIGIS_MenuMain_C_PollSoloMatchMaking_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.CrewConnect
	 */
	struct USIGIS_MenuMain_C_CrewConnect_Params
	{
	public:
		class FString                                              CrewMemberIPToJoin;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.SoloConnect
	 */
	struct USIGIS_MenuMain_C_SoloConnect_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.ForceUnlockCrew
	 */
	struct USIGIS_MenuMain_C_ForceUnlockCrew_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Btn_LaunchGameBtn_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__Btn_LaunchGameBtn_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Btn_LaunchGameBtn_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__Btn_LaunchGameBtn_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.ForceLockCrew
	 */
	struct USIGIS_MenuMain_C_ForceLockCrew_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.StartedMatchmaking
	 */
	struct USIGIS_MenuMain_C_StartedMatchmaking_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.SearchingForMatchTimer
	 */
	struct USIGIS_MenuMain_C_SearchingForMatchTimer_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.SearchForMatch_StartTimer
	 */
	struct USIGIS_MenuMain_C_SearchForMatch_StartTimer_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.SearchForMatch_StopTimer
	 */
	struct USIGIS_MenuMain_C_SearchForMatch_StopTimer_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.CancelMatchmaking
	 */
	struct USIGIS_MenuMain_C_CancelMatchmaking_Params
	{
	public:
		bool                                                       DoNotPlaySound;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.JoinedCrewMatchmaking
	 */
	struct USIGIS_MenuMain_C_JoinedCrewMatchmaking_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Btn_LaunchGameBtn_1_K2Node_ComponentBoundEvent_29_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__Btn_LaunchGameBtn_1_K2Node_ComponentBoundEvent_29_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Btn_CancelMatchmakeSearch_SinglePlayer_K2Node_ComponentBoundEvent_30_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__Btn_CancelMatchmakeSearch_SinglePlayer_K2Node_ComponentBoundEvent_30_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.Refresh_AveragePing
	 */
	struct USIGIS_MenuMain_C_Refresh_AveragePing_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.SetRegionForAveragePing
	 */
	struct USIGIS_MenuMain_C_SetRegionForAveragePing_Params
	{
	public:
		EAmazonRegions                                             RegionToSet;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Btn_LaunchGameBtn_Crew_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__Btn_LaunchGameBtn_Crew_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Btn_LaunchGameBtn_Crew_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__Btn_LaunchGameBtn_Crew_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.Force_Cancel_Matchmaking_SinglePlayer
	 */
	struct USIGIS_MenuMain_C_Force_Cancel_Matchmaking_SinglePlayer_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.Force_CancelMatchmaking_Captain
	 */
	struct USIGIS_MenuMain_C_Force_CancelMatchmaking_Captain_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.CANCEL_SEARCHING_FOR_MATCHMAKING
	 */
	struct USIGIS_MenuMain_C_CANCEL_SEARCHING_FOR_MATCHMAKING_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__MM_Btn_LocPref_EU_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__MM_Btn_LocPref_EU_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__MM_Btn_LocPref_USA_WEST_K2Node_ComponentBoundEvent_33_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__MM_Btn_LocPref_USA_WEST_K2Node_ComponentBoundEvent_33_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__MM_Btn_LocPref_USA_EAST_K2Node_ComponentBoundEvent_34_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__MM_Btn_LocPref_USA_EAST_K2Node_ComponentBoundEvent_34_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__MM_Btn_LocPref_RECOMMENDED_K2Node_ComponentBoundEvent_35_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__MM_Btn_LocPref_RECOMMENDED_K2Node_ComponentBoundEvent_35_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__MM_GenericSmallBtn01_LeaveCrew_K2Node_ComponentBoundEvent_36_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__MM_GenericSmallBtn01_LeaveCrew_K2Node_ComponentBoundEvent_36_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__MM_GenericSmallBtn01_DisbandCrew_K2Node_ComponentBoundEvent_37_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__MM_GenericSmallBtn01_DisbandCrew_K2Node_ComponentBoundEvent_37_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Btn_LockCrewToggle_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__Btn_LockCrewToggle_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Btn_LockCrewToggle_K2Node_ComponentBoundEvent_39_OnButtonHoverEvent__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__Btn_LockCrewToggle_K2Node_ComponentBoundEvent_39_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__MM_crewBtn_CreateCrew_K2Node_ComponentBoundEvent_40_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__MM_crewBtn_CreateCrew_K2Node_ComponentBoundEvent_40_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__MM_crewBtn_JoinCrew_K2Node_ComponentBoundEvent_41_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__MM_crewBtn_JoinCrew_K2Node_ComponentBoundEvent_41_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__MM_LaunchToMatchMain_K2Node_ComponentBoundEvent_42_ED_LaunchBtnPressed__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__MM_LaunchToMatchMain_K2Node_ComponentBoundEvent_42_ED_LaunchBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__MM_LaunchToMatchMain_1_K2Node_ComponentBoundEvent_43_ED_LaunchBtnPressed__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__MM_LaunchToMatchMain_1_K2Node_ComponentBoundEvent_43_ED_LaunchBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Btn_DevBringUpJoinLobby_K2Node_ComponentBoundEvent_44_OnButtonClickedEvent__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__Btn_DevBringUpJoinLobby_K2Node_ComponentBoundEvent_44_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnMyLobbyInfoHasChange
	 */
	struct USIGIS_MenuMain_C_OnMyLobbyInfoHasChange_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Btn_DevBringUpJoinLobby_1_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__Btn_DevBringUpJoinLobby_1_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.CustomEvent_2
	 */
	struct USIGIS_MenuMain_C_CustomEvent_2_Params
	{
	public:
		struct FEOSLobbyUpdateReceivedCallbackInfo                 Data;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.CustomEvent_3
	 */
	struct USIGIS_MenuMain_C_CustomEvent_3_Params
	{
	public:
		struct FEOSLobbyMemberUpdateReceivedCallbackInfo           Data;                                                    // 0x0000(0x0040)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.LobbyUpdateCreatedOrJoined
	 */
	struct USIGIS_MenuMain_C_LobbyUpdateCreatedOrJoined_Params
	{
	public:
		bool                                                       CrewUpdate;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Btn_DevBG_Guys_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__Btn_DevBG_Guys_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.SoloStartAfterWarning
	 */
	struct USIGIS_MenuMain_C_SoloStartAfterWarning_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.CancelNoWeaponWarningPopup
	 */
	struct USIGIS_MenuMain_C_CancelNoWeaponWarningPopup_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Btn_DevBG_Guys_1_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__Btn_DevBG_Guys_1_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.MatchmakeCancelBecauseOfProblemPopup
	 */
	struct USIGIS_MenuMain_C_MatchmakeCancelBecauseOfProblemPopup_Params
	{
	public:
		class FText                                                Popup_Desc;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.ProblemCancelOutOfMatchmaking_TimedOut
	 */
	struct USIGIS_MenuMain_C_ProblemCancelOutOfMatchmaking_TimedOut_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.PollSoloAWS
	 */
	struct USIGIS_MenuMain_C_PollSoloAWS_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.TestCancelTicket
	 */
	struct USIGIS_MenuMain_C_TestCancelTicket_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.TestStartMatchMake
	 */
	struct USIGIS_MenuMain_C_TestStartMatchMake_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnMatchMakeQuery_Event_1
	 */
	struct USIGIS_MenuMain_C_OnMatchMakeQuery_Event_1_Params
	{
	public:
		struct FMMatchMakingTicket                                 TicketInfo;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnMatchMakeStart_Event_1
	 */
	struct USIGIS_MenuMain_C_OnMatchMakeStart_Event_1_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MM3B[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              TicketID;                                                // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.CustomEvent_4
	 */
	struct USIGIS_MenuMain_C_CustomEvent_4_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.CustomEvent_5
	 */
	struct USIGIS_MenuMain_C_CustomEvent_5_Params
	{
	public:
		struct FMMatchMakingTicket                                 TicketInfo;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.CustomEvent_6
	 */
	struct USIGIS_MenuMain_C_CustomEvent_6_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E1LL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              TicketID;                                                // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.StartedCptMatchSearch
	 */
	struct USIGIS_MenuMain_C_StartedCptMatchSearch_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.NewsToggle
	 */
	struct USIGIS_MenuMain_C_NewsToggle_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.CheckForNews
	 */
	struct USIGIS_MenuMain_C_CheckForNews_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_MM_GenericSmallBtn01_GoBack_News_K2Node_ComponentBoundEvent_2_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__SIGIS_MenuMain_MM_GenericSmallBtn01_GoBack_News_K2Node_ComponentBoundEvent_2_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.FirstCheckNews
	 */
	struct USIGIS_MenuMain_C_FirstCheckNews_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.CheckIfShouldBeKicked
	 */
	struct USIGIS_MenuMain_C_CheckIfShouldBeKicked_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.ResetCheckForIfShouldBeKicked
	 */
	struct USIGIS_MenuMain_C_ResetCheckForIfShouldBeKicked_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.MatchMakingHasFailed
	 */
	struct USIGIS_MenuMain_C_MatchMakingHasFailed_Params
	{
	public:
		bool                                                       Isfailed;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_MM_GenericLargeBtn01_K2Node_ComponentBoundEvent_1_GenericLargeBtn_Pressed__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__SIGIS_MenuMain_MM_GenericLargeBtn01_K2Node_ComponentBoundEvent_1_GenericLargeBtn_Pressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.OpenTheFriendsMenu
	 */
	struct USIGIS_MenuMain_C_OpenTheFriendsMenu_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_Button_147_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__SIGIS_MenuMain_Button_147_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.REFRESH_PlayContractsSmallRows
	 */
	struct USIGIS_MenuMain_C_REFRESH_PlayContractsSmallRows_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.PLAY_HasBeenOpened
	 */
	struct USIGIS_MenuMain_C_PLAY_HasBeenOpened_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.ContractResetTimer
	 */
	struct USIGIS_MenuMain_C_ContractResetTimer_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_MM_GenericSmallBtn01_GoBack_Tooltip_1_K2Node_ComponentBoundEvent_4_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__SIGIS_MenuMain_MM_GenericSmallBtn01_GoBack_Tooltip_1_K2Node_ComponentBoundEvent_4_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.ClickedOnSmallContractRow
	 */
	struct USIGIS_MenuMain_C_ClickedOnSmallContractRow_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.MatchMakingResult
	 */
	struct USIGIS_MenuMain_C_MatchMakingResult_Params
	{
	public:
		EMatchMakeResultEvent                                      ResultBack;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.StoppedMMResult
	 */
	struct USIGIS_MenuMain_C_StoppedMMResult_Params
	{
	public:
		class FString                                              ResultMessage;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.ProblemCancelOnlyUI_Captain
	 */
	struct USIGIS_MenuMain_C_ProblemCancelOnlyUI_Captain_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.ProblemCancelOnlyUI_Solo
	 */
	struct USIGIS_MenuMain_C_ProblemCancelOnlyUI_Solo_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.Cancel_JustTheUI_SideOfMatchmaking
	 */
	struct USIGIS_MenuMain_C_Cancel_JustTheUI_SideOfMatchmaking_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.CustomEvent_1
	 */
	struct USIGIS_MenuMain_C_CustomEvent_1_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_MM_Event_Start_K2Node_ComponentBoundEvent_6_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__SIGIS_MenuMain_MM_Event_Start_K2Node_ComponentBoundEvent_6_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.Refresh_EventDetails
	 */
	struct USIGIS_MenuMain_C_Refresh_EventDetails_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_MM_Event_Restart_K2Node_ComponentBoundEvent_7_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__SIGIS_MenuMain_MM_Event_Restart_K2Node_ComponentBoundEvent_7_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.EVENT_FirstTimeOpen
	 */
	struct USIGIS_MenuMain_C_EVENT_FirstTimeOpen_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_MM_Event_Restart_3_K2Node_ComponentBoundEvent_8_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__SIGIS_MenuMain_MM_Event_Restart_3_K2Node_ComponentBoundEvent_8_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_MM_Event_Restart_2_K2Node_ComponentBoundEvent_12_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__SIGIS_MenuMain_MM_Event_Restart_2_K2Node_ComponentBoundEvent_12_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_EditableTextBox_Event_NameToUseForEvent_K2Node_ComponentBoundEvent_13_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__SIGIS_MenuMain_EditableTextBox_Event_NameToUseForEvent_K2Node_ComponentBoundEvent_13_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnDynoHasCharacter_Event_1
	 */
	struct USIGIS_MenuMain_C_OnDynoHasCharacter_Event_1_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HasPlayer;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnDynoSetScore_Event_1
	 */
	struct USIGIS_MenuMain_C_OnDynoSetScore_Event_1_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.Event_GetMyScore
	 */
	struct USIGIS_MenuMain_C_Event_GetMyScore_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W9V2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLeaderBoardMemberInfo                              PlayerInfo;                                              // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnDynoCreateChar_Event_1
	 */
	struct USIGIS_MenuMain_C_OnDynoCreateChar_Event_1_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_Button_192_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__SIGIS_MenuMain_Button_192_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.Event_GetAllLeaderboardsList
	 */
	struct USIGIS_MenuMain_C_Event_GetAllLeaderboardsList_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RCDH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FLeaderBoardMemberInfo>                      leaderboardback;                                         // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_Button_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__SIGIS_MenuMain_Button_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.LoginSuccess_InMainMenuOptions
	 */
	struct USIGIS_MenuMain_C_LoginSuccess_InMainMenuOptions_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_MM_Event_SeeFullLeaderboardList_K2Node_ComponentBoundEvent_23_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__SIGIS_MenuMain_MM_Event_SeeFullLeaderboardList_K2Node_ComponentBoundEvent_23_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.StartCrewKickCheckTimer
	 */
	struct USIGIS_MenuMain_C_StartCrewKickCheckTimer_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.RunCrewKickCheck
	 */
	struct USIGIS_MenuMain_C_RunCrewKickCheck_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.CancelCrewCheckTimer
	 */
	struct USIGIS_MenuMain_C_CancelCrewCheckTimer_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.IsMatchMakingView
	 */
	struct USIGIS_MenuMain_C_IsMatchMakingView_Params
	{
	public:
		bool                                                       IsinATeam;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.CaptainKickedCrewMember
	 */
	struct USIGIS_MenuMain_C_CaptainKickedCrewMember_Params
	{
	public:
		bool                                                       sucessfulkick;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.CheckIfInACrewAndKickCheckNotRunningAlready
	 */
	struct USIGIS_MenuMain_C_CheckIfInACrewAndKickCheckNotRunningAlready_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnNaughtyReturn_Event_1
	 */
	struct USIGIS_MenuMain_C_OnNaughtyReturn_Event_1_Params
	{
	public:
		bool                                                       isNaughty;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8X87[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReasonNaughty;                                           // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_Button_Test_Create_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__SIGIS_MenuMain_Button_Test_Create_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_Button_Test_Join_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__SIGIS_MenuMain_Button_Test_Join_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_Button_TestRefreshCrews_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__SIGIS_MenuMain_Button_TestRefreshCrews_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_Button_Test_Create_1_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__SIGIS_MenuMain_Button_Test_Create_1_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_Button_Test_Leave_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__SIGIS_MenuMain_Button_Test_Leave_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_Button_Test_Kick_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__SIGIS_MenuMain_Button_Test_Kick_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.NakamaCrew_InitialSetup
	 */
	struct USIGIS_MenuMain_C_NakamaCrew_InitialSetup_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.Return_NakamaCrewCreated
	 */
	struct USIGIS_MenuMain_C_Return_NakamaCrewCreated_Params
	{
	public:
		class FString                                              CrewID;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.Return_NakamaCrewDestroyed
	 */
	struct USIGIS_MenuMain_C_Return_NakamaCrewDestroyed_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.Return_NakamaJoinedACrew
	 */
	struct USIGIS_MenuMain_C_Return_NakamaJoinedACrew_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.Return_NakamaLeaveACrew
	 */
	struct USIGIS_MenuMain_C_Return_NakamaLeaveACrew_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.Return_NakamaKickedCrewMember
	 */
	struct USIGIS_MenuMain_C_Return_NakamaKickedCrewMember_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.Return_UpdateCrew
	 */
	struct USIGIS_MenuMain_C_Return_UpdateCrew_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_Button_Test_Create_1_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__SIGIS_MenuMain_Button_Test_Create_1_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_48_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__SIGIS_MenuMain_MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_48_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.ReturnOnNotification
	 */
	struct USIGIS_MenuMain_C_ReturnOnNotification_Params
	{
	public:
		TArray<struct FNakamaNotification>                         returnednotification;                                    // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.ReturnOnNotificationDeleted
	 */
	struct USIGIS_MenuMain_C_ReturnOnNotificationDeleted_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.Return_Connected
	 */
	struct USIGIS_MenuMain_C_Return_Connected_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.Return_Disconnected
	 */
	struct USIGIS_MenuMain_C_Return_Disconnected_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.Return_NewPresence
	 */
	struct USIGIS_MenuMain_C_Return_NewPresence_Params
	{
	public:
		struct FNakamaChannelPresenceObject                        NewPres;                                                 // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.Return_StatusPresence
	 */
	struct USIGIS_MenuMain_C_Return_StatusPresence_Params
	{
	public:
		struct FNakamaStatusPresenceObject                         NewPres;                                                 // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.Return_ChatMessage
	 */
	struct USIGIS_MenuMain_C_Return_ChatMessage_Params
	{
	public:
		struct FNakamaChatObject                                   ChatMsg;                                                 // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_Button_Test_UpdateCrewMetaData_K2Node_ComponentBoundEvent_46_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__SIGIS_MenuMain_Button_Test_UpdateCrewMetaData_K2Node_ComponentBoundEvent_46_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_Button_Test_CheckInfo_1_K2Node_ComponentBoundEvent_49_OnButtonClickedEvent__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__SIGIS_MenuMain_Button_Test_CheckInfo_1_K2Node_ComponentBoundEvent_49_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.Return_JoinedGroupChat
	 */
	struct USIGIS_MenuMain_C_Return_JoinedGroupChat_Params
	{
	public:
		class FString                                              ChatRoomID;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.RefreshCurrentCrewInfo
	 */
	struct USIGIS_MenuMain_C_RefreshCurrentCrewInfo_Params
	{
	public:
		struct FNakamaNGroupBP                                     returnedinfo;                                            // 0x0000(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       Success;                                                 // 0x0078(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.Return CrewSearchForID
	 */
	struct USIGIS_MenuMain_C_Return_CrewSearchForID_Params
	{
	public:
		TArray<struct FNakamaNGroup>                               returnedSearch;                                          // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FString                                              pageNum;                                                 // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.REFRESH_Master_CrewOrSolo
	 */
	struct USIGIS_MenuMain_C_REFRESH_Master_CrewOrSolo_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.Refresh_CrewSoloInfo
	 */
	struct USIGIS_MenuMain_C_Refresh_CrewSoloInfo_Params
	{
	public:
		class FString                                              CrewID;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.Refresh_CrewAsSoloPlay
	 */
	struct USIGIS_MenuMain_C_Refresh_CrewAsSoloPlay_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_Button_59_K2Node_ComponentBoundEvent_50_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_BndEvt__SIGIS_MenuMain_Button_59_K2Node_ComponentBoundEvent_50_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.ReturnFromMatchEndScreen_NakamaRefresh
	 */
	struct USIGIS_MenuMain_C_ReturnFromMatchEndScreen_NakamaRefresh_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.GiftNotifySentToPlayer
	 */
	struct USIGIS_MenuMain_C_GiftNotifySentToPlayer_Params
	{
	public:
		struct FNakamaNotification                                 NotifyInfo;                                              // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnPingIssues_Encountered
	 */
	struct USIGIS_MenuMain_C_OnPingIssues_Encountered_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.Return_OnPermMessageRecv
	 */
	struct USIGIS_MenuMain_C_Return_OnPermMessageRecv_Params
	{
	public:
		class FString                                              messageback;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       HasMessage;                                              // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnStartNakMM_Event_1
	 */
	struct USIGIS_MenuMain_C_OnStartNakMM_Event_1_Params
	{
	public:
		class FString                                              TicketNak;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnStopNakMM_Event_1
	 */
	struct USIGIS_MenuMain_C_OnStopNakMM_Event_1_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.MatchmakingEvent
	 */
	struct USIGIS_MenuMain_C_MatchmakingEvent_Params
	{
	public:
		struct FNakamaNotification                                 NotifyInfo;                                              // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.ExecuteUbergraph_SIGIS_MenuMain
	 */
	struct USIGIS_MenuMain_C_ExecuteUbergraph_SIGIS_MenuMain_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.ED_CrewCreatePressed__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_ED_CrewCreatePressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.ED_CrewJoinPressed__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_ED_CrewJoinPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.Update_TeamMatchmakingState__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_Update_TeamMatchmakingState__DelegateSignature_Params
	{
	public:
		ECrewEvents                                                CrewState;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.isMatchmaking_TeamView__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_isMatchmaking_TeamView__DelegateSignature_Params
	{
	public:
		bool                                                       IsinATeam;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.SearchForMatchTimerChanged__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_SearchForMatchTimerChanged__DelegateSignature_Params
	{
	public:
		class FText                                                TimeAsText;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_MenuMain.SIGIS_MenuMain_C.IsMatchmaking_Singleplayer__DelegateSignature
	 */
	struct USIGIS_MenuMain_C_IsMatchmaking_Singleplayer__DelegateSignature_Params
	{
	public:
		bool                                                       IsMatchmaking;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
