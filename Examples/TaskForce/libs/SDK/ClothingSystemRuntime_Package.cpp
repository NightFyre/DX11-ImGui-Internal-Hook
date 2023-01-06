/**
 * Name: Task_Force
 * Version: 0.3.6.1537
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
	 * 		Name   -> PredefinedFunction UClothingAssetCustomData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClothingAssetCustomData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ClothingSystemRuntime.ClothingAssetCustomData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClothingAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClothingAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ClothingSystemRuntime.ClothingAsset");
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
			ptr = UObject::FindClass("Class ClothingSystemRuntime.ClothingSimulationFactoryNv");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C788C0
	 * 		Name   -> Function ClothingSystemRuntime.ClothingSimulationInteractorNv.SetAnimDriveSpringStiffness
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InStiffness                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UClothingSimulationInteractorNv::SetAnimDriveSpringStiffness(float InStiffness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntime.ClothingSimulationInteractorNv.SetAnimDriveSpringStiffness");
		
		UClothingSimulationInteractorNv_SetAnimDriveSpringStiffness_Params params {};
		params.InStiffness = InStiffness;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C78840
	 * 		Name   -> Function ClothingSystemRuntime.ClothingSimulationInteractorNv.SetAnimDriveDamperStiffness
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InStiffness                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UClothingSimulationInteractorNv::SetAnimDriveDamperStiffness(float InStiffness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntime.ClothingSimulationInteractorNv.SetAnimDriveDamperStiffness");
		
		UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Params params {};
		params.InStiffness = InStiffness;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C787B0
	 * 		Name   -> Function ClothingSystemRuntime.ClothingSimulationInteractorNv.EnableGravityOverride
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     InVector                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UClothingSimulationInteractorNv::EnableGravityOverride(const struct FVector& InVector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntime.ClothingSimulationInteractorNv.EnableGravityOverride");
		
		UClothingSimulationInteractorNv_EnableGravityOverride_Params params {};
		params.InVector = InVector;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C78790
	 * 		Name   -> Function ClothingSystemRuntime.ClothingSimulationInteractorNv.DisableGravityOverride
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UClothingSimulationInteractorNv::DisableGravityOverride()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntime.ClothingSimulationInteractorNv.DisableGravityOverride");
		
		UClothingSimulationInteractorNv_DisableGravityOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
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
			ptr = UObject::FindClass("Class ClothingSystemRuntime.ClothingSimulationInteractorNv");
		return ptr;
	}

}


