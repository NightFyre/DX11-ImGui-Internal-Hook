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
	 * 		Name   -> PredefinedFunction AGuardAI_Controller_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGuardAI_Controller_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GuardAI_Controller.GuardAI_Controller_C");
		return ptr;
	}

}


