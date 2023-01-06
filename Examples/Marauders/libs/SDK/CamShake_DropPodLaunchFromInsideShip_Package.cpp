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
	 * 		Name   -> PredefinedFunction UCamShake_DropPodLaunchFromInsideShip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCamShake_DropPodLaunchFromInsideShip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CamShake_DropPodLaunchFromInsideShip.CamShake_DropPodLaunchFromInsideShip_C");
		return ptr;
	}

}


