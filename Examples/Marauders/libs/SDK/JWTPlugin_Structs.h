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
	 * Enum JWTPlugin.Algorithm
	 */
	enum class EAlgorithm : uint8_t
	{
		Algorithm_hs256         = 0,
		Algorithm_hs384         = 1,
		Algorithm_hs512         = 2,
		Algorithm_Algorithm_MAX = 3
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
