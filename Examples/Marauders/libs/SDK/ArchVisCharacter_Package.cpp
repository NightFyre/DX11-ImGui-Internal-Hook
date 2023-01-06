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
	 * 		Name   -> PredefinedFunction AArchVisCharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AArchVisCharacter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ArchVisCharacter.ArchVisCharacter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArchVisCharMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArchVisCharMovementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ArchVisCharacter.ArchVisCharMovementComponent");
		return ptr;
	}

}


