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
	 * 		Name   -> Function AugmentedReality.ARActor.AddARComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      InComponentClass                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGuid                                       NativeID                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UARComponent* AARActor::AddARComponent(class UClass* InComponentClass, const struct FGuid& NativeID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARActor.AddARComponent");
		
		AARActor_AddARComponent_Params params {};
		params.InComponentClass = InComponentClass;
		params.NativeID = NativeID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AARActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AARActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.UnpinComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             ComponentToUnpin                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARBlueprintLibrary::UnpinComponent(class USceneComponent* ComponentToUnpin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.UnpinComponent");
		
		UARBlueprintLibrary_UnpinComponent_Params params {};
		params.ComponentToUnpin = ComponentToUnpin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.ToggleARCapture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOnOff                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EARCaptureType                                     CaptureType                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UARBlueprintLibrary::ToggleARCapture(bool bOnOff, EARCaptureType CaptureType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.ToggleARCapture");
		
		UARBlueprintLibrary_ToggleARCapture_Params params {};
		params.bOnOff = bOnOff;
		params.CaptureType = CaptureType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.StopARSession
	 * 		Flags  -> ()
	 */
	void UARBlueprintLibrary::StopARSession()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.StopARSession");
		
		UARBlueprintLibrary_StopARSession_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.StartARSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UARSessionConfig*                            SessionConfig                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARBlueprintLibrary::StartARSession(class UARSessionConfig* SessionConfig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.StartARSession");
		
		UARBlueprintLibrary_StartARSession_Params params {};
		params.SessionConfig = SessionConfig;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.SetEnabledXRCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOnOff                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARBlueprintLibrary::SetEnabledXRCamera(bool bOnOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.SetEnabledXRCamera");
		
		UARBlueprintLibrary_SetEnabledXRCamera_Params params {};
		params.bOnOff = bOnOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.SetARWorldScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InWorldScale                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARBlueprintLibrary::SetARWorldScale(float InWorldScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.SetARWorldScale");
		
		UARBlueprintLibrary_SetARWorldScale_Params params {};
		params.InWorldScale = InWorldScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.SetARWorldOriginLocationAndRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     OriginLocation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    OriginRotation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsTransformInWorldSpace                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMaintainUpDirection                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARBlueprintLibrary::SetARWorldOriginLocationAndRotation(const struct FVector& OriginLocation, const struct FRotator& OriginRotation, bool bIsTransformInWorldSpace, bool bMaintainUpDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.SetARWorldOriginLocationAndRotation");
		
		UARBlueprintLibrary_SetARWorldOriginLocationAndRotation_Params params {};
		params.OriginLocation = OriginLocation;
		params.OriginRotation = OriginRotation;
		params.bIsTransformInWorldSpace = bIsTransformInWorldSpace;
		params.bMaintainUpDirection = bMaintainUpDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  InAlignmentTransform                                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARBlueprintLibrary::SetAlignmentTransform(const struct FTransform& InAlignmentTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform");
		
		UARBlueprintLibrary_SetAlignmentTransform_Params params {};
		params.InAlignmentTransform = InAlignmentTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.SaveARPinToLocalStore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InSaveName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UARPin*                                      InPin                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UARBlueprintLibrary::SaveARPinToLocalStore(const class FName& InSaveName, class UARPin* InPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.SaveARPinToLocalStore");
		
		UARBlueprintLibrary_SaveARPinToLocalStore_Params params {};
		params.InSaveName = InSaveName;
		params.InPin = InPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.ResizeXRCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIntPoint                                   InSize                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FIntPoint UARBlueprintLibrary::ResizeXRCamera(const struct FIntPoint& InSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.ResizeXRCamera");
		
		UARBlueprintLibrary_ResizeXRCamera_Params params {};
		params.InSize = InSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.RemovePin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UARPin*                                      PinToRemove                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARBlueprintLibrary::RemovePin(class UARPin* PinToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.RemovePin");
		
		UARBlueprintLibrary_RemovePin_Params params {};
		params.PinToRemove = PinToRemove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.RemoveARPinFromLocalStore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InSaveName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARBlueprintLibrary::RemoveARPinFromLocalStore(const class FName& InSaveName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.RemoveARPinFromLocalStore");
		
		UARBlueprintLibrary_RemoveARPinFromLocalStore_Params params {};
		params.InSaveName = InSaveName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.RemoveAllARPinsFromLocalStore
	 * 		Flags  -> ()
	 */
	void UARBlueprintLibrary::RemoveAllARPinsFromLocalStore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.RemoveAllARPinsFromLocalStore");
		
		UARBlueprintLibrary_RemoveAllARPinsFromLocalStore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             ComponentToPin                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FARTraceResult                              TraceResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FName                                        DebugName                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UARPin* UARBlueprintLibrary::PinComponentToTraceResult(class USceneComponent* ComponentToPin, const struct FARTraceResult& TraceResult, const class FName& DebugName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult");
		
		UARBlueprintLibrary_PinComponentToTraceResult_Params params {};
		params.ComponentToPin = ComponentToPin;
		params.TraceResult = TraceResult;
		params.DebugName = DebugName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.PinComponentToARPin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             ComponentToPin                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UARPin*                                      Pin                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UARBlueprintLibrary::PinComponentToARPin(class USceneComponent* ComponentToPin, class UARPin* Pin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.PinComponentToARPin");
		
		UARBlueprintLibrary_PinComponentToARPin_Params params {};
		params.ComponentToPin = ComponentToPin;
		params.Pin = Pin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.PinComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             ComponentToPin                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  PinToWorldTransform                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UARTrackedGeometry*                          TrackedGeometry                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        DebugName                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UARPin* UARBlueprintLibrary::PinComponent(class USceneComponent* ComponentToPin, const struct FTransform& PinToWorldTransform, class UARTrackedGeometry* TrackedGeometry, const class FName& DebugName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.PinComponent");
		
		UARBlueprintLibrary_PinComponent_Params params {};
		params.ComponentToPin = ComponentToPin;
		params.PinToWorldTransform = PinToWorldTransform;
		params.TrackedGeometry = TrackedGeometry;
		params.DebugName = DebugName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.PauseARSession
	 * 		Flags  -> ()
	 */
	void UARBlueprintLibrary::PauseARSession()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.PauseARSession");
		
		UARBlueprintLibrary_PauseARSession_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.LoadARPinsFromLocalStore
	 * 		Flags  -> ()
	 */
	TMap<class FName, class UARPin*> UARBlueprintLibrary::LoadARPinsFromLocalStore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.LoadARPinsFromLocalStore");
		
		UARBlueprintLibrary_LoadARPinsFromLocalStore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTestFeaturePoints                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTestGroundPlane                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTestPlaneExtents                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTestPlaneBoundaryPolygon                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FARTraceResult> UARBlueprintLibrary::LineTraceTrackedObjects3D(const struct FVector& Start, const struct FVector& End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D");
		
		UARBlueprintLibrary_LineTraceTrackedObjects3D_Params params {};
		params.Start = Start;
		params.End = End;
		params.bTestFeaturePoints = bTestFeaturePoints;
		params.bTestGroundPlane = bTestGroundPlane;
		params.bTestPlaneExtents = bTestPlaneExtents;
		params.bTestPlaneBoundaryPolygon = bTestPlaneBoundaryPolygon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   ScreenCoord                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTestFeaturePoints                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTestGroundPlane                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTestPlaneExtents                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTestPlaneBoundaryPolygon                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FARTraceResult> UARBlueprintLibrary::LineTraceTrackedObjects(const struct FVector2D& ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects");
		
		UARBlueprintLibrary_LineTraceTrackedObjects_Params params {};
		params.ScreenCoord = ScreenCoord;
		params.bTestFeaturePoints = bTestFeaturePoints;
		params.bTestGroundPlane = bTestGroundPlane;
		params.bTestPlaneExtents = bTestPlaneExtents;
		params.bTestPlaneBoundaryPolygon = bTestPlaneBoundaryPolygon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EARSessionType                                     SessionType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UARBlueprintLibrary::IsSessionTypeSupported(EARSessionType SessionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported");
		
		UARBlueprintLibrary_IsSessionTypeSupported_Params params {};
		params.SessionType = SessionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EARSessionType                                     SessionType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EARSessionTrackingFeature                          SessionTrackingFeature                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UARBlueprintLibrary::IsSessionTrackingFeatureSupported(EARSessionType SessionType, EARSessionTrackingFeature SessionTrackingFeature)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported");
		
		UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Params params {};
		params.SessionType = SessionType;
		params.SessionTrackingFeature = SessionTrackingFeature;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.IsSceneReconstructionSupported
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EARSessionType                                     SessionType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EARSceneReconstruction                             SceneReconstructionMethod                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UARBlueprintLibrary::IsSceneReconstructionSupported(EARSessionType SessionType, EARSceneReconstruction SceneReconstructionMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.IsSceneReconstructionSupported");
		
		UARBlueprintLibrary_IsSceneReconstructionSupported_Params params {};
		params.SessionType = SessionType;
		params.SceneReconstructionMethod = SceneReconstructionMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.IsARSupported
	 * 		Flags  -> ()
	 */
	bool UARBlueprintLibrary::IsARSupported()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.IsARSupported");
		
		UARBlueprintLibrary_IsARSupported_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreSupported
	 * 		Flags  -> ()
	 */
	bool UARBlueprintLibrary::IsARPinLocalStoreSupported()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreSupported");
		
		UARBlueprintLibrary_IsARPinLocalStoreSupported_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreReady
	 * 		Flags  -> ()
	 */
	bool UARBlueprintLibrary::IsARPinLocalStoreReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreReady");
		
		UARBlueprintLibrary_IsARPinLocalStoreReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus
	 * 		Flags  -> ()
	 */
	EARWorldMappingState UARBlueprintLibrary::GetWorldMappingStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus");
		
		UARBlueprintLibrary_GetWorldMappingStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason
	 * 		Flags  -> ()
	 */
	EARTrackingQualityReason UARBlueprintLibrary::GetTrackingQualityReason()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason");
		
		UARBlueprintLibrary_GetTrackingQualityReason_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality
	 * 		Flags  -> ()
	 */
	EARTrackingQuality UARBlueprintLibrary::GetTrackingQuality()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality");
		
		UARBlueprintLibrary_GetTrackingQuality_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EARSessionType                                     SessionType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FARVideoFormat> UARBlueprintLibrary::GetSupportedVideoFormats(EARSessionType SessionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats");
		
		UARBlueprintLibrary_GetSupportedVideoFormats_Params params {};
		params.SessionType = SessionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig
	 * 		Flags  -> ()
	 */
	class UARSessionConfig* UARBlueprintLibrary::GetSessionConfig()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig");
		
		UARBlueprintLibrary_GetSessionConfig_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetPointCloud
	 * 		Flags  -> ()
	 */
	TArray<struct FVector> UARBlueprintLibrary::GetPointCloud()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetPointCloud");
		
		UARBlueprintLibrary_GetPointCloud_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage
	 * 		Flags  -> ()
	 */
	class UARTexture* UARBlueprintLibrary::GetPersonSegmentationImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage");
		
		UARBlueprintLibrary_GetPersonSegmentationImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage
	 * 		Flags  -> ()
	 */
	class UARTexture* UARBlueprintLibrary::GetPersonSegmentationDepthImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage");
		
		UARBlueprintLibrary_GetPersonSegmentationDepthImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetObjectClassificationAtLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     InWorldLocation                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EARObjectClassification                            OutClassification                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutClassificationLocation                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxLocationDiff                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UARBlueprintLibrary::GetObjectClassificationAtLocation(const struct FVector& InWorldLocation, EARObjectClassification* OutClassification, struct FVector* OutClassificationLocation, float MaxLocationDiff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetObjectClassificationAtLocation");
		
		UARBlueprintLibrary_GetObjectClassificationAtLocation_Params params {};
		params.InWorldLocation = InWorldLocation;
		params.MaxLocationDiff = MaxLocationDiff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutClassification != nullptr)
			*OutClassification = params.OutClassification;
		if (OutClassificationLocation != nullptr)
			*OutClassificationLocation = params.OutClassificationLocation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetNumberOfTrackedFacesSupported
	 * 		Flags  -> ()
	 */
	int32_t UARBlueprintLibrary::GetNumberOfTrackedFacesSupported()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetNumberOfTrackedFacesSupported");
		
		UARBlueprintLibrary_GetNumberOfTrackedFacesSupported_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate
	 * 		Flags  -> ()
	 */
	class UARLightEstimate* UARBlueprintLibrary::GetCurrentLightEstimate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate");
		
		UARBlueprintLibrary_GetCurrentLightEstimate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetCameraIntrinsics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARCameraIntrinsics                         OutCameraIntrinsics                                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UARBlueprintLibrary::GetCameraIntrinsics(struct FARCameraIntrinsics* OutCameraIntrinsics)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetCameraIntrinsics");
		
		UARBlueprintLibrary_GetCameraIntrinsics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutCameraIntrinsics != nullptr)
			*OutCameraIntrinsics = params.OutCameraIntrinsics;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetCameraImage
	 * 		Flags  -> ()
	 */
	class UARTextureCameraImage* UARBlueprintLibrary::GetCameraImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetCameraImage");
		
		UARBlueprintLibrary_GetCameraImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetCameraDepth
	 * 		Flags  -> ()
	 */
	class UARTextureCameraDepth* UARBlueprintLibrary::GetCameraDepth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetCameraDepth");
		
		UARBlueprintLibrary_GetCameraDepth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetARWorldScale
	 * 		Flags  -> ()
	 */
	float UARBlueprintLibrary::GetARWorldScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetARWorldScale");
		
		UARBlueprintLibrary_GetARWorldScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetARTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EARTextureType                                     TextureType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UARTexture* UARBlueprintLibrary::GetARTexture(EARTextureType TextureType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetARTexture");
		
		UARBlueprintLibrary_GetARTexture_Params params {};
		params.TextureType = TextureType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus
	 * 		Flags  -> ()
	 */
	struct FARSessionStatus UARBlueprintLibrary::GetARSessionStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus");
		
		UARBlueprintLibrary_GetARSessionStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses
	 * 		Flags  -> ()
	 */
	TArray<class UARTrackedPose*> UARBlueprintLibrary::GetAllTrackedPoses()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses");
		
		UARBlueprintLibrary_GetAllTrackedPoses_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints
	 * 		Flags  -> ()
	 */
	TArray<class UARTrackedPoint*> UARBlueprintLibrary::GetAllTrackedPoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints");
		
		UARBlueprintLibrary_GetAllTrackedPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes
	 * 		Flags  -> ()
	 */
	TArray<class UARPlaneGeometry*> UARBlueprintLibrary::GetAllTrackedPlanes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes");
		
		UARBlueprintLibrary_GetAllTrackedPlanes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages
	 * 		Flags  -> ()
	 */
	TArray<class UARTrackedImage*> UARBlueprintLibrary::GetAllTrackedImages()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages");
		
		UARBlueprintLibrary_GetAllTrackedImages_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes
	 * 		Flags  -> ()
	 */
	TArray<class UAREnvironmentCaptureProbe*> UARBlueprintLibrary::GetAllTrackedEnvironmentCaptureProbes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes");
		
		UARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses
	 * 		Flags  -> ()
	 */
	TArray<struct FARPose2D> UARBlueprintLibrary::GetAllTracked2DPoses()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses");
		
		UARBlueprintLibrary_GetAllTracked2DPoses_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllPins
	 * 		Flags  -> ()
	 */
	TArray<class UARPin*> UARBlueprintLibrary::GetAllPins()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllPins");
		
		UARBlueprintLibrary_GetAllPins_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllGeometriesByClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      GeometryClass                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UARTrackedGeometry*> UARBlueprintLibrary::GetAllGeometriesByClass(class UClass* GeometryClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllGeometriesByClass");
		
		UARBlueprintLibrary_GetAllGeometriesByClass_Params params {};
		params.GeometryClass = GeometryClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries
	 * 		Flags  -> ()
	 */
	TArray<class UARTrackedGeometry*> UARBlueprintLibrary::GetAllGeometries()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries");
		
		UARBlueprintLibrary_GetAllGeometries_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAlignmentTransform
	 * 		Flags  -> ()
	 */
	struct FTransform UARBlueprintLibrary::GetAlignmentTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAlignmentTransform");
		
		UARBlueprintLibrary_GetAlignmentTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.FindTrackedPointsByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PointName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UARTrackedPoint*> UARBlueprintLibrary::FindTrackedPointsByName(const class FString& PointName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.FindTrackedPointsByName");
		
		UARBlueprintLibrary_FindTrackedPointsByName_Params params {};
		params.PointName = PointName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UARTrackedGeometry*                          TrackedGeometry                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutlineThickness                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PersistForSeconds                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARBlueprintLibrary::DebugDrawTrackedGeometry(class UARTrackedGeometry* TrackedGeometry, class UObject* WorldContextObject, const struct FLinearColor& Color, float OutlineThickness, float PersistForSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry");
		
		UARBlueprintLibrary_DebugDrawTrackedGeometry_Params params {};
		params.TrackedGeometry = TrackedGeometry;
		params.WorldContextObject = WorldContextObject;
		params.Color = Color;
		params.OutlineThickness = OutlineThickness;
		params.PersistForSeconds = PersistForSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UARPin*                                      ARPin                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PersistForSeconds                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARBlueprintLibrary::DebugDrawPin(class UARPin* ARPin, class UObject* WorldContextObject, const struct FLinearColor& Color, float Scale, float PersistForSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin");
		
		UARBlueprintLibrary_DebugDrawPin_Params params {};
		params.ARPin = ARPin;
		params.WorldContextObject = WorldContextObject;
		params.Color = Color;
		params.Scale = Scale;
		params.PersistForSeconds = PersistForSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.CalculateClosestIntersection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVector>                             StartPoints                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                             endpoints                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ClosestIntersection                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARBlueprintLibrary::CalculateClosestIntersection(TArray<struct FVector> StartPoints, TArray<struct FVector> endpoints, struct FVector* ClosestIntersection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.CalculateClosestIntersection");
		
		UARBlueprintLibrary_CalculateClosestIntersection_Params params {};
		params.StartPoints = StartPoints;
		params.endpoints = endpoints;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClosestIntersection != nullptr)
			*ClosestIntersection = params.ClosestIntersection;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.CalculateAlignmentTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  TransformInFirstCoordinateSystem                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  TransformInSecondCoordinateSystem                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  AlignmentTransform                                         (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARBlueprintLibrary::CalculateAlignmentTransform(const struct FTransform& TransformInFirstCoordinateSystem, const struct FTransform& TransformInSecondCoordinateSystem, struct FTransform* AlignmentTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.CalculateAlignmentTransform");
		
		UARBlueprintLibrary_CalculateAlignmentTransform_Params params {};
		params.TransformInFirstCoordinateSystem = TransformInFirstCoordinateSystem;
		params.TransformInSecondCoordinateSystem = TransformInSecondCoordinateSystem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AlignmentTransform != nullptr)
			*AlignmentTransform = params.AlignmentTransform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.AddTrackedPointWithName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  WorldTransform                                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      PointName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeletePointsWithSameName                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UARBlueprintLibrary::AddTrackedPointWithName(const struct FTransform& WorldTransform, const class FString& PointName, bool bDeletePointsWithSameName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.AddTrackedPointWithName");
		
		UARBlueprintLibrary_AddTrackedPointWithName_Params params {};
		params.WorldTransform = WorldTransform;
		params.PointName = PointName;
		params.bDeletePointsWithSameName = bDeletePointsWithSameName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UARSessionConfig*                            SessionConfig                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  CandidateTexture                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FriendlyName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PhysicalWidth                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UARCandidateImage* UARBlueprintLibrary::AddRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, const class FString& FriendlyName, float PhysicalWidth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage");
		
		UARBlueprintLibrary_AddRuntimeCandidateImage_Params params {};
		params.SessionConfig = SessionConfig;
		params.CandidateTexture = CandidateTexture;
		params.FriendlyName = FriendlyName;
		params.PhysicalWidth = PhysicalWidth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Extent                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UARBlueprintLibrary::AddManualEnvironmentCaptureProbe(const struct FVector& Location, const struct FVector& Extent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe");
		
		UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Params params {};
		params.Location = Location;
		params.Extent = Extent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARTraceResult                              TraceResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UARTrackedGeometry* UARTraceResultLibrary::GetTrackedGeometry(const struct FARTraceResult& TraceResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry");
		
		UARTraceResultLibrary_GetTrackedGeometry_Params params {};
		params.TraceResult = TraceResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARTraceResult                              TraceResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	EARLineTraceChannels UARTraceResultLibrary::GetTraceChannel(const struct FARTraceResult& TraceResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel");
		
		UARTraceResultLibrary_GetTraceChannel_Params params {};
		params.TraceResult = TraceResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARTraceResultLibrary.GetLocalTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARTraceResult                              TraceResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FTransform UARTraceResultLibrary::GetLocalTransform(const struct FARTraceResult& TraceResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetLocalTransform");
		
		UARTraceResultLibrary_GetLocalTransform_Params params {};
		params.TraceResult = TraceResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARTraceResult                              TraceResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FTransform UARTraceResultLibrary::GetLocalToWorldTransform(const struct FARTraceResult& TraceResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform");
		
		UARTraceResultLibrary_GetLocalToWorldTransform_Params params {};
		params.TraceResult = TraceResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARTraceResult                              TraceResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FTransform UARTraceResultLibrary::GetLocalToTrackingTransform(const struct FARTraceResult& TraceResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform");
		
		UARTraceResultLibrary_GetLocalToTrackingTransform_Params params {};
		params.TraceResult = TraceResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARTraceResult                              TraceResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	float UARTraceResultLibrary::GetDistanceFromCamera(const struct FARTraceResult& TraceResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera");
		
		UARTraceResultLibrary_GetDistanceFromCamera_Params params {};
		params.TraceResult = TraceResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARTraceResultLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTraceResultLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTraceResultLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARBaseAsyncTaskBlueprintProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARBaseAsyncTaskBlueprintProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UARSaveWorldAsyncTaskBlueprintProxy* UARSaveWorldAsyncTaskBlueprintProxy::ARSaveWorld(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld");
		
		UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARSaveWorldAsyncTaskBlueprintProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARSaveWorldAsyncTaskBlueprintProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Extent                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UARGetCandidateObjectAsyncTaskBlueprintProxy* UARGetCandidateObjectAsyncTaskBlueprintProxy::ARGetCandidateObject(class UObject* WorldContextObject, const struct FVector& Location, const struct FVector& Extent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject");
		
		UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Location = Location;
		params.Extent = Extent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARGetCandidateObjectAsyncTaskBlueprintProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARGetCandidateObjectAsyncTaskBlueprintProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARComponent.UpdateVisualization
	 * 		Flags  -> ()
	 */
	void UARComponent::UpdateVisualization()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARComponent.UpdateVisualization");
		
		UARComponent_UpdateVisualization_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARComponent.SetNativeID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       NativeID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARComponent::SetNativeID(const struct FGuid& NativeID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARComponent.SetNativeID");
		
		UARComponent_SetNativeID_Params params {};
		params.NativeID = NativeID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARComponent.ReceiveRemove
	 * 		Flags  -> ()
	 */
	void UARComponent::ReceiveRemove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARComponent.ReceiveRemove");
		
		UARComponent_ReceiveRemove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARComponent.OnRep_Payload
	 * 		Flags  -> ()
	 */
	void UARComponent::OnRep_Payload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARComponent.OnRep_Payload");
		
		UARComponent_OnRep_Payload_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARComponent.GetMRMesh
	 * 		Flags  -> ()
	 */
	class UMRMeshComponent* UARComponent::GetMRMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARComponent.GetMRMesh");
		
		UARComponent_GetMRMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPlaneComponent.SetPlaneComponentDebugMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPlaneComponentDebugMode                           NewDebugMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARPlaneComponent::SetPlaneComponentDebugMode(EPlaneComponentDebugMode NewDebugMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneComponent.SetPlaneComponentDebugMode");
		
		UARPlaneComponent_SetPlaneComponentDebugMode_Params params {};
		params.NewDebugMode = NewDebugMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPlaneComponent.SetObjectClassificationDebugColors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<EARObjectClassification, struct FLinearColor> InColors                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UARPlaneComponent::SetObjectClassificationDebugColors(TMap<EARObjectClassification, struct FLinearColor> InColors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneComponent.SetObjectClassificationDebugColors");
		
		UARPlaneComponent_SetObjectClassificationDebugColors_Params params {};
		params.InColors = InColors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPlaneComponent.ServerUpdatePayload
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARPlaneUpdatePayload                       NewPayload                                                 (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UARPlaneComponent::ServerUpdatePayload(const struct FARPlaneUpdatePayload& NewPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneComponent.ServerUpdatePayload");
		
		UARPlaneComponent_ServerUpdatePayload_Params params {};
		params.NewPayload = NewPayload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPlaneComponent.ReceiveUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARPlaneUpdatePayload                       Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UARPlaneComponent::ReceiveUpdate(const struct FARPlaneUpdatePayload& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneComponent.ReceiveUpdate");
		
		UARPlaneComponent_ReceiveUpdate_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPlaneComponent.ReceiveAdd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARPlaneUpdatePayload                       Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UARPlaneComponent::ReceiveAdd(const struct FARPlaneUpdatePayload& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneComponent.ReceiveAdd");
		
		UARPlaneComponent_ReceiveAdd_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPlaneComponent.GetObjectClassificationDebugColors
	 * 		Flags  -> ()
	 */
	TMap<EARObjectClassification, struct FLinearColor> UARPlaneComponent::GetObjectClassificationDebugColors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneComponent.GetObjectClassificationDebugColors");
		
		UARPlaneComponent_GetObjectClassificationDebugColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARPlaneComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARPlaneComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARPlaneComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPointComponent.ServerUpdatePayload
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARPointUpdatePayload                       NewPayload                                                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARPointComponent::ServerUpdatePayload(const struct FARPointUpdatePayload& NewPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPointComponent.ServerUpdatePayload");
		
		UARPointComponent_ServerUpdatePayload_Params params {};
		params.NewPayload = NewPayload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPointComponent.ReceiveUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARPointUpdatePayload                       Payload                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARPointComponent::ReceiveUpdate(const struct FARPointUpdatePayload& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPointComponent.ReceiveUpdate");
		
		UARPointComponent_ReceiveUpdate_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPointComponent.ReceiveAdd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARPointUpdatePayload                       Payload                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARPointComponent::ReceiveAdd(const struct FARPointUpdatePayload& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPointComponent.ReceiveAdd");
		
		UARPointComponent_ReceiveAdd_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARPointComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARPointComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARPointComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARFaceComponent.SetFaceComponentDebugMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFaceComponentDebugMode                            NewDebugMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARFaceComponent::SetFaceComponentDebugMode(EFaceComponentDebugMode NewDebugMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceComponent.SetFaceComponentDebugMode");
		
		UARFaceComponent_SetFaceComponentDebugMode_Params params {};
		params.NewDebugMode = NewDebugMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARFaceComponent.ServerUpdatePayload
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARFaceUpdatePayload                        NewPayload                                                 (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARFaceComponent::ServerUpdatePayload(const struct FARFaceUpdatePayload& NewPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceComponent.ServerUpdatePayload");
		
		UARFaceComponent_ServerUpdatePayload_Params params {};
		params.NewPayload = NewPayload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARFaceComponent.ReceiveUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARFaceUpdatePayload                        Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARFaceComponent::ReceiveUpdate(const struct FARFaceUpdatePayload& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceComponent.ReceiveUpdate");
		
		UARFaceComponent_ReceiveUpdate_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARFaceComponent.ReceiveAdd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARFaceUpdatePayload                        Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARFaceComponent::ReceiveAdd(const struct FARFaceUpdatePayload& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceComponent.ReceiveAdd");
		
		UARFaceComponent_ReceiveAdd_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARFaceComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARFaceComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARFaceComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARImageComponent.SetImageComponentDebugMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EImageComponentDebugMode                           NewDebugMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARImageComponent::SetImageComponentDebugMode(EImageComponentDebugMode NewDebugMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARImageComponent.SetImageComponentDebugMode");
		
		UARImageComponent_SetImageComponentDebugMode_Params params {};
		params.NewDebugMode = NewDebugMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARImageComponent.ServerUpdatePayload
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARImageUpdatePayload                       NewPayload                                                 (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARImageComponent::ServerUpdatePayload(const struct FARImageUpdatePayload& NewPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARImageComponent.ServerUpdatePayload");
		
		UARImageComponent_ServerUpdatePayload_Params params {};
		params.NewPayload = NewPayload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARImageComponent.ReceiveUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARImageUpdatePayload                       Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARImageComponent::ReceiveUpdate(const struct FARImageUpdatePayload& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARImageComponent.ReceiveUpdate");
		
		UARImageComponent_ReceiveUpdate_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARImageComponent.ReceiveAdd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARImageUpdatePayload                       Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARImageComponent::ReceiveAdd(const struct FARImageUpdatePayload& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARImageComponent.ReceiveAdd");
		
		UARImageComponent_ReceiveAdd_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARImageComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARImageComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARImageComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARQRCodeComponent.SetQRCodeComponentDebugMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EQRCodeComponentDebugMode                          NewDebugMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARQRCodeComponent::SetQRCodeComponentDebugMode(EQRCodeComponentDebugMode NewDebugMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARQRCodeComponent.SetQRCodeComponentDebugMode");
		
		UARQRCodeComponent_SetQRCodeComponentDebugMode_Params params {};
		params.NewDebugMode = NewDebugMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARQRCodeComponent.ServerUpdatePayload
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARQRCodeUpdatePayload                      NewPayload                                                 (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UARQRCodeComponent::ServerUpdatePayload(const struct FARQRCodeUpdatePayload& NewPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARQRCodeComponent.ServerUpdatePayload");
		
		UARQRCodeComponent_ServerUpdatePayload_Params params {};
		params.NewPayload = NewPayload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARQRCodeComponent.ReceiveUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARQRCodeUpdatePayload                      Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UARQRCodeComponent::ReceiveUpdate(const struct FARQRCodeUpdatePayload& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARQRCodeComponent.ReceiveUpdate");
		
		UARQRCodeComponent_ReceiveUpdate_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARQRCodeComponent.ReceiveAdd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARQRCodeUpdatePayload                      Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UARQRCodeComponent::ReceiveAdd(const struct FARQRCodeUpdatePayload& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARQRCodeComponent.ReceiveAdd");
		
		UARQRCodeComponent_ReceiveAdd_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARQRCodeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARQRCodeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARQRCodeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPoseComponent.SetPoseComponentDebugMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPoseComponentDebugMode                            NewDebugMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARPoseComponent::SetPoseComponentDebugMode(EPoseComponentDebugMode NewDebugMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPoseComponent.SetPoseComponentDebugMode");
		
		UARPoseComponent_SetPoseComponentDebugMode_Params params {};
		params.NewDebugMode = NewDebugMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPoseComponent.ServerUpdatePayload
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARPoseUpdatePayload                        NewPayload                                                 (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UARPoseComponent::ServerUpdatePayload(const struct FARPoseUpdatePayload& NewPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPoseComponent.ServerUpdatePayload");
		
		UARPoseComponent_ServerUpdatePayload_Params params {};
		params.NewPayload = NewPayload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPoseComponent.ReceiveUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARPoseUpdatePayload                        Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UARPoseComponent::ReceiveUpdate(const struct FARPoseUpdatePayload& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPoseComponent.ReceiveUpdate");
		
		UARPoseComponent_ReceiveUpdate_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPoseComponent.ReceiveAdd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARPoseUpdatePayload                        Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UARPoseComponent::ReceiveAdd(const struct FARPoseUpdatePayload& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPoseComponent.ReceiveAdd");
		
		UARPoseComponent_ReceiveAdd_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARPoseComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARPoseComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARPoseComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.AREnvironmentProbeComponent.ServerUpdatePayload
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAREnvironmentProbeUpdatePayload            NewPayload                                                 (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAREnvironmentProbeComponent::ServerUpdatePayload(const struct FAREnvironmentProbeUpdatePayload& NewPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.AREnvironmentProbeComponent.ServerUpdatePayload");
		
		UAREnvironmentProbeComponent_ServerUpdatePayload_Params params {};
		params.NewPayload = NewPayload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.AREnvironmentProbeComponent.ReceiveUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAREnvironmentProbeUpdatePayload            Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAREnvironmentProbeComponent::ReceiveUpdate(const struct FAREnvironmentProbeUpdatePayload& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.AREnvironmentProbeComponent.ReceiveUpdate");
		
		UAREnvironmentProbeComponent_ReceiveUpdate_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.AREnvironmentProbeComponent.ReceiveAdd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAREnvironmentProbeUpdatePayload            Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAREnvironmentProbeComponent::ReceiveAdd(const struct FAREnvironmentProbeUpdatePayload& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.AREnvironmentProbeComponent.ReceiveAdd");
		
		UAREnvironmentProbeComponent_ReceiveAdd_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAREnvironmentProbeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAREnvironmentProbeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.AREnvironmentProbeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARObjectComponent.ServerUpdatePayload
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARObjectUpdatePayload                      NewPayload                                                 (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARObjectComponent::ServerUpdatePayload(const struct FARObjectUpdatePayload& NewPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARObjectComponent.ServerUpdatePayload");
		
		UARObjectComponent_ServerUpdatePayload_Params params {};
		params.NewPayload = NewPayload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARObjectComponent.ReceiveUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARObjectUpdatePayload                      Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARObjectComponent::ReceiveUpdate(const struct FARObjectUpdatePayload& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARObjectComponent.ReceiveUpdate");
		
		UARObjectComponent_ReceiveUpdate_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARObjectComponent.ReceiveAdd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARObjectUpdatePayload                      Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARObjectComponent::ReceiveAdd(const struct FARObjectUpdatePayload& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARObjectComponent.ReceiveAdd");
		
		UARObjectComponent_ReceiveAdd_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARObjectComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARObjectComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARObjectComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARMeshComponent.ServerUpdatePayload
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARMeshUpdatePayload                        NewPayload                                                 (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARMeshComponent::ServerUpdatePayload(const struct FARMeshUpdatePayload& NewPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARMeshComponent.ServerUpdatePayload");
		
		UARMeshComponent_ServerUpdatePayload_Params params {};
		params.NewPayload = NewPayload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARMeshComponent.ReceiveUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARMeshUpdatePayload                        Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARMeshComponent::ReceiveUpdate(const struct FARMeshUpdatePayload& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARMeshComponent.ReceiveUpdate");
		
		UARMeshComponent_ReceiveUpdate_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARMeshComponent.ReceiveAdd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARMeshUpdatePayload                        Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARMeshComponent::ReceiveAdd(const struct FARMeshUpdatePayload& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARMeshComponent.ReceiveAdd");
		
		UARMeshComponent_ReceiveAdd_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARMeshComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARGeoAnchorComponent.SetGeoAnchorComponentDebugMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGeoAnchorComponentDebugMode                       NewDebugMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARGeoAnchorComponent::SetGeoAnchorComponentDebugMode(EGeoAnchorComponentDebugMode NewDebugMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoAnchorComponent.SetGeoAnchorComponentDebugMode");
		
		UARGeoAnchorComponent_SetGeoAnchorComponentDebugMode_Params params {};
		params.NewDebugMode = NewDebugMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARGeoAnchorComponent.ServerUpdatePayload
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARGeoAnchorUpdatePayload                   NewPayload                                                 (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UARGeoAnchorComponent::ServerUpdatePayload(const struct FARGeoAnchorUpdatePayload& NewPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoAnchorComponent.ServerUpdatePayload");
		
		UARGeoAnchorComponent_ServerUpdatePayload_Params params {};
		params.NewPayload = NewPayload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARGeoAnchorComponent.ReceiveUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARGeoAnchorUpdatePayload                   Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UARGeoAnchorComponent::ReceiveUpdate(const struct FARGeoAnchorUpdatePayload& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoAnchorComponent.ReceiveUpdate");
		
		UARGeoAnchorComponent_ReceiveUpdate_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARGeoAnchorComponent.ReceiveAdd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARGeoAnchorUpdatePayload                   Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UARGeoAnchorComponent::ReceiveAdd(const struct FARGeoAnchorUpdatePayload& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoAnchorComponent.ReceiveAdd");
		
		UARGeoAnchorComponent_ReceiveAdd_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARGeoAnchorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARGeoAnchorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARGeoAnchorComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARDependencyHandler.StartARSessionLatent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UARSessionConfig*                            SessionConfig                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARDependencyHandler::StartARSessionLatent(class UObject* WorldContextObject, class UARSessionConfig* SessionConfig, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARDependencyHandler.StartARSessionLatent");
		
		UARDependencyHandler_StartARSessionLatent_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SessionConfig = SessionConfig;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARDependencyHandler.RequestARSessionPermission
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UARSessionConfig*                            SessionConfig                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EARServicePermissionRequestResult                  OutPermissionResult                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARDependencyHandler::RequestARSessionPermission(class UObject* WorldContextObject, class UARSessionConfig* SessionConfig, const struct FLatentActionInfo& LatentInfo, EARServicePermissionRequestResult* OutPermissionResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARDependencyHandler.RequestARSessionPermission");
		
		UARDependencyHandler_RequestARSessionPermission_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SessionConfig = SessionConfig;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPermissionResult != nullptr)
			*OutPermissionResult = params.OutPermissionResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARDependencyHandler.InstallARService
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EARServiceInstallRequestResult                     OutInstallResult                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARDependencyHandler::InstallARService(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, EARServiceInstallRequestResult* OutInstallResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARDependencyHandler.InstallARService");
		
		UARDependencyHandler_InstallARService_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutInstallResult != nullptr)
			*OutInstallResult = params.OutInstallResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARDependencyHandler.GetARDependencyHandler
	 * 		Flags  -> ()
	 */
	class UARDependencyHandler* UARDependencyHandler::GetARDependencyHandler()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARDependencyHandler.GetARDependencyHandler");
		
		UARDependencyHandler_GetARDependencyHandler_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARDependencyHandler.CheckARServiceAvailability
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EARServiceAvailability                             OutAvailability                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARDependencyHandler::CheckARServiceAvailability(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, EARServiceAvailability* OutAvailability)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARDependencyHandler.CheckARServiceAvailability");
		
		UARDependencyHandler_CheckARServiceAvailability_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAvailability != nullptr)
			*OutAvailability = params.OutAvailability;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARDependencyHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARDependencyHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARDependencyHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingSupport
	 * 		Flags  -> ()
	 */
	class UARGeoTrackingSupport* UARGeoTrackingSupport::GetGeoTrackingSupport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingSupport");
		
		UARGeoTrackingSupport_GetGeoTrackingSupport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingStateReason
	 * 		Flags  -> ()
	 */
	EARGeoTrackingStateReason UARGeoTrackingSupport::GetGeoTrackingStateReason()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingStateReason");
		
		UARGeoTrackingSupport_GetGeoTrackingStateReason_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingState
	 * 		Flags  -> ()
	 */
	EARGeoTrackingState UARGeoTrackingSupport::GetGeoTrackingState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingState");
		
		UARGeoTrackingSupport_GetGeoTrackingState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingAccuracy
	 * 		Flags  -> ()
	 */
	EARGeoTrackingAccuracy UARGeoTrackingSupport::GetGeoTrackingAccuracy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingAccuracy");
		
		UARGeoTrackingSupport_GetGeoTrackingAccuracy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocationWithAltitude
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Longitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Latitude                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AltitudeMeters                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OptionalAnchorName                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UARGeoTrackingSupport::AddGeoAnchorAtLocationWithAltitude(float Longitude, float Latitude, float AltitudeMeters, const class FString& OptionalAnchorName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocationWithAltitude");
		
		UARGeoTrackingSupport_AddGeoAnchorAtLocationWithAltitude_Params params {};
		params.Longitude = Longitude;
		params.Latitude = Latitude;
		params.AltitudeMeters = AltitudeMeters;
		params.OptionalAnchorName = OptionalAnchorName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Longitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Latitude                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OptionalAnchorName                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UARGeoTrackingSupport::AddGeoAnchorAtLocation(float Longitude, float Latitude, const class FString& OptionalAnchorName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocation");
		
		UARGeoTrackingSupport_AddGeoAnchorAtLocation_Params params {};
		params.Longitude = Longitude;
		params.Latitude = Latitude;
		params.OptionalAnchorName = OptionalAnchorName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARGeoTrackingSupport.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARGeoTrackingSupport::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARGeoTrackingSupport");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.GeoTrackingAvailabilityDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsAvailable                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::GeoTrackingAvailabilityDelegate__DelegateSignature(bool bIsAvailable, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.GeoTrackingAvailabilityDelegate__DelegateSignature");
		
		UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_GeoTrackingAvailabilityDelegate__DelegateSignature_Params params {};
		params.bIsAvailable = bIsAvailable;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailabilityAtLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Longitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Latitude                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::CheckGeoTrackingAvailabilityAtLocation(class UObject* WorldContextObject, float Longitude, float Latitude)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailabilityAtLocation");
		
		UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailabilityAtLocation_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Longitude = Longitude;
		params.Latitude = Latitude;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailability
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::CheckGeoTrackingAvailability(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailability");
		
		UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailability_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Longitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Latitude                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Altitude                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGetGeoLocationAsyncTaskBlueprintProxy::GetGeoLocationDelegate__DelegateSignature(float Longitude, float Latitude, float Altitude, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationDelegate__DelegateSignature");
		
		UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationDelegate__DelegateSignature_Params params {};
		params.Longitude = Longitude;
		params.Latitude = Latitude;
		params.Altitude = Altitude;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationAtWorldPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     WorldPosition                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGetGeoLocationAsyncTaskBlueprintProxy* UGetGeoLocationAsyncTaskBlueprintProxy::GetGeoLocationAtWorldPosition(class UObject* WorldContextObject, const struct FVector& WorldPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationAtWorldPosition");
		
		UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationAtWorldPosition_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.WorldPosition = WorldPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGetGeoLocationAsyncTaskBlueprintProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGetGeoLocationAsyncTaskBlueprintProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARLifeCycleComponent.ServerSpawnARActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ComponentClass                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGuid                                       NativeID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARLifeCycleComponent::ServerSpawnARActor(class UClass* ComponentClass, const struct FGuid& NativeID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARLifeCycleComponent.ServerSpawnARActor");
		
		UARLifeCycleComponent_ServerSpawnARActor_Params params {};
		params.ComponentClass = ComponentClass;
		params.NativeID = NativeID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARLifeCycleComponent.ServerDestroyARActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AARActor*                                    Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARLifeCycleComponent::ServerDestroyARActor(class AARActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARLifeCycleComponent.ServerDestroyARActor");
		
		UARLifeCycleComponent_ServerDestroyARActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorToBeDestroyedDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AARActor*                                    Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARLifeCycleComponent::InstanceARActorToBeDestroyedDelegate__DelegateSignature(class AARActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorToBeDestroyedDelegate__DelegateSignature");
		
		UARLifeCycleComponent_InstanceARActorToBeDestroyedDelegate__DelegateSignature_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorSpawnedDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ComponentClass                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGuid                                       NativeID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AARActor*                                    SpawnedActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARLifeCycleComponent::InstanceARActorSpawnedDelegate__DelegateSignature(class UClass* ComponentClass, const struct FGuid& NativeID, class AARActor* SpawnedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorSpawnedDelegate__DelegateSignature");
		
		UARLifeCycleComponent_InstanceARActorSpawnedDelegate__DelegateSignature_Params params {};
		params.ComponentClass = ComponentClass;
		params.NativeID = NativeID;
		params.SpawnedActor = SpawnedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARLifeCycleComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARLifeCycleComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARLifeCycleComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARLightEstimate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARLightEstimate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARLightEstimate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens
	 * 		Flags  -> ()
	 */
	float UARBasicLightEstimate::GetAmbientIntensityLumens()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens");
		
		UARBasicLightEstimate_GetAmbientIntensityLumens_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin
	 * 		Flags  -> ()
	 */
	float UARBasicLightEstimate::GetAmbientColorTemperatureKelvin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin");
		
		UARBasicLightEstimate_GetAmbientColorTemperatureKelvin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UARBasicLightEstimate::GetAmbientColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor");
		
		UARBasicLightEstimate_GetAmbientColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARBasicLightEstimate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARBasicLightEstimate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARBasicLightEstimate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAROriginActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAROriginActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.AROriginActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPin.GetTrackingState
	 * 		Flags  -> ()
	 */
	EARTrackingState UARPin::GetTrackingState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetTrackingState");
		
		UARPin_GetTrackingState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPin.GetTrackedGeometry
	 * 		Flags  -> ()
	 */
	class UARTrackedGeometry* UARPin::GetTrackedGeometry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetTrackedGeometry");
		
		UARPin_GetTrackedGeometry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPin.GetPinnedComponent
	 * 		Flags  -> ()
	 */
	class USceneComponent* UARPin::GetPinnedComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetPinnedComponent");
		
		UARPin_GetPinnedComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPin.GetLocalToWorldTransform
	 * 		Flags  -> ()
	 */
	struct FTransform UARPin::GetLocalToWorldTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetLocalToWorldTransform");
		
		UARPin_GetLocalToWorldTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPin.GetLocalToTrackingTransform
	 * 		Flags  -> ()
	 */
	struct FTransform UARPin::GetLocalToTrackingTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetLocalToTrackingTransform");
		
		UARPin_GetLocalToTrackingTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPin.GetDebugName
	 * 		Flags  -> ()
	 */
	class FName UARPin::GetDebugName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetDebugName");
		
		UARPin_GetDebugName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPin.DebugDraw
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWorld*                                      World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PersistForSeconds                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARPin::DebugDraw(class UWorld* World, const struct FLinearColor& Color, float Scale, float PersistForSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.DebugDraw");
		
		UARPin_DebugDraw_Params params {};
		params.World = World;
		params.Color = Color;
		params.Scale = Scale;
		params.PersistForSeconds = PersistForSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARPin.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARPin::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARPin");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects
	 * 		Flags  -> ()
	 */
	bool UARSessionConfig::ShouldResetTrackedObjects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects");
		
		UARSessionConfig_ShouldResetTrackedObjects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking
	 * 		Flags  -> ()
	 */
	bool UARSessionConfig::ShouldResetCameraTracking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking");
		
		UARSessionConfig_ShouldResetCameraTracking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay
	 * 		Flags  -> ()
	 */
	bool UARSessionConfig::ShouldRenderCameraOverlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay");
		
		UARSessionConfig_ShouldRenderCameraOverlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking
	 * 		Flags  -> ()
	 */
	bool UARSessionConfig::ShouldEnableCameraTracking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking");
		
		UARSessionConfig_ShouldEnableCameraTracking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus
	 * 		Flags  -> ()
	 */
	bool UARSessionConfig::ShouldEnableAutoFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus");
		
		UARSessionConfig_ShouldEnableAutoFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.SetWorldMapData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              WorldMapData                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::SetWorldMapData(TArray<unsigned char> WorldMapData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetWorldMapData");
		
		UARSessionConfig_SetWorldMapData_Params params {};
		params.WorldMapData = WorldMapData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EARSessionTrackingFeature                          InSessionTrackingFeature                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::SetSessionTrackingFeatureToEnable(EARSessionTrackingFeature InSessionTrackingFeature)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable");
		
		UARSessionConfig_SetSessionTrackingFeatureToEnable_Params params {};
		params.InSessionTrackingFeature = InSessionTrackingFeature;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.SetSceneReconstructionMethod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EARSceneReconstruction                             InSceneReconstructionMethod                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::SetSceneReconstructionMethod(EARSceneReconstruction InSceneReconstructionMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetSceneReconstructionMethod");
		
		UARSessionConfig_SetSceneReconstructionMethod_Params params {};
		params.InSceneReconstructionMethod = InSceneReconstructionMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::SetResetTrackedObjects(bool bNewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects");
		
		UARSessionConfig_SetResetTrackedObjects_Params params {};
		params.bNewValue = bNewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.SetResetCameraTracking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::SetResetCameraTracking(bool bNewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetResetCameraTracking");
		
		UARSessionConfig_SetResetCameraTracking_Params params {};
		params.bNewValue = bNewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EARFaceTrackingUpdate                              InUpdate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::SetFaceTrackingUpdate(EARFaceTrackingUpdate InUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate");
		
		UARSessionConfig_SetFaceTrackingUpdate_Params params {};
		params.InUpdate = InUpdate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EARFaceTrackingDirection                           InDirection                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::SetFaceTrackingDirection(EARFaceTrackingDirection InDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection");
		
		UARSessionConfig_SetFaceTrackingDirection_Params params {};
		params.InDirection = InDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::SetEnableAutoFocus(bool bNewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus");
		
		UARSessionConfig_SetEnableAutoFocus_Params params {};
		params.bNewValue = bNewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARVideoFormat                              NewFormat                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::SetDesiredVideoFormat(const struct FARVideoFormat& NewFormat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat");
		
		UARSessionConfig_SetDesiredVideoFormat_Params params {};
		params.NewFormat = NewFormat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.SetCandidateObjectList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UARCandidateObject*>                  InCandidateObjects                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::SetCandidateObjectList(TArray<class UARCandidateObject*> InCandidateObjects)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetCandidateObjectList");
		
		UARSessionConfig_SetCandidateObjectList_Params params {};
		params.InCandidateObjects = InCandidateObjects;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetWorldMapData
	 * 		Flags  -> ()
	 */
	TArray<unsigned char> UARSessionConfig::GetWorldMapData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetWorldMapData");
		
		UARSessionConfig_GetWorldMapData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetWorldAlignment
	 * 		Flags  -> ()
	 */
	EARWorldAlignment UARSessionConfig::GetWorldAlignment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetWorldAlignment");
		
		UARSessionConfig_GetWorldAlignment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetSessionType
	 * 		Flags  -> ()
	 */
	EARSessionType UARSessionConfig::GetSessionType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetSessionType");
		
		UARSessionConfig_GetSessionType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetSceneReconstructionMethod
	 * 		Flags  -> ()
	 */
	EARSceneReconstruction UARSessionConfig::GetSceneReconstructionMethod()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetSceneReconstructionMethod");
		
		UARSessionConfig_GetSceneReconstructionMethod_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode
	 * 		Flags  -> ()
	 */
	EARPlaneDetectionMode UARSessionConfig::GetPlaneDetectionMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode");
		
		UARSessionConfig_GetPlaneDetectionMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked
	 * 		Flags  -> ()
	 */
	int32_t UARSessionConfig::GetMaxNumSimultaneousImagesTracked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked");
		
		UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetLightEstimationMode
	 * 		Flags  -> ()
	 */
	EARLightEstimationMode UARSessionConfig::GetLightEstimationMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetLightEstimationMode");
		
		UARSessionConfig_GetLightEstimationMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetFrameSyncMode
	 * 		Flags  -> ()
	 */
	EARFrameSyncMode UARSessionConfig::GetFrameSyncMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetFrameSyncMode");
		
		UARSessionConfig_GetFrameSyncMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate
	 * 		Flags  -> ()
	 */
	EARFaceTrackingUpdate UARSessionConfig::GetFaceTrackingUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate");
		
		UARSessionConfig_GetFaceTrackingUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection
	 * 		Flags  -> ()
	 */
	EARFaceTrackingDirection UARSessionConfig::GetFaceTrackingDirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection");
		
		UARSessionConfig_GetFaceTrackingDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType
	 * 		Flags  -> ()
	 */
	EAREnvironmentCaptureProbeType UARSessionConfig::GetEnvironmentCaptureProbeType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType");
		
		UARSessionConfig_GetEnvironmentCaptureProbeType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature
	 * 		Flags  -> ()
	 */
	EARSessionTrackingFeature UARSessionConfig::GetEnabledSessionTrackingFeature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature");
		
		UARSessionConfig_GetEnabledSessionTrackingFeature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat
	 * 		Flags  -> ()
	 */
	struct FARVideoFormat UARSessionConfig::GetDesiredVideoFormat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat");
		
		UARSessionConfig_GetDesiredVideoFormat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetCandidateObjectList
	 * 		Flags  -> ()
	 */
	TArray<class UARCandidateObject*> UARSessionConfig::GetCandidateObjectList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetCandidateObjectList");
		
		UARSessionConfig_GetCandidateObjectList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetCandidateImageList
	 * 		Flags  -> ()
	 */
	TArray<class UARCandidateImage*> UARSessionConfig::GetCandidateImageList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetCandidateImageList");
		
		UARSessionConfig_GetCandidateImageList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.AddCandidateObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UARCandidateObject*                          CandidateObject                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::AddCandidateObject(class UARCandidateObject* CandidateObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.AddCandidateObject");
		
		UARSessionConfig_AddCandidateObject_Params params {};
		params.CandidateObject = CandidateObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.AddCandidateImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UARCandidateImage*                           NewCandidateImage                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::AddCandidateImage(class UARCandidateImage* NewCandidateImage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.AddCandidateImage");
		
		UARSessionConfig_AddCandidateImage_Params params {};
		params.NewCandidateImage = NewCandidateImage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARSessionConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARSessionConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARSessionConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              ImageData                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void AARSharedWorldGameMode::SetPreviewImageData(TArray<unsigned char> ImageData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData");
		
		AARSharedWorldGameMode_SetPreviewImageData_Params params {};
		params.ImageData = ImageData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady
	 * 		Flags  -> ()
	 */
	void AARSharedWorldGameMode::SetARWorldSharingIsReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady");
		
		AARSharedWorldGameMode_SetARWorldSharingIsReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              ARWorldData                                                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void AARSharedWorldGameMode::SetARSharedWorldData(TArray<unsigned char> ARWorldData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData");
		
		AARSharedWorldGameMode_SetARSharedWorldData_Params params {};
		params.ARWorldData = ARWorldData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState
	 * 		Flags  -> ()
	 */
	class AARSharedWorldGameState* AARSharedWorldGameMode::GetARSharedWorldGameState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState");
		
		AARSharedWorldGameMode_GetARSharedWorldGameState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AARSharedWorldGameMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AARSharedWorldGameMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARSharedWorldGameMode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady
	 * 		Flags  -> ()
	 */
	void AARSharedWorldGameState::K2_OnARWorldMapIsReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady");
		
		AARSharedWorldGameState_K2_OnARWorldMapIsReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AARSharedWorldGameState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AARSharedWorldGameState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARSharedWorldGameState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving
	 * 		Flags  -> ()
	 */
	void AARSharedWorldPlayerController::ServerMarkReadyForReceiving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving");
		
		AARSharedWorldPlayerController_ServerMarkReadyForReceiving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Buffer                                                     (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AARSharedWorldPlayerController::ClientUpdatePreviewImageData(int32_t Offset, TArray<unsigned char> Buffer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData");
		
		AARSharedWorldPlayerController_ClientUpdatePreviewImageData_Params params {};
		params.Offset = Offset;
		params.Buffer = Buffer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Buffer                                                     (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AARSharedWorldPlayerController::ClientUpdateARWorldData(int32_t Offset, TArray<unsigned char> Buffer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData");
		
		AARSharedWorldPlayerController_ClientUpdateARWorldData_Params params {};
		params.Offset = Offset;
		params.Buffer = Buffer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PreviewImageSize                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ARWorldDataSize                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AARSharedWorldPlayerController::ClientInitSharedWorld(int32_t PreviewImageSize, int32_t ARWorldDataSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld");
		
		AARSharedWorldPlayerController_ClientInitSharedWorld_Params params {};
		params.PreviewImageSize = PreviewImageSize;
		params.ARWorldDataSize = ARWorldDataSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AARSharedWorldPlayerController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AARSharedWorldPlayerController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARSharedWorldPlayerController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAREnvironmentCaptureProbe*                  InCaptureProbe                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AARSkyLight::SetEnvironmentCaptureProbe(class UAREnvironmentCaptureProbe* InCaptureProbe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe");
		
		AARSkyLight_SetEnvironmentCaptureProbe_Params params {};
		params.InCaptureProbe = InCaptureProbe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AARSkyLight.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AARSkyLight::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARSkyLight");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARTexture.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTexture::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTexture");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARTextureCameraImage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTextureCameraImage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTextureCameraImage");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARTextureCameraDepth.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTextureCameraDepth::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTextureCameraDepth");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAREnvironmentCaptureProbeTexture.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAREnvironmentCaptureProbeTexture::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.AREnvironmentCaptureProbeTexture");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARTraceResultDummy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTraceResultDummy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTraceResultDummy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.IsTracked
	 * 		Flags  -> ()
	 */
	bool UARTrackedGeometry::IsTracked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.IsTracked");
		
		UARTrackedGeometry_IsTracked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh
	 * 		Flags  -> ()
	 */
	class UMRMeshComponent* UARTrackedGeometry::GetUnderlyingMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh");
		
		UARTrackedGeometry_GetUnderlyingMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.GetTrackingState
	 * 		Flags  -> ()
	 */
	EARTrackingState UARTrackedGeometry::GetTrackingState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetTrackingState");
		
		UARTrackedGeometry_GetTrackingState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.GetObjectClassification
	 * 		Flags  -> ()
	 */
	EARObjectClassification UARTrackedGeometry::GetObjectClassification()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetObjectClassification");
		
		UARTrackedGeometry_GetObjectClassification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.GetName
	 * 		Flags  -> ()
	 */
	class FString UARTrackedGeometry::GetName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetName");
		
		UARTrackedGeometry_GetName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform
	 * 		Flags  -> ()
	 */
	struct FTransform UARTrackedGeometry::GetLocalToWorldTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform");
		
		UARTrackedGeometry_GetLocalToWorldTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform
	 * 		Flags  -> ()
	 */
	struct FTransform UARTrackedGeometry::GetLocalToTrackingTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform");
		
		UARTrackedGeometry_GetLocalToTrackingTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp
	 * 		Flags  -> ()
	 */
	float UARTrackedGeometry::GetLastUpdateTimestamp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp");
		
		UARTrackedGeometry_GetLastUpdateTimestamp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber
	 * 		Flags  -> ()
	 */
	int32_t UARTrackedGeometry::GetLastUpdateFrameNumber()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber");
		
		UARTrackedGeometry_GetLastUpdateFrameNumber_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.GetDebugName
	 * 		Flags  -> ()
	 */
	class FName UARTrackedGeometry::GetDebugName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetDebugName");
		
		UARTrackedGeometry_GetDebugName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARTrackedGeometry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTrackedGeometry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTrackedGeometry");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy
	 * 		Flags  -> ()
	 */
	class UARPlaneGeometry* UARPlaneGeometry::GetSubsumedBy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy");
		
		UARPlaneGeometry_GetSubsumedBy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPlaneGeometry.GetOrientation
	 * 		Flags  -> ()
	 */
	EARPlaneOrientation UARPlaneGeometry::GetOrientation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetOrientation");
		
		UARPlaneGeometry_GetOrientation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPlaneGeometry.GetExtent
	 * 		Flags  -> ()
	 */
	struct FVector UARPlaneGeometry::GetExtent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetExtent");
		
		UARPlaneGeometry_GetExtent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPlaneGeometry.GetCenter
	 * 		Flags  -> ()
	 */
	struct FVector UARPlaneGeometry::GetCenter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetCenter");
		
		UARPlaneGeometry_GetCenter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace
	 * 		Flags  -> ()
	 */
	TArray<struct FVector> UARPlaneGeometry::GetBoundaryPolygonInLocalSpace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace");
		
		UARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARPlaneGeometry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARPlaneGeometry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARPlaneGeometry");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARTrackedPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTrackedPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTrackedPoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARTrackedImage.GetEstimateSize
	 * 		Flags  -> ()
	 */
	struct FVector2D UARTrackedImage::GetEstimateSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedImage.GetEstimateSize");
		
		UARTrackedImage_GetEstimateSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARTrackedImage.GetDetectedImage
	 * 		Flags  -> ()
	 */
	class UARCandidateImage* UARTrackedImage::GetDetectedImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedImage.GetDetectedImage");
		
		UARTrackedImage_GetDetectedImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARTrackedImage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTrackedImage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTrackedImage");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARTrackedQRCode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTrackedQRCode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTrackedQRCode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAREye                                             eye                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UARFaceGeometry::GetWorldSpaceEyeTransform(EAREye eye)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform");
		
		UARFaceGeometry_GetWorldSpaceEyeTransform_Params params {};
		params.eye = eye;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAREye                                             eye                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UARFaceGeometry::GetLocalSpaceEyeTransform(EAREye eye)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform");
		
		UARFaceGeometry_GetLocalSpaceEyeTransform_Params params {};
		params.eye = eye;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EARFaceBlendShape                                  BlendShape                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UARFaceGeometry::GetBlendShapeValue(EARFaceBlendShape BlendShape)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue");
		
		UARFaceGeometry_GetBlendShapeValue_Params params {};
		params.BlendShape = BlendShape;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARFaceGeometry.GetBlendShapes
	 * 		Flags  -> ()
	 */
	TMap<EARFaceBlendShape, float> UARFaceGeometry::GetBlendShapes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetBlendShapes");
		
		UARFaceGeometry_GetBlendShapes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARFaceGeometry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARFaceGeometry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARFaceGeometry");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent
	 * 		Flags  -> ()
	 */
	struct FVector UAREnvironmentCaptureProbe::GetExtent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent");
		
		UAREnvironmentCaptureProbe_GetExtent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture
	 * 		Flags  -> ()
	 */
	class UAREnvironmentCaptureProbeTexture* UAREnvironmentCaptureProbe::GetEnvironmentCaptureTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture");
		
		UAREnvironmentCaptureProbe_GetEnvironmentCaptureTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAREnvironmentCaptureProbe.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAREnvironmentCaptureProbe::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.AREnvironmentCaptureProbe");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARTrackedObject.GetDetectedObject
	 * 		Flags  -> ()
	 */
	class UARCandidateObject* UARTrackedObject::GetDetectedObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedObject.GetDetectedObject");
		
		UARTrackedObject_GetDetectedObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARTrackedObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTrackedObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTrackedObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARTrackedPose.GetTrackedPoseData
	 * 		Flags  -> ()
	 */
	struct FARPose3D UARTrackedPose::GetTrackedPoseData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedPose.GetTrackedPoseData");
		
		UARTrackedPose_GetTrackedPoseData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARTrackedPose.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTrackedPose::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTrackedPose");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARMeshGeometry.GetObjectClassificationAtLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     InWorldLocation                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EARObjectClassification                            OutClassification                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutClassificationLocation                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxLocationDiff                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UARMeshGeometry::GetObjectClassificationAtLocation(const struct FVector& InWorldLocation, EARObjectClassification* OutClassification, struct FVector* OutClassificationLocation, float MaxLocationDiff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARMeshGeometry.GetObjectClassificationAtLocation");
		
		UARMeshGeometry_GetObjectClassificationAtLocation_Params params {};
		params.InWorldLocation = InWorldLocation;
		params.MaxLocationDiff = MaxLocationDiff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutClassification != nullptr)
			*OutClassification = params.OutClassification;
		if (OutClassificationLocation != nullptr)
			*OutClassificationLocation = params.OutClassificationLocation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARMeshGeometry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARMeshGeometry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARMeshGeometry");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARGeoAnchor.GetLongitude
	 * 		Flags  -> ()
	 */
	float UARGeoAnchor::GetLongitude()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoAnchor.GetLongitude");
		
		UARGeoAnchor_GetLongitude_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARGeoAnchor.GetLatitude
	 * 		Flags  -> ()
	 */
	float UARGeoAnchor::GetLatitude()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoAnchor.GetLatitude");
		
		UARGeoAnchor_GetLatitude_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARGeoAnchor.GetAltitudeSource
	 * 		Flags  -> ()
	 */
	EARAltitudeSource UARGeoAnchor::GetAltitudeSource()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoAnchor.GetAltitudeSource");
		
		UARGeoAnchor_GetAltitudeSource_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARGeoAnchor.GetAltitudeMeters
	 * 		Flags  -> ()
	 */
	float UARGeoAnchor::GetAltitudeMeters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoAnchor.GetAltitudeMeters");
		
		UARGeoAnchor_GetAltitudeMeters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARGeoAnchor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARGeoAnchor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARGeoAnchor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARTrackableNotifyComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTrackableNotifyComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTrackableNotifyComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARTypesDummyClass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTypesDummyClass::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTypesDummyClass");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARCandidateImage.GetPhysicalWidth
	 * 		Flags  -> ()
	 */
	float UARCandidateImage::GetPhysicalWidth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetPhysicalWidth");
		
		UARCandidateImage_GetPhysicalWidth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARCandidateImage.GetPhysicalHeight
	 * 		Flags  -> ()
	 */
	float UARCandidateImage::GetPhysicalHeight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetPhysicalHeight");
		
		UARCandidateImage_GetPhysicalHeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARCandidateImage.GetOrientation
	 * 		Flags  -> ()
	 */
	EARCandidateImageOrientation UARCandidateImage::GetOrientation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetOrientation");
		
		UARCandidateImage_GetOrientation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARCandidateImage.GetFriendlyName
	 * 		Flags  -> ()
	 */
	class FString UARCandidateImage::GetFriendlyName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetFriendlyName");
		
		UARCandidateImage_GetFriendlyName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARCandidateImage.GetCandidateTexture
	 * 		Flags  -> ()
	 */
	class UTexture2D* UARCandidateImage::GetCandidateTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetCandidateTexture");
		
		UARCandidateImage_GetCandidateTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARCandidateImage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARCandidateImage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARCandidateImage");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARCandidateObject.SetFriendlyName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      NewName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARCandidateObject::SetFriendlyName(const class FString& NewName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.SetFriendlyName");
		
		UARCandidateObject_SetFriendlyName_Params params {};
		params.NewName = NewName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARCandidateObject.SetCandidateObjectData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              InCandidateObject                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UARCandidateObject::SetCandidateObjectData(TArray<unsigned char> InCandidateObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.SetCandidateObjectData");
		
		UARCandidateObject_SetCandidateObjectData_Params params {};
		params.InCandidateObject = InCandidateObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARCandidateObject.SetBoundingBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBox                                        InBoundingBox                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARCandidateObject::SetBoundingBox(const struct FBox& InBoundingBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.SetBoundingBox");
		
		UARCandidateObject_SetBoundingBox_Params params {};
		params.InBoundingBox = InBoundingBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARCandidateObject.GetFriendlyName
	 * 		Flags  -> ()
	 */
	class FString UARCandidateObject::GetFriendlyName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.GetFriendlyName");
		
		UARCandidateObject_GetFriendlyName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARCandidateObject.GetCandidateObjectData
	 * 		Flags  -> ()
	 */
	TArray<unsigned char> UARCandidateObject::GetCandidateObjectData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.GetCandidateObjectData");
		
		UARCandidateObject_GetCandidateObjectData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AugmentedReality.ARCandidateObject.GetBoundingBox
	 * 		Flags  -> ()
	 */
	struct FBox UARCandidateObject::GetBoundingBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.GetBoundingBox");
		
		UARCandidateObject_GetBoundingBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARCandidateObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARCandidateObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARCandidateObject");
		return ptr;
	}

}


