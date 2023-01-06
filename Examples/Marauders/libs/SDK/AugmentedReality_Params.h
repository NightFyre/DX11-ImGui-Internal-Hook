#pragma once

/**
 * Name: RaidGame
 * Version: 1
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
	 * Function AugmentedReality.ARActor.AddARComponent
	 */
	struct AARActor_AddARComponent_Params
	{
	public:
		class UClass*                                              InComponentClass;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGuid                                               NativeID;                                                // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UARComponent*                                        ReturnValue;                                             // 0x0018(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.UnpinComponent
	 */
	struct UARBlueprintLibrary_UnpinComponent_Params
	{
	public:
		class USceneComponent*                                     ComponentToUnpin;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.ToggleARCapture
	 */
	struct UARBlueprintLibrary_ToggleARCapture_Params
	{
	public:
		bool                                                       bOnOff;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EARCaptureType                                             CaptureType;                                             // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
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
	 * Function AugmentedReality.ARBlueprintLibrary.SetEnabledXRCamera
	 */
	struct UARBlueprintLibrary_SetEnabledXRCamera_Params
	{
	public:
		bool                                                       bOnOff;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.SetARWorldScale
	 */
	struct UARBlueprintLibrary_SetARWorldScale_Params
	{
	public:
		float                                                      InWorldScale;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.SetARWorldOriginLocationAndRotation
	 */
	struct UARBlueprintLibrary_SetARWorldOriginLocationAndRotation_Params
	{
	public:
		struct FVector                                             OriginLocation;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            OriginRotation;                                          // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bIsTransformInWorldSpace;                                // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bMaintainUpDirection;                                    // 0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
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
	 * Function AugmentedReality.ARBlueprintLibrary.SaveARPinToLocalStore
	 */
	struct UARBlueprintLibrary_SaveARPinToLocalStore_Params
	{
	public:
		class FName                                                InSaveName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UARPin*                                              InPin;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.ResizeXRCamera
	 */
	struct UARBlueprintLibrary_ResizeXRCamera_Params
	{
	public:
		struct FIntPoint                                           InSize;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIntPoint                                           ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
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
	 * Function AugmentedReality.ARBlueprintLibrary.RemoveARPinFromLocalStore
	 */
	struct UARBlueprintLibrary_RemoveARPinFromLocalStore_Params
	{
	public:
		class FName                                                InSaveName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.RemoveAllARPinsFromLocalStore
	 */
	struct UARBlueprintLibrary_RemoveAllARPinsFromLocalStore_Params
	{	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult
	 */
	struct UARBlueprintLibrary_PinComponentToTraceResult_Params
	{
	public:
		class USceneComponent*                                     ComponentToPin;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_K1PG[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FARTraceResult                                      TraceResult;                                             // 0x0010(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FName                                                DebugName;                                               // 0x0070(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UARPin*                                              ReturnValue;                                             // 0x0078(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.PinComponentToARPin
	 */
	struct UARBlueprintLibrary_PinComponentToARPin_Params
	{
	public:
		class USceneComponent*                                     ComponentToPin;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UARPin*                                              Pin;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.PinComponent
	 */
	struct UARBlueprintLibrary_PinComponent_Params
	{
	public:
		class USceneComponent*                                     ComponentToPin;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZG76[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
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
	 * Function AugmentedReality.ARBlueprintLibrary.LoadARPinsFromLocalStore
	 */
	struct UARBlueprintLibrary_LoadARPinsFromLocalStore_Params
	{
	public:
		TMap<class FName, class UARPin*>                           ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

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
		unsigned char                                              UnknownData_CN1F[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
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
		unsigned char                                              UnknownData_YKT5[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
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
	 * Function AugmentedReality.ARBlueprintLibrary.IsSceneReconstructionSupported
	 */
	struct UARBlueprintLibrary_IsSceneReconstructionSupported_Params
	{
	public:
		EARSessionType                                             SessionType;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EARSceneReconstruction                                     SceneReconstructionMethod;                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
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
	 * Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreSupported
	 */
	struct UARBlueprintLibrary_IsARPinLocalStoreSupported_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreReady
	 */
	struct UARBlueprintLibrary_IsARPinLocalStoreReady_Params
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
		unsigned char                                              UnknownData_8V09[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
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
		class UARTexture*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage
	 */
	struct UARBlueprintLibrary_GetPersonSegmentationDepthImage_Params
	{
	public:
		class UARTexture*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.GetObjectClassificationAtLocation
	 */
	struct UARBlueprintLibrary_GetObjectClassificationAtLocation_Params
	{
	public:
		struct FVector                                             InWorldLocation;                                         // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EARObjectClassification                                    OutClassification;                                       // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HD6Q[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             OutClassificationLocation;                               // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxLocationDiff;                                         // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.GetNumberOfTrackedFacesSupported
	 */
	struct UARBlueprintLibrary_GetNumberOfTrackedFacesSupported_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
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
	 * Function AugmentedReality.ARBlueprintLibrary.GetCameraIntrinsics
	 */
	struct UARBlueprintLibrary_GetCameraIntrinsics_Params
	{
	public:
		struct FARCameraIntrinsics                                 OutCameraIntrinsics;                                     // 0x0000(0x0018)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
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
	 * Function AugmentedReality.ARBlueprintLibrary.GetARWorldScale
	 */
	struct UARBlueprintLibrary_GetARWorldScale_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.GetARTexture
	 */
	struct UARBlueprintLibrary_GetARTexture_Params
	{
	public:
		EARTextureType                                             TextureType;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KDNZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UARTexture*                                          ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
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
	 * Function AugmentedReality.ARBlueprintLibrary.GetAllGeometriesByClass
	 */
	struct UARBlueprintLibrary_GetAllGeometriesByClass_Params
	{
	public:
		class UClass*                                              GeometryClass;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UARTrackedGeometry*>                          ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
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
	 * Function AugmentedReality.ARBlueprintLibrary.GetAlignmentTransform
	 */
	struct UARBlueprintLibrary_GetAlignmentTransform_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.FindTrackedPointsByName
	 */
	struct UARBlueprintLibrary_FindTrackedPointsByName_Params
	{
	public:
		class FString                                              PointName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UARTrackedPoint*>                             ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
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
	 * Function AugmentedReality.ARBlueprintLibrary.CalculateClosestIntersection
	 */
	struct UARBlueprintLibrary_CalculateClosestIntersection_Params
	{
	public:
		TArray<struct FVector>                                     StartPoints;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FVector>                                     endpoints;                                               // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FVector                                             ClosestIntersection;                                     // 0x0020(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.CalculateAlignmentTransform
	 */
	struct UARBlueprintLibrary_CalculateAlignmentTransform_Params
	{
	public:
		struct FTransform                                          TransformInFirstCoordinateSystem;                        // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FTransform                                          TransformInSecondCoordinateSystem;                       // 0x0030(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FTransform                                          AlignmentTransform;                                      // 0x0060(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARBlueprintLibrary.AddTrackedPointWithName
	 */
	struct UARBlueprintLibrary_AddTrackedPointWithName_Params
	{
	public:
		struct FTransform                                          WorldTransform;                                          // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class FString                                              PointName;                                               // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDeletePointsWithSameName;                               // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0041(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
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
		unsigned char                                              UnknownData_8Q1H[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
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
	 * Function AugmentedReality.ARTraceResultLibrary.GetLocalTransform
	 */
	struct UARTraceResultLibrary_GetLocalTransform_Params
	{
	public:
		struct FARTraceResult                                      TraceResult;                                             // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FTransform                                          ReturnValue;                                             // 0x0060(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
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
	 * Function AugmentedReality.ARComponent.UpdateVisualization
	 */
	struct UARComponent_UpdateVisualization_Params
	{	};

	/**
	 * Function AugmentedReality.ARComponent.SetNativeID
	 */
	struct UARComponent_SetNativeID_Params
	{
	public:
		struct FGuid                                               NativeID;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARComponent.ReceiveRemove
	 */
	struct UARComponent_ReceiveRemove_Params
	{	};

	/**
	 * Function AugmentedReality.ARComponent.OnRep_Payload
	 */
	struct UARComponent_OnRep_Payload_Params
	{	};

	/**
	 * Function AugmentedReality.ARComponent.GetMRMesh
	 */
	struct UARComponent_GetMRMesh_Params
	{
	public:
		class UMRMeshComponent*                                    ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARPlaneComponent.SetPlaneComponentDebugMode
	 */
	struct UARPlaneComponent_SetPlaneComponentDebugMode_Params
	{
	public:
		EPlaneComponentDebugMode                                   NewDebugMode;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARPlaneComponent.SetObjectClassificationDebugColors
	 */
	struct UARPlaneComponent_SetObjectClassificationDebugColors_Params
	{
	public:
		TMap<EARObjectClassification, struct FLinearColor>         InColors;                                                // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARPlaneComponent.ServerUpdatePayload
	 */
	struct UARPlaneComponent_ServerUpdatePayload_Params
	{
	public:
		struct FARPlaneUpdatePayload                               NewPayload;                                              // 0x0000(0x0080)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARPlaneComponent.ReceiveUpdate
	 */
	struct UARPlaneComponent_ReceiveUpdate_Params
	{
	public:
		struct FARPlaneUpdatePayload                               Payload;                                                 // 0x0000(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARPlaneComponent.ReceiveAdd
	 */
	struct UARPlaneComponent_ReceiveAdd_Params
	{
	public:
		struct FARPlaneUpdatePayload                               Payload;                                                 // 0x0000(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARPlaneComponent.GetObjectClassificationDebugColors
	 */
	struct UARPlaneComponent_GetObjectClassificationDebugColors_Params
	{
	public:
		TMap<EARObjectClassification, struct FLinearColor>         ReturnValue;                                             // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARPointComponent.ServerUpdatePayload
	 */
	struct UARPointComponent_ServerUpdatePayload_Params
	{
	public:
		struct FARPointUpdatePayload                               NewPayload;                                              // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARPointComponent.ReceiveUpdate
	 */
	struct UARPointComponent_ReceiveUpdate_Params
	{
	public:
		struct FARPointUpdatePayload                               Payload;                                                 // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARPointComponent.ReceiveAdd
	 */
	struct UARPointComponent_ReceiveAdd_Params
	{
	public:
		struct FARPointUpdatePayload                               Payload;                                                 // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARFaceComponent.SetFaceComponentDebugMode
	 */
	struct UARFaceComponent_SetFaceComponentDebugMode_Params
	{
	public:
		EFaceComponentDebugMode                                    NewDebugMode;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARFaceComponent.ServerUpdatePayload
	 */
	struct UARFaceComponent_ServerUpdatePayload_Params
	{
	public:
		struct FARFaceUpdatePayload                                NewPayload;                                              // 0x0000(0x0040)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARFaceComponent.ReceiveUpdate
	 */
	struct UARFaceComponent_ReceiveUpdate_Params
	{
	public:
		struct FARFaceUpdatePayload                                Payload;                                                 // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARFaceComponent.ReceiveAdd
	 */
	struct UARFaceComponent_ReceiveAdd_Params
	{
	public:
		struct FARFaceUpdatePayload                                Payload;                                                 // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARImageComponent.SetImageComponentDebugMode
	 */
	struct UARImageComponent_SetImageComponentDebugMode_Params
	{
	public:
		EImageComponentDebugMode                                   NewDebugMode;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARImageComponent.ServerUpdatePayload
	 */
	struct UARImageComponent_ServerUpdatePayload_Params
	{
	public:
		struct FARImageUpdatePayload                               NewPayload;                                              // 0x0000(0x0060)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARImageComponent.ReceiveUpdate
	 */
	struct UARImageComponent_ReceiveUpdate_Params
	{
	public:
		struct FARImageUpdatePayload                               Payload;                                                 // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARImageComponent.ReceiveAdd
	 */
	struct UARImageComponent_ReceiveAdd_Params
	{
	public:
		struct FARImageUpdatePayload                               Payload;                                                 // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARQRCodeComponent.SetQRCodeComponentDebugMode
	 */
	struct UARQRCodeComponent_SetQRCodeComponentDebugMode_Params
	{
	public:
		EQRCodeComponentDebugMode                                  NewDebugMode;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARQRCodeComponent.ServerUpdatePayload
	 */
	struct UARQRCodeComponent_ServerUpdatePayload_Params
	{
	public:
		struct FARQRCodeUpdatePayload                              NewPayload;                                              // 0x0000(0x0070)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARQRCodeComponent.ReceiveUpdate
	 */
	struct UARQRCodeComponent_ReceiveUpdate_Params
	{
	public:
		struct FARQRCodeUpdatePayload                              Payload;                                                 // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARQRCodeComponent.ReceiveAdd
	 */
	struct UARQRCodeComponent_ReceiveAdd_Params
	{
	public:
		struct FARQRCodeUpdatePayload                              Payload;                                                 // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARPoseComponent.SetPoseComponentDebugMode
	 */
	struct UARPoseComponent_SetPoseComponentDebugMode_Params
	{
	public:
		EPoseComponentDebugMode                                    NewDebugMode;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARPoseComponent.ServerUpdatePayload
	 */
	struct UARPoseComponent_ServerUpdatePayload_Params
	{
	public:
		struct FARPoseUpdatePayload                                NewPayload;                                              // 0x0000(0x0040)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARPoseComponent.ReceiveUpdate
	 */
	struct UARPoseComponent_ReceiveUpdate_Params
	{
	public:
		struct FARPoseUpdatePayload                                Payload;                                                 // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARPoseComponent.ReceiveAdd
	 */
	struct UARPoseComponent_ReceiveAdd_Params
	{
	public:
		struct FARPoseUpdatePayload                                Payload;                                                 // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.AREnvironmentProbeComponent.ServerUpdatePayload
	 */
	struct UAREnvironmentProbeComponent_ServerUpdatePayload_Params
	{
	public:
		struct FAREnvironmentProbeUpdatePayload                    NewPayload;                                              // 0x0000(0x0030)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.AREnvironmentProbeComponent.ReceiveUpdate
	 */
	struct UAREnvironmentProbeComponent_ReceiveUpdate_Params
	{
	public:
		struct FAREnvironmentProbeUpdatePayload                    Payload;                                                 // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.AREnvironmentProbeComponent.ReceiveAdd
	 */
	struct UAREnvironmentProbeComponent_ReceiveAdd_Params
	{
	public:
		struct FAREnvironmentProbeUpdatePayload                    Payload;                                                 // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARObjectComponent.ServerUpdatePayload
	 */
	struct UARObjectComponent_ServerUpdatePayload_Params
	{
	public:
		struct FARObjectUpdatePayload                              NewPayload;                                              // 0x0000(0x0030)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARObjectComponent.ReceiveUpdate
	 */
	struct UARObjectComponent_ReceiveUpdate_Params
	{
	public:
		struct FARObjectUpdatePayload                              Payload;                                                 // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARObjectComponent.ReceiveAdd
	 */
	struct UARObjectComponent_ReceiveAdd_Params
	{
	public:
		struct FARObjectUpdatePayload                              Payload;                                                 // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARMeshComponent.ServerUpdatePayload
	 */
	struct UARMeshComponent_ServerUpdatePayload_Params
	{
	public:
		struct FARMeshUpdatePayload                                NewPayload;                                              // 0x0000(0x0060)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARMeshComponent.ReceiveUpdate
	 */
	struct UARMeshComponent_ReceiveUpdate_Params
	{
	public:
		struct FARMeshUpdatePayload                                Payload;                                                 // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARMeshComponent.ReceiveAdd
	 */
	struct UARMeshComponent_ReceiveAdd_Params
	{
	public:
		struct FARMeshUpdatePayload                                Payload;                                                 // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARGeoAnchorComponent.SetGeoAnchorComponentDebugMode
	 */
	struct UARGeoAnchorComponent_SetGeoAnchorComponentDebugMode_Params
	{
	public:
		EGeoAnchorComponentDebugMode                               NewDebugMode;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARGeoAnchorComponent.ServerUpdatePayload
	 */
	struct UARGeoAnchorComponent_ServerUpdatePayload_Params
	{
	public:
		struct FARGeoAnchorUpdatePayload                           NewPayload;                                              // 0x0000(0x0070)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARGeoAnchorComponent.ReceiveUpdate
	 */
	struct UARGeoAnchorComponent_ReceiveUpdate_Params
	{
	public:
		struct FARGeoAnchorUpdatePayload                           Payload;                                                 // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARGeoAnchorComponent.ReceiveAdd
	 */
	struct UARGeoAnchorComponent_ReceiveAdd_Params
	{
	public:
		struct FARGeoAnchorUpdatePayload                           Payload;                                                 // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARDependencyHandler.StartARSessionLatent
	 */
	struct UARDependencyHandler_StartARSessionLatent_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UARSessionConfig*                                    SessionConfig;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0010(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARDependencyHandler.RequestARSessionPermission
	 */
	struct UARDependencyHandler_RequestARSessionPermission_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UARSessionConfig*                                    SessionConfig;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0010(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		EARServicePermissionRequestResult                          OutPermissionResult;                                     // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARDependencyHandler.InstallARService
	 */
	struct UARDependencyHandler_InstallARService_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0008(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		EARServiceInstallRequestResult                             OutInstallResult;                                        // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARDependencyHandler.GetARDependencyHandler
	 */
	struct UARDependencyHandler_GetARDependencyHandler_Params
	{
	public:
		class UARDependencyHandler*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARDependencyHandler.CheckARServiceAvailability
	 */
	struct UARDependencyHandler_CheckARServiceAvailability_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0008(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		EARServiceAvailability                                     OutAvailability;                                         // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingSupport
	 */
	struct UARGeoTrackingSupport_GetGeoTrackingSupport_Params
	{
	public:
		class UARGeoTrackingSupport*                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingStateReason
	 */
	struct UARGeoTrackingSupport_GetGeoTrackingStateReason_Params
	{
	public:
		EARGeoTrackingStateReason                                  ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingState
	 */
	struct UARGeoTrackingSupport_GetGeoTrackingState_Params
	{
	public:
		EARGeoTrackingState                                        ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingAccuracy
	 */
	struct UARGeoTrackingSupport_GetGeoTrackingAccuracy_Params
	{
	public:
		EARGeoTrackingAccuracy                                     ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocationWithAltitude
	 */
	struct UARGeoTrackingSupport_AddGeoAnchorAtLocationWithAltitude_Params
	{
	public:
		float                                                      Longitude;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Latitude;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      AltitudeMeters;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FR2D[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              OptionalAnchorName;                                      // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocation
	 */
	struct UARGeoTrackingSupport_AddGeoAnchorAtLocation_Params
	{
	public:
		float                                                      Longitude;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Latitude;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OptionalAnchorName;                                      // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.GeoTrackingAvailabilityDelegate__DelegateSignature
	 */
	struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_GeoTrackingAvailabilityDelegate__DelegateSignature_Params
	{
	public:
		bool                                                       bIsAvailable;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7F7O[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Error;                                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailabilityAtLocation
	 */
	struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailabilityAtLocation_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Longitude;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Latitude;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailability
	 */
	struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailability_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationDelegate__DelegateSignature
	 */
	struct UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationDelegate__DelegateSignature_Params
	{
	public:
		float                                                      Longitude;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Latitude;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Altitude;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_02OH[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationAtWorldPosition
	 */
	struct UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationAtWorldPosition_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             WorldPosition;                                           // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7OGE[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGetGeoLocationAsyncTaskBlueprintProxy*              ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARLifeCycleComponent.ServerSpawnARActor
	 */
	struct UARLifeCycleComponent_ServerSpawnARActor_Params
	{
	public:
		class UClass*                                              ComponentClass;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGuid                                               NativeID;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARLifeCycleComponent.ServerDestroyARActor
	 */
	struct UARLifeCycleComponent_ServerDestroyARActor_Params
	{
	public:
		class AARActor*                                            Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorToBeDestroyedDelegate__DelegateSignature
	 */
	struct UARLifeCycleComponent_InstanceARActorToBeDestroyedDelegate__DelegateSignature_Params
	{
	public:
		class AARActor*                                            Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorSpawnedDelegate__DelegateSignature
	 */
	struct UARLifeCycleComponent_InstanceARActorSpawnedDelegate__DelegateSignature_Params
	{
	public:
		class UClass*                                              ComponentClass;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGuid                                               NativeID;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AARActor*                                            SpawnedActor;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
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
	 * Function AugmentedReality.ARSessionConfig.SetSceneReconstructionMethod
	 */
	struct UARSessionConfig_SetSceneReconstructionMethod_Params
	{
	public:
		EARSceneReconstruction                                     InSceneReconstructionMethod;                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
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
	 * Function AugmentedReality.ARSessionConfig.GetSceneReconstructionMethod
	 */
	struct UARSessionConfig_GetSceneReconstructionMethod_Params
	{
	public:
		EARSceneReconstruction                                     ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
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
		unsigned char                                              UnknownData_8ZHM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<unsigned char>                                      Buffer;                                                  // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData
	 */
	struct AARSharedWorldPlayerController_ClientUpdateARWorldData_Params
	{
	public:
		int32_t                                                    Offset;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AKTH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
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
	 * Function AugmentedReality.ARTrackedGeometry.GetName
	 */
	struct UARTrackedGeometry_GetName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
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
		EAREye                                                     eye;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_C3AN[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform
	 */
	struct UARFaceGeometry_GetLocalSpaceEyeTransform_Params
	{
	public:
		EAREye                                                     eye;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_928H[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue
	 */
	struct UARFaceGeometry_GetBlendShapeValue_Params
	{
	public:
		EARFaceBlendShape                                          BlendShape;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2LKH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARFaceGeometry.GetBlendShapes
	 */
	struct UARFaceGeometry_GetBlendShapes_Params
	{
	public:
		TMap<EARFaceBlendShape, float>                             ReturnValue;                                             // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
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
	 * Function AugmentedReality.ARMeshGeometry.GetObjectClassificationAtLocation
	 */
	struct UARMeshGeometry_GetObjectClassificationAtLocation_Params
	{
	public:
		struct FVector                                             InWorldLocation;                                         // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EARObjectClassification                                    OutClassification;                                       // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HLB6[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             OutClassificationLocation;                               // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxLocationDiff;                                         // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARGeoAnchor.GetLongitude
	 */
	struct UARGeoAnchor_GetLongitude_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARGeoAnchor.GetLatitude
	 */
	struct UARGeoAnchor_GetLatitude_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARGeoAnchor.GetAltitudeSource
	 */
	struct UARGeoAnchor_GetAltitudeSource_Params
	{
	public:
		EARAltitudeSource                                          ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AugmentedReality.ARGeoAnchor.GetAltitudeMeters
	 */
	struct UARGeoAnchor_GetAltitudeMeters_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
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
