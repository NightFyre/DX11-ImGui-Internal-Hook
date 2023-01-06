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
	 * 		Name   -> PredefinedFunction URaiderChar01_Recoil_CtrlRig_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaiderChar01_Recoil_CtrlRig_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("ControlRigBlueprintGeneratedClass RaiderChar01_Recoil_CtrlRig.RaiderChar01_Recoil_CtrlRig_C");
		return ptr;
	}

}


