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
	 * 		Name   -> Function MatchHUD.MatchHUD_C.AudioDuckingForInInventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ForceOff                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ForceON                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMatchHUD_C::AudioDuckingForInInventory(bool ForceOff, bool ForceON)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchHUD.MatchHUD_C.AudioDuckingForInInventory");
		
		AMatchHUD_C_AudioDuckingForInInventory_Params params {};
		params.ForceOff = ForceOff;
		params.ForceON = ForceON;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchHUD.MatchHUD_C.CenterOutMouse
	 * 		Flags  -> ()
	 */
	void AMatchHUD_C::CenterOutMouse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchHUD.MatchHUD_C.CenterOutMouse");
		
		AMatchHUD_C_CenterOutMouse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchHUD.MatchHUD_C.IsInventoryOpen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InventoryIsVisible                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMatchHUD_C::IsInventoryOpen(bool* InventoryIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchHUD.MatchHUD_C.IsInventoryOpen");
		
		AMatchHUD_C_IsInventoryOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InventoryIsVisible != nullptr)
			*InventoryIsVisible = params.InventoryIsVisible;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchHUD.MatchHUD_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AMatchHUD_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchHUD.MatchHUD_C.Timeline_0__FinishedFunc");
		
		AMatchHUD_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchHUD.MatchHUD_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AMatchHUD_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchHUD.MatchHUD_C.Timeline_0__UpdateFunc");
		
		AMatchHUD_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchHUD.MatchHUD_C.TriggerExitMenu_ForceClose
	 * 		Flags  -> ()
	 */
	void AMatchHUD_C::TriggerExitMenu_ForceClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchHUD.MatchHUD_C.TriggerExitMenu_ForceClose");
		
		AMatchHUD_C_TriggerExitMenu_ForceClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchHUD.MatchHUD_C.BP_ShowInfoEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyAndItemType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               HasHold                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMatchHUD_C::BP_ShowInfoEvent(const class FString& KeyAndItemType, bool HasHold)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchHUD.MatchHUD_C.BP_ShowInfoEvent");
		
		AMatchHUD_C_BP_ShowInfoEvent_Params params {};
		params.KeyAndItemType = KeyAndItemType;
		params.HasHold = HasHold;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchHUD.MatchHUD_C.BP_HideInfoEvent
	 * 		Flags  -> ()
	 */
	void AMatchHUD_C::BP_HideInfoEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchHUD.MatchHUD_C.BP_HideInfoEvent");
		
		AMatchHUD_C_BP_HideInfoEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchHUD.MatchHUD_C.ToggledInventory
	 * 		Flags  -> ()
	 */
	void AMatchHUD_C::ToggledInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchHUD.MatchHUD_C.ToggledInventory");
		
		AMatchHUD_C_ToggledInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchHUD.MatchHUD_C.UI_TransitioningState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPlayerTranisitionState                            From                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EPlayerTranisitionState                            To                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMatchHUD_C::UI_TransitioningState(EPlayerTranisitionState From, EPlayerTranisitionState To)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchHUD.MatchHUD_C.UI_TransitioningState");
		
		AMatchHUD_C_UI_TransitioningState_Params params {};
		params.From = From;
		params.To = To;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchHUD.MatchHUD_C.HudTakenDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DamageTaken                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDamageEvent                                DamageEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class APawn*                                       PawnInstigator                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMatchHUD_C::HudTakenDamage(float DamageTaken, const struct FDamageEvent& DamageEvent, class APawn* PawnInstigator, int32_t Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchHUD.MatchHUD_C.HudTakenDamage");
		
		AMatchHUD_C_HudTakenDamage_Params params {};
		params.DamageTaken = DamageTaken;
		params.DamageEvent = DamageEvent;
		params.PawnInstigator = PawnInstigator;
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchHUD.MatchHUD_C.HudGivenDamage
	 * 		Flags  -> ()
	 */
	void AMatchHUD_C::HudGivenDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchHUD.MatchHUD_C.HudGivenDamage");
		
		AMatchHUD_C_HudGivenDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchHUD.MatchHUD_C.F_ForinventoryWasPresed
	 * 		Flags  -> ()
	 */
	void AMatchHUD_C::F_ForinventoryWasPresed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchHUD.MatchHUD_C.F_ForinventoryWasPresed");
		
		AMatchHUD_C_F_ForinventoryWasPresed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchHUD.MatchHUD_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AMatchHUD_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchHUD.MatchHUD_C.ReceiveBeginPlay");
		
		AMatchHUD_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchHUD.MatchHUD_C.OnKilledEvent
	 * 		Flags  -> ()
	 */
	void AMatchHUD_C::OnKilledEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchHUD.MatchHUD_C.OnKilledEvent");
		
		AMatchHUD_C_OnKilledEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchHUD.MatchHUD_C.InventoryOpen
	 * 		Flags  -> ()
	 */
	void AMatchHUD_C::InventoryOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchHUD.MatchHUD_C.InventoryOpen");
		
		AMatchHUD_C_InventoryOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchHUD.MatchHUD_C.InventoryClosed
	 * 		Flags  -> ()
	 */
	void AMatchHUD_C::InventoryClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchHUD.MatchHUD_C.InventoryClosed");
		
		AMatchHUD_C_InventoryClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchHUD.MatchHUD_C.PlayerReadyToDeploy
	 * 		Flags  -> ()
	 */
	void AMatchHUD_C::PlayerReadyToDeploy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchHUD.MatchHUD_C.PlayerReadyToDeploy");
		
		AMatchHUD_C_PlayerReadyToDeploy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchHUD.MatchHUD_C.Trigger_ExitMenu
	 * 		Flags  -> ()
	 */
	void AMatchHUD_C::Trigger_ExitMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchHUD.MatchHUD_C.Trigger_ExitMenu");
		
		AMatchHUD_C_Trigger_ExitMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchHUD.MatchHUD_C.MenuStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMenuState                                         NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMatchHUD_C::MenuStateChanged(EMenuState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchHUD.MatchHUD_C.MenuStateChanged");
		
		AMatchHUD_C_MenuStateChanged_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchHUD.MatchHUD_C.ReceiveDrawHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SizeX                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SizeY                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMatchHUD_C::ReceiveDrawHUD(int32_t SizeX, int32_t SizeY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchHUD.MatchHUD_C.ReceiveDrawHUD");
		
		AMatchHUD_C_ReceiveDrawHUD_Params params {};
		params.SizeX = SizeX;
		params.SizeY = SizeY;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchHUD.MatchHUD_C.ShipHitWhilePlayerInside_HUDEffetcs
	 * 		Flags  -> ()
	 */
	void AMatchHUD_C::ShipHitWhilePlayerInside_HUDEffetcs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchHUD.MatchHUD_C.ShipHitWhilePlayerInside_HUDEffetcs");
		
		AMatchHUD_C_ShipHitWhilePlayerInside_HUDEffetcs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchHUD.MatchHUD_C.LeaveMatch_FadeOutHUD
	 * 		Flags  -> ()
	 */
	void AMatchHUD_C::LeaveMatch_FadeOutHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchHUD.MatchHUD_C.LeaveMatch_FadeOutHUD");
		
		AMatchHUD_C_LeaveMatch_FadeOutHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchHUD.MatchHUD_C.DropPodIsBoosting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsBoosting                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMatchHUD_C::DropPodIsBoosting(bool IsBoosting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchHUD.MatchHUD_C.DropPodIsBoosting");
		
		AMatchHUD_C_DropPodIsBoosting_Params params {};
		params.IsBoosting = IsBoosting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchHUD.MatchHUD_C.StoreEnteringAreaName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        AreaDTName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMatchHUD_C::StoreEnteringAreaName(const class FName& AreaDTName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchHUD.MatchHUD_C.StoreEnteringAreaName");
		
		AMatchHUD_C_StoreEnteringAreaName_Params params {};
		params.AreaDTName = AreaDTName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchHUD.MatchHUD_C.TurretAimLoc_InHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     AimLoc                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  TurretCrosshair_Core                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  TurretCrosshair_Aim                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               TurretIsZoomedIn                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               TurretAimingAtOwnShip                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMatchHUD_C::TurretAimLoc_InHUD(const struct FVector& AimLoc, class UTexture2D* TurretCrosshair_Core, class UTexture2D* TurretCrosshair_Aim, bool TurretIsZoomedIn, bool TurretAimingAtOwnShip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchHUD.MatchHUD_C.TurretAimLoc_InHUD");
		
		AMatchHUD_C_TurretAimLoc_InHUD_Params params {};
		params.AimLoc = AimLoc;
		params.TurretCrosshair_Core = TurretCrosshair_Core;
		params.TurretCrosshair_Aim = TurretCrosshair_Aim;
		params.TurretIsZoomedIn = TurretIsZoomedIn;
		params.TurretAimingAtOwnShip = TurretAimingAtOwnShip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchHUD.MatchHUD_C.StaminaCooldownStarted
	 * 		Flags  -> ()
	 */
	void AMatchHUD_C::StaminaCooldownStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchHUD.MatchHUD_C.StaminaCooldownStarted");
		
		AMatchHUD_C_StaminaCooldownStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchHUD.MatchHUD_C.StaminaCooldownFinished
	 * 		Flags  -> ()
	 */
	void AMatchHUD_C::StaminaCooldownFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchHUD.MatchHUD_C.StaminaCooldownFinished");
		
		AMatchHUD_C_StaminaCooldownFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchHUD.MatchHUD_C.BP_NoSpaceForItem
	 * 		Flags  -> ()
	 */
	void AMatchHUD_C::BP_NoSpaceForItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchHUD.MatchHUD_C.BP_NoSpaceForItem");
		
		AMatchHUD_C_BP_NoSpaceForItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchHUD.MatchHUD_C.CompletelyCloseExitMenu
	 * 		Flags  -> ()
	 */
	void AMatchHUD_C::CompletelyCloseExitMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchHUD.MatchHUD_C.CompletelyCloseExitMenu");
		
		AMatchHUD_C_CompletelyCloseExitMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchHUD.MatchHUD_C.CloseInventoryIfOpen
	 * 		Flags  -> ()
	 */
	void AMatchHUD_C::CloseInventoryIfOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchHUD.MatchHUD_C.CloseInventoryIfOpen");
		
		AMatchHUD_C_CloseInventoryIfOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchHUD.MatchHUD_C.StartedHold
	 * 		Flags  -> ()
	 */
	void AMatchHUD_C::StartedHold()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchHUD.MatchHUD_C.StartedHold");
		
		AMatchHUD_C_StartedHold_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchHUD.MatchHUD_C.EndedHold
	 * 		Flags  -> ()
	 */
	void AMatchHUD_C::EndedHold()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchHUD.MatchHUD_C.EndedHold");
		
		AMatchHUD_C_EndedHold_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchHUD.MatchHUD_C.ExecuteUbergraph_MatchHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMatchHUD_C::ExecuteUbergraph_MatchHUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchHUD.MatchHUD_C.ExecuteUbergraph_MatchHUD");
		
		AMatchHUD_C_ExecuteUbergraph_MatchHUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMatchHUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMatchHUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MatchHUD.MatchHUD_C");
		return ptr;
	}

}


