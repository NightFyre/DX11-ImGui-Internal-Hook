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
	 * Enum TimeManagement.EFrameNumberDisplayFormats
	 */
	enum class EFrameNumberDisplayFormats : uint8_t
	{
		NonDropFrameTimecode = 0,
		DropFrameTimecode    = 1,
		Seconds              = 2,
		Frames               = 3,
		MAX_Count            = 4,
		MAX                  = 5
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
