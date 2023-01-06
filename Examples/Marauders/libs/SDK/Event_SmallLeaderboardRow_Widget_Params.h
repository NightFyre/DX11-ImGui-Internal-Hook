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
	 * Function Event_SmallLeaderboardRow_Widget.Event_SmallLeaderboardRow_Widget_C.RowHasAEntry
	 */
	struct UEvent_SmallLeaderboardRow_Widget_C_RowHasAEntry_Params
	{
	public:
		bool                                                       HasEntry;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Event_SmallLeaderboardRow_Widget.Event_SmallLeaderboardRow_Widget_C.WorkOutMyRowBasedOnContainer
	 */
	struct UEvent_SmallLeaderboardRow_Widget_C_WorkOutMyRowBasedOnContainer_Params
	{
	public:
		int32_t                                                    WhatRow;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_73CA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Event_SmallLeaderboardRow_Widget.Event_SmallLeaderboardRow_Widget_C.GetBrushColor_1
	 */
	struct UEvent_SmallLeaderboardRow_Widget_C_GetBrushColor_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Event_SmallLeaderboardRow_Widget.Event_SmallLeaderboardRow_Widget_C.Construct
	 */
	struct UEvent_SmallLeaderboardRow_Widget_C_Construct_Params
	{	};

	/**
	 * Function Event_SmallLeaderboardRow_Widget.Event_SmallLeaderboardRow_Widget_C.WorkOutMyRow
	 */
	struct UEvent_SmallLeaderboardRow_Widget_C_WorkOutMyRow_Params
	{	};

	/**
	 * Function Event_SmallLeaderboardRow_Widget.Event_SmallLeaderboardRow_Widget_C.UPDATE_Event_LeaderboardRow
	 */
	struct UEvent_SmallLeaderboardRow_Widget_C_UPDATE_Event_LeaderboardRow_Params
	{
	public:
		struct FLeaderBoardMemberInfo                              LeaderboardEntry;                                        // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Event_SmallLeaderboardRow_Widget.Event_SmallLeaderboardRow_Widget_C.UPDATE_Event_LeaderboardRow_FULL
	 */
	struct UEvent_SmallLeaderboardRow_Widget_C_UPDATE_Event_LeaderboardRow_FULL_Params
	{
	public:
		struct FLeaderBoardMemberInfo                              LeaderBoardMemberInfo;                                   // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Event_SmallLeaderboardRow_Widget.Event_SmallLeaderboardRow_Widget_C.ExecuteUbergraph_Event_SmallLeaderboardRow_Widget
	 */
	struct UEvent_SmallLeaderboardRow_Widget_C_ExecuteUbergraph_Event_SmallLeaderboardRow_Widget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
