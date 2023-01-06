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
	 * Enum SteamUtilities.ESteamUtilitiesLeaderboardDataRequest
	 */
	enum class ESteamUtilitiesLeaderboardDataRequest : uint8_t
	{
		Global           = 0,
		GlobalAroundUser = 1,
		Friends          = 2,
		MAX              = 3
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
