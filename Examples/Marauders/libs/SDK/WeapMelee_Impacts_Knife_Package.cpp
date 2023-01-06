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
	 * 		Name   -> PredefinedFunction AWeapMelee_Impacts_Knife_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapMelee_Impacts_Knife_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapMelee_Impacts_Knife.WeapMelee_Impacts_Knife_C");
		return ptr;
	}

}


