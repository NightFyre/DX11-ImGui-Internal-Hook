#pragma once

/**
 * Name: RaidGame
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum AugmentedReality.EARTrackingState
	 */
	enum class EARTrackingState : uint8_t
	{
		Unknown         = 0,
		Tracking        = 1,
		NotTracking     = 2,
		StoppedTracking = 3,
		MAX             = 4
	};

	/**
	 * Enum AugmentedReality.EGeoAnchorComponentDebugMode
	 */
	enum class EGeoAnchorComponentDebugMode : uint8_t
	{
		None        = 0,
		ShowGeoData = 1,
		MAX         = 2
	};

	/**
	 * Enum AugmentedReality.EPoseComponentDebugMode
	 */
	enum class EPoseComponentDebugMode : uint8_t
	{
		None         = 0,
		ShowSkeleton = 1,
		MAX          = 2
	};

	/**
	 * Enum AugmentedReality.EQRCodeComponentDebugMode
	 */
	enum class EQRCodeComponentDebugMode : uint8_t
	{
		None       = 0,
		ShowQRCode = 1,
		MAX        = 2
	};

	/**
	 * Enum AugmentedReality.EImageComponentDebugMode
	 */
	enum class EImageComponentDebugMode : uint8_t
	{
		None              = 0,
		ShowDetectedImage = 1,
		MAX               = 2
	};

	/**
	 * Enum AugmentedReality.EARFaceTransformMixing
	 */
	enum class EARFaceTransformMixing : uint8_t
	{
		ComponentOnly                    = 0,
		ComponentLocationTrackedRotation = 1,
		ComponentWithTracked             = 2,
		TrackingOnly                     = 3,
		MAX                              = 4
	};

	/**
	 * Enum AugmentedReality.EFaceComponentDebugMode
	 */
	enum class EFaceComponentDebugMode : uint8_t
	{
		None           = 0,
		ShowEyeVectors = 1,
		ShowFaceMesh   = 2,
		MAX            = 3
	};

	/**
	 * Enum AugmentedReality.EPlaneComponentDebugMode
	 */
	enum class EPlaneComponentDebugMode : uint8_t
	{
		None               = 0,
		ShowNetworkRole    = 1,
		ShowClassification = 2,
		MAX                = 3
	};

	/**
	 * Enum AugmentedReality.EARSessionConfigFlags
	 */
	enum class EARSessionConfigFlags : uint8_t
	{
		None                         = 0,
		GenerateMeshData             = 1,
		RenderMeshDataInWireframe    = 2,
		GenerateCollisionForMeshData = 3,
		GenerateNavMeshForMeshData   = 4,
		UseMeshDataForOcclusion      = 5,
		MAX                          = 6
	};

	/**
	 * Enum AugmentedReality.EARServicePermissionRequestResult
	 */
	enum class EARServicePermissionRequestResult : uint8_t
	{
		Granted = 0,
		Denied  = 1,
		MAX     = 2
	};

	/**
	 * Enum AugmentedReality.EARServiceInstallRequestResult
	 */
	enum class EARServiceInstallRequestResult : uint8_t
	{
		Installed                = 0,
		DeviceNotCompatible      = 1,
		UserDeclinedInstallation = 2,
		FatalError               = 3,
		MAX                      = 4
	};

	/**
	 * Enum AugmentedReality.EARServiceAvailability
	 */
	enum class EARServiceAvailability : uint8_t
	{
		UnknownError                = 0,
		UnknownChecking             = 1,
		UnknownTimedOut             = 2,
		UnsupportedDeviceNotCapable = 3,
		SupportedNotInstalled       = 4,
		SupportedVersionTooOld      = 5,
		SupportedInstalled          = 6,
		MAX                         = 7
	};

	/**
	 * Enum AugmentedReality.EARGeoTrackingAccuracy
	 */
	enum class EARGeoTrackingAccuracy : uint8_t
	{
		Undetermined = 0,
		Low          = 1,
		Medium       = 2,
		High         = 3,
		MAX          = 4
	};

	/**
	 * Enum AugmentedReality.EARGeoTrackingStateReason
	 */
	enum class EARGeoTrackingStateReason : uint8_t
	{
		None                        = 0,
		NotAvailableAtLocation      = 1,
		NeedLocationPermissions     = 2,
		DevicePointedTooLow         = 3,
		WorldTrackingUnstable       = 4,
		WaitingForLocation          = 5,
		GeoDataNotLoaded            = 6,
		VisualLocalizationFailed    = 7,
		WaitingForAvailabilityCheck = 8,
		MAX                         = 9
	};

	/**
	 * Enum AugmentedReality.EARGeoTrackingState
	 */
	enum class EARGeoTrackingState : uint8_t
	{
		Initializing = 0,
		Localized    = 1,
		Localizing   = 2,
		NotAvailable = 3,
		MAX          = 4
	};

	/**
	 * Enum AugmentedReality.EARSceneReconstruction
	 */
	enum class EARSceneReconstruction : uint8_t
	{
		None                   = 0,
		MeshOnly               = 1,
		MeshWithClassification = 2,
		MAX                    = 3
	};

	/**
	 * Enum AugmentedReality.EARSessionTrackingFeature
	 */
	enum class EARSessionTrackingFeature : uint8_t
	{
		None                        = 0,
		PoseDetection2D             = 1,
		PersonSegmentation          = 2,
		PersonSegmentationWithDepth = 3,
		SceneDepth                  = 4,
		SmoothedSceneDepth          = 5,
		MAX                         = 6
	};

	/**
	 * Enum AugmentedReality.EARFaceTrackingUpdate
	 */
	enum class EARFaceTrackingUpdate : uint8_t
	{
		CurvesAndGeo = 0,
		CurvesOnly   = 1,
		MAX          = 2
	};

	/**
	 * Enum AugmentedReality.EAREnvironmentCaptureProbeType
	 */
	enum class EAREnvironmentCaptureProbeType : uint8_t
	{
		None      = 0,
		Manual    = 1,
		Automatic = 2,
		MAX       = 3
	};

	/**
	 * Enum AugmentedReality.EARFrameSyncMode
	 */
	enum class EARFrameSyncMode : uint8_t
	{
		SyncTickWithCameraImage    = 0,
		SyncTickWithoutCameraImage = 1,
		MAX                        = 2
	};

	/**
	 * Enum AugmentedReality.EARLightEstimationMode
	 */
	enum class EARLightEstimationMode : uint8_t
	{
		None                     = 0,
		AmbientLightEstimate     = 1,
		DirectionalLightEstimate = 2,
		MAX                      = 3
	};

	/**
	 * Enum AugmentedReality.EARPlaneDetectionMode
	 */
	enum class EARPlaneDetectionMode : uint8_t
	{
		None                     = 0,
		HorizontalPlaneDetection = 1,
		VerticalPlaneDetection   = 2,
		MAX                      = 3
	};

	/**
	 * Enum AugmentedReality.EARSessionType
	 */
	enum class EARSessionType : uint8_t
	{
		None           = 0,
		Orientation    = 1,
		World          = 2,
		Face           = 3,
		Image          = 4,
		ObjectScanning = 5,
		PoseTracking   = 6,
		GeoTracking    = 7,
		MAX            = 8
	};

	/**
	 * Enum AugmentedReality.EARWorldAlignment
	 */
	enum class EARWorldAlignment : uint8_t
	{
		Gravity           = 0,
		GravityAndHeading = 1,
		Camera            = 2,
		MAX               = 3
	};

	/**
	 * Enum AugmentedReality.EARDepthAccuracy
	 */
	enum class EARDepthAccuracy : uint8_t
	{
		Unkown      = 0,
		Approximate = 1,
		Accurate    = 2,
		MAX         = 3
	};

	/**
	 * Enum AugmentedReality.EARDepthQuality
	 */
	enum class EARDepthQuality : uint8_t
	{
		Unkown = 0,
		Low    = 1,
		High   = 2,
		MAX    = 3
	};

	/**
	 * Enum AugmentedReality.EARTextureType
	 */
	enum class EARTextureType : uint8_t
	{
		Unknown                 = 0,
		CameraImage             = 1,
		CameraDepth             = 2,
		EnvironmentCapture      = 3,
		PersonSegmentationImage = 4,
		PersonSegmentationDepth = 5,
		SceneDepthMap           = 6,
		SceneDepthConfidenceMap = 7,
		MAX                     = 8
	};

	/**
	 * Enum AugmentedReality.EAREye
	 */
	enum class EAREye : uint8_t
	{
		LeftEye  = 0,
		RightEye = 1,
		MAX      = 2
	};

	/**
	 * Enum AugmentedReality.EARFaceBlendShape
	 */
	enum class EARFaceBlendShape : uint8_t
	{
		EyeBlinkLeft        = 0,
		EyeLookDownLeft     = 1,
		EyeLookInLeft       = 2,
		EyeLookOutLeft      = 3,
		EyeLookUpLeft       = 4,
		EyeSquintLeft       = 5,
		EyeWideLeft         = 6,
		EyeBlinkRight       = 7,
		EyeLookDownRight    = 8,
		EyeLookInRight      = 9,
		EyeLookOutRight     = 10,
		EyeLookUpRight      = 11,
		EyeSquintRight      = 12,
		EyeWideRight        = 13,
		JawForward          = 14,
		JawLeft             = 15,
		JawRight            = 16,
		JawOpen             = 17,
		MouthClose          = 18,
		MouthFunnel         = 19,
		MouthPucker         = 20,
		MouthLeft           = 21,
		MouthRight          = 22,
		MouthSmileLeft      = 23,
		MouthSmileRight     = 24,
		MouthFrownLeft      = 25,
		MouthFrownRight     = 26,
		MouthDimpleLeft     = 27,
		MouthDimpleRight    = 28,
		MouthStretchLeft    = 29,
		MouthStretchRight   = 30,
		MouthRollLower      = 31,
		MouthRollUpper      = 32,
		MouthShrugLower     = 33,
		MouthShrugUpper     = 34,
		MouthPressLeft      = 35,
		MouthPressRight     = 36,
		MouthLowerDownLeft  = 37,
		MouthLowerDownRight = 38,
		MouthUpperUpLeft    = 39,
		MouthUpperUpRight   = 40,
		BrowDownLeft        = 41,
		BrowDownRight       = 42,
		BrowInnerUp         = 43,
		BrowOuterUpLeft     = 44,
		BrowOuterUpRight    = 45,
		CheekPuff           = 46,
		CheekSquintLeft     = 47,
		CheekSquintRight    = 48,
		NoseSneerLeft       = 49,
		NoseSneerRight      = 50,
		TongueOut           = 51,
		HeadYaw             = 52,
		HeadPitch           = 53,
		HeadRoll            = 54,
		LeftEyeYaw          = 55,
		LeftEyePitch        = 56,
		LeftEyeRoll         = 57,
		RightEyeYaw         = 58,
		RightEyePitch       = 59,
		RightEyeRoll        = 60,
		MAX                 = 61
	};

	/**
	 * Enum AugmentedReality.EARFaceTrackingDirection
	 */
	enum class EARFaceTrackingDirection : uint8_t
	{
		FaceRelative = 0,
		FaceMirrored = 1,
		MAX          = 2
	};

	/**
	 * Enum AugmentedReality.EARCandidateImageOrientation
	 */
	enum class EARCandidateImageOrientation : uint8_t
	{
		Landscape = 0,
		Portrait  = 1,
		MAX       = 2
	};

	/**
	 * Enum AugmentedReality.EARAltitudeSource
	 */
	enum class EARAltitudeSource : uint8_t
	{
		Precise     = 0,
		Coarse      = 1,
		UserDefined = 2,
		Unknown     = 3,
		MAX         = 4
	};

	/**
	 * Enum AugmentedReality.EARJointTransformSpace
	 */
	enum class EARJointTransformSpace : uint8_t
	{
		Model       = 0,
		ParentJoint = 1,
		MAX         = 2
	};

	/**
	 * Enum AugmentedReality.EARObjectClassification
	 */
	enum class EARObjectClassification : uint8_t
	{
		NotApplicable = 0,
		Unknown       = 1,
		Wall          = 2,
		Ceiling       = 3,
		Floor         = 4,
		Table         = 5,
		Seat          = 6,
		Face          = 7,
		Image         = 8,
		World         = 9,
		SceneObject   = 10,
		HandMesh      = 11,
		Door          = 12,
		Window        = 13,
		MAX           = 14
	};

	/**
	 * Enum AugmentedReality.EARPlaneOrientation
	 */
	enum class EARPlaneOrientation : uint8_t
	{
		Horizontal = 0,
		Vertical   = 1,
		Diagonal   = 2,
		MAX        = 3
	};

	/**
	 * Enum AugmentedReality.EARWorldMappingState
	 */
	enum class EARWorldMappingState : uint8_t
	{
		NotAvailable                 = 0,
		StillMappingNotRelocalizable = 1,
		StillMappingRelocalizable    = 2,
		Mapped                       = 3,
		MAX                          = 4
	};

	/**
	 * Enum AugmentedReality.EARSessionStatus
	 */
	enum class EARSessionStatus : uint8_t
	{
		NotStarted               = 0,
		Running                  = 1,
		NotSupported             = 2,
		FatalError               = 3,
		PermissionNotGranted     = 4,
		UnsupportedConfiguration = 5,
		Other                    = 6,
		MAX                      = 7
	};

	/**
	 * Enum AugmentedReality.EARTrackingQualityReason
	 */
	enum class EARTrackingQualityReason : uint8_t
	{
		None                 = 0,
		Initializing         = 1,
		Relocalizing         = 2,
		ExcessiveMotion      = 3,
		InsufficientFeatures = 4,
		InsufficientLight    = 5,
		BadState             = 6,
		MAX                  = 7
	};

	/**
	 * Enum AugmentedReality.EARTrackingQuality
	 */
	enum class EARTrackingQuality : uint8_t
	{
		NotTracking            = 0,
		OrientationOnly        = 1,
		OrientationAndPosition = 2,
		MAX                    = 3
	};

	/**
	 * Enum AugmentedReality.EARLineTraceChannels
	 */
	enum class EARLineTraceChannels : uint8_t
	{
		None                      = 0,
		FeaturePoint              = 1,
		GroundPlane               = 2,
		PlaneUsingExtent          = 3,
		PlaneUsingBoundaryPolygon = 4,
		MAX                       = 5
	};

	/**
	 * Enum AugmentedReality.EARCaptureType
	 */
	enum class EARCaptureType : uint8_t
	{
		Camera             = 0,
		QRCode             = 1,
		SpatialMapping     = 2,
		SceneUnderstanding = 3,
		MAX                = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AugmentedReality.ARSessionPayload
	 * Size -> 0x0018
	 */
	struct FARSessionPayload
	{
	public:
		int32_t                                                    ConfigFlags;                                             // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4EGO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  DefaultMeshMaterial;                                     // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  DefaultWireframeMeshMaterial;                            // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AugmentedReality.ARPlaneUpdatePayload
	 * Size -> 0x0080
	 */
	struct FARPlaneUpdatePayload
	{
	public:
		struct FARSessionPayload                                   SessionPayload;                                          // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M2JH[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldTransform;                                          // 0x0020(0x0030) BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Center;                                                  // 0x0050(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Extents;                                                 // 0x005C(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     BoundaryVertices;                                        // 0x0068(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EARObjectClassification                                    ObjectClassification;                                    // 0x0078(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O6AQ[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AugmentedReality.ARPointUpdatePayload
	 * Size -> 0x0001
	 */
	struct FARPointUpdatePayload
	{
	public:
		unsigned char                                              UnknownData_4KYH[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AugmentedReality.ARFaceUpdatePayload
	 * Size -> 0x0040
	 */
	struct FARFaceUpdatePayload
	{
	public:
		struct FARSessionPayload                                   SessionPayload;                                          // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             LeftEyePosition;                                         // 0x0018(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RightEyePosition;                                        // 0x0024(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LookAtTarget;                                            // 0x0030(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FCVC[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AugmentedReality.ARImageUpdatePayload
	 * Size -> 0x0060
	 */
	struct FARImageUpdatePayload
	{
	public:
		struct FARSessionPayload                                   SessionPayload;                                          // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BE7R[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldTransform;                                          // 0x0020(0x0030) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class UARCandidateImage*                                   DetectedImage;                                           // 0x0050(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           EstimatedSize;                                           // 0x0058(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AugmentedReality.ARQRCodeUpdatePayload
	 * Size -> 0x0070
	 */
	struct FARQRCodeUpdatePayload
	{
	public:
		struct FARSessionPayload                                   SessionPayload;                                          // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EN1Z[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldTransform;                                          // 0x0020(0x0030) BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Extents;                                                 // 0x0050(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OHX5[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              QRCode;                                                  // 0x0060(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AugmentedReality.ARPoseUpdatePayload
	 * Size -> 0x0040
	 */
	struct FARPoseUpdatePayload
	{
	public:
		struct FTransform                                          WorldTransform;                                          // 0x0000(0x0030) BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  JointTransforms;                                         // 0x0030(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AugmentedReality.AREnvironmentProbeUpdatePayload
	 * Size -> 0x0030
	 */
	struct FAREnvironmentProbeUpdatePayload
	{
	public:
		struct FTransform                                          WorldTransform;                                          // 0x0000(0x0030) BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AugmentedReality.ARObjectUpdatePayload
	 * Size -> 0x0030
	 */
	struct FARObjectUpdatePayload
	{
	public:
		struct FTransform                                          WorldTransform;                                          // 0x0000(0x0030) BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AugmentedReality.ARMeshUpdatePayload
	 * Size -> 0x0060
	 */
	struct FARMeshUpdatePayload
	{
	public:
		struct FARSessionPayload                                   SessionPayload;                                          // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P1XI[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldTransform;                                          // 0x0020(0x0030) BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EARObjectClassification                                    ObjectClassification;                                    // 0x0050(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NKLM[0xF];                                   // 0x0051(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AugmentedReality.ARGeoAnchorUpdatePayload
	 * Size -> 0x0070
	 */
	struct FARGeoAnchorUpdatePayload
	{
	public:
		struct FARSessionPayload                                   SessionPayload;                                          // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FPBO[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldTransform;                                          // 0x0020(0x0030) BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Longitude;                                               // 0x0050(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Latitude;                                                // 0x0054(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AltitudeMeters;                                          // 0x0058(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EARAltitudeSource                                          AltitudeSource;                                          // 0x005C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A4TF[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AnchorName;                                              // 0x0060(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AugmentedReality.ARVideoFormat
	 * Size -> 0x000C
	 */
	struct FARVideoFormat
	{
	public:
		int32_t                                                    FPS;                                                     // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Width;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Height;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AugmentedReality.ARSkeletonDefinition
	 * Size -> 0x0028
	 */
	struct FARSkeletonDefinition
	{
	public:
		int32_t                                                    NumJoints;                                               // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1ESJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        JointNames;                                              // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            ParentIndices;                                           // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AugmentedReality.ARPose3D
	 * Size -> 0x0050
	 */
	struct FARPose3D
	{
	public:
		struct FARSkeletonDefinition                               SkeletonDefinition;                                      // 0x0000(0x0028) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  JointTransforms;                                         // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<bool>                                               IsJointTracked;                                          // 0x0038(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		EARJointTransformSpace                                     JointTransformSpace;                                     // 0x0048(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DBYZ[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AugmentedReality.TrackedGeometryGroup
	 * Size -> 0x0018
	 */
	struct FTrackedGeometryGroup
	{
	public:
		class AARActor*                                            ARActor;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UARComponent*                                        ARComponent;                                             // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UARTrackedGeometry*                                  TrackedGeometry;                                         // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AugmentedReality.ARSharedWorldReplicationState
	 * Size -> 0x0008
	 */
	struct FARSharedWorldReplicationState
	{
	public:
		int32_t                                                    PreviewImageOffset;                                      // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ARWorldOffset;                                           // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AugmentedReality.ARTraceResult
	 * Size -> 0x0060
	 */
	struct FARTraceResult
	{
	public:
		float                                                      DistanceFromCamera;                                      // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EARLineTraceChannels                                       TraceChannel;                                            // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RJOB[0xB];                                   // 0x0005(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          LocalTransform;                                          // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		class UARTrackedGeometry*                                  TrackedGeometry;                                         // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3VWU[0x18];                                  // 0x0048(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AugmentedReality.ARCameraIntrinsics
	 * Size -> 0x0018
	 */
	struct FARCameraIntrinsics
	{
	public:
		struct FIntPoint                                           ImageResolution;                                         // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           FocalLength;                                             // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           PrincipalPoint;                                          // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AugmentedReality.ARPose2D
	 * Size -> 0x0048
	 */
	struct FARPose2D
	{
	public:
		struct FARSkeletonDefinition                               SkeletonDefinition;                                      // 0x0000(0x0028) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<struct FVector2D>                                   JointLocations;                                          // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<bool>                                               IsJointTracked;                                          // 0x0038(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AugmentedReality.ARSessionStatus
	 * Size -> 0x0018
	 */
	struct FARSessionStatus
	{
	public:
		class FString                                              AdditionalInfo;                                          // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EARSessionStatus                                           status;                                                  // 0x0010(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L39I[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
