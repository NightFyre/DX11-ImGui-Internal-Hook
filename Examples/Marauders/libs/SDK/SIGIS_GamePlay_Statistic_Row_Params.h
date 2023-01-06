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
	 * Function SIGIS_GamePlay_Statistic_Row.SIGIS_GamePlay_Statistic_Row_C.PreConstruct
	 */
	struct USIGIS_GamePlay_Statistic_Row_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_GamePlay_Statistic_Row.SIGIS_GamePlay_Statistic_Row_C.SetStatValue
	 */
	struct USIGIS_GamePlay_Statistic_Row_C_SetStatValue_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_GamePlay_Statistic_Row.SIGIS_GamePlay_Statistic_Row_C.ExecuteUbergraph_SIGIS_GamePlay_Statistic_Row
	 */
	struct USIGIS_GamePlay_Statistic_Row_C_ExecuteUbergraph_SIGIS_GamePlay_Statistic_Row_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
