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
	 * Function Event_FullScreenLeaderboard_Widget.Event_FullScreenLeaderboard_Widget_C.isLoading
	 */
	struct UEvent_FullScreenLeaderboard_Widget_C_isLoading_Params
	{
	public:
		bool                                                       SetAsLoading;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Event_FullScreenLeaderboard_Widget.Event_FullScreenLeaderboard_Widget_C.Construct
	 */
	struct UEvent_FullScreenLeaderboard_Widget_C_Construct_Params
	{	};

	/**
	 * Function Event_FullScreenLeaderboard_Widget.Event_FullScreenLeaderboard_Widget_C.BndEvt__Event_FullScreenLeaderboard_Widget_MM_GenericSmallBtn01_GoBack_EventLeaderboard_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature
	 */
	struct UEvent_FullScreenLeaderboard_Widget_C_BndEvt__Event_FullScreenLeaderboard_Widget_MM_GenericSmallBtn01_GoBack_EventLeaderboard_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function Event_FullScreenLeaderboard_Widget.Event_FullScreenLeaderboard_Widget_C.FillList
	 */
	struct UEvent_FullScreenLeaderboard_Widget_C_FillList_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GWQD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FLeaderBoardMemberInfo>                      leaderboardback;                                         // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Event_FullScreenLeaderboard_Widget.Event_FullScreenLeaderboard_Widget_C.BndEvt__Event_FullScreenLeaderboard_Widget_MM_Event_Refresh_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature
	 */
	struct UEvent_FullScreenLeaderboard_Widget_C_BndEvt__Event_FullScreenLeaderboard_Widget_MM_Event_Refresh_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function Event_FullScreenLeaderboard_Widget.Event_FullScreenLeaderboard_Widget_C.ExecuteUbergraph_Event_FullScreenLeaderboard_Widget
	 */
	struct UEvent_FullScreenLeaderboard_Widget_C_ExecuteUbergraph_Event_FullScreenLeaderboard_Widget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
