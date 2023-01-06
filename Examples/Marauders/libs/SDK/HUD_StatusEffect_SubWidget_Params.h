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
	 * Function HUD_StatusEffect_SubWidget.HUD_StatusEffect_SubWidget_C.PreConstruct
	 */
	struct UHUD_StatusEffect_SubWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_StatusEffect_SubWidget.HUD_StatusEffect_SubWidget_C.Construct
	 */
	struct UHUD_StatusEffect_SubWidget_C_Construct_Params
	{	};

	/**
	 * Function HUD_StatusEffect_SubWidget.HUD_StatusEffect_SubWidget_C.SetVisible
	 */
	struct UHUD_StatusEffect_SubWidget_C_SetVisible_Params
	{
	public:
		bool                                                       ShouldBeVisible;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_StatusEffect_SubWidget.HUD_StatusEffect_SubWidget_C.ExecuteUbergraph_HUD_StatusEffect_SubWidget
	 */
	struct UHUD_StatusEffect_SubWidget_C_ExecuteUbergraph_HUD_StatusEffect_SubWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WLC3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
