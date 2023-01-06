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
	 * 		Name   -> Function TaskForceController.TaskForceController_C.FindDefaultSkin
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Skin                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UTaskForceController_C::FindDefaultSkin(class FString* Skin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForceController.TaskForceController_C.FindDefaultSkin");
		
		UTaskForceController_C_FindDefaultSkin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Skin != nullptr)
			*Skin = params.Skin;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaskForceController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaskForceController_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TaskForceController.TaskForceController_C");
		return ptr;
	}

}


