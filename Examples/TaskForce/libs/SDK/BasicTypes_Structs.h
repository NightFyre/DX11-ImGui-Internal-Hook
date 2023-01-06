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
	 * PredefinedEnum BasicTypes.ObjectFlags
	 */
	enum class ObjectFlags : int32_t
	{
		None              = 0,
		Native            = 1 << 25,
		Async             = 1 << 26,
		AsyncLoading      = 1 << 27,
		Unreachable       = 1 << 28,
		PendingKill       = 1 << 29,
		RootSet           = 1 << 30,
		NoStrongReference = 1 << 31
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
