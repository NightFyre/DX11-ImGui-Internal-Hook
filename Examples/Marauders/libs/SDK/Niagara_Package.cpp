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
	 * 		Name   -> PredefinedFunction UNiagaraDataInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneNiagaraTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneNiagaraTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneNiagaraParameterTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneNiagaraParameterTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraParameterTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneNiagaraBoolParameterTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneNiagaraBoolParameterTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraBoolParameterTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneNiagaraColorParameterTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneNiagaraColorParameterTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraColorParameterTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneNiagaraFloatParameterTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneNiagaraFloatParameterTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraFloatParameterTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneNiagaraIntegerParameterTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneNiagaraIntegerParameterTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraIntegerParameterTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneNiagaraSystemSpawnSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneNiagaraSystemSpawnSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraSystemSpawnSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneNiagaraSystemTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneNiagaraSystemTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraSystemTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneNiagaraVectorParameterTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneNiagaraVectorParameterTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraVectorParameterTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraActor.SetDestroyOnSystemFinish
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShouldDestroyOnSystemFinish                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANiagaraActor::SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraActor.SetDestroyOnSystemFinish");
		
		ANiagaraActor_SetDestroyOnSystemFinish_Params params {};
		params.bShouldDestroyOnSystemFinish = bShouldDestroyOnSystemFinish;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraActor.OnNiagaraSystemFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNiagaraComponent*                           FinishedComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANiagaraActor::OnNiagaraSystemFinished(class UNiagaraComponent* FinishedComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraActor.OnNiagaraSystemFinished");
		
		ANiagaraActor_OnNiagaraSystemFinished_Params params {};
		params.FinishedComponent = FinishedComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANiagaraActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANiagaraActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.SetVariableVec4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InVariableName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    InValue                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraComponent::SetVariableVec4(const class FName& InVariableName, const struct FVector4& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableVec4");
		
		UNiagaraComponent_SetVariableVec4_Params params {};
		params.InVariableName = InVariableName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.SetVariableVec3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InVariableName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraComponent::SetVariableVec3(const class FName& InVariableName, const struct FVector& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableVec3");
		
		UNiagaraComponent_SetVariableVec3_Params params {};
		params.InVariableName = InVariableName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.SetVariableVec2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InVariableName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraComponent::SetVariableVec2(const class FName& InVariableName, const struct FVector2D& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableVec2");
		
		UNiagaraComponent_SetVariableVec2_Params params {};
		params.InVariableName = InVariableName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.SetVariableTextureRenderTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InVariableName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTextureRenderTarget*                        TextureRenderTarget                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraComponent::SetVariableTextureRenderTarget(const class FName& InVariableName, class UTextureRenderTarget* TextureRenderTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableTextureRenderTarget");
		
		UNiagaraComponent_SetVariableTextureRenderTarget_Params params {};
		params.InVariableName = InVariableName;
		params.TextureRenderTarget = TextureRenderTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.SetVariableQuat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InVariableName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FQuat                                       InValue                                                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UNiagaraComponent::SetVariableQuat(const class FName& InVariableName, const struct FQuat& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableQuat");
		
		UNiagaraComponent_SetVariableQuat_Params params {};
		params.InVariableName = InVariableName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.SetVariableObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InVariableName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraComponent::SetVariableObject(const class FName& InVariableName, class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableObject");
		
		UNiagaraComponent_SetVariableObject_Params params {};
		params.InVariableName = InVariableName;
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.SetVariableMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InVariableName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMaterialInterface*                          Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraComponent::SetVariableMaterial(const class FName& InVariableName, class UMaterialInterface* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableMaterial");
		
		UNiagaraComponent_SetVariableMaterial_Params params {};
		params.InVariableName = InVariableName;
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.SetVariableLinearColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InVariableName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                InValue                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraComponent::SetVariableLinearColor(const class FName& InVariableName, const struct FLinearColor& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableLinearColor");
		
		UNiagaraComponent_SetVariableLinearColor_Params params {};
		params.InVariableName = InVariableName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.SetVariableInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InVariableName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraComponent::SetVariableInt(const class FName& InVariableName, int32_t InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableInt");
		
		UNiagaraComponent_SetVariableInt_Params params {};
		params.InVariableName = InVariableName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.SetVariableFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InVariableName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraComponent::SetVariableFloat(const class FName& InVariableName, float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableFloat");
		
		UNiagaraComponent_SetVariableFloat_Params params {};
		params.InVariableName = InVariableName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.SetVariableBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InVariableName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraComponent::SetVariableBool(const class FName& InVariableName, bool InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableBool");
		
		UNiagaraComponent_SetVariableBool_Params params {};
		params.InVariableName = InVariableName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.SetVariableActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InVariableName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraComponent::SetVariableActor(const class FName& InVariableName, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableActor");
		
		UNiagaraComponent_SetVariableActor_Params params {};
		params.InVariableName = InVariableName;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.SetTickBehavior
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENiagaraTickBehavior                               NewTickBehavior                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraComponent::SetTickBehavior(ENiagaraTickBehavior NewTickBehavior)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetTickBehavior");
		
		UNiagaraComponent_SetTickBehavior_Params params {};
		params.NewTickBehavior = NewTickBehavior;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.SetSeekDelta
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InSeekDelta                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraComponent::SetSeekDelta(float InSeekDelta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetSeekDelta");
		
		UNiagaraComponent_SetSeekDelta_Params params {};
		params.InSeekDelta = InSeekDelta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.SetRenderingEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInRenderingEnabled                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraComponent::SetRenderingEnabled(bool bInRenderingEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetRenderingEnabled");
		
		UNiagaraComponent_SetRenderingEnabled_Params params {};
		params.bInRenderingEnabled = bInRenderingEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.SetPreviewLODDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnablePreviewLODDistance                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PreviewLODDistance                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraComponent::SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetPreviewLODDistance");
		
		UNiagaraComponent_SetPreviewLODDistance_Params params {};
		params.bEnablePreviewLODDistance = bEnablePreviewLODDistance;
		params.PreviewLODDistance = PreviewLODDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.SetPaused
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInPaused                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraComponent::SetPaused(bool bInPaused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetPaused");
		
		UNiagaraComponent_SetPaused_Params params {};
		params.bInPaused = bInPaused;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.SetNiagaraVariableVec4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    InValue                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraComponent::SetNiagaraVariableVec4(const class FString& InVariableName, const struct FVector4& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableVec4");
		
		UNiagaraComponent_SetNiagaraVariableVec4_Params params {};
		params.InVariableName = InVariableName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.SetNiagaraVariableVec3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraComponent::SetNiagaraVariableVec3(const class FString& InVariableName, const struct FVector& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableVec3");
		
		UNiagaraComponent_SetNiagaraVariableVec3_Params params {};
		params.InVariableName = InVariableName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.SetNiagaraVariableVec2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraComponent::SetNiagaraVariableVec2(const class FString& InVariableName, const struct FVector2D& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableVec2");
		
		UNiagaraComponent_SetNiagaraVariableVec2_Params params {};
		params.InVariableName = InVariableName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.SetNiagaraVariableQuat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FQuat                                       InValue                                                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UNiagaraComponent::SetNiagaraVariableQuat(const class FString& InVariableName, const struct FQuat& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableQuat");
		
		UNiagaraComponent_SetNiagaraVariableQuat_Params params {};
		params.InVariableName = InVariableName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.SetNiagaraVariableObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraComponent::SetNiagaraVariableObject(const class FString& InVariableName, class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableObject");
		
		UNiagaraComponent_SetNiagaraVariableObject_Params params {};
		params.InVariableName = InVariableName;
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                InValue                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraComponent::SetNiagaraVariableLinearColor(const class FString& InVariableName, const struct FLinearColor& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor");
		
		UNiagaraComponent_SetNiagaraVariableLinearColor_Params params {};
		params.InVariableName = InVariableName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.SetNiagaraVariableInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraComponent::SetNiagaraVariableInt(const class FString& InVariableName, int32_t InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableInt");
		
		UNiagaraComponent_SetNiagaraVariableInt_Params params {};
		params.InVariableName = InVariableName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.SetNiagaraVariableFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraComponent::SetNiagaraVariableFloat(const class FString& InVariableName, float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableFloat");
		
		UNiagaraComponent_SetNiagaraVariableFloat_Params params {};
		params.InVariableName = InVariableName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.SetNiagaraVariableBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraComponent::SetNiagaraVariableBool(const class FString& InVariableName, bool InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableBool");
		
		UNiagaraComponent_SetNiagaraVariableBool_Params params {};
		params.InVariableName = InVariableName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.SetNiagaraVariableActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraComponent::SetNiagaraVariableActor(const class FString& InVariableName, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableActor");
		
		UNiagaraComponent_SetNiagaraVariableActor_Params params {};
		params.InVariableName = InVariableName;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.SetMaxSimTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InMaxTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraComponent::SetMaxSimTime(float InMaxTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetMaxSimTime");
		
		UNiagaraComponent_SetMaxSimTime_Params params {};
		params.InMaxTime = InMaxTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.SetGpuComputeDebug
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnableDebug                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraComponent::SetGpuComputeDebug(bool bEnableDebug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetGpuComputeDebug");
		
		UNiagaraComponent_SetGpuComputeDebug_Params params {};
		params.bEnableDebug = bEnableDebug;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.SetForceSolo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInForceSolo                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraComponent::SetForceSolo(bool bInForceSolo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetForceSolo");
		
		UNiagaraComponent_SetForceSolo_Params params {};
		params.bInForceSolo = bInForceSolo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.SetDesiredAge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InDesiredAge                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraComponent::SetDesiredAge(float InDesiredAge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetDesiredAge");
		
		UNiagaraComponent_SetDesiredAge_Params params {};
		params.InDesiredAge = InDesiredAge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInCanRenderWhileSeeking                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraComponent::SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking");
		
		UNiagaraComponent_SetCanRenderWhileSeeking_Params params {};
		params.bInCanRenderWhileSeeking = bInCanRenderWhileSeeking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.SetAutoDestroy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInAutoDestroy                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraComponent::SetAutoDestroy(bool bInAutoDestroy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetAutoDestroy");
		
		UNiagaraComponent_SetAutoDestroy_Params params {};
		params.bInAutoDestroy = bInAutoDestroy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.SetAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNiagaraSystem*                              InAsset                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraComponent::SetAsset(class UNiagaraSystem* InAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetAsset");
		
		UNiagaraComponent_SetAsset_Params params {};
		params.InAsset = InAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.SetAllowScalability
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bAllow                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraComponent::SetAllowScalability(bool bAllow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetAllowScalability");
		
		UNiagaraComponent_SetAllowScalability_Params params {};
		params.bAllow = bAllow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.SetAgeUpdateMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENiagaraAgeUpdateMode                              InAgeUpdateMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraComponent::SetAgeUpdateMode(ENiagaraAgeUpdateMode InAgeUpdateMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetAgeUpdateMode");
		
		UNiagaraComponent_SetAgeUpdateMode_Params params {};
		params.InAgeUpdateMode = InAgeUpdateMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.SeekToDesiredAge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InDesiredAge                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraComponent::SeekToDesiredAge(float InDesiredAge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SeekToDesiredAge");
		
		UNiagaraComponent_SeekToDesiredAge_Params params {};
		params.InDesiredAge = InDesiredAge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.ResetSystem
	 * 		Flags  -> ()
	 */
	void UNiagaraComponent::ResetSystem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.ResetSystem");
		
		UNiagaraComponent_ResetSystem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.ReinitializeSystem
	 * 		Flags  -> ()
	 */
	void UNiagaraComponent::ReinitializeSystem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.ReinitializeSystem");
		
		UNiagaraComponent_ReinitializeSystem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.IsPaused
	 * 		Flags  -> ()
	 */
	bool UNiagaraComponent::IsPaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.IsPaused");
		
		UNiagaraComponent_IsPaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.GetTickBehavior
	 * 		Flags  -> ()
	 */
	ENiagaraTickBehavior UNiagaraComponent::GetTickBehavior()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetTickBehavior");
		
		UNiagaraComponent_GetTickBehavior_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.GetSeekDelta
	 * 		Flags  -> ()
	 */
	float UNiagaraComponent::GetSeekDelta()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetSeekDelta");
		
		UNiagaraComponent_GetSeekDelta_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled
	 * 		Flags  -> ()
	 */
	bool UNiagaraComponent::GetPreviewLODDistanceEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled");
		
		UNiagaraComponent_GetPreviewLODDistanceEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.GetPreviewLODDistance
	 * 		Flags  -> ()
	 */
	int32_t UNiagaraComponent::GetPreviewLODDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetPreviewLODDistance");
		
		UNiagaraComponent_GetPreviewLODDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InEmitterName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InValueName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FVector> UNiagaraComponent::GetNiagaraParticleValueVec3_DebugOnly(const class FString& InEmitterName, const class FString& InValueName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly");
		
		UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Params params {};
		params.InEmitterName = InEmitterName;
		params.InValueName = InValueName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InEmitterName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InValueName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<float> UNiagaraComponent::GetNiagaraParticleValues_DebugOnly(const class FString& InEmitterName, const class FString& InValueName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly");
		
		UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Params params {};
		params.InEmitterName = InEmitterName;
		params.InValueName = InValueName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InEmitterName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FVector> UNiagaraComponent::GetNiagaraParticlePositions_DebugOnly(const class FString& InEmitterName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly");
		
		UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Params params {};
		params.InEmitterName = InEmitterName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.GetMaxSimTime
	 * 		Flags  -> ()
	 */
	float UNiagaraComponent::GetMaxSimTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetMaxSimTime");
		
		UNiagaraComponent_GetMaxSimTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.GetForceSolo
	 * 		Flags  -> ()
	 */
	bool UNiagaraComponent::GetForceSolo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetForceSolo");
		
		UNiagaraComponent_GetForceSolo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.GetDesiredAge
	 * 		Flags  -> ()
	 */
	float UNiagaraComponent::GetDesiredAge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetDesiredAge");
		
		UNiagaraComponent_GetDesiredAge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.GetDataInterface
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UNiagaraDataInterface* UNiagaraComponent::GetDataInterface(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetDataInterface");
		
		UNiagaraComponent_GetDataInterface_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.GetAsset
	 * 		Flags  -> ()
	 */
	class UNiagaraSystem* UNiagaraComponent::GetAsset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetAsset");
		
		UNiagaraComponent_GetAsset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.GetAgeUpdateMode
	 * 		Flags  -> ()
	 */
	ENiagaraAgeUpdateMode UNiagaraComponent::GetAgeUpdateMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetAgeUpdateMode");
		
		UNiagaraComponent_GetAgeUpdateMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.AdvanceSimulationByTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              SimulateTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TickDeltaSeconds                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraComponent::AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.AdvanceSimulationByTime");
		
		UNiagaraComponent_AdvanceSimulationByTime_Params params {};
		params.SimulateTime = SimulateTime;
		params.TickDeltaSeconds = TickDeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraComponent.AdvanceSimulation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TickCount                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TickDeltaSeconds                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraComponent::AdvanceSimulation(int32_t TickCount, float TickDeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.AdvanceSimulation");
		
		UNiagaraComponent_AdvanceSimulation_Params params {};
		params.TickCount = TickCount;
		params.TickDeltaSeconds = TickDeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraComponentPool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraComponentPool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraComponentPool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraRendererProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraRendererProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraRendererProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraComponentRendererProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraComponentRendererProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraComponentRendererProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraComponentSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraComponentSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraComponentSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraConvertInPlaceUtilityBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraConvertInPlaceUtilityBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraConvertInPlaceUtilityBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterface2DArrayTexture.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterface2DArrayTexture::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterface2DArrayTexture");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceArray.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceArray::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceArray");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceArrayFloat.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceArrayFloat::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceArrayFloat");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceArrayFloat2.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceArrayFloat2::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceArrayFloat2");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceArrayFloat3.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceArrayFloat3::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceArrayFloat3");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceArrayFloat4.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceArrayFloat4::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceArrayFloat4");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceArrayColor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceArrayColor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceArrayColor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceArrayQuat.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceArrayQuat::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceArrayQuat");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNiagaraComponent*                           NiagaraSystem                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OverrideName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector4>                            ArrayData                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, TArray<struct FVector4> ArrayData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4");
		
		UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Params params {};
		params.NiagaraSystem = NiagaraSystem;
		params.OverrideName = OverrideName;
		params.ArrayData = ArrayData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNiagaraComponent*                           NiagaraSystem                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OverrideName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2D>                           ArrayData                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, TArray<struct FVector2D> ArrayData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2D");
		
		UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Params params {};
		params.NiagaraSystem = NiagaraSystem;
		params.OverrideName = OverrideName;
		params.ArrayData = ArrayData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNiagaraComponent*                           NiagaraSystem                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OverrideName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                             ArrayData                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, TArray<struct FVector> ArrayData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector");
		
		UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Params params {};
		params.NiagaraSystem = NiagaraSystem;
		params.OverrideName = OverrideName;
		params.ArrayData = ArrayData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNiagaraComponent*                           NiagaraSystem                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OverrideName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FQuat>                               ArrayData                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, TArray<struct FQuat> ArrayData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuat");
		
		UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Params params {};
		params.NiagaraSystem = NiagaraSystem;
		params.OverrideName = OverrideName;
		params.ArrayData = ArrayData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNiagaraComponent*                           NiagaraSystem                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OverrideName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    ArrayData                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, TArray<int32_t> ArrayData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32");
		
		UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Params params {};
		params.NiagaraSystem = NiagaraSystem;
		params.OverrideName = OverrideName;
		params.ArrayData = ArrayData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNiagaraComponent*                           NiagaraSystem                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OverrideName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      ArrayData                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, TArray<float> ArrayData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloat");
		
		UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Params params {};
		params.NiagaraSystem = NiagaraSystem;
		params.OverrideName = OverrideName;
		params.ArrayData = ArrayData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNiagaraComponent*                           NiagaraSystem                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OverrideName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLinearColor>                        ArrayData                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, TArray<struct FLinearColor> ArrayData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColor");
		
		UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Params params {};
		params.NiagaraSystem = NiagaraSystem;
		params.OverrideName = OverrideName;
		params.ArrayData = ArrayData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNiagaraComponent*                           NiagaraSystem                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OverrideName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<bool>                                       ArrayData                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, TArray<bool> ArrayData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBool");
		
		UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Params params {};
		params.NiagaraSystem = NiagaraSystem;
		params.OverrideName = OverrideName;
		params.ArrayData = ArrayData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNiagaraComponent*                           NiagaraSystem                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OverrideName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FVector4> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4");
		
		UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Params params {};
		params.NiagaraSystem = NiagaraSystem;
		params.OverrideName = OverrideName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNiagaraComponent*                           NiagaraSystem                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OverrideName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FVector2D> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2D");
		
		UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Params params {};
		params.NiagaraSystem = NiagaraSystem;
		params.OverrideName = OverrideName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNiagaraComponent*                           NiagaraSystem                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OverrideName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FVector> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector");
		
		UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Params params {};
		params.NiagaraSystem = NiagaraSystem;
		params.OverrideName = OverrideName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNiagaraComponent*                           NiagaraSystem                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OverrideName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FQuat> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuat");
		
		UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Params params {};
		params.NiagaraSystem = NiagaraSystem;
		params.OverrideName = OverrideName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNiagaraComponent*                           NiagaraSystem                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OverrideName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<int32_t> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32");
		
		UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Params params {};
		params.NiagaraSystem = NiagaraSystem;
		params.OverrideName = OverrideName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNiagaraComponent*                           NiagaraSystem                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OverrideName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<float> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloat");
		
		UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Params params {};
		params.NiagaraSystem = NiagaraSystem;
		params.OverrideName = OverrideName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNiagaraComponent*                           NiagaraSystem                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OverrideName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FLinearColor> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColor");
		
		UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Params params {};
		params.NiagaraSystem = NiagaraSystem;
		params.OverrideName = OverrideName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNiagaraComponent*                           NiagaraSystem                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OverrideName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<bool> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBool");
		
		UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Params params {};
		params.NiagaraSystem = NiagaraSystem;
		params.OverrideName = OverrideName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceArrayFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceArrayFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceArrayFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceArrayInt32.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceArrayInt32::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceArrayInt32");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceArrayBool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceArrayBool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceArrayBool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceAudioSubmix.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceAudioSubmix::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceAudioSubmix");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceAudioOscilloscope.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceAudioOscilloscope::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceAudioOscilloscope");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceAudioPlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceAudioPlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceAudioPlayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceAudioSpectrum.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceAudioSpectrum::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceAudioSpectrum");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceCamera.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceCamera::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCamera");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceCollisionQuery.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceCollisionQuery::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCollisionQuery");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceCurveBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceCurveBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCurveBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceColorCurve.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceColorCurve::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceColorCurve");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceCurlNoise.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceCurlNoise::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCurlNoise");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceCurve.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceCurve::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCurve");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FBasicParticleData>                  Data                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UNiagaraSystem*                              NiagaraSystem                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraParticleCallbackHandler::ReceiveParticleData(TArray<struct FBasicParticleData> Data, class UNiagaraSystem* NiagaraSystem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData");
		
		UNiagaraParticleCallbackHandler_ReceiveParticleData_Params params {};
		params.Data = Data;
		params.NiagaraSystem = NiagaraSystem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraParticleCallbackHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraParticleCallbackHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraParticleCallbackHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceExport.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceExport::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceExport");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceGBuffer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceGBuffer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceGBuffer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceRWBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceRWBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceRWBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceGrid2D.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceGrid2D::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceGrid2D");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetTextureSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNiagaraComponent*                           Component                                                  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SizeX                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SizeY                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraDataInterfaceGrid2DCollection::GetTextureSize(class UNiagaraComponent* Component, int32_t* SizeX, int32_t* SizeY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetTextureSize");
		
		UNiagaraDataInterfaceGrid2DCollection_GetTextureSize_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SizeX != nullptr)
			*SizeX = params.SizeX;
		if (SizeY != nullptr)
			*SizeY = params.SizeY;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetRawTextureSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNiagaraComponent*                           Component                                                  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SizeX                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SizeY                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraDataInterfaceGrid2DCollection::GetRawTextureSize(class UNiagaraComponent* Component, int32_t* SizeX, int32_t* SizeY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetRawTextureSize");
		
		UNiagaraDataInterfaceGrid2DCollection_GetRawTextureSize_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SizeX != nullptr)
			*SizeX = params.SizeX;
		if (SizeY != nullptr)
			*SizeY = params.SizeY;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNiagaraComponent*                           Component                                                  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTextureRenderTarget2D*                      Dest                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AttributeIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UNiagaraDataInterfaceGrid2DCollection::FillTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32_t AttributeIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D");
		
		UNiagaraDataInterfaceGrid2DCollection_FillTexture2D_Params params {};
		params.Component = Component;
		params.Dest = Dest;
		params.AttributeIndex = AttributeIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNiagaraComponent*                           Component                                                  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTextureRenderTarget2D*                      Dest                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TilesX                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TilesY                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UNiagaraDataInterfaceGrid2DCollection::FillRawTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32_t* TilesX, int32_t* TilesY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D");
		
		UNiagaraDataInterfaceGrid2DCollection_FillRawTexture2D_Params params {};
		params.Component = Component;
		params.Dest = Dest;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TilesX != nullptr)
			*TilesX = params.TilesX;
		if (TilesY != nullptr)
			*TilesY = params.TilesY;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceGrid2DCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceGrid2DCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceGrid2DCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceGrid2DCollectionReader.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceGrid2DCollectionReader::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceGrid2DCollectionReader");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceGrid3D.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceGrid3D::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceGrid3D");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetTextureSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNiagaraComponent*                           Component                                                  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SizeX                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SizeY                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SizeZ                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraDataInterfaceGrid3DCollection::GetTextureSize(class UNiagaraComponent* Component, int32_t* SizeX, int32_t* SizeY, int32_t* SizeZ)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetTextureSize");
		
		UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SizeX != nullptr)
			*SizeX = params.SizeX;
		if (SizeY != nullptr)
			*SizeY = params.SizeY;
		if (SizeZ != nullptr)
			*SizeZ = params.SizeZ;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetRawTextureSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNiagaraComponent*                           Component                                                  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SizeX                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SizeY                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SizeZ                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraDataInterfaceGrid3DCollection::GetRawTextureSize(class UNiagaraComponent* Component, int32_t* SizeX, int32_t* SizeY, int32_t* SizeZ)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetRawTextureSize");
		
		UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SizeX != nullptr)
			*SizeX = params.SizeX;
		if (SizeY != nullptr)
			*SizeY = params.SizeY;
		if (SizeZ != nullptr)
			*SizeZ = params.SizeZ;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillVolumeTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNiagaraComponent*                           Component                                                  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UVolumeTexture*                              Dest                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AttributeIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UNiagaraDataInterfaceGrid3DCollection::FillVolumeTexture(class UNiagaraComponent* Component, class UVolumeTexture* Dest, int32_t AttributeIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillVolumeTexture");
		
		UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Params params {};
		params.Component = Component;
		params.Dest = Dest;
		params.AttributeIndex = AttributeIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillRawVolumeTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNiagaraComponent*                           Component                                                  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UVolumeTexture*                              Dest                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TilesX                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TilesY                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TileZ                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UNiagaraDataInterfaceGrid3DCollection::FillRawVolumeTexture(class UNiagaraComponent* Component, class UVolumeTexture* Dest, int32_t* TilesX, int32_t* TilesY, int32_t* TileZ)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillRawVolumeTexture");
		
		UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Params params {};
		params.Component = Component;
		params.Dest = Dest;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TilesX != nullptr)
			*TilesX = params.TilesX;
		if (TilesY != nullptr)
			*TilesY = params.TilesY;
		if (TileZ != nullptr)
			*TileZ = params.TileZ;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceGrid3DCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceGrid3DCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceGrid3DCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceLandscape.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceLandscape::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceLandscape");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceNeighborGrid3D.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceNeighborGrid3D::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceNeighborGrid3D");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceOcclusion.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceOcclusion::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceOcclusion");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceParticleRead.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceParticleRead::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceParticleRead");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfacePlatformSet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfacePlatformSet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfacePlatformSet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceRenderTarget2D.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceRenderTarget2D::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceRenderTarget2D");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceRenderTarget2DArray.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceRenderTarget2DArray::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceRenderTarget2DArray");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceRenderTargetVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceRenderTargetVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceRenderTargetVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceSimpleCounter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceSimpleCounter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceSimpleCounter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceSkeletalMesh.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceSkeletalMesh::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceSkeletalMesh");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceSpline.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceSpline::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceSpline");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceStaticMesh.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceStaticMesh::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceStaticMesh");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceTexture.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceTexture::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceTexture");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceVector2DCurve.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceVector2DCurve::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVector2DCurve");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceVector4Curve.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceVector4Curve::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVector4Curve");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceVectorCurve.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceVectorCurve::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVectorCurve");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceVectorField.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceVectorField::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVectorField");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceVolumeTexture.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceVolumeTexture::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVolumeTexture");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraEditorDataBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraEditorDataBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraEditorDataBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraSignificanceHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraSignificanceHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraSignificanceHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraSignificanceHandlerDistance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraSignificanceHandlerDistance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraSignificanceHandlerDistance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraSignificanceHandlerAge.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraSignificanceHandlerAge::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraSignificanceHandlerAge");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraEffectType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraEffectType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraEffectType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraEmitter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraEmitter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraEmitter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraEventReceiverEmitterAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraEventReceiverEmitterAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraEventReceiverEmitterAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraEventReceiverEmitterAction_SpawnParticles.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraEventReceiverEmitterAction_SpawnParticles::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNiagaraSystem*                              SystemTemplate                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             AttachToComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttachPointName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EAttachLocation                                    LocationType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAutoDestroy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAutoActivate                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ENCPoolMethod                                      PoolingMethod                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPreCullCheck                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UNiagaraComponent* UNiagaraFunctionLibrary::SpawnSystemAttached(class UNiagaraSystem* SystemTemplate, class USceneComponent* AttachToComponent, const class FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, EAttachLocation LocationType, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached");
		
		UNiagaraFunctionLibrary_SpawnSystemAttached_Params params {};
		params.SystemTemplate = SystemTemplate;
		params.AttachToComponent = AttachToComponent;
		params.AttachPointName = AttachPointName;
		params.Location = Location;
		params.Rotation = Rotation;
		params.LocationType = LocationType;
		params.bAutoDestroy = bAutoDestroy;
		params.bAutoActivate = bAutoActivate;
		params.PoolingMethod = PoolingMethod;
		params.bPreCullCheck = bPreCullCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UNiagaraSystem*                              SystemTemplate                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAutoDestroy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAutoActivate                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ENCPoolMethod                                      PoolingMethod                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPreCullCheck                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UNiagaraComponent* UNiagaraFunctionLibrary::SpawnSystemAtLocation(class UObject* WorldContextObject, class UNiagaraSystem* SystemTemplate, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation");
		
		UNiagaraFunctionLibrary_SpawnSystemAtLocation_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SystemTemplate = SystemTemplate;
		params.Location = Location;
		params.Rotation = Rotation;
		params.Scale = Scale;
		params.bAutoDestroy = bAutoDestroy;
		params.bAutoActivate = bAutoActivate;
		params.PoolingMethod = PoolingMethod;
		params.bPreCullCheck = bPreCullCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraFunctionLibrary.SetVolumeTextureObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNiagaraComponent*                           NiagaraSystem                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OverrideName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UVolumeTexture*                              Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraFunctionLibrary::SetVolumeTextureObject(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UVolumeTexture* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.SetVolumeTextureObject");
		
		UNiagaraFunctionLibrary_SetVolumeTextureObject_Params params {};
		params.NiagaraSystem = NiagaraSystem;
		params.OverrideName = OverrideName;
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraFunctionLibrary.SetTextureObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNiagaraComponent*                           NiagaraSystem                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OverrideName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture*                                    Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraFunctionLibrary::SetTextureObject(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UTexture* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.SetTextureObject");
		
		UNiagaraFunctionLibrary_SetTextureObject_Params params {};
		params.NiagaraSystem = NiagaraSystem;
		params.OverrideName = OverrideName;
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceSamplingRegions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNiagaraComponent*                           NiagaraSystem                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OverrideName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FName>                                SamplingRegions                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UNiagaraFunctionLibrary::SetSkeletalMeshDataInterfaceSamplingRegions(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, TArray<class FName> SamplingRegions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceSamplingRegions");
		
		UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceSamplingRegions_Params params {};
		params.NiagaraSystem = NiagaraSystem;
		params.OverrideName = OverrideName;
		params.SamplingRegions = SamplingRegions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNiagaraComponent*                           NiagaraSystem                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OverrideName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UStaticMeshComponent*                        StaticMeshComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraFunctionLibrary::OverrideSystemUserVariableStaticMeshComponent(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UStaticMeshComponent* StaticMeshComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent");
		
		UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Params params {};
		params.NiagaraSystem = NiagaraSystem;
		params.OverrideName = OverrideName;
		params.StaticMeshComponent = StaticMeshComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNiagaraComponent*                           NiagaraSystem                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OverrideName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UStaticMesh*                                 StaticMesh                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraFunctionLibrary::OverrideSystemUserVariableStaticMesh(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UStaticMesh* StaticMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh");
		
		UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Params params {};
		params.NiagaraSystem = NiagaraSystem;
		params.OverrideName = OverrideName;
		params.StaticMesh = StaticMesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNiagaraComponent*                           NiagaraSystem                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OverrideName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkeletalMeshComponent*                      SkeletalMeshComponent                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraFunctionLibrary::OverrideSystemUserVariableSkeletalMeshComponent(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class USkeletalMeshComponent* SkeletalMeshComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent");
		
		UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Params params {};
		params.NiagaraSystem = NiagaraSystem;
		params.OverrideName = OverrideName;
		params.SkeletalMeshComponent = SkeletalMeshComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UNiagaraParameterCollection*                 Collection                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UNiagaraParameterCollectionInstance* UNiagaraFunctionLibrary::GetNiagaraParameterCollection(class UObject* WorldContextObject, class UNiagaraParameterCollection* Collection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection");
		
		UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Collection = Collection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraLightRendererProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraLightRendererProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraLightRendererProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraMeshRendererProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraMeshRendererProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraMeshRendererProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraMessageDataBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraMessageDataBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraMessageDataBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraParameterCollectionInstance::SetVectorParameter(const class FString& InVariableName, const struct FVector& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter");
		
		UNiagaraParameterCollectionInstance_SetVectorParameter_Params params {};
		params.InVariableName = InVariableName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    InValue                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraParameterCollectionInstance::SetVector4Parameter(const class FString& InVariableName, const struct FVector4& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter");
		
		UNiagaraParameterCollectionInstance_SetVector4Parameter_Params params {};
		params.InVariableName = InVariableName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraParameterCollectionInstance::SetVector2DParameter(const class FString& InVariableName, const struct FVector2D& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter");
		
		UNiagaraParameterCollectionInstance_SetVector2DParameter_Params params {};
		params.InVariableName = InVariableName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FQuat                                       InValue                                                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UNiagaraParameterCollectionInstance::SetQuatParameter(const class FString& InVariableName, const struct FQuat& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter");
		
		UNiagaraParameterCollectionInstance_SetQuatParameter_Params params {};
		params.InVariableName = InVariableName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraParameterCollectionInstance::SetIntParameter(const class FString& InVariableName, int32_t InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter");
		
		UNiagaraParameterCollectionInstance_SetIntParameter_Params params {};
		params.InVariableName = InVariableName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraParameterCollectionInstance::SetFloatParameter(const class FString& InVariableName, float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter");
		
		UNiagaraParameterCollectionInstance_SetFloatParameter_Params params {};
		params.InVariableName = InVariableName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraParameterCollectionInstance::SetColorParameter(const class FString& InVariableName, const struct FLinearColor& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter");
		
		UNiagaraParameterCollectionInstance_SetColorParameter_Params params {};
		params.InVariableName = InVariableName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraParameterCollectionInstance::SetBoolParameter(const class FString& InVariableName, bool InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter");
		
		UNiagaraParameterCollectionInstance_SetBoolParameter_Params params {};
		params.InVariableName = InVariableName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UNiagaraParameterCollectionInstance::GetVectorParameter(const class FString& InVariableName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter");
		
		UNiagaraParameterCollectionInstance_GetVectorParameter_Params params {};
		params.InVariableName = InVariableName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector4 UNiagaraParameterCollectionInstance::GetVector4Parameter(const class FString& InVariableName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter");
		
		UNiagaraParameterCollectionInstance_GetVector4Parameter_Params params {};
		params.InVariableName = InVariableName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UNiagaraParameterCollectionInstance::GetVector2DParameter(const class FString& InVariableName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter");
		
		UNiagaraParameterCollectionInstance_GetVector2DParameter_Params params {};
		params.InVariableName = InVariableName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FQuat UNiagaraParameterCollectionInstance::GetQuatParameter(const class FString& InVariableName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter");
		
		UNiagaraParameterCollectionInstance_GetQuatParameter_Params params {};
		params.InVariableName = InVariableName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UNiagaraParameterCollectionInstance::GetIntParameter(const class FString& InVariableName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter");
		
		UNiagaraParameterCollectionInstance_GetIntParameter_Params params {};
		params.InVariableName = InVariableName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UNiagaraParameterCollectionInstance::GetFloatParameter(const class FString& InVariableName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter");
		
		UNiagaraParameterCollectionInstance_GetFloatParameter_Params params {};
		params.InVariableName = InVariableName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLinearColor UNiagaraParameterCollectionInstance::GetColorParameter(const class FString& InVariableName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter");
		
		UNiagaraParameterCollectionInstance_GetColorParameter_Params params {};
		params.InVariableName = InVariableName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UNiagaraParameterCollectionInstance::GetBoolParameter(const class FString& InVariableName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter");
		
		UNiagaraParameterCollectionInstance_GetBoolParameter_Params params {};
		params.InVariableName = InVariableName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraParameterCollectionInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraParameterCollectionInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraParameterCollectionInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraParameterCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraParameterCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraParameterCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraPrecompileContainer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraPrecompileContainer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraPrecompileContainer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraPreviewBase.SetSystem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNiagaraSystem*                              InSystem                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANiagaraPreviewBase::SetSystem(class UNiagaraSystem* InSystem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewBase.SetSystem");
		
		ANiagaraPreviewBase_SetSystem_Params params {};
		params.InSystem = InSystem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraPreviewBase.SetLabelText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InXAxisText                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        InYAxisText                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ANiagaraPreviewBase::SetLabelText(const class FText& InXAxisText, const class FText& InYAxisText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewBase.SetLabelText");
		
		ANiagaraPreviewBase_SetLabelText_Params params {};
		params.InXAxisText = InXAxisText;
		params.InYAxisText = InYAxisText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANiagaraPreviewBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANiagaraPreviewBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraPreviewBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraPreviewAxis.Num
	 * 		Flags  -> ()
	 */
	int32_t UNiagaraPreviewAxis::Num()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewAxis.Num");
		
		UNiagaraPreviewAxis_Num_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraPreviewAxis.ApplyToPreview
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNiagaraComponent*                           PreviewComponent                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PreviewIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsXAxis                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OutLabelText                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraPreviewAxis::ApplyToPreview(class UNiagaraComponent* PreviewComponent, int32_t PreviewIndex, bool bIsXAxis, class FString* OutLabelText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewAxis.ApplyToPreview");
		
		UNiagaraPreviewAxis_ApplyToPreview_Params params {};
		params.PreviewComponent = PreviewComponent;
		params.PreviewIndex = PreviewIndex;
		params.bIsXAxis = bIsXAxis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLabelText != nullptr)
			*OutLabelText = params.OutLabelText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraPreviewAxis.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraPreviewAxis::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraPreviewAxis_InterpParamBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraPreviewAxis_InterpParamBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraPreviewAxis_InterpParamInt32.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraPreviewAxis_InterpParamInt32::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamInt32");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraPreviewAxis_InterpParamFloat.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraPreviewAxis_InterpParamFloat::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamFloat");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraPreviewAxis_InterpParamVector2D.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraPreviewAxis_InterpParamVector2D::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamVector2D");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraPreviewAxis_InterpParamVector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraPreviewAxis_InterpParamVector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamVector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraPreviewAxis_InterpParamVector4.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraPreviewAxis_InterpParamVector4::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamVector4");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraPreviewAxis_InterpParamLinearColor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraPreviewAxis_InterpParamLinearColor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraPreviewGrid.SetPaused
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bPaused                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANiagaraPreviewGrid::SetPaused(bool bPaused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewGrid.SetPaused");
		
		ANiagaraPreviewGrid_SetPaused_Params params {};
		params.bPaused = bPaused;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraPreviewGrid.GetPreviews
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UNiagaraComponent*>                   OutPreviews                                                (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ANiagaraPreviewGrid::GetPreviews(TArray<class UNiagaraComponent*>* OutPreviews)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewGrid.GetPreviews");
		
		ANiagaraPreviewGrid_GetPreviews_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPreviews != nullptr)
			*OutPreviews = params.OutPreviews;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraPreviewGrid.DeactivatePreviews
	 * 		Flags  -> ()
	 */
	void ANiagaraPreviewGrid::DeactivatePreviews()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewGrid.DeactivatePreviews");
		
		ANiagaraPreviewGrid_DeactivatePreviews_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraPreviewGrid.ActivatePreviews
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bReset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANiagaraPreviewGrid::ActivatePreviews(bool bReset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewGrid.ActivatePreviews");
		
		ANiagaraPreviewGrid_ActivatePreviews_Params params {};
		params.bReset = bReset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANiagaraPreviewGrid.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANiagaraPreviewGrid::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraPreviewGrid");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraRibbonRendererProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraRibbonRendererProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraRibbonRendererProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Niagara.NiagaraScript.RaiseOnGPUCompilationComplete
	 * 		Flags  -> ()
	 */
	void UNiagaraScript::RaiseOnGPUCompilationComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraScript.RaiseOnGPUCompilationComplete");
		
		UNiagaraScript_RaiseOnGPUCompilationComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraScript.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraScript::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraScript");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraScriptSourceBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraScriptSourceBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraScriptSourceBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraSimulationStageBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraSimulationStageBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraSimulationStageBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraSimulationStageGeneric.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraSimulationStageGeneric::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraSimulationStageGeneric");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraSpriteRendererProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraSpriteRendererProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraSpriteRendererProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraSystem");
		return ptr;
	}

}


