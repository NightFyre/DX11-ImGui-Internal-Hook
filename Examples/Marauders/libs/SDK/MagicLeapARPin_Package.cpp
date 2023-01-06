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
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinComponent.UnPin
	 * 		Flags  -> ()
	 */
	void UMagicLeapARPinComponent::UnPin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.UnPin");
		
		UMagicLeapARPinComponent_UnPin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinComponent.TryGetPinData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      InPinDataClass                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               OutPinDataValid                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMagicLeapARPinSaveGame* UMagicLeapARPinComponent::TryGetPinData(class UClass* InPinDataClass, bool* OutPinDataValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.TryGetPinData");
		
		UMagicLeapARPinComponent_TryGetPinData_Params params {};
		params.InPinDataClass = InPinDataClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPinDataValid != nullptr)
			*OutPinDataValid = params.OutPinDataValid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinComponent.PinToRestoredOrSyncedID
	 * 		Flags  -> ()
	 */
	bool UMagicLeapARPinComponent::PinToRestoredOrSyncedID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.PinToRestoredOrSyncedID");
		
		UMagicLeapARPinComponent_PinToRestoredOrSyncedID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinComponent.PinToID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       PinId                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapARPinComponent::PinToID(const struct FGuid& PinId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.PinToID");
		
		UMagicLeapARPinComponent_PinToID_Params params {};
		params.PinId = PinId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinComponent.PinToBestFit
	 * 		Flags  -> ()
	 */
	void UMagicLeapARPinComponent::PinToBestFit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.PinToBestFit");
		
		UMagicLeapARPinComponent_PinToBestFit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinComponent.PinSceneComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             ComponentToPin                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapARPinComponent::PinSceneComponent(class USceneComponent* ComponentToPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.PinSceneComponent");
		
		UMagicLeapARPinComponent_PinSceneComponent_Params params {};
		params.ComponentToPin = ComponentToPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinComponent.PinRestoredOrSynced
	 * 		Flags  -> ()
	 */
	bool UMagicLeapARPinComponent::PinRestoredOrSynced()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.PinRestoredOrSynced");
		
		UMagicLeapARPinComponent_PinRestoredOrSynced_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinComponent.PinActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ActorToPin                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapARPinComponent::PinActor(class AActor* ActorToPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.PinActor");
		
		UMagicLeapARPinComponent_PinActor_Params params {};
		params.ActorToPin = ActorToPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinned__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bRestoredOrSynced                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMagicLeapARPinComponent::PersistentEntityPinned__DelegateSignature(bool bRestoredOrSynced)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinned__DelegateSignature");
		
		UMagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature_Params params {};
		params.bRestoredOrSynced = bRestoredOrSynced;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinLost__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMagicLeapARPinComponent::PersistentEntityPinLost__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinLost__DelegateSignature");
		
		UMagicLeapARPinComponent_PersistentEntityPinLost__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bDataRestored                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMagicLeapARPinComponent::MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature(bool bDataRestored)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature");
		
		UMagicLeapARPinComponent_MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature_Params params {};
		params.bDataRestored = bDataRestored;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinComponent.IsPinned
	 * 		Flags  -> ()
	 */
	bool UMagicLeapARPinComponent::IsPinned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.IsPinned");
		
		UMagicLeapARPinComponent_IsPinned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinComponent.GetPinState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMagicLeapARPinState                        State                                                      (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapARPinComponent::GetPinState(struct FMagicLeapARPinState* State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.GetPinState");
		
		UMagicLeapARPinComponent_GetPinState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (State != nullptr)
			*State = params.State;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinComponent.GetPinnedPinID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       PinId                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapARPinComponent::GetPinnedPinID(struct FGuid* PinId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.GetPinnedPinID");
		
		UMagicLeapARPinComponent_GetPinnedPinID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PinId != nullptr)
			*PinId = params.PinId;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinComponent.GetPinData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      PinDataClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMagicLeapARPinSaveGame* UMagicLeapARPinComponent::GetPinData(class UClass* PinDataClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.GetPinData");
		
		UMagicLeapARPinComponent_GetPinData_Params params {};
		params.PinDataClass = PinDataClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinComponent.AttemptPinDataRestorationAsync
	 * 		Flags  -> ()
	 */
	void UMagicLeapARPinComponent::AttemptPinDataRestorationAsync()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.AttemptPinDataRestorationAsync");
		
		UMagicLeapARPinComponent_AttemptPinDataRestorationAsync_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinComponent.AttemptPinDataRestoration
	 * 		Flags  -> ()
	 */
	bool UMagicLeapARPinComponent::AttemptPinDataRestoration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.AttemptPinDataRestoration");
		
		UMagicLeapARPinComponent_AttemptPinDataRestoration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMagicLeapARPinComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMagicLeapARPinComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeapARPin.MagicLeapARPinComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapContentBindingFoundDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Delegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMagicLeapARPinFunctionLibrary::UnBindToOnMagicLeapContentBindingFoundDelegate(const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapContentBindingFoundDelegate");
		
		UMagicLeapARPinFunctionLibrary_UnBindToOnMagicLeapContentBindingFoundDelegate_Params params {};
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapARPinUpdatedDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Delegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMagicLeapARPinFunctionLibrary::UnBindToOnMagicLeapARPinUpdatedDelegate(const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapARPinUpdatedDelegate");
		
		UMagicLeapARPinFunctionLibrary_UnBindToOnMagicLeapARPinUpdatedDelegate_Params params {};
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.SetGlobalQueryFilter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMagicLeapARPinQuery                        InGlobalFilter                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::SetGlobalQueryFilter(const struct FMagicLeapARPinQuery& InGlobalFilter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.SetGlobalQueryFilter");
		
		UMagicLeapARPinFunctionLibrary_SetGlobalQueryFilter_Params params {};
		params.InGlobalFilter = InGlobalFilter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.SetContentBindingSaveGameUserIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMagicLeapARPinFunctionLibrary::SetContentBindingSaveGameUserIndex(int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.SetContentBindingSaveGameUserIndex");
		
		UMagicLeapARPinFunctionLibrary_SetContentBindingSaveGameUserIndex_Params params {};
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.QueryARPins
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMagicLeapARPinQuery                        Query                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FGuid>                               Pins                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::QueryARPins(const struct FMagicLeapARPinQuery& Query, TArray<struct FGuid>* Pins)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.QueryARPins");
		
		UMagicLeapARPinFunctionLibrary_QueryARPins_Params params {};
		params.Query = Query;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Pins != nullptr)
			*Pins = params.Pins;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.ParseStringToARPinId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PinIdString                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGuid                                       ARPinId                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapARPinFunctionLibrary::ParseStringToARPinId(const class FString& PinIdString, struct FGuid* ARPinId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.ParseStringToARPinId");
		
		UMagicLeapARPinFunctionLibrary_ParseStringToARPinId_Params params {};
		params.PinIdString = PinIdString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ARPinId != nullptr)
			*ARPinId = params.ARPinId;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.IsTrackerValid
	 * 		Flags  -> ()
	 */
	bool UMagicLeapARPinFunctionLibrary::IsTrackerValid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.IsTrackerValid");
		
		UMagicLeapARPinFunctionLibrary_IsTrackerValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetNumAvailableARPins
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::GetNumAvailableARPins(int32_t* Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetNumAvailableARPins");
		
		UMagicLeapARPinFunctionLibrary_GetNumAvailableARPins_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Count != nullptr)
			*Count = params.Count;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetGlobalQueryFilter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMagicLeapARPinQuery                        CurrentGlobalFilter                                        (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::GetGlobalQueryFilter(struct FMagicLeapARPinQuery* CurrentGlobalFilter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetGlobalQueryFilter");
		
		UMagicLeapARPinFunctionLibrary_GetGlobalQueryFilter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentGlobalFilter != nullptr)
			*CurrentGlobalFilter = params.CurrentGlobalFilter;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetContentBindingSaveGameUserIndex
	 * 		Flags  -> ()
	 */
	int32_t UMagicLeapARPinFunctionLibrary::GetContentBindingSaveGameUserIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetContentBindingSaveGameUserIndex");
		
		UMagicLeapARPinFunctionLibrary_GetContentBindingSaveGameUserIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetClosestARPin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     SearchPoint                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGuid                                       PinId                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::GetClosestARPin(const struct FVector& SearchPoint, struct FGuid* PinId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetClosestARPin");
		
		UMagicLeapARPinFunctionLibrary_GetClosestARPin_Params params {};
		params.SearchPoint = SearchPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PinId != nullptr)
			*PinId = params.PinId;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetAvailableARPins
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumRequested                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FGuid>                               Pins                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::GetAvailableARPins(int32_t NumRequested, TArray<struct FGuid>* Pins)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetAvailableARPins");
		
		UMagicLeapARPinFunctionLibrary_GetAvailableARPins_Params params {};
		params.NumRequested = NumRequested;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Pins != nullptr)
			*Pins = params.Pins;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinStateToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMagicLeapARPinState                        State                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UMagicLeapARPinFunctionLibrary::GetARPinStateToString(const struct FMagicLeapARPinState& State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinStateToString");
		
		UMagicLeapARPinFunctionLibrary_GetARPinStateToString_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       PinId                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMagicLeapARPinState                        State                                                      (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::GetARPinState(const struct FGuid& PinId, struct FMagicLeapARPinState* State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinState");
		
		UMagicLeapARPinFunctionLibrary_GetARPinState_Params params {};
		params.PinId = PinId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (State != nullptr)
			*State = params.State;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation_TrackingSpace
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       PinId                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Orientation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               PinFoundInEnvironment                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapARPinFunctionLibrary::GetARPinPositionAndOrientation_TrackingSpace(const struct FGuid& PinId, struct FVector* Position, struct FRotator* Orientation, bool* PinFoundInEnvironment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation_TrackingSpace");
		
		UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_TrackingSpace_Params params {};
		params.PinId = PinId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Position != nullptr)
			*Position = params.Position;
		if (Orientation != nullptr)
			*Orientation = params.Orientation;
		if (PinFoundInEnvironment != nullptr)
			*PinFoundInEnvironment = params.PinFoundInEnvironment;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       PinId                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Orientation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               PinFoundInEnvironment                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapARPinFunctionLibrary::GetARPinPositionAndOrientation(const struct FGuid& PinId, struct FVector* Position, struct FRotator* Orientation, bool* PinFoundInEnvironment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation");
		
		UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_Params params {};
		params.PinId = PinId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Position != nullptr)
			*Position = params.Position;
		if (Orientation != nullptr)
			*Orientation = params.Orientation;
		if (PinFoundInEnvironment != nullptr)
			*PinFoundInEnvironment = params.PinFoundInEnvironment;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.DestroyTracker
	 * 		Flags  -> ()
	 */
	EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::DestroyTracker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.DestroyTracker");
		
		UMagicLeapARPinFunctionLibrary_DestroyTracker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.CreateTracker
	 * 		Flags  -> ()
	 */
	EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::CreateTracker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.CreateTracker");
		
		UMagicLeapARPinFunctionLibrary_CreateTracker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapContentBindingFoundDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Delegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMagicLeapARPinFunctionLibrary::BindToOnMagicLeapContentBindingFoundDelegate(const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapContentBindingFoundDelegate");
		
		UMagicLeapARPinFunctionLibrary_BindToOnMagicLeapContentBindingFoundDelegate_Params params {};
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapARPinUpdatedDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Delegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMagicLeapARPinFunctionLibrary::BindToOnMagicLeapARPinUpdatedDelegate(const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapARPinUpdatedDelegate");
		
		UMagicLeapARPinFunctionLibrary_BindToOnMagicLeapARPinUpdatedDelegate_Params params {};
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.ARPinIdToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       ARPinId                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UMagicLeapARPinFunctionLibrary::ARPinIdToString(const struct FGuid& ARPinId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.ARPinIdToString");
		
		UMagicLeapARPinFunctionLibrary_ARPinIdToString_Params params {};
		params.ARPinId = ARPinId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMagicLeapARPinFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMagicLeapARPinFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeapARPin.MagicLeapARPinFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinInfoActorBase.OnUpdateARPinState
	 * 		Flags  -> ()
	 */
	void AMagicLeapARPinInfoActorBase::OnUpdateARPinState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinInfoActorBase.OnUpdateARPinState");
		
		AMagicLeapARPinInfoActorBase_OnUpdateARPinState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMagicLeapARPinInfoActorBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMagicLeapARPinInfoActorBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeapARPin.MagicLeapARPinInfoActorBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPin.MagicLeapARPinRenderer.SetVisibilityOverride
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InVisibilityOverride                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMagicLeapARPinRenderer::SetVisibilityOverride(bool InVisibilityOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinRenderer.SetVisibilityOverride");
		
		AMagicLeapARPinRenderer_SetVisibilityOverride_Params params {};
		params.InVisibilityOverride = InVisibilityOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMagicLeapARPinRenderer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMagicLeapARPinRenderer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeapARPin.MagicLeapARPinRenderer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMagicLeapARPinSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMagicLeapARPinSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeapARPin.MagicLeapARPinSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMagicLeapARPinSaveGame.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMagicLeapARPinSaveGame::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeapARPin.MagicLeapARPinSaveGame");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMagicLeapARPinContentBindings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMagicLeapARPinContentBindings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeapARPin.MagicLeapARPinContentBindings");
		return ptr;
	}

}


