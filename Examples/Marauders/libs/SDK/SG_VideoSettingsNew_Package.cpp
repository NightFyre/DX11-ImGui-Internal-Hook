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
	 * 		Name   -> PredefinedFunction USG_VideoSettingsNew_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USG_VideoSettingsNew_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SG_VideoSettingsNew.SG_VideoSettingsNew_C");
		return ptr;
	}

}


