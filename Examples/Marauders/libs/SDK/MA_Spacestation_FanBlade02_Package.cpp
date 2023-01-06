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
	 * 		Name   -> PredefinedFunction AMA_Spacestation_FanBlade02_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMA_Spacestation_FanBlade02_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MA_Spacestation_FanBlade02.MA_Spacestation_FanBlade02_C");
		return ptr;
	}

}


