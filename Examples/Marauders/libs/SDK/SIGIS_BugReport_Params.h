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
	 * Function SIGIS_BugReport.SIGIS_BugReport_C.SetSendButtonEnabled
	 */
	struct USIGIS_BugReport_C_SetSendButtonEnabled_Params
	{
	public:
		bool                                                       CanUseSendBtn;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_BugReport.SIGIS_BugReport_C.SwitchToState
	 */
	struct USIGIS_BugReport_C_SwitchToState_Params
	{
	public:
		Ee_BugReportStates                                         WhichState;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_BugReport.SIGIS_BugReport_C.Construct
	 */
	struct USIGIS_BugReport_C_Construct_Params
	{	};

	/**
	 * Function SIGIS_BugReport.SIGIS_BugReport_C.BndEvt__MM_GenericSmallBtn01_GoBack_BugReportMenu_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_BugReport_C_BndEvt__MM_GenericSmallBtn01_GoBack_BugReportMenu_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_BugReport.SIGIS_BugReport_C.BndEvt__MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_BugReport_C_BndEvt__MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_BugReport.SIGIS_BugReport_C.BndEvt__MM_GenericSmallBtn01_Recieved_K2Node_ComponentBoundEvent_2_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_BugReport_C_BndEvt__MM_GenericSmallBtn01_Recieved_K2Node_ComponentBoundEvent_2_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_BugReport.SIGIS_BugReport_C.TicketResponse
	 */
	struct USIGIS_BugReport_C_TicketResponse_Params
	{
	public:
		bool                                                       ticketvalid;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_BugReport.SIGIS_BugReport_C.BndEvt__MM_GenericSmallBtn01_ClosefromErrorScreen_K2Node_ComponentBoundEvent_3_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_BugReport_C_BndEvt__MM_GenericSmallBtn01_ClosefromErrorScreen_K2Node_ComponentBoundEvent_3_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_BugReport.SIGIS_BugReport_C.Tick
	 */
	struct USIGIS_BugReport_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_BugReport.SIGIS_BugReport_C.BndEvt__ComboBoxString_872_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature
	 */
	struct USIGIS_BugReport_C_BndEvt__ComboBoxString_872_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_BugReport.SIGIS_BugReport_C.ExecuteUbergraph_SIGIS_BugReport
	 */
	struct USIGIS_BugReport_C_ExecuteUbergraph_SIGIS_BugReport_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FL9Z[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_BugReport.SIGIS_BugReport_C.ED_CloseBugReport__DelegateSignature
	 */
	struct USIGIS_BugReport_C_ED_CloseBugReport__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
