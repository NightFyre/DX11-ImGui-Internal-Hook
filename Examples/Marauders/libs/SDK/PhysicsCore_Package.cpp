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
	 * 		Name   -> PredefinedFunction UPhysicalMaterial.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhysicalMaterial::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PhysicsCore.PhysicalMaterial");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBodySetupCore.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBodySetupCore::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PhysicsCore.BodySetupCore");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChaosPhysicalMaterial.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChaosPhysicalMaterial::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PhysicsCore.ChaosPhysicalMaterial");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPhysicalMaterialPropertyBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhysicalMaterialPropertyBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PhysicsCore.PhysicalMaterialPropertyBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPhysicsSettingsCore.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhysicsSettingsCore::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PhysicsCore.PhysicsSettingsCore");
		return ptr;
	}

}


