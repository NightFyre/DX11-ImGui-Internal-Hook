#pragma once

/**
 * Name: Task_Force
 * Version: 0.3.6.1537
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent
	 */
	struct AGeometryCacheActor_GetGeometryCacheComponent_Params
	{
	public:
		class UGeometryCacheComponent*                             ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCache.GeometryCacheComponent.TickAtThisTime
	 */
	struct UGeometryCacheComponent_TickAtThisTime_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInIsRunning;                                            // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInBackwards;                                            // 0x0005(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInIsLooping;                                            // 0x0006(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCache.GeometryCacheComponent.Stop
	 */
	struct UGeometryCacheComponent_Stop_Params
	{	};

	/**
	 * Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset
	 */
	struct UGeometryCacheComponent_SetStartTimeOffset_Params
	{
	public:
		float                                                      NewStartTimeOffset;                                      // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed
	 */
	struct UGeometryCacheComponent_SetPlaybackSpeed_Params
	{
	public:
		float                                                      NewPlaybackSpeed;                                        // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCache.GeometryCacheComponent.SetLooping
	 */
	struct UGeometryCacheComponent_SetLooping_Params
	{
	public:
		bool                                                       bNewLooping;                                             // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCache.GeometryCacheComponent.SetGeometryCache
	 */
	struct UGeometryCacheComponent_SetGeometryCache_Params
	{
	public:
		class UGeometryCache*                                      NewGeomCache;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCache.GeometryCacheComponent.PlayReversedFromEnd
	 */
	struct UGeometryCacheComponent_PlayReversedFromEnd_Params
	{	};

	/**
	 * Function GeometryCache.GeometryCacheComponent.PlayReversed
	 */
	struct UGeometryCacheComponent_PlayReversed_Params
	{	};

	/**
	 * Function GeometryCache.GeometryCacheComponent.PlayFromStart
	 */
	struct UGeometryCacheComponent_PlayFromStart_Params
	{	};

	/**
	 * Function GeometryCache.GeometryCacheComponent.Play
	 */
	struct UGeometryCacheComponent_Play_Params
	{	};

	/**
	 * Function GeometryCache.GeometryCacheComponent.Pause
	 */
	struct UGeometryCacheComponent_Pause_Params
	{	};

	/**
	 * Function GeometryCache.GeometryCacheComponent.IsPlayingReversed
	 */
	struct UGeometryCacheComponent_IsPlayingReversed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCache.GeometryCacheComponent.IsPlaying
	 */
	struct UGeometryCacheComponent_IsPlaying_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCache.GeometryCacheComponent.IsLooping
	 */
	struct UGeometryCacheComponent_IsLooping_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset
	 */
	struct UGeometryCacheComponent_GetStartTimeOffset_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed
	 */
	struct UGeometryCacheComponent_GetPlaybackSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCache.GeometryCacheComponent.GetPlaybackDirection
	 */
	struct UGeometryCacheComponent_GetPlaybackDirection_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCache.GeometryCacheComponent.GetNumberOfFrames
	 */
	struct UGeometryCacheComponent_GetNumberOfFrames_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCache.GeometryCacheComponent.GetDuration
	 */
	struct UGeometryCacheComponent_GetDuration_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCache.GeometryCacheComponent.GetAnimationTime
	 */
	struct UGeometryCacheComponent_GetAnimationTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample
	 */
	struct UGeometryCacheTrack_FlipbookAnimation_AddMeshSample_Params
	{
	public:
		struct FGeometryCacheMeshData                              MeshData;                                                // 0x0000(0x00A8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      SampleTime;                                              // 0x00A8(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh
	 */
	struct UGeometryCacheTrack_TransformAnimation_SetMesh_Params
	{
	public:
		struct FGeometryCacheMeshData                              NewMeshData;                                             // 0x0000(0x00A8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh
	 */
	struct UGeometryCacheTrack_TransformGroupAnimation_SetMesh_Params
	{
	public:
		struct FGeometryCacheMeshData                              NewMeshData;                                             // 0x0000(0x00A8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
