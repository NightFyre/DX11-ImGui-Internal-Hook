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
	 * 		Name   -> PredefinedFunction UBP_ArmoryOverlay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ArmoryOverlay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ArmoryOverlay.BP_ArmoryOverlay_C");
		return ptr;
	}

}


