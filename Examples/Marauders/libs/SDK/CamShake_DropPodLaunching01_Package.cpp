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
	 * 		Name   -> PredefinedFunction UCamShake_DropPodLaunching01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCamShake_DropPodLaunching01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CamShake_DropPodLaunching01.CamShake_DropPodLaunching01_C");
		return ptr;
	}

}


