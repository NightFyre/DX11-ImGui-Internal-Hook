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
	 * Function MainPlayer_CameraManager.MainPlayer_CameraManager_C.CameraShake_StartSprinting
	 */
	struct AMainPlayer_CameraManager_C_CameraShake_StartSprinting_Params
	{	};

	/**
	 * Function MainPlayer_CameraManager.MainPlayer_CameraManager_C.CameraShake_StopSprinting
	 */
	struct AMainPlayer_CameraManager_C_CameraShake_StopSprinting_Params
	{	};

	/**
	 * Function MainPlayer_CameraManager.MainPlayer_CameraManager_C.ExecuteUbergraph_MainPlayer_CameraManager
	 */
	struct AMainPlayer_CameraManager_C_ExecuteUbergraph_MainPlayer_CameraManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TXWV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
