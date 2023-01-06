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
	 * Function FrigateBoardedNotify.FrigateBoardedNotify_C.Construct
	 */
	struct UFrigateBoardedNotify_C_Construct_Params
	{	};

	/**
	 * Function FrigateBoardedNotify.FrigateBoardedNotify_C.ExecuteUbergraph_FrigateBoardedNotify
	 */
	struct UFrigateBoardedNotify_C_ExecuteUbergraph_FrigateBoardedNotify_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UKB1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
