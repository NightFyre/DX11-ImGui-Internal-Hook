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
	 * 		Name   -> PredefinedFunction ADestructibleActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADestructibleActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ApexDestruction.DestructibleActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ApexDestruction.DestructibleComponent.SetDestructibleMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDestructibleMesh*                           NewMesh                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDestructibleComponent::SetDestructibleMesh(class UDestructibleMesh* NewMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ApexDestruction.DestructibleComponent.SetDestructibleMesh");
		
		UDestructibleComponent_SetDestructibleMesh_Params params {};
		params.NewMesh = NewMesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ApexDestruction.DestructibleComponent.GetDestructibleMesh
	 * 		Flags  -> ()
	 */
	class UDestructibleMesh* UDestructibleComponent::GetDestructibleMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ApexDestruction.DestructibleComponent.GetDestructibleMesh");
		
		UDestructibleComponent_GetDestructibleMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ApexDestruction.DestructibleComponent.ApplyRadiusDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              BaseDamage                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     HurtOrigin                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DamageRadius                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ImpulseStrength                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFullDamage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDestructibleComponent::ApplyRadiusDamage(float BaseDamage, const struct FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ApexDestruction.DestructibleComponent.ApplyRadiusDamage");
		
		UDestructibleComponent_ApplyRadiusDamage_Params params {};
		params.BaseDamage = BaseDamage;
		params.HurtOrigin = HurtOrigin;
		params.DamageRadius = DamageRadius;
		params.ImpulseStrength = ImpulseStrength;
		params.bFullDamage = bFullDamage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ApexDestruction.DestructibleComponent.ApplyDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DamageAmount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     HitLocation                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ImpulseDir                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ImpulseStrength                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDestructibleComponent::ApplyDamage(float DamageAmount, const struct FVector& HitLocation, const struct FVector& ImpulseDir, float ImpulseStrength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ApexDestruction.DestructibleComponent.ApplyDamage");
		
		UDestructibleComponent_ApplyDamage_Params params {};
		params.DamageAmount = DamageAmount;
		params.HitLocation = HitLocation;
		params.ImpulseDir = ImpulseDir;
		params.ImpulseStrength = ImpulseStrength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDestructibleComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDestructibleComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ApexDestruction.DestructibleComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDestructibleFractureSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDestructibleFractureSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ApexDestruction.DestructibleFractureSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDestructibleMesh.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDestructibleMesh::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ApexDestruction.DestructibleMesh");
		return ptr;
	}

}


