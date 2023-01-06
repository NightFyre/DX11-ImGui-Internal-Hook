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
	 * Function Leaderboard_RecordWidget.Leaderboard_RecordWidget_C.WorkOutMyRowBasedOnContainer
	 */
	struct ULeaderboard_RecordWidget_C_WorkOutMyRowBasedOnContainer_Params
	{
	public:
		int32_t                                                    WhatRow;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OCI1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Leaderboard_RecordWidget.Leaderboard_RecordWidget_C.GetBrushColor_1
	 */
	struct ULeaderboard_RecordWidget_C_GetBrushColor_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Leaderboard_RecordWidget.Leaderboard_RecordWidget_C.FillInFromAws
	 */
	struct ULeaderboard_RecordWidget_C_FillInFromAws_Params
	{
	public:
		class FString                                              PlayerName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    rank;                                                    // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    score;                                                   // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Leaderboard_RecordWidget.Leaderboard_RecordWidget_C.IsImportantRow
	 */
	struct ULeaderboard_RecordWidget_C_IsImportantRow_Params
	{
	public:
		bool                                                       isImportant;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Leaderboard_RecordWidget.Leaderboard_RecordWidget_C.Construct
	 */
	struct ULeaderboard_RecordWidget_C_Construct_Params
	{	};

	/**
	 * Function Leaderboard_RecordWidget.Leaderboard_RecordWidget_C.WorkOutMyRow
	 */
	struct ULeaderboard_RecordWidget_C_WorkOutMyRow_Params
	{	};

	/**
	 * Function Leaderboard_RecordWidget.Leaderboard_RecordWidget_C.ExecuteUbergraph_Leaderboard_RecordWidget
	 */
	struct ULeaderboard_RecordWidget_C_ExecuteUbergraph_Leaderboard_RecordWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
