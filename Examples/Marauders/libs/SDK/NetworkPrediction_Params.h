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
	 * Function NetworkPrediction.NetworkPredictionComponent.ServerReceiveClientInput
	 */
	struct UNetworkPredictionComponent_ServerReceiveClientInput_Params
	{
	public:
		struct FServerReplicationRPCParameter                      ProxyParameter;                                          // 0x0000(0x0018)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
