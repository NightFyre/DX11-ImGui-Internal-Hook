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
	 * Function DropPod_IsReadyScreen.DropPod_IsReadyScreen_C.Construct
	 */
	struct UDropPod_IsReadyScreen_C_Construct_Params
	{	};

	/**
	 * Function DropPod_IsReadyScreen.DropPod_IsReadyScreen_C.TriggerDossStartup
	 */
	struct UDropPod_IsReadyScreen_C_TriggerDossStartup_Params
	{	};

	/**
	 * Function DropPod_IsReadyScreen.DropPod_IsReadyScreen_C.ResetDosScreen
	 */
	struct UDropPod_IsReadyScreen_C_ResetDosScreen_Params
	{	};

	/**
	 * Function DropPod_IsReadyScreen.DropPod_IsReadyScreen_C.SetState
	 */
	struct UDropPod_IsReadyScreen_C_SetState_Params
	{
	public:
		E_DropPodDoorStates                                        WhichState;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DropPod_IsReadyScreen.DropPod_IsReadyScreen_C.Pretendtimer
	 */
	struct UDropPod_IsReadyScreen_C_Pretendtimer_Params
	{	};

	/**
	 * Function DropPod_IsReadyScreen.DropPod_IsReadyScreen_C.ExecuteUbergraph_DropPod_IsReadyScreen
	 */
	struct UDropPod_IsReadyScreen_C_ExecuteUbergraph_DropPod_IsReadyScreen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
