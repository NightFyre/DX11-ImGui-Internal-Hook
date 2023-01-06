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
	 * 		Name   -> PredefinedFunction ULightPropagationVolumeBlendable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightPropagationVolumeBlendable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LightPropagationVolumeRuntime.LightPropagationVolumeBlendable");
		return ptr;
	}

}


