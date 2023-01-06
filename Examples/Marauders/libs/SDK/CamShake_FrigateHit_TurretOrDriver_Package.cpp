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
	 * 		Name   -> PredefinedFunction UCamShake_FrigateHit_TurretOrDriver_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCamShake_FrigateHit_TurretOrDriver_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CamShake_FrigateHit_TurretOrDriver.CamShake_FrigateHit_TurretOrDriver_C");
		return ptr;
	}

}


