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
	 * 		Name   -> PredefinedFunction ASeq_FastFrig_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASeq_FastFrig_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Seq_FastFrig.Seq_FastFrig_C");
		return ptr;
	}

}


