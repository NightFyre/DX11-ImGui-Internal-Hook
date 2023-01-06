#pragma once

/**
 * Name: RaidGame
 * Version: 1
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Ping.PingIP.SendPing
	 */
	struct UPingIP_SendPing_Params
	{
	public:
		class FString                                              IPAddress;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Ping.PingIP.PollThread
	 */
	struct UPingIP_PollThread_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
