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
	 * 		Name   -> Function spline_pipe_darkcolor.spline_pipe_darkcolor_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void Aspline_pipe_darkcolor_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function spline_pipe_darkcolor.spline_pipe_darkcolor_C.UserConstructionScript");
		
		Aspline_pipe_darkcolor_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction Aspline_pipe_darkcolor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Aspline_pipe_darkcolor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass spline_pipe_darkcolor.spline_pipe_darkcolor_C");
		return ptr;
	}

}


