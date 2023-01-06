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
	 * 		Name   -> Function BPI_InsideShipTrigger.BPI_InsideShipTrigger_C.TriggerDamageLightFlicker
	 * 		Flags  -> ()
	 */
	void UBPI_InsideShipTrigger_C::TriggerDamageLightFlicker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_InsideShipTrigger.BPI_InsideShipTrigger_C.TriggerDamageLightFlicker");
		
		UBPI_InsideShipTrigger_C_TriggerDamageLightFlicker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_InsideShipTrigger.BPI_InsideShipTrigger_C.TriggerCritcialWarningSpinningLights
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TurnOnCriticalState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_InsideShipTrigger_C::TriggerCritcialWarningSpinningLights(bool TurnOnCriticalState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_InsideShipTrigger.BPI_InsideShipTrigger_C.TriggerCritcialWarningSpinningLights");
		
		UBPI_InsideShipTrigger_C_TriggerCritcialWarningSpinningLights_Params params {};
		params.TurnOnCriticalState = TurnOnCriticalState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_InsideShipTrigger.BPI_InsideShipTrigger_C.TriggerCriticalLightState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TurnOnCriticalState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_InsideShipTrigger_C::TriggerCriticalLightState(bool TurnOnCriticalState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_InsideShipTrigger.BPI_InsideShipTrigger_C.TriggerCriticalLightState");
		
		UBPI_InsideShipTrigger_C_TriggerCriticalLightState_Params params {};
		params.TurnOnCriticalState = TurnOnCriticalState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_InsideShipTrigger.BPI_InsideShipTrigger_C.TriggerInsideShipActor_Damage
	 * 		Flags  -> ()
	 */
	void UBPI_InsideShipTrigger_C::TriggerInsideShipActor_Damage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_InsideShipTrigger.BPI_InsideShipTrigger_C.TriggerInsideShipActor_Damage");
		
		UBPI_InsideShipTrigger_C_TriggerInsideShipActor_Damage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_InsideShipTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_InsideShipTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_InsideShipTrigger.BPI_InsideShipTrigger_C");
		return ptr;
	}

}


