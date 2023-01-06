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
	 * 		Name   -> PredefinedFunction USG_ControlSettings_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USG_ControlSettings_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SG_ControlSettings.SG_ControlSettings_C");
		return ptr;
	}

}


