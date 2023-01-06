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
	 * Enum MediaAssets.EMediaWebcamCaptureDeviceFilter
	 */
	enum class EMediaWebcamCaptureDeviceFilter : uint8_t
	{
		DepthSensor = 0,
		Front       = 1,
		Rear        = 2,
		Unknown     = 3,
		MAX         = 4
	};

	/**
	 * Enum MediaAssets.EMediaVideoCaptureDeviceFilter
	 */
	enum class EMediaVideoCaptureDeviceFilter : uint8_t
	{
		Card     = 0,
		Software = 1,
		Unknown  = 2,
		Webcam   = 3,
		MAX      = 4
	};

	/**
	 * Enum MediaAssets.EMediaAudioCaptureDeviceFilter
	 */
	enum class EMediaAudioCaptureDeviceFilter : uint8_t
	{
		Card       = 0,
		Microphone = 1,
		Software   = 2,
		Unknown    = 3,
		MAX        = 4
	};

	/**
	 * Enum MediaAssets.EMediaPlayerTrack
	 */
	enum class EMediaPlayerTrack : uint8_t
	{
		Audio    = 0,
		Caption  = 1,
		Metadata = 2,
		Script   = 3,
		Subtitle = 4,
		Text     = 5,
		Video    = 6,
		MAX      = 7
	};

	/**
	 * Enum MediaAssets.EMediaSoundComponentFFTSize
	 */
	enum class EMediaSoundComponentFFTSize : uint8_t
	{
		Min    = 0,
		Small  = 1,
		Medium = 2,
		Large  = 3,
		MAX    = 4
	};

	/**
	 * Enum MediaAssets.EMediaSoundChannels
	 */
	enum class EMediaSoundChannels : uint8_t
	{
		Mono     = 0,
		Stereo   = 1,
		Surround = 2,
		MAX      = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MediaAssets.MediaCaptureDevice
	 * Size -> 0x0028
	 */
	struct FMediaCaptureDevice
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
		class FString                                              URL;                                                     // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MediaAssets.MediaSoundComponentSpectralData
	 * Size -> 0x0008
	 */
	struct FMediaSoundComponentSpectralData
	{
	public:
		float                                                      FrequencyHz;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Magnitude;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
