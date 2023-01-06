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
	 * Function LeaderboardWidget.LeaderboardWidget_C.SwitchRefreshing
	 */
	struct ULeaderboardWidget_C_SwitchRefreshing_Params
	{
	public:
		bool                                                       isLoading;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0JPO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LeaderboardWidget.LeaderboardWidget_C.SwitchTabLook
	 */
	struct ULeaderboardWidget_C_SwitchTabLook_Params
	{
	public:
		E_LeaderboardTypes                                         SwitchTo;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LeaderboardWidget.LeaderboardWidget_C.OnCallback_81F04D564FF37A07EDBD1CA8A81C39B2
	 */
	struct ULeaderboardWidget_C_OnCallback_81F04D564FF37A07EDBD1CA8A81C39B2_Params
	{
	public:
		struct FEOSLeaderboardsOnQueryLeaderboardRanksCompleteCallbackInfo Data;                                                    // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function LeaderboardWidget.LeaderboardWidget_C.OnCallback_8388F38A4B0CFEF829B713BFE84A3F06
	 */
	struct ULeaderboardWidget_C_OnCallback_8388F38A4B0CFEF829B713BFE84A3F06_Params
	{
	public:
		struct FEOSLeaderboardsOnQueryLeaderboardDefinitionsCompleteCallbackInfo Data;                                                    // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function LeaderboardWidget.LeaderboardWidget_C.BndEvt__MM_GenericSmallBtn01_GoBack_BugReportMenu_K2Node_ComponentBoundEvent_3_GenericSmallBtnPressed__DelegateSignature
	 */
	struct ULeaderboardWidget_C_BndEvt__MM_GenericSmallBtn01_GoBack_BugReportMenu_K2Node_ComponentBoundEvent_3_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function LeaderboardWidget.LeaderboardWidget_C.Fill_List
	 */
	struct ULeaderboardWidget_C_Fill_List_Params
	{	};

	/**
	 * Function LeaderboardWidget.LeaderboardWidget_C.LoadDefault
	 */
	struct ULeaderboardWidget_C_LoadDefault_Params
	{	};

	/**
	 * Function LeaderboardWidget.LeaderboardWidget_C.BndEvt__LeaderboardWidget_MM_GenericTabBtn01_K2Node_ComponentBoundEvent_4_ButtonHasBeenPressed__DelegateSignature
	 */
	struct ULeaderboardWidget_C_BndEvt__LeaderboardWidget_MM_GenericTabBtn01_K2Node_ComponentBoundEvent_4_ButtonHasBeenPressed__DelegateSignature_Params
	{
	public:
		class FString                                              WhatPressed;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function LeaderboardWidget.LeaderboardWidget_C.BndEvt__LeaderboardWidget_MM_GenericTabBtn01_1_K2Node_ComponentBoundEvent_5_ButtonHasBeenPressed__DelegateSignature
	 */
	struct ULeaderboardWidget_C_BndEvt__LeaderboardWidget_MM_GenericTabBtn01_1_K2Node_ComponentBoundEvent_5_ButtonHasBeenPressed__DelegateSignature_Params
	{
	public:
		class FString                                              WhatPressed;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function LeaderboardWidget.LeaderboardWidget_C.BndEvt__LeaderboardWidget_MM_GenericTabBtn01_2_K2Node_ComponentBoundEvent_6_ButtonHasBeenPressed__DelegateSignature
	 */
	struct ULeaderboardWidget_C_BndEvt__LeaderboardWidget_MM_GenericTabBtn01_2_K2Node_ComponentBoundEvent_6_ButtonHasBeenPressed__DelegateSignature_Params
	{
	public:
		class FString                                              WhatPressed;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function LeaderboardWidget.LeaderboardWidget_C.FIll_AWS_Lists
	 */
	struct ULeaderboardWidget_C_FIll_AWS_Lists_Params
	{	};

	/**
	 * Function LeaderboardWidget.LeaderboardWidget_C.aws_AllLeaderboardKills
	 */
	struct ULeaderboardWidget_C_aws_AllLeaderboardKills_Params
	{
	public:
		TArray<struct FLeaderBoardMemberInfo>                      leaderboardback;                                         // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function LeaderboardWidget.LeaderboardWidget_C.aws_MyLeaderboardKills
	 */
	struct ULeaderboardWidget_C_aws_MyLeaderboardKills_Params
	{
	public:
		struct FLeaderBoardMemberInfo                              PlayerInfo;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function LeaderboardWidget.LeaderboardWidget_C.BndEvt__LeaderboardWidget_Button_137_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct ULeaderboardWidget_C_BndEvt__LeaderboardWidget_Button_137_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LeaderboardWidget.LeaderboardWidget_C.Fill_NakamaLeaderboard
	 */
	struct ULeaderboardWidget_C_Fill_NakamaLeaderboard_Params
	{	};

	/**
	 * Function LeaderboardWidget.LeaderboardWidget_C.Return_NakamaLeaderboard
	 */
	struct ULeaderboardWidget_C_Return_NakamaLeaderboard_Params
	{
	public:
		TArray<struct FNakamaNLeaderBoardRow>                      returnedrecords;                                         // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FNakamaNLeaderBoardRow>                      returnedrecordsSpecific;                                 // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FString                                              pageNumNext;                                             // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              pageNumPrev;                                             // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function LeaderboardWidget.LeaderboardWidget_C.ReturnMyAccount
	 */
	struct ULeaderboardWidget_C_ReturnMyAccount_Params
	{
	public:
		struct FNakamaAccount                                      Myaccount;                                               // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function LeaderboardWidget.LeaderboardWidget_C.Construct
	 */
	struct ULeaderboardWidget_C_Construct_Params
	{	};

	/**
	 * Function LeaderboardWidget.LeaderboardWidget_C.BndEvt__LeaderboardWidget_MM_GenericTabBtn01_KillsNearMe_K2Node_ComponentBoundEvent_1_ButtonHasBeenPressed__DelegateSignature
	 */
	struct ULeaderboardWidget_C_BndEvt__LeaderboardWidget_MM_GenericTabBtn01_KillsNearMe_K2Node_ComponentBoundEvent_1_ButtonHasBeenPressed__DelegateSignature_Params
	{
	public:
		class FString                                              WhatPressed;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function LeaderboardWidget.LeaderboardWidget_C.Fill_NakamaLeaderboardAoundMe
	 */
	struct ULeaderboardWidget_C_Fill_NakamaLeaderboardAoundMe_Params
	{	};

	/**
	 * Function LeaderboardWidget.LeaderboardWidget_C.Return_NakamaLeaderboardAroundMe
	 */
	struct ULeaderboardWidget_C_Return_NakamaLeaderboardAroundMe_Params
	{
	public:
		TArray<struct FNakamaNLeaderBoardRow>                      returnedrecords;                                         // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FNakamaNLeaderBoardRow>                      returnedrecordsSpecific;                                 // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FString                                              pageNumNext;                                             // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              pageNumPrev;                                             // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function LeaderboardWidget.LeaderboardWidget_C.ExecuteUbergraph_LeaderboardWidget
	 */
	struct ULeaderboardWidget_C_ExecuteUbergraph_LeaderboardWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_73Y9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
