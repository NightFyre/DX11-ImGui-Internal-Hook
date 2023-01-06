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
	 * Function HUD_Message_SubWidget.HUD_Message_SubWidget_C.Construct
	 */
	struct UHUD_Message_SubWidget_C_Construct_Params
	{	};

	/**
	 * Function HUD_Message_SubWidget.HUD_Message_SubWidget_C.FinishedAnim
	 */
	struct UHUD_Message_SubWidget_C_FinishedAnim_Params
	{	};

	/**
	 * Function HUD_Message_SubWidget.HUD_Message_SubWidget_C.ExecuteUbergraph_HUD_Message_SubWidget
	 */
	struct UHUD_Message_SubWidget_C_ExecuteUbergraph_HUD_Message_SubWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
