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
	 * Function SIGIS_Crews.SIGIS_Crews_C.SwitchTabLook
	 */
	struct USIGIS_Crews_C_SwitchTabLook_Params
	{
	public:
		E_SearchCrewTypes                                          WhichSubMenu;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FVGS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_Crews.SIGIS_Crews_C.RunReasonCantMakeCrew
	 */
	struct USIGIS_Crews_C_RunReasonCantMakeCrew_Params
	{
	public:
		class FText                                                WarningPhrase;                                           // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class USoundCue*                                           SoundToPlay;                                             // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidgetAnimation*                                    UI_Anim_To_Play;                                         // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_Crews.SIGIS_Crews_C.EnableSearchOptions
	 */
	struct USIGIS_Crews_C_EnableSearchOptions_Params
	{
	public:
		bool                                                       EnableInteractions;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_831C[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_Crews.SIGIS_Crews_C.FillCrewList
	 */
	struct USIGIS_Crews_C_FillCrewList_Params
	{
	public:
		TArray<struct FNakamaNGroup>                               returnedSearch;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SIGIS_Crews.SIGIS_Crews_C.SetCrewListRefreshState
	 */
	struct USIGIS_Crews_C_SetCrewListRefreshState_Params
	{
	public:
		E_CrewListSearchStates                                     CrewListState;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AP89[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_Crews.SIGIS_Crews_C.SaveLastCrewDetails
	 */
	struct USIGIS_Crews_C_SaveLastCrewDetails_Params
	{
	public:
		class FString                                              PrevCrewName;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XY08[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_Crews.SIGIS_Crews_C.LoadLastCrewDetails
	 */
	struct USIGIS_Crews_C_LoadLastCrewDetails_Params
	{
	public:
		bool                                                       DidLoad;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RE53[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              PrevCrewName;                                            // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_Crews.SIGIS_Crews_C.CrewMenuState
	 */
	struct USIGIS_Crews_C_CrewMenuState_Params
	{
	public:
		bool                                                       Close;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		E_CrewMenus                                                WhichCrewMenu;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_Crews.SIGIS_Crews_C.OnError_6979939A4D20C1501BF376934FA2306B
	 */
	struct USIGIS_Crews_C_OnError_6979939A4D20C1501BF376934FA2306B_Params
	{
	public:
		struct FNakamaListGroupMembersResponse                     SuccessResponse;                                         // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FNakamaErrorResponse                                ErrorResponse;                                           // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_Crews.SIGIS_Crews_C.OnSuccess_6979939A4D20C1501BF376934FA2306B
	 */
	struct USIGIS_Crews_C_OnSuccess_6979939A4D20C1501BF376934FA2306B_Params
	{
	public:
		struct FNakamaListGroupMembersResponse                     SuccessResponse;                                         // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FNakamaErrorResponse                                ErrorResponse;                                           // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_Crews.SIGIS_Crews_C.Crew_CrewAvailList_Opened
	 */
	struct USIGIS_Crews_C_Crew_CrewAvailList_Opened_Params
	{	};

	/**
	 * Function SIGIS_Crews.SIGIS_Crews_C.RefreshTheCrewList
	 */
	struct USIGIS_Crews_C_RefreshTheCrewList_Params
	{	};

	/**
	 * Function SIGIS_Crews.SIGIS_Crews_C.TriedToJoinAMatchReturn
	 */
	struct USIGIS_Crews_C_TriedToJoinAMatchReturn_Params
	{
	public:
		struct FCrewPartyInfo                                      JoinedTeam;                                              // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_Crews.SIGIS_Crews_C.CloseTheCrewsMenu
	 */
	struct USIGIS_Crews_C_CloseTheCrewsMenu_Params
	{	};

	/**
	 * Function SIGIS_Crews.SIGIS_Crews_C.Crew_PasswordCheck_Opened
	 */
	struct USIGIS_Crews_C_Crew_PasswordCheck_Opened_Params
	{	};

	/**
	 * Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__TryPasswordForCrew_K2Node_ComponentBoundEvent_10_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct USIGIS_Crews_C_BndEvt__TryPasswordForCrew_K2Node_ComponentBoundEvent_10_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SIGIS_Crews.SIGIS_Crews_C.ThereAreCrewsToJoin
	 */
	struct USIGIS_Crews_C_ThereAreCrewsToJoin_Params
	{
	public:
		bool                                                       CrewsToJoin;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_Crews.SIGIS_Crews_C.ValidJoinReturn_Event_1
	 */
	struct USIGIS_Crews_C_ValidJoinReturn_Event_1_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__Btn_RefreshCrewListNoCrewsFound_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_Crews_C_BndEvt__Btn_RefreshCrewListNoCrewsFound_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__MM_GenericSmallBtn01_GoBack_CrewMenu_K2Node_ComponentBoundEvent_12_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_Crews_C_BndEvt__MM_GenericSmallBtn01_GoBack_CrewMenu_K2Node_ComponentBoundEvent_12_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_13_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_Crews_C_BndEvt__MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_13_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__MM_GenericSmallBtn01_GoBack_CrewCreate_K2Node_ComponentBoundEvent_14_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_Crews_C_BndEvt__MM_GenericSmallBtn01_GoBack_CrewCreate_K2Node_ComponentBoundEvent_14_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_15_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_Crews_C_BndEvt__MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_15_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__MM_GenericSmallBtn01_GoBack_Crew_PasswordScreen_K2Node_ComponentBoundEvent_16_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_Crews_C_BndEvt__MM_GenericSmallBtn01_GoBack_Crew_PasswordScreen_K2Node_ComponentBoundEvent_16_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__MM_GenericSmallBtn01_1_K2Node_ComponentBoundEvent_17_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_Crews_C_BndEvt__MM_GenericSmallBtn01_1_K2Node_ComponentBoundEvent_17_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__MM_GenericSmallBtn_RefreshCrewListNoCrewsFound_1_K2Node_ComponentBoundEvent_18_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_Crews_C_BndEvt__MM_GenericSmallBtn_RefreshCrewListNoCrewsFound_1_K2Node_ComponentBoundEvent_18_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Crews.SIGIS_Crews_C.Crew_CreateMenu_Opened
	 */
	struct USIGIS_Crews_C_Crew_CreateMenu_Opened_Params
	{	};

	/**
	 * Function SIGIS_Crews.SIGIS_Crews_C.TryToJoinThisLobby
	 */
	struct USIGIS_Crews_C_TryToJoinThisLobby_Params
	{
	public:
		struct FLobbySearchInfo                                    WhichLobby;                                              // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FNakamaNGroup                                       NakamaGroup;                                             // 0x0020(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       HasPassword;                                             // 0x0098(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I762[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              REQpassword;                                             // 0x00A0(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                CrewName;                                                // 0x00B0(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__SIGIS_Crews_Btn_FilterAllCrews_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_Crews_C_BndEvt__SIGIS_Crews_Btn_FilterAllCrews_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__SIGIS_Crews_Btn_FilterFriendsOnly_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_Crews_C_BndEvt__SIGIS_Crews_Btn_FilterFriendsOnly_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__SIGIS_Crews_EditableTextBox_231_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct USIGIS_Crews_C_BndEvt__SIGIS_Crews_EditableTextBox_231_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__SIGIS_Crews_Button_526_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_Crews_C_BndEvt__SIGIS_Crews_Button_526_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__SIGIS_Crews_Button_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_Crews_C_BndEvt__SIGIS_Crews_Button_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__SIGIS_Crews_Btn_FilterCrewFind_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_Crews_C_BndEvt__SIGIS_Crews_Btn_FilterCrewFind_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__CrewNewPassword_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct USIGIS_Crews_C_BndEvt__CrewNewPassword_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__CrewNameCreate_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct USIGIS_Crews_C_BndEvt__CrewNameCreate_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__SIGIS_Crews_MM_GenericTabBtn01_AllCrews_K2Node_ComponentBoundEvent_8_ButtonHasBeenPressed__DelegateSignature
	 */
	struct USIGIS_Crews_C_BndEvt__SIGIS_Crews_MM_GenericTabBtn01_AllCrews_K2Node_ComponentBoundEvent_8_ButtonHasBeenPressed__DelegateSignature_Params
	{
	public:
		class FString                                              WhatPressed;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__SIGIS_Crews_MM_GenericTabBtn01_FriendsOnly_K2Node_ComponentBoundEvent_9_ButtonHasBeenPressed__DelegateSignature
	 */
	struct USIGIS_Crews_C_BndEvt__SIGIS_Crews_MM_GenericTabBtn01_FriendsOnly_K2Node_ComponentBoundEvent_9_ButtonHasBeenPressed__DelegateSignature_Params
	{
	public:
		class FString                                              WhatPressed;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__SIGIS_Crews_MM_GenericTabBtn01_FriendsOnly_1_K2Node_ComponentBoundEvent_19_ButtonHasBeenPressed__DelegateSignature
	 */
	struct USIGIS_Crews_C_BndEvt__SIGIS_Crews_MM_GenericTabBtn01_FriendsOnly_1_K2Node_ComponentBoundEvent_19_ButtonHasBeenPressed__DelegateSignature_Params
	{
	public:
		class FString                                              WhatPressed;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__SIGIS_Crews_MM_GenericSmallBtn01_ExactSeatch_Go_K2Node_ComponentBoundEvent_20_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_Crews_C_BndEvt__SIGIS_Crews_MM_GenericSmallBtn01_ExactSeatch_Go_K2Node_ComponentBoundEvent_20_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__SIGIS_Crews_MM_GenericSmallBtn01_ExactSeatch_Clear_K2Node_ComponentBoundEvent_21_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_Crews_C_BndEvt__SIGIS_Crews_MM_GenericSmallBtn01_ExactSeatch_Clear_K2Node_ComponentBoundEvent_21_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Crews.SIGIS_Crews_C.BndEvt__SIGIS_Crews_EditableTextBox_231_K2Node_ComponentBoundEvent_22_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct USIGIS_Crews_C_BndEvt__SIGIS_Crews_EditableTextBox_231_K2Node_ComponentBoundEvent_22_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_Crews.SIGIS_Crews_C.Construct
	 */
	struct USIGIS_Crews_C_Construct_Params
	{	};

	/**
	 * Function SIGIS_Crews.SIGIS_Crews_C.Return_NakamaCrewSearchResult
	 */
	struct USIGIS_Crews_C_Return_NakamaCrewSearchResult_Params
	{
	public:
		TArray<struct FNakamaNGroup>                               returnedSearch;                                          // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FString                                              pageNum;                                                 // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_Crews.SIGIS_Crews_C.OnNKCrewSearchForMyfriendCrews_Event_1
	 */
	struct USIGIS_Crews_C_OnNKCrewSearchForMyfriendCrews_Event_1_Params
	{
	public:
		TArray<struct FNakamaNGroup>                               returnedSearch;                                          // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FString                                              pageNum;                                                 // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_Crews.SIGIS_Crews_C.Return_NKGetAllFreindsGroups
	 */
	struct USIGIS_Crews_C_Return_NKGetAllFreindsGroups_Params
	{
	public:
		TArray<struct FNakamaNGroup>                               returnedSearch;                                          // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       Success;                                                 // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_Crews.SIGIS_Crews_C.ExecuteUbergraph_SIGIS_Crews
	 */
	struct USIGIS_Crews_C_ExecuteUbergraph_SIGIS_Crews_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8R41[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
