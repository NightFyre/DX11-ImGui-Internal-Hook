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
	 * 		Name   -> Function Ability_Frigate_BoardStation.Ability_Frigate_BoardStation_C.SetAreaEnteringNameInHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        AreaName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Frigate_BoardStation_C::SetAreaEnteringNameInHUD(const class FName& AreaName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Frigate_BoardStation.Ability_Frigate_BoardStation_C.SetAreaEnteringNameInHUD");
		
		UAbility_Frigate_BoardStation_C_SetAreaEnteringNameInHUD_Params params {};
		params.AreaName = AreaName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Frigate_BoardStation.Ability_Frigate_BoardStation_C.TriggerFadeToBlack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              FromAlpha                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ToAlpha                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bHoldWhenFinished                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_Frigate_BoardStation_C::TriggerFadeToBlack(float FromAlpha, float ToAlpha, float Duration, bool bHoldWhenFinished)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Frigate_BoardStation.Ability_Frigate_BoardStation_C.TriggerFadeToBlack");
		
		UAbility_Frigate_BoardStation_C_TriggerFadeToBlack_Params params {};
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
	 * 		Name   -> Function Ability_Frigate_BoardStation.Ability_Frigate_BoardStation_C.TriggerHudFade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Hide                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_Frigate_BoardStation_C::TriggerHudFade(bool Hide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Frigate_BoardStation.Ability_Frigate_BoardStation_C.TriggerHudFade");
		
		UAbility_Frigate_BoardStation_C_TriggerHudFade_Params params {};
		params.Hide = Hide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Frigate_BoardStation.Ability_Frigate_BoardStation_C.OnTargetLocationReached_762C00C14E5E793715B3AB8A44DE2874
	 * 		Flags  -> ()
	 */
	void UAbility_Frigate_BoardStation_C::OnTargetLocationReached_762C00C14E5E793715B3AB8A44DE2874()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Frigate_BoardStation.Ability_Frigate_BoardStation_C.OnTargetLocationReached_762C00C14E5E793715B3AB8A44DE2874");
		
		UAbility_Frigate_BoardStation_C_OnTargetLocationReached_762C00C14E5E793715B3AB8A44DE2874_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Frigate_BoardStation.Ability_Frigate_BoardStation_C.OnFinish_734400844FF4F53D9C21258DBA9378DA
	 * 		Flags  -> ()
	 */
	void UAbility_Frigate_BoardStation_C::OnFinish_734400844FF4F53D9C21258DBA9378DA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Frigate_BoardStation.Ability_Frigate_BoardStation_C.OnFinish_734400844FF4F53D9C21258DBA9378DA");
		
		UAbility_Frigate_BoardStation_C_OnFinish_734400844FF4F53D9C21258DBA9378DA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Frigate_BoardStation.Ability_Frigate_BoardStation_C.OnSync_598D8C174778802182186D86370C04DC
	 * 		Flags  -> ()
	 */
	void UAbility_Frigate_BoardStation_C::OnSync_598D8C174778802182186D86370C04DC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Frigate_BoardStation.Ability_Frigate_BoardStation_C.OnSync_598D8C174778802182186D86370C04DC");
		
		UAbility_Frigate_BoardStation_C_OnSync_598D8C174778802182186D86370C04DC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Frigate_BoardStation.Ability_Frigate_BoardStation_C.OnFinish_48B5AF244282B4801DD13EB0075CE4D6
	 * 		Flags  -> ()
	 */
	void UAbility_Frigate_BoardStation_C::OnFinish_48B5AF244282B4801DD13EB0075CE4D6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Frigate_BoardStation.Ability_Frigate_BoardStation_C.OnFinish_48B5AF244282B4801DD13EB0075CE4D6");
		
		UAbility_Frigate_BoardStation_C_OnFinish_48B5AF244282B4801DD13EB0075CE4D6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Frigate_BoardStation.Ability_Frigate_BoardStation_C.OnTimedOutAndDestinationReached_317FF0D34187C62BC22D05B801A3AE3C
	 * 		Flags  -> ()
	 */
	void UAbility_Frigate_BoardStation_C::OnTimedOutAndDestinationReached_317FF0D34187C62BC22D05B801A3AE3C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Frigate_BoardStation.Ability_Frigate_BoardStation_C.OnTimedOutAndDestinationReached_317FF0D34187C62BC22D05B801A3AE3C");
		
		UAbility_Frigate_BoardStation_C_OnTimedOutAndDestinationReached_317FF0D34187C62BC22D05B801A3AE3C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Frigate_BoardStation.Ability_Frigate_BoardStation_C.OnTimedOut_317FF0D34187C62BC22D05B801A3AE3C
	 * 		Flags  -> ()
	 */
	void UAbility_Frigate_BoardStation_C::OnTimedOut_317FF0D34187C62BC22D05B801A3AE3C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Frigate_BoardStation.Ability_Frigate_BoardStation_C.OnTimedOut_317FF0D34187C62BC22D05B801A3AE3C");
		
		UAbility_Frigate_BoardStation_C_OnTimedOut_317FF0D34187C62BC22D05B801A3AE3C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Frigate_BoardStation.Ability_Frigate_BoardStation_C.K2_OnEndAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasCancelled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_Frigate_BoardStation_C::K2_OnEndAbility(bool bWasCancelled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Frigate_BoardStation.Ability_Frigate_BoardStation_C.K2_OnEndAbility");
		
		UAbility_Frigate_BoardStation_C_K2_OnEndAbility_Params params {};
		params.bWasCancelled = bWasCancelled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Frigate_BoardStation.Ability_Frigate_BoardStation_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UAbility_Frigate_BoardStation_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Frigate_BoardStation.Ability_Frigate_BoardStation_C.K2_ActivateAbility");
		
		UAbility_Frigate_BoardStation_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Frigate_BoardStation.Ability_Frigate_BoardStation_C.ExecuteUbergraph_Ability_Frigate_BoardStation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Frigate_BoardStation_C::ExecuteUbergraph_Ability_Frigate_BoardStation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Frigate_BoardStation.Ability_Frigate_BoardStation_C.ExecuteUbergraph_Ability_Frigate_BoardStation");
		
		UAbility_Frigate_BoardStation_C_ExecuteUbergraph_Ability_Frigate_BoardStation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_Frigate_BoardStation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_Frigate_BoardStation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Frigate_BoardStation.Ability_Frigate_BoardStation_C");
		return ptr;
	}

}


