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
	 * 		Name   -> Function Ability_HangerFromShip.Ability_HangerFromShip_C.SetUpBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               failed                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_HangerFromShip_C::SetUpBase(bool* failed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_HangerFromShip.Ability_HangerFromShip_C.SetUpBase");
		
		UAbility_HangerFromShip_C_SetUpBase_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (failed != nullptr)
			*failed = params.failed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_HangerFromShip.Ability_HangerFromShip_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UAbility_HangerFromShip_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_HangerFromShip.Ability_HangerFromShip_C.K2_ActivateAbility");
		
		UAbility_HangerFromShip_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_HangerFromShip.Ability_HangerFromShip_C.ExecuteUbergraph_Ability_HangerFromShip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_HangerFromShip_C::ExecuteUbergraph_Ability_HangerFromShip(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_HangerFromShip.Ability_HangerFromShip_C.ExecuteUbergraph_Ability_HangerFromShip");
		
		UAbility_HangerFromShip_C_ExecuteUbergraph_Ability_HangerFromShip_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_HangerFromShip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_HangerFromShip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_HangerFromShip.Ability_HangerFromShip_C");
		return ptr;
	}

}


