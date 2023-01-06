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
	 * Function FactionStanding_SubWidget.FactionStanding_SubWidget_C.UpdateFactionInfo
	 */
	struct UFactionStanding_SubWidget_C_UpdateFactionInfo_Params
	{	};

	/**
	 * Function FactionStanding_SubWidget.FactionStanding_SubWidget_C.Construct
	 */
	struct UFactionStanding_SubWidget_C_Construct_Params
	{	};

	/**
	 * Function FactionStanding_SubWidget.FactionStanding_SubWidget_C.ExecuteUbergraph_FactionStanding_SubWidget
	 */
	struct UFactionStanding_SubWidget_C_ExecuteUbergraph_FactionStanding_SubWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FHK9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
