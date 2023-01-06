/**
 * Name: Task_Force
 * Version: 0.3.6.1537
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
	 * 		Name   -> PredefinedFunction UOverlays.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOverlays::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Overlay.Overlays");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBasicOverlays.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBasicOverlays::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Overlay.BasicOverlays");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULocalizedOverlays.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULocalizedOverlays::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Overlay.LocalizedOverlays");
		return ptr;
	}

}


