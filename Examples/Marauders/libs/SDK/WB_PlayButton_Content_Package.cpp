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
	 * 		Name   -> PredefinedFunction UWB_PlayButton_Content_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_PlayButton_Content_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_PlayButton_Content.WB_PlayButton_Content_C");
		return ptr;
	}

}


