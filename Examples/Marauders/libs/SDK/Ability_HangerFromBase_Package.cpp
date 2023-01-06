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
	 * 		Name   -> Function Ability_HangerFromBase.Ability_HangerFromBase_C.SetUpBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Fail                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_HangerFromBase_C::SetUpBase(bool* Fail)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_HangerFromBase.Ability_HangerFromBase_C.SetUpBase");
		
		UAbility_HangerFromBase_C_SetUpBase_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Fail != nullptr)
			*Fail = params.Fail;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_HangerFromBase.Ability_HangerFromBase_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UAbility_HangerFromBase_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_HangerFromBase.Ability_HangerFromBase_C.K2_ActivateAbility");
		
		UAbility_HangerFromBase_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_HangerFromBase.Ability_HangerFromBase_C.ExecuteUbergraph_Ability_HangerFromBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_HangerFromBase_C::ExecuteUbergraph_Ability_HangerFromBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_HangerFromBase.Ability_HangerFromBase_C.ExecuteUbergraph_Ability_HangerFromBase");
		
		UAbility_HangerFromBase_C_ExecuteUbergraph_Ability_HangerFromBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_HangerFromBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_HangerFromBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_HangerFromBase.Ability_HangerFromBase_C");
		return ptr;
	}

}


