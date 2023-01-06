/**
 * Name: Task_Force
 * Version: 0.3.6.1537
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForceBreach.TaskForceBreach_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATaskForceBreach_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForceBreach.TaskForceBreach_C.UserConstructionScript");
		
		ATaskForceBreach_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATaskForceBreach_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATaskForceBreach_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TaskForceBreach.TaskForceBreach_C");
		return ptr;
	}

}


