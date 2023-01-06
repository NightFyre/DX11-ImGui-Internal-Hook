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
		Floor = 0,
		Eye   = 1,
		Stage = 2,
		MAX   = 3
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

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
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

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
