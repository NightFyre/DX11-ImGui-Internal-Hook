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
	 * Enum Rejoin.ERejoinStatus
	 */
	enum class ERejoinStatus : uint8_t
	{
		NoMatchToRejoin            = 0,
		RejoinAvailable            = 1,
		UpdatingStatus             = 2,
		NeedsRecheck               = 3,
		NoMatchToRejoin_MatchEnded = 4,
		MAX                        = 5
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
