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
	 * 		Name   -> PredefinedFunction AInGame_BowGun_50Cal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AInGame_BowGun_50Cal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass InGame_BowGun_50Cal.InGame_BowGun_50Cal_C");
		return ptr;
	}

}


