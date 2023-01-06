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
	 * 		Name   -> PredefinedFunction UMM_CameraBob01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMM_CameraBob01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MM_CameraBob01.MM_CameraBob01_C");
		return ptr;
	}

}


