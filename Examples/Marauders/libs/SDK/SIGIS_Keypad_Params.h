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
	 * Function SIGIS_Keypad.SIGIS_Keypad_C.Analytics_ShipKeypadResult
	 */
	struct USIGIS_Keypad_C_Analytics_ShipKeypadResult_Params
	{
	public:
		bool                                                       UsedCorrectCode;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7RK6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_Keypad.SIGIS_Keypad_C.SwitchKeypadUIState
	 */
	struct USIGIS_Keypad_C_SwitchKeypadUIState_Params
	{
	public:
		E_KeypadStates                                             SwitchTo;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_Keypad.SIGIS_Keypad_C.CodeFail
	 */
	struct USIGIS_Keypad_C_CodeFail_Params
	{	};

	/**
	 * Function SIGIS_Keypad.SIGIS_Keypad_C.CodeSuccess
	 */
	struct USIGIS_Keypad_C_CodeSuccess_Params
	{	};

	/**
	 * Function SIGIS_Keypad.SIGIS_Keypad_C.OnPreviewKeyDown
	 */
	struct USIGIS_Keypad_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SIGIS_Keypad.SIGIS_Keypad_C.AdjustShipCode
	 */
	struct USIGIS_Keypad_C_AdjustShipCode_Params
	{
	public:
		bool                                                       Clear;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RJY3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    NumberAdded;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_Keypad.SIGIS_Keypad_C.Construct
	 */
	struct USIGIS_Keypad_C_Construct_Params
	{	};

	/**
	 * Function SIGIS_Keypad.SIGIS_Keypad_C.BndEvt__Btn_Pin01_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_Keypad_C_BndEvt__Btn_Pin01_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Keypad.SIGIS_Keypad_C.BndEvt__Btn_Pin02_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_Keypad_C_BndEvt__Btn_Pin02_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Keypad.SIGIS_Keypad_C.BndEvt__Btn_Pin03_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_Keypad_C_BndEvt__Btn_Pin03_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Keypad.SIGIS_Keypad_C.BndEvt__Btn_Pin04_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_Keypad_C_BndEvt__Btn_Pin04_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Keypad.SIGIS_Keypad_C.BndEvt__Btn_Pin05_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_Keypad_C_BndEvt__Btn_Pin05_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Keypad.SIGIS_Keypad_C.BndEvt__Btn_Pin06_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_Keypad_C_BndEvt__Btn_Pin06_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Keypad.SIGIS_Keypad_C.BndEvt__Btn_Pin07_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_Keypad_C_BndEvt__Btn_Pin07_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Keypad.SIGIS_Keypad_C.BndEvt__Btn_Pin08_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_Keypad_C_BndEvt__Btn_Pin08_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Keypad.SIGIS_Keypad_C.BndEvt__Btn_Pin09_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_Keypad_C_BndEvt__Btn_Pin09_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Keypad.SIGIS_Keypad_C.BndEvt__Btn_Pin00_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_Keypad_C_BndEvt__Btn_Pin00_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Keypad.SIGIS_Keypad_C.BndEvt__Btn_PinN_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_Keypad_C_BndEvt__Btn_PinN_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Keypad.SIGIS_Keypad_C.BndEvt__Btn_PinY_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_Keypad_C_BndEvt__Btn_PinY_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Keypad.SIGIS_Keypad_C.BndEvt__Btn_Close_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_Keypad_C_BndEvt__Btn_Close_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Keypad.SIGIS_Keypad_C.CloseFromInUIKeyPress
	 */
	struct USIGIS_Keypad_C_CloseFromInUIKeyPress_Params
	{	};

	/**
	 * Function SIGIS_Keypad.SIGIS_Keypad_C.ForceCloseWithDelay
	 */
	struct USIGIS_Keypad_C_ForceCloseWithDelay_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_Keypad.SIGIS_Keypad_C.SubmitShipCode
	 */
	struct USIGIS_Keypad_C_SubmitShipCode_Params
	{	};

	/**
	 * Function SIGIS_Keypad.SIGIS_Keypad_C.ExecuteUbergraph_SIGIS_Keypad
	 */
	struct USIGIS_Keypad_C_ExecuteUbergraph_SIGIS_Keypad_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NG7Z[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
