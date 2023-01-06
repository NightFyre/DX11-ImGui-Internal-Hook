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
	 * 		RVA    -> 0x011F7900
	 * 		Name   -> Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FChaosTrailingEventData>             TrailingEvents                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EChaosTrailingSortMethod                           SortMethod                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosDestructionListener::SortTrailingEvents(TArray<struct FChaosTrailingEventData>* TrailingEvents, EChaosTrailingSortMethod SortMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents");
		
		UChaosDestructionListener_SortTrailingEvents_Params params {};
		params.SortMethod = SortMethod;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TrailingEvents != nullptr)
			*TrailingEvents = params.TrailingEvents;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011F7900
	 * 		Name   -> Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FChaosCollisionEventData>            CollisionEvents                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EChaosCollisionSortMethod                          SortMethod                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosDestructionListener::SortCollisionEvents(TArray<struct FChaosCollisionEventData>* CollisionEvents, EChaosCollisionSortMethod SortMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents");
		
		UChaosDestructionListener_SortCollisionEvents_Params params {};
		params.SortMethod = SortMethod;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CollisionEvents != nullptr)
			*CollisionEvents = params.CollisionEvents;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011F7900
	 * 		Name   -> Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FChaosBreakingEventData>             BreakingEvents                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EChaosBreakingSortMethod                           SortMethod                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosDestructionListener::SortBreakingEvents(TArray<struct FChaosBreakingEventData>* BreakingEvents, EChaosBreakingSortMethod SortMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents");
		
		UChaosDestructionListener_SortBreakingEvents_Params params {};
		params.SortMethod = SortMethod;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BreakingEvents != nullptr)
			*BreakingEvents = params.BreakingEvents;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011F7860
	 * 		Name   -> Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FChaosTrailingEventRequestSettings          InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UChaosDestructionListener::SetTrailingEventRequestSettings(const struct FChaosTrailingEventRequestSettings& InSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings");
		
		UChaosDestructionListener_SetTrailingEventRequestSettings_Params params {};
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011F77D0
	 * 		Name   -> Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bIsEnabled                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosDestructionListener::SetTrailingEventEnabled(bool bIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled");
		
		UChaosDestructionListener_SetTrailingEventEnabled_Params params {};
		params.bIsEnabled = bIsEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011F76A0
	 * 		Name   -> Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FChaosCollisionEventRequestSettings         InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UChaosDestructionListener::SetCollisionEventRequestSettings(const struct FChaosCollisionEventRequestSettings& InSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings");
		
		UChaosDestructionListener_SetCollisionEventRequestSettings_Params params {};
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011F7610
	 * 		Name   -> Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bIsEnabled                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosDestructionListener::SetCollisionEventEnabled(bool bIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled");
		
		UChaosDestructionListener_SetCollisionEventEnabled_Params params {};
		params.bIsEnabled = bIsEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011F7570
	 * 		Name   -> Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FChaosBreakingEventRequestSettings          InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UChaosDestructionListener::SetBreakingEventRequestSettings(const struct FChaosBreakingEventRequestSettings& InSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings");
		
		UChaosDestructionListener_SetBreakingEventRequestSettings_Params params {};
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011F74E0
	 * 		Name   -> Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bIsEnabled                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosDestructionListener::SetBreakingEventEnabled(bool bIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled");
		
		UChaosDestructionListener_SetBreakingEventEnabled_Params params {};
		params.bIsEnabled = bIsEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011F7460
	 * 		Name   -> Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AGeometryCollectionActor*                    GeometryCollectionActor                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosDestructionListener::RemoveGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor");
		
		UChaosDestructionListener_RemoveGeometryCollectionActor_Params params {};
		params.GeometryCollectionActor = GeometryCollectionActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011F73E0
	 * 		Name   -> Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AChaosSolverActor*                           ChaosSolverActor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosDestructionListener::RemoveChaosSolverActor(class AChaosSolverActor* ChaosSolverActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor");
		
		UChaosDestructionListener_RemoveChaosSolverActor_Params params {};
		params.ChaosSolverActor = ChaosSolverActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011F7250
	 * 		Name   -> Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UChaosDestructionListener::IsEventListening()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening");
		
		UChaosDestructionListener_IsEventListening_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011F6F90
	 * 		Name   -> Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AGeometryCollectionActor*                    GeometryCollectionActor                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosDestructionListener::AddGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor");
		
		UChaosDestructionListener_AddGeometryCollectionActor_Params params {};
		params.GeometryCollectionActor = GeometryCollectionActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011F6F10
	 * 		Name   -> Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AChaosSolverActor*                           ChaosSolverActor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosDestructionListener::AddChaosSolverActor(class AChaosSolverActor* ChaosSolverActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor");
		
		UChaosDestructionListener_AddChaosSolverActor_Params params {};
		params.ChaosSolverActor = ChaosSolverActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChaosDestructionListener.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChaosDestructionListener::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryCollectionEngine.ChaosDestructionListener");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011F7280
	 * 		Name   -> Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  OutHit                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool AGeometryCollectionActor::RaycastSingle(const struct FVector& Start, const struct FVector& End, struct FHitResult* OutHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle");
		
		AGeometryCollectionActor_RaycastSingle_Params params {};
		params.Start = Start;
		params.End = End;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHit != nullptr)
			*OutHit = params.OutHit;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGeometryCollectionActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGeometryCollectionActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryCollectionCache.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryCollectionCache::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionCache");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011F7740
	 * 		Name   -> Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bNewNotifyBreaks                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryCollectionComponent::SetNotifyBreaks(bool bNewNotifyBreaks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks");
		
		UGeometryCollectionComponent_SetNotifyBreaks_Params params {};
		params.bNewNotifyBreaks = bNewNotifyBreaks;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FChaosPhysicsCollisionInfo                  CollisionInfo                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UGeometryCollectionComponent::ReceivePhysicsCollision(const struct FChaosPhysicsCollisionInfo& CollisionInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision");
		
		UGeometryCollectionComponent_ReceivePhysicsCollision_Params params {};
		params.CollisionInfo = CollisionInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class UGeometryCollectionComponent*                FracturedComponent                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryCollectionComponent::NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature");
		
		UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Params params {};
		params.FracturedComponent = FracturedComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class UGeometryCollectionComponent*                FracturedComponent                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryCollectionComponent::NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature");
		
		UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Params params {};
		params.FracturedComponent = FracturedComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011F70E0
	 * 		Name   -> Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGeometryCollectionPhysicsTypeEnum                 Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFieldSystemMetaData*                        MetaData                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFieldNodeBase*                              Field                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryCollectionComponent::ApplyPhysicsField(bool Enabled, EGeometryCollectionPhysicsTypeEnum Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField");
		
		UGeometryCollectionComponent_ApplyPhysicsField_Params params {};
		params.Enabled = Enabled;
		params.Target = Target;
		params.MetaData = MetaData;
		params.Field = Field;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011F7010
	 * 		Name   -> Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryCollectionComponent::ApplyKinematicField(float Radius, const struct FVector& Position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField");
		
		UGeometryCollectionComponent_ApplyKinematicField_Params params {};
		params.Radius = Radius;
		params.Position = Position;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryCollectionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryCollectionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGeometryCollectionDebugDrawActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGeometryCollectionDebugDrawActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryCollectionDebugDrawComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryCollectionDebugDrawComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGeometryCollectionRenderLevelSetActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGeometryCollectionRenderLevelSetActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FChaosPhysicsCollisionInfo                  CollisionInfo                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void USkeletalMeshSimulationComponent::ReceivePhysicsCollision(const struct FChaosPhysicsCollisionInfo& CollisionInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision");
		
		USkeletalMeshSimulationComponent_ReceivePhysicsCollision_Params params {};
		params.CollisionInfo = CollisionInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkeletalMeshSimulationComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkeletalMeshSimulationComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryCollectionEngine.SkeletalMeshSimulationComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FChaosPhysicsCollisionInfo                  CollisionInfo                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UStaticMeshSimulationComponent::ReceivePhysicsCollision(const struct FChaosPhysicsCollisionInfo& CollisionInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision");
		
		UStaticMeshSimulationComponent_ReceivePhysicsCollision_Params params {};
		params.CollisionInfo = CollisionInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011F7230
	 * 		Name   -> Function GeometryCollectionEngine.StaticMeshSimulationComponent.ForceRecreatePhysicsState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UStaticMeshSimulationComponent::ForceRecreatePhysicsState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.StaticMeshSimulationComponent.ForceRecreatePhysicsState");
		
		UStaticMeshSimulationComponent_ForceRecreatePhysicsState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStaticMeshSimulationComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStaticMeshSimulationComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryCollectionEngine.StaticMeshSimulationComponent");
		return ptr;
	}

}


