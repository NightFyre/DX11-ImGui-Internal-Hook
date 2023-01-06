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
	 * 		Name   -> PredefinedFunction UCustomDmgType_FallDamage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomDmgType_FallDamage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CustomDmgType_FallDamage.CustomDmgType_FallDamage_C");
		return ptr;
	}

}


