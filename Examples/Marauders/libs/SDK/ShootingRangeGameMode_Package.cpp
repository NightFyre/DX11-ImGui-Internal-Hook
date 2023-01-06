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
	 * 		Name   -> PredefinedFunction AShootingRangeGameMode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShootingRangeGameMode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ShootingRangeGameMode.ShootingRangeGameMode_C");
		return ptr;
	}

}


