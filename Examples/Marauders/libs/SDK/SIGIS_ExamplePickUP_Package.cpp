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
	 * 		Name   -> PredefinedFunction ASIGIS_ExamplePickUP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASIGIS_ExamplePickUP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SIGIS_ExamplePickUP.SIGIS_ExamplePickUP_C");
		return ptr;
	}

}


