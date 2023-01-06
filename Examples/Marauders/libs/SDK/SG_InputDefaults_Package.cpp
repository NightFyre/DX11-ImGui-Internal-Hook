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
	 * 		Name   -> PredefinedFunction USG_InputDefaults_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USG_InputDefaults_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SG_InputDefaults.SG_InputDefaults_C");
		return ptr;
	}

}


