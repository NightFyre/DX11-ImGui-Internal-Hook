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
	 * Enum UdpMessaging.EUdpMessageFormat
	 */
	enum class EUdpMessageFormat : uint8_t
	{
		None                   = 0,
		Json                   = 1,
		TaggedProperty         = 2,
		CborPlatformEndianness = 3,
		CborStandardEndianness = 4,
		MAX                    = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct UdpMessaging.UdpMockMessage
	 * Size -> 0x0010
	 */
	struct FUdpMockMessage
	{
	public:
		TArray<unsigned char>                                      Data;                                                    // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
