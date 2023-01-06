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
	 * 		Name   -> PredefinedFunction ASeq_VIPFrig_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASeq_VIPFrig_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Seq_VIPFrig.Seq_VIPFrig_C");
		return ptr;
	}

}


