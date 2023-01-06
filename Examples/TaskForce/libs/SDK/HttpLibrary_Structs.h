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
	 * Enum HttpLibrary.EHttpLibraryContentType
	 */
	enum class EHttpLibraryContentType : uint8_t
	{
		Default = 0,
		TXT     = 1,
		HTML    = 2,
		CSS     = 3,
		CSV     = 4,
		JSON    = 5,
		JS      = 6,
		RTF     = 7,
		XML     = 8,
		XHTML   = 9,
		BIN     = 10,
		MAX     = 11
	};

	/**
	 * Enum HttpLibrary.EHttpLibraryRequestMethod
	 */
	enum class EHttpLibraryRequestMethod : uint8_t
	{
		GET     = 0,
		POST    = 1,
		PUT     = 2,
		PATCH   = 3,
		DELETE_A  = 4,
		HEAD    = 5,
		CONNECT = 6,
		OPTIONS = 7,
		TRACE   = 8,
		MAX     = 9
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
