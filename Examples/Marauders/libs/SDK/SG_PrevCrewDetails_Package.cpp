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
	 * 		Name   -> PredefinedFunction USG_PrevCrewDetails_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USG_PrevCrewDetails_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SG_PrevCrewDetails.SG_PrevCrewDetails_C");
		return ptr;
	}

}


