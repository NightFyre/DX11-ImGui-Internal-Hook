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
	 * Function SIGIS_EndMatchReportPlayer.SIGIS_EndMatchReportPlayer_C.Construct
	 */
	struct USIGIS_EndMatchReportPlayer_C_Construct_Params
	{	};

	/**
	 * Function SIGIS_EndMatchReportPlayer.SIGIS_EndMatchReportPlayer_C.BndEvt__SIGIS_EndMatchReportPlayer_MM_GenericSmallBtn01_GoBack_ReportPlayerMenu_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_EndMatchReportPlayer_C_BndEvt__SIGIS_EndMatchReportPlayer_MM_GenericSmallBtn01_GoBack_ReportPlayerMenu_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_EndMatchReportPlayer.SIGIS_EndMatchReportPlayer_C.BndEvt__SIGIS_EndMatchReportPlayer_MM_GenericSmallBtn01_1_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_EndMatchReportPlayer_C_BndEvt__SIGIS_EndMatchReportPlayer_MM_GenericSmallBtn01_1_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_EndMatchReportPlayer.SIGIS_EndMatchReportPlayer_C.BndEvt__SIGIS_EndMatchReportPlayer_MultiLineEditableTextBox_353_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct USIGIS_EndMatchReportPlayer_C_BndEvt__SIGIS_EndMatchReportPlayer_MultiLineEditableTextBox_353_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SIGIS_EndMatchReportPlayer.SIGIS_EndMatchReportPlayer_C.SendOffAnimationFinished
	 */
	struct USIGIS_EndMatchReportPlayer_C_SendOffAnimationFinished_Params
	{	};

	/**
	 * Function SIGIS_EndMatchReportPlayer.SIGIS_EndMatchReportPlayer_C.ExecuteUbergraph_SIGIS_EndMatchReportPlayer
	 */
	struct USIGIS_EndMatchReportPlayer_C_ExecuteUbergraph_SIGIS_EndMatchReportPlayer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KQIJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_EndMatchReportPlayer.SIGIS_EndMatchReportPlayer_C.ED_EndMatchReport_SendOff__DelegateSignature
	 */
	struct USIGIS_EndMatchReportPlayer_C_ED_EndMatchReport_SendOff__DelegateSignature_Params
	{
	public:
		class FText                                                MessageToSend;                                           // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_EndMatchReportPlayer.SIGIS_EndMatchReportPlayer_C.ED_EndMatchReport_Closed__DelegateSignature
	 */
	struct USIGIS_EndMatchReportPlayer_C_ED_EndMatchReport_Closed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
