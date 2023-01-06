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
	 * Enum ChaosCloth.EChaosClothTetherMode
	 */
	enum class EChaosClothTetherMode : uint8_t
	{
		FastTetherFastLength         = 0,
		AccurateTetherFastLength     = 1,
		AccurateTetherAccurateLength = 2,
		MaxChaosClothTetherMode      = 3,
		MAX                          = 4
	};

	/**
	 * Enum ChaosCloth.EChaosWeightMapTarget
	 */
	enum class EChaosWeightMapTarget : uint8_t
	{
		None                = 0,
		MaxDistance         = 1,
		BackstopDistance    = 2,
		BackstopRadius      = 3,
		AnimDriveMultiplier = 4,
		MAX                 = 5
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
