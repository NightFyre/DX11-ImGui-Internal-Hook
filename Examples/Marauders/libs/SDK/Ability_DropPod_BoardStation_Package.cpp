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
	 * 		Name   -> Function Ability_DropPod_BoardStation.Ability_DropPod_BoardStation_C.SetAreaEnteringNameInHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        AreaName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_DropPod_BoardStation_C::SetAreaEnteringNameInHUD(const class FName& AreaName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_DropPod_BoardStation.Ability_DropPod_BoardStation_C.SetAreaEnteringNameInHUD");
		
		UAbility_DropPod_BoardStation_C_SetAreaEnteringNameInHUD_Params params {};
		params.AreaName = AreaName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_DropPod_BoardStation.Ability_DropPod_BoardStation_C.TriggerFadeToBlack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              FromAlpha                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ToAlpha                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bHoldWhenFinished                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_DropPod_BoardStation_C::TriggerFadeToBlack(float FromAlpha, float ToAlpha, float Duration, bool bHoldWhenFinished)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_DropPod_BoardStation.Ability_DropPod_BoardStation_C.TriggerFadeToBlack");
		
		UAbility_DropPod_BoardStation_C_TriggerFadeToBlack_Params params {};
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
	 * 		Name   -> Function Ability_DropPod_BoardStation.Ability_DropPod_BoardStation_C.TriggerHudFade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Hide                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_DropPod_BoardStation_C::TriggerHudFade(bool Hide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_DropPod_BoardStation.Ability_DropPod_BoardStation_C.TriggerHudFade");
		
		UAbility_DropPod_BoardStation_C_TriggerHudFade_Params params {};
		params.Hide = Hide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_DropPod_BoardStation.Ability_DropPod_BoardStation_C.OnTimedOutAndDestinationReached_512F646845DEB0C19FB038A3655F0758
	 * 		Flags  -> ()
	 */
	void UAbility_DropPod_BoardStation_C::OnTimedOutAndDestinationReached_512F646845DEB0C19FB038A3655F0758()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_DropPod_BoardStation.Ability_DropPod_BoardStation_C.OnTimedOutAndDestinationReached_512F646845DEB0C19FB038A3655F0758");
		
		UAbility_DropPod_BoardStation_C_OnTimedOutAndDestinationReached_512F646845DEB0C19FB038A3655F0758_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_DropPod_BoardStation.Ability_DropPod_BoardStation_C.OnTimedOut_512F646845DEB0C19FB038A3655F0758
	 * 		Flags  -> ()
	 */
	void UAbility_DropPod_BoardStation_C::OnTimedOut_512F646845DEB0C19FB038A3655F0758()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_DropPod_BoardStation.Ability_DropPod_BoardStation_C.OnTimedOut_512F646845DEB0C19FB038A3655F0758");
		
		UAbility_DropPod_BoardStation_C_OnTimedOut_512F646845DEB0C19FB038A3655F0758_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_DropPod_BoardStation.Ability_DropPod_BoardStation_C.OnTargetLocationReached_004372334EDBE57A1EAB7B851CA4FB48
	 * 		Flags  -> ()
	 */
	void UAbility_DropPod_BoardStation_C::OnTargetLocationReached_004372334EDBE57A1EAB7B851CA4FB48()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_DropPod_BoardStation.Ability_DropPod_BoardStation_C.OnTargetLocationReached_004372334EDBE57A1EAB7B851CA4FB48");
		
		UAbility_DropPod_BoardStation_C_OnTargetLocationReached_004372334EDBE57A1EAB7B851CA4FB48_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_DropPod_BoardStation.Ability_DropPod_BoardStation_C.OnFinish_A9E6EAD64F7459B3095D3084A75921BB
	 * 		Flags  -> ()
	 */
	void UAbility_DropPod_BoardStation_C::OnFinish_A9E6EAD64F7459B3095D3084A75921BB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_DropPod_BoardStation.Ability_DropPod_BoardStation_C.OnFinish_A9E6EAD64F7459B3095D3084A75921BB");
		
		UAbility_DropPod_BoardStation_C_OnFinish_A9E6EAD64F7459B3095D3084A75921BB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_DropPod_BoardStation.Ability_DropPod_BoardStation_C.OnFinish_8B325BF24B52E46D98BD959E03AB1D01
	 * 		Flags  -> ()
	 */
	void UAbility_DropPod_BoardStation_C::OnFinish_8B325BF24B52E46D98BD959E03AB1D01()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_DropPod_BoardStation.Ability_DropPod_BoardStation_C.OnFinish_8B325BF24B52E46D98BD959E03AB1D01");
		
		UAbility_DropPod_BoardStation_C_OnFinish_8B325BF24B52E46D98BD959E03AB1D01_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_DropPod_BoardStation.Ability_DropPod_BoardStation_C.OnSync_F1B6FF5F4279EB7107639E984C09593F
	 * 		Flags  -> ()
	 */
	void UAbility_DropPod_BoardStation_C::OnSync_F1B6FF5F4279EB7107639E984C09593F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_DropPod_BoardStation.Ability_DropPod_BoardStation_C.OnSync_F1B6FF5F4279EB7107639E984C09593F");
		
		UAbility_DropPod_BoardStation_C_OnSync_F1B6FF5F4279EB7107639E984C09593F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_DropPod_BoardStation.Ability_DropPod_BoardStation_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UAbility_DropPod_BoardStation_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_DropPod_BoardStation.Ability_DropPod_BoardStation_C.K2_ActivateAbility");
		
		UAbility_DropPod_BoardStation_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_DropPod_BoardStation.Ability_DropPod_BoardStation_C.K2_OnEndAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasCancelled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_DropPod_BoardStation_C::K2_OnEndAbility(bool bWasCancelled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_DropPod_BoardStation.Ability_DropPod_BoardStation_C.K2_OnEndAbility");
		
		UAbility_DropPod_BoardStation_C_K2_OnEndAbility_Params params {};
		params.bWasCancelled = bWasCancelled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_DropPod_BoardStation.Ability_DropPod_BoardStation_C.ExecuteUbergraph_Ability_DropPod_BoardStation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_DropPod_BoardStation_C::ExecuteUbergraph_Ability_DropPod_BoardStation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_DropPod_BoardStation.Ability_DropPod_BoardStation_C.ExecuteUbergraph_Ability_DropPod_BoardStation");
		
		UAbility_DropPod_BoardStation_C_ExecuteUbergraph_Ability_DropPod_BoardStation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_DropPod_BoardStation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_DropPod_BoardStation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_DropPod_BoardStation.Ability_DropPod_BoardStation_C");
		return ptr;
	}

}


