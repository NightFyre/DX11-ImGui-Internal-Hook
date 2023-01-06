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
	 * 		Name   -> PredefinedFunction AMilAI_Controller_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMilAI_Controller_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MilAI_Controller.MilAI_Controller_C");
		return ptr;
	}

}


