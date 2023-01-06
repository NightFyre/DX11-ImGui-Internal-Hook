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
	 * 		Name   -> PredefinedFunction UClothConfigNv.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClothConfigNv::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ClothingSystemRuntimeNv.ClothConfigNv");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClothingSimulationFactoryNv.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClothingSimulationFactoryNv::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ClothingSystemRuntimeNv.ClothingSimulationFactoryNv");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.SetAnimDriveDamperStiffness
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InStiffness                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UClothingSimulationInteractorNv::SetAnimDriveDamperStiffness(float InStiffness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.SetAnimDriveDamperStiffness");
		
		UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Params params {};
		params.InStiffness = InStiffness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClothingSimulationInteractorNv.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClothingSimulationInteractorNv::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ClothingSystemRuntimeNv.ClothingSimulationInteractorNv");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClothPhysicalMeshDataNv_Legacy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClothPhysicalMeshDataNv_Legacy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv_Legacy");
		return ptr;
	}

}


