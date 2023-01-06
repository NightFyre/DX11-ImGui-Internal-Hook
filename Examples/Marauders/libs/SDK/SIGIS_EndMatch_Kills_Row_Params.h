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
	 * Function SIGIS_EndMatch_Kills_Row.SIGIS_EndMatch_Kills_Row_C.Construct
	 */
	struct USIGIS_EndMatch_Kills_Row_C_Construct_Params
	{	};

	/**
	 * Function SIGIS_EndMatch_Kills_Row.SIGIS_EndMatch_Kills_Row_C.ExecuteUbergraph_SIGIS_EndMatch_Kills_Row
	 */
	struct USIGIS_EndMatch_Kills_Row_C_ExecuteUbergraph_SIGIS_EndMatch_Kills_Row_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DNKA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
