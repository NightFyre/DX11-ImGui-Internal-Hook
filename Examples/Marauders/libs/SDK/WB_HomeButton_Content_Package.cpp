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
	 * 		Name   -> PredefinedFunction UWB_HomeButton_Content_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_HomeButton_Content_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_HomeButton_Content.WB_HomeButton_Content_C");
		return ptr;
	}

}


