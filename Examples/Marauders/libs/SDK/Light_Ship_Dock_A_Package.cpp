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
	 * 		Name   -> PredefinedFunction ALight_Ship_Dock_A_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALight_Ship_Dock_A_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Light_Ship_Dock_A.Light_Ship_Dock_A_C");
		return ptr;
	}

}


