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
	 * Enum HeadMountedDisplay.EXRVisualType
	 */
	enum class EXRVisualType : uint8_t
	{
		Controller = 0,
		Hand       = 1,
		MAX        = 2
	};

	/**
	 * Enum HeadMountedDisplay.EHandKeypoint
	 */
	enum class EHandKeypoint : uint8_t
	{
		Palm               = 0,
		Wrist              = 1,
		ThumbMetacarpal    = 2,
		ThumbProximal      = 3,
		ThumbDistal        = 4,
		ThumbTip           = 5,
		IndexMetacarpal    = 6,
		IndexProximal      = 7,
		IndexIntermediate  = 8,
		IndexDistal        = 9,
		IndexTip           = 10,
		MiddleMetacarpal   = 11,
		MiddleProximal     = 12,
		MiddleIntermediate = 13,
		MiddleDistal       = 14,
		MiddleTip          = 15,
		RingMetacarpal     = 16,
		RingProximal       = 17,
		RingIntermediate   = 18,
		RingDistal         = 19,
		RingTip            = 20,
		LittleMetacarpal   = 21,
		LittleProximal     = 22,
		LittleIntermediate = 23,
		LittleDistal       = 24,
		LittleTip          = 25,
		MAX                = 26
	};

	/**
	 * Enum HeadMountedDisplay.EXRTrackedDeviceType
	 */
	enum class EXRTrackedDeviceType : uint8_t
	{
		HeadMountedDisplay = 0,
		Controller         = 1,
		TrackingReference  = 2,
		Other              = 3,
		Invalid            = 4,
		Any                = 5,
		MAX                = 6
	};

	/**
	 * Enum HeadMountedDisplay.ESpectatorScreenMode
	 */
	enum class ESpectatorScreenMode : uint8_t
	{
		Disabled               = 0,
		SingleEyeLetterboxed   = 1,
		Undistorted            = 2,
		Distorted              = 3,
		SingleEye              = 4,
		SingleEyeCroppedToFill = 5,
		Texture                = 6,
		TexturePlusEye         = 7,
		MAX                    = 8
	};

	/**
	 * Enum HeadMountedDisplay.EXRSystemFlags
	 */
	enum class EXRSystemFlags : uint8_t
	{
		NoFlags              = 0,
		IsAR                 = 1,
		IsTablet             = 2,
		IsHeadMounted        = 3,
		SupportsHandTracking = 4,
		MAX                  = 5
	};

	/**
	 * Enum HeadMountedDisplay.EXRDeviceConnectionResult
	 */
	enum class EXRDeviceConnectionResult : uint8_t
	{
		NoTrackingSystem    = 0,
		FeatureNotSupported = 1,
		NoValidViewport     = 2,
		MiscFailure         = 3,
		Success             = 4,
		MAX                 = 5
	};

	/**
	 * Enum HeadMountedDisplay.EHMDWornState
	 */
	enum class EHMDWornState : uint8_t
	{
		Unknown = 0,
		Worn    = 1,
		NotWorn = 2,
		MAX     = 3
	};

	/**
	 * Enum HeadMountedDisplay.EHMDTrackingOrigin
	 */
	enum class EHMDTrackingOrigin : uint8_t
	{
		Floor     = 0,
		Eye       = 1,
		Stage     = 2,
		Unbounded = 3,
		MAX       = 4
	};

	/**
	 * Enum HeadMountedDisplay.EOrientPositionSelector
	 */
	enum class EOrientPositionSelector : uint8_t
	{
		Orientation            = 0,
		Position               = 1,
		OrientationAndPosition = 2,
		MAX                    = 3
	};

	/**
	 * Enum HeadMountedDisplay.ETrackingStatus
	 */
	enum class ETrackingStatus : uint8_t
	{
		NotTracked   = 0,
		InertialOnly = 1,
		Tracked      = 2,
		MAX          = 3
	};

	/**
	 * Enum HeadMountedDisplay.ESpatialInputGestureAxis
	 */
	enum class ESpatialInputGestureAxis : uint8_t
	{
		None            = 0,
		Manipulation    = 1,
		Navigation      = 2,
		NavigationRails = 3,
		MAX             = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct HeadMountedDisplay.XRMotionControllerData
	 * Size -> 0x00A0
	 */
	struct FXRMotionControllerData
	{
	public:
		bool                                                       bValid;                                                  // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HCTL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                DeviceName;                                              // 0x0004(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ApplicationInstanceID;                                   // 0x000C(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EXRVisualType                                              DeviceVisualType;                                        // 0x001C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControllerHand                                            HandIndex;                                               // 0x001D(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETrackingStatus                                            TrackingStatus;                                          // 0x001E(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_06PA[0x1];                                   // 0x001F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             GripPosition;                                            // 0x0020(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GWEJ[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               GripRotation;                                            // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             AimPosition;                                             // 0x0040(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KGU2[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               AimRotation;                                             // 0x0050(0x0010) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     HandKeyPositions;                                        // 0x0060(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FQuat>                                       HandKeyRotations;                                        // 0x0070(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              HandKeyRadii;                                            // 0x0080(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bIsGrasped;                                              // 0x0090(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HEWN[0xF];                                   // 0x0091(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HeadMountedDisplay.XRHMDData
	 * Size -> 0x0040
	 */
	struct FXRHMDData
	{
	public:
		bool                                                       bValid;                                                  // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D33M[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                DeviceName;                                              // 0x0004(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ApplicationInstanceID;                                   // 0x000C(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETrackingStatus                                            TrackingStatus;                                          // 0x001C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_14Y8[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Position;                                                // 0x0020(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9ZGH[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Rotation;                                                // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HeadMountedDisplay.XRDeviceId
	 * Size -> 0x000C
	 */
	struct FXRDeviceId
	{
	public:
		class FName                                                SystemName;                                              // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DeviceID;                                                // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HeadMountedDisplay.XRGestureConfig
	 * Size -> 0x0006
	 */
	struct FXRGestureConfig
	{
	public:
		bool                                                       bTap;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHold;                                                   // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESpatialInputGestureAxis                                   AxisGesture;                                             // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNavigationAxisX;                                        // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNavigationAxisY;                                        // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNavigationAxisZ;                                        // 0x0005(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
