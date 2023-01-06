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
	 * 		Name   -> Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.SetAnimationBudgetParameters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAnimationBudgetAllocatorParameters         InParameters                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAnimationBudgetBlueprintLibrary::SetAnimationBudgetParameters(class UObject* WorldContextObject, const struct FAnimationBudgetAllocatorParameters& InParameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.SetAnimationBudgetParameters");
		
		UAnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.InParameters = InParameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.EnableAnimationBudget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnimationBudgetBlueprintLibrary::EnableAnimationBudget(class UObject* WorldContextObject, bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.EnableAnimationBudget");
		
		UAnimationBudgetBlueprintLibrary_EnableAnimationBudget_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimationBudgetBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimationBudgetBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimationBudgetAllocator.SkeletalMeshComponentBudgeted.SetAutoRegisterWithBudgetAllocator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInAutoRegisterWithBudgetAllocator                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USkeletalMeshComponentBudgeted::SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimationBudgetAllocator.SkeletalMeshComponentBudgeted.SetAutoRegisterWithBudgetAllocator");
		
		USkeletalMeshComponentBudgeted_SetAutoRegisterWithBudgetAllocator_Params params {};
		params.bInAutoRegisterWithBudgetAllocator = bInAutoRegisterWithBudgetAllocator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkeletalMeshComponentBudgeted.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkeletalMeshComponentBudgeted::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted");
		return ptr;
	}

}


