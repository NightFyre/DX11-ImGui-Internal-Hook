/**
 * Name: Task_Force
 * Version: 0.3.6.1537
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Projectile_M67_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Projectile_M67_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Projectile_M67.BP_Projectile_M67_C");
		return ptr;
	}

}


