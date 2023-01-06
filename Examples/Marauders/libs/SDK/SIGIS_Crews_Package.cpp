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
	 * 		Name   -> Function SIGIS_Crews.SIGIS_Crews_C.SwitchTabLook
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_SearchCrewTypes                                  WhichSubMenu                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_Crews_C::SwitchTabLook(E_SearchCrewTypes WhichSubMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews.SIGIS_Crews_C.SwitchTabLook");
		
		USIGIS_Crews_C_SwitchTabLook_Params params {};
		params.WhichSubMenu = WhichSubMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews.SIGIS_Crews_C.RunReasonCantMakeCrew
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        WarningPhrase                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class USoundCue*                                   SoundToPlay                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidgetAnimation*                            UI_Anim_To_Play                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_Crews_C::RunReasonCantMakeCrew(const class FText& WarningPhrase, class USoundCue* SoundToPlay, class UWidgetAnimation* UI_Anim_To_Play)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews.SIGIS_Crews_C.RunReasonCantMakeCrew");
		
		USIGIS_Crews_C_RunReasonCantMakeCrew_Params params {};
		params.WarningPhrase = WarningPhrase;
		params.SoundToPlay = SoundToPlay;
		params.UI_Anim_To_Play = UI_Anim_To_Play;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews.SIGIS_Crews_C.EnableSearchOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               EnableInteractions                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_Crews_C::EnableSearchOptions(bool EnableInteractions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews.SIGIS_Crews_C.EnableSearchOptions");
		
		USIGIS_Crews_C_EnableSearchOptions_Params params {};
		params.EnableInteractions = EnableInteractions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews.SIGIS_Crews_C.FillCrewList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FNakamaNGroup>                       returnedSearch                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void USIGIS_Crews_C::FillCrewList(TArray<struct FNakamaNGroup>* returnedSearch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews.SIGIS_Crews_C.FillCrewList");
		
		USIGIS_Crews_C_FillCrewList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (returnedSearch != nullptr)
			*returnedSearch = params.returnedSearch;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews.SIGIS_Crews_C.SetCrewListRefreshState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_CrewListSearchStates                             CrewListState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_Crews_C::SetCrewListRefreshState(E_CrewListSearchStates CrewListState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews.SIGIS_Crews_C.SetCrewListRefreshState");
		
		USIGIS_Crews_C_SetCrewListRefreshState_Params params {};
		params.CrewListState = CrewListState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews.SIGIS_Crews_C.SaveLastCrewDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PrevCrewName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	bool USIGIS_Crews_C::SaveLastCrewDetails(const class FString& PrevCrewName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews.SIGIS_Crews_C.SaveLastCrewDetails");
		
		USIGIS_Crews_C_SaveLastCrewDetails_Params params {};
		params.PrevCrewName = PrevCrewName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews.SIGIS_Crews_C.LoadLastCrewDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               DidLoad                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      PrevCrewName                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_Crews_C::LoadLastCrewDetails(bool* DidLoad, class FString* PrevCrewName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews.SIGIS_Crews_C.LoadLastCrewDetails");
		
		USIGIS_Crews_C_LoadLastCrewDetails_Params params {};
		
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
	 * 		Name   -> Function SIGIS_Crews.SIGIS_Crews_C.CrewMenuState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Close                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		E_CrewMenus                                        WhichCrewMenu                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_Crews_C::CrewMenuState(bool Close, E_CrewMenus WhichCrewMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews.SIGIS_Crews_C.CrewMenuState");
		
		USIGIS_Crews_C_CrewMenuState_Params params {};
		params.Close = Close;
		params.WhichCrewMenu = WhichCrewMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews.SIGIS_Crews_C.OnError_6979939A4D20C1501BF376934FA2306B
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNakamaListGroupMembersResponse             SuccessResponse                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FNakamaErrorResponse                        ErrorResponse                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_Crews_C::OnError_6979939A4D20C1501BF376934FA2306B(const struct FNakamaListGroupMembersResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews.SIGIS_Crews_C.OnError_6979939A4D20C1501BF376934FA2306B");
		
		USIGIS_Crews_C_OnError_6979939A4D20C1501BF376934FA2306B_Params params {};
		params.SuccessResponse = SuccessResponse;
		params.ErrorResponse = ErrorResponse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews.SIGIS_Crews_C.OnSuccess_6979939A4D20C1501BF376934FA2306B
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNakamaListGroupMembersResponse             SuccessResponse                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FNakamaErrorResponse                        ErrorResponse                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_Crews_C::OnSuccess_6979939A4D20C1501BF376934FA2306B(const struct FNakamaListGroupMembersResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews.SIGIS_Crews_C.OnSuccess_6979939A4D20C1501BF376934FA2306B");
		
		USIGIS_Crews_C_OnSuccess_6979939A4D20C1501BF376934FA2306B_Params params {};
		params.SuccessResponse = SuccessResponse;
		params.ErrorResponse = ErrorResponse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews.SIGIS_Crews_C.Crew_CrewAvailList_Opened
	 * 		Flags  -> ()
	 */
	void USIGIS_Crews_C::Crew_CrewAvailList_Opened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews.SIGIS_Crews_C.Crew_CrewAvailList_Opened");
		
		USIGIS_Crews_C_Crew_CrewAvailList_Opened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews.SIGIS_Crews_C.RefreshTheCrewList
	 * 		Flags  -> ()
	 */
	void USIGIS_Crews_C::RefreshTheCrewList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews.SIGIS_Crews_C.RefreshTheCrewList");
		
		USIGIS_Crews_C_RefreshTheCrewList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews.SIGIS_Crews_C.TriedToJoinAMatchReturn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCrewPartyInfo                              JoinedTeam                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_Crews_C::TriedToJoinAMatchReturn(const struct FCrewPartyInfo& JoinedTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews.SIGIS_Crews_C.TriedToJoinAMatchReturn");
		
		USIGIS_Crews_C_TriedToJoinAMatchReturn_Params params {};
		params.JoinedTeam = JoinedTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews.SIGIS_Crews_C.CloseTheCrewsMenu
	 * 		Flags  -> ()
	 */
	void USIGIS_Crews_C::CloseTheCrewsMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews.SIGIS_Crews_C.CloseTheCrewsMenu");
		
		USIGIS_Crews_C_CloseTheCrewsMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews.SIGIS_Crews_C.Crew_PasswordCheck_Opened
	 * 		Flags  -> ()
	 */
	void USIGIS_Crews_C::Crew_PasswordCheck_Opened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews.SIGIS_Crews_C.Crew_PasswordCheck_Opened");
		
		USIGIS_Crews_C_Crew_PasswordCheck_Opened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__TryPasswordForCrew_K2Node_ComponentBoundEvent_10_OnEditableTextBoxChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void USIGIS_Crews_C::BndEvt__TryPasswordForCrew_K2Node_ComponentBoundEvent_10_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__TryPasswordForCrew_K2Node_ComponentBoundEvent_10_OnEditableTextBoxChangedEvent__DelegateSignature");
		
		USIGIS_Crews_C_BndEvt__TryPasswordForCrew_K2Node_ComponentBoundEvent_10_OnEditableTextBoxChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews.SIGIS_Crews_C.ThereAreCrewsToJoin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CrewsToJoin                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_Crews_C::ThereAreCrewsToJoin(bool CrewsToJoin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews.SIGIS_Crews_C.ThereAreCrewsToJoin");
		
		USIGIS_Crews_C_ThereAreCrewsToJoin_Params params {};
		params.CrewsToJoin = CrewsToJoin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews.SIGIS_Crews_C.ValidJoinReturn_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_Crews_C::ValidJoinReturn_Event_1(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews.SIGIS_Crews_C.ValidJoinReturn_Event_1");
		
		USIGIS_Crews_C_ValidJoinReturn_Event_1_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__Btn_RefreshCrewListNoCrewsFound_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Crews_C::BndEvt__Btn_RefreshCrewListNoCrewsFound_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__Btn_RefreshCrewListNoCrewsFound_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_Crews_C_BndEvt__Btn_RefreshCrewListNoCrewsFound_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__MM_GenericSmallBtn01_GoBack_CrewMenu_K2Node_ComponentBoundEvent_12_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Crews_C::BndEvt__MM_GenericSmallBtn01_GoBack_CrewMenu_K2Node_ComponentBoundEvent_12_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__MM_GenericSmallBtn01_GoBack_CrewMenu_K2Node_ComponentBoundEvent_12_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_Crews_C_BndEvt__MM_GenericSmallBtn01_GoBack_CrewMenu_K2Node_ComponentBoundEvent_12_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_13_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Crews_C::BndEvt__MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_13_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_13_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_Crews_C_BndEvt__MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_13_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__MM_GenericSmallBtn01_GoBack_CrewCreate_K2Node_ComponentBoundEvent_14_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Crews_C::BndEvt__MM_GenericSmallBtn01_GoBack_CrewCreate_K2Node_ComponentBoundEvent_14_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__MM_GenericSmallBtn01_GoBack_CrewCreate_K2Node_ComponentBoundEvent_14_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_Crews_C_BndEvt__MM_GenericSmallBtn01_GoBack_CrewCreate_K2Node_ComponentBoundEvent_14_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_15_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Crews_C::BndEvt__MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_15_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_15_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_Crews_C_BndEvt__MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_15_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__MM_GenericSmallBtn01_GoBack_Crew_PasswordScreen_K2Node_ComponentBoundEvent_16_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Crews_C::BndEvt__MM_GenericSmallBtn01_GoBack_Crew_PasswordScreen_K2Node_ComponentBoundEvent_16_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__MM_GenericSmallBtn01_GoBack_Crew_PasswordScreen_K2Node_ComponentBoundEvent_16_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_Crews_C_BndEvt__MM_GenericSmallBtn01_GoBack_Crew_PasswordScreen_K2Node_ComponentBoundEvent_16_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__MM_GenericSmallBtn01_1_K2Node_ComponentBoundEvent_17_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Crews_C::BndEvt__MM_GenericSmallBtn01_1_K2Node_ComponentBoundEvent_17_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__MM_GenericSmallBtn01_1_K2Node_ComponentBoundEvent_17_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_Crews_C_BndEvt__MM_GenericSmallBtn01_1_K2Node_ComponentBoundEvent_17_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__MM_GenericSmallBtn_RefreshCrewListNoCrewsFound_1_K2Node_ComponentBoundEvent_18_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Crews_C::BndEvt__MM_GenericSmallBtn_RefreshCrewListNoCrewsFound_1_K2Node_ComponentBoundEvent_18_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__MM_GenericSmallBtn_RefreshCrewListNoCrewsFound_1_K2Node_ComponentBoundEvent_18_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_Crews_C_BndEvt__MM_GenericSmallBtn_RefreshCrewListNoCrewsFound_1_K2Node_ComponentBoundEvent_18_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews.SIGIS_Crews_C.Crew_CreateMenu_Opened
	 * 		Flags  -> ()
	 */
	void USIGIS_Crews_C::Crew_CreateMenu_Opened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews.SIGIS_Crews_C.Crew_CreateMenu_Opened");
		
		USIGIS_Crews_C_Crew_CreateMenu_Opened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews.SIGIS_Crews_C.TryToJoinThisLobby
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLobbySearchInfo                            WhichLobby                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FNakamaNGroup                               NakamaGroup                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               HasPassword                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      REQpassword                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        CrewName                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_Crews_C::TryToJoinThisLobby(const struct FLobbySearchInfo& WhichLobby, const struct FNakamaNGroup& NakamaGroup, bool HasPassword, const class FString& REQpassword, const class FText& CrewName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews.SIGIS_Crews_C.TryToJoinThisLobby");
		
		USIGIS_Crews_C_TryToJoinThisLobby_Params params {};
		params.WhichLobby = WhichLobby;
		params.NakamaGroup = NakamaGroup;
		params.HasPassword = HasPassword;
		params.REQpassword = REQpassword;
		params.CrewName = CrewName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__SIGIS_Crews_Btn_FilterAllCrews_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Crews_C::BndEvt__SIGIS_Crews_Btn_FilterAllCrews_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__SIGIS_Crews_Btn_FilterAllCrews_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_Crews_C_BndEvt__SIGIS_Crews_Btn_FilterAllCrews_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__SIGIS_Crews_Btn_FilterFriendsOnly_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Crews_C::BndEvt__SIGIS_Crews_Btn_FilterFriendsOnly_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__SIGIS_Crews_Btn_FilterFriendsOnly_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_Crews_C_BndEvt__SIGIS_Crews_Btn_FilterFriendsOnly_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__SIGIS_Crews_EditableTextBox_231_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void USIGIS_Crews_C::BndEvt__SIGIS_Crews_EditableTextBox_231_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__SIGIS_Crews_EditableTextBox_231_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature");
		
		USIGIS_Crews_C_BndEvt__SIGIS_Crews_EditableTextBox_231_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__SIGIS_Crews_Button_526_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Crews_C::BndEvt__SIGIS_Crews_Button_526_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__SIGIS_Crews_Button_526_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_Crews_C_BndEvt__SIGIS_Crews_Button_526_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__SIGIS_Crews_Button_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Crews_C::BndEvt__SIGIS_Crews_Button_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__SIGIS_Crews_Button_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_Crews_C_BndEvt__SIGIS_Crews_Button_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__SIGIS_Crews_Btn_FilterCrewFind_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Crews_C::BndEvt__SIGIS_Crews_Btn_FilterCrewFind_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__SIGIS_Crews_Btn_FilterCrewFind_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_Crews_C_BndEvt__SIGIS_Crews_Btn_FilterCrewFind_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__CrewNewPassword_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void USIGIS_Crews_C::BndEvt__CrewNewPassword_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__CrewNewPassword_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature");
		
		USIGIS_Crews_C_BndEvt__CrewNewPassword_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__CrewNameCreate_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void USIGIS_Crews_C::BndEvt__CrewNameCreate_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__CrewNameCreate_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature");
		
		USIGIS_Crews_C_BndEvt__CrewNameCreate_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__SIGIS_Crews_MM_GenericTabBtn01_AllCrews_K2Node_ComponentBoundEvent_8_ButtonHasBeenPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      WhatPressed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_Crews_C::BndEvt__SIGIS_Crews_MM_GenericTabBtn01_AllCrews_K2Node_ComponentBoundEvent_8_ButtonHasBeenPressed__DelegateSignature(const class FString& WhatPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__SIGIS_Crews_MM_GenericTabBtn01_AllCrews_K2Node_ComponentBoundEvent_8_ButtonHasBeenPressed__DelegateSignature");
		
		USIGIS_Crews_C_BndEvt__SIGIS_Crews_MM_GenericTabBtn01_AllCrews_K2Node_ComponentBoundEvent_8_ButtonHasBeenPressed__DelegateSignature_Params params {};
		params.WhatPressed = WhatPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__SIGIS_Crews_MM_GenericTabBtn01_FriendsOnly_K2Node_ComponentBoundEvent_9_ButtonHasBeenPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      WhatPressed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_Crews_C::BndEvt__SIGIS_Crews_MM_GenericTabBtn01_FriendsOnly_K2Node_ComponentBoundEvent_9_ButtonHasBeenPressed__DelegateSignature(const class FString& WhatPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__SIGIS_Crews_MM_GenericTabBtn01_FriendsOnly_K2Node_ComponentBoundEvent_9_ButtonHasBeenPressed__DelegateSignature");
		
		USIGIS_Crews_C_BndEvt__SIGIS_Crews_MM_GenericTabBtn01_FriendsOnly_K2Node_ComponentBoundEvent_9_ButtonHasBeenPressed__DelegateSignature_Params params {};
		params.WhatPressed = WhatPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__SIGIS_Crews_MM_GenericTabBtn01_FriendsOnly_1_K2Node_ComponentBoundEvent_19_ButtonHasBeenPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      WhatPressed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_Crews_C::BndEvt__SIGIS_Crews_MM_GenericTabBtn01_FriendsOnly_1_K2Node_ComponentBoundEvent_19_ButtonHasBeenPressed__DelegateSignature(const class FString& WhatPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__SIGIS_Crews_MM_GenericTabBtn01_FriendsOnly_1_K2Node_ComponentBoundEvent_19_ButtonHasBeenPressed__DelegateSignature");
		
		USIGIS_Crews_C_BndEvt__SIGIS_Crews_MM_GenericTabBtn01_FriendsOnly_1_K2Node_ComponentBoundEvent_19_ButtonHasBeenPressed__DelegateSignature_Params params {};
		params.WhatPressed = WhatPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__SIGIS_Crews_MM_GenericSmallBtn01_ExactSeatch_Go_K2Node_ComponentBoundEvent_20_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Crews_C::BndEvt__SIGIS_Crews_MM_GenericSmallBtn01_ExactSeatch_Go_K2Node_ComponentBoundEvent_20_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__SIGIS_Crews_MM_GenericSmallBtn01_ExactSeatch_Go_K2Node_ComponentBoundEvent_20_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_Crews_C_BndEvt__SIGIS_Crews_MM_GenericSmallBtn01_ExactSeatch_Go_K2Node_ComponentBoundEvent_20_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__SIGIS_Crews_MM_GenericSmallBtn01_ExactSeatch_Clear_K2Node_ComponentBoundEvent_21_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Crews_C::BndEvt__SIGIS_Crews_MM_GenericSmallBtn01_ExactSeatch_Clear_K2Node_ComponentBoundEvent_21_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__SIGIS_Crews_MM_GenericSmallBtn01_ExactSeatch_Clear_K2Node_ComponentBoundEvent_21_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_Crews_C_BndEvt__SIGIS_Crews_MM_GenericSmallBtn01_ExactSeatch_Clear_K2Node_ComponentBoundEvent_21_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__SIGIS_Crews_EditableTextBox_231_K2Node_ComponentBoundEvent_22_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_Crews_C::BndEvt__SIGIS_Crews_EditableTextBox_231_K2Node_ComponentBoundEvent_22_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__SIGIS_Crews_EditableTextBox_231_K2Node_ComponentBoundEvent_22_OnEditableTextBoxCommittedEvent__DelegateSignature");
		
		USIGIS_Crews_C_BndEvt__SIGIS_Crews_EditableTextBox_231_K2Node_ComponentBoundEvent_22_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews.SIGIS_Crews_C.Construct
	 * 		Flags  -> ()
	 */
	void USIGIS_Crews_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews.SIGIS_Crews_C.Construct");
		
		USIGIS_Crews_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews.SIGIS_Crews_C.Return_NakamaCrewSearchResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FNakamaNGroup>                       returnedSearch                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FString                                      pageNum                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_Crews_C::Return_NakamaCrewSearchResult(TArray<struct FNakamaNGroup> returnedSearch, const class FString& pageNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews.SIGIS_Crews_C.Return_NakamaCrewSearchResult");
		
		USIGIS_Crews_C_Return_NakamaCrewSearchResult_Params params {};
		params.returnedSearch = returnedSearch;
		params.pageNum = pageNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews.SIGIS_Crews_C.OnNKCrewSearchForMyfriendCrews_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FNakamaNGroup>                       returnedSearch                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FString                                      pageNum                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_Crews_C::OnNKCrewSearchForMyfriendCrews_Event_1(TArray<struct FNakamaNGroup> returnedSearch, const class FString& pageNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews.SIGIS_Crews_C.OnNKCrewSearchForMyfriendCrews_Event_1");
		
		USIGIS_Crews_C_OnNKCrewSearchForMyfriendCrews_Event_1_Params params {};
		params.returnedSearch = returnedSearch;
		params.pageNum = pageNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews.SIGIS_Crews_C.Return_NKGetAllFreindsGroups
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FNakamaNGroup>                       returnedSearch                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               Success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_Crews_C::Return_NKGetAllFreindsGroups(TArray<struct FNakamaNGroup> returnedSearch, bool Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews.SIGIS_Crews_C.Return_NKGetAllFreindsGroups");
		
		USIGIS_Crews_C_Return_NKGetAllFreindsGroups_Params params {};
		params.returnedSearch = returnedSearch;
		params.Success = Success;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews.SIGIS_Crews_C.ExecuteUbergraph_SIGIS_Crews
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_Crews_C::ExecuteUbergraph_SIGIS_Crews(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews.SIGIS_Crews_C.ExecuteUbergraph_SIGIS_Crews");
		
		USIGIS_Crews_C_ExecuteUbergraph_SIGIS_Crews_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGIS_Crews_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGIS_Crews_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SIGIS_Crews.SIGIS_Crews_C");
		return ptr;
	}

}


