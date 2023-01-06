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
	 * 		Name   -> Function BP_Controller.BP_Controller_C.FindDefaultSkin
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Skin                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_Controller_C::FindDefaultSkin(class FString* Skin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.FindDefaultSkin");
		
		ABP_Controller_C_FindDefaultSkin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Skin != nullptr)
			*Skin = params.Skin;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Controller.BP_Controller_C.OpenLegacySettings
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FString>                              WorkshopSkins1                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<class FString>                              WorkshopSkins2                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ABP_Controller_C::OpenLegacySettings(TArray<class FString> WorkshopSkins1, TArray<class FString> WorkshopSkins2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OpenLegacySettings");
		
		ABP_Controller_C_OpenLegacySettings_Params params {};
		params.WorkshopSkins1 = WorkshopSkins1;
		params.WorkshopSkins2 = WorkshopSkins2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Controller.BP_Controller_C.OpenChat
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               TeamOnly                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Controller_C::OpenChat(bool TeamOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OpenChat");
		
		ABP_Controller_C_OpenChat_Params params {};
		params.TeamOnly = TeamOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Controller.BP_Controller_C.FindWorkshopSkins
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FString>                              Skins1                                                     (Parm, OutParm, ZeroConstructor)
	 * 		TArray<class FString>                              Skins2                                                     (Parm, OutParm, ZeroConstructor)
	 */
	void ABP_Controller_C::FindWorkshopSkins(TArray<class FString>* Skins1, TArray<class FString>* Skins2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.FindWorkshopSkins");
		
		ABP_Controller_C_FindWorkshopSkins_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Skins1 != nullptr)
			*Skins1 = params.Skins1;
		if (Skins2 != nullptr)
			*Skins2 = params.Skins2;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Controller.BP_Controller_C.FindWorkshop
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATaskForceSettings_C*                        Workshop                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Controller_C::FindWorkshop(class ATaskForceSettings_C** Workshop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.FindWorkshop");
		
		ABP_Controller_C_FindWorkshop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Workshop != nullptr)
			*Workshop = params.Workshop;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Controller.BP_Controller_C.PickTeamSound
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Team                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class USoundCue*>                           Sounds1                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<class USoundCue*>                           Sounds2                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		class USoundCue*                                   Default1                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USoundCue*                                   Default2                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USoundCue*                                   Sound                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Controller_C::PickTeamSound(int32_t Team, TArray<class USoundCue*>* Sounds1, TArray<class USoundCue*>* Sounds2, class USoundCue* Default1, class USoundCue* Default2, class USoundCue** Sound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.PickTeamSound");
		
		ABP_Controller_C_PickTeamSound_Params params {};
		params.Team = Team;
		params.Default1 = Default1;
		params.Default2 = Default2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Sounds1 != nullptr)
			*Sounds1 = params.Sounds1;
		if (Sounds2 != nullptr)
			*Sounds2 = params.Sounds2;
		if (Sound != nullptr)
			*Sound = params.Sound;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Controller.BP_Controller_C.PickSound
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class USoundCue*>                           Sounds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		class USoundCue*                                   Default                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USoundCue*                                   Sound                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Controller_C::PickSound(TArray<class USoundCue*>* Sounds, class USoundCue* Default, class USoundCue** Sound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.PickSound");
		
		ABP_Controller_C_PickSound_Params params {};
		params.Default = Default;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Sounds != nullptr)
			*Sounds = params.Sounds;
		if (Sound != nullptr)
			*Sound = params.Sound;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Controller.BP_Controller_C.SetHostageSounds
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class USoundCue*>                           HostageGrabbedVoice                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<class USoundCue*>                           HostageKilledVoice                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<class USoundCue*>                           HostageExtractedVoice                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ABP_Controller_C::SetHostageSounds(TArray<class USoundCue*>* HostageGrabbedVoice, TArray<class USoundCue*>* HostageKilledVoice, TArray<class USoundCue*>* HostageExtractedVoice)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.SetHostageSounds");
		
		ABP_Controller_C_SetHostageSounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HostageGrabbedVoice != nullptr)
			*HostageGrabbedVoice = params.HostageGrabbedVoice;
		if (HostageKilledVoice != nullptr)
			*HostageKilledVoice = params.HostageKilledVoice;
		if (HostageExtractedVoice != nullptr)
			*HostageExtractedVoice = params.HostageExtractedVoice;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Controller.BP_Controller_C.SetSkins
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FString>                              Skins1                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<class FString>                              Skins2                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ABP_Controller_C::SetSkins(TArray<class FString>* Skins1, TArray<class FString>* Skins2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.SetSkins");
		
		ABP_Controller_C_SetSkins_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Skins1 != nullptr)
			*Skins1 = params.Skins1;
		if (Skins2 != nullptr)
			*Skins2 = params.Skins2;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Controller.BP_Controller_C.StopMusic
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Controller_C::StopMusic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.StopMusic");
		
		ABP_Controller_C_StopMusic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Controller.BP_Controller_C.PlayBombPlantedMusic
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PlantTeam                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Controller_C::PlayBombPlantedMusic(int32_t PlantTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.PlayBombPlantedMusic");
		
		ABP_Controller_C_PlayBombPlantedMusic_Params params {};
		params.PlantTeam = PlantTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Controller.BP_Controller_C.PlayBombPickupMusic
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PickupTeam                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Controller_C::PlayBombPickupMusic(int32_t PickupTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.PlayBombPickupMusic");
		
		ABP_Controller_C_PlayBombPickupMusic_Params params {};
		params.PickupTeam = PickupTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Controller.BP_Controller_C.FindRoundWinMusic
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Team                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USoundCue*                                   RoundWin                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FadeIn                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Controller_C::FindRoundWinMusic(int32_t Team, class USoundCue** RoundWin, float* FadeIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.FindRoundWinMusic");
		
		ABP_Controller_C_FindRoundWinMusic_Params params {};
		params.Team = Team;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RoundWin != nullptr)
			*RoundWin = params.RoundWin;
		if (FadeIn != nullptr)
			*FadeIn = params.FadeIn;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Controller.BP_Controller_C.FindRoundStartMusic
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USoundCue*                                   RoundStart                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FadeIn                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Delay                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FadeOut                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Controller_C::FindRoundStartMusic(class USoundCue** RoundStart, float* FadeIn, float* Delay, float* FadeOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.FindRoundStartMusic");
		
		ABP_Controller_C_FindRoundStartMusic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RoundStart != nullptr)
			*RoundStart = params.RoundStart;
		if (FadeIn != nullptr)
			*FadeIn = params.FadeIn;
		if (Delay != nullptr)
			*Delay = params.Delay;
		if (FadeOut != nullptr)
			*FadeOut = params.FadeOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Controller.BP_Controller_C.SetBombSounds
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class USoundCue*>                           BombPickupMusic                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<class USoundCue*>                           BombPlantedVoice                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<class USoundCue*>                           BombPlantedMusic                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<class USoundCue*>                           BombExplodedVoice                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<class USoundCue*>                           BombDefusedVoice                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ABP_Controller_C::SetBombSounds(TArray<class USoundCue*>* BombPickupMusic, TArray<class USoundCue*>* BombPlantedVoice, TArray<class USoundCue*>* BombPlantedMusic, TArray<class USoundCue*>* BombExplodedVoice, TArray<class USoundCue*>* BombDefusedVoice)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.SetBombSounds");
		
		ABP_Controller_C_SetBombSounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BombPickupMusic != nullptr)
			*BombPickupMusic = params.BombPickupMusic;
		if (BombPlantedVoice != nullptr)
			*BombPlantedVoice = params.BombPlantedVoice;
		if (BombPlantedMusic != nullptr)
			*BombPlantedMusic = params.BombPlantedMusic;
		if (BombExplodedVoice != nullptr)
			*BombExplodedVoice = params.BombExplodedVoice;
		if (BombDefusedVoice != nullptr)
			*BombDefusedVoice = params.BombDefusedVoice;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Controller.BP_Controller_C.SetRoundSounds
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class USoundCue*>                           RoundStartMusic1                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<class USoundCue*>                           RoundStartMusic2                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<class USoundCue*>                           RoundWinVoice1                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<class USoundCue*>                           RoundWinMusic1                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<class USoundCue*>                           RoundWinVoice2                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<class USoundCue*>                           RoundWinMusic2                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ABP_Controller_C::SetRoundSounds(TArray<class USoundCue*>* RoundStartMusic1, TArray<class USoundCue*>* RoundStartMusic2, TArray<class USoundCue*>* RoundWinVoice1, TArray<class USoundCue*>* RoundWinMusic1, TArray<class USoundCue*>* RoundWinVoice2, TArray<class USoundCue*>* RoundWinMusic2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.SetRoundSounds");
		
		ABP_Controller_C_SetRoundSounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RoundStartMusic1 != nullptr)
			*RoundStartMusic1 = params.RoundStartMusic1;
		if (RoundStartMusic2 != nullptr)
			*RoundStartMusic2 = params.RoundStartMusic2;
		if (RoundWinVoice1 != nullptr)
			*RoundWinVoice1 = params.RoundWinVoice1;
		if (RoundWinMusic1 != nullptr)
			*RoundWinMusic1 = params.RoundWinMusic1;
		if (RoundWinVoice2 != nullptr)
			*RoundWinVoice2 = params.RoundWinVoice2;
		if (RoundWinMusic2 != nullptr)
			*RoundWinMusic2 = params.RoundWinMusic2;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Controller.BP_Controller_C.UpdateCameras
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class ATaskForceCharacter*>                 Characters                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		float                                              AspectRatio                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Controller_C::UpdateCameras(TArray<class ATaskForceCharacter*>* Characters, float AspectRatio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.UpdateCameras");
		
		ABP_Controller_C_UpdateCameras_Params params {};
		params.AspectRatio = AspectRatio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Characters != nullptr)
			*Characters = params.Characters;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Controller.BP_Controller_C.PlayRoundEndMusic
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            WinnerTeam                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Controller_C::PlayRoundEndMusic(int32_t WinnerTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.PlayRoundEndMusic");
		
		ABP_Controller_C_PlayRoundEndMusic_Params params {};
		params.WinnerTeam = WinnerTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Controller.BP_Controller_C.PlayRoundStartMusic
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Controller_C::PlayRoundStartMusic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.PlayRoundStartMusic");
		
		ABP_Controller_C_PlayRoundStartMusic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Controller.BP_Controller_C.PlayRoundWin
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            WinnerTeam                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Controller_C::PlayRoundWin(int32_t WinnerTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.PlayRoundWin");
		
		ABP_Controller_C_PlayRoundWin_Params params {};
		params.WinnerTeam = WinnerTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Controller.BP_Controller_C.ReturnEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_Controller_C::ReturnEvent(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.ReturnEvent");
		
		ABP_Controller_C_ReturnEvent_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Controller.BP_Controller_C.InterfaceEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Name                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FJsonLibraryValue                           Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FWebInterfaceCallback                       Callback                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ABP_Controller_C::InterfaceEvent(const class FName& Name, const struct FJsonLibraryValue& Data, const struct FWebInterfaceCallback& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.InterfaceEvent");
		
		ABP_Controller_C_InterfaceEvent_Params params {};
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
	 * 		Name   -> Function BP_Controller.BP_Controller_C.KickAway
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Controller_C::KickAway()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.KickAway");
		
		ABP_Controller_C_KickAway_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Controller.BP_Controller_C.OnArmoryRender
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Controller_C::OnArmoryRender()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OnArmoryRender");
		
		ABP_Controller_C_OnArmoryRender_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Controller.BP_Controller_C.OnArmorySleep
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Controller_C::OnArmorySleep()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OnArmorySleep");
		
		ABP_Controller_C_OnArmorySleep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Controller.BP_Controller_C.OnBombPlanted
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PlantTeam                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Controller_C::OnBombPlanted(int32_t PlantTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OnBombPlanted");
		
		ABP_Controller_C_OnBombPlanted_Params params {};
		params.PlantTeam = PlantTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Controller.BP_Controller_C.OnBombDefused
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            DefuseTeam                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Controller_C::OnBombDefused(int32_t DefuseTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OnBombDefused");
		
		ABP_Controller_C_OnBombDefused_Params params {};
		params.DefuseTeam = DefuseTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Controller.BP_Controller_C.OnBombExploded
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PlantTeam                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Controller_C::OnBombExploded(int32_t PlantTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OnBombExploded");
		
		ABP_Controller_C_OnBombExploded_Params params {};
		params.PlantTeam = PlantTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Controller.BP_Controller_C.OnHostageKilled
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackerTeam                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WinnerTeam                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Controller_C::OnHostageKilled(int32_t AttackerTeam, int32_t WinnerTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OnHostageKilled");
		
		ABP_Controller_C_OnHostageKilled_Params params {};
		params.AttackerTeam = AttackerTeam;
		params.WinnerTeam = WinnerTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Controller.BP_Controller_C.OnHostageExtracted
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            WinnerTeam                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Controller_C::OnHostageExtracted(int32_t WinnerTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OnHostageExtracted");
		
		ABP_Controller_C_OnHostageExtracted_Params params {};
		params.WinnerTeam = WinnerTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Controller.BP_Controller_C.OnRoundStart
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      GameMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_Controller_C::OnRoundStart(const class FString& GameMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OnRoundStart");
		
		ABP_Controller_C_OnRoundStart_Params params {};
		params.GameMode = GameMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Controller.BP_Controller_C.OnRoundEnd
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      GameMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            WinnerTeam                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Controller_C::OnRoundEnd(const class FString& GameMode, int32_t WinnerTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OnRoundEnd");
		
		ABP_Controller_C_OnRoundEnd_Params params {};
		params.GameMode = GameMode;
		params.WinnerTeam = WinnerTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Controller.BP_Controller_C.OnRoundWin
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      GameMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            WinnerTeam                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Controller_C::OnRoundWin(const class FString& GameMode, int32_t WinnerTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OnRoundWin");
		
		ABP_Controller_C_OnRoundWin_Params params {};
		params.GameMode = GameMode;
		params.WinnerTeam = WinnerTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Controller.BP_Controller_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Controller_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.ReceiveEndPlay");
		
		ABP_Controller_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Controller.BP_Controller_C.CommandCallback
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Output                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_Controller_C::CommandCallback(const class FString& Output, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.CommandCallback");
		
		ABP_Controller_C_CommandCallback_Params params {};
		params.Output = Output;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Controller.BP_Controller_C.SnapshotCallback
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FProcessInfo>                        Output                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		class FString                                      Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_Controller_C::SnapshotCallback(TArray<struct FProcessInfo> Output, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.SnapshotCallback");
		
		ABP_Controller_C_SnapshotCallback_Params params {};
		params.Output = Output;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Controller.BP_Controller_C.RenderCallback
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Output                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_Controller_C::RenderCallback(const class FString& Output, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.RenderCallback");
		
		ABP_Controller_C_RenderCallback_Params params {};
		params.Output = Output;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Controller.BP_Controller_C.OnChatMessage
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Controller_C::OnChatMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OnChatMessage");
		
		ABP_Controller_C_OnChatMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Controller.BP_Controller_C.OnTeamMessage
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Controller_C::OnTeamMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OnTeamMessage");
		
		ABP_Controller_C_OnTeamMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Controller.BP_Controller_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Controller_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.ReceiveTick");
		
		ABP_Controller_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Controller.BP_Controller_C.LoadHUD
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Controller_C::LoadHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.LoadHUD");
		
		ABP_Controller_C_LoadHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Controller.BP_Controller_C.DebugJavaScript
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bAdvanced                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bExperimental                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Controller_C::DebugJavaScript(bool bAdvanced, bool bExperimental)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.DebugJavaScript");
		
		ABP_Controller_C_DebugJavaScript_Params params {};
		params.bAdvanced = bAdvanced;
		params.bExperimental = bExperimental;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Controller.BP_Controller_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Controller_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.ReceiveBeginPlay");
		
		ABP_Controller_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Controller.BP_Controller_C.OnBombPickup
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PickupTeam                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Controller_C::OnBombPickup(int32_t PickupTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.OnBombPickup");
		
		ABP_Controller_C_OnBombPickup_Params params {};
		params.PickupTeam = PickupTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Controller.BP_Controller_C.LegacySettings
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Controller_C::LegacySettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.LegacySettings");
		
		ABP_Controller_C_LegacySettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Controller.BP_Controller_C.ExecuteUbergraph_BP_Controller
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Controller_C::ExecuteUbergraph_BP_Controller(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Controller.BP_Controller_C.ExecuteUbergraph_BP_Controller");
		
		ABP_Controller_C_ExecuteUbergraph_BP_Controller_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Controller_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Controller_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Controller.BP_Controller_C");
		return ptr;
	}

}


