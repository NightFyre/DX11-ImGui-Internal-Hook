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
	 * Function NormalAI_Controller.NormalAI_Controller_C.ReceiveBeginPlay
	 */
	struct ANormalAI_Controller_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function NormalAI_Controller.NormalAI_Controller_C.OnDestroyed_Event_1
	 */
	struct ANormalAI_Controller_C_OnDestroyed_Event_1_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NormalAI_Controller.NormalAI_Controller_C.ExecuteUbergraph_NormalAI_Controller
	 */
	struct ANormalAI_Controller_C_ExecuteUbergraph_NormalAI_Controller_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U9CJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
