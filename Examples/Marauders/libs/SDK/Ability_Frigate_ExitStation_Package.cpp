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
	 * 		Name   -> Function Ability_Frigate_ExitStation.Ability_Frigate_ExitStation_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UAbility_Frigate_ExitStation_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Frigate_ExitStation.Ability_Frigate_ExitStation_C.K2_ActivateAbility");
		
		UAbility_Frigate_ExitStation_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Frigate_ExitStation.Ability_Frigate_ExitStation_C.ExecuteUbergraph_Ability_Frigate_ExitStation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Frigate_ExitStation_C::ExecuteUbergraph_Ability_Frigate_ExitStation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Frigate_ExitStation.Ability_Frigate_ExitStation_C.ExecuteUbergraph_Ability_Frigate_ExitStation");
		
		UAbility_Frigate_ExitStation_C_ExecuteUbergraph_Ability_Frigate_ExitStation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_Frigate_ExitStation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_Frigate_ExitStation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Frigate_ExitStation.Ability_Frigate_ExitStation_C");
		return ptr;
	}

}


