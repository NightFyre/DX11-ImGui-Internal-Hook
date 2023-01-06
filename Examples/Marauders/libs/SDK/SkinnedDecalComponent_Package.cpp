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
	 * 		Name   -> Function SkinnedDecalComponent.SkinnedDecalInstance.UpdateDecal
	 * 		Flags  -> ()
	 */
	void USkinnedDecalInstance::UpdateDecal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkinnedDecalComponent.SkinnedDecalInstance.UpdateDecal");
		
		USkinnedDecalInstance_UpdateDecal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkinnedDecalComponent.SkinnedDecalInstance.GetSampler
	 * 		Flags  -> ()
	 */
	class USkinnedDecalSampler* USkinnedDecalInstance::GetSampler()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkinnedDecalComponent.SkinnedDecalInstance.GetSampler");
		
		USkinnedDecalInstance_GetSampler_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkinnedDecalInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkinnedDecalInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SkinnedDecalComponent.SkinnedDecalInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkinnedDecalComponent.SkinnedDecalSampler.UpdateInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkinnedDecalInstance*                       Instance                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USkinnedDecalSampler::UpdateInstance(class USkinnedDecalInstance* Instance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkinnedDecalComponent.SkinnedDecalSampler.UpdateInstance");
		
		USkinnedDecalSampler_UpdateInstance_Params params {};
		params.Instance = Instance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkinnedDecalComponent.SkinnedDecalSampler.UpdateAllDecals
	 * 		Flags  -> ()
	 */
	void USkinnedDecalSampler::UpdateAllDecals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkinnedDecalComponent.SkinnedDecalSampler.UpdateAllDecals");
		
		USkinnedDecalSampler_UpdateAllDecals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkinnedDecalComponent.SkinnedDecalSampler.SpawnDecal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FQuat                                       Rotation                                                   (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FName                                        BoneName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Size                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SubUV                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USkinnedDecalSampler::SpawnDecal(const struct FVector& Location, const struct FQuat& Rotation, const class FName& BoneName, float Size, int32_t SubUV, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkinnedDecalComponent.SkinnedDecalSampler.SpawnDecal");
		
		USkinnedDecalSampler_SpawnDecal_Params params {};
		params.Location = Location;
		params.Rotation = Rotation;
		params.BoneName = BoneName;
		params.Size = Size;
		params.SubUV = SubUV;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkinnedDecalComponent.SkinnedDecalSampler.SetupMaterials
	 * 		Flags  -> ()
	 */
	void USkinnedDecalSampler::SetupMaterials()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkinnedDecalComponent.SkinnedDecalSampler.SetupMaterials");
		
		USkinnedDecalSampler_SetupMaterials_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkinnedDecalComponent.SkinnedDecalSampler.SetMeshComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      MeshComponent                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Child                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USkinnedDecalSampler::SetMeshComponent(class USkeletalMeshComponent* MeshComponent, bool Child)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkinnedDecalComponent.SkinnedDecalSampler.SetMeshComponent");
		
		USkinnedDecalSampler_SetMeshComponent_Params params {};
		params.MeshComponent = MeshComponent;
		params.Child = Child;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkinnedDecalComponent.SkinnedDecalSampler.RemoveDecal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USkinnedDecalSampler::RemoveDecal(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkinnedDecalComponent.SkinnedDecalSampler.RemoveDecal");
		
		USkinnedDecalSampler_RemoveDecal_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkinnedDecalComponent.SkinnedDecalSampler.GetDataTarget
	 * 		Flags  -> ()
	 */
	class UTextureRenderTarget2D* USkinnedDecalSampler::GetDataTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkinnedDecalComponent.SkinnedDecalSampler.GetDataTarget");
		
		USkinnedDecalSampler_GetDataTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkinnedDecalComponent.SkinnedDecalSampler.CloneDecals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkinnedDecalSampler*                        Source                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USkinnedDecalSampler::CloneDecals(class USkinnedDecalSampler* Source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkinnedDecalComponent.SkinnedDecalSampler.CloneDecals");
		
		USkinnedDecalSampler_CloneDecals_Params params {};
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkinnedDecalComponent.SkinnedDecalSampler.ClearAllDecals
	 * 		Flags  -> ()
	 */
	void USkinnedDecalSampler::ClearAllDecals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkinnedDecalComponent.SkinnedDecalSampler.ClearAllDecals");
		
		USkinnedDecalSampler_ClearAllDecals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkinnedDecalSampler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkinnedDecalSampler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SkinnedDecalComponent.SkinnedDecalSampler");
		return ptr;
	}

}


