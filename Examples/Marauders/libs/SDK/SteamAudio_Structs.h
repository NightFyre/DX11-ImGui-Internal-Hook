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
	 * Enum SteamAudio.EReverbSimulationType
	 */
	enum class EReverbSimulationType : uint8_t
	{
		REALTIME = 0,
		BAKED    = 1,
		MAX      = 2
	};

	/**
	 * Enum SteamAudio.ETransmissionType
	 */
	enum class ETransmissionType : uint8_t
	{
		FREQUENCY_INDEPENDENT = 0,
		FREQUENCY_DEPENDENT   = 1,
		FREQUENCY_MAX         = 2
	};

	/**
	 * Enum SteamAudio.EProbeGenerationType
	 */
	enum class EProbeGenerationType : uint8_t
	{
		CENTROID      = 0,
		UNIFORM_FLOOR = 1,
		MAX           = 2
	};

	/**
	 * Enum SteamAudio.EOpenCLDeviceType
	 */
	enum class EOpenCLDeviceType : uint8_t
	{
		ANY = 0,
		CPU = 1,
		GPU = 2,
		MAX = 3
	};

	/**
	 * Enum SteamAudio.EReflectionEffectType
	 */
	enum class EReflectionEffectType : uint8_t
	{
		CONVOLUTION   = 0,
		PARAMETRIC    = 1,
		HYBRID        = 2,
		TRUEAUDIONEXT = 3,
		MAX           = 4
	};

	/**
	 * Enum SteamAudio.ESceneType
	 */
	enum class ESceneType : uint8_t
	{
		DEFAULT    = 0,
		EMBREE     = 1,
		RADEONRAYS = 2,
		MAX        = 3
	};

	/**
	 * Enum SteamAudio.EAudioEngineType
	 */
	enum class EAudioEngineType : uint8_t
	{
		UNREAL     = 0,
		FMODSTUDIO = 1,
		MAX        = 2
	};

	/**
	 * Enum SteamAudio.EReflectionSimulationType
	 */
	enum class EReflectionSimulationType : uint8_t
	{
		REALTIME              = 0,
		BAKED_STATIC_SOURCE   = 1,
		BAKED_STATIC_LISTENER = 2,
		MAX                   = 3
	};

	/**
	 * Enum SteamAudio.EOcclusionType
	 */
	enum class EOcclusionType : uint8_t
	{
		RAYCAST    = 0,
		VOLUMETRIC = 1,
		MAX        = 2
	};

	/**
	 * Enum SteamAudio.EHRTFInterpolation
	 */
	enum class EHRTFInterpolation : uint8_t
	{
		NEAREST  = 0,
		BILINEAR = 1,
		MAX      = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct SteamAudio.SteamAudioBakedDataInfo
	 * Size -> 0x0030
	 */
	struct FSteamAudioBakedDataInfo
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Type;                                                    // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Variation;                                               // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             EndpointCenter;                                          // 0x0018(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndpointRadius;                                          // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Size;                                                    // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZW9F[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamAudio.SteamAudioReverbSubmixPluginSettings
	 * Size -> 0x0002
	 */
	struct FSteamAudioReverbSubmixPluginSettings
	{
	public:
		bool                                                       bApplyReverb;                                            // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyHRTF;                                              // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
