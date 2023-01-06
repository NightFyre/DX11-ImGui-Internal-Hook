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
	 * 		Name   -> PredefinedFunction UCamShake_ShootHeavy_Long01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCamShake_ShootHeavy_Long01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CamShake_ShootHeavy_Long01.CamShake_ShootHeavy_Long01_C");
		return ptr;
	}

}


