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
	 * 		Name   -> PredefinedFunction AProjRocket_Explosion_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjRocket_Explosion_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProjRocket_Explosion.ProjRocket_Explosion_C");
		return ptr;
	}

}


