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
	 * 		Name   -> PredefinedFunction UCustomDmgType_LifeSupportDamage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomDmgType_LifeSupportDamage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CustomDmgType_LifeSupportDamage.CustomDmgType_LifeSupportDamage_C");
		return ptr;
	}

}


