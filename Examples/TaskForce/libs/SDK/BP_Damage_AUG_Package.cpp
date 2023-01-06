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
	 * 		Name   -> PredefinedFunction UBP_Damage_AUG_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Damage_AUG_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Damage_AUG.BP_Damage_AUG_C");
		return ptr;
	}

}


