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
	 * 		Name   -> PredefinedFunction AWeapShip_Impacts_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapShip_Impacts_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapShip_Impacts.WeapShip_Impacts_C");
		return ptr;
	}

}


