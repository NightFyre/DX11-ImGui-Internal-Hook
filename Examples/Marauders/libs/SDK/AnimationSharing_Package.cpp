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
	 * 		Name   -> Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              Actors                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UAnimSharingStateInstance::GetInstancedActors(TArray<class AActor*>* Actors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors");
		
		UAnimSharingStateInstance_GetInstancedActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Actors != nullptr)
			*Actors = params.Actors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimSharingStateInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimSharingStateInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimationSharing.AnimSharingStateInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimSharingTransitionInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimSharingTransitionInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimationSharing.AnimSharingTransitionInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimSharingAdditiveInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimSharingAdditiveInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimationSharing.AnimSharingAdditiveInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimSharingInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimSharingInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimationSharing.AnimSharingInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkeleton*                                   SharingSkeleton                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnimationSharingManager::RegisterActorWithSkeletonBP(class AActor* InActor, class USkeleton* SharingSkeleton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP");
		
		UAnimationSharingManager_RegisterActorWithSkeletonBP_Params params {};
		params.InActor = InActor;
		params.SharingSkeleton = SharingSkeleton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimationSharing.AnimationSharingManager.GetAnimationSharingManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAnimationSharingManager* UAnimationSharingManager::GetAnimationSharingManager(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingManager.GetAnimationSharingManager");
		
		UAnimationSharingManager_GetAnimationSharingManager_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAnimationSharingSetup*                      Setup                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAnimationSharingManager::CreateAnimationSharingManager(class UObject* WorldContextObject, class UAnimationSharingSetup* Setup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager");
		
		UAnimationSharingManager_CreateAnimationSharingManager_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Setup = Setup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimationSharing.AnimationSharingManager.AnimationSharingEnabled
	 * 		Flags  -> ()
	 */
	bool UAnimationSharingManager::AnimationSharingEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingManager.AnimationSharingEnabled");
		
		UAnimationSharingManager_AnimationSharingEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimationSharingManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimationSharingManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimationSharing.AnimationSharingManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimationSharingSetup.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimationSharingSetup::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimationSharing.AnimationSharingSetup");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutState                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      InActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      CurrentState                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      OnDemandState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bShouldProcess                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnimationSharingStateProcessor::ProcessActorState(int32_t* OutState, class AActor* InActor, unsigned char CurrentState, unsigned char OnDemandState, bool* bShouldProcess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState");
		
		UAnimationSharingStateProcessor_ProcessActorState_Params params {};
		params.InActor = InActor;
		params.CurrentState = CurrentState;
		params.OnDemandState = OnDemandState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutState != nullptr)
			*OutState = params.OutState;
		if (bShouldProcess != nullptr)
			*bShouldProcess = params.bShouldProcess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum
	 * 		Flags  -> ()
	 */
	class UEnum* UAnimationSharingStateProcessor::GetAnimationStateEnum()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum");
		
		UAnimationSharingStateProcessor_GetAnimationStateEnum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimationSharingStateProcessor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimationSharingStateProcessor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimationSharing.AnimationSharingStateProcessor");
		return ptr;
	}

}


