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
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.IsWeaponBroken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               WeaponisBroken                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Main_Widget_C::IsWeaponBroken(bool* WeaponisBroken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.IsWeaponBroken");
		
		UHUD_Main_Widget_C_IsWeaponBroken_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WeaponisBroken != nullptr)
			*WeaponisBroken = params.WeaponisBroken;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.SetHealthBarAndVisualsCheck
	 * 		Flags  -> ()
	 */
	void UHUD_Main_Widget_C::SetHealthBarAndVisualsCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.SetHealthBarAndVisualsCheck");
		
		UHUD_Main_Widget_C_SetHealthBarAndVisualsCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.FireModeVisuals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShowifValid                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      ItemDTname                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UHUD_Main_Widget_C::FireModeVisuals(bool ShowifValid, const class FString& ItemDTname)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.FireModeVisuals");
		
		UHUD_Main_Widget_C_FireModeVisuals_Params params {};
		params.ShowifValid = ShowifValid;
		params.ItemDTname = ItemDTname;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.GetIsHealingCheckAndVisuals
	 * 		Flags  -> ()
	 */
	void UHUD_Main_Widget_C::GetIsHealingCheckAndVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.GetIsHealingCheckAndVisuals");
		
		UHUD_Main_Widget_C_GetIsHealingCheckAndVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.SetStaminaBarAndVisualsCheck
	 * 		Flags  -> ()
	 */
	void UHUD_Main_Widget_C::SetStaminaBarAndVisualsCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.SetStaminaBarAndVisualsCheck");
		
		UHUD_Main_Widget_C_SetStaminaBarAndVisualsCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.ShouldShowFrigateAbandonShipMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Hull_IsBroken                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Main_Widget_C::ShouldShowFrigateAbandonShipMessage(bool Hull_IsBroken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.ShouldShowFrigateAbandonShipMessage");
		
		UHUD_Main_Widget_C_ShouldShowFrigateAbandonShipMessage_Params params {};
		params.Hull_IsBroken = Hull_IsBroken;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.GetAreaInfoFromDataTable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NoInfoFound                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        Line01                                                     (Parm, OutParm)
	 * 		class FText                                        Line02                                                     (Parm, OutParm)
	 * 		class FText                                        Line03                                                     (Parm, OutParm)
	 */
	void UHUD_Main_Widget_C::GetAreaInfoFromDataTable(bool* NoInfoFound, class FText* Line01, class FText* Line02, class FText* Line03)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.GetAreaInfoFromDataTable");
		
		UHUD_Main_Widget_C_GetAreaInfoFromDataTable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NoInfoFound != nullptr)
			*NoInfoFound = params.NoInfoFound;
		if (Line01 != nullptr)
			*Line01 = params.Line01;
		if (Line02 != nullptr)
			*Line02 = params.Line02;
		if (Line03 != nullptr)
			*Line03 = params.Line03;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.FadeInOutBlack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              FromAlpha                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ToAlpha                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bHoldWhenFinished                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Main_Widget_C::FadeInOutBlack(float FromAlpha, float ToAlpha, float Duration, bool bHoldWhenFinished)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.FadeInOutBlack");
		
		UHUD_Main_Widget_C_FadeInOutBlack_Params params {};
		params.FromAlpha = FromAlpha;
		params.ToAlpha = ToAlpha;
		params.Duration = Duration;
		params.bHoldWhenFinished = bHoldWhenFinished;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.FrigateShowHideHealthBars
	 * 		Flags  -> ()
	 */
	void UHUD_Main_Widget_C::FrigateShowHideHealthBars()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.FrigateShowHideHealthBars");
		
		UHUD_Main_Widget_C_FrigateShowHideHealthBars_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.GetFillUI_ForCurrentShip
	 * 		Flags  -> ()
	 */
	void UHUD_Main_Widget_C::GetFillUI_ForCurrentShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.GetFillUI_ForCurrentShip");
		
		UHUD_Main_Widget_C_GetFillUI_ForCurrentShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.PlayAreaOrShipPopupWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DelayBeforePopup                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        LineOne                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        LineTwo                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        LineThreeDifficulty                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UHUD_Main_Widget_C::PlayAreaOrShipPopupWidget(float DelayBeforePopup, const class FText& LineOne, const class FText& LineTwo, const class FText& LineThreeDifficulty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.PlayAreaOrShipPopupWidget");
		
		UHUD_Main_Widget_C_PlayAreaOrShipPopupWidget_Params params {};
		params.DelayBeforePopup = DelayBeforePopup;
		params.LineOne = LineOne;
		params.LineTwo = LineTwo;
		params.LineThreeDifficulty = LineThreeDifficulty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.SetDropPodUISpeeds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Speed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Main_Widget_C::SetDropPodUISpeeds(int32_t Speed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.SetDropPodUISpeeds");
		
		UHUD_Main_Widget_C_SetDropPodUISpeeds_Params params {};
		params.Speed = Speed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.UpdateDropPodhealth
	 * 		Flags  -> ()
	 */
	void UHUD_Main_Widget_C::UpdateDropPodhealth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.UpdateDropPodhealth");
		
		UHUD_Main_Widget_C_UpdateDropPodhealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.BoostBarValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InPercent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Main_Widget_C::BoostBarValue(float InPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.BoostBarValue");
		
		UHUD_Main_Widget_C_BoostBarValue_Params params {};
		params.InPercent = InPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.DropPodIsBoosting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsBoosting                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Main_Widget_C::DropPodIsBoosting(bool IsBoosting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.DropPodIsBoosting");
		
		UHUD_Main_Widget_C_DropPodIsBoosting_Params params {};
		params.IsBoosting = IsBoosting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.ShipHitWhileInsideEffects
	 * 		Flags  -> ()
	 */
	void UHUD_Main_Widget_C::ShipHitWhileInsideEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.ShipHitWhileInsideEffects");
		
		UHUD_Main_Widget_C_ShipHitWhileInsideEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.UpdateHealthOfSpecificPart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSystemHealth                               SystemHealth                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UHUD_Main_Widget_C::UpdateHealthOfSpecificPart(const struct FSystemHealth& SystemHealth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.UpdateHealthOfSpecificPart");
		
		UHUD_Main_Widget_C_UpdateHealthOfSpecificPart_Params params {};
		params.SystemHealth = SystemHealth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.UpdateFrigateSystemsHealth
	 * 		Flags  -> ()
	 */
	void UHUD_Main_Widget_C::UpdateFrigateSystemsHealth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.UpdateFrigateSystemsHealth");
		
		UHUD_Main_Widget_C_UpdateFrigateSystemsHealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.ReturnTodaysDateIn1992
	 * 		Flags  -> ()
	 */
	class FString UHUD_Main_Widget_C::ReturnTodaysDateIn1992()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.ReturnTodaysDateIn1992");
		
		UHUD_Main_Widget_C_ReturnTodaysDateIn1992_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.WriteText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextBlock*                                  TextField                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Main_Widget_C::WriteText(class UTextBlock* TextField)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.WriteText");
		
		UHUD_Main_Widget_C_WriteText_Params params {};
		params.TextField = TextField;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.WasKilled
	 * 		Flags  -> ()
	 */
	void UHUD_Main_Widget_C::WasKilled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.WasKilled");
		
		UHUD_Main_Widget_C_WasKilled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.Get_Bar_Stamina_Percent_1
	 * 		Flags  -> ()
	 */
	float UHUD_Main_Widget_C::Get_Bar_Stamina_Percent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.Get_Bar_Stamina_Percent_1");
		
		UHUD_Main_Widget_C_Get_Bar_Stamina_Percent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.GivenDamageToAnotherPlayer
	 * 		Flags  -> ()
	 */
	void UHUD_Main_Widget_C::GivenDamageToAnotherPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.GivenDamageToAnotherPlayer");
		
		UHUD_Main_Widget_C_GivenDamageToAnotherPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.Have Taken Damage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DamageTaken                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDamageEvent                                DamageEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class APawn*                                       PawnInstigator                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DidDieFromHit                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      DamageType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UHUD_Main_Widget_C::Have_Taken_Damage(float DamageTaken, const struct FDamageEvent& DamageEvent, class APawn* PawnInstigator, int32_t Direction, bool DidDieFromHit, const class FString& DamageType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.Have Taken Damage");
		
		UHUD_Main_Widget_C_Have_Taken_Damage_Params params {};
		params.DamageTaken = DamageTaken;
		params.DamageEvent = DamageEvent;
		params.PawnInstigator = PawnInstigator;
		params.Direction = Direction;
		params.DidDieFromHit = DidDieFromHit;
		params.DamageType = DamageType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.Set_SpeedLines
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   InVisibility                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AlphaValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LineMoveSpeed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Main_Widget_C::Set_SpeedLines(ESlateVisibility InVisibility, float AlphaValue, float LineMoveSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.Set_SpeedLines");
		
		UHUD_Main_Widget_C_Set_SpeedLines_Params params {};
		params.InVisibility = InVisibility;
		params.AlphaValue = AlphaValue;
		params.LineMoveSpeed = LineMoveSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.SwitchHudToState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPlayerTranisitionState                            SwitchToState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EPlayerTranisitionState                            SwitchingFromState                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Main_Widget_C::SwitchHudToState(EPlayerTranisitionState SwitchToState, EPlayerTranisitionState SwitchingFromState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.SwitchHudToState");
		
		UHUD_Main_Widget_C_SwitchHudToState_Params params {};
		params.SwitchToState = SwitchToState;
		params.SwitchingFromState = SwitchingFromState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.Show_Interact_Prompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SomethingInFront                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      ObjectName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               HasHold                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Main_Widget_C::Show_Interact_Prompt(bool SomethingInFront, const class FString& ObjectName, bool HasHold)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.Show_Interact_Prompt");
		
		UHUD_Main_Widget_C_Show_Interact_Prompt_Params params {};
		params.SomethingInFront = SomethingInFront;
		params.ObjectName = ObjectName;
		params.HasHold = HasHold;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.OnLoaded_8AB7082F449422D76CFB48B4EB857D57
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Main_Widget_C::OnLoaded_8AB7082F449422D76CFB48B4EB857D57(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.OnLoaded_8AB7082F449422D76CFB48B4EB857D57");
		
		UHUD_Main_Widget_C_OnLoaded_8AB7082F449422D76CFB48B4EB857D57_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_Main_Widget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.Construct");
		
		UHUD_Main_Widget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.MyTick
	 * 		Flags  -> ()
	 */
	void UHUD_Main_Widget_C::MyTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.MyTick");
		
		UHUD_Main_Widget_C_MyTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Main_Widget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.Tick");
		
		UHUD_Main_Widget_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.DeathMusicWithDelay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Main_Widget_C::DeathMusicWithDelay(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.DeathMusicWithDelay");
		
		UHUD_Main_Widget_C_DeathMusicWithDelay_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.PlayText_InitialShipStart
	 * 		Flags  -> ()
	 */
	void UHUD_Main_Widget_C::PlayText_InitialShipStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.PlayText_InitialShipStart");
		
		UHUD_Main_Widget_C_PlayText_InitialShipStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.NewAreaMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TextToUse                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UHUD_Main_Widget_C::NewAreaMessage(const class FString& TextToUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.NewAreaMessage");
		
		UHUD_Main_Widget_C_NewAreaMessage_Params params {};
		params.TextToUse = TextToUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.PlayerIsReadyToSpawn
	 * 		Flags  -> ()
	 */
	void UHUD_Main_Widget_C::PlayerIsReadyToSpawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.PlayerIsReadyToSpawn");
		
		UHUD_Main_Widget_C_PlayerIsReadyToSpawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.CheckFrigateSystemsHealth
	 * 		Flags  -> ()
	 */
	void UHUD_Main_Widget_C::CheckFrigateSystemsHealth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.CheckFrigateSystemsHealth");
		
		UHUD_Main_Widget_C_CheckFrigateSystemsHealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.Exit_Raid_FadeOutHUD
	 * 		Flags  -> ()
	 */
	void UHUD_Main_Widget_C::Exit_Raid_FadeOutHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.Exit_Raid_FadeOutHUD");
		
		UHUD_Main_Widget_C_Exit_Raid_FadeOutHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.MyFastTick
	 * 		Flags  -> ()
	 */
	void UHUD_Main_Widget_C::MyFastTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.MyFastTick");
		
		UHUD_Main_Widget_C_MyFastTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.ActivateBoostBar
	 * 		Flags  -> ()
	 */
	void UHUD_Main_Widget_C::ActivateBoostBar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.ActivateBoostBar");
		
		UHUD_Main_Widget_C_ActivateBoostBar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.BoostFinished
	 * 		Flags  -> ()
	 */
	void UHUD_Main_Widget_C::BoostFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.BoostFinished");
		
		UHUD_Main_Widget_C_BoostFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.DeactivateBoostBar
	 * 		Flags  -> ()
	 */
	void UHUD_Main_Widget_C::DeactivateBoostBar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.DeactivateBoostBar");
		
		UHUD_Main_Widget_C_DeactivateBoostBar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.HUD_Turret_RefreshInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Desc                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            Ammo_Left                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Ammo_Max                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Main_Widget_C::HUD_Turret_RefreshInfo(const class FText& Name, const class FText& Desc, int32_t Ammo_Left, int32_t Ammo_Max)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.HUD_Turret_RefreshInfo");
		
		UHUD_Main_Widget_C_HUD_Turret_RefreshInfo_Params params {};
		params.Name = Name;
		params.Desc = Desc;
		params.Ammo_Left = Ammo_Left;
		params.Ammo_Max = Ammo_Max;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.HUD_Turret_Reloading
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReloadTime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Main_Widget_C::HUD_Turret_Reloading(float ReloadTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.HUD_Turret_Reloading");
		
		UHUD_Main_Widget_C_HUD_Turret_Reloading_Params params {};
		params.ReloadTime = ReloadTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.HUD_Turret_NoAmmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReloadingTimer                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Main_Widget_C::HUD_Turret_NoAmmo(float ReloadingTimer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.HUD_Turret_NoAmmo");
		
		UHUD_Main_Widget_C_HUD_Turret_NoAmmo_Params params {};
		params.ReloadingTimer = ReloadingTimer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.HUD_TurretOpened
	 * 		Flags  -> ()
	 */
	void UHUD_Main_Widget_C::HUD_TurretOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.HUD_TurretOpened");
		
		UHUD_Main_Widget_C_HUD_TurretOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.ReloadingTimerReduce
	 * 		Flags  -> ()
	 */
	void UHUD_Main_Widget_C::ReloadingTimerReduce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.ReloadingTimerReduce");
		
		UHUD_Main_Widget_C_ReloadingTimerReduce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.CheckDropPodHealth
	 * 		Flags  -> ()
	 */
	void UHUD_Main_Widget_C::CheckDropPodHealth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.CheckDropPodHealth");
		
		UHUD_Main_Widget_C_CheckDropPodHealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.Cinematic_FadeUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Hide                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Main_Widget_C::Cinematic_FadeUI(bool Hide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.Cinematic_FadeUI");
		
		UHUD_Main_Widget_C_Cinematic_FadeUI_Params params {};
		params.Hide = Hide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.Cinematic_BlackTransitionHide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShowBlack                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              PlaybackSpeed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Main_Widget_C::Cinematic_BlackTransitionHide(bool ShowBlack, float PlaybackSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.Cinematic_BlackTransitionHide");
		
		UHUD_Main_Widget_C_Cinematic_BlackTransitionHide_Params params {};
		params.ShowBlack = ShowBlack;
		params.PlaybackSpeed = PlaybackSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.Cinematic_FadeUI_Instant
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Hide                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Main_Widget_C::Cinematic_FadeUI_Instant(bool Hide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.Cinematic_FadeUI_Instant");
		
		UHUD_Main_Widget_C_Cinematic_FadeUI_Instant_Params params {};
		params.Hide = Hide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.DelayTurretPopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Main_Widget_C::DelayTurretPopup(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.DelayTurretPopup");
		
		UHUD_Main_Widget_C_DelayTurretPopup_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.Delayed_DropPodHealthChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TargetHealth                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Delay_Duration                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Main_Widget_C::Delayed_DropPodHealthChange(float TargetHealth, float Delay_Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.Delayed_DropPodHealthChange");
		
		UHUD_Main_Widget_C_Delayed_DropPodHealthChange_Params params {};
		params.TargetHealth = TargetHealth;
		params.Delay_Duration = Delay_Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.SetUIAbleToPodBreach
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShowCanBreachUI                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Main_Widget_C::SetUIAbleToPodBreach(bool ShowCanBreachUI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.SetUIAbleToPodBreach");
		
		UHUD_Main_Widget_C_SetUIAbleToPodBreach_Params params {};
		params.ShowCanBreachUI = ShowCanBreachUI;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.HudWidget_TurretAimLoc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     AimLoc                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  TurretCrosshair_Core                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  TurretCrosshair_Aim                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               TurretIsZoomedIn                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AimingAtOwnShip                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Main_Widget_C::HudWidget_TurretAimLoc(const struct FVector& AimLoc, class UTexture2D* TurretCrosshair_Core, class UTexture2D* TurretCrosshair_Aim, bool TurretIsZoomedIn, bool AimingAtOwnShip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.HudWidget_TurretAimLoc");
		
		UHUD_Main_Widget_C_HudWidget_TurretAimLoc_Params params {};
		params.AimLoc = AimLoc;
		params.TurretCrosshair_Core = TurretCrosshair_Core;
		params.TurretCrosshair_Aim = TurretCrosshair_Aim;
		params.TurretIsZoomedIn = TurretIsZoomedIn;
		params.AimingAtOwnShip = AimingAtOwnShip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.TurretAimLocationTICK
	 * 		Flags  -> ()
	 */
	void UHUD_Main_Widget_C::TurretAimLocationTICK()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.TurretAimLocationTICK");
		
		UHUD_Main_Widget_C_TurretAimLocationTICK_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.Warning_BeenBorded
	 * 		Flags  -> ()
	 */
	void UHUD_Main_Widget_C::Warning_BeenBorded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.Warning_BeenBorded");
		
		UHUD_Main_Widget_C_Warning_BeenBorded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.HUD_StaminaCooldown_Started
	 * 		Flags  -> ()
	 */
	void UHUD_Main_Widget_C::HUD_StaminaCooldown_Started()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.HUD_StaminaCooldown_Started");
		
		UHUD_Main_Widget_C_HUD_StaminaCooldown_Started_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.HUD_StaminaCooldown_Finished
	 * 		Flags  -> ()
	 */
	void UHUD_Main_Widget_C::HUD_StaminaCooldown_Finished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.HUD_StaminaCooldown_Finished");
		
		UHUD_Main_Widget_C_HUD_StaminaCooldown_Finished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.CheckifShouldHideStaminaBar
	 * 		Flags  -> ()
	 */
	void UHUD_Main_Widget_C::CheckifShouldHideStaminaBar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.CheckifShouldHideStaminaBar");
		
		UHUD_Main_Widget_C_CheckifShouldHideStaminaBar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.NoSpaceForItem
	 * 		Flags  -> ()
	 */
	void UHUD_Main_Widget_C::NoSpaceForItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.NoSpaceForItem");
		
		UHUD_Main_Widget_C_NoSpaceForItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.TurnOffNotEnoughSpace
	 * 		Flags  -> ()
	 */
	void UHUD_Main_Widget_C::TurnOffNotEnoughSpace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.TurnOffNotEnoughSpace");
		
		UHUD_Main_Widget_C_TurnOffNotEnoughSpace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.SetAbleToDockPrompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShowCanDockUI                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Main_Widget_C::SetAbleToDockPrompt(bool ShowCanDockUI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.SetAbleToDockPrompt");
		
		UHUD_Main_Widget_C_SetAbleToDockPrompt_Params params {};
		params.ShowCanDockUI = ShowCanDockUI;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.CheckifShouldHideHealthBar
	 * 		Flags  -> ()
	 */
	void UHUD_Main_Widget_C::CheckifShouldHideHealthBar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.CheckifShouldHideHealthBar");
		
		UHUD_Main_Widget_C_CheckifShouldHideHealthBar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.OxygenDyingTimer
	 * 		Flags  -> ()
	 */
	void UHUD_Main_Widget_C::OxygenDyingTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.OxygenDyingTimer");
		
		UHUD_Main_Widget_C_OxygenDyingTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.AirlockUse_Message
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHangerEvent                                       Hanger_UseEvent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Main_Widget_C::AirlockUse_Message(EHangerEvent Hanger_UseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.AirlockUse_Message");
		
		UHUD_Main_Widget_C_AirlockUse_Message_Params params {};
		params.Hanger_UseEvent = Hanger_UseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.PlayerStartedSecondOptionHold
	 * 		Flags  -> ()
	 */
	void UHUD_Main_Widget_C::PlayerStartedSecondOptionHold()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.PlayerStartedSecondOptionHold");
		
		UHUD_Main_Widget_C_PlayerStartedSecondOptionHold_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.PlayerStoppedSecondOptionHold
	 * 		Flags  -> ()
	 */
	void UHUD_Main_Widget_C::PlayerStoppedSecondOptionHold()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.PlayerStoppedSecondOptionHold");
		
		UHUD_Main_Widget_C_PlayerStoppedSecondOptionHold_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.HoldingInteractFor2ndOption
	 * 		Flags  -> ()
	 */
	void UHUD_Main_Widget_C::HoldingInteractFor2ndOption()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.HoldingInteractFor2ndOption");
		
		UHUD_Main_Widget_C_HoldingInteractFor2ndOption_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.HoldInteractComplete_ResetDetails
	 * 		Flags  -> ()
	 */
	void UHUD_Main_Widget_C::HoldInteractComplete_ResetDetails()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.HoldInteractComplete_ResetDetails");
		
		UHUD_Main_Widget_C_HoldInteractComplete_ResetDetails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.PlayPlayerLocal_TakeDamageEffects
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      DamageType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UHUD_Main_Widget_C::PlayPlayerLocal_TakeDamageEffects(float Damage, const class FString& DamageType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.PlayPlayerLocal_TakeDamageEffects");
		
		UHUD_Main_Widget_C_PlayPlayerLocal_TakeDamageEffects_Params params {};
		params.Damage = Damage;
		params.DamageType = DamageType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.POD_PretendDeath
	 * 		Flags  -> ()
	 */
	void UHUD_Main_Widget_C::POD_PretendDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.POD_PretendDeath");
		
		UHUD_Main_Widget_C_POD_PretendDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Main_Widget.HUD_Main_Widget_C.ExecuteUbergraph_HUD_Main_Widget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Main_Widget_C::ExecuteUbergraph_HUD_Main_Widget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Main_Widget.HUD_Main_Widget_C.ExecuteUbergraph_HUD_Main_Widget");
		
		UHUD_Main_Widget_C_ExecuteUbergraph_HUD_Main_Widget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_Main_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Main_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Main_Widget.HUD_Main_Widget_C");
		return ptr;
	}

}


