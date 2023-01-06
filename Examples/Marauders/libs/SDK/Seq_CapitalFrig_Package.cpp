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
	 * 		Name   -> PredefinedFunction ASeq_CapitalFrig_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASeq_CapitalFrig_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Seq_CapitalFrig.Seq_CapitalFrig_C");
		return ptr;
	}

}


