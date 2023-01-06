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
	 * 		Name   -> PredefinedFunction UChaosClothConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChaosClothConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ChaosCloth.ChaosClothConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChaosClothSharedSimConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChaosClothSharedSimConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ChaosCloth.ChaosClothSharedSimConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChaosClothingSimulationFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChaosClothingSimulationFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ChaosCloth.ChaosClothingSimulationFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChaosClothingSimulationInteractor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChaosClothingSimulationInteractor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ChaosCloth.ChaosClothingSimulationInteractor");
		return ptr;
	}

}


