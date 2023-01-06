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
	 * 		Name   -> Function BPI_UIKeyPresses.BPI_UIKeyPresses_C.EscapePressed
	 * 		Flags  -> ()
	 */
	void UBPI_UIKeyPresses_C::EscapePressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_UIKeyPresses.BPI_UIKeyPresses_C.EscapePressed");
		
		UBPI_UIKeyPresses_C_EscapePressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_UIKeyPresses_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_UIKeyPresses_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_UIKeyPresses.BPI_UIKeyPresses_C");
		return ptr;
	}

}


