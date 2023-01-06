/**
 * Name: Task_Force
 * Version: 0.3.6.1537
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function GameInstance.GameInstance_C.StartBackgroundMusic
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FScriptDelegate                              Replay                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		float                                              Volume                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGameInstance_C::StartBackgroundMusic(const class FScriptDelegate& Replay, float* Volume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameInstance.GameInstance_C.StartBackgroundMusic");
		
		UGameInstance_C_StartBackgroundMusic_Params params {};
		params.Replay = Replay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Volume != nullptr)
			*Volume = params.Volume;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function GameInstance.GameInstance_C.ReplayBackgroundMusic
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FScriptDelegate                              Replay                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void UGameInstance_C::ReplayBackgroundMusic(const class FScriptDelegate& Replay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameInstance.GameInstance_C.ReplayBackgroundMusic");
		
		UGameInstance_C_ReplayBackgroundMusic_Params params {};
		params.Replay = Replay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function GameInstance.GameInstance_C.PlayLogoAnimation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UGameInstance_C::PlayLogoAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameInstance.GameInstance_C.PlayLogoAnimation");
		
		UGameInstance_C_PlayLogoAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function GameInstance.GameInstance_C.StringArrayToInt64Array
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Users                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int64_t>                                    SteamIDs                                                   (Parm, OutParm, ZeroConstructor)
	 */
	void UGameInstance_C::StringArrayToInt64Array(const struct FJsonLibraryList& Users, TArray<int64_t>* SteamIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameInstance.GameInstance_C.StringArrayToInt64Array");
		
		UGameInstance_C_StringArrayToInt64Array_Params params {};
		params.Users = Users;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SteamIDs != nullptr)
			*SteamIDs = params.SteamIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function GameInstance.GameInstance_C.LoadMenu
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWebInterface*                               Menu                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGameInstance_C::LoadMenu(class UWebInterface* Menu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameInstance.GameInstance_C.LoadMenu");
		
		UGameInstance_C_LoadMenu_Params params {};
		params.Menu = Menu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function GameInstance.GameInstance_C.LoadHUD
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWebInterface*                               HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGameInstance_C::LoadHUD(class UWebInterface* HUD)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameInstance.GameInstance_C.LoadHUD");
		
		UGameInstance_C_LoadHUD_Params params {};
		params.HUD = HUD;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function GameInstance.GameInstance_C.CreateInterface
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWebInterface*                               Menu                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWebInterface*                               HUD                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGameInstance_C::CreateInterface(class UWebInterface** Menu, class UWebInterface** HUD)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameInstance.GameInstance_C.CreateInterface");
		
		UGameInstance_C_CreateInterface_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Menu != nullptr)
			*Menu = params.Menu;
		if (HUD != nullptr)
			*HUD = params.HUD;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function GameInstance.GameInstance_C.CreateDiscord
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FScriptDelegate                              OnJoin                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class FScriptDelegate                              OnJoinRequest                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void UGameInstance_C::CreateDiscord(const class FScriptDelegate& OnJoin, const class FScriptDelegate& OnJoinRequest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameInstance.GameInstance_C.CreateDiscord");
		
		UGameInstance_C_CreateDiscord_Params params {};
		params.OnJoin = OnJoin;
		params.OnJoinRequest = OnJoinRequest;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function GameInstance.GameInstance_C.OnFailure_2E881757433C96B2B6C0889453997A7E
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<unsigned char>                              Response                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		EHttpLibraryContentType                            ContentType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StatusCode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            BytesSent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            BytesReceived                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGameInstance_C::OnFailure_2E881757433C96B2B6C0889453997A7E(TArray<unsigned char> Response, EHttpLibraryContentType ContentType, int32_t StatusCode, int32_t BytesSent, int32_t BytesReceived)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameInstance.GameInstance_C.OnFailure_2E881757433C96B2B6C0889453997A7E");
		
		UGameInstance_C_OnFailure_2E881757433C96B2B6C0889453997A7E_Params params {};
		params.Response = Response;
		params.ContentType = ContentType;
		params.StatusCode = StatusCode;
		params.BytesSent = BytesSent;
		params.BytesReceived = BytesReceived;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function GameInstance.GameInstance_C.OnProgress_2E881757433C96B2B6C0889453997A7E
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<unsigned char>                              Response                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		EHttpLibraryContentType                            ContentType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StatusCode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            BytesSent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            BytesReceived                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGameInstance_C::OnProgress_2E881757433C96B2B6C0889453997A7E(TArray<unsigned char> Response, EHttpLibraryContentType ContentType, int32_t StatusCode, int32_t BytesSent, int32_t BytesReceived)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameInstance.GameInstance_C.OnProgress_2E881757433C96B2B6C0889453997A7E");
		
		UGameInstance_C_OnProgress_2E881757433C96B2B6C0889453997A7E_Params params {};
		params.Response = Response;
		params.ContentType = ContentType;
		params.StatusCode = StatusCode;
		params.BytesSent = BytesSent;
		params.BytesReceived = BytesReceived;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function GameInstance.GameInstance_C.OnSuccess_2E881757433C96B2B6C0889453997A7E
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<unsigned char>                              Response                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		EHttpLibraryContentType                            ContentType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StatusCode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            BytesSent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            BytesReceived                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGameInstance_C::OnSuccess_2E881757433C96B2B6C0889453997A7E(TArray<unsigned char> Response, EHttpLibraryContentType ContentType, int32_t StatusCode, int32_t BytesSent, int32_t BytesReceived)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameInstance.GameInstance_C.OnSuccess_2E881757433C96B2B6C0889453997A7E");
		
		UGameInstance_C_OnSuccess_2E881757433C96B2B6C0889453997A7E_Params params {};
		params.Response = Response;
		params.ContentType = ContentType;
		params.StatusCode = StatusCode;
		params.BytesSent = BytesSent;
		params.BytesReceived = BytesReceived;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function GameInstance.GameInstance_C.OnFailure_274D3B3547CA4840B66A16BA981AAE01
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Leaderboard                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGameInstance_C::OnFailure_274D3B3547CA4840B66A16BA981AAE01(const struct FJsonLibraryObject& Leaderboard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameInstance.GameInstance_C.OnFailure_274D3B3547CA4840B66A16BA981AAE01");
		
		UGameInstance_C_OnFailure_274D3B3547CA4840B66A16BA981AAE01_Params params {};
		params.Leaderboard = Leaderboard;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function GameInstance.GameInstance_C.OnSuccess_274D3B3547CA4840B66A16BA981AAE01
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Leaderboard                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGameInstance_C::OnSuccess_274D3B3547CA4840B66A16BA981AAE01(const struct FJsonLibraryObject& Leaderboard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameInstance.GameInstance_C.OnSuccess_274D3B3547CA4840B66A16BA981AAE01");
		
		UGameInstance_C_OnSuccess_274D3B3547CA4840B66A16BA981AAE01_Params params {};
		params.Leaderboard = Leaderboard;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function GameInstance.GameInstance_C.OnFailure_569004EB42568F4A3DF9E6B9B1347237
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Leaderboard                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGameInstance_C::OnFailure_569004EB42568F4A3DF9E6B9B1347237(const struct FJsonLibraryObject& Leaderboard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameInstance.GameInstance_C.OnFailure_569004EB42568F4A3DF9E6B9B1347237");
		
		UGameInstance_C_OnFailure_569004EB42568F4A3DF9E6B9B1347237_Params params {};
		params.Leaderboard = Leaderboard;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function GameInstance.GameInstance_C.OnSuccess_569004EB42568F4A3DF9E6B9B1347237
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Leaderboard                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGameInstance_C::OnSuccess_569004EB42568F4A3DF9E6B9B1347237(const struct FJsonLibraryObject& Leaderboard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameInstance.GameInstance_C.OnSuccess_569004EB42568F4A3DF9E6B9B1347237");
		
		UGameInstance_C_OnSuccess_569004EB42568F4A3DF9E6B9B1347237_Params params {};
		params.Leaderboard = Leaderboard;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function GameInstance.GameInstance_C.OnFailure_586FE2974B4246A54F3D0682A8E17CA3
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CurrentPlayers                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGameInstance_C::OnFailure_586FE2974B4246A54F3D0682A8E17CA3(int32_t CurrentPlayers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameInstance.GameInstance_C.OnFailure_586FE2974B4246A54F3D0682A8E17CA3");
		
		UGameInstance_C_OnFailure_586FE2974B4246A54F3D0682A8E17CA3_Params params {};
		params.CurrentPlayers = CurrentPlayers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function GameInstance.GameInstance_C.OnSuccess_586FE2974B4246A54F3D0682A8E17CA3
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CurrentPlayers                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGameInstance_C::OnSuccess_586FE2974B4246A54F3D0682A8E17CA3(int32_t CurrentPlayers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameInstance.GameInstance_C.OnSuccess_586FE2974B4246A54F3D0682A8E17CA3");
		
		UGameInstance_C_OnSuccess_586FE2974B4246A54F3D0682A8E17CA3_Params params {};
		params.CurrentPlayers = CurrentPlayers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function GameInstance.GameInstance_C.OnFailure_E01D25D4437511AE1B409FAD0579C20B
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Stats                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGameInstance_C::OnFailure_E01D25D4437511AE1B409FAD0579C20B(const struct FJsonLibraryObject& Stats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameInstance.GameInstance_C.OnFailure_E01D25D4437511AE1B409FAD0579C20B");
		
		UGameInstance_C_OnFailure_E01D25D4437511AE1B409FAD0579C20B_Params params {};
		params.Stats = Stats;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function GameInstance.GameInstance_C.OnSuccess_E01D25D4437511AE1B409FAD0579C20B
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Stats                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGameInstance_C::OnSuccess_E01D25D4437511AE1B409FAD0579C20B(const struct FJsonLibraryObject& Stats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameInstance.GameInstance_C.OnSuccess_E01D25D4437511AE1B409FAD0579C20B");
		
		UGameInstance_C_OnSuccess_E01D25D4437511AE1B409FAD0579C20B_Params params {};
		params.Stats = Stats;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function GameInstance.GameInstance_C.OnFailure_24492C2A4A0BB3EEF1280B8C4EEF2515
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Stats                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGameInstance_C::OnFailure_24492C2A4A0BB3EEF1280B8C4EEF2515(const struct FJsonLibraryObject& Stats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameInstance.GameInstance_C.OnFailure_24492C2A4A0BB3EEF1280B8C4EEF2515");
		
		UGameInstance_C_OnFailure_24492C2A4A0BB3EEF1280B8C4EEF2515_Params params {};
		params.Stats = Stats;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function GameInstance.GameInstance_C.OnSuccess_24492C2A4A0BB3EEF1280B8C4EEF2515
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Stats                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGameInstance_C::OnSuccess_24492C2A4A0BB3EEF1280B8C4EEF2515(const struct FJsonLibraryObject& Stats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameInstance.GameInstance_C.OnSuccess_24492C2A4A0BB3EEF1280B8C4EEF2515");
		
		UGameInstance_C_OnSuccess_24492C2A4A0BB3EEF1280B8C4EEF2515_Params params {};
		params.Stats = Stats;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function GameInstance.GameInstance_C.OnFailure_F41B63974E2B94C3188FD7998AB5C7A8
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FWorkshopItem>                       Items                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		int32_t                                            Page                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Matches                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bCached                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EWorkshopResult                                    Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGameInstance_C::OnFailure_F41B63974E2B94C3188FD7998AB5C7A8(TArray<struct FWorkshopItem> Items, int32_t Page, int32_t Matches, bool bCached, EWorkshopResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameInstance.GameInstance_C.OnFailure_F41B63974E2B94C3188FD7998AB5C7A8");
		
		UGameInstance_C_OnFailure_F41B63974E2B94C3188FD7998AB5C7A8_Params params {};
		params.Items = Items;
		params.Page = Page;
		params.Matches = Matches;
		params.bCached = bCached;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function GameInstance.GameInstance_C.OnSuccess_F41B63974E2B94C3188FD7998AB5C7A8
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FWorkshopItem>                       Items                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		int32_t                                            Page                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Matches                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bCached                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EWorkshopResult                                    Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGameInstance_C::OnSuccess_F41B63974E2B94C3188FD7998AB5C7A8(TArray<struct FWorkshopItem> Items, int32_t Page, int32_t Matches, bool bCached, EWorkshopResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameInstance.GameInstance_C.OnSuccess_F41B63974E2B94C3188FD7998AB5C7A8");
		
		UGameInstance_C_OnSuccess_F41B63974E2B94C3188FD7998AB5C7A8_Params params {};
		params.Items = Items;
		params.Page = Page;
		params.Matches = Matches;
		params.bCached = bCached;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function GameInstance.GameInstance_C.ReceiveOnStart
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UGameInstance_C::ReceiveOnStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameInstance.GameInstance_C.ReceiveOnStart");
		
		UGameInstance_C_ReceiveOnStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function GameInstance.GameInstance_C.OnBroadcast
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Name                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FJsonLibraryValue                           Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FWebInterfaceCallback                       Callback                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGameInstance_C::OnBroadcast(const class FName& Name, const struct FJsonLibraryValue& Data, const struct FWebInterfaceCallback& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameInstance.GameInstance_C.OnBroadcast");
		
		UGameInstance_C_OnBroadcast_Params params {};
		params.Name = Name;
		params.Data = Data;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function GameInstance.GameInstance_C.OnDiscordInit
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      DiscordAppID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      SteamAppID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UGameInstance_C::OnDiscordInit(const class FString& DiscordAppID, const class FString& SteamAppID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameInstance.GameInstance_C.OnDiscordInit");
		
		UGameInstance_C_OnDiscordInit_Params params {};
		params.DiscordAppID = DiscordAppID;
		params.SteamAppID = SteamAppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function GameInstance.GameInstance_C.OnDiscordShutdown
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UGameInstance_C::OnDiscordShutdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameInstance.GameInstance_C.OnDiscordShutdown");
		
		UGameInstance_C_OnDiscordShutdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function GameInstance.GameInstance_C.OnDiscordCallbacks
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UGameInstance_C::OnDiscordCallbacks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameInstance.GameInstance_C.OnDiscordCallbacks");
		
		UGameInstance_C_OnDiscordCallbacks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function GameInstance.GameInstance_C.OnDiscordPresence
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FDiscordRichPresence                        Presence                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGameInstance_C::OnDiscordPresence(const struct FDiscordRichPresence& Presence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameInstance.GameInstance_C.OnDiscordPresence");
		
		UGameInstance_C_OnDiscordPresence_Params params {};
		params.Presence = Presence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function GameInstance.GameInstance_C.OnDiscordJoinRequest
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDiscordJoinRequestData                     joinRequest                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGameInstance_C::OnDiscordJoinRequest(const struct FDiscordJoinRequestData& joinRequest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameInstance.GameInstance_C.OnDiscordJoinRequest");
		
		UGameInstance_C_OnDiscordJoinRequest_Params params {};
		params.joinRequest = joinRequest;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function GameInstance.GameInstance_C.OnDiscordRespond
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      DiscordUserID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               bAccept                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGameInstance_C::OnDiscordRespond(const class FString& DiscordUserID, bool bAccept)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameInstance.GameInstance_C.OnDiscordRespond");
		
		UGameInstance_C_OnDiscordRespond_Params params {};
		params.DiscordUserID = DiscordUserID;
		params.bAccept = bAccept;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function GameInstance.GameInstance_C.OnDiscordJoin
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      joinSecret                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UGameInstance_C::OnDiscordJoin(const class FString& joinSecret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameInstance.GameInstance_C.OnDiscordJoin");
		
		UGameInstance_C_OnDiscordJoin_Params params {};
		params.joinSecret = joinSecret;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function GameInstance.GameInstance_C.OnBroadcastHUD
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Name                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FJsonLibraryValue                           Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FWebInterfaceCallback                       Callback                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGameInstance_C::OnBroadcastHUD(const class FName& Name, const struct FJsonLibraryValue& Data, const struct FWebInterfaceCallback& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameInstance.GameInstance_C.OnBroadcastHUD");
		
		UGameInstance_C_OnBroadcastHUD_Params params {};
		params.Name = Name;
		params.Data = Data;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function GameInstance.GameInstance_C.OnBroadcastShared
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Name                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FJsonLibraryValue                           Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FWebInterfaceCallback                       Callback                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGameInstance_C::OnBroadcastShared(const class FName& Name, const struct FJsonLibraryValue& Data, const struct FWebInterfaceCallback& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameInstance.GameInstance_C.OnBroadcastShared");
		
		UGameInstance_C_OnBroadcastShared_Params params {};
		params.Name = Name;
		params.Data = Data;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function GameInstance.GameInstance_C.OnMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGameInstance_C::OnMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameInstance.GameInstance_C.OnMenu");
		
		UGameInstance_C_OnMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function GameInstance.GameInstance_C.ReceiveOnBackgroundMusic
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UGameInstance_C::ReceiveOnBackgroundMusic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameInstance.GameInstance_C.ReceiveOnBackgroundMusic");
		
		UGameInstance_C_ReceiveOnBackgroundMusic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function GameInstance.GameInstance_C.OnReplay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGameInstance_C::OnReplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameInstance.GameInstance_C.OnReplay");
		
		UGameInstance_C_OnReplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function GameInstance.GameInstance_C.ExecuteUbergraph_GameInstance
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGameInstance_C::ExecuteUbergraph_GameInstance(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameInstance.GameInstance_C.ExecuteUbergraph_GameInstance");
		
		UGameInstance_C_ExecuteUbergraph_GameInstance_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameInstance_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameInstance_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GameInstance.GameInstance_C");
		return ptr;
	}

}


