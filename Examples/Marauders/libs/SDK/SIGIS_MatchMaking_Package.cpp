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
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.SetMatchStartedDontLetOthersJoin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SetMatchHasStarted                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_MatchMaking_C::SetMatchStartedDontLetOthersJoin(bool SetMatchHasStarted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.SetMatchStartedDontLetOthersJoin");
		
		USIGIS_MatchMaking_C_SetMatchStartedDontLetOthersJoin_Params params {};
		params.SetMatchHasStarted = SetMatchHasStarted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.SetTeamSoloIDS
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::SetTeamSoloIDS()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.SetTeamSoloIDS");
		
		USIGIS_MatchMaking_C_SetTeamSoloIDS_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.GetSetShipCurrentName
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::GetSetShipCurrentName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.GetSetShipCurrentName");
		
		USIGIS_MatchMaking_C_GetSetShipCurrentName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.SetServerLocation_TAB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WhichTabActive                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_MatchMaking_C::SetServerLocation_TAB(int32_t WhichTabActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.SetServerLocation_TAB");
		
		USIGIS_MatchMaking_C_SetServerLocation_TAB_Params params {};
		params.WhichTabActive = WhichTabActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.SetServerLocationPreference
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WhichRegion                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OnlyVisuals                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_MatchMaking_C::SetServerLocationPreference(int32_t WhichRegion, bool OnlyVisuals)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.SetServerLocationPreference");
		
		USIGIS_MatchMaking_C_SetServerLocationPreference_Params params {};
		params.WhichRegion = WhichRegion;
		params.OnlyVisuals = OnlyVisuals;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.SetupReqPasswordInfo
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::SetupReqPasswordInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.SetupReqPasswordInfo");
		
		USIGIS_MatchMaking_C_SetupReqPasswordInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.LoadLastCrewDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               DidLoad                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      PrevCrewName                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_MatchMaking_C::LoadLastCrewDetails(bool* DidLoad, class FString* PrevCrewName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.LoadLastCrewDetails");
		
		USIGIS_MatchMaking_C_LoadLastCrewDetails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DidLoad != nullptr)
			*DidLoad = params.DidLoad;
		if (PrevCrewName != nullptr)
			*PrevCrewName = params.PrevCrewName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.SaveLastCrewDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PrevCrewName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	bool USIGIS_MatchMaking_C::SaveLastCrewDetails(const class FString& PrevCrewName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.SaveLastCrewDetails");
		
		USIGIS_MatchMaking_C_SaveLastCrewDetails_Params params {};
		params.PrevCrewName = PrevCrewName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.UpdateFindingMatchStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_MatchMaking_C::UpdateFindingMatchStatus(bool Show, const class FString& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.UpdateFindingMatchStatus");
		
		USIGIS_MatchMaking_C_UpdateFindingMatchStatus_Params params {};
		params.Show = Show;
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.StopSearchingForMatchUI
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::StopSearchingForMatchUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.StopSearchingForMatchUI");
		
		USIGIS_MatchMaking_C_StopSearchingForMatchUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.SetCaptainAllowedToSearchForMatch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               b_AllowSearchForMatch                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_MatchMaking_C::SetCaptainAllowedToSearchForMatch(bool b_AllowSearchForMatch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.SetCaptainAllowedToSearchForMatch");
		
		USIGIS_MatchMaking_C_SetCaptainAllowedToSearchForMatch_Params params {};
		params.b_AllowSearchForMatch = b_AllowSearchForMatch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.ShowBtnQuitMatchMakeDuringLoadingScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isCaptain                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isSoloMatch                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_MatchMaking_C::ShowBtnQuitMatchMakeDuringLoadingScreen(bool isCaptain, bool isSoloMatch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.ShowBtnQuitMatchMakeDuringLoadingScreen");
		
		USIGIS_MatchMaking_C_ShowBtnQuitMatchMakeDuringLoadingScreen_Params params {};
		params.isCaptain = isCaptain;
		params.isSoloMatch = isSoloMatch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.FadeOutLoadingScreenToLaunchMatch
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::FadeOutLoadingScreenToLaunchMatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.FadeOutLoadingScreenToLaunchMatch");
		
		USIGIS_MatchMaking_C_FadeOutLoadingScreenToLaunchMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.Set_Region_TabLook
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERegionSig                                         Region                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_MatchMaking_C::Set_Region_TabLook(ERegionSig Region)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.Set_Region_TabLook");
		
		USIGIS_MatchMaking_C_Set_Region_TabLook_Params params {};
		params.Region = Region;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.IsSlotFullOrEmpty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ForceAllEmpty                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_MatchMaking_C::IsSlotFullOrEmpty(bool ForceAllEmpty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.IsSlotFullOrEmpty");
		
		USIGIS_MatchMaking_C_IsSlotFullOrEmpty_Params params {};
		params.ForceAllEmpty = ForceAllEmpty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.Get_AllCrewMemberWidgets
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::Get_AllCrewMemberWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.Get_AllCrewMemberWidgets");
		
		USIGIS_MatchMaking_C_Get_AllCrewMemberWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.SetCrewUI_AsType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isCaptain                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_MatchMaking_C::SetCrewUI_AsType(bool isCaptain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.SetCrewUI_AsType");
		
		USIGIS_MatchMaking_C_SetCrewUI_AsType_Params params {};
		params.isCaptain = isCaptain;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.SetLoadingScreenDetails
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::SetLoadingScreenDetails()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.SetLoadingScreenDetails");
		
		USIGIS_MatchMaking_C_SetLoadingScreenDetails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.ShowHideLoadingListIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_MatchMaking_C::ShowHideLoadingListIcon(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.ShowHideLoadingListIcon");
		
		USIGIS_MatchMaking_C_ShowHideLoadingListIcon_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.GetCrewID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Output_Get                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_MatchMaking_C::GetCrewID(class FString* Output_Get)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.GetCrewID");
		
		USIGIS_MatchMaking_C_GetCrewID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output_Get != nullptr)
			*Output_Get = params.Output_Get;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.SwitchMatchmakingState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_MatchMakingStates                                SwitchToMatchMakingState                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_MatchMaking_C::SwitchMatchmakingState(E_MatchMakingStates SwitchToMatchMakingState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.SwitchMatchmakingState");
		
		USIGIS_MatchMaking_C_SwitchMatchmakingState_Params params {};
		params.SwitchToMatchMakingState = SwitchToMatchMakingState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.RefreshThis
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::RefreshThis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.RefreshThis");
		
		USIGIS_MatchMaking_C_RefreshThis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.KickPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      userId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_MatchMaking_C::KickPlayer(const class FString& userId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.KickPlayer");
		
		USIGIS_MatchMaking_C_KickPlayer_Params params {};
		params.userId = userId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__RefreshBtn_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::BndEvt__RefreshBtn_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__RefreshBtn_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		USIGIS_MatchMaking_C_BndEvt__RefreshBtn_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.RefreshCrewMembers
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::RefreshCrewMembers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.RefreshCrewMembers");
		
		USIGIS_MatchMaking_C_RefreshCrewMembers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.RefreshCrewLobby
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::RefreshCrewLobby()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.RefreshCrewLobby");
		
		USIGIS_MatchMaking_C_RefreshCrewLobby_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.Construct
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.Construct");
		
		USIGIS_MatchMaking_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__ServerBrowse_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::BndEvt__ServerBrowse_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__ServerBrowse_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		USIGIS_MatchMaking_C_BndEvt__ServerBrowse_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_StartASquad_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::BndEvt__Btn_StartASquad_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_StartASquad_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_MatchMaking_C_BndEvt__Btn_StartASquad_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_CancelCreateCrew_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::BndEvt__Btn_CancelCreateCrew_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_CancelCreateCrew_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_MatchMaking_C_BndEvt__Btn_CancelCreateCrew_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Button_124_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::BndEvt__Button_124_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Button_124_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		USIGIS_MatchMaking_C_BndEvt__Button_124_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.OpenSearchForCrew
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::OpenSearchForCrew()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.OpenSearchForCrew");
		
		USIGIS_MatchMaking_C_OpenSearchForCrew_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.CloseSearchForCrew
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::CloseSearchForCrew()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.CloseSearchForCrew");
		
		USIGIS_MatchMaking_C_CloseSearchForCrew_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_RefreshList_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::BndEvt__Btn_RefreshList_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_RefreshList_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");
		
		USIGIS_MatchMaking_C_BndEvt__Btn_RefreshList_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_LeaveGroup_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::BndEvt__Btn_LeaveGroup_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_LeaveGroup_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_MatchMaking_C_BndEvt__Btn_LeaveGroup_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_DestroyGroup_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::BndEvt__Btn_DestroyGroup_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_DestroyGroup_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_MatchMaking_C_BndEvt__Btn_DestroyGroup_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.InACrewOpen
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::InACrewOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.InACrewOpen");
		
		USIGIS_MatchMaking_C_InACrewOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.InACrewClose
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::InACrewClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.InACrewClose");
		
		USIGIS_MatchMaking_C_InACrewClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.HeartbreatInCaptain
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::HeartbreatInCaptain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.HeartbreatInCaptain");
		
		USIGIS_MatchMaking_C_HeartbreatInCaptain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.RefreshUIForCrewMembers
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::RefreshUIForCrewMembers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.RefreshUIForCrewMembers");
		
		USIGIS_MatchMaking_C_RefreshUIForCrewMembers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__FetchLobby_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::BndEvt__FetchLobby_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__FetchLobby_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		USIGIS_MatchMaking_C_BndEvt__FetchLobby_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__StartMatchMake_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::BndEvt__StartMatchMake_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__StartMatchMake_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		USIGIS_MatchMaking_C_BndEvt__StartMatchMake_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.MMFail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_MatchMaking_C::MMFail(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.MMFail");
		
		USIGIS_MatchMaking_C_MMFail_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_StartANewSquad_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::BndEvt__Btn_StartANewSquad_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_StartANewSquad_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_MatchMaking_C_BndEvt__Btn_StartANewSquad_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_RefreshCrewListNoCrewsFound_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::BndEvt__Btn_RefreshCrewListNoCrewsFound_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_RefreshCrewListNoCrewsFound_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_MatchMaking_C_BndEvt__Btn_RefreshCrewListNoCrewsFound_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.OpenedMatchmaking
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::OpenedMatchmaking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.OpenedMatchmaking");
		
		USIGIS_MatchMaking_C_OpenedMatchmaking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.Heartbeat_NonCaptain
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::Heartbeat_NonCaptain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.Heartbeat_NonCaptain");
		
		USIGIS_MatchMaking_C_Heartbeat_NonCaptain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.FoundIP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ip                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_MatchMaking_C::FoundIP(const class FString& ip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.FoundIP");
		
		USIGIS_MatchMaking_C_FoundIP_Params params {};
		params.ip = ip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.CptMatchMake
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::CptMatchMake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.CptMatchMake");
		
		USIGIS_MatchMaking_C_CptMatchMake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.MM Fake Players
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::MM_Fake_Players()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.MM Fake Players");
		
		USIGIS_MatchMaking_C_MM_Fake_Players_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.FailedCptMM
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_MatchMaking_C::FailedCptMM(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.FailedCptMM");
		
		USIGIS_MatchMaking_C_FailedCptMM_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.FindingMatchOvertime
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::FindingMatchOvertime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.FindingMatchOvertime");
		
		USIGIS_MatchMaking_C_FindingMatchOvertime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.FILLMM
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::FILLMM()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.FILLMM");
		
		USIGIS_MatchMaking_C_FILLMM_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.SearchingForMatchTimer
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::SearchingForMatchTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.SearchingForMatchTimer");
		
		USIGIS_MatchMaking_C_SearchingForMatchTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.SearchForMatch_StartTimer
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::SearchForMatch_StartTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.SearchForMatch_StartTimer");
		
		USIGIS_MatchMaking_C_SearchForMatch_StartTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.SearchForMatch_StopTimer
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::SearchForMatch_StopTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.SearchForMatch_StopTimer");
		
		USIGIS_MatchMaking_C_SearchForMatch_StopTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__BACKBTN_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::BndEvt__BACKBTN_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__BACKBTN_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_MatchMaking_C_BndEvt__BACKBTN_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.GoBack_CaptainLeaveGroup
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::GoBack_CaptainLeaveGroup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.GoBack_CaptainLeaveGroup");
		
		USIGIS_MatchMaking_C_GoBack_CaptainLeaveGroup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.GoBack_CrewMemberLeave
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::GoBack_CrewMemberLeave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.GoBack_CrewMemberLeave");
		
		USIGIS_MatchMaking_C_GoBack_CrewMemberLeave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_Region_USA_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::BndEvt__Btn_Region_USA_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_Region_USA_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_MatchMaking_C_BndEvt__Btn_Region_USA_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_Region_EU_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::BndEvt__Btn_Region_EU_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_Region_EU_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_MatchMaking_C_BndEvt__Btn_Region_EU_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_CancelFindMatch_CrewVersion_K2Node_ComponentBoundEvent_17_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::BndEvt__Btn_CancelFindMatch_CrewVersion_K2Node_ComponentBoundEvent_17_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_CancelFindMatch_CrewVersion_K2Node_ComponentBoundEvent_17_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_MatchMaking_C_BndEvt__Btn_CancelFindMatch_CrewVersion_K2Node_ComponentBoundEvent_17_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_CancelFindMatch_CaptainVersion_K2Node_ComponentBoundEvent_18_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::BndEvt__Btn_CancelFindMatch_CaptainVersion_K2Node_ComponentBoundEvent_18_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_CancelFindMatch_CaptainVersion_K2Node_ComponentBoundEvent_18_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_MatchMaking_C_BndEvt__Btn_CancelFindMatch_CaptainVersion_K2Node_ComponentBoundEvent_18_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_CancelFindMatch_SoloVersion_K2Node_ComponentBoundEvent_19_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::BndEvt__Btn_CancelFindMatch_SoloVersion_K2Node_ComponentBoundEvent_19_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_CancelFindMatch_SoloVersion_K2Node_ComponentBoundEvent_19_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_MatchMaking_C_BndEvt__Btn_CancelFindMatch_SoloVersion_K2Node_ComponentBoundEvent_19_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.FakeGoBackPress_Matchmaking
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::FakeGoBackPress_Matchmaking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.FakeGoBackPress_Matchmaking");
		
		USIGIS_MatchMaking_C_FakeGoBackPress_Matchmaking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.ClosedMatchmaking
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::ClosedMatchmaking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.ClosedMatchmaking");
		
		USIGIS_MatchMaking_C_ClosedMatchmaking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.RefreshServerBrowserList
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::RefreshServerBrowserList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.RefreshServerBrowserList");
		
		USIGIS_MatchMaking_C_RefreshServerBrowserList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_RefreshServerBrowserList_K2Node_ComponentBoundEvent_20_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::BndEvt__Btn_RefreshServerBrowserList_K2Node_ComponentBoundEvent_20_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_RefreshServerBrowserList_K2Node_ComponentBoundEvent_20_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_MatchMaking_C_BndEvt__Btn_RefreshServerBrowserList_K2Node_ComponentBoundEvent_20_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_RefreshServerBrowsList_NoCrewsFound_K2Node_ComponentBoundEvent_21_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::BndEvt__Btn_RefreshServerBrowsList_NoCrewsFound_K2Node_ComponentBoundEvent_21_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_RefreshServerBrowsList_NoCrewsFound_K2Node_ComponentBoundEvent_21_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_MatchMaking_C_BndEvt__Btn_RefreshServerBrowsList_NoCrewsFound_K2Node_ComponentBoundEvent_21_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.NewStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMMatchmakingStatus                                MatchmakingStatus                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_MatchMaking_C::NewStatus(EMMatchmakingStatus MatchmakingStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.NewStatus");
		
		USIGIS_MatchMaking_C_NewStatus_Params params {};
		params.MatchmakingStatus = MatchmakingStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.Error
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Reason                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_MatchMaking_C::Error(const class FString& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.Error");
		
		USIGIS_MatchMaking_C_Error_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.JoinGAmePressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      address                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_MatchMaking_C::JoinGAmePressed(const class FString& address)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.JoinGAmePressed");
		
		USIGIS_MatchMaking_C_JoinGAmePressed_Params params {};
		params.address = address;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.PlayFab_CancelMatchmaking
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::PlayFab_CancelMatchmaking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.PlayFab_CancelMatchmaking");
		
		USIGIS_MatchMaking_C_PlayFab_CancelMatchmaking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.JoinCrew_New
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CrewID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               HasPassword                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        CrewNiceName                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_MatchMaking_C::JoinCrew_New(const class FString& CrewID, bool HasPassword, const class FText& CrewNiceName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.JoinCrew_New");
		
		USIGIS_MatchMaking_C_JoinCrew_New_Params params {};
		params.CrewID = CrewID;
		params.HasPassword = HasPassword;
		params.CrewNiceName = CrewNiceName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_ReqPasswordTry_K2Node_ComponentBoundEvent_24_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::BndEvt__Btn_ReqPasswordTry_K2Node_ComponentBoundEvent_24_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_ReqPasswordTry_K2Node_ComponentBoundEvent_24_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_MatchMaking_C_BndEvt__Btn_ReqPasswordTry_K2Node_ComponentBoundEvent_24_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_ReqPasswordCancel_K2Node_ComponentBoundEvent_25_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::BndEvt__Btn_ReqPasswordCancel_K2Node_ComponentBoundEvent_25_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_ReqPasswordCancel_K2Node_ComponentBoundEvent_25_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_MatchMaking_C_BndEvt__Btn_ReqPasswordCancel_K2Node_ComponentBoundEvent_25_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.CustomEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_MatchMaking_C::CustomEvent_3(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.CustomEvent_3");
		
		USIGIS_MatchMaking_C_CustomEvent_3_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.SeeIfPasswordCorrectHeartbeat
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::SeeIfPasswordCorrectHeartbeat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.SeeIfPasswordCorrectHeartbeat");
		
		USIGIS_MatchMaking_C_SeeIfPasswordCorrectHeartbeat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_RegionSelect_USAWEST_K2Node_ComponentBoundEvent_23_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::BndEvt__Btn_RegionSelect_USAWEST_K2Node_ComponentBoundEvent_23_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_RegionSelect_USAWEST_K2Node_ComponentBoundEvent_23_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_MatchMaking_C_BndEvt__Btn_RegionSelect_USAWEST_K2Node_ComponentBoundEvent_23_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_RegionSelect_USA_EAST_K2Node_ComponentBoundEvent_26_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::BndEvt__Btn_RegionSelect_USA_EAST_K2Node_ComponentBoundEvent_26_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_RegionSelect_USA_EAST_K2Node_ComponentBoundEvent_26_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_MatchMaking_C_BndEvt__Btn_RegionSelect_USA_EAST_K2Node_ComponentBoundEvent_26_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_RegionSelect_EU_K2Node_ComponentBoundEvent_27_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::BndEvt__Btn_RegionSelect_EU_K2Node_ComponentBoundEvent_27_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_RegionSelect_EU_K2Node_ComponentBoundEvent_27_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_MatchMaking_C_BndEvt__Btn_RegionSelect_EU_K2Node_ComponentBoundEvent_27_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_RegionSelect_Recomended_K2Node_ComponentBoundEvent_28_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::BndEvt__Btn_RegionSelect_Recomended_K2Node_ComponentBoundEvent_28_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.BndEvt__Btn_RegionSelect_Recomended_K2Node_ComponentBoundEvent_28_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_MatchMaking_C_BndEvt__Btn_RegionSelect_Recomended_K2Node_ComponentBoundEvent_28_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.EmptyCustom
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::EmptyCustom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.EmptyCustom");
		
		USIGIS_MatchMaking_C_EmptyCustom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.Cancel_FindMatch_FromCaptainView
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::Cancel_FindMatch_FromCaptainView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.Cancel_FindMatch_FromCaptainView");
		
		USIGIS_MatchMaking_C_Cancel_FindMatch_FromCaptainView_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.Cancel_FindMatch_SoloVersion
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::Cancel_FindMatch_SoloVersion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.Cancel_FindMatch_SoloVersion");
		
		USIGIS_MatchMaking_C_Cancel_FindMatch_SoloVersion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.SoloPlayerGoToMatch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URLToUse                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_MatchMaking_C::SoloPlayerGoToMatch(const class FString& URLToUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.SoloPlayerGoToMatch");
		
		USIGIS_MatchMaking_C_SoloPlayerGoToMatch_Params params {};
		params.URLToUse = URLToUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.AWS_Start MM
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::AWS_Start_MM()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.AWS_Start MM");
		
		USIGIS_MatchMaking_C_AWS_Start_MM_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.AWS_UPDATE MM
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::AWS_UPDATE_MM()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.AWS_UPDATE MM");
		
		USIGIS_MatchMaking_C_AWS_UPDATE_MM_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.AWS_Cancel MM
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::AWS_Cancel_MM()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.AWS_Cancel MM");
		
		USIGIS_MatchMaking_C_AWS_Cancel_MM_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.AWS_PartyConnect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayerSessionId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      ip                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_MatchMaking_C::AWS_PartyConnect(const class FString& PlayerSessionId, const class FString& ip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.AWS_PartyConnect");
		
		USIGIS_MatchMaking_C_AWS_PartyConnect_Params params {};
		params.PlayerSessionId = PlayerSessionId;
		params.ip = ip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.MMQueryReturn_2
	 * 		Flags  -> ()
	 */
	void USIGIS_MatchMaking_C::MMQueryReturn_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.MMQueryReturn_2");
		
		USIGIS_MatchMaking_C_MMQueryReturn_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.ExecuteUbergraph_SIGIS_MatchMaking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_MatchMaking_C::ExecuteUbergraph_SIGIS_MatchMaking(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MatchMaking.SIGIS_MatchMaking_C.ExecuteUbergraph_SIGIS_MatchMaking");
		
		USIGIS_MatchMaking_C_ExecuteUbergraph_SIGIS_MatchMaking_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGIS_MatchMaking_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGIS_MatchMaking_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SIGIS_MatchMaking.SIGIS_MatchMaking_C");
		return ptr;
	}

}


