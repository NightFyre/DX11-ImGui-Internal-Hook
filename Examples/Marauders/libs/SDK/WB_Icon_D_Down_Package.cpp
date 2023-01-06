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
	 * 		Name   -> PredefinedFunction UWB_Icon_D_Down_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_Icon_D_Down_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_Icon_D_Down.WB_Icon_D_Down_C");
		return ptr;
	}

}


