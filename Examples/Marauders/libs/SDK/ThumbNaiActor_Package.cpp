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
	 * 		Name   -> PredefinedFunction AThumbNaiActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AThumbNaiActor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ThumbNaiActor.ThumbNaiActor_C");
		return ptr;
	}

}


