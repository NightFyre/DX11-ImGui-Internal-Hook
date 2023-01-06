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
	 * Function Qos.QosBeaconClient.ServerQosRequest
	 */
	struct AQosBeaconClient_ServerQosRequest_Params
	{
	public:
		class FString                                              InSessionId;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Qos.QosBeaconClient.ClientQosResponse
	 */
	struct AQosBeaconClient_ClientQosResponse_Params
	{
	public:
		EQosResponseType                                           Response;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
