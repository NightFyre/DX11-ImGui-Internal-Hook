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
	 * 		Name   -> Function MainMenu_CameraController.MainMenu_CameraController_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AMainMenu_CameraController_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu_CameraController.MainMenu_CameraController_C.ReceiveBeginPlay");
		
		AMainMenu_CameraController_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu_CameraController.MainMenu_CameraController_C.Music_FadeIn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              FadeInDuration                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainMenu_CameraController_C::Music_FadeIn(float FadeInDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu_CameraController.MainMenu_CameraController_C.Music_FadeIn");
		
		AMainMenu_CameraController_C_Music_FadeIn_Params params {};
		params.FadeInDuration = FadeInDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu_CameraController.MainMenu_CameraController_C.Music_FadeOut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              FadeOutDuration                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainMenu_CameraController_C::Music_FadeOut(float FadeOutDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu_CameraController.MainMenu_CameraController_C.Music_FadeOut");
		
		AMainMenu_CameraController_C_Music_FadeOut_Params params {};
		params.FadeOutDuration = FadeOutDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu_CameraController.MainMenu_CameraController_C.Music_Switch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              FadeOutDuration                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USoundBase*                                  NewMusic                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FadeInDuration                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainMenu_CameraController_C::Music_Switch(float FadeOutDuration, class USoundBase* NewMusic, float FadeInDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu_CameraController.MainMenu_CameraController_C.Music_Switch");
		
		AMainMenu_CameraController_C_Music_Switch_Params params {};
		params.FadeOutDuration = FadeOutDuration;
		params.NewMusic = NewMusic;
		params.FadeInDuration = FadeInDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu_CameraController.MainMenu_CameraController_C.SwitchCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMenuState                                         ToWhichMenuState                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainMenu_CameraController_C::SwitchCamera(EMenuState ToWhichMenuState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu_CameraController.MainMenu_CameraController_C.SwitchCamera");
		
		AMainMenu_CameraController_C_SwitchCamera_Params params {};
		params.ToWhichMenuState = ToWhichMenuState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu_CameraController.MainMenu_CameraController_C.SwitchCameraOptions
	 * 		Flags  -> ()
	 */
	void AMainMenu_CameraController_C::SwitchCameraOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu_CameraController.MainMenu_CameraController_C.SwitchCameraOptions");
		
		AMainMenu_CameraController_C_SwitchCameraOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu_CameraController.MainMenu_CameraController_C.SwitchCameraEndMatch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERaidResult                                        MatchResult                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainMenu_CameraController_C::SwitchCameraEndMatch(ERaidResult MatchResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu_CameraController.MainMenu_CameraController_C.SwitchCameraEndMatch");
		
		AMainMenu_CameraController_C_SwitchCameraEndMatch_Params params {};
		params.MatchResult = MatchResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu_CameraController.MainMenu_CameraController_C.MainMenuStartup
	 * 		Flags  -> ()
	 */
	void AMainMenu_CameraController_C::MainMenuStartup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu_CameraController.MainMenu_CameraController_C.MainMenuStartup");
		
		AMainMenu_CameraController_C_MainMenuStartup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu_CameraController.MainMenu_CameraController_C.SetNumOfWpnsHaveForWorkbench
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AmountOfWpnsForWorkbench                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainMenu_CameraController_C::SetNumOfWpnsHaveForWorkbench(int32_t AmountOfWpnsForWorkbench)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu_CameraController.MainMenu_CameraController_C.SetNumOfWpnsHaveForWorkbench");
		
		AMainMenu_CameraController_C_SetNumOfWpnsHaveForWorkbench_Params params {};
		params.AmountOfWpnsForWorkbench = AmountOfWpnsForWorkbench;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu_CameraController.MainMenu_CameraController_C.CrewSizeHasChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            HowManyOtherCrew                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainMenu_CameraController_C::CrewSizeHasChanged(int32_t HowManyOtherCrew)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu_CameraController.MainMenu_CameraController_C.CrewSizeHasChanged");
		
		AMainMenu_CameraController_C_CrewSizeHasChanged_Params params {};
		params.HowManyOtherCrew = HowManyOtherCrew;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu_CameraController.MainMenu_CameraController_C.SwitchGearCustomiseCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_InvEquipmentStates                               InvEquipmentState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECosmeticSlot                                      Current_ApperBodyPart                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainMenu_CameraController_C::SwitchGearCustomiseCamera(E_InvEquipmentStates InvEquipmentState, ECosmeticSlot Current_ApperBodyPart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu_CameraController.MainMenu_CameraController_C.SwitchGearCustomiseCamera");
		
		AMainMenu_CameraController_C_SwitchGearCustomiseCamera_Params params {};
		params.InvEquipmentState = InvEquipmentState;
		params.Current_ApperBodyPart = Current_ApperBodyPart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu_CameraController.MainMenu_CameraController_C.SwitchCosmeticBodyPartCameras
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECosmeticSlot                                      Current_ApperBodyPart                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainMenu_CameraController_C::SwitchCosmeticBodyPartCameras(ECosmeticSlot Current_ApperBodyPart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu_CameraController.MainMenu_CameraController_C.SwitchCosmeticBodyPartCameras");
		
		AMainMenu_CameraController_C_SwitchCosmeticBodyPartCameras_Params params {};
		params.Current_ApperBodyPart = Current_ApperBodyPart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu_CameraController.MainMenu_CameraController_C.LobbyMemberHasChangedAnAttribute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSLobbyMemberUpdateReceivedCallbackInfo   Data                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AMainMenu_CameraController_C::LobbyMemberHasChangedAnAttribute(const struct FEOSLobbyMemberUpdateReceivedCallbackInfo& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu_CameraController.MainMenu_CameraController_C.LobbyMemberHasChangedAnAttribute");
		
		AMainMenu_CameraController_C_LobbyMemberHasChangedAnAttribute_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu_CameraController.MainMenu_CameraController_C.LobbyInfoChanged_JoinedOrCreated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CrewUpdate                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMainMenu_CameraController_C::LobbyInfoChanged_JoinedOrCreated(bool CrewUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu_CameraController.MainMenu_CameraController_C.LobbyInfoChanged_JoinedOrCreated");
		
		AMainMenu_CameraController_C_LobbyInfoChanged_JoinedOrCreated_Params params {};
		params.CrewUpdate = CrewUpdate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu_CameraController.MainMenu_CameraController_C.UpdateLobby
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSLobbyUpdateReceivedCallbackInfo         Data                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AMainMenu_CameraController_C::UpdateLobby(const struct FEOSLobbyUpdateReceivedCallbackInfo& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu_CameraController.MainMenu_CameraController_C.UpdateLobby");
		
		AMainMenu_CameraController_C_UpdateLobby_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu_CameraController.MainMenu_CameraController_C.LobbyStateHasChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECrewEvents                                        NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainMenu_CameraController_C::LobbyStateHasChanged(ECrewEvents NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu_CameraController.MainMenu_CameraController_C.LobbyStateHasChanged");
		
		AMainMenu_CameraController_C_LobbyStateHasChanged_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu_CameraController.MainMenu_CameraController_C.FORCE_BG_CharRefresh
	 * 		Flags  -> ()
	 */
	void AMainMenu_CameraController_C::FORCE_BG_CharRefresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu_CameraController.MainMenu_CameraController_C.FORCE_BG_CharRefresh");
		
		AMainMenu_CameraController_C_FORCE_BG_CharRefresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu_CameraController.MainMenu_CameraController_C.DebugTurnAllBGGuysOn
	 * 		Flags  -> ()
	 */
	void AMainMenu_CameraController_C::DebugTurnAllBGGuysOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu_CameraController.MainMenu_CameraController_C.DebugTurnAllBGGuysOn");
		
		AMainMenu_CameraController_C_DebugTurnAllBGGuysOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu_CameraController.MainMenu_CameraController_C.CrewInfoChange_TriggerBGCharRefresh
	 * 		Flags  -> ()
	 */
	void AMainMenu_CameraController_C::CrewInfoChange_TriggerBGCharRefresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu_CameraController.MainMenu_CameraController_C.CrewInfoChange_TriggerBGCharRefresh");
		
		AMainMenu_CameraController_C_CrewInfoChange_TriggerBGCharRefresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu_CameraController.MainMenu_CameraController_C.ExecuteUbergraph_MainMenu_CameraController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainMenu_CameraController_C::ExecuteUbergraph_MainMenu_CameraController(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu_CameraController.MainMenu_CameraController_C.ExecuteUbergraph_MainMenu_CameraController");
		
		AMainMenu_CameraController_C_ExecuteUbergraph_MainMenu_CameraController_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainMenu_CameraController.MainMenu_CameraController_C.StartMainMenuEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AMainMenu_CameraController_C::StartMainMenuEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenu_CameraController.MainMenu_CameraController_C.StartMainMenuEvent__DelegateSignature");
		
		AMainMenu_CameraController_C_StartMainMenuEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMainMenu_CameraController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMainMenu_CameraController_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MainMenu_CameraController.MainMenu_CameraController_C");
		return ptr;
	}

}


