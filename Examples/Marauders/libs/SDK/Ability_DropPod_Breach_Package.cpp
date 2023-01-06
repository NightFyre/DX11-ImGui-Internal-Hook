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
	 * 		Name   -> Function Ability_DropPod_Breach.Ability_DropPod_Breach_C.Analytics_DidAShipBreach
	 * 		Flags  -> ()
	 */
	void UAbility_DropPod_Breach_C::Analytics_DidAShipBreach()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_DropPod_Breach.Ability_DropPod_Breach_C.Analytics_DidAShipBreach");
		
		UAbility_DropPod_Breach_C_Analytics_DidAShipBreach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_DropPod_Breach.Ability_DropPod_Breach_C.Trigger_HudFade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Hide                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_DropPod_Breach_C::Trigger_HudFade(bool Hide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_DropPod_Breach.Ability_DropPod_Breach_C.Trigger_HudFade");
		
		UAbility_DropPod_Breach_C_Trigger_HudFade_Params params {};
		params.Hide = Hide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_DropPod_Breach.Ability_DropPod_Breach_C.OnTimedOutAndDestinationReached_1817C8BE4EBE5FFC894E93851098DF35
	 * 		Flags  -> ()
	 */
	void UAbility_DropPod_Breach_C::OnTimedOutAndDestinationReached_1817C8BE4EBE5FFC894E93851098DF35()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_DropPod_Breach.Ability_DropPod_Breach_C.OnTimedOutAndDestinationReached_1817C8BE4EBE5FFC894E93851098DF35");
		
		UAbility_DropPod_Breach_C_OnTimedOutAndDestinationReached_1817C8BE4EBE5FFC894E93851098DF35_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_DropPod_Breach.Ability_DropPod_Breach_C.OnTimedOut_1817C8BE4EBE5FFC894E93851098DF35
	 * 		Flags  -> ()
	 */
	void UAbility_DropPod_Breach_C::OnTimedOut_1817C8BE4EBE5FFC894E93851098DF35()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_DropPod_Breach.Ability_DropPod_Breach_C.OnTimedOut_1817C8BE4EBE5FFC894E93851098DF35");
		
		UAbility_DropPod_Breach_C_OnTimedOut_1817C8BE4EBE5FFC894E93851098DF35_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_DropPod_Breach.Ability_DropPod_Breach_C.OnTargetLocationReached_E504D9E1474ECB72137583805F2E4BDE
	 * 		Flags  -> ()
	 */
	void UAbility_DropPod_Breach_C::OnTargetLocationReached_E504D9E1474ECB72137583805F2E4BDE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_DropPod_Breach.Ability_DropPod_Breach_C.OnTargetLocationReached_E504D9E1474ECB72137583805F2E4BDE");
		
		UAbility_DropPod_Breach_C_OnTargetLocationReached_E504D9E1474ECB72137583805F2E4BDE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_DropPod_Breach.Ability_DropPod_Breach_C.OnTargetLocationReached_51C359B1498285B3589B55B035CDD5F9
	 * 		Flags  -> ()
	 */
	void UAbility_DropPod_Breach_C::OnTargetLocationReached_51C359B1498285B3589B55B035CDD5F9()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_DropPod_Breach.Ability_DropPod_Breach_C.OnTargetLocationReached_51C359B1498285B3589B55B035CDD5F9");
		
		UAbility_DropPod_Breach_C_OnTargetLocationReached_51C359B1498285B3589B55B035CDD5F9_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_DropPod_Breach.Ability_DropPod_Breach_C.OnTimedOutAndDestinationReached_FAE6C3BB4D16BD4BBC3D3ABB5A034FAE
	 * 		Flags  -> ()
	 */
	void UAbility_DropPod_Breach_C::OnTimedOutAndDestinationReached_FAE6C3BB4D16BD4BBC3D3ABB5A034FAE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_DropPod_Breach.Ability_DropPod_Breach_C.OnTimedOutAndDestinationReached_FAE6C3BB4D16BD4BBC3D3ABB5A034FAE");
		
		UAbility_DropPod_Breach_C_OnTimedOutAndDestinationReached_FAE6C3BB4D16BD4BBC3D3ABB5A034FAE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_DropPod_Breach.Ability_DropPod_Breach_C.OnTimedOut_FAE6C3BB4D16BD4BBC3D3ABB5A034FAE
	 * 		Flags  -> ()
	 */
	void UAbility_DropPod_Breach_C::OnTimedOut_FAE6C3BB4D16BD4BBC3D3ABB5A034FAE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_DropPod_Breach.Ability_DropPod_Breach_C.OnTimedOut_FAE6C3BB4D16BD4BBC3D3ABB5A034FAE");
		
		UAbility_DropPod_Breach_C_OnTimedOut_FAE6C3BB4D16BD4BBC3D3ABB5A034FAE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_DropPod_Breach.Ability_DropPod_Breach_C.OnFinish_5C5FD7CE49472463DD3A30A576086B1B
	 * 		Flags  -> ()
	 */
	void UAbility_DropPod_Breach_C::OnFinish_5C5FD7CE49472463DD3A30A576086B1B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_DropPod_Breach.Ability_DropPod_Breach_C.OnFinish_5C5FD7CE49472463DD3A30A576086B1B");
		
		UAbility_DropPod_Breach_C_OnFinish_5C5FD7CE49472463DD3A30A576086B1B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_DropPod_Breach.Ability_DropPod_Breach_C.OnFinish_2A0226434F505DEBA5E93C94DFDC72C3
	 * 		Flags  -> ()
	 */
	void UAbility_DropPod_Breach_C::OnFinish_2A0226434F505DEBA5E93C94DFDC72C3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_DropPod_Breach.Ability_DropPod_Breach_C.OnFinish_2A0226434F505DEBA5E93C94DFDC72C3");
		
		UAbility_DropPod_Breach_C_OnFinish_2A0226434F505DEBA5E93C94DFDC72C3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_DropPod_Breach.Ability_DropPod_Breach_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UAbility_DropPod_Breach_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_DropPod_Breach.Ability_DropPod_Breach_C.K2_ActivateAbility");
		
		UAbility_DropPod_Breach_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_DropPod_Breach.Ability_DropPod_Breach_C.K2_OnEndAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasCancelled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_DropPod_Breach_C::K2_OnEndAbility(bool bWasCancelled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_DropPod_Breach.Ability_DropPod_Breach_C.K2_OnEndAbility");
		
		UAbility_DropPod_Breach_C_K2_OnEndAbility_Params params {};
		params.bWasCancelled = bWasCancelled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_DropPod_Breach.Ability_DropPod_Breach_C.ExecuteUbergraph_Ability_DropPod_Breach
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_DropPod_Breach_C::ExecuteUbergraph_Ability_DropPod_Breach(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_DropPod_Breach.Ability_DropPod_Breach_C.ExecuteUbergraph_Ability_DropPod_Breach");
		
		UAbility_DropPod_Breach_C_ExecuteUbergraph_Ability_DropPod_Breach_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_DropPod_Breach_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_DropPod_Breach_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_DropPod_Breach.Ability_DropPod_Breach_C");
		return ptr;
	}

}


