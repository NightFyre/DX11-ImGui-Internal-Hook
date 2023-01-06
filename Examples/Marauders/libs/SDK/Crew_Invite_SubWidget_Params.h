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
	 * Function Crew_Invite_SubWidget.Crew_Invite_SubWidget_C.OnError_B6856B7D44880E506726A5955983B651
	 */
	struct UCrew_Invite_SubWidget_C_OnError_B6856B7D44880E506726A5955983B651_Params
	{
	public:
		struct FNakamaListGroupMembersResponse                     SuccessResponse;                                         // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FNakamaErrorResponse                                ErrorResponse;                                           // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Crew_Invite_SubWidget.Crew_Invite_SubWidget_C.OnSuccess_B6856B7D44880E506726A5955983B651
	 */
	struct UCrew_Invite_SubWidget_C_OnSuccess_B6856B7D44880E506726A5955983B651_Params
	{
	public:
		struct FNakamaListGroupMembersResponse                     SuccessResponse;                                         // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FNakamaErrorResponse                                ErrorResponse;                                           // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Crew_Invite_SubWidget.Crew_Invite_SubWidget_C.Construct
	 */
	struct UCrew_Invite_SubWidget_C_Construct_Params
	{	};

	/**
	 * Function Crew_Invite_SubWidget.Crew_Invite_SubWidget_C.DestroyTheWidget
	 */
	struct UCrew_Invite_SubWidget_C_DestroyTheWidget_Params
	{	};

	/**
	 * Function Crew_Invite_SubWidget.Crew_Invite_SubWidget_C.BndEvt__Crew_Invite_SubWidget_MM_btn_Accept_K2Node_ComponentBoundEvent_2_GenericSmallBtnPressed__DelegateSignature
	 */
	struct UCrew_Invite_SubWidget_C_BndEvt__Crew_Invite_SubWidget_MM_btn_Accept_K2Node_ComponentBoundEvent_2_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function Crew_Invite_SubWidget.Crew_Invite_SubWidget_C.BndEvt__Crew_Invite_SubWidget_MM_btn_Cancel_K2Node_ComponentBoundEvent_3_GenericSmallBtnPressed__DelegateSignature
	 */
	struct UCrew_Invite_SubWidget_C_BndEvt__Crew_Invite_SubWidget_MM_btn_Cancel_K2Node_ComponentBoundEvent_3_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function Crew_Invite_SubWidget.Crew_Invite_SubWidget_C.ExecuteUbergraph_Crew_Invite_SubWidget
	 */
	struct UCrew_Invite_SubWidget_C_ExecuteUbergraph_Crew_Invite_SubWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MHP4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
