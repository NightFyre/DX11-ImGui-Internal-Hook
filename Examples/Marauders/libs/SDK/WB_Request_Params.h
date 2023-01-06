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
	 * Function WB_Request.WB_Request_C.NavToConfirmButton
	 */
	struct UWB_Request_C_NavToConfirmButton_Params
	{	};

	/**
	 * Function WB_Request.WB_Request_C.GetIsGamepad
	 */
	struct UWB_Request_C_GetIsGamepad_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_Request.WB_Request_C.NavToCancelButton
	 */
	struct UWB_Request_C_NavToCancelButton_Params
	{	};

	/**
	 * Function WB_Request.WB_Request_C.OnPreviewKeyDown
	 */
	struct UWB_Request_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WB_Request.WB_Request_C.OnInputSwitched
	 */
	struct UWB_Request_C_OnInputSwitched_Params
	{
	public:
		EInputType                                                 InputType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Request.WB_Request_C.CheckFocus
	 */
	struct UWB_Request_C_CheckFocus_Params
	{	};

	/**
	 * Function WB_Request.WB_Request_C.ActivateWidget
	 */
	struct UWB_Request_C_ActivateWidget_Params
	{
	public:
		bool                                                       bShowOnlyOkButton;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bUseCancelCountdown;                                     // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FNKQ[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                HeadText;                                                // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                MessageText;                                             // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WB_Request.WB_Request_C.ClickCancel
	 */
	struct UWB_Request_C_ClickCancel_Params
	{	};

	/**
	 * Function WB_Request.WB_Request_C.SetGamepadAppearance
	 */
	struct UWB_Request_C_SetGamepadAppearance_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_Request.WB_Request_C.ClickOK
	 */
	struct UWB_Request_C_ClickOK_Params
	{	};

	/**
	 * Function WB_Request.WB_Request_C.RemoveRequest
	 */
	struct UWB_Request_C_RemoveRequest_Params
	{	};

	/**
	 * Function WB_Request.WB_Request_C.SetBaseColor
	 */
	struct UWB_Request_C_SetBaseColor_Params
	{
	public:
		bool                                                       bUseBaseColor;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VOEA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        Grad0;                                                   // 0x0004(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Grad1;                                                   // 0x0014(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Grad2;                                                   // 0x0024(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Grad3;                                                   // 0x0034(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Request.WB_Request_C.BndEvt__MM_GenBtn01_Confirm_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature
	 */
	struct UWB_Request_C_BndEvt__MM_GenBtn01_Confirm_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function WB_Request.WB_Request_C.BndEvt__MM_GenBtn01_Cancel_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature
	 */
	struct UWB_Request_C_BndEvt__MM_GenBtn01_Cancel_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function WB_Request.WB_Request_C.Countdown
	 */
	struct UWB_Request_C_Countdown_Params
	{	};

	/**
	 * Function WB_Request.WB_Request_C.ExecuteUbergraph_WB_Request
	 */
	struct UWB_Request_C_ExecuteUbergraph_WB_Request_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Request.WB_Request_C.OnClicked_Ok__DelegateSignature
	 */
	struct UWB_Request_C_OnClicked_Ok__DelegateSignature_Params
	{	};

	/**
	 * Function WB_Request.WB_Request_C.OnClicked_Cancel__DelegateSignature
	 */
	struct UWB_Request_C_OnClicked_Cancel__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
