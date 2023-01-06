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
	 * Function HUD_MissionProgress_SubWidget.HUD_MissionProgress_SubWidget_C.SetStateAndRefreshInfo
	 */
	struct UHUD_MissionProgress_SubWidget_C_SetStateAndRefreshInfo_Params
	{
	public:
		E_ContractStates                                           WhatState;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7QYY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                MissionName;                                             // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_MissionProgress_SubWidget.HUD_MissionProgress_SubWidget_C.Construct
	 */
	struct UHUD_MissionProgress_SubWidget_C_Construct_Params
	{	};

	/**
	 * Function HUD_MissionProgress_SubWidget.HUD_MissionProgress_SubWidget_C.PreConstruct
	 */
	struct UHUD_MissionProgress_SubWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_MissionProgress_SubWidget.HUD_MissionProgress_SubWidget_C.ExecuteUbergraph_HUD_MissionProgress_SubWidget
	 */
	struct UHUD_MissionProgress_SubWidget_C_ExecuteUbergraph_HUD_MissionProgress_SubWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8NF8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
