/**
 * Name: RaidGame
 * Version: 1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.FrontEndMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShowMessage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_MenuMain_C::FrontEndMessage(bool ShowMessage, const class FString& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.FrontEndMessage");
		
		USIGIS_MenuMain_C_FrontEndMessage_Params params {};
		params.ShowMessage = ShowMessage;
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.Nakama_SetPrivateVisuals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               b_isCrewLocked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_MenuMain_C::Nakama_SetPrivateVisuals(bool b_isCrewLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.Nakama_SetPrivateVisuals");
		
		USIGIS_MenuMain_C_Nakama_SetPrivateVisuals_Params params {};
		params.b_isCrewLocked = b_isCrewLocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.Nakama_Notify_RemoveAllInvites
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::Nakama_Notify_RemoveAllInvites()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.Nakama_Notify_RemoveAllInvites");
		
		USIGIS_MenuMain_C_Nakama_Notify_RemoveAllInvites_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.Nakama_SetPlayerReadyNotReady_DontUseNowInGameInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsReady                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_MenuMain_C::Nakama_SetPlayerReadyNotReady_DontUseNowInGameInstance(bool IsReady)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.Nakama_SetPlayerReadyNotReady_DontUseNowInGameInstance");
		
		USIGIS_MenuMain_C_Nakama_SetPlayerReadyNotReady_DontUseNowInGameInstance_Params params {};
		params.IsReady = IsReady;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.Nakama_RefreshCrewInfo
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::Nakama_RefreshCrewInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.Nakama_RefreshCrewInfo");
		
		USIGIS_MenuMain_C_Nakama_RefreshCrewInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.Nakama_IsPartOfACrew
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsInCrew                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_MenuMain_C::Nakama_IsPartOfACrew(bool IsInCrew)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.Nakama_IsPartOfACrew");
		
		USIGIS_MenuMain_C_Nakama_IsPartOfACrew_Params params {};
		params.IsInCrew = IsInCrew;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.Event_StartWarningReason
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        WarningMessage                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class USoundBase*                                  Sound                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidgetAnimation*                            InAnimation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_MenuMain_C::Event_StartWarningReason(const class FText& WarningMessage, class USoundBase* Sound, class UWidgetAnimation* InAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.Event_StartWarningReason");
		
		USIGIS_MenuMain_C_Event_StartWarningReason_Params params {};
		params.WarningMessage = WarningMessage;
		params.Sound = Sound;
		params.InAnimation = InAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.CalculateLowestPing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      LowestPingName                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_MenuMain_C::CalculateLowestPing(class FString* LowestPingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.CalculateLowestPing");
		
		USIGIS_MenuMain_C_CalculateLowestPing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LowestPingName != nullptr)
			*LowestPingName = params.LowestPingName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.DailyContracts_ShowFullScreen
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::DailyContracts_ShowFullScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.DailyContracts_ShowFullScreen");
		
		USIGIS_MenuMain_C_DailyContracts_ShowFullScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.DailyContracts_RefreshSmallRows
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::DailyContracts_RefreshSmallRows()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.DailyContracts_RefreshSmallRows");
		
		USIGIS_MenuMain_C_DailyContracts_RefreshSmallRows_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.DailyContracts_RefreshInfo
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::DailyContracts_RefreshInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.DailyContracts_RefreshInfo");
		
		USIGIS_MenuMain_C_DailyContracts_RefreshInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.DailyContracts_SetupSmallRows
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::DailyContracts_SetupSmallRows()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.DailyContracts_SetupSmallRows");
		
		USIGIS_MenuMain_C_DailyContracts_SetupSmallRows_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.Setup_CrewRows
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::Setup_CrewRows()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.Setup_CrewRows");
		
		USIGIS_MenuMain_C_Setup_CrewRows_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.CaptSetMemebersGraphQl
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::CaptSetMemebersGraphQl()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.CaptSetMemebersGraphQl");
		
		USIGIS_MenuMain_C_CaptSetMemebersGraphQl_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.MatchmakingPendingIntCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Reset                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_MenuMain_C::MatchmakingPendingIntCheck(bool Reset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.MatchmakingPendingIntCheck");
		
		USIGIS_MenuMain_C_MatchmakingPendingIntCheck_Params params {};
		params.Reset = Reset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.Region_RecommendedSearching
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSearching                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_MenuMain_C::Region_RecommendedSearching(bool IsSearching)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.Region_RecommendedSearching");
		
		USIGIS_MenuMain_C_Region_RecommendedSearching_Params params {};
		params.IsSearching = IsSearching;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.GetCrewInLobbyOrderWhoArntMe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              PlayersWhoArntMe                                           (Parm, OutParm)
	 */
	void USIGIS_MenuMain_C::GetCrewInLobbyOrderWhoArntMe(TArray<class FString>* PlayersWhoArntMe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.GetCrewInLobbyOrderWhoArntMe");
		
		USIGIS_MenuMain_C_GetCrewInLobbyOrderWhoArntMe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayersWhoArntMe != nullptr)
			*PlayersWhoArntMe = params.PlayersWhoArntMe;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.CheckCrewHoverInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TurnOff                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_MenuMain_C::CheckCrewHoverInfo(bool TurnOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.CheckCrewHoverInfo");
		
		USIGIS_MenuMain_C_CheckCrewHoverInfo_Params params {};
		params.TurnOff = TurnOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.Analytics_EnterMatch
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::Analytics_EnterMatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.Analytics_EnterMatch");
		
		USIGIS_MenuMain_C_Analytics_EnterMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.CheckIfAllCrewReadyToLaunch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               AllCrewAreReady                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_MenuMain_C::CheckIfAllCrewReadyToLaunch(bool* AllCrewAreReady)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.CheckIfAllCrewReadyToLaunch");
		
		USIGIS_MenuMain_C_CheckIfAllCrewReadyToLaunch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AllCrewAreReady != nullptr)
			*AllCrewAreReady = params.AllCrewAreReady;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.SetCrewMemberReadyAttribute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsReady                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_MenuMain_C::SetCrewMemberReadyAttribute(bool IsReady)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.SetCrewMemberReadyAttribute");
		
		USIGIS_MenuMain_C_SetCrewMemberReadyAttribute_Params params {};
		params.IsReady = IsReady;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.New_RefreshCrewInfo_OldSystem
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::New_RefreshCrewInfo_OldSystem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.New_RefreshCrewInfo_OldSystem");
		
		USIGIS_MenuMain_C_New_RefreshCrewInfo_OldSystem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.Bind_PlayerGold
	 * 		Flags  -> ()
	 */
	class FText USIGIS_MenuMain_C::Bind_PlayerGold()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.Bind_PlayerGold");
		
		USIGIS_MenuMain_C_Bind_PlayerGold_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.PlaySoundIfReadyUnreadyStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReadyNotReadyState                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_MenuMain_C::PlaySoundIfReadyUnreadyStateChanged(bool ReadyNotReadyState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.PlaySoundIfReadyUnreadyStateChanged");
		
		USIGIS_MenuMain_C_PlaySoundIfReadyUnreadyStateChanged_Params params {};
		params.ReadyNotReadyState = ReadyNotReadyState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.TellInventoryToLockUnlockGear
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               LockGear                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_MenuMain_C::TellInventoryToLockUnlockGear(bool LockGear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.TellInventoryToLockUnlockGear");
		
		USIGIS_MenuMain_C_TellInventoryToLockUnlockGear_Params params {};
		params.LockGear = LockGear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.HideIsSearchingElements
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_MenuMain_C::HideIsSearchingElements(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.HideIsSearchingElements");
		
		USIGIS_MenuMain_C_HideIsSearchingElements_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.SetServerLocationTAB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WhichTabActive                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_MenuMain_C::SetServerLocationTAB(int32_t WhichTabActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.SetServerLocationTAB");
		
		USIGIS_MenuMain_C_SetServerLocationTAB_Params params {};
		params.WhichTabActive = WhichTabActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.SetServerLocationPreference
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WhichRegion                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OnlyVisuals                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_MenuMain_C::SetServerLocationPreference(int32_t WhichRegion, bool OnlyVisuals)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.SetServerLocationPreference");
		
		USIGIS_MenuMain_C_SetServerLocationPreference_Params params {};
		params.WhichRegion = WhichRegion;
		params.OnlyVisuals = OnlyVisuals;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.ShowHideMatchSearchState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_MenuMain_C::ShowHideMatchSearchState(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.ShowHideMatchSearchState");
		
		USIGIS_MenuMain_C_ShowHideMatchSearchState_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.LaunchBtnState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_LaunchBtnStates                                  LaunchBtnState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_MenuMain_C::LaunchBtnState(E_LaunchBtnStates LaunchBtnState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.LaunchBtnState");
		
		USIGIS_MenuMain_C_LaunchBtnState_Params params {};
		params.LaunchBtnState = LaunchBtnState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.SetCptGameliftPlayerAttributes
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::SetCptGameliftPlayerAttributes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.SetCptGameliftPlayerAttributes");
		
		USIGIS_MenuMain_C_SetCptGameliftPlayerAttributes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.SetSoloGameliftPlayerAttributes
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::SetSoloGameliftPlayerAttributes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.SetSoloGameliftPlayerAttributes");
		
		USIGIS_MenuMain_C_SetSoloGameliftPlayerAttributes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.SetPlayerIsReady
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PlayerIsReady                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isReset                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_MenuMain_C::SetPlayerIsReady(bool PlayerIsReady, bool isReset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.SetPlayerIsReady");
		
		USIGIS_MenuMain_C_SetPlayerIsReady_Params params {};
		params.PlayerIsReady = PlayerIsReady;
		params.isReset = isReset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.UpdateCurrentMatchmakingState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECrewEvents                                        Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_MenuMain_C::UpdateCurrentMatchmakingState(ECrewEvents Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.UpdateCurrentMatchmakingState");
		
		USIGIS_MenuMain_C_UpdateCurrentMatchmakingState_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.SetupCrewInfoWidgets
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::SetupCrewInfoWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.SetupCrewInfoWidgets");
		
		USIGIS_MenuMain_C_SetupCrewInfoWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.RefreshCrewInfo_VeryOldSystem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCrewPartyInfo                              CrewInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_MenuMain_C::RefreshCrewInfo_VeryOldSystem(const struct FCrewPartyInfo& CrewInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.RefreshCrewInfo_VeryOldSystem");
		
		USIGIS_MenuMain_C_RefreshCrewInfo_VeryOldSystem_Params params {};
		params.CrewInfo = CrewInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.IsPartOfACrew_OldSystem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsInCrew                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_MenuMain_C::IsPartOfACrew_OldSystem(bool IsInCrew)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.IsPartOfACrew_OldSystem");
		
		USIGIS_MenuMain_C_IsPartOfACrew_OldSystem_Params params {};
		params.IsInCrew = IsInCrew;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.SetMatchmakingState
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::SetMatchmakingState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.SetMatchmakingState");
		
		USIGIS_MenuMain_C_SetMatchmakingState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.ClearPanelContains
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::ClearPanelContains()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.ClearPanelContains");
		
		USIGIS_MenuMain_C_ClearPanelContains_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.LoadPanel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     Panel                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_MenuMain_C::LoadPanel(class UClass* Class, class UWidget** Panel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.LoadPanel");
		
		USIGIS_MenuMain_C_LoadPanel_Params params {};
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Panel != nullptr)
			*Panel = params.Panel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnError_6FEE0C094126DD3E77316881F964EC00
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNakamaListGroupMembersResponse             SuccessResponse                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FNakamaErrorResponse                        ErrorResponse                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_MenuMain_C::OnError_6FEE0C094126DD3E77316881F964EC00(const struct FNakamaListGroupMembersResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnError_6FEE0C094126DD3E77316881F964EC00");
		
		USIGIS_MenuMain_C_OnError_6FEE0C094126DD3E77316881F964EC00_Params params {};
		params.SuccessResponse = SuccessResponse;
		params.ErrorResponse = ErrorResponse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnSuccess_6FEE0C094126DD3E77316881F964EC00
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNakamaListGroupMembersResponse             SuccessResponse                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FNakamaErrorResponse                        ErrorResponse                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_MenuMain_C::OnSuccess_6FEE0C094126DD3E77316881F964EC00(const struct FNakamaListGroupMembersResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnSuccess_6FEE0C094126DD3E77316881F964EC00");
		
		USIGIS_MenuMain_C_OnSuccess_6FEE0C094126DD3E77316881F964EC00_Params params {};
		params.SuccessResponse = SuccessResponse;
		params.ErrorResponse = ErrorResponse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnError_A9CA40AA438296FB46AB1DAF2CDE8B59
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNakamaRPCResponse                          SuccessResponse                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FNakamaErrorResponse                        ErrorResponse                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_MenuMain_C::OnError_A9CA40AA438296FB46AB1DAF2CDE8B59(const struct FNakamaRPCResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnError_A9CA40AA438296FB46AB1DAF2CDE8B59");
		
		USIGIS_MenuMain_C_OnError_A9CA40AA438296FB46AB1DAF2CDE8B59_Params params {};
		params.SuccessResponse = SuccessResponse;
		params.ErrorResponse = ErrorResponse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnSuccess_A9CA40AA438296FB46AB1DAF2CDE8B59
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNakamaRPCResponse                          SuccessResponse                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FNakamaErrorResponse                        ErrorResponse                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_MenuMain_C::OnSuccess_A9CA40AA438296FB46AB1DAF2CDE8B59(const struct FNakamaRPCResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnSuccess_A9CA40AA438296FB46AB1DAF2CDE8B59");
		
		USIGIS_MenuMain_C_OnSuccess_A9CA40AA438296FB46AB1DAF2CDE8B59_Params params {};
		params.SuccessResponse = SuccessResponse;
		params.ErrorResponse = ErrorResponse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnError_47B24EB741A75DA442B47DAA25851F4B
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNakamaRPCResponse                          SuccessResponse                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FNakamaErrorResponse                        ErrorResponse                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_MenuMain_C::OnError_47B24EB741A75DA442B47DAA25851F4B(const struct FNakamaRPCResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnError_47B24EB741A75DA442B47DAA25851F4B");
		
		USIGIS_MenuMain_C_OnError_47B24EB741A75DA442B47DAA25851F4B_Params params {};
		params.SuccessResponse = SuccessResponse;
		params.ErrorResponse = ErrorResponse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnSuccess_47B24EB741A75DA442B47DAA25851F4B
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNakamaRPCResponse                          SuccessResponse                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FNakamaErrorResponse                        ErrorResponse                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_MenuMain_C::OnSuccess_47B24EB741A75DA442B47DAA25851F4B(const struct FNakamaRPCResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnSuccess_47B24EB741A75DA442B47DAA25851F4B");
		
		USIGIS_MenuMain_C_OnSuccess_47B24EB741A75DA442B47DAA25851F4B_Params params {};
		params.SuccessResponse = SuccessResponse;
		params.ErrorResponse = ErrorResponse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnError_2FF4F3E24B80F6F826DB5F9303902B33
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNakamaRPCResponse                          SuccessResponse                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FNakamaErrorResponse                        ErrorResponse                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_MenuMain_C::OnError_2FF4F3E24B80F6F826DB5F9303902B33(const struct FNakamaRPCResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnError_2FF4F3E24B80F6F826DB5F9303902B33");
		
		USIGIS_MenuMain_C_OnError_2FF4F3E24B80F6F826DB5F9303902B33_Params params {};
		params.SuccessResponse = SuccessResponse;
		params.ErrorResponse = ErrorResponse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnSuccess_2FF4F3E24B80F6F826DB5F9303902B33
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNakamaRPCResponse                          SuccessResponse                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FNakamaErrorResponse                        ErrorResponse                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_MenuMain_C::OnSuccess_2FF4F3E24B80F6F826DB5F9303902B33(const struct FNakamaRPCResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnSuccess_2FF4F3E24B80F6F826DB5F9303902B33");
		
		USIGIS_MenuMain_C_OnSuccess_2FF4F3E24B80F6F826DB5F9303902B33_Params params {};
		params.SuccessResponse = SuccessResponse;
		params.ErrorResponse = ErrorResponse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnError_8A7F283F4733C1EBA8B12D9337940E57
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNakamaRPCResponse                          SuccessResponse                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FNakamaErrorResponse                        ErrorResponse                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_MenuMain_C::OnError_8A7F283F4733C1EBA8B12D9337940E57(const struct FNakamaRPCResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnError_8A7F283F4733C1EBA8B12D9337940E57");
		
		USIGIS_MenuMain_C_OnError_8A7F283F4733C1EBA8B12D9337940E57_Params params {};
		params.SuccessResponse = SuccessResponse;
		params.ErrorResponse = ErrorResponse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnSuccess_8A7F283F4733C1EBA8B12D9337940E57
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNakamaRPCResponse                          SuccessResponse                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FNakamaErrorResponse                        ErrorResponse                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_MenuMain_C::OnSuccess_8A7F283F4733C1EBA8B12D9337940E57(const struct FNakamaRPCResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnSuccess_8A7F283F4733C1EBA8B12D9337940E57");
		
		USIGIS_MenuMain_C_OnSuccess_8A7F283F4733C1EBA8B12D9337940E57_Params params {};
		params.SuccessResponse = SuccessResponse;
		params.ErrorResponse = ErrorResponse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnError_6E45E12547E677374CF48CA51A3E3B64
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNakamaRPCResponse                          SuccessResponse                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FNakamaErrorResponse                        ErrorResponse                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_MenuMain_C::OnError_6E45E12547E677374CF48CA51A3E3B64(const struct FNakamaRPCResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnError_6E45E12547E677374CF48CA51A3E3B64");
		
		USIGIS_MenuMain_C_OnError_6E45E12547E677374CF48CA51A3E3B64_Params params {};
		params.SuccessResponse = SuccessResponse;
		params.ErrorResponse = ErrorResponse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnSuccess_6E45E12547E677374CF48CA51A3E3B64
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNakamaRPCResponse                          SuccessResponse                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FNakamaErrorResponse                        ErrorResponse                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_MenuMain_C::OnSuccess_6E45E12547E677374CF48CA51A3E3B64(const struct FNakamaRPCResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnSuccess_6E45E12547E677374CF48CA51A3E3B64");
		
		USIGIS_MenuMain_C_OnSuccess_6E45E12547E677374CF48CA51A3E3B64_Params params {};
		params.SuccessResponse = SuccessResponse;
		params.ErrorResponse = ErrorResponse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.Construct
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.Construct");
		
		USIGIS_MenuMain_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.CloseSetting
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::CloseSetting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.CloseSetting");
		
		USIGIS_MenuMain_C_CloseSetting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.ReFocus
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::ReFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.ReFocus");
		
		USIGIS_MenuMain_C_ReFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.CustomEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            StepIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_MenuMain_C::CustomEvent(int32_t StepIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.CustomEvent");
		
		USIGIS_MenuMain_C_CustomEvent_Params params {};
		params.StepIndex = StepIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_MenuMain_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.Tick");
		
		USIGIS_MenuMain_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__dummyFocusBtn_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__dummyFocusBtn_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__dummyFocusBtn_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__dummyFocusBtn_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.ForceDebugClose
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::ForceDebugClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.ForceDebugClose");
		
		USIGIS_MenuMain_C_ForceDebugClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.RefreshedLobbyInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCrewPartyInfo                              LobbyRefreshed                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_MenuMain_C::RefreshedLobbyInfo(const struct FCrewPartyInfo& LobbyRefreshed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.RefreshedLobbyInfo");
		
		USIGIS_MenuMain_C_RefreshedLobbyInfo_Params params {};
		params.LobbyRefreshed = LobbyRefreshed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.CaptainWantsToKickPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSProductUserId                           EOS_ID_ToKick                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FNakamaNGroupUser                           NakamaMemberInfo                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_MenuMain_C::CaptainWantsToKickPlayer(const struct FEOSProductUserId& EOS_ID_ToKick, const struct FNakamaNGroupUser& NakamaMemberInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.CaptainWantsToKickPlayer");
		
		USIGIS_MenuMain_C_CaptainWantsToKickPlayer_Params params {};
		params.EOS_ID_ToKick = EOS_ID_ToKick;
		params.NakamaMemberInfo = NakamaMemberInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Btn_LockCrew_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__Btn_LockCrew_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Btn_LockCrew_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__Btn_LockCrew_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Btn_UnlockCrew_K2Node_ComponentBoundEvent_17_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__Btn_UnlockCrew_K2Node_ComponentBoundEvent_17_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Btn_UnlockCrew_K2Node_ComponentBoundEvent_17_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__Btn_UnlockCrew_K2Node_ComponentBoundEvent_17_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.LobbyStateHasChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECrewEvents                                        NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_MenuMain_C::LobbyStateHasChanged(ECrewEvents NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.LobbyStateHasChanged");
		
		USIGIS_MenuMain_C_LobbyStateHasChanged_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Btn_SetAsReady_K2Node_ComponentBoundEvent_19_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__Btn_SetAsReady_K2Node_ComponentBoundEvent_19_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Btn_SetAsReady_K2Node_ComponentBoundEvent_19_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__Btn_SetAsReady_K2Node_ComponentBoundEvent_19_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Button_61_K2Node_ComponentBoundEvent_21_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__Button_61_K2Node_ComponentBoundEvent_21_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Button_61_K2Node_ComponentBoundEvent_21_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__Button_61_K2Node_ComponentBoundEvent_21_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.LaunchGameSolo
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::LaunchGameSolo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.LaunchGameSolo");
		
		USIGIS_MenuMain_C_LaunchGameSolo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.StartedSoloMatchSearch
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::StartedSoloMatchSearch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.StartedSoloMatchSearch");
		
		USIGIS_MenuMain_C_StartedSoloMatchSearch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.CancelledCptMatchSearch
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::CancelledCptMatchSearch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.CancelledCptMatchSearch");
		
		USIGIS_MenuMain_C_CancelledCptMatchSearch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.CancelledSoloMatchSearch
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::CancelledSoloMatchSearch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.CancelledSoloMatchSearch");
		
		USIGIS_MenuMain_C_CancelledSoloMatchSearch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.PollSoloMatchMaking
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::PollSoloMatchMaking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.PollSoloMatchMaking");
		
		USIGIS_MenuMain_C_PollSoloMatchMaking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.CrewConnect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CrewMemberIPToJoin                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_MenuMain_C::CrewConnect(const class FString& CrewMemberIPToJoin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.CrewConnect");
		
		USIGIS_MenuMain_C_CrewConnect_Params params {};
		params.CrewMemberIPToJoin = CrewMemberIPToJoin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.SoloConnect
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::SoloConnect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.SoloConnect");
		
		USIGIS_MenuMain_C_SoloConnect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.ForceUnlockCrew
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::ForceUnlockCrew()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.ForceUnlockCrew");
		
		USIGIS_MenuMain_C_ForceUnlockCrew_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Btn_LaunchGameBtn_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__Btn_LaunchGameBtn_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Btn_LaunchGameBtn_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__Btn_LaunchGameBtn_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Btn_LaunchGameBtn_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__Btn_LaunchGameBtn_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Btn_LaunchGameBtn_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__Btn_LaunchGameBtn_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.ForceLockCrew
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::ForceLockCrew()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.ForceLockCrew");
		
		USIGIS_MenuMain_C_ForceLockCrew_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.StartedMatchmaking
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::StartedMatchmaking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.StartedMatchmaking");
		
		USIGIS_MenuMain_C_StartedMatchmaking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.SearchingForMatchTimer
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::SearchingForMatchTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.SearchingForMatchTimer");
		
		USIGIS_MenuMain_C_SearchingForMatchTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.SearchForMatch_StartTimer
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::SearchForMatch_StartTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.SearchForMatch_StartTimer");
		
		USIGIS_MenuMain_C_SearchForMatch_StartTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.SearchForMatch_StopTimer
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::SearchForMatch_StopTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.SearchForMatch_StopTimer");
		
		USIGIS_MenuMain_C_SearchForMatch_StopTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.CancelMatchmaking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               DoNotPlaySound                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_MenuMain_C::CancelMatchmaking(bool DoNotPlaySound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.CancelMatchmaking");
		
		USIGIS_MenuMain_C_CancelMatchmaking_Params params {};
		params.DoNotPlaySound = DoNotPlaySound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.JoinedCrewMatchmaking
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::JoinedCrewMatchmaking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.JoinedCrewMatchmaking");
		
		USIGIS_MenuMain_C_JoinedCrewMatchmaking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Btn_LaunchGameBtn_1_K2Node_ComponentBoundEvent_29_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__Btn_LaunchGameBtn_1_K2Node_ComponentBoundEvent_29_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Btn_LaunchGameBtn_1_K2Node_ComponentBoundEvent_29_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__Btn_LaunchGameBtn_1_K2Node_ComponentBoundEvent_29_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Btn_CancelMatchmakeSearch_SinglePlayer_K2Node_ComponentBoundEvent_30_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__Btn_CancelMatchmakeSearch_SinglePlayer_K2Node_ComponentBoundEvent_30_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Btn_CancelMatchmakeSearch_SinglePlayer_K2Node_ComponentBoundEvent_30_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__Btn_CancelMatchmakeSearch_SinglePlayer_K2Node_ComponentBoundEvent_30_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.Refresh_AveragePing
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::Refresh_AveragePing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.Refresh_AveragePing");
		
		USIGIS_MenuMain_C_Refresh_AveragePing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.SetRegionForAveragePing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAmazonRegions                                     RegionToSet                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_MenuMain_C::SetRegionForAveragePing(EAmazonRegions RegionToSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.SetRegionForAveragePing");
		
		USIGIS_MenuMain_C_SetRegionForAveragePing_Params params {};
		params.RegionToSet = RegionToSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Btn_LaunchGameBtn_Crew_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__Btn_LaunchGameBtn_Crew_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Btn_LaunchGameBtn_Crew_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__Btn_LaunchGameBtn_Crew_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Btn_LaunchGameBtn_Crew_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__Btn_LaunchGameBtn_Crew_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Btn_LaunchGameBtn_Crew_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__Btn_LaunchGameBtn_Crew_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.Force_Cancel_Matchmaking_SinglePlayer
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::Force_Cancel_Matchmaking_SinglePlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.Force_Cancel_Matchmaking_SinglePlayer");
		
		USIGIS_MenuMain_C_Force_Cancel_Matchmaking_SinglePlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.Force_CancelMatchmaking_Captain
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::Force_CancelMatchmaking_Captain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.Force_CancelMatchmaking_Captain");
		
		USIGIS_MenuMain_C_Force_CancelMatchmaking_Captain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.CANCEL_SEARCHING_FOR_MATCHMAKING
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::CANCEL_SEARCHING_FOR_MATCHMAKING()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.CANCEL_SEARCHING_FOR_MATCHMAKING");
		
		USIGIS_MenuMain_C_CANCEL_SEARCHING_FOR_MATCHMAKING_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__MM_Btn_LocPref_EU_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__MM_Btn_LocPref_EU_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__MM_Btn_LocPref_EU_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__MM_Btn_LocPref_EU_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__MM_Btn_LocPref_USA_WEST_K2Node_ComponentBoundEvent_33_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__MM_Btn_LocPref_USA_WEST_K2Node_ComponentBoundEvent_33_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__MM_Btn_LocPref_USA_WEST_K2Node_ComponentBoundEvent_33_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__MM_Btn_LocPref_USA_WEST_K2Node_ComponentBoundEvent_33_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__MM_Btn_LocPref_USA_EAST_K2Node_ComponentBoundEvent_34_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__MM_Btn_LocPref_USA_EAST_K2Node_ComponentBoundEvent_34_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__MM_Btn_LocPref_USA_EAST_K2Node_ComponentBoundEvent_34_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__MM_Btn_LocPref_USA_EAST_K2Node_ComponentBoundEvent_34_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__MM_Btn_LocPref_RECOMMENDED_K2Node_ComponentBoundEvent_35_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__MM_Btn_LocPref_RECOMMENDED_K2Node_ComponentBoundEvent_35_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__MM_Btn_LocPref_RECOMMENDED_K2Node_ComponentBoundEvent_35_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__MM_Btn_LocPref_RECOMMENDED_K2Node_ComponentBoundEvent_35_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__MM_GenericSmallBtn01_LeaveCrew_K2Node_ComponentBoundEvent_36_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__MM_GenericSmallBtn01_LeaveCrew_K2Node_ComponentBoundEvent_36_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__MM_GenericSmallBtn01_LeaveCrew_K2Node_ComponentBoundEvent_36_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__MM_GenericSmallBtn01_LeaveCrew_K2Node_ComponentBoundEvent_36_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__MM_GenericSmallBtn01_DisbandCrew_K2Node_ComponentBoundEvent_37_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__MM_GenericSmallBtn01_DisbandCrew_K2Node_ComponentBoundEvent_37_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__MM_GenericSmallBtn01_DisbandCrew_K2Node_ComponentBoundEvent_37_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__MM_GenericSmallBtn01_DisbandCrew_K2Node_ComponentBoundEvent_37_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Btn_LockCrewToggle_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__Btn_LockCrewToggle_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Btn_LockCrewToggle_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__Btn_LockCrewToggle_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Btn_LockCrewToggle_K2Node_ComponentBoundEvent_39_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__Btn_LockCrewToggle_K2Node_ComponentBoundEvent_39_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Btn_LockCrewToggle_K2Node_ComponentBoundEvent_39_OnButtonHoverEvent__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__Btn_LockCrewToggle_K2Node_ComponentBoundEvent_39_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__MM_crewBtn_CreateCrew_K2Node_ComponentBoundEvent_40_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__MM_crewBtn_CreateCrew_K2Node_ComponentBoundEvent_40_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__MM_crewBtn_CreateCrew_K2Node_ComponentBoundEvent_40_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__MM_crewBtn_CreateCrew_K2Node_ComponentBoundEvent_40_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__MM_crewBtn_JoinCrew_K2Node_ComponentBoundEvent_41_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__MM_crewBtn_JoinCrew_K2Node_ComponentBoundEvent_41_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__MM_crewBtn_JoinCrew_K2Node_ComponentBoundEvent_41_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__MM_crewBtn_JoinCrew_K2Node_ComponentBoundEvent_41_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__MM_LaunchToMatchMain_K2Node_ComponentBoundEvent_42_ED_LaunchBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__MM_LaunchToMatchMain_K2Node_ComponentBoundEvent_42_ED_LaunchBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__MM_LaunchToMatchMain_K2Node_ComponentBoundEvent_42_ED_LaunchBtnPressed__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__MM_LaunchToMatchMain_K2Node_ComponentBoundEvent_42_ED_LaunchBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__MM_LaunchToMatchMain_1_K2Node_ComponentBoundEvent_43_ED_LaunchBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__MM_LaunchToMatchMain_1_K2Node_ComponentBoundEvent_43_ED_LaunchBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__MM_LaunchToMatchMain_1_K2Node_ComponentBoundEvent_43_ED_LaunchBtnPressed__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__MM_LaunchToMatchMain_1_K2Node_ComponentBoundEvent_43_ED_LaunchBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Btn_DevBringUpJoinLobby_K2Node_ComponentBoundEvent_44_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__Btn_DevBringUpJoinLobby_K2Node_ComponentBoundEvent_44_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Btn_DevBringUpJoinLobby_K2Node_ComponentBoundEvent_44_OnButtonClickedEvent__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__Btn_DevBringUpJoinLobby_K2Node_ComponentBoundEvent_44_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnMyLobbyInfoHasChange
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::OnMyLobbyInfoHasChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnMyLobbyInfoHasChange");
		
		USIGIS_MenuMain_C_OnMyLobbyInfoHasChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Btn_DevBringUpJoinLobby_1_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__Btn_DevBringUpJoinLobby_1_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Btn_DevBringUpJoinLobby_1_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__Btn_DevBringUpJoinLobby_1_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.CustomEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSLobbyUpdateReceivedCallbackInfo         Data                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void USIGIS_MenuMain_C::CustomEvent_2(const struct FEOSLobbyUpdateReceivedCallbackInfo& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.CustomEvent_2");
		
		USIGIS_MenuMain_C_CustomEvent_2_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.CustomEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSLobbyMemberUpdateReceivedCallbackInfo   Data                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void USIGIS_MenuMain_C::CustomEvent_3(const struct FEOSLobbyMemberUpdateReceivedCallbackInfo& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.CustomEvent_3");
		
		USIGIS_MenuMain_C_CustomEvent_3_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.LobbyUpdateCreatedOrJoined
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CrewUpdate                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_MenuMain_C::LobbyUpdateCreatedOrJoined(bool CrewUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.LobbyUpdateCreatedOrJoined");
		
		USIGIS_MenuMain_C_LobbyUpdateCreatedOrJoined_Params params {};
		params.CrewUpdate = CrewUpdate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Btn_DevBG_Guys_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__Btn_DevBG_Guys_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Btn_DevBG_Guys_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__Btn_DevBG_Guys_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.SoloStartAfterWarning
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::SoloStartAfterWarning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.SoloStartAfterWarning");
		
		USIGIS_MenuMain_C_SoloStartAfterWarning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.CancelNoWeaponWarningPopup
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::CancelNoWeaponWarningPopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.CancelNoWeaponWarningPopup");
		
		USIGIS_MenuMain_C_CancelNoWeaponWarningPopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Btn_DevBG_Guys_1_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__Btn_DevBG_Guys_1_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__Btn_DevBG_Guys_1_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__Btn_DevBG_Guys_1_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.MatchmakeCancelBecauseOfProblemPopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Popup_Desc                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_MenuMain_C::MatchmakeCancelBecauseOfProblemPopup(const class FText& Popup_Desc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.MatchmakeCancelBecauseOfProblemPopup");
		
		USIGIS_MenuMain_C_MatchmakeCancelBecauseOfProblemPopup_Params params {};
		params.Popup_Desc = Popup_Desc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.ProblemCancelOutOfMatchmaking_TimedOut
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::ProblemCancelOutOfMatchmaking_TimedOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.ProblemCancelOutOfMatchmaking_TimedOut");
		
		USIGIS_MenuMain_C_ProblemCancelOutOfMatchmaking_TimedOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.PollSoloAWS
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::PollSoloAWS()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.PollSoloAWS");
		
		USIGIS_MenuMain_C_PollSoloAWS_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.TestCancelTicket
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::TestCancelTicket()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.TestCancelTicket");
		
		USIGIS_MenuMain_C_TestCancelTicket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.TestStartMatchMake
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::TestStartMatchMake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.TestStartMatchMake");
		
		USIGIS_MenuMain_C_TestStartMatchMake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnMatchMakeQuery_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMMatchMakingTicket                         TicketInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_MenuMain_C::OnMatchMakeQuery_Event_1(const struct FMMatchMakingTicket& TicketInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnMatchMakeQuery_Event_1");
		
		USIGIS_MenuMain_C_OnMatchMakeQuery_Event_1_Params params {};
		params.TicketInfo = TicketInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnMatchMakeStart_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      TicketID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_MenuMain_C::OnMatchMakeStart_Event_1(bool Success, const class FString& TicketID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnMatchMakeStart_Event_1");
		
		USIGIS_MenuMain_C_OnMatchMakeStart_Event_1_Params params {};
		params.Success = Success;
		params.TicketID = TicketID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.CustomEvent_4
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::CustomEvent_4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.CustomEvent_4");
		
		USIGIS_MenuMain_C_CustomEvent_4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.CustomEvent_5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMMatchMakingTicket                         TicketInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_MenuMain_C::CustomEvent_5(const struct FMMatchMakingTicket& TicketInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.CustomEvent_5");
		
		USIGIS_MenuMain_C_CustomEvent_5_Params params {};
		params.TicketInfo = TicketInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.CustomEvent_6
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      TicketID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_MenuMain_C::CustomEvent_6(bool Success, const class FString& TicketID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.CustomEvent_6");
		
		USIGIS_MenuMain_C_CustomEvent_6_Params params {};
		params.Success = Success;
		params.TicketID = TicketID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.StartedCptMatchSearch
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::StartedCptMatchSearch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.StartedCptMatchSearch");
		
		USIGIS_MenuMain_C_StartedCptMatchSearch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.NewsToggle
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::NewsToggle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.NewsToggle");
		
		USIGIS_MenuMain_C_NewsToggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.CheckForNews
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::CheckForNews()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.CheckForNews");
		
		USIGIS_MenuMain_C_CheckForNews_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_MM_GenericSmallBtn01_GoBack_News_K2Node_ComponentBoundEvent_2_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__SIGIS_MenuMain_MM_GenericSmallBtn01_GoBack_News_K2Node_ComponentBoundEvent_2_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_MM_GenericSmallBtn01_GoBack_News_K2Node_ComponentBoundEvent_2_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__SIGIS_MenuMain_MM_GenericSmallBtn01_GoBack_News_K2Node_ComponentBoundEvent_2_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.FirstCheckNews
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::FirstCheckNews()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.FirstCheckNews");
		
		USIGIS_MenuMain_C_FirstCheckNews_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.CheckIfShouldBeKicked
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::CheckIfShouldBeKicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.CheckIfShouldBeKicked");
		
		USIGIS_MenuMain_C_CheckIfShouldBeKicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.ResetCheckForIfShouldBeKicked
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::ResetCheckForIfShouldBeKicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.ResetCheckForIfShouldBeKicked");
		
		USIGIS_MenuMain_C_ResetCheckForIfShouldBeKicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.MatchMakingHasFailed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Isfailed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_MenuMain_C::MatchMakingHasFailed(bool Isfailed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.MatchMakingHasFailed");
		
		USIGIS_MenuMain_C_MatchMakingHasFailed_Params params {};
		params.Isfailed = Isfailed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_MM_GenericLargeBtn01_K2Node_ComponentBoundEvent_1_GenericLargeBtn_Pressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__SIGIS_MenuMain_MM_GenericLargeBtn01_K2Node_ComponentBoundEvent_1_GenericLargeBtn_Pressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_MM_GenericLargeBtn01_K2Node_ComponentBoundEvent_1_GenericLargeBtn_Pressed__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__SIGIS_MenuMain_MM_GenericLargeBtn01_K2Node_ComponentBoundEvent_1_GenericLargeBtn_Pressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.OpenTheFriendsMenu
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::OpenTheFriendsMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.OpenTheFriendsMenu");
		
		USIGIS_MenuMain_C_OpenTheFriendsMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_Button_147_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__SIGIS_MenuMain_Button_147_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_Button_147_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__SIGIS_MenuMain_Button_147_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.REFRESH_PlayContractsSmallRows
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::REFRESH_PlayContractsSmallRows()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.REFRESH_PlayContractsSmallRows");
		
		USIGIS_MenuMain_C_REFRESH_PlayContractsSmallRows_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.PLAY_HasBeenOpened
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::PLAY_HasBeenOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.PLAY_HasBeenOpened");
		
		USIGIS_MenuMain_C_PLAY_HasBeenOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.ContractResetTimer
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::ContractResetTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.ContractResetTimer");
		
		USIGIS_MenuMain_C_ContractResetTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_MM_GenericSmallBtn01_GoBack_Tooltip_1_K2Node_ComponentBoundEvent_4_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__SIGIS_MenuMain_MM_GenericSmallBtn01_GoBack_Tooltip_1_K2Node_ComponentBoundEvent_4_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_MM_GenericSmallBtn01_GoBack_Tooltip_1_K2Node_ComponentBoundEvent_4_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__SIGIS_MenuMain_MM_GenericSmallBtn01_GoBack_Tooltip_1_K2Node_ComponentBoundEvent_4_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.ClickedOnSmallContractRow
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::ClickedOnSmallContractRow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.ClickedOnSmallContractRow");
		
		USIGIS_MenuMain_C_ClickedOnSmallContractRow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.MatchMakingResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMatchMakeResultEvent                              ResultBack                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_MenuMain_C::MatchMakingResult(EMatchMakeResultEvent ResultBack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.MatchMakingResult");
		
		USIGIS_MenuMain_C_MatchMakingResult_Params params {};
		params.ResultBack = ResultBack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.StoppedMMResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ResultMessage                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_MenuMain_C::StoppedMMResult(const class FString& ResultMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.StoppedMMResult");
		
		USIGIS_MenuMain_C_StoppedMMResult_Params params {};
		params.ResultMessage = ResultMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.ProblemCancelOnlyUI_Captain
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::ProblemCancelOnlyUI_Captain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.ProblemCancelOnlyUI_Captain");
		
		USIGIS_MenuMain_C_ProblemCancelOnlyUI_Captain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.ProblemCancelOnlyUI_Solo
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::ProblemCancelOnlyUI_Solo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.ProblemCancelOnlyUI_Solo");
		
		USIGIS_MenuMain_C_ProblemCancelOnlyUI_Solo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.Cancel_JustTheUI_SideOfMatchmaking
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::Cancel_JustTheUI_SideOfMatchmaking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.Cancel_JustTheUI_SideOfMatchmaking");
		
		USIGIS_MenuMain_C_Cancel_JustTheUI_SideOfMatchmaking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.CustomEvent_1
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.CustomEvent_1");
		
		USIGIS_MenuMain_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_MM_Event_Start_K2Node_ComponentBoundEvent_6_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__SIGIS_MenuMain_MM_Event_Start_K2Node_ComponentBoundEvent_6_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_MM_Event_Start_K2Node_ComponentBoundEvent_6_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__SIGIS_MenuMain_MM_Event_Start_K2Node_ComponentBoundEvent_6_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.Refresh_EventDetails
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::Refresh_EventDetails()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.Refresh_EventDetails");
		
		USIGIS_MenuMain_C_Refresh_EventDetails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_MM_Event_Restart_K2Node_ComponentBoundEvent_7_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__SIGIS_MenuMain_MM_Event_Restart_K2Node_ComponentBoundEvent_7_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_MM_Event_Restart_K2Node_ComponentBoundEvent_7_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__SIGIS_MenuMain_MM_Event_Restart_K2Node_ComponentBoundEvent_7_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.EVENT_FirstTimeOpen
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::EVENT_FirstTimeOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.EVENT_FirstTimeOpen");
		
		USIGIS_MenuMain_C_EVENT_FirstTimeOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_MM_Event_Restart_3_K2Node_ComponentBoundEvent_8_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__SIGIS_MenuMain_MM_Event_Restart_3_K2Node_ComponentBoundEvent_8_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_MM_Event_Restart_3_K2Node_ComponentBoundEvent_8_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__SIGIS_MenuMain_MM_Event_Restart_3_K2Node_ComponentBoundEvent_8_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_MM_Event_Restart_2_K2Node_ComponentBoundEvent_12_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__SIGIS_MenuMain_MM_Event_Restart_2_K2Node_ComponentBoundEvent_12_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_MM_Event_Restart_2_K2Node_ComponentBoundEvent_12_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__SIGIS_MenuMain_MM_Event_Restart_2_K2Node_ComponentBoundEvent_12_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_EditableTextBox_Event_NameToUseForEvent_K2Node_ComponentBoundEvent_13_OnEditableTextBoxChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void USIGIS_MenuMain_C::BndEvt__SIGIS_MenuMain_EditableTextBox_Event_NameToUseForEvent_K2Node_ComponentBoundEvent_13_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_EditableTextBox_Event_NameToUseForEvent_K2Node_ComponentBoundEvent_13_OnEditableTextBoxChangedEvent__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__SIGIS_MenuMain_EditableTextBox_Event_NameToUseForEvent_K2Node_ComponentBoundEvent_13_OnEditableTextBoxChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnDynoHasCharacter_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HasPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_MenuMain_C::OnDynoHasCharacter_Event_1(bool Success, bool HasPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnDynoHasCharacter_Event_1");
		
		USIGIS_MenuMain_C_OnDynoHasCharacter_Event_1_Params params {};
		params.Success = Success;
		params.HasPlayer = HasPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnDynoSetScore_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_MenuMain_C::OnDynoSetScore_Event_1(bool Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnDynoSetScore_Event_1");
		
		USIGIS_MenuMain_C_OnDynoSetScore_Event_1_Params params {};
		params.Success = Success;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.Event_GetMyScore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLeaderBoardMemberInfo                      PlayerInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_MenuMain_C::Event_GetMyScore(bool Success, const struct FLeaderBoardMemberInfo& PlayerInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.Event_GetMyScore");
		
		USIGIS_MenuMain_C_Event_GetMyScore_Params params {};
		params.Success = Success;
		params.PlayerInfo = PlayerInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnDynoCreateChar_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_MenuMain_C::OnDynoCreateChar_Event_1(bool Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnDynoCreateChar_Event_1");
		
		USIGIS_MenuMain_C_OnDynoCreateChar_Event_1_Params params {};
		params.Success = Success;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_Button_192_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__SIGIS_MenuMain_Button_192_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_Button_192_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__SIGIS_MenuMain_Button_192_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.Event_GetAllLeaderboardsList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FLeaderBoardMemberInfo>              leaderboardback                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void USIGIS_MenuMain_C::Event_GetAllLeaderboardsList(bool Success, TArray<struct FLeaderBoardMemberInfo> leaderboardback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.Event_GetAllLeaderboardsList");
		
		USIGIS_MenuMain_C_Event_GetAllLeaderboardsList_Params params {};
		params.Success = Success;
		params.leaderboardback = leaderboardback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_Button_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__SIGIS_MenuMain_Button_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_Button_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__SIGIS_MenuMain_Button_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.LoginSuccess_InMainMenuOptions
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::LoginSuccess_InMainMenuOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.LoginSuccess_InMainMenuOptions");
		
		USIGIS_MenuMain_C_LoginSuccess_InMainMenuOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_MM_Event_SeeFullLeaderboardList_K2Node_ComponentBoundEvent_23_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__SIGIS_MenuMain_MM_Event_SeeFullLeaderboardList_K2Node_ComponentBoundEvent_23_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_MM_Event_SeeFullLeaderboardList_K2Node_ComponentBoundEvent_23_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__SIGIS_MenuMain_MM_Event_SeeFullLeaderboardList_K2Node_ComponentBoundEvent_23_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.StartCrewKickCheckTimer
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::StartCrewKickCheckTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.StartCrewKickCheckTimer");
		
		USIGIS_MenuMain_C_StartCrewKickCheckTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.RunCrewKickCheck
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::RunCrewKickCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.RunCrewKickCheck");
		
		USIGIS_MenuMain_C_RunCrewKickCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.CancelCrewCheckTimer
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::CancelCrewCheckTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.CancelCrewCheckTimer");
		
		USIGIS_MenuMain_C_CancelCrewCheckTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.IsMatchMakingView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsinATeam                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_MenuMain_C::IsMatchMakingView(bool IsinATeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.IsMatchMakingView");
		
		USIGIS_MenuMain_C_IsMatchMakingView_Params params {};
		params.IsinATeam = IsinATeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.CaptainKickedCrewMember
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               sucessfulkick                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_MenuMain_C::CaptainKickedCrewMember(bool sucessfulkick)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.CaptainKickedCrewMember");
		
		USIGIS_MenuMain_C_CaptainKickedCrewMember_Params params {};
		params.sucessfulkick = sucessfulkick;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.CheckIfInACrewAndKickCheckNotRunningAlready
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::CheckIfInACrewAndKickCheckNotRunningAlready()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.CheckIfInACrewAndKickCheckNotRunningAlready");
		
		USIGIS_MenuMain_C_CheckIfInACrewAndKickCheckNotRunningAlready_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnNaughtyReturn_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isNaughty                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      ReasonNaughty                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_MenuMain_C::OnNaughtyReturn_Event_1(bool isNaughty, const class FString& ReasonNaughty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnNaughtyReturn_Event_1");
		
		USIGIS_MenuMain_C_OnNaughtyReturn_Event_1_Params params {};
		params.isNaughty = isNaughty;
		params.ReasonNaughty = ReasonNaughty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_Button_Test_Create_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__SIGIS_MenuMain_Button_Test_Create_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_Button_Test_Create_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__SIGIS_MenuMain_Button_Test_Create_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_Button_Test_Join_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__SIGIS_MenuMain_Button_Test_Join_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_Button_Test_Join_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__SIGIS_MenuMain_Button_Test_Join_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_Button_TestRefreshCrews_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__SIGIS_MenuMain_Button_TestRefreshCrews_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_Button_TestRefreshCrews_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__SIGIS_MenuMain_Button_TestRefreshCrews_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_Button_Test_Create_1_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__SIGIS_MenuMain_Button_Test_Create_1_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_Button_Test_Create_1_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__SIGIS_MenuMain_Button_Test_Create_1_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_Button_Test_Leave_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__SIGIS_MenuMain_Button_Test_Leave_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_Button_Test_Leave_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__SIGIS_MenuMain_Button_Test_Leave_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_Button_Test_Kick_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__SIGIS_MenuMain_Button_Test_Kick_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_Button_Test_Kick_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__SIGIS_MenuMain_Button_Test_Kick_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.NakamaCrew_InitialSetup
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::NakamaCrew_InitialSetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.NakamaCrew_InitialSetup");
		
		USIGIS_MenuMain_C_NakamaCrew_InitialSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.Return_NakamaCrewCreated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CrewID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_MenuMain_C::Return_NakamaCrewCreated(const class FString& CrewID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.Return_NakamaCrewCreated");
		
		USIGIS_MenuMain_C_Return_NakamaCrewCreated_Params params {};
		params.CrewID = CrewID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.Return_NakamaCrewDestroyed
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::Return_NakamaCrewDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.Return_NakamaCrewDestroyed");
		
		USIGIS_MenuMain_C_Return_NakamaCrewDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.Return_NakamaJoinedACrew
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::Return_NakamaJoinedACrew()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.Return_NakamaJoinedACrew");
		
		USIGIS_MenuMain_C_Return_NakamaJoinedACrew_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.Return_NakamaLeaveACrew
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::Return_NakamaLeaveACrew()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.Return_NakamaLeaveACrew");
		
		USIGIS_MenuMain_C_Return_NakamaLeaveACrew_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.Return_NakamaKickedCrewMember
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::Return_NakamaKickedCrewMember()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.Return_NakamaKickedCrewMember");
		
		USIGIS_MenuMain_C_Return_NakamaKickedCrewMember_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.Return_UpdateCrew
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::Return_UpdateCrew()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.Return_UpdateCrew");
		
		USIGIS_MenuMain_C_Return_UpdateCrew_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_Button_Test_Create_1_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__SIGIS_MenuMain_Button_Test_Create_1_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_Button_Test_Create_1_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__SIGIS_MenuMain_Button_Test_Create_1_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_48_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__SIGIS_MenuMain_MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_48_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_48_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__SIGIS_MenuMain_MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_48_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.ReturnOnNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FNakamaNotification>                 returnednotification                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void USIGIS_MenuMain_C::ReturnOnNotification(TArray<struct FNakamaNotification> returnednotification)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.ReturnOnNotification");
		
		USIGIS_MenuMain_C_ReturnOnNotification_Params params {};
		params.returnednotification = returnednotification;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.ReturnOnNotificationDeleted
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::ReturnOnNotificationDeleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.ReturnOnNotificationDeleted");
		
		USIGIS_MenuMain_C_ReturnOnNotificationDeleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.Return_Connected
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::Return_Connected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.Return_Connected");
		
		USIGIS_MenuMain_C_Return_Connected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.Return_Disconnected
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::Return_Disconnected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.Return_Disconnected");
		
		USIGIS_MenuMain_C_Return_Disconnected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.Return_NewPresence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNakamaChannelPresenceObject                NewPres                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_MenuMain_C::Return_NewPresence(const struct FNakamaChannelPresenceObject& NewPres)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.Return_NewPresence");
		
		USIGIS_MenuMain_C_Return_NewPresence_Params params {};
		params.NewPres = NewPres;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.Return_StatusPresence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNakamaStatusPresenceObject                 NewPres                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_MenuMain_C::Return_StatusPresence(const struct FNakamaStatusPresenceObject& NewPres)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.Return_StatusPresence");
		
		USIGIS_MenuMain_C_Return_StatusPresence_Params params {};
		params.NewPres = NewPres;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.Return_ChatMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNakamaChatObject                           ChatMsg                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_MenuMain_C::Return_ChatMessage(const struct FNakamaChatObject& ChatMsg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.Return_ChatMessage");
		
		USIGIS_MenuMain_C_Return_ChatMessage_Params params {};
		params.ChatMsg = ChatMsg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_Button_Test_UpdateCrewMetaData_K2Node_ComponentBoundEvent_46_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__SIGIS_MenuMain_Button_Test_UpdateCrewMetaData_K2Node_ComponentBoundEvent_46_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_Button_Test_UpdateCrewMetaData_K2Node_ComponentBoundEvent_46_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__SIGIS_MenuMain_Button_Test_UpdateCrewMetaData_K2Node_ComponentBoundEvent_46_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_Button_Test_CheckInfo_1_K2Node_ComponentBoundEvent_49_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__SIGIS_MenuMain_Button_Test_CheckInfo_1_K2Node_ComponentBoundEvent_49_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_Button_Test_CheckInfo_1_K2Node_ComponentBoundEvent_49_OnButtonClickedEvent__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__SIGIS_MenuMain_Button_Test_CheckInfo_1_K2Node_ComponentBoundEvent_49_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.Return_JoinedGroupChat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ChatRoomID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_MenuMain_C::Return_JoinedGroupChat(const class FString& ChatRoomID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.Return_JoinedGroupChat");
		
		USIGIS_MenuMain_C_Return_JoinedGroupChat_Params params {};
		params.ChatRoomID = ChatRoomID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.RefreshCurrentCrewInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNakamaNGroupBP                             returnedinfo                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               Success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_MenuMain_C::RefreshCurrentCrewInfo(const struct FNakamaNGroupBP& returnedinfo, bool Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.RefreshCurrentCrewInfo");
		
		USIGIS_MenuMain_C_RefreshCurrentCrewInfo_Params params {};
		params.returnedinfo = returnedinfo;
		params.Success = Success;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.Return CrewSearchForID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FNakamaNGroup>                       returnedSearch                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FString                                      pageNum                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_MenuMain_C::Return_CrewSearchForID(TArray<struct FNakamaNGroup> returnedSearch, const class FString& pageNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.Return CrewSearchForID");
		
		USIGIS_MenuMain_C_Return_CrewSearchForID_Params params {};
		params.returnedSearch = returnedSearch;
		params.pageNum = pageNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.REFRESH_Master_CrewOrSolo
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::REFRESH_Master_CrewOrSolo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.REFRESH_Master_CrewOrSolo");
		
		USIGIS_MenuMain_C_REFRESH_Master_CrewOrSolo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.Refresh_CrewSoloInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CrewID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_MenuMain_C::Refresh_CrewSoloInfo(const class FString& CrewID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.Refresh_CrewSoloInfo");
		
		USIGIS_MenuMain_C_Refresh_CrewSoloInfo_Params params {};
		params.CrewID = CrewID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.Refresh_CrewAsSoloPlay
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::Refresh_CrewAsSoloPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.Refresh_CrewAsSoloPlay");
		
		USIGIS_MenuMain_C_Refresh_CrewAsSoloPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_Button_59_K2Node_ComponentBoundEvent_50_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::BndEvt__SIGIS_MenuMain_Button_59_K2Node_ComponentBoundEvent_50_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.BndEvt__SIGIS_MenuMain_Button_59_K2Node_ComponentBoundEvent_50_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_MenuMain_C_BndEvt__SIGIS_MenuMain_Button_59_K2Node_ComponentBoundEvent_50_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.ReturnFromMatchEndScreen_NakamaRefresh
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::ReturnFromMatchEndScreen_NakamaRefresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.ReturnFromMatchEndScreen_NakamaRefresh");
		
		USIGIS_MenuMain_C_ReturnFromMatchEndScreen_NakamaRefresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.GiftNotifySentToPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNakamaNotification                         NotifyInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_MenuMain_C::GiftNotifySentToPlayer(const struct FNakamaNotification& NotifyInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.GiftNotifySentToPlayer");
		
		USIGIS_MenuMain_C_GiftNotifySentToPlayer_Params params {};
		params.NotifyInfo = NotifyInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnPingIssues_Encountered
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::OnPingIssues_Encountered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnPingIssues_Encountered");
		
		USIGIS_MenuMain_C_OnPingIssues_Encountered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.Return_OnPermMessageRecv
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      messageback                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               HasMessage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_MenuMain_C::Return_OnPermMessageRecv(const class FString& messageback, bool HasMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.Return_OnPermMessageRecv");
		
		USIGIS_MenuMain_C_Return_OnPermMessageRecv_Params params {};
		params.messageback = messageback;
		params.HasMessage = HasMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnStartNakMM_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TicketNak                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_MenuMain_C::OnStartNakMM_Event_1(const class FString& TicketNak)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnStartNakMM_Event_1");
		
		USIGIS_MenuMain_C_OnStartNakMM_Event_1_Params params {};
		params.TicketNak = TicketNak;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnStopNakMM_Event_1
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::OnStopNakMM_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.OnStopNakMM_Event_1");
		
		USIGIS_MenuMain_C_OnStopNakMM_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.MatchmakingEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNakamaNotification                         NotifyInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_MenuMain_C::MatchmakingEvent(const struct FNakamaNotification& NotifyInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.MatchmakingEvent");
		
		USIGIS_MenuMain_C_MatchmakingEvent_Params params {};
		params.NotifyInfo = NotifyInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.ExecuteUbergraph_SIGIS_MenuMain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_MenuMain_C::ExecuteUbergraph_SIGIS_MenuMain(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.ExecuteUbergraph_SIGIS_MenuMain");
		
		USIGIS_MenuMain_C_ExecuteUbergraph_SIGIS_MenuMain_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.ED_CrewCreatePressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::ED_CrewCreatePressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.ED_CrewCreatePressed__DelegateSignature");
		
		USIGIS_MenuMain_C_ED_CrewCreatePressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.ED_CrewJoinPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MenuMain_C::ED_CrewJoinPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.ED_CrewJoinPressed__DelegateSignature");
		
		USIGIS_MenuMain_C_ED_CrewJoinPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.Update_TeamMatchmakingState__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECrewEvents                                        CrewState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_MenuMain_C::Update_TeamMatchmakingState__DelegateSignature(ECrewEvents CrewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.Update_TeamMatchmakingState__DelegateSignature");
		
		USIGIS_MenuMain_C_Update_TeamMatchmakingState__DelegateSignature_Params params {};
		params.CrewState = CrewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.isMatchmaking_TeamView__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsinATeam                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_MenuMain_C::isMatchmaking_TeamView__DelegateSignature(bool IsinATeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.isMatchmaking_TeamView__DelegateSignature");
		
		USIGIS_MenuMain_C_isMatchmaking_TeamView__DelegateSignature_Params params {};
		params.IsinATeam = IsinATeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.SearchForMatchTimerChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        TimeAsText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_MenuMain_C::SearchForMatchTimerChanged__DelegateSignature(const class FText& TimeAsText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.SearchForMatchTimerChanged__DelegateSignature");
		
		USIGIS_MenuMain_C_SearchForMatchTimerChanged__DelegateSignature_Params params {};
		params.TimeAsText = TimeAsText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MenuMain.SIGIS_MenuMain_C.IsMatchmaking_Singleplayer__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsMatchmaking                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_MenuMain_C::IsMatchmaking_Singleplayer__DelegateSignature(bool IsMatchmaking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MenuMain.SIGIS_MenuMain_C.IsMatchmaking_Singleplayer__DelegateSignature");
		
		USIGIS_MenuMain_C_IsMatchmaking_Singleplayer__DelegateSignature_Params params {};
		params.IsMatchmaking = IsMatchmaking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGIS_MenuMain_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGIS_MenuMain_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SIGIS_MenuMain.SIGIS_MenuMain_C");
		return ptr;
	}

}


