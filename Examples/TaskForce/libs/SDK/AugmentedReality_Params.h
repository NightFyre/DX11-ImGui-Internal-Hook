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
	 * Function AugmentedReality.ARBlueprintLibrary.UnpinComponent
	 */
	struct UARBlueprintLibrary_UnpinComponent_Params
	{
	public:
		class USceneComponent*                                     ComponentToUnpin;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.StopARSession
	 */
	struct UARBlueprintLibrary_StopARSession_Params
	{	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.StartARSession
	 */
	struct UARBlueprintLibrary_StartARSession_Params
	{
	public:
		class UARSessionConfig*                                    SessionConfig;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform
	 */
	struct UARBlueprintLibrary_SetAlignmentTransform_Params
	{
	public:
		struct FTransform                                          InAlignmentTransform;                                    // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.RemovePin
	 */
	struct UARBlueprintLibrary_RemovePin_Params
	{
	public:
		class UARPin*                                              PinToRemove;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult
	 */
	struct UARBlueprintLibrary_PinComponentToTraceResult_Params
	{
	public:
		class USceneComponent*                                     ComponentToPin;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KCK8[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FARTraceResult                                      TraceResult;                                             // 0x0010(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FName                                                DebugName;                                               // 0x0070(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UARPin*                                              ReturnValue;                                             // 0x0078(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.PinComponent
	 */
	struct UARBlueprintLibrary_PinComponent_Params
	{
	public:
		class USceneComponent*                                     ComponentToPin;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_69GC[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          PinToWorldTransform;                                     // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class UARTrackedGeometry*                                  TrackedGeometry;                                         // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                DebugName;                                               // 0x0048(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UARPin*                                              ReturnValue;                                             // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.PauseARSession
	 */
	struct UARBlueprintLibrary_PauseARSession_Params
	{	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D
	 */
	struct UARBlueprintLibrary_LineTraceTrackedObjects3D_Params
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             End;                                                     // 0x000C(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bTestFeaturePoints;                                      // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bTestGroundPlane;                                        // 0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bTestPlaneExtents;                                       // 0x001A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bTestPlaneBoundaryPolygon;                               // 0x001B(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OYWX[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FARTraceResult>                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects
	 */
	struct UARBlueprintLibrary_LineTraceTrackedObjects_Params
	{
	public:
		struct FVector2D                                           ScreenCoord;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bTestFeaturePoints;                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bTestGroundPlane;                                        // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bTestPlaneExtents;                                       // 0x000A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bTestPlaneBoundaryPolygon;                               // 0x000B(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_H68P[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FARTraceResult>                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported
	 */
	struct UARBlueprintLibrary_IsSessionTypeSupported_Params
	{
	public:
		EARSessionType                                             SessionType;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported
	 */
	struct UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Params
	{
	public:
		EARSessionType                                             SessionType;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EARSessionTrackingFeature                                  SessionTrackingFeature;                                  // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.IsARSupported
	 */
	struct UARBlueprintLibrary_IsARSupported_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus
	 */
	struct UARBlueprintLibrary_GetWorldMappingStatus_Params
	{
	public:
		EARWorldMappingState                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason
	 */
	struct UARBlueprintLibrary_GetTrackingQualityReason_Params
	{
	public:
		EARTrackingQualityReason                                   ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality
	 */
	struct UARBlueprintLibrary_GetTrackingQuality_Params
	{
	public:
		EARTrackingQuality                                         ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats
	 */
	struct UARBlueprintLibrary_GetSupportedVideoFormats_Params
	{
	public:
		EARSessionType                                             SessionType;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Y68Q[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FARVideoFormat>                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig
	 */
	struct UARBlueprintLibrary_GetSessionConfig_Params
	{
	public:
		class UARSessionConfig*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.GetPointCloud
	 */
	struct UARBlueprintLibrary_GetPointCloud_Params
	{
	public:
		TArray<struct FVector>                                     ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage
	 */
	struct UARBlueprintLibrary_GetPersonSegmentationImage_Params
	{
	public:
		class UARTextureCameraImage*                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage
	 */
	struct UARBlueprintLibrary_GetPersonSegmentationDepthImage_Params
	{
	public:
		class UARTextureCameraImage*                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate
	 */
	struct UARBlueprintLibrary_GetCurrentLightEstimate_Params
	{
	public:
		class UARLightEstimate*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.GetCameraImage
	 */
	struct UARBlueprintLibrary_GetCameraImage_Params
	{
	public:
		class UARTextureCameraImage*                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.GetCameraDepth
	 */
	struct UARBlueprintLibrary_GetCameraDepth_Params
	{
	public:
		class UARTextureCameraDepth*                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus
	 */
	struct UARBlueprintLibrary_GetARSessionStatus_Params
	{
	public:
		struct FARSessionStatus                                    ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses
	 */
	struct UARBlueprintLibrary_GetAllTrackedPoses_Params
	{
	public:
		TArray<class UARTrackedPose*>                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints
	 */
	struct UARBlueprintLibrary_GetAllTrackedPoints_Params
	{
	public:
		TArray<class UARTrackedPoint*>                             ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes
	 */
	struct UARBlueprintLibrary_GetAllTrackedPlanes_Params
	{
	public:
		TArray<class UARPlaneGeometry*>                            ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages
	 */
	struct UARBlueprintLibrary_GetAllTrackedImages_Params
	{
	public:
		TArray<class UARTrackedImage*>                             ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes
	 */
	struct UARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes_Params
	{
	public:
		TArray<class UAREnvironmentCaptureProbe*>                  ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses
	 */
	struct UARBlueprintLibrary_GetAllTracked2DPoses_Params
	{
	public:
		TArray<struct FARPose2D>                                   ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.GetAllPins
	 */
	struct UARBlueprintLibrary_GetAllPins_Params
	{
	public:
		TArray<class UARPin*>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries
	 */
	struct UARBlueprintLibrary_GetAllGeometries_Params
	{
	public:
		TArray<class UARTrackedGeometry*>                          ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry
	 */
	struct UARBlueprintLibrary_DebugDrawTrackedGeometry_Params
	{
	public:
		class UARTrackedGeometry*                                  TrackedGeometry;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             WorldContextObject;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        Color;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutlineThickness;                                        // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PersistForSeconds;                                       // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin
	 */
	struct UARBlueprintLibrary_DebugDrawPin_Params
	{
	public:
		class UARPin*                                              ARPin;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             WorldContextObject;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        Color;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Scale;                                                   // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PersistForSeconds;                                       // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage
	 */
	struct UARBlueprintLibrary_AddRuntimeCandidateImage_Params
	{
	public:
		class UARSessionConfig*                                    SessionConfig;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture2D*                                          CandidateTexture;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              FriendlyName;                                            // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PhysicalWidth;                                           // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HRLC[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UARCandidateImage*                                   ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe
	 */
	struct UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Extent;                                                  // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry
	 */
	struct UARTraceResultLibrary_GetTrackedGeometry_Params
	{
	public:
		struct FARTraceResult                                      TraceResult;                                             // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UARTrackedGeometry*                                  ReturnValue;                                             // 0x0060(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel
	 */
	struct UARTraceResultLibrary_GetTraceChannel_Params
	{
	public:
		struct FARTraceResult                                      TraceResult;                                             // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		EARLineTraceChannels                                       ReturnValue;                                             // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform
	 */
	struct UARTraceResultLibrary_GetLocalToWorldTransform_Params
	{
	public:
		struct FARTraceResult                                      TraceResult;                                             // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FTransform                                          ReturnValue;                                             // 0x0060(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform
	 */
	struct UARTraceResultLibrary_GetLocalToTrackingTransform_Params
	{
	public:
		struct FARTraceResult                                      TraceResult;                                             // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FTransform                                          ReturnValue;                                             // 0x0060(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera
	 */
	struct UARTraceResultLibrary_GetDistanceFromCamera_Params
	{
	public:
		struct FARTraceResult                                      TraceResult;                                             // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0060(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld
	 */
	struct UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UARSaveWorldAsyncTaskBlueprintProxy*                 ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject
	 */
	struct UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Extent;                                                  // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UARGetCandidateObjectAsyncTaskBlueprintProxy*        ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens
	 */
	struct UARBasicLightEstimate_GetAmbientIntensityLumens_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin
	 */
	struct UARBasicLightEstimate_GetAmbientColorTemperatureKelvin_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor
	 */
	struct UARBasicLightEstimate_GetAmbientColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARPin.GetTrackingState
	 */
	struct UARPin_GetTrackingState_Params
	{
	public:
		EARTrackingState                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARPin.GetTrackedGeometry
	 */
	struct UARPin_GetTrackedGeometry_Params
	{
	public:
		class UARTrackedGeometry*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARPin.GetPinnedComponent
	 */
	struct UARPin_GetPinnedComponent_Params
	{
	public:
		class USceneComponent*                                     ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARPin.GetLocalToWorldTransform
	 */
	struct UARPin_GetLocalToWorldTransform_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARPin.GetLocalToTrackingTransform
	 */
	struct UARPin_GetLocalToTrackingTransform_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARPin.GetDebugName
	 */
	struct UARPin_GetDebugName_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARPin.DebugDraw
	 */
	struct UARPin_DebugDraw_Params
	{
	public:
		class UWorld*                                              World;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        Color;                                                   // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Scale;                                                   // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PersistForSeconds;                                       // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects
	 */
	struct UARSessionConfig_ShouldResetTrackedObjects_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking
	 */
	struct UARSessionConfig_ShouldResetCameraTracking_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay
	 */
	struct UARSessionConfig_ShouldRenderCameraOverlay_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking
	 */
	struct UARSessionConfig_ShouldEnableCameraTracking_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus
	 */
	struct UARSessionConfig_ShouldEnableAutoFocus_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARSessionConfig.SetWorldMapData
	 */
	struct UARSessionConfig_SetWorldMapData_Params
	{
	public:
		TArray<unsigned char>                                      WorldMapData;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable
	 */
	struct UARSessionConfig_SetSessionTrackingFeatureToEnable_Params
	{
	public:
		EARSessionTrackingFeature                                  InSessionTrackingFeature;                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects
	 */
	struct UARSessionConfig_SetResetTrackedObjects_Params
	{
	public:
		bool                                                       bNewValue;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARSessionConfig.SetResetCameraTracking
	 */
	struct UARSessionConfig_SetResetCameraTracking_Params
	{
	public:
		bool                                                       bNewValue;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate
	 */
	struct UARSessionConfig_SetFaceTrackingUpdate_Params
	{
	public:
		EARFaceTrackingUpdate                                      InUpdate;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection
	 */
	struct UARSessionConfig_SetFaceTrackingDirection_Params
	{
	public:
		EARFaceTrackingDirection                                   InDirection;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus
	 */
	struct UARSessionConfig_SetEnableAutoFocus_Params
	{
	public:
		bool                                                       bNewValue;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat
	 */
	struct UARSessionConfig_SetDesiredVideoFormat_Params
	{
	public:
		struct FARVideoFormat                                      NewFormat;                                               // 0x0000(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARSessionConfig.SetCandidateObjectList
	 */
	struct UARSessionConfig_SetCandidateObjectList_Params
	{
	public:
		TArray<class UARCandidateObject*>                          InCandidateObjects;                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARSessionConfig.GetWorldMapData
	 */
	struct UARSessionConfig_GetWorldMapData_Params
	{
	public:
		TArray<unsigned char>                                      ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARSessionConfig.GetWorldAlignment
	 */
	struct UARSessionConfig_GetWorldAlignment_Params
	{
	public:
		EARWorldAlignment                                          ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARSessionConfig.GetSessionType
	 */
	struct UARSessionConfig_GetSessionType_Params
	{
	public:
		EARSessionType                                             ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode
	 */
	struct UARSessionConfig_GetPlaneDetectionMode_Params
	{
	public:
		EARPlaneDetectionMode                                      ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked
	 */
	struct UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARSessionConfig.GetLightEstimationMode
	 */
	struct UARSessionConfig_GetLightEstimationMode_Params
	{
	public:
		EARLightEstimationMode                                     ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARSessionConfig.GetFrameSyncMode
	 */
	struct UARSessionConfig_GetFrameSyncMode_Params
	{
	public:
		EARFrameSyncMode                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate
	 */
	struct UARSessionConfig_GetFaceTrackingUpdate_Params
	{
	public:
		EARFaceTrackingUpdate                                      ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection
	 */
	struct UARSessionConfig_GetFaceTrackingDirection_Params
	{
	public:
		EARFaceTrackingDirection                                   ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType
	 */
	struct UARSessionConfig_GetEnvironmentCaptureProbeType_Params
	{
	public:
		EAREnvironmentCaptureProbeType                             ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature
	 */
	struct UARSessionConfig_GetEnabledSessionTrackingFeature_Params
	{
	public:
		EARSessionTrackingFeature                                  ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat
	 */
	struct UARSessionConfig_GetDesiredVideoFormat_Params
	{
	public:
		struct FARVideoFormat                                      ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARSessionConfig.GetCandidateObjectList
	 */
	struct UARSessionConfig_GetCandidateObjectList_Params
	{
	public:
		TArray<class UARCandidateObject*>                          ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARSessionConfig.GetCandidateImageList
	 */
	struct UARSessionConfig_GetCandidateImageList_Params
	{
	public:
		TArray<class UARCandidateImage*>                           ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARSessionConfig.AddCandidateObject
	 */
	struct UARSessionConfig_AddCandidateObject_Params
	{
	public:
		class UARCandidateObject*                                  CandidateObject;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARSessionConfig.AddCandidateImage
	 */
	struct UARSessionConfig_AddCandidateImage_Params
	{
	public:
		class UARCandidateImage*                                   NewCandidateImage;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData
	 */
	struct AARSharedWorldGameMode_SetPreviewImageData_Params
	{
	public:
		TArray<unsigned char>                                      ImageData;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady
	 */
	struct AARSharedWorldGameMode_SetARWorldSharingIsReady_Params
	{	};

	/**
	 * Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData
	 */
	struct AARSharedWorldGameMode_SetARSharedWorldData_Params
	{
	public:
		TArray<unsigned char>                                      ARWorldData;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState
	 */
	struct AARSharedWorldGameMode_GetARSharedWorldGameState_Params
	{
	public:
		class AARSharedWorldGameState*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady
	 */
	struct AARSharedWorldGameState_K2_OnARWorldMapIsReady_Params
	{	};

	/**
	 * Function AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving
	 */
	struct AARSharedWorldPlayerController_ServerMarkReadyForReceiving_Params
	{	};

	/**
	 * Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData
	 */
	struct AARSharedWorldPlayerController_ClientUpdatePreviewImageData_Params
	{
	public:
		int32_t                                                    Offset;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_G1JI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<unsigned char>                                      Buffer;                                                  // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData
	 */
	struct AARSharedWorldPlayerController_ClientUpdateARWorldData_Params
	{
	public:
		int32_t                                                    Offset;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DMLR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<unsigned char>                                      Buffer;                                                  // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld
	 */
	struct AARSharedWorldPlayerController_ClientInitSharedWorld_Params
	{
	public:
		int32_t                                                    PreviewImageSize;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ARWorldDataSize;                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe
	 */
	struct AARSkyLight_SetEnvironmentCaptureProbe_Params
	{
	public:
		class UAREnvironmentCaptureProbe*                          InCaptureProbe;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARTrackedGeometry.IsTracked
	 */
	struct UARTrackedGeometry_IsTracked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh
	 */
	struct UARTrackedGeometry_GetUnderlyingMesh_Params
	{
	public:
		class UMRMeshComponent*                                    ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARTrackedGeometry.GetTrackingState
	 */
	struct UARTrackedGeometry_GetTrackingState_Params
	{
	public:
		EARTrackingState                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARTrackedGeometry.GetObjectClassification
	 */
	struct UARTrackedGeometry_GetObjectClassification_Params
	{
	public:
		EARObjectClassification                                    ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform
	 */
	struct UARTrackedGeometry_GetLocalToWorldTransform_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform
	 */
	struct UARTrackedGeometry_GetLocalToTrackingTransform_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp
	 */
	struct UARTrackedGeometry_GetLastUpdateTimestamp_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber
	 */
	struct UARTrackedGeometry_GetLastUpdateFrameNumber_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARTrackedGeometry.GetDebugName
	 */
	struct UARTrackedGeometry_GetDebugName_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy
	 */
	struct UARPlaneGeometry_GetSubsumedBy_Params
	{
	public:
		class UARPlaneGeometry*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARPlaneGeometry.GetOrientation
	 */
	struct UARPlaneGeometry_GetOrientation_Params
	{
	public:
		EARPlaneOrientation                                        ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARPlaneGeometry.GetExtent
	 */
	struct UARPlaneGeometry_GetExtent_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARPlaneGeometry.GetCenter
	 */
	struct UARPlaneGeometry_GetCenter_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace
	 */
	struct UARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Params
	{
	public:
		TArray<struct FVector>                                     ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARTrackedImage.GetEstimateSize
	 */
	struct UARTrackedImage_GetEstimateSize_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARTrackedImage.GetDetectedImage
	 */
	struct UARTrackedImage_GetDetectedImage_Params
	{
	public:
		class UARCandidateImage*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform
	 */
	struct UARFaceGeometry_GetWorldSpaceEyeTransform_Params
	{
	public:
		EAREye                                                     Eye;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HB09[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform
	 */
	struct UARFaceGeometry_GetLocalSpaceEyeTransform_Params
	{
	public:
		EAREye                                                     Eye;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JXOZ[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue
	 */
	struct UARFaceGeometry_GetBlendShapeValue_Params
	{
	public:
		EARFaceBlendShape                                          BlendShape;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_L4HL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARFaceGeometry.GetBlendShapes
	 */
	struct UARFaceGeometry_GetBlendShapes_Params
	{
	public:
		TMap<EARFaceBlendShape, float>                             ReturnValue;                                             // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent
	 */
	struct UAREnvironmentCaptureProbe_GetExtent_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture
	 */
	struct UAREnvironmentCaptureProbe_GetEnvironmentCaptureTexture_Params
	{
	public:
		class UAREnvironmentCaptureProbeTexture*                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARTrackedObject.GetDetectedObject
	 */
	struct UARTrackedObject_GetDetectedObject_Params
	{
	public:
		class UARCandidateObject*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARTrackedPose.GetTrackedPoseData
	 */
	struct UARTrackedPose_GetTrackedPoseData_Params
	{
	public:
		struct FARPose3D                                           ReturnValue;                                             // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARCandidateImage.GetPhysicalWidth
	 */
	struct UARCandidateImage_GetPhysicalWidth_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARCandidateImage.GetPhysicalHeight
	 */
	struct UARCandidateImage_GetPhysicalHeight_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARCandidateImage.GetOrientation
	 */
	struct UARCandidateImage_GetOrientation_Params
	{
	public:
		EARCandidateImageOrientation                               ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARCandidateImage.GetFriendlyName
	 */
	struct UARCandidateImage_GetFriendlyName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARCandidateImage.GetCandidateTexture
	 */
	struct UARCandidateImage_GetCandidateTexture_Params
	{
	public:
		class UTexture2D*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARCandidateObject.SetFriendlyName
	 */
	struct UARCandidateObject_SetFriendlyName_Params
	{
	public:
		class FString                                              NewName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARCandidateObject.SetCandidateObjectData
	 */
	struct UARCandidateObject_SetCandidateObjectData_Params
	{
	public:
		TArray<unsigned char>                                      InCandidateObject;                                       // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARCandidateObject.SetBoundingBox
	 */
	struct UARCandidateObject_SetBoundingBox_Params
	{
	public:
		struct FBox                                                InBoundingBox;                                           // 0x0000(0x001C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARCandidateObject.GetFriendlyName
	 */
	struct UARCandidateObject_GetFriendlyName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARCandidateObject.GetCandidateObjectData
	 */
	struct UARCandidateObject_GetCandidateObjectData_Params
	{
	public:
		TArray<unsigned char>                                      ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARCandidateObject.GetBoundingBox
	 */
	struct UARCandidateObject_GetBoundingBox_Params
	{
	public:
		struct FBox                                                ReturnValue;                                             // 0x0000(0x001C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
