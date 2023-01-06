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
	 * 		RVA    -> 0x004A11D0
	 * 		Name   -> Function CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FCustomMeshTriangle>                 Triangles                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UCustomMeshComponent::SetCustomMeshTriangles(TArray<struct FCustomMeshTriangle> Triangles)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles");
		
		UCustomMeshComponent_SetCustomMeshTriangles_Params params {};
		params.Triangles = Triangles;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A11B0
	 * 		Name   -> Function CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCustomMeshComponent::ClearCustomMeshTriangles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles");
		
		UCustomMeshComponent_ClearCustomMeshTriangles_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A1100
	 * 		Name   -> Function CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FCustomMeshTriangle>                 Triangles                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCustomMeshComponent::AddCustomMeshTriangles(TArray<struct FCustomMeshTriangle> Triangles)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles");
		
		UCustomMeshComponent_AddCustomMeshTriangles_Params params {};
		params.Triangles = Triangles;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CustomMeshComponent.CustomMeshComponent");
		return ptr;
	}

}


