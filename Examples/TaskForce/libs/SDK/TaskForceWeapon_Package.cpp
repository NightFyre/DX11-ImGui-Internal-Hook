/**
 * Name: Task_Force
 * Version: 0.3.6.1537
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForceWeapon.TaskForceWeapon_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATaskForceWeapon_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForceWeapon.TaskForceWeapon_C.UserConstructionScript");
		
		ATaskForceWeapon_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATaskForceWeapon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATaskForceWeapon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TaskForceWeapon.TaskForceWeapon_C");
		return ptr;
	}

}


