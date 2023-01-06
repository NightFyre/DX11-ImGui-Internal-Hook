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
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.Save_LangFirstTimePlaySetting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasBeenThroughFirstTimeCheck                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool USIGIS_ExampleGameInstance_C::Save_LangFirstTimePlaySetting(bool HasBeenThroughFirstTimeCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.Save_LangFirstTimePlaySetting");
		
		USIGIS_ExampleGameInstance_C_Save_LangFirstTimePlaySetting_Params params {};
		params.HasBeenThroughFirstTimeCheck = HasBeenThroughFirstTimeCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.Load_LangFirstTimePlaySetting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               DoesSaveGameExist                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_ExampleGameInstance_C::Load_LangFirstTimePlaySetting(bool* DoesSaveGameExist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.Load_LangFirstTimePlaySetting");
		
		USIGIS_ExampleGameInstance_C_Load_LangFirstTimePlaySetting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DoesSaveGameExist != nullptr)
			*DoesSaveGameExist = params.DoesSaveGameExist;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.RunDevMessagePopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Popup_Title                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Popup_Desc                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class USoundCue*                                   SoundToPlay                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TimeUpFor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_ExampleGameInstance_C::RunDevMessagePopup(const class FText& Popup_Title, const class FText& Popup_Desc, class USoundCue* SoundToPlay, float TimeUpFor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.RunDevMessagePopup");
		
		USIGIS_ExampleGameInstance_C_RunDevMessagePopup_Params params {};
		params.Popup_Title = Popup_Title;
		params.Popup_Desc = Popup_Desc;
		params.SoundToPlay = SoundToPlay;
		params.TimeUpFor = TimeUpFor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.GetAmICurrentCaptain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               AmIACaptain                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_ExampleGameInstance_C::GetAmICurrentCaptain(bool* AmIACaptain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.GetAmICurrentCaptain");
		
		USIGIS_ExampleGameInstance_C_GetAmICurrentCaptain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AmIACaptain != nullptr)
			*AmIACaptain = params.AmIACaptain;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.GetCurrentCrewMembers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FNakamaNGroupUser>                   NakamaCurrentCrewMembers                                   (Parm, OutParm)
	 */
	void USIGIS_ExampleGameInstance_C::GetCurrentCrewMembers(TArray<struct FNakamaNGroupUser>* NakamaCurrentCrewMembers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.GetCurrentCrewMembers");
		
		USIGIS_ExampleGameInstance_C_GetCurrentCrewMembers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NakamaCurrentCrewMembers != nullptr)
			*NakamaCurrentCrewMembers = params.NakamaCurrentCrewMembers;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.Get Current Crew Info
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNakamaNGroupBP                             NakamaMyCurrentCrew                                        (Parm, OutParm)
	 * 		bool                                               isPlayingSolo                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_ExampleGameInstance_C::Get_Current_Crew_Info(struct FNakamaNGroupBP* NakamaMyCurrentCrew, bool* isPlayingSolo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.Get Current Crew Info");
		
		USIGIS_ExampleGameInstance_C_Get_Current_Crew_Info_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NakamaMyCurrentCrew != nullptr)
			*NakamaMyCurrentCrew = params.NakamaMyCurrentCrew;
		if (isPlayingSolo != nullptr)
			*isPlayingSolo = params.isPlayingSolo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.GetMyNakamaAccountInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNakamaAccount                              Myaccount                                                  (Parm, OutParm)
	 */
	void USIGIS_ExampleGameInstance_C::GetMyNakamaAccountInfo(struct FNakamaAccount* Myaccount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.GetMyNakamaAccountInfo");
		
		USIGIS_ExampleGameInstance_C_GetMyNakamaAccountInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Myaccount != nullptr)
			*Myaccount = params.Myaccount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.SetCurrentCrewMembersInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Clear                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FNakamaNGroupUser>                   GroupMembers                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void USIGIS_ExampleGameInstance_C::SetCurrentCrewMembersInfo(bool Clear, TArray<struct FNakamaNGroupUser>* GroupMembers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.SetCurrentCrewMembersInfo");
		
		USIGIS_ExampleGameInstance_C_SetCurrentCrewMembersInfo_Params params {};
		params.Clear = Clear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GroupMembers != nullptr)
			*GroupMembers = params.GroupMembers;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.SetCurrentCrewInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Clear                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FNakamaNGroupBP                             NakamaMyCurrentCrew                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_ExampleGameInstance_C::SetCurrentCrewInfo(bool Clear, const struct FNakamaNGroupBP& NakamaMyCurrentCrew)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.SetCurrentCrewInfo");
		
		USIGIS_ExampleGameInstance_C_SetCurrentCrewInfo_Params params {};
		params.Clear = Clear;
		params.NakamaMyCurrentCrew = NakamaMyCurrentCrew;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.SetMemberInOutMatchAttribute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isMainMenu                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_ExampleGameInstance_C::SetMemberInOutMatchAttribute(bool isMainMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.SetMemberInOutMatchAttribute");
		
		USIGIS_ExampleGameInstance_C_SetMemberInOutMatchAttribute_Params params {};
		params.isMainMenu = isMainMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.SaveRegionSetting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RegionToUse                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool USIGIS_ExampleGameInstance_C::SaveRegionSetting(int32_t RegionToUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.SaveRegionSetting");
		
		USIGIS_ExampleGameInstance_C_SaveRegionSetting_Params params {};
		params.RegionToUse = RegionToUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.LoadRegionSetting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RegionInt                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool USIGIS_ExampleGameInstance_C::LoadRegionSetting(int32_t* RegionInt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.LoadRegionSetting");
		
		USIGIS_ExampleGameInstance_C_LoadRegionSetting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RegionInt != nullptr)
			*RegionInt = params.RegionInt;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.OnError_744898654031C91A8C1DE3A1171966EB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNakamaRPCResponse                          SuccessResponse                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FNakamaErrorResponse                        ErrorResponse                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_ExampleGameInstance_C::OnError_744898654031C91A8C1DE3A1171966EB(const struct FNakamaRPCResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.OnError_744898654031C91A8C1DE3A1171966EB");
		
		USIGIS_ExampleGameInstance_C_OnError_744898654031C91A8C1DE3A1171966EB_Params params {};
		params.SuccessResponse = SuccessResponse;
		params.ErrorResponse = ErrorResponse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.OnSuccess_744898654031C91A8C1DE3A1171966EB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNakamaRPCResponse                          SuccessResponse                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FNakamaErrorResponse                        ErrorResponse                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_ExampleGameInstance_C::OnSuccess_744898654031C91A8C1DE3A1171966EB(const struct FNakamaRPCResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.OnSuccess_744898654031C91A8C1DE3A1171966EB");
		
		USIGIS_ExampleGameInstance_C_OnSuccess_744898654031C91A8C1DE3A1171966EB_Params params {};
		params.SuccessResponse = SuccessResponse;
		params.ErrorResponse = ErrorResponse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.OnError_38A69B2E4E0C6365B52D5C8E43B0F1E1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNakamaListGroupsResponse                   SuccessResponse                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FNakamaErrorResponse                        ErrorResponse                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_ExampleGameInstance_C::OnError_38A69B2E4E0C6365B52D5C8E43B0F1E1(const struct FNakamaListGroupsResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.OnError_38A69B2E4E0C6365B52D5C8E43B0F1E1");
		
		USIGIS_ExampleGameInstance_C_OnError_38A69B2E4E0C6365B52D5C8E43B0F1E1_Params params {};
		params.SuccessResponse = SuccessResponse;
		params.ErrorResponse = ErrorResponse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.OnSuccess_38A69B2E4E0C6365B52D5C8E43B0F1E1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNakamaListGroupsResponse                   SuccessResponse                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FNakamaErrorResponse                        ErrorResponse                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_ExampleGameInstance_C::OnSuccess_38A69B2E4E0C6365B52D5C8E43B0F1E1(const struct FNakamaListGroupsResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.OnSuccess_38A69B2E4E0C6365B52D5C8E43B0F1E1");
		
		USIGIS_ExampleGameInstance_C_OnSuccess_38A69B2E4E0C6365B52D5C8E43B0F1E1_Params params {};
		params.SuccessResponse = SuccessResponse;
		params.ErrorResponse = ErrorResponse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.OnError_F9C7A97D4A8D1E85CF087FA143318A5B
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNakamaRPCResponse                          SuccessResponse                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FNakamaErrorResponse                        ErrorResponse                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_ExampleGameInstance_C::OnError_F9C7A97D4A8D1E85CF087FA143318A5B(const struct FNakamaRPCResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.OnError_F9C7A97D4A8D1E85CF087FA143318A5B");
		
		USIGIS_ExampleGameInstance_C_OnError_F9C7A97D4A8D1E85CF087FA143318A5B_Params params {};
		params.SuccessResponse = SuccessResponse;
		params.ErrorResponse = ErrorResponse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.OnSuccess_F9C7A97D4A8D1E85CF087FA143318A5B
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNakamaRPCResponse                          SuccessResponse                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FNakamaErrorResponse                        ErrorResponse                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_ExampleGameInstance_C::OnSuccess_F9C7A97D4A8D1E85CF087FA143318A5B(const struct FNakamaRPCResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.OnSuccess_F9C7A97D4A8D1E85CF087FA143318A5B");
		
		USIGIS_ExampleGameInstance_C_OnSuccess_F9C7A97D4A8D1E85CF087FA143318A5B_Params params {};
		params.SuccessResponse = SuccessResponse;
		params.ErrorResponse = ErrorResponse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.OnStartGameSessionEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FGameLiftProperty>                   Properties                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void USIGIS_ExampleGameInstance_C::OnStartGameSessionEvent(TArray<struct FGameLiftProperty> Properties)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.OnStartGameSessionEvent");
		
		USIGIS_ExampleGameInstance_C_OnStartGameSessionEvent_Params params {};
		params.Properties = Properties;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.OnHealthCheckEvent
	 * 		Flags  -> ()
	 */
	void USIGIS_ExampleGameInstance_C::OnHealthCheckEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.OnHealthCheckEvent");
		
		USIGIS_ExampleGameInstance_C_OnHealthCheckEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.SwitchAWSRegion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      Region                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_ExampleGameInstance_C::SwitchAWSRegion(unsigned char Region)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.SwitchAWSRegion");
		
		USIGIS_ExampleGameInstance_C_SwitchAWSRegion_Params params {};
		params.Region = Region;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.FoundRecommenedRegionToUse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAmazonRegions                                     RecommendedReturn                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_ExampleGameInstance_C::FoundRecommenedRegionToUse(EAmazonRegions RecommendedReturn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.FoundRecommenedRegionToUse");
		
		USIGIS_ExampleGameInstance_C_FoundRecommenedRegionToUse_Params params {};
		params.RecommendedReturn = RecommendedReturn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.SetVoiceRoomID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      RoomIDOut                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_ExampleGameInstance_C::SetVoiceRoomID(const class FString& RoomIDOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.SetVoiceRoomID");
		
		USIGIS_ExampleGameInstance_C_SetVoiceRoomID_Params params {};
		params.RoomIDOut = RoomIDOut;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.ValidateHealthCheck
	 * 		Flags  -> ()
	 */
	void USIGIS_ExampleGameInstance_C::ValidateHealthCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.ValidateHealthCheck");
		
		USIGIS_ExampleGameInstance_C_ValidateHealthCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.SetAndSaveRegionSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WhichRegion                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_ExampleGameInstance_C::SetAndSaveRegionSelect(int32_t WhichRegion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.SetAndSaveRegionSelect");
		
		USIGIS_ExampleGameInstance_C_SetAndSaveRegionSelect_Params params {};
		params.WhichRegion = WhichRegion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.RoomID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSJoinRoomCallbackInfo                    Data                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void USIGIS_ExampleGameInstance_C::RoomID(const struct FEOSJoinRoomCallbackInfo& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.RoomID");
		
		USIGIS_ExampleGameInstance_C_RoomID_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.RecommenedRegionSelect
	 * 		Flags  -> ()
	 */
	void USIGIS_ExampleGameInstance_C::RecommenedRegionSelect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.RecommenedRegionSelect");
		
		USIGIS_ExampleGameInstance_C_RecommenedRegionSelect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.CustomEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSUpdateSendingCallbackInfo               Data                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void USIGIS_ExampleGameInstance_C::CustomEvent_1(const struct FEOSUpdateSendingCallbackInfo& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.CustomEvent_1");
		
		USIGIS_ExampleGameInstance_C_CustomEvent_1_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.CustomEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSUpdateReceivingCallbackInfo             Data                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void USIGIS_ExampleGameInstance_C::CustomEvent_2(const struct FEOSUpdateReceivingCallbackInfo& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.CustomEvent_2");
		
		USIGIS_ExampleGameInstance_C_CustomEvent_2_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.SetAsHaveSeenNewsMessage
	 * 		Flags  -> ()
	 */
	void USIGIS_ExampleGameInstance_C::SetAsHaveSeenNewsMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.SetAsHaveSeenNewsMessage");
		
		USIGIS_ExampleGameInstance_C_SetAsHaveSeenNewsMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.ClientHasBeenDisconectedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Reason                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_ExampleGameInstance_C::ClientHasBeenDisconectedEvent(const class FString& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.ClientHasBeenDisconectedEvent");
		
		USIGIS_ExampleGameInstance_C_ClientHasBeenDisconectedEvent_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.ClientHasnotGotOnlinePrivalige
	 * 		Flags  -> ()
	 */
	void USIGIS_ExampleGameInstance_C::ClientHasnotGotOnlinePrivalige()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.ClientHasnotGotOnlinePrivalige");
		
		USIGIS_ExampleGameInstance_C_ClientHasnotGotOnlinePrivalige_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.Refresh_MuteMyMicrophoneSettings
	 * 		Flags  -> ()
	 */
	void USIGIS_ExampleGameInstance_C::Refresh_MuteMyMicrophoneSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.Refresh_MuteMyMicrophoneSettings");
		
		USIGIS_ExampleGameInstance_C_Refresh_MuteMyMicrophoneSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.ReceiveInit
	 * 		Flags  -> ()
	 */
	void USIGIS_ExampleGameInstance_C::ReceiveInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.ReceiveInit");
		
		USIGIS_ExampleGameInstance_C_ReceiveInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.RefreshOthersMicrophoneVolume
	 * 		Flags  -> ()
	 */
	void USIGIS_ExampleGameInstance_C::RefreshOthersMicrophoneVolume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.RefreshOthersMicrophoneVolume");
		
		USIGIS_ExampleGameInstance_C_RefreshOthersMicrophoneVolume_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.PingReturn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Resolved                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Error                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_ExampleGameInstance_C::PingReturn(const class FString& Target, float Duration, const class FString& Resolved, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.PingReturn");
		
		USIGIS_ExampleGameInstance_C_PingReturn_Params params {};
		params.Target = Target;
		params.Duration = Duration;
		params.Resolved = Resolved;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.ValidateEmptyServer
	 * 		Flags  -> ()
	 */
	void USIGIS_ExampleGameInstance_C::ValidateEmptyServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.ValidateEmptyServer");
		
		USIGIS_ExampleGameInstance_C_ValidateEmptyServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.Callback_RefreshMyMicrophoneOnOff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSUpdateSendingCallbackInfo               Data                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void USIGIS_ExampleGameInstance_C::Callback_RefreshMyMicrophoneOnOff(const struct FEOSUpdateSendingCallbackInfo& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.Callback_RefreshMyMicrophoneOnOff");
		
		USIGIS_ExampleGameInstance_C_Callback_RefreshMyMicrophoneOnOff_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.SendDynamoRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FQueryRequest                               RequstOut                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		EDynamoLeaderBoardEvent                            RequestType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_ExampleGameInstance_C::SendDynamoRequest(const struct FQueryRequest& RequstOut, EDynamoLeaderBoardEvent RequestType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.SendDynamoRequest");
		
		USIGIS_ExampleGameInstance_C_SendDynamoRequest_Params params {};
		params.RequstOut = RequstOut;
		params.RequestType = RequestType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.SendDynamoScoreRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpdateItemRequest                          RequstOut                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		EDynamoLeaderBoardEvent                            RequestType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_ExampleGameInstance_C::SendDynamoScoreRequest(const struct FUpdateItemRequest& RequstOut, EDynamoLeaderBoardEvent RequestType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.SendDynamoScoreRequest");
		
		USIGIS_ExampleGameInstance_C_SendDynamoScoreRequest_Params params {};
		params.RequstOut = RequstOut;
		params.RequestType = RequestType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.OnKickedCrewMember_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               sucessfulkick                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_ExampleGameInstance_C::OnKickedCrewMember_Event_1(bool sucessfulkick)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.OnKickedCrewMember_Event_1");
		
		USIGIS_ExampleGameInstance_C_OnKickedCrewMember_Event_1_Params params {};
		params.sucessfulkick = sucessfulkick;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.Return_NakamaConnected
	 * 		Flags  -> ()
	 */
	void USIGIS_ExampleGameInstance_C::Return_NakamaConnected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.Return_NakamaConnected");
		
		USIGIS_ExampleGameInstance_C_Return_NakamaConnected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.Return_NakamaDisconnected
	 * 		Flags  -> ()
	 */
	void USIGIS_ExampleGameInstance_C::Return_NakamaDisconnected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.Return_NakamaDisconnected");
		
		USIGIS_ExampleGameInstance_C_Return_NakamaDisconnected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.Return_NakamaGetAccountDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNakamaAccount                              Myaccount                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_ExampleGameInstance_C::Return_NakamaGetAccountDetails(const struct FNakamaAccount& Myaccount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.Return_NakamaGetAccountDetails");
		
		USIGIS_ExampleGameInstance_C_Return_NakamaGetAccountDetails_Params params {};
		params.Myaccount = Myaccount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.DestroyServerMatchmaking
	 * 		Flags  -> ()
	 */
	void USIGIS_ExampleGameInstance_C::DestroyServerMatchmaking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.DestroyServerMatchmaking");
		
		USIGIS_ExampleGameInstance_C_DestroyServerMatchmaking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.EndServerhMatchmaking
	 * 		Flags  -> ()
	 */
	void USIGIS_ExampleGameInstance_C::EndServerhMatchmaking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.EndServerhMatchmaking");
		
		USIGIS_ExampleGameInstance_C_EndServerhMatchmaking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.NakamaBP_DisbandAllMyCrews
	 * 		Flags  -> ()
	 */
	void USIGIS_ExampleGameInstance_C::NakamaBP_DisbandAllMyCrews()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.NakamaBP_DisbandAllMyCrews");
		
		USIGIS_ExampleGameInstance_C_NakamaBP_DisbandAllMyCrews_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.NakamaBP_SetPlayerReadyNotReady
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsReady                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_ExampleGameInstance_C::NakamaBP_SetPlayerReadyNotReady(bool IsReady)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.NakamaBP_SetPlayerReadyNotReady");
		
		USIGIS_ExampleGameInstance_C_NakamaBP_SetPlayerReadyNotReady_Params params {};
		params.IsReady = IsReady;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.StartAndRefreshMatchmaking
	 * 		Flags  -> ()
	 */
	void USIGIS_ExampleGameInstance_C::StartAndRefreshMatchmaking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.StartAndRefreshMatchmaking");
		
		USIGIS_ExampleGameInstance_C_StartAndRefreshMatchmaking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.Return_Nakama_Error
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      errorBack                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_ExampleGameInstance_C::Return_Nakama_Error(const class FString& errorBack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.Return_Nakama_Error");
		
		USIGIS_ExampleGameInstance_C_Return_Nakama_Error_Params params {};
		params.errorBack = errorBack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.ExitGame_ForceDisbandOrLeaveCrew
	 * 		Flags  -> ()
	 */
	void USIGIS_ExampleGameInstance_C::ExitGame_ForceDisbandOrLeaveCrew()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.ExitGame_ForceDisbandOrLeaveCrew");
		
		USIGIS_ExampleGameInstance_C_ExitGame_ForceDisbandOrLeaveCrew_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.Return_GotAnUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FNakamaNotification>                 returnednotification                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void USIGIS_ExampleGameInstance_C::Return_GotAnUpdate(TArray<struct FNakamaNotification> returnednotification)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.Return_GotAnUpdate");
		
		USIGIS_ExampleGameInstance_C_Return_GotAnUpdate_Params params {};
		params.returnednotification = returnednotification;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.SendDelayedUpdateNotify
	 * 		Flags  -> ()
	 */
	void USIGIS_ExampleGameInstance_C::SendDelayedUpdateNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.SendDelayedUpdateNotify");
		
		USIGIS_ExampleGameInstance_C_SendDelayedUpdateNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.ExecuteUbergraph_SIGIS_ExampleGameInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_ExampleGameInstance_C::ExecuteUbergraph_SIGIS_ExampleGameInstance(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C.ExecuteUbergraph_SIGIS_ExampleGameInstance");
		
		USIGIS_ExampleGameInstance_C_ExecuteUbergraph_SIGIS_ExampleGameInstance_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGIS_ExampleGameInstance_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGIS_ExampleGameInstance_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SIGIS_ExampleGameInstance.SIGIS_ExampleGameInstance_C");
		return ptr;
	}

}


