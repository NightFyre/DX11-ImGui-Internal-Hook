#pragma once

/**
 * Name: Task_Force
 * Version: 0.3.6.1537
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
	 * Enum AugmentedReality.EARSessionTrackingFeature
	 */
	enum class EARSessionTrackingFeature : uint8_t
	{
		None                        = 0,
		PoseDetection2D             = 1,
		PersonSegmentation          = 2,
		PersonSegmentationWithDepth = 3,
		MAX                         = 4
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
		MAX            = 7
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
		CameraImage        = 0,
		CameraDepth        = 1,
		EnvironmentCapture = 2,
		MAX                = 3
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
		MAX           = 11
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
		MAX                  = 5
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

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AugmentedReality.ARTraceResult
	 * Size -> 0x0060
	 */
	struct FARTraceResult
	{
	public:
		float                                                      DistanceFromCamera;                                      // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EARLineTraceChannels                                       TraceChannel;                                            // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DJIB[0xB];                                   // 0x0005(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          LocalToTrackingTransform;                                // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		class UARTrackedGeometry*                                  TrackedGeometry;                                         // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GAU2[0x18];                                  // 0x0048(0x0018) MISSED OFFSET (PADDING)
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
	 * ScriptStruct AugmentedReality.ARSessionStatus
	 * Size -> 0x0018
	 */
	struct FARSessionStatus
	{
	public:
		class FString                                              AdditionalInfo;                                          // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EARSessionStatus                                           Status;                                                  // 0x0010(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7OPN[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AugmentedReality.ARSkeletonDefinition
	 * Size -> 0x0028
	 */
	struct FARSkeletonDefinition
	{
	public:
		int32_t                                                    NumJoints;                                               // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9E83[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        JointNames;                                              // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            ParentIndices;                                           // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
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
		unsigned char                                              UnknownData_2D1I[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)
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

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
