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
	 * 		Name   -> Function NetworkPredictionExtras.BaseMovementComponent.PhysicsVolumeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APhysicsVolume*                              NewVolume                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBaseMovementComponent::PhysicsVolumeChanged(class APhysicsVolume* NewVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkPredictionExtras.BaseMovementComponent.PhysicsVolumeChanged");
		
		UBaseMovementComponent_PhysicsVolumeChanged_Params params {};
		params.NewVolume = NewVolume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NetworkPredictionExtras.BaseMovementComponent.OnBeginOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComp                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Other                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UBaseMovementComponent::OnBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkPredictionExtras.BaseMovementComponent.OnBeginOverlap");
		
		UBaseMovementComponent_OnBeginOverlap_Params params {};
		params.OverlappedComp = OverlappedComp;
		params.Other = Other;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseMovementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NetworkPredictionExtras.BaseMovementComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFlyingMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlyingMovementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NetworkPredictionExtras.FlyingMovementComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction NetworkPredictionExtras.MockFlyingAbilityComponent.MockAbilityPhysicsGunFireEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHasCooldown                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector_NetQuantize100>              HitLocations                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              ElapsedTimeSeconds                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMockFlyingAbilityComponent::MockAbilityPhysicsGunFireEvent__DelegateSignature(const struct FVector& Start, const struct FVector& End, bool bHasCooldown, TArray<struct FVector_NetQuantize100> HitLocations, float ElapsedTimeSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction NetworkPredictionExtras.MockFlyingAbilityComponent.MockAbilityPhysicsGunFireEvent__DelegateSignature");
		
		UMockFlyingAbilityComponent_MockAbilityPhysicsGunFireEvent__DelegateSignature_Params params {};
		params.Start = Start;
		params.End = End;
		params.bHasCooldown = bHasCooldown;
		params.HitLocations = HitLocations;
		params.ElapsedTimeSeconds = ElapsedTimeSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction NetworkPredictionExtras.MockFlyingAbilityComponent.MockAbilityNotifyStateChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewStateValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMockFlyingAbilityComponent::MockAbilityNotifyStateChange__DelegateSignature(bool bNewStateValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction NetworkPredictionExtras.MockFlyingAbilityComponent.MockAbilityNotifyStateChange__DelegateSignature");
		
		UMockFlyingAbilityComponent_MockAbilityNotifyStateChange__DelegateSignature_Params params {};
		params.bNewStateValue = bNewStateValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction NetworkPredictionExtras.MockFlyingAbilityComponent.MockAbilityBlinkCueRollback__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMockFlyingAbilityComponent::MockAbilityBlinkCueRollback__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction NetworkPredictionExtras.MockFlyingAbilityComponent.MockAbilityBlinkCueRollback__DelegateSignature");
		
		UMockFlyingAbilityComponent_MockAbilityBlinkCueRollback__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction NetworkPredictionExtras.MockFlyingAbilityComponent.MockAbilityBlinkCueEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     DestinationLocation                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            RandomValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ElapsedTimeSeconds                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMockFlyingAbilityComponent::MockAbilityBlinkCueEvent__DelegateSignature(const struct FVector& DestinationLocation, int32_t RandomValue, float ElapsedTimeSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction NetworkPredictionExtras.MockFlyingAbilityComponent.MockAbilityBlinkCueEvent__DelegateSignature");
		
		UMockFlyingAbilityComponent_MockAbilityBlinkCueEvent__DelegateSignature_Params params {};
		params.DestinationLocation = DestinationLocation;
		params.RandomValue = RandomValue;
		params.ElapsedTimeSeconds = ElapsedTimeSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NetworkPredictionExtras.MockFlyingAbilityComponent.IsSprinting
	 * 		Flags  -> ()
	 */
	bool UMockFlyingAbilityComponent::IsSprinting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkPredictionExtras.MockFlyingAbilityComponent.IsSprinting");
		
		UMockFlyingAbilityComponent_IsSprinting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NetworkPredictionExtras.MockFlyingAbilityComponent.IsDashing
	 * 		Flags  -> ()
	 */
	bool UMockFlyingAbilityComponent::IsDashing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkPredictionExtras.MockFlyingAbilityComponent.IsDashing");
		
		UMockFlyingAbilityComponent_IsDashing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NetworkPredictionExtras.MockFlyingAbilityComponent.IsBlinking
	 * 		Flags  -> ()
	 */
	bool UMockFlyingAbilityComponent::IsBlinking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkPredictionExtras.MockFlyingAbilityComponent.IsBlinking");
		
		UMockFlyingAbilityComponent_IsBlinking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NetworkPredictionExtras.MockFlyingAbilityComponent.GetStamina
	 * 		Flags  -> ()
	 */
	float UMockFlyingAbilityComponent::GetStamina()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkPredictionExtras.MockFlyingAbilityComponent.GetStamina");
		
		UMockFlyingAbilityComponent_GetStamina_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NetworkPredictionExtras.MockFlyingAbilityComponent.GetMaxStamina
	 * 		Flags  -> ()
	 */
	float UMockFlyingAbilityComponent::GetMaxStamina()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkPredictionExtras.MockFlyingAbilityComponent.GetMaxStamina");
		
		UMockFlyingAbilityComponent_GetMaxStamina_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NetworkPredictionExtras.MockFlyingAbilityComponent.GetBlinkWarmupTimeSeconds
	 * 		Flags  -> ()
	 */
	float UMockFlyingAbilityComponent::GetBlinkWarmupTimeSeconds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkPredictionExtras.MockFlyingAbilityComponent.GetBlinkWarmupTimeSeconds");
		
		UMockFlyingAbilityComponent_GetBlinkWarmupTimeSeconds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMockFlyingAbilityComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMockFlyingAbilityComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NetworkPredictionExtras.MockFlyingAbilityComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMockNetworkSimulationComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMockNetworkSimulationComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NetworkPredictionExtras.MockNetworkSimulationComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMockPhysicsComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMockPhysicsComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NetworkPredictionExtras.MockPhysicsComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NetworkPredictionExtras.MockRootMotionComponent.PlayRootMotionSourceByClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMockRootMotionComponent::PlayRootMotionSourceByClass(class UClass* Source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkPredictionExtras.MockRootMotionComponent.PlayRootMotionSourceByClass");
		
		UMockRootMotionComponent_PlayRootMotionSourceByClass_Params params {};
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NetworkPredictionExtras.MockRootMotionComponent.PlayRootMotionSource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMockRootMotionSource*                       Source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMockRootMotionComponent::PlayRootMotionSource(class UMockRootMotionSource* Source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkPredictionExtras.MockRootMotionComponent.PlayRootMotionSource");
		
		UMockRootMotionComponent_PlayRootMotionSource_Params params {};
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NetworkPredictionExtras.MockRootMotionComponent.Input_PlayRootMotionSourceByClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMockRootMotionComponent::Input_PlayRootMotionSourceByClass(class UClass* Source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkPredictionExtras.MockRootMotionComponent.Input_PlayRootMotionSourceByClass");
		
		UMockRootMotionComponent_Input_PlayRootMotionSourceByClass_Params params {};
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NetworkPredictionExtras.MockRootMotionComponent.Input_PlayRootMotionSource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMockRootMotionSource*                       Source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMockRootMotionComponent::Input_PlayRootMotionSource(class UMockRootMotionSource* Source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkPredictionExtras.MockRootMotionComponent.Input_PlayRootMotionSource");
		
		UMockRootMotionComponent_Input_PlayRootMotionSource_Params params {};
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NetworkPredictionExtras.MockRootMotionComponent.CreateRootMotionSource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMockRootMotionSource* UMockRootMotionComponent::CreateRootMotionSource(class UClass* Source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkPredictionExtras.MockRootMotionComponent.CreateRootMotionSource");
		
		UMockRootMotionComponent_CreateRootMotionSource_Params params {};
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMockRootMotionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMockRootMotionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NetworkPredictionExtras.MockRootMotionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMockRootMotionSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMockRootMotionSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NetworkPredictionExtras.MockRootMotionSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMockRootMotionSourceClassMap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMockRootMotionSourceClassMap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NetworkPredictionExtras.MockRootMotionSourceClassMap");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMockRootMotionSource_Montage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMockRootMotionSource_Montage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NetworkPredictionExtras.MockRootMotionSource_Montage");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMockRootMotionSource_Curve.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMockRootMotionSource_Curve::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NetworkPredictionExtras.MockRootMotionSource_Curve");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NetworkPredictionExtras.MockRootMotionSource_MoveToLocation.SetDestination
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     InDestination                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMockRootMotionSource_MoveToLocation::SetDestination(const struct FVector& InDestination)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkPredictionExtras.MockRootMotionSource_MoveToLocation.SetDestination");
		
		UMockRootMotionSource_MoveToLocation_SetDestination_Params params {};
		params.InDestination = InDestination;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMockRootMotionSource_MoveToLocation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMockRootMotionSource_MoveToLocation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NetworkPredictionExtras.MockRootMotionSource_MoveToLocation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NetworkPredictionExtras.NetworkPredictionExtrasFlyingPawn.SetMaxMoveSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewMaxMoveSpeed                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANetworkPredictionExtrasFlyingPawn::SetMaxMoveSpeed(float NewMaxMoveSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkPredictionExtras.NetworkPredictionExtrasFlyingPawn.SetMaxMoveSpeed");
		
		ANetworkPredictionExtrasFlyingPawn_SetMaxMoveSpeed_Params params {};
		params.NewMaxMoveSpeed = NewMaxMoveSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NetworkPredictionExtras.NetworkPredictionExtrasFlyingPawn.PrintDebug
	 * 		Flags  -> ()
	 */
	void ANetworkPredictionExtrasFlyingPawn::PrintDebug()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkPredictionExtras.NetworkPredictionExtrasFlyingPawn.PrintDebug");
		
		ANetworkPredictionExtrasFlyingPawn_PrintDebug_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NetworkPredictionExtras.NetworkPredictionExtrasFlyingPawn.GetMaxMoveSpeed
	 * 		Flags  -> ()
	 */
	float ANetworkPredictionExtrasFlyingPawn::GetMaxMoveSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkPredictionExtras.NetworkPredictionExtrasFlyingPawn.GetMaxMoveSpeed");
		
		ANetworkPredictionExtrasFlyingPawn_GetMaxMoveSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NetworkPredictionExtras.NetworkPredictionExtrasFlyingPawn.AddMaxMoveSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AdditiveMaxMoveSpeed                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANetworkPredictionExtrasFlyingPawn::AddMaxMoveSpeed(float AdditiveMaxMoveSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkPredictionExtras.NetworkPredictionExtrasFlyingPawn.AddMaxMoveSpeed");
		
		ANetworkPredictionExtrasFlyingPawn_AddMaxMoveSpeed_Params params {};
		params.AdditiveMaxMoveSpeed = AdditiveMaxMoveSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANetworkPredictionExtrasFlyingPawn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANetworkPredictionExtrasFlyingPawn::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NetworkPredictionExtras.NetworkPredictionExtrasFlyingPawn");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NetworkPredictionExtras.NetworkPredictionExtrasFlyingPawn_MockAbility.GetStamina
	 * 		Flags  -> ()
	 */
	float ANetworkPredictionExtrasFlyingPawn_MockAbility::GetStamina()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkPredictionExtras.NetworkPredictionExtrasFlyingPawn_MockAbility.GetStamina");
		
		ANetworkPredictionExtrasFlyingPawn_MockAbility_GetStamina_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NetworkPredictionExtras.NetworkPredictionExtrasFlyingPawn_MockAbility.GetMockFlyingAbilityComponent
	 * 		Flags  -> ()
	 */
	class UMockFlyingAbilityComponent* ANetworkPredictionExtrasFlyingPawn_MockAbility::GetMockFlyingAbilityComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkPredictionExtras.NetworkPredictionExtrasFlyingPawn_MockAbility.GetMockFlyingAbilityComponent");
		
		ANetworkPredictionExtrasFlyingPawn_MockAbility_GetMockFlyingAbilityComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NetworkPredictionExtras.NetworkPredictionExtrasFlyingPawn_MockAbility.GetMaxStamina
	 * 		Flags  -> ()
	 */
	float ANetworkPredictionExtrasFlyingPawn_MockAbility::GetMaxStamina()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkPredictionExtras.NetworkPredictionExtrasFlyingPawn_MockAbility.GetMaxStamina");
		
		ANetworkPredictionExtrasFlyingPawn_MockAbility_GetMaxStamina_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANetworkPredictionExtrasFlyingPawn_MockAbility.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANetworkPredictionExtrasFlyingPawn_MockAbility::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NetworkPredictionExtras.NetworkPredictionExtrasFlyingPawn_MockAbility");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NetworkPredictionExtras.ParametricMovementComponent.EnableInterpolationMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UParametricMovementComponent::EnableInterpolationMode(bool bValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkPredictionExtras.ParametricMovementComponent.EnableInterpolationMode");
		
		UParametricMovementComponent_EnableInterpolationMode_Params params {};
		params.bValue = bValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UParametricMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UParametricMovementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NetworkPredictionExtras.ParametricMovementComponent");
		return ptr;
	}

}


