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
	 * 		Name   -> PredefinedFunction UWB_Icon_D_Up_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_Icon_D_Up_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_Icon_D_Up.WB_Icon_D_Up_C");
		return ptr;
	}

}


