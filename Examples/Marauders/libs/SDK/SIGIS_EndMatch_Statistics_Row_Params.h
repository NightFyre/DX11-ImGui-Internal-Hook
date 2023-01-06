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
	 * Function SIGIS_EndMatch_Statistics_Row.SIGIS_EndMatch_Statistics_Row_C.Set_StatAmount
	 */
	struct USIGIS_EndMatch_Statistics_Row_C_Set_StatAmount_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_EndMatch_Statistics_Row.SIGIS_EndMatch_Statistics_Row_C.PreConstruct
	 */
	struct USIGIS_EndMatch_Statistics_Row_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_EndMatch_Statistics_Row.SIGIS_EndMatch_Statistics_Row_C.ExecuteUbergraph_SIGIS_EndMatch_Statistics_Row
	 */
	struct USIGIS_EndMatch_Statistics_Row_C_ExecuteUbergraph_SIGIS_EndMatch_Statistics_Row_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
