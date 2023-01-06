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
	 * Function SIGIS_MM_DiscardCheck.SIGIS_MM_DiscardCheck_C.Construct
	 */
	struct USIGIS_MM_DiscardCheck_C_Construct_Params
	{	};

	/**
	 * Function SIGIS_MM_DiscardCheck.SIGIS_MM_DiscardCheck_C.Discard_Cancel
	 */
	struct USIGIS_MM_DiscardCheck_C_Discard_Cancel_Params
	{	};

	/**
	 * Function SIGIS_MM_DiscardCheck.SIGIS_MM_DiscardCheck_C.Discard_Confirm
	 */
	struct USIGIS_MM_DiscardCheck_C_Discard_Confirm_Params
	{	};

	/**
	 * Function SIGIS_MM_DiscardCheck.SIGIS_MM_DiscardCheck_C.BndEvt__MM_GenericSmallBtn_DiscardConfirm_K2Node_ComponentBoundEvent_2_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_MM_DiscardCheck_C_BndEvt__MM_GenericSmallBtn_DiscardConfirm_K2Node_ComponentBoundEvent_2_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MM_DiscardCheck.SIGIS_MM_DiscardCheck_C.BndEvt__MM_GenericSmallBtn01_Discard_Cancel_K2Node_ComponentBoundEvent_3_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_MM_DiscardCheck_C_BndEvt__MM_GenericSmallBtn01_Discard_Cancel_K2Node_ComponentBoundEvent_3_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MM_DiscardCheck.SIGIS_MM_DiscardCheck_C.ExecuteUbergraph_SIGIS_MM_DiscardCheck
	 */
	struct USIGIS_MM_DiscardCheck_C_ExecuteUbergraph_SIGIS_MM_DiscardCheck_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RFB9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_MM_DiscardCheck.SIGIS_MM_DiscardCheck_C.CancelDiscard__DelegateSignature
	 */
	struct USIGIS_MM_DiscardCheck_C_CancelDiscard__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_MM_DiscardCheck.SIGIS_MM_DiscardCheck_C.ConfimDiscard__DelegateSignature
	 */
	struct USIGIS_MM_DiscardCheck_C_ConfimDiscard__DelegateSignature_Params
	{
	public:
		class FString                                              UIDString;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FName                                                ItemName;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
