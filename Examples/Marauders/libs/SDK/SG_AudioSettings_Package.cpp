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
	 * 		Name   -> PredefinedFunction USG_AudioSettings_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USG_AudioSettings_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SG_AudioSettings.SG_AudioSettings_C");
		return ptr;
	}

}


