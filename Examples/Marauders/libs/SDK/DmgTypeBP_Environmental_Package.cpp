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
	 * 		Name   -> PredefinedFunction UDmgTypeBP_Environmental_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDmgTypeBP_Environmental_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DmgTypeBP_Environmental.DmgTypeBP_Environmental_C");
		return ptr;
	}

}


