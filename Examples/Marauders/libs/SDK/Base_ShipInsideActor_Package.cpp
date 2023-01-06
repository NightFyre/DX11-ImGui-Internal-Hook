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
	 * 		Name   -> Function Base_ShipInsideActor.Base_ShipInsideActor_C.TriggerInsideShipActor_Damage
	 * 		Flags  -> ()
	 */
	void ABase_ShipInsideActor_C::TriggerInsideShipActor_Damage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_ShipInsideActor.Base_ShipInsideActor_C.TriggerInsideShipActor_Damage");
		
		ABase_ShipInsideActor_C_TriggerInsideShipActor_Damage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_ShipInsideActor.Base_ShipInsideActor_C.TriggerCriticalLightState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TurnOnCriticalState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABase_ShipInsideActor_C::TriggerCriticalLightState(bool TurnOnCriticalState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_ShipInsideActor.Base_ShipInsideActor_C.TriggerCriticalLightState");
		
		ABase_ShipInsideActor_C_TriggerCriticalLightState_Params params {};
		params.TurnOnCriticalState = TurnOnCriticalState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_ShipInsideActor.Base_ShipInsideActor_C.TriggerCritcialWarningSpinningLights
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TurnOnCriticalState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABase_ShipInsideActor_C::TriggerCritcialWarningSpinningLights(bool TurnOnCriticalState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_ShipInsideActor.Base_ShipInsideActor_C.TriggerCritcialWarningSpinningLights");
		
		ABase_ShipInsideActor_C_TriggerCritcialWarningSpinningLights_Params params {};
		params.TurnOnCriticalState = TurnOnCriticalState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_ShipInsideActor.Base_ShipInsideActor_C.TriggerDamageLightFlicker
	 * 		Flags  -> ()
	 */
	void ABase_ShipInsideActor_C::TriggerDamageLightFlicker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_ShipInsideActor.Base_ShipInsideActor_C.TriggerDamageLightFlicker");
		
		ABase_ShipInsideActor_C_TriggerDamageLightFlicker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_ShipInsideActor.Base_ShipInsideActor_C.Trigger
	 * 		Flags  -> ()
	 */
	void ABase_ShipInsideActor_C::Trigger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_ShipInsideActor.Base_ShipInsideActor_C.Trigger");
		
		ABase_ShipInsideActor_C_Trigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_ShipInsideActor.Base_ShipInsideActor_C.ExecuteUbergraph_Base_ShipInsideActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_ShipInsideActor_C::ExecuteUbergraph_Base_ShipInsideActor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_ShipInsideActor.Base_ShipInsideActor_C.ExecuteUbergraph_Base_ShipInsideActor");
		
		ABase_ShipInsideActor_C_ExecuteUbergraph_Base_ShipInsideActor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABase_ShipInsideActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABase_ShipInsideActor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Base_ShipInsideActor.Base_ShipInsideActor_C");
		return ptr;
	}

}


