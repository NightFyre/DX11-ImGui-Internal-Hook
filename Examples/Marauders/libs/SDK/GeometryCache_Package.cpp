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
	 * 		Name   -> PredefinedFunction UGeometryCache.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryCache::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryCache.GeometryCache");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent
	 * 		Flags  -> ()
	 */
	class UGeometryCacheComponent* AGeometryCacheActor::GetGeometryCacheComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent");
		
		AGeometryCacheActor_GetGeometryCacheComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGeometryCacheActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGeometryCacheActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryCache.GeometryCacheActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryCacheCodecBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryCacheCodecBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryCache.GeometryCacheCodecBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryCacheCodecRaw.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryCacheCodecRaw::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryCache.GeometryCacheCodecRaw");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryCacheCodecV1.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryCacheCodecV1::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryCache.GeometryCacheCodecV1");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.TickAtThisTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInIsRunning                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInBackwards                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInIsLooping                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryCacheComponent::TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.TickAtThisTime");
		
		UGeometryCacheComponent_TickAtThisTime_Params params {};
		params.Time = Time;
		params.bInIsRunning = bInIsRunning;
		params.bInBackwards = bInBackwards;
		params.bInIsLooping = bInIsLooping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.Stop
	 * 		Flags  -> ()
	 */
	void UGeometryCacheComponent::Stop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.Stop");
		
		UGeometryCacheComponent_Stop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewStartTimeOffset                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryCacheComponent::SetStartTimeOffset(float NewStartTimeOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset");
		
		UGeometryCacheComponent_SetStartTimeOffset_Params params {};
		params.NewStartTimeOffset = NewStartTimeOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewPlaybackSpeed                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryCacheComponent::SetPlaybackSpeed(float NewPlaybackSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed");
		
		UGeometryCacheComponent_SetPlaybackSpeed_Params params {};
		params.NewPlaybackSpeed = NewPlaybackSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.SetLooping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewLooping                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryCacheComponent::SetLooping(bool bNewLooping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.SetLooping");
		
		UGeometryCacheComponent_SetLooping_Params params {};
		params.bNewLooping = bNewLooping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.SetGeometryCache
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGeometryCache*                              NewGeomCache                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGeometryCacheComponent::SetGeometryCache(class UGeometryCache* NewGeomCache)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.SetGeometryCache");
		
		UGeometryCacheComponent_SetGeometryCache_Params params {};
		params.NewGeomCache = NewGeomCache;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.PlayReversedFromEnd
	 * 		Flags  -> ()
	 */
	void UGeometryCacheComponent::PlayReversedFromEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.PlayReversedFromEnd");
		
		UGeometryCacheComponent_PlayReversedFromEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.PlayReversed
	 * 		Flags  -> ()
	 */
	void UGeometryCacheComponent::PlayReversed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.PlayReversed");
		
		UGeometryCacheComponent_PlayReversed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.PlayFromStart
	 * 		Flags  -> ()
	 */
	void UGeometryCacheComponent::PlayFromStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.PlayFromStart");
		
		UGeometryCacheComponent_PlayFromStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.Play
	 * 		Flags  -> ()
	 */
	void UGeometryCacheComponent::Play()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.Play");
		
		UGeometryCacheComponent_Play_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.Pause
	 * 		Flags  -> ()
	 */
	void UGeometryCacheComponent::Pause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.Pause");
		
		UGeometryCacheComponent_Pause_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.IsPlayingReversed
	 * 		Flags  -> ()
	 */
	bool UGeometryCacheComponent::IsPlayingReversed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.IsPlayingReversed");
		
		UGeometryCacheComponent_IsPlayingReversed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.IsPlaying
	 * 		Flags  -> ()
	 */
	bool UGeometryCacheComponent::IsPlaying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.IsPlaying");
		
		UGeometryCacheComponent_IsPlaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.IsLooping
	 * 		Flags  -> ()
	 */
	bool UGeometryCacheComponent::IsLooping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.IsLooping");
		
		UGeometryCacheComponent_IsLooping_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset
	 * 		Flags  -> ()
	 */
	float UGeometryCacheComponent::GetStartTimeOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset");
		
		UGeometryCacheComponent_GetStartTimeOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed
	 * 		Flags  -> ()
	 */
	float UGeometryCacheComponent::GetPlaybackSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed");
		
		UGeometryCacheComponent_GetPlaybackSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.GetPlaybackDirection
	 * 		Flags  -> ()
	 */
	float UGeometryCacheComponent::GetPlaybackDirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetPlaybackDirection");
		
		UGeometryCacheComponent_GetPlaybackDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.GetNumberOfFrames
	 * 		Flags  -> ()
	 */
	int32_t UGeometryCacheComponent::GetNumberOfFrames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetNumberOfFrames");
		
		UGeometryCacheComponent_GetNumberOfFrames_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.GetDuration
	 * 		Flags  -> ()
	 */
	float UGeometryCacheComponent::GetDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetDuration");
		
		UGeometryCacheComponent_GetDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GeometryCache.GeometryCacheComponent.GetAnimationTime
	 * 		Flags  -> ()
	 */
	float UGeometryCacheComponent::GetAnimationTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetAnimationTime");
		
		UGeometryCacheComponent_GetAnimationTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryCacheComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryCacheComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryCache.GeometryCacheComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryCacheTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryCacheTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryCache.GeometryCacheTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometryCacheMeshData                      MeshData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              SampleTime                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeometryCacheTrack_FlipbookAnimation::AddMeshSample(const struct FGeometryCacheMeshData& MeshData, float SampleTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample");
		
		UGeometryCacheTrack_FlipbookAnimation_AddMeshSample_Params params {};
		params.MeshData = MeshData;
		params.SampleTime = SampleTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryCacheTrack_FlipbookAnimation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryCacheTrack_FlipbookAnimation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryCache.GeometryCacheTrack_FlipbookAnimation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryCacheTrackStreamable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryCacheTrackStreamable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryCache.GeometryCacheTrackStreamable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometryCacheMeshData                      NewMeshData                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGeometryCacheTrack_TransformAnimation::SetMesh(const struct FGeometryCacheMeshData& NewMeshData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh");
		
		UGeometryCacheTrack_TransformAnimation_SetMesh_Params params {};
		params.NewMeshData = NewMeshData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryCacheTrack_TransformAnimation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryCacheTrack_TransformAnimation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryCache.GeometryCacheTrack_TransformAnimation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometryCacheMeshData                      NewMeshData                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGeometryCacheTrack_TransformGroupAnimation::SetMesh(const struct FGeometryCacheMeshData& NewMeshData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh");
		
		UGeometryCacheTrack_TransformGroupAnimation_SetMesh_Params params {};
		params.NewMeshData = NewMeshData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometryCacheTrack_TransformGroupAnimation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometryCacheTrack_TransformGroupAnimation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation");
		return ptr;
	}

}


