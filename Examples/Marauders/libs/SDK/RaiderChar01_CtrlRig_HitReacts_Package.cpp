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
	 * 		Name   -> PredefinedFunction URaiderChar01_CtrlRig_HitReacts_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaiderChar01_CtrlRig_HitReacts_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("ControlRigBlueprintGeneratedClass RaiderChar01_CtrlRig_HitReacts.RaiderChar01_CtrlRig_HitReacts_C");
		return ptr;
	}

}


