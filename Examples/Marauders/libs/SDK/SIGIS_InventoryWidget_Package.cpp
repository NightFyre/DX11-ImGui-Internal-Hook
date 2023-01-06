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
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Has_ModSkinDLC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TurnOn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_InventoryWidget_C::Has_ModSkinDLC(bool TurnOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Has_ModSkinDLC");
		
		USIGIS_InventoryWidget_C_Has_ModSkinDLC_Params params {};
		params.TurnOn = TurnOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Has_PreOderDLC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TurnOn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_InventoryWidget_C::Has_PreOderDLC(bool TurnOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Has_PreOderDLC");
		
		USIGIS_InventoryWidget_C_Has_PreOderDLC_Params params {};
		params.TurnOn = TurnOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Return_ActiveShip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ActiveShip                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::Return_ActiveShip(class FName* ActiveShip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Return_ActiveShip");
		
		USIGIS_InventoryWidget_C_Return_ActiveShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActiveShip != nullptr)
			*ActiveShip = params.ActiveShip;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.PlayScrappingSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemRowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::PlayScrappingSound(const class FName& ItemRowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.PlayScrappingSound");
		
		USIGIS_InventoryWidget_C_PlayScrappingSound_Params params {};
		params.ItemRowName = ItemRowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Analytics_CoreMissionCompleted
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::Analytics_CoreMissionCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Analytics_CoreMissionCompleted");
		
		USIGIS_InventoryWidget_C_Analytics_CoreMissionCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Analytics_ItemScrapped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::Analytics_ItemScrapped(const class FName& ItemName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Analytics_ItemScrapped");
		
		USIGIS_InventoryWidget_C_Analytics_ItemScrapped_Params params {};
		params.ItemName = ItemName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ShowHideCoreMission_ShipRewardActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_InventoryWidget_C::ShowHideCoreMission_ShipRewardActor(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ShowHideCoreMission_ShipRewardActor");
		
		USIGIS_InventoryWidget_C_ShowHideCoreMission_ShipRewardActor_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CoreMission_GetCurrentMissionID
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::CoreMission_GetCurrentMissionID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CoreMission_GetCurrentMissionID");
		
		USIGIS_InventoryWidget_C_CoreMission_GetCurrentMissionID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.AllowInputThroughForRotations
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               AllowInputThrough                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_InventoryWidget_C::AllowInputThroughForRotations(bool AllowInputThrough)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.AllowInputThroughForRotations");
		
		USIGIS_InventoryWidget_C_AllowInputThroughForRotations_Params params {};
		params.AllowInputThrough = AllowInputThrough;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.DailyMission_ActiveMissionsSetup
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::DailyMission_ActiveMissionsSetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.DailyMission_ActiveMissionsSetup");
		
		USIGIS_InventoryWidget_C_DailyMission_ActiveMissionsSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CoreMission_UpdateInLevelActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FChapterMissionUI                           NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FMenuPlayerLook                             PlayersActualLook                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_InventoryWidget_C::CoreMission_UpdateInLevelActor(const struct FChapterMissionUI& NewParam, const struct FMenuPlayerLook& PlayersActualLook)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CoreMission_UpdateInLevelActor");
		
		USIGIS_InventoryWidget_C_CoreMission_UpdateInLevelActor_Params params {};
		params.NewParam = NewParam;
		params.PlayersActualLook = PlayersActualLook;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CoreMissions_CurrentMissionState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_CoreMissionStates                                SelectedCurrentState                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::CoreMissions_CurrentMissionState(E_CoreMissionStates SelectedCurrentState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CoreMissions_CurrentMissionState");
		
		USIGIS_InventoryWidget_C_CoreMissions_CurrentMissionState_Params params {};
		params.SelectedCurrentState = SelectedCurrentState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CoreMissions_MissionsSelectedLook
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::CoreMissions_MissionsSelectedLook()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CoreMissions_MissionsSelectedLook");
		
		USIGIS_InventoryWidget_C_CoreMissions_MissionsSelectedLook_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ScrapItem_CanPlaceHere
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isAbleToScrapItem                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_InventoryWidget_C::ScrapItem_CanPlaceHere(bool isAbleToScrapItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ScrapItem_CanPlaceHere");
		
		USIGIS_InventoryWidget_C_ScrapItem_CanPlaceHere_Params params {};
		params.isAbleToScrapItem = isAbleToScrapItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ScrapItem_ResultVisuals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_ScrapOutcomes                                    Scrapoutcomes                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::ScrapItem_ResultVisuals(E_ScrapOutcomes Scrapoutcomes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ScrapItem_ResultVisuals");
		
		USIGIS_InventoryWidget_C_ScrapItem_ResultVisuals_Params params {};
		params.Scrapoutcomes = Scrapoutcomes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Repair_RefreshInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ClearInfo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_InventoryWidget_C::Repair_RefreshInfo(bool ClearInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Repair_RefreshInfo");
		
		USIGIS_InventoryWidget_C_Repair_RefreshInfo_Params params {};
		params.ClearInfo = ClearInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ShipMod_DETACH_JUICE
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EShipAttachmentSlot                                ShipModType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ShipItemDataName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::ShipMod_DETACH_JUICE(EShipAttachmentSlot ShipModType, const class FName& ShipItemDataName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ShipMod_DETACH_JUICE");
		
		USIGIS_InventoryWidget_C_ShipMod_DETACH_JUICE_Params params {};
		params.ShipModType = ShipModType;
		params.ShipItemDataName = ShipItemDataName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.SetActiveShipSelectSound
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::SetActiveShipSelectSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.SetActiveShipSelectSound");
		
		USIGIS_InventoryWidget_C_SetActiveShipSelectSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Prestige_CloseUnlocksWidget
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::Prestige_CloseUnlocksWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Prestige_CloseUnlocksWidget");
		
		USIGIS_InventoryWidget_C_Prestige_CloseUnlocksWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Prestige_ShowPossibleUnlocksWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPrestiagueUnlockType                              WhichPrestigeUnlocks                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::Prestige_ShowPossibleUnlocksWidget(EPrestiagueUnlockType WhichPrestigeUnlocks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Prestige_ShowPossibleUnlocksWidget");
		
		USIGIS_InventoryWidget_C_Prestige_ShowPossibleUnlocksWidget_Params params {};
		params.WhichPrestigeUnlocks = WhichPrestigeUnlocks;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.PrestigePopup
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::PrestigePopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.PrestigePopup");
		
		USIGIS_InventoryWidget_C_PrestigePopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Missions_UpdateActiveMissions
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::Missions_UpdateActiveMissions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Missions_UpdateActiveMissions");
		
		USIGIS_InventoryWidget_C_Missions_UpdateActiveMissions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Mission_UpdateFactionInfo
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::Mission_UpdateFactionInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Mission_UpdateFactionInfo");
		
		USIGIS_InventoryWidget_C_Mission_UpdateFactionInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.SetEquippedVoiceBtnSelectedLook
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::SetEquippedVoiceBtnSelectedLook()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.SetEquippedVoiceBtnSelectedLook");
		
		USIGIS_InventoryWidget_C_SetEquippedVoiceBtnSelectedLook_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Analytics_ShipScraped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        WhichShip                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::Analytics_ShipScraped(const class FName& WhichShip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Analytics_ShipScraped");
		
		USIGIS_InventoryWidget_C_Analytics_ShipScraped_Params params {};
		params.WhichShip = WhichShip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.FillEquipShipStashInfo
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::FillEquipShipStashInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.FillEquipShipStashInfo");
		
		USIGIS_InventoryWidget_C_FillEquipShipStashInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BlockShipStashElements
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldBlock                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_InventoryWidget_C::BlockShipStashElements(bool ShouldBlock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BlockShipStashElements");
		
		USIGIS_InventoryWidget_C_BlockShipStashElements_Params params {};
		params.ShouldBlock = ShouldBlock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CheckSpecificStat_Amount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      WhichStat                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            StatAmount                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::CheckSpecificStat_Amount(const class FString& WhichStat, int32_t* StatAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CheckSpecificStat_Amount");
		
		USIGIS_InventoryWidget_C_CheckSpecificStat_Amount_Params params {};
		params.WhichStat = WhichStat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StatAmount != nullptr)
			*StatAmount = params.StatAmount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CalculateSoloPlayerActiveShipForAnalytics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NiceShipName                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::CalculateSoloPlayerActiveShipForAnalytics(class FName* NiceShipName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CalculateSoloPlayerActiveShipForAnalytics");
		
		USIGIS_InventoryWidget_C_CalculateSoloPlayerActiveShipForAnalytics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NiceShipName != nullptr)
			*NiceShipName = params.NiceShipName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Analytics_CosmeticUnlocked
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::Analytics_CosmeticUnlocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Analytics_CosmeticUnlocked");
		
		USIGIS_InventoryWidget_C_Analytics_CosmeticUnlocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Analytics_CraftItemUnlocked
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::Analytics_CraftItemUnlocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Analytics_CraftItemUnlocked");
		
		USIGIS_InventoryWidget_C_Analytics_CraftItemUnlocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Analytics_ItemCrafted
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::Analytics_ItemCrafted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Analytics_ItemCrafted");
		
		USIGIS_InventoryWidget_C_Analytics_ItemCrafted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.SetCosmeticBtn_SelectedLook
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ResetToCharActual                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_InventoryWidget_C::SetCosmeticBtn_SelectedLook(bool ResetToCharActual)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.SetCosmeticBtn_SelectedLook");
		
		USIGIS_InventoryWidget_C_SetCosmeticBtn_SelectedLook_Params params {};
		params.ResetToCharActual = ResetToCharActual;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.TurnPlayerLookIntoStringAndAddToMemberAttributes
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::TurnPlayerLookIntoStringAndAddToMemberAttributes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.TurnPlayerLookIntoStringAndAddToMemberAttributes");
		
		USIGIS_InventoryWidget_C_TurnPlayerLookIntoStringAndAddToMemberAttributes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CosmeticWorkOutCantUnlockReason
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        RowName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CheckOnly                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_InventoryWidget_C::CosmeticWorkOutCantUnlockReason(const class FName& RowName, bool CheckOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CosmeticWorkOutCantUnlockReason");
		
		USIGIS_InventoryWidget_C_CosmeticWorkOutCantUnlockReason_Params params {};
		params.RowName = RowName;
		params.CheckOnly = CheckOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.isThisCosmeticUnlocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ThisCosmeticItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isCosmeticUnlocked                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_InventoryWidget_C::isThisCosmeticUnlocked(const class FName& ThisCosmeticItem, bool* isCosmeticUnlocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.isThisCosmeticUnlocked");
		
		USIGIS_InventoryWidget_C_isThisCosmeticUnlocked_Params params {};
		params.ThisCosmeticItem = ThisCosmeticItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isCosmeticUnlocked != nullptr)
			*isCosmeticUnlocked = params.isCosmeticUnlocked;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.AppearanceInfo_LockedFillIn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        DT_SelectedAppearanceItem                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ClothingType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::AppearanceInfo_LockedFillIn(bool Show, const class FName& DT_SelectedAppearanceItem, const class FName& ClothingType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.AppearanceInfo_LockedFillIn");
		
		USIGIS_InventoryWidget_C_AppearanceInfo_LockedFillIn_Params params {};
		params.Show = Show;
		params.DT_SelectedAppearanceItem = DT_SelectedAppearanceItem;
		params.ClothingType = ClothingType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Appearances_CheckUnlocks
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::Appearances_CheckUnlocks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Appearances_CheckUnlocks");
		
		USIGIS_InventoryWidget_C_Appearances_CheckUnlocks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.GetAndSetup_AppearanceRows
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::GetAndSetup_AppearanceRows()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.GetAndSetup_AppearanceRows");
		
		USIGIS_InventoryWidget_C_GetAndSetup_AppearanceRows_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Set_AppearancePartFilers_TabsVisuals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECosmeticSlot                                      Current_ApperBodyPart                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::Set_AppearancePartFilers_TabsVisuals(ECosmeticSlot Current_ApperBodyPart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Set_AppearancePartFilers_TabsVisuals");
		
		USIGIS_InventoryWidget_C_Set_AppearancePartFilers_TabsVisuals_Params params {};
		params.Current_ApperBodyPart = Current_ApperBodyPart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Setup_AppearancePartFilters
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::Setup_AppearancePartFilters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Setup_AppearancePartFilters");
		
		USIGIS_InventoryWidget_C_Setup_AppearancePartFilters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Switch_EquipmentState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_InvEquipmentStates                               Current_InvEquipmentState                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::Switch_EquipmentState(E_InvEquipmentStates Current_InvEquipmentState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Switch_EquipmentState");
		
		USIGIS_InventoryWidget_C_Switch_EquipmentState_Params params {};
		params.Current_InvEquipmentState = Current_InvEquipmentState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Set_GearCustomise_TabsVisuals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_InvEquipmentStates                               WhichMenu                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::Set_GearCustomise_TabsVisuals(E_InvEquipmentStates WhichMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Set_GearCustomise_TabsVisuals");
		
		USIGIS_InventoryWidget_C_Set_GearCustomise_TabsVisuals_Params params {};
		params.WhichMenu = WhichMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Set_RecipeTabsVisuals
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::Set_RecipeTabsVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Set_RecipeTabsVisuals");
		
		USIGIS_InventoryWidget_C_Set_RecipeTabsVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Setup_RecipeTabs
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::Setup_RecipeTabs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Setup_RecipeTabs");
		
		USIGIS_InventoryWidget_C_Setup_RecipeTabs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.FillRecipeListByType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TypeAsString                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               GoToSpecificRecipe                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            RecipeID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DoNotPlayAnimation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ForceRefresh                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_InventoryWidget_C::FillRecipeListByType(const class FString& TypeAsString, bool GoToSpecificRecipe, int32_t RecipeID, bool DoNotPlayAnimation, bool ForceRefresh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.FillRecipeListByType");
		
		USIGIS_InventoryWidget_C_FillRecipeListByType_Params params {};
		params.TypeAsString = TypeAsString;
		params.GoToSpecificRecipe = GoToSpecificRecipe;
		params.RecipeID = RecipeID;
		params.DoNotPlayAnimation = DoNotPlayAnimation;
		params.ForceRefresh = ForceRefresh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Shop_SetShopkeeperInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WhichShopKeep                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::Shop_SetShopkeeperInfo(int32_t WhichShopKeep)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Shop_SetShopkeeperInfo");
		
		USIGIS_InventoryWidget_C_Shop_SetShopkeeperInfo_Params params {};
		params.WhichShopKeep = WhichShopKeep;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.IsMatchmakingLockGear
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               LockGearScreen                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_InventoryWidget_C::IsMatchmakingLockGear(bool LockGearScreen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.IsMatchmakingLockGear");
		
		USIGIS_InventoryWidget_C_IsMatchmakingLockGear_Params params {};
		params.LockGearScreen = LockGearScreen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ShipMod_AttachJuice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EShipAttachmentSlot                                WhichAttachment                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        AttachmentItemDataName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::ShipMod_AttachJuice(EShipAttachmentSlot WhichAttachment, const class FName& AttachmentItemDataName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ShipMod_AttachJuice");
		
		USIGIS_InventoryWidget_C_ShipMod_AttachJuice_Params params {};
		params.WhichAttachment = WhichAttachment;
		params.AttachmentItemDataName = AttachmentItemDataName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_IslookingAtAttachment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        ItemName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::Ship_IslookingAtAttachment(bool Show, const class FName& ItemName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_IslookingAtAttachment");
		
		USIGIS_InventoryWidget_C_Ship_IslookingAtAttachment_Params params {};
		params.Show = Show;
		params.ItemName = ItemName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_RefreshAllStats
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::Ship_RefreshAllStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_RefreshAllStats");
		
		USIGIS_InventoryWidget_C_Ship_RefreshAllStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_EnterHangarMenuRefresh
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::Ship_EnterHangarMenuRefresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_EnterHangarMenuRefresh");
		
		USIGIS_InventoryWidget_C_Ship_EnterHangarMenuRefresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_RefreshAttachmentDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        EquippedShipAttachmentName                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::Ship_RefreshAttachmentDetails(bool Show, const class FName& EquippedShipAttachmentName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_RefreshAttachmentDetails");
		
		USIGIS_InventoryWidget_C_Ship_RefreshAttachmentDetails_Params params {};
		params.Show = Show;
		params.EquippedShipAttachmentName = EquippedShipAttachmentName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_FillAttachmentListForCurrentShip
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::Ship_FillAttachmentListForCurrentShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_FillAttachmentListForCurrentShip");
		
		USIGIS_InventoryWidget_C_Ship_FillAttachmentListForCurrentShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_WhichMenusToShow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_Ship_MenuState                                   WhichMenuState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::Ship_WhichMenusToShow(E_Ship_MenuState WhichMenuState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_WhichMenusToShow");
		
		USIGIS_InventoryWidget_C_Ship_WhichMenusToShow_Params params {};
		params.WhichMenuState = WhichMenuState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_RefreshSlotSubWidgetInfo
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::Ship_RefreshSlotSubWidgetInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_RefreshSlotSubWidgetInfo");
		
		USIGIS_InventoryWidget_C_Ship_RefreshSlotSubWidgetInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_SetupShipAttachmentSlots
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::Ship_SetupShipAttachmentSlots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_SetupShipAttachmentSlots");
		
		USIGIS_InventoryWidget_C_Ship_SetupShipAttachmentSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_SetWhichModulesCanUse
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::Ship_SetWhichModulesCanUse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_SetWhichModulesCanUse");
		
		USIGIS_InventoryWidget_C_Ship_SetWhichModulesCanUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_RefreshCurrentShipDetails
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::Ship_RefreshCurrentShipDetails()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_RefreshCurrentShipDetails");
		
		USIGIS_InventoryWidget_C_Ship_RefreshCurrentShipDetails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_FirstOpenShipMenu
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::Ship_FirstOpenShipMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_FirstOpenShipMenu");
		
		USIGIS_InventoryWidget_C_Ship_FirstOpenShipMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_RefreshAllStats
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::WpnWB_RefreshAllStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_RefreshAllStats");
		
		USIGIS_InventoryWidget_C_WpnWB_RefreshAllStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_ShowHideTheExtraStatsbars
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_InventoryWidget_C::WpnWB_ShowHideTheExtraStatsbars(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_ShowHideTheExtraStatsbars");
		
		USIGIS_InventoryWidget_C_WpnWB_ShowHideTheExtraStatsbars_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_CheckAttachSlotsifThingEquipped
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::WpnWB_CheckAttachSlotsifThingEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_CheckAttachSlotsifThingEquipped");
		
		USIGIS_InventoryWidget_C_WpnWB_CheckAttachSlotsifThingEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_DETACH_JUICE
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAttachmentSlot                                    WhichAttachment                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        AttachmentItemDataName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::WpnWB_DETACH_JUICE(EAttachmentSlot WhichAttachment, const class FName& AttachmentItemDataName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_DETACH_JUICE");
		
		USIGIS_InventoryWidget_C_WpnWB_DETACH_JUICE_Params params {};
		params.WhichAttachment = WhichAttachment;
		params.AttachmentItemDataName = AttachmentItemDataName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_AttachJuice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAttachmentSlot                                    WhichAttachment                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        AttachmentItemDataName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::WpnWB_AttachJuice(EAttachmentSlot WhichAttachment, const class FName& AttachmentItemDataName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_AttachJuice");
		
		USIGIS_InventoryWidget_C_WpnWB_AttachJuice_Params params {};
		params.WhichAttachment = WhichAttachment;
		params.AttachmentItemDataName = AttachmentItemDataName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_SwitchMenuState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_WpnWB_MenuState                                  ToWhichState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::WpnWB_SwitchMenuState(E_WpnWB_MenuState ToWhichState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_SwitchMenuState");
		
		USIGIS_InventoryWidget_C_WpnWB_SwitchMenuState_Params params {};
		params.ToWhichState = ToWhichState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_RefreshSelectedAttachmentInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        RowName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_InventoryWidget_C::WpnWB_RefreshSelectedAttachmentInfo(const class FName& RowName, bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_RefreshSelectedAttachmentInfo");
		
		USIGIS_InventoryWidget_C_WpnWB_RefreshSelectedAttachmentInfo_Params params {};
		params.RowName = RowName;
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Wpn WB Fill Attachment List
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::Wpn_WB_Fill_Attachment_List()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Wpn WB Fill Attachment List");
		
		USIGIS_InventoryWidget_C_Wpn_WB_Fill_Attachment_List_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_SetSelectedAttachment
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::WpnWB_SetSelectedAttachment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_SetSelectedAttachment");
		
		USIGIS_InventoryWidget_C_WpnWB_SetSelectedAttachment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_SwitchToAttachmentCamera
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::WpnWB_SwitchToAttachmentCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_SwitchToAttachmentCamera");
		
		USIGIS_InventoryWidget_C_WpnWB_SwitchToAttachmentCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_SetupAttachmentSlots
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::WpnWB_SetupAttachmentSlots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_SetupAttachmentSlots");
		
		USIGIS_InventoryWidget_C_WpnWB_SetupAttachmentSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_SetWhichModulesCanEffect
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::WpnWB_SetWhichModulesCanEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_SetWhichModulesCanEffect");
		
		USIGIS_InventoryWidget_C_WpnWB_SetWhichModulesCanEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Set_WeaponIntialTransform
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::Set_WeaponIntialTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Set_WeaponIntialTransform");
		
		USIGIS_InventoryWidget_C_Set_WeaponIntialTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_RefreshSelectedWpnStats
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::WpnWB_RefreshSelectedWpnStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_RefreshSelectedWpnStats");
		
		USIGIS_InventoryWidget_C_WpnWB_RefreshSelectedWpnStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_SetSelectedWpnButtonLook
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::WpnWB_SetSelectedWpnButtonLook()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_SetSelectedWpnButtonLook");
		
		USIGIS_InventoryWidget_C_WpnWB_SetSelectedWpnButtonLook_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWorkbench_FillWpnList
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::WpnWorkbench_FillWpnList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWorkbench_FillWpnList");
		
		USIGIS_InventoryWidget_C_WpnWorkbench_FillWpnList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Warning_ShopNotEnoughSpace
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::Warning_ShopNotEnoughSpace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Warning_ShopNotEnoughSpace");
		
		USIGIS_InventoryWidget_C_Warning_ShopNotEnoughSpace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ShopRestockTimePrettyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Seconds                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::ShopRestockTimePrettyUp(int32_t Seconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ShopRestockTimePrettyUp");
		
		USIGIS_InventoryWidget_C_ShopRestockTimePrettyUp_Params params {};
		params.Seconds = Seconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WhichWidgetisActive
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::WhichWidgetisActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WhichWidgetisActive");
		
		USIGIS_InventoryWidget_C_WhichWidgetisActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_RefreshShipSubwigetInfo
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::Ship_RefreshShipSubwigetInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_RefreshShipSubwigetInfo");
		
		USIGIS_InventoryWidget_C_Ship_RefreshShipSubwigetInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.SwitchToShip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ShipDTname                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      FrigID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      ShipsName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               IsStarterShip                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_InventoryWidget_C::SwitchToShip(const class FName& ShipDTname, const class FString& FrigID, const class FString& ShipsName, bool IsStarterShip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.SwitchToShip");
		
		USIGIS_InventoryWidget_C_SwitchToShip_Params params {};
		params.ShipDTname = ShipDTname;
		params.FrigID = FrigID;
		params.ShipsName = ShipsName;
		params.IsStarterShip = IsStarterShip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_Refresh_ShipList
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::Ship_Refresh_ShipList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_Refresh_ShipList");
		
		USIGIS_InventoryWidget_C_Ship_Refresh_ShipList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Switch_ShipTabLook
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_ShipStates                                       ShipStates                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::Switch_ShipTabLook(E_ShipStates ShipStates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Switch_ShipTabLook");
		
		USIGIS_InventoryWidget_C_Switch_ShipTabLook_Params params {};
		params.ShipStates = ShipStates;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_SwitchShipState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_ShipStates                                       Current_ShipState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::Ship_SwitchShipState(E_ShipStates Current_ShipState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_SwitchShipState");
		
		USIGIS_InventoryWidget_C_Ship_SwitchShipState_Params params {};
		params.Current_ShipState = Current_ShipState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Shop_PlayerSellAreaHighlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Turn_on                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_InventoryWidget_C::Shop_PlayerSellAreaHighlight(bool Turn_on)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Shop_PlayerSellAreaHighlight");
		
		USIGIS_InventoryWidget_C_Shop_PlayerSellAreaHighlight_Params params {};
		params.Turn_on = Turn_on;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Shop_ShopkeepSellAreaHighlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Turn_on                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_InventoryWidget_C::Shop_ShopkeepSellAreaHighlight(bool Turn_on)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Shop_ShopkeepSellAreaHighlight");
		
		USIGIS_InventoryWidget_C_Shop_ShopkeepSellAreaHighlight_Params params {};
		params.Turn_on = Turn_on;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ShowMoneyOnItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_InventoryWidget_C::ShowMoneyOnItems(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ShowMoneyOnItems");
		
		USIGIS_InventoryWidget_C_ShowMoneyOnItems_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CraftRecipeSwitched
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isUnlocked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        RecipeName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FName                                        DataTableName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Recipe_DT_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    ReqSkills                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void USIGIS_InventoryWidget_C::CraftRecipeSwitched(bool isUnlocked, const class FText& RecipeName, const class FName& DataTableName, const class FName& Recipe_DT_Name, TArray<int32_t>* ReqSkills)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CraftRecipeSwitched");
		
		USIGIS_InventoryWidget_C_CraftRecipeSwitched_Params params {};
		params.isUnlocked = isUnlocked;
		params.RecipeName = RecipeName;
		params.DataTableName = DataTableName;
		params.Recipe_DT_Name = Recipe_DT_Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReqSkills != nullptr)
			*ReqSkills = params.ReqSkills;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Switch_TabLook
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInventoryState                                    SwitchToInvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DoNotPlaySound                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_InventoryWidget_C::Switch_TabLook(EInventoryState SwitchToInvent, bool DoNotPlaySound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Switch_TabLook");
		
		USIGIS_InventoryWidget_C_Switch_TabLook_Params params {};
		params.SwitchToInvent = SwitchToInvent;
		params.DoNotPlaySound = DoNotPlaySound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Switch_InventoryState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInventoryState                                    Current_InventMenu                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Force                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               DoNotPlaySound                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_InventoryWidget_C::Switch_InventoryState(EInventoryState Current_InventMenu, bool Force, bool DoNotPlaySound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Switch_InventoryState");
		
		USIGIS_InventoryWidget_C_Switch_InventoryState_Params params {};
		params.Current_InventMenu = Current_InventMenu;
		params.Force = Force;
		params.DoNotPlaySound = DoNotPlaySound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Get_TraderGoldAmount_Text_1
	 * 		Flags  -> ()
	 */
	class FText USIGIS_InventoryWidget_C::Get_TraderGoldAmount_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Get_TraderGoldAmount_Text_1");
		
		USIGIS_InventoryWidget_C_Get_TraderGoldAmount_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Get_MyGoldAmount_Text_1
	 * 		Flags  -> ()
	 */
	class FText USIGIS_InventoryWidget_C::Get_MyGoldAmount_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Get_MyGoldAmount_Text_1");
		
		USIGIS_InventoryWidget_C_Get_MyGoldAmount_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.OnLoaded_D3DFC0B44A0E49307B48988B08E6BDA1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::OnLoaded_D3DFC0B44A0E49307B48988B08E6BDA1(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.OnLoaded_D3DFC0B44A0E49307B48988B08E6BDA1");
		
		USIGIS_InventoryWidget_C_OnLoaded_D3DFC0B44A0E49307B48988B08E6BDA1_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.OnLoaded_2A5A2332495D93AE3BF9BA9C8C93975A
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::OnLoaded_2A5A2332495D93AE3BF9BA9C8C93975A(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.OnLoaded_2A5A2332495D93AE3BF9BA9C8C93975A");
		
		USIGIS_InventoryWidget_C_OnLoaded_2A5A2332495D93AE3BF9BA9C8C93975A_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Construct");
		
		USIGIS_InventoryWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__EQUIPBTN_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::BndEvt__EQUIPBTN_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__EQUIPBTN_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_InventoryWidget_C_BndEvt__EQUIPBTN_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SHOPBTN_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::BndEvt__SHOPBTN_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SHOPBTN_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_InventoryWidget_C_BndEvt__SHOPBTN_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__CRAFTBTN_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::BndEvt__CRAFTBTN_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__CRAFTBTN_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_InventoryWidget_C_BndEvt__CRAFTBTN_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__HANGERBTN_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::BndEvt__HANGERBTN_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__HANGERBTN_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_InventoryWidget_C_BndEvt__HANGERBTN_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SKILLTREEBTN_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::BndEvt__SKILLTREEBTN_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SKILLTREEBTN_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_InventoryWidget_C_BndEvt__SKILLTREEBTN_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.InventoryOpened
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::InventoryOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.InventoryOpened");
		
		USIGIS_InventoryWidget_C_InventoryOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CraftMenuOpened
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::CraftMenuOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CraftMenuOpened");
		
		USIGIS_InventoryWidget_C_CraftMenuOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__Btn_Ship_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::BndEvt__Btn_Ship_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__Btn_Ship_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_InventoryWidget_C_BndEvt__Btn_Ship_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__Btn_ShipCustomise_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::BndEvt__Btn_ShipCustomise_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__Btn_ShipCustomise_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_InventoryWidget_C_BndEvt__Btn_ShipCustomise_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__CreateRecipe_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::BndEvt__CreateRecipe_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__CreateRecipe_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_InventoryWidget_C_BndEvt__CreateRecipe_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__BACKBTN_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::BndEvt__BACKBTN_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__BACKBTN_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_InventoryWidget_C_BndEvt__BACKBTN_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.StartMainMenuEvent
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::StartMainMenuEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.StartMainMenuEvent");
		
		USIGIS_InventoryWidget_C_StartMainMenuEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__Button_170_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::BndEvt__Button_170_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__Button_170_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_InventoryWidget_C_BndEvt__Button_170_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Tick");
		
		USIGIS_InventoryWidget_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.FadeHudBackIn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::FadeHudBackIn(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.FadeHudBackIn");
		
		USIGIS_InventoryWidget_C_FadeHudBackIn_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.RefreshCraftingQue
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::RefreshCraftingQue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.RefreshCraftingQue");
		
		USIGIS_InventoryWidget_C_RefreshCraftingQue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CantCraftEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERecipeFail                                        Reason                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::CantCraftEvent(ERecipeFail Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CantCraftEvent");
		
		USIGIS_InventoryWidget_C_CantCraftEvent_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__Btn_ShipLeft_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::BndEvt__Btn_ShipLeft_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__Btn_ShipLeft_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_InventoryWidget_C_BndEvt__Btn_ShipLeft_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__Btn_ShipRight_K2Node_ComponentBoundEvent_13_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::BndEvt__Btn_ShipRight_K2Node_ComponentBoundEvent_13_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__Btn_ShipRight_K2Node_ComponentBoundEvent_13_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_InventoryWidget_C_BndEvt__Btn_ShipRight_K2Node_ComponentBoundEvent_13_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__WeaponWorkbenchBTN_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::BndEvt__WeaponWorkbenchBTN_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__WeaponWorkbenchBTN_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_InventoryWidget_C_BndEvt__WeaponWorkbenchBTN_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Wpn_Workbench_Opened
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::Wpn_Workbench_Opened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Wpn_Workbench_Opened");
		
		USIGIS_InventoryWidget_C_Wpn_Workbench_Opened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.RefreshWeaponActor
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::RefreshWeaponActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.RefreshWeaponActor");
		
		USIGIS_InventoryWidget_C_RefreshWeaponActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.RefreshWeaponModuleActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAttachmentSlot                                    SlotIn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::RefreshWeaponModuleActor(EAttachmentSlot SlotIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.RefreshWeaponModuleActor");
		
		USIGIS_InventoryWidget_C_RefreshWeaponModuleActor_Params params {};
		params.SlotIn = SlotIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_AttachmentSlotPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAttachmentSlot                                    AttachmentPressed                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::WpnWB_AttachmentSlotPressed(EAttachmentSlot AttachmentPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_AttachmentSlotPressed");
		
		USIGIS_InventoryWidget_C_WpnWB_AttachmentSlotPressed_Params params {};
		params.AttachmentPressed = AttachmentPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_AttachmentItemPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASIGISInventoryItem*                         WpnObjectRef                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        WeaponDTName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EAttachmentSlot                                    WhichAttachSlotFor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::WpnWB_AttachmentItemPressed(class ASIGISInventoryItem* WpnObjectRef, const class FName& WeaponDTName, EAttachmentSlot WhichAttachSlotFor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_AttachmentItemPressed");
		
		USIGIS_InventoryWidget_C_WpnWB_AttachmentItemPressed_Params params {};
		params.WpnObjectRef = WpnObjectRef;
		params.WeaponDTName = WeaponDTName;
		params.WhichAttachSlotFor = WhichAttachSlotFor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WorkbenchWeaponHasBeenSwitched
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASIGISInventoryItem*                         WpnObjectRef                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        WeaponDTName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SelectedInt                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::WorkbenchWeaponHasBeenSwitched(class ASIGISInventoryItem* WpnObjectRef, const class FName& WeaponDTName, int32_t SelectedInt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WorkbenchWeaponHasBeenSwitched");
		
		USIGIS_InventoryWidget_C_WorkbenchWeaponHasBeenSwitched_Params params {};
		params.WpnObjectRef = WpnObjectRef;
		params.WeaponDTName = WeaponDTName;
		params.SelectedInt = SelectedInt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_RemoveAttachmentItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAttachmentSlot                                    WhichAttachment                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::WpnWB_RemoveAttachmentItem(EAttachmentSlot WhichAttachment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_RemoveAttachmentItem");
		
		USIGIS_InventoryWidget_C_WpnWB_RemoveAttachmentItem_Params params {};
		params.WhichAttachment = WhichAttachment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__Btn_AttachmentsGoBack_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::BndEvt__Btn_AttachmentsGoBack_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__Btn_AttachmentsGoBack_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_InventoryWidget_C_BndEvt__Btn_AttachmentsGoBack_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Hangar_Menu_Opened
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::Hangar_Menu_Opened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Hangar_Menu_Opened");
		
		USIGIS_InventoryWidget_C_Hangar_Menu_Opened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Hangar_ShipHasBeenSwitched
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASIGISInventoryItem*                         ShipObjectRef                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ShipDTname                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      FrigID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      ShipName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               IsStarterShip                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_InventoryWidget_C::Hangar_ShipHasBeenSwitched(class ASIGISInventoryItem* ShipObjectRef, const class FName& ShipDTname, const class FString& FrigID, const class FString& ShipName, bool IsStarterShip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Hangar_ShipHasBeenSwitched");
		
		USIGIS_InventoryWidget_C_Hangar_ShipHasBeenSwitched_Params params {};
		params.ShipObjectRef = ShipObjectRef;
		params.ShipDTname = ShipDTname;
		params.FrigID = FrigID;
		params.ShipName = ShipName;
		params.IsStarterShip = IsStarterShip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_AttachmentSlotPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EShipAttachmentSlot                                WhichShipSlot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::Ship_AttachmentSlotPressed(EShipAttachmentSlot WhichShipSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_AttachmentSlotPressed");
		
		USIGIS_InventoryWidget_C_Ship_AttachmentSlotPressed_Params params {};
		params.WhichShipSlot = WhichShipSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_AttachmentItemPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASIGISInventoryItem*                         FromWhichSlot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ItemDTrowName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EShipAttachmentSlot                                WhichAttachSlotFor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::Ship_AttachmentItemPressed(class ASIGISInventoryItem* FromWhichSlot, const class FName& ItemDTrowName, EShipAttachmentSlot WhichAttachSlotFor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_AttachmentItemPressed");
		
		USIGIS_InventoryWidget_C_Ship_AttachmentItemPressed_Params params {};
		params.FromWhichSlot = FromWhichSlot;
		params.ItemDTrowName = ItemDTrowName;
		params.WhichAttachSlotFor = WhichAttachSlotFor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_RemoveAttachmentItemPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EShipAttachmentSlot                                FromWhichSlot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::Ship_RemoveAttachmentItemPressed(EShipAttachmentSlot FromWhichSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_RemoveAttachmentItemPressed");
		
		USIGIS_InventoryWidget_C_Ship_RemoveAttachmentItemPressed_Params params {};
		params.FromWhichSlot = FromWhichSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.RefreshFrigateActor
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::RefreshFrigateActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.RefreshFrigateActor");
		
		USIGIS_InventoryWidget_C_RefreshFrigateActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.RefreshFrigateModuleActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EShipAttachmentSlot                                SlotIn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::RefreshFrigateModuleActor(EShipAttachmentSlot SlotIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.RefreshFrigateModuleActor");
		
		USIGIS_InventoryWidget_C_RefreshFrigateModuleActor_Params params {};
		params.SlotIn = SlotIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.SoldItem
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::SoldItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.SoldItem");
		
		USIGIS_InventoryWidget_C_SoldItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.SuccessfulBoughtItem
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::SuccessfulBoughtItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.SuccessfulBoughtItem");
		
		USIGIS_InventoryWidget_C_SuccessfulBoughtItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.NotEnoughMoney
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::NotEnoughMoney()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.NotEnoughMoney");
		
		USIGIS_InventoryWidget_C_NotEnoughMoney_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WeaponWorkBenchRightClickPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ItemUUID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::WeaponWorkBenchRightClickPressed(const class FString& ItemUUID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WeaponWorkBenchRightClickPressed");
		
		USIGIS_InventoryWidget_C_WeaponWorkBenchRightClickPressed_Params params {};
		params.ItemUUID = ItemUUID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Force_WpnAttachRemove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAttachmentSlot                                    RemoveWhichAttach                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::Force_WpnAttachRemove(EAttachmentSlot RemoveWhichAttach)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Force_WpnAttachRemove");
		
		USIGIS_InventoryWidget_C_Force_WpnAttachRemove_Params params {};
		params.RemoveWhichAttach = RemoveWhichAttach;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_5_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::BndEvt__MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_5_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_5_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_InventoryWidget_C_BndEvt__MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_5_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__MM_GenericSmallBtn01_GoBack_Shipattachments_K2Node_ComponentBoundEvent_17_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::BndEvt__MM_GenericSmallBtn01_GoBack_Shipattachments_K2Node_ComponentBoundEvent_17_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__MM_GenericSmallBtn01_GoBack_Shipattachments_K2Node_ComponentBoundEvent_17_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_InventoryWidget_C_BndEvt__MM_GenericSmallBtn01_GoBack_Shipattachments_K2Node_ComponentBoundEvent_17_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__MM_GenericSmallBtn01_2_K2Node_ComponentBoundEvent_18_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::BndEvt__MM_GenericSmallBtn01_2_K2Node_ComponentBoundEvent_18_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__MM_GenericSmallBtn01_2_K2Node_ComponentBoundEvent_18_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_InventoryWidget_C_BndEvt__MM_GenericSmallBtn01_2_K2Node_ComponentBoundEvent_18_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Shop_Menu_Opened
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::Shop_Menu_Opened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Shop_Menu_Opened");
		
		USIGIS_InventoryWidget_C_Shop_Menu_Opened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Craft_TabFilterPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FilterWhichType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::Craft_TabFilterPressed(const class FString& FilterWhichType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Craft_TabFilterPressed");
		
		USIGIS_InventoryWidget_C_Craft_TabFilterPressed_Params params {};
		params.FilterWhichType = FilterWhichType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__MM_GenericLargeBtn01_K2Node_ComponentBoundEvent_20_GenericLargeBtn_Pressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::BndEvt__MM_GenericLargeBtn01_K2Node_ComponentBoundEvent_20_GenericLargeBtn_Pressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__MM_GenericLargeBtn01_K2Node_ComponentBoundEvent_20_GenericLargeBtn_Pressed__DelegateSignature");
		
		USIGIS_InventoryWidget_C_BndEvt__MM_GenericLargeBtn01_K2Node_ComponentBoundEvent_20_GenericLargeBtn_Pressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CraftRecipeUnlockRequirment_SoftLoad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkillGenericIcon_Widget_C*                  WidgetToFillIn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::CraftRecipeUnlockRequirment_SoftLoad(class USkillGenericIcon_Widget_C* WidgetToFillIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CraftRecipeUnlockRequirment_SoftLoad");
		
		USIGIS_InventoryWidget_C_CraftRecipeUnlockRequirment_SoftLoad_Params params {};
		params.WidgetToFillIn = WidgetToFillIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CraftRecipe_GoToReqSkill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CraftType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            Recipe_ID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::CraftRecipe_GoToReqSkill(const class FString& CraftType, int32_t Recipe_ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CraftRecipe_GoToReqSkill");
		
		USIGIS_InventoryWidget_C_CraftRecipe_GoToReqSkill_Params params {};
		params.CraftType = CraftType;
		params.Recipe_ID = Recipe_ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__CreateRecipe_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::BndEvt__CreateRecipe_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__CreateRecipe_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature");
		
		USIGIS_InventoryWidget_C_BndEvt__CreateRecipe_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__CreateRecipe_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::BndEvt__CreateRecipe_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__CreateRecipe_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature");
		
		USIGIS_InventoryWidget_C_BndEvt__CreateRecipe_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CraftingWidgetpressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCraftingWidget*                             ActiveWid                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::CraftingWidgetpressed(class UCraftingWidget* ActiveWid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CraftingWidgetpressed");
		
		USIGIS_InventoryWidget_C_CraftingWidgetpressed_Params params {};
		params.ActiveWid = ActiveWid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.RecipeUnlocked_Popup
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::RecipeUnlocked_Popup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.RecipeUnlocked_Popup");
		
		USIGIS_InventoryWidget_C_RecipeUnlocked_Popup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__MM_GenericTabBtn01_K2Node_ComponentBoundEvent_25_ButtonHasBeenPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      WhatPressed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::BndEvt__MM_GenericTabBtn01_K2Node_ComponentBoundEvent_25_ButtonHasBeenPressed__DelegateSignature(const class FString& WhatPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__MM_GenericTabBtn01_K2Node_ComponentBoundEvent_25_ButtonHasBeenPressed__DelegateSignature");
		
		USIGIS_InventoryWidget_C_BndEvt__MM_GenericTabBtn01_K2Node_ComponentBoundEvent_25_ButtonHasBeenPressed__DelegateSignature_Params params {};
		params.WhatPressed = WhatPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__MM_GenericTabBtn01_56_K2Node_ComponentBoundEvent_26_ButtonHasBeenPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      WhatPressed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::BndEvt__MM_GenericTabBtn01_56_K2Node_ComponentBoundEvent_26_ButtonHasBeenPressed__DelegateSignature(const class FString& WhatPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__MM_GenericTabBtn01_56_K2Node_ComponentBoundEvent_26_ButtonHasBeenPressed__DelegateSignature");
		
		USIGIS_InventoryWidget_C_BndEvt__MM_GenericTabBtn01_56_K2Node_ComponentBoundEvent_26_ButtonHasBeenPressed__DelegateSignature_Params params {};
		params.WhatPressed = WhatPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ForceSetEquip_AppreaanceChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_InvEquipmentStates                               Current_InvEquipmentState                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::ForceSetEquip_AppreaanceChange(E_InvEquipmentStates Current_InvEquipmentState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ForceSetEquip_AppreaanceChange");
		
		USIGIS_InventoryWidget_C_ForceSetEquip_AppreaanceChange_Params params {};
		params.Current_InvEquipmentState = Current_InvEquipmentState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Appearance_FilterHasChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECosmeticSlot                                      WhichBodyPart                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::Appearance_FilterHasChanged(ECosmeticSlot WhichBodyPart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Appearance_FilterHasChanged");
		
		USIGIS_InventoryWidget_C_Appearance_FilterHasChanged_Params params {};
		params.WhichBodyPart = WhichBodyPart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.OpenTheGiftMenu
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::OpenTheGiftMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.OpenTheGiftMenu");
		
		USIGIS_InventoryWidget_C_OpenTheGiftMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.RefreshMenuPlayerActor
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::RefreshMenuPlayerActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.RefreshMenuPlayerActor");
		
		USIGIS_InventoryWidget_C_RefreshMenuPlayerActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Force_RefreshPlayerLook
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::Force_RefreshPlayerLook()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Force_RefreshPlayerLook");
		
		USIGIS_InventoryWidget_C_Force_RefreshPlayerLook_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__Btn_TempGiftGive_K2Node_ComponentBoundEvent_23_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::BndEvt__Btn_TempGiftGive_K2Node_ComponentBoundEvent_23_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__Btn_TempGiftGive_K2Node_ComponentBoundEvent_23_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_InventoryWidget_C_BndEvt__Btn_TempGiftGive_K2Node_ComponentBoundEvent_23_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.OnItemBPLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ActorLoaded                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::OnItemBPLoaded(class AActor* ActorLoaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.OnItemBPLoaded");
		
		USIGIS_InventoryWidget_C_OnItemBPLoaded_Params params {};
		params.ActorLoaded = ActorLoaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__Btn_TempGiftGive_1_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::BndEvt__Btn_TempGiftGive_1_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__Btn_TempGiftGive_1_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature");
		
		USIGIS_InventoryWidget_C_BndEvt__Btn_TempGiftGive_1_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.AppearanceBtnPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Part_DataTableName                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        DT_ClothingSetUIName                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::AppearanceBtnPressed(const class FName& Part_DataTableName, const class FName& DT_ClothingSetUIName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.AppearanceBtnPressed");
		
		USIGIS_InventoryWidget_C_AppearanceBtnPressed_Params params {};
		params.Part_DataTableName = Part_DataTableName;
		params.DT_ClothingSetUIName = DT_ClothingSetUIName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__Btn_TempGiftGive_2_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::BndEvt__Btn_TempGiftGive_2_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__Btn_TempGiftGive_2_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature");
		
		USIGIS_InventoryWidget_C_BndEvt__Btn_TempGiftGive_2_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__MM_GenericLargeBtn01_1_K2Node_ComponentBoundEvent_31_GenericLargeBtn_Pressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::BndEvt__MM_GenericLargeBtn01_1_K2Node_ComponentBoundEvent_31_GenericLargeBtn_Pressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__MM_GenericLargeBtn01_1_K2Node_ComponentBoundEvent_31_GenericLargeBtn_Pressed__DelegateSignature");
		
		USIGIS_InventoryWidget_C_BndEvt__MM_GenericLargeBtn01_1_K2Node_ComponentBoundEvent_31_GenericLargeBtn_Pressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.LobbyHasBeenCreatedOrJoined_SendPlayersCharLook
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CrewUpdate                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_InventoryWidget_C::LobbyHasBeenCreatedOrJoined_SendPlayersCharLook(bool CrewUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.LobbyHasBeenCreatedOrJoined_SendPlayersCharLook");
		
		USIGIS_InventoryWidget_C_LobbyHasBeenCreatedOrJoined_SendPlayersCharLook_Params params {};
		params.CrewUpdate = CrewUpdate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.AppearanceMenu_OPENED
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::AppearanceMenu_OPENED()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.AppearanceMenu_OPENED");
		
		USIGIS_InventoryWidget_C_AppearanceMenu_OPENED_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.FORCE_AppearanceMeunuRefresh
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::FORCE_AppearanceMeunuRefresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.FORCE_AppearanceMeunuRefresh");
		
		USIGIS_InventoryWidget_C_FORCE_AppearanceMeunuRefresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.GetStatInfoReturn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               validstats                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_InventoryWidget_C::GetStatInfoReturn(bool validstats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.GetStatInfoReturn");
		
		USIGIS_InventoryWidget_C_GetStatInfoReturn_Params params {};
		params.validstats = validstats;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ForceStatsToUpdate
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::ForceStatsToUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ForceStatsToUpdate");
		
		USIGIS_InventoryWidget_C_ForceStatsToUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__Btn_DevChangeShopKeep_K2Node_ComponentBoundEvent_32_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::BndEvt__Btn_DevChangeShopKeep_K2Node_ComponentBoundEvent_32_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__Btn_DevChangeShopKeep_K2Node_ComponentBoundEvent_32_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_InventoryWidget_C_BndEvt__Btn_DevChangeShopKeep_K2Node_ComponentBoundEvent_32_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ShopkeeperHasBeenRefreshed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ToWhichShopkeepID                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::ShopkeeperHasBeenRefreshed(int32_t ToWhichShopkeepID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ShopkeeperHasBeenRefreshed");
		
		USIGIS_InventoryWidget_C_ShopkeeperHasBeenRefreshed_Params params {};
		params.ToWhichShopkeepID = ToWhichShopkeepID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_MM_GenericSmallBtn01_115_K2Node_ComponentBoundEvent_33_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::BndEvt__SIGIS_InventoryWidget_MM_GenericSmallBtn01_115_K2Node_ComponentBoundEvent_33_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_MM_GenericSmallBtn01_115_K2Node_ComponentBoundEvent_33_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_InventoryWidget_C_BndEvt__SIGIS_InventoryWidget_MM_GenericSmallBtn01_115_K2Node_ComponentBoundEvent_33_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.OverFrigateCapacity
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::OverFrigateCapacity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.OverFrigateCapacity");
		
		USIGIS_InventoryWidget_C_OverFrigateCapacity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.DeleteAShip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ShipDataTableName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      ToDelete_FrigID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            MoneyToGive                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::DeleteAShip(const class FName& ShipDataTableName, const class FString& ToDelete_FrigID, int32_t MoneyToGive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.DeleteAShip");
		
		USIGIS_InventoryWidget_C_DeleteAShip_Params params {};
		params.ShipDataTableName = ShipDataTableName;
		params.ToDelete_FrigID = ToDelete_FrigID;
		params.MoneyToGive = MoneyToGive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ClosedShipManagementMenu
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::ClosedShipManagementMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ClosedShipManagementMenu");
		
		USIGIS_InventoryWidget_C_ClosedShipManagementMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Check_IFHaveTooManyShips
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::Check_IFHaveTooManyShips()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Check_IFHaveTooManyShips");
		
		USIGIS_InventoryWidget_C_Check_IFHaveTooManyShips_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.JoinedCrewHideShipStash
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::JoinedCrewHideShipStash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.JoinedCrewHideShipStash");
		
		USIGIS_InventoryWidget_C_JoinedCrewHideShipStash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.LeftCrewShowShipStash
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::LeftCrewShowShipStash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.LeftCrewShowShipStash");
		
		USIGIS_InventoryWidget_C_LeftCrewShowShipStash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Appearance_VoiceBtnPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        VoiceDTname                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::Appearance_VoiceBtnPressed(const class FName& VoiceDTname)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Appearance_VoiceBtnPressed");
		
		USIGIS_InventoryWidget_C_Appearance_VoiceBtnPressed_Params params {};
		params.VoiceDTname = VoiceDTname;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.FORCE_WorkbenchRefresh
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::FORCE_WorkbenchRefresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.FORCE_WorkbenchRefresh");
		
		USIGIS_InventoryWidget_C_FORCE_WorkbenchRefresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Missions_OPENED
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::Missions_OPENED()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Missions_OPENED");
		
		USIGIS_InventoryWidget_C_Missions_OPENED_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.StartedAContract
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::StartedAContract()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.StartedAContract");
		
		USIGIS_InventoryWidget_C_StartedAContract_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CollectedAContract
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::CollectedAContract()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CollectedAContract");
		
		USIGIS_InventoryWidget_C_CollectedAContract_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.UpDateFactionsAndContracts
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::UpDateFactionsAndContracts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.UpDateFactionsAndContracts");
		
		USIGIS_InventoryWidget_C_UpDateFactionsAndContracts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_Btn_DebugStartMission_K2Node_ComponentBoundEvent_28_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::BndEvt__SIGIS_InventoryWidget_Btn_DebugStartMission_K2Node_ComponentBoundEvent_28_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_Btn_DebugStartMission_K2Node_ComponentBoundEvent_28_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_InventoryWidget_C_BndEvt__SIGIS_InventoryWidget_Btn_DebugStartMission_K2Node_ComponentBoundEvent_28_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_Btn_DebugIncrementMission_K2Node_ComponentBoundEvent_34_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::BndEvt__SIGIS_InventoryWidget_Btn_DebugIncrementMission_K2Node_ComponentBoundEvent_34_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_Btn_DebugIncrementMission_K2Node_ComponentBoundEvent_34_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_InventoryWidget_C_BndEvt__SIGIS_InventoryWidget_Btn_DebugIncrementMission_K2Node_ComponentBoundEvent_34_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_Btn_DebugClearMissions_K2Node_ComponentBoundEvent_35_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::BndEvt__SIGIS_InventoryWidget_Btn_DebugClearMissions_K2Node_ComponentBoundEvent_35_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_Btn_DebugClearMissions_K2Node_ComponentBoundEvent_35_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_InventoryWidget_C_BndEvt__SIGIS_InventoryWidget_Btn_DebugClearMissions_K2Node_ComponentBoundEvent_35_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.RefreshAllMissionMenu
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::RefreshAllMissionMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.RefreshAllMissionMenu");
		
		USIGIS_InventoryWidget_C_RefreshAllMissionMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_Btn_DebugStartMission_2_K2Node_ComponentBoundEvent_36_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::BndEvt__SIGIS_InventoryWidget_Btn_DebugStartMission_2_K2Node_ComponentBoundEvent_36_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_Btn_DebugStartMission_2_K2Node_ComponentBoundEvent_36_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_InventoryWidget_C_BndEvt__SIGIS_InventoryWidget_Btn_DebugStartMission_2_K2Node_ComponentBoundEvent_36_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ContractResetTimer
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::ContractResetTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ContractResetTimer");
		
		USIGIS_InventoryWidget_C_ContractResetTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_MM_GenericSmallBtn01_StashIncrease_K2Node_ComponentBoundEvent_37_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::BndEvt__SIGIS_InventoryWidget_MM_GenericSmallBtn01_StashIncrease_K2Node_ComponentBoundEvent_37_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_MM_GenericSmallBtn01_StashIncrease_K2Node_ComponentBoundEvent_37_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_InventoryWidget_C_BndEvt__SIGIS_InventoryWidget_MM_GenericSmallBtn01_StashIncrease_K2Node_ComponentBoundEvent_37_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_MM_GenericSmallBtn01_ShipsPrestigeUnlocks_K2Node_ComponentBoundEvent_40_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::BndEvt__SIGIS_InventoryWidget_MM_GenericSmallBtn01_ShipsPrestigeUnlocks_K2Node_ComponentBoundEvent_40_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_MM_GenericSmallBtn01_ShipsPrestigeUnlocks_K2Node_ComponentBoundEvent_40_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_InventoryWidget_C_BndEvt__SIGIS_InventoryWidget_MM_GenericSmallBtn01_ShipsPrestigeUnlocks_K2Node_ComponentBoundEvent_40_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_Btn_PayToGetNewContracts_K2Node_ComponentBoundEvent_38_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::BndEvt__SIGIS_InventoryWidget_Btn_PayToGetNewContracts_K2Node_ComponentBoundEvent_38_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_Btn_PayToGetNewContracts_K2Node_ComponentBoundEvent_38_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_InventoryWidget_C_BndEvt__SIGIS_InventoryWidget_Btn_PayToGetNewContracts_K2Node_ComponentBoundEvent_38_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.GoingBackToPlayMenu
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::GoingBackToPlayMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.GoingBackToPlayMenu");
		
		USIGIS_InventoryWidget_C_GoingBackToPlayMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_ScrapBtn_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::BndEvt__SIGIS_InventoryWidget_ScrapBtn_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_ScrapBtn_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature");
		
		USIGIS_InventoryWidget_C_BndEvt__SIGIS_InventoryWidget_ScrapBtn_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_ScrapBtn_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::BndEvt__SIGIS_InventoryWidget_ScrapBtn_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_ScrapBtn_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature");
		
		USIGIS_InventoryWidget_C_BndEvt__SIGIS_InventoryWidget_ScrapBtn_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_RepairBtn_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::BndEvt__SIGIS_InventoryWidget_RepairBtn_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_RepairBtn_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature");
		
		USIGIS_InventoryWidget_C_BndEvt__SIGIS_InventoryWidget_RepairBtn_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_RepairBtn_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::BndEvt__SIGIS_InventoryWidget_RepairBtn_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_RepairBtn_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature");
		
		USIGIS_InventoryWidget_C_BndEvt__SIGIS_InventoryWidget_RepairBtn_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_ColourBtn_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::BndEvt__SIGIS_InventoryWidget_ColourBtn_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_ColourBtn_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature");
		
		USIGIS_InventoryWidget_C_BndEvt__SIGIS_InventoryWidget_ColourBtn_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_ColourBtn_K2Node_ComponentBoundEvent_39_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::BndEvt__SIGIS_InventoryWidget_ColourBtn_K2Node_ComponentBoundEvent_39_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_ColourBtn_K2Node_ComponentBoundEvent_39_OnButtonHoverEvent__DelegateSignature");
		
		USIGIS_InventoryWidget_C_BndEvt__SIGIS_InventoryWidget_ColourBtn_K2Node_ComponentBoundEvent_39_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ScrapAttemptResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SuccessFull                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_InventoryWidget_C::ScrapAttemptResult(const class FName& Name, bool SuccessFull)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ScrapAttemptResult");
		
		USIGIS_InventoryWidget_C_ScrapAttemptResult_Params params {};
		params.Name = Name;
		params.SuccessFull = SuccessFull;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Force_HidePotentialScrapInfo
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::Force_HidePotentialScrapInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Force_HidePotentialScrapInfo");
		
		USIGIS_InventoryWidget_C_Force_HidePotentialScrapInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ItemDragBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASIGISInventoryItem*                         Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::ItemDragBegin(class ASIGISInventoryItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ItemDragBegin");
		
		USIGIS_InventoryWidget_C_ItemDragBegin_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ItemDragEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASIGISInventoryItem*                         Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::ItemDragEnd(class ASIGISInventoryItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ItemDragEnd");
		
		USIGIS_InventoryWidget_C_ItemDragEnd_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CoreMissionsOpened
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::CoreMissionsOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CoreMissionsOpened");
		
		USIGIS_InventoryWidget_C_CoreMissionsOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.UpdateChapterAndContracts
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::UpdateChapterAndContracts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.UpdateChapterAndContracts");
		
		USIGIS_InventoryWidget_C_UpdateChapterAndContracts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.StartedAChapterContract
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::StartedAChapterContract()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.StartedAChapterContract");
		
		USIGIS_InventoryWidget_C_StartedAChapterContract_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CollectedChapterContract
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::CollectedChapterContract()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CollectedChapterContract");
		
		USIGIS_InventoryWidget_C_CollectedChapterContract_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CoreMissionButtonPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FChapterMissionUI                           PressedMissionInfo                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               ShouldPlaySound                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_InventoryWidget_C::CoreMissionButtonPressed(const struct FChapterMissionUI& PressedMissionInfo, bool ShouldPlaySound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CoreMissionButtonPressed");
		
		USIGIS_InventoryWidget_C_CoreMissionButtonPressed_Params params {};
		params.PressedMissionInfo = PressedMissionInfo;
		params.ShouldPlaySound = ShouldPlaySound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_Btn_CoreMissionComplete_K2Node_ComponentBoundEvent_41_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::BndEvt__SIGIS_InventoryWidget_Btn_CoreMissionComplete_K2Node_ComponentBoundEvent_41_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_Btn_CoreMissionComplete_K2Node_ComponentBoundEvent_41_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_InventoryWidget_C_BndEvt__SIGIS_InventoryWidget_Btn_CoreMissionComplete_K2Node_ComponentBoundEvent_41_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_Btn_CoreMissionComplete_1_K2Node_ComponentBoundEvent_42_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::BndEvt__SIGIS_InventoryWidget_Btn_CoreMissionComplete_1_K2Node_ComponentBoundEvent_42_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_Btn_CoreMissionComplete_1_K2Node_ComponentBoundEvent_42_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_InventoryWidget_C_BndEvt__SIGIS_InventoryWidget_Btn_CoreMissionComplete_1_K2Node_ComponentBoundEvent_42_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_Btn_DebugCoreMission_ForceNextMission_K2Node_ComponentBoundEvent_43_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::BndEvt__SIGIS_InventoryWidget_Btn_DebugCoreMission_ForceNextMission_K2Node_ComponentBoundEvent_43_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_Btn_DebugCoreMission_ForceNextMission_K2Node_ComponentBoundEvent_43_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_InventoryWidget_C_BndEvt__SIGIS_InventoryWidget_Btn_DebugCoreMission_ForceNextMission_K2Node_ComponentBoundEvent_43_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_Btn_DebugCoreMission_AddProgress_K2Node_ComponentBoundEvent_44_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::BndEvt__SIGIS_InventoryWidget_Btn_DebugCoreMission_AddProgress_K2Node_ComponentBoundEvent_44_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_Btn_DebugCoreMission_AddProgress_K2Node_ComponentBoundEvent_44_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_InventoryWidget_C_BndEvt__SIGIS_InventoryWidget_Btn_DebugCoreMission_AddProgress_K2Node_ComponentBoundEvent_44_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CoreMissionRefresh
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::CoreMissionRefresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CoreMissionRefresh");
		
		USIGIS_InventoryWidget_C_CoreMissionRefresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_Button_640_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::BndEvt__SIGIS_InventoryWidget_Button_640_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_Button_640_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature");
		
		USIGIS_InventoryWidget_C_BndEvt__SIGIS_InventoryWidget_Button_640_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.OpenFullDailyMissions
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::OpenFullDailyMissions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.OpenFullDailyMissions");
		
		USIGIS_InventoryWidget_C_OpenFullDailyMissions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_MM_GenericLargeBtn01_K2Node_ComponentBoundEvent_46_GenericLargeBtn_Pressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::BndEvt__SIGIS_InventoryWidget_MM_GenericLargeBtn01_K2Node_ComponentBoundEvent_46_GenericLargeBtn_Pressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_MM_GenericLargeBtn01_K2Node_ComponentBoundEvent_46_GenericLargeBtn_Pressed__DelegateSignature");
		
		USIGIS_InventoryWidget_C_BndEvt__SIGIS_InventoryWidget_MM_GenericLargeBtn01_K2Node_ComponentBoundEvent_46_GenericLargeBtn_Pressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.PlaySoftRef_2DSound
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::PlaySoftRef_2DSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.PlaySoftRef_2DSound");
		
		USIGIS_InventoryWidget_C_PlaySoftRef_2DSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CheckIfHaveDLC
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::CheckIfHaveDLC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CheckIfHaveDLC");
		
		USIGIS_InventoryWidget_C_CheckIfHaveDLC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_RightClickMenuOpened
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      WpnUIID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::WpnWB_RightClickMenuOpened(const class FString& WpnUIID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_RightClickMenuOpened");
		
		USIGIS_InventoryWidget_C_WpnWB_RightClickMenuOpened_Params params {};
		params.WpnUIID = WpnUIID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ExecuteUbergraph_SIGIS_InventoryWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::ExecuteUbergraph_SIGIS_InventoryWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ExecuteUbergraph_SIGIS_InventoryWidget");
		
		USIGIS_InventoryWidget_C_ExecuteUbergraph_SIGIS_InventoryWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ED_StartedAContract__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::ED_StartedAContract__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ED_StartedAContract__DelegateSignature");
		
		USIGIS_InventoryWidget_C_ED_StartedAContract__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ED_CollectedAContract__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::ED_CollectedAContract__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ED_CollectedAContract__DelegateSignature");
		
		USIGIS_InventoryWidget_C_ED_CollectedAContract__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ED_UpdateFactionsAndContracts__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::ED_UpdateFactionsAndContracts__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ED_UpdateFactionsAndContracts__DelegateSignature");
		
		USIGIS_InventoryWidget_C_ED_UpdateFactionsAndContracts__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ForceAMM_TabsChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMenuState                                         ForceToWhichMenu                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_InventoryWidget_C::ForceAMM_TabsChange__DelegateSignature(EMenuState ForceToWhichMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ForceAMM_TabsChange__DelegateSignature");
		
		USIGIS_InventoryWidget_C_ForceAMM_TabsChange__DelegateSignature_Params params {};
		params.ForceToWhichMenu = ForceToWhichMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CraftQue_IsSomethingReadyToCollect__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReadyToCollect                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_InventoryWidget_C::CraftQue_IsSomethingReadyToCollect__DelegateSignature(bool ReadyToCollect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CraftQue_IsSomethingReadyToCollect__DelegateSignature");
		
		USIGIS_InventoryWidget_C_CraftQue_IsSomethingReadyToCollect__DelegateSignature_Params params {};
		params.ReadyToCollect = ReadyToCollect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.MoneyHasChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_InventoryWidget_C::MoneyHasChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.MoneyHasChanged__DelegateSignature");
		
		USIGIS_InventoryWidget_C_MoneyHasChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGIS_InventoryWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGIS_InventoryWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SIGIS_InventoryWidget.SIGIS_InventoryWidget_C");
		return ptr;
	}

}


