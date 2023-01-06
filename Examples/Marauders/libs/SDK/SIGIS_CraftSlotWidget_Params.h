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
	 * Function SIGIS_CraftSlotWidget.SIGIS_CraftSlotWidget_C.CheckHaveEnoughToCraft
	 */
	struct USIGIS_CraftSlotWidget_C_CheckHaveEnoughToCraft_Params
	{
	public:
		bool                                                       CanCraft;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OU46[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_CraftSlotWidget.SIGIS_CraftSlotWidget_C.Construct
	 */
	struct USIGIS_CraftSlotWidget_C_Construct_Params
	{	};

	/**
	 * Function SIGIS_CraftSlotWidget.SIGIS_CraftSlotWidget_C.RefreshSlotInfo
	 */
	struct USIGIS_CraftSlotWidget_C_RefreshSlotInfo_Params
	{	};

	/**
	 * Function SIGIS_CraftSlotWidget.SIGIS_CraftSlotWidget_C.ExecuteUbergraph_SIGIS_CraftSlotWidget
	 */
	struct USIGIS_CraftSlotWidget_C_ExecuteUbergraph_SIGIS_CraftSlotWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GZYF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
