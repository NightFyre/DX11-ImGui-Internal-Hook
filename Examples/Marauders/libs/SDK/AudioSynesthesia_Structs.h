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
	 * Enum AudioSynesthesia.EConstantQFFTSizeEnum
	 */
	enum class EConstantQFFTSizeEnum : uint8_t
	{
		Min     = 0,
		XXSmall = 1,
		XSmall  = 2,
		Small   = 3,
		Medium  = 4,
		Large   = 5,
		XLarge  = 6,
		XXLarge = 7,
		Max     = 8
	};

	/**
	 * Enum AudioSynesthesia.EConstantQNormalizationEnum
	 */
	enum class EConstantQNormalizationEnum : uint8_t
	{
		EqualEuclideanNorm = 0,
		EqualEnergy        = 1,
		EqualAmplitude     = 2,
		MAX                = 3
	};

	/**
	 * Enum AudioSynesthesia.ELoudnessNRTCurveTypeEnum
	 */
	enum class ELoudnessNRTCurveTypeEnum : uint8_t
	{
		A    = 0,
		B    = 1,
		C    = 2,
		D    = 3,
		None = 4,
		MAX  = 5
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
