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
	 * Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.ShowSettingsMenu
	 */
	struct USIGIS_Exit_Widget_C_ShowSettingsMenu_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A3U9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.ShowAreYouSureWarning
	 */
	struct USIGIS_Exit_Widget_C_ShowAreYouSureWarning_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AZJY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.OnPreviewKeyDown
	 */
	struct USIGIS_Exit_Widget_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.Construct
	 */
	struct USIGIS_Exit_Widget_C_Construct_Params
	{	};

	/**
	 * Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.ExitMenu_Open
	 */
	struct USIGIS_Exit_Widget_C_ExitMenu_Open_Params
	{	};

	/**
	 * Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.CloseTheMenu
	 */
	struct USIGIS_Exit_Widget_C_CloseTheMenu_Params
	{	};

	/**
	 * Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.ShowSettings
	 */
	struct USIGIS_Exit_Widget_C_ShowSettings_Params
	{	};

	/**
	 * Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.BndEvt__MM_GenericSmallBtn_Resume_K2Node_ComponentBoundEvent_9_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_Exit_Widget_C_BndEvt__MM_GenericSmallBtn_Resume_K2Node_ComponentBoundEvent_9_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.BndEvt__MM_GenericSmallBtn_Settings_K2Node_ComponentBoundEvent_10_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_Exit_Widget_C_BndEvt__MM_GenericSmallBtn_Settings_K2Node_ComponentBoundEvent_10_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.BndEvt__MM_GenericSmallBtn_MainMenu_K2Node_ComponentBoundEvent_11_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_Exit_Widget_C_BndEvt__MM_GenericSmallBtn_MainMenu_K2Node_ComponentBoundEvent_11_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.BndEvt__MM_GenericSmallBtn_BackBtn_K2Node_ComponentBoundEvent_12_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_Exit_Widget_C_BndEvt__MM_GenericSmallBtn_BackBtn_K2Node_ComponentBoundEvent_12_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.BndEvt__MM_GenericSmallBtn01_1_K2Node_ComponentBoundEvent_13_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_Exit_Widget_C_BndEvt__MM_GenericSmallBtn01_1_K2Node_ComponentBoundEvent_13_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.BndEvt__MM_GenericSmallBtn_Cancel_K2Node_ComponentBoundEvent_14_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_Exit_Widget_C_BndEvt__MM_GenericSmallBtn_Cancel_K2Node_ComponentBoundEvent_14_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.BndEvt__MM_GenericSmallBtn_BugReports_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_Exit_Widget_C_BndEvt__MM_GenericSmallBtn_BugReports_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.CloseBugMenu
	 */
	struct USIGIS_Exit_Widget_C_CloseBugMenu_Params
	{	};

	/**
	 * Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.BndEvt__SIGIS_Exit_Widget_Btn_ENG_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_Exit_Widget_C_BndEvt__SIGIS_Exit_Widget_Btn_ENG_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.BndEvt__SIGIS_Exit_Widget_Btn_FR_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_Exit_Widget_C_BndEvt__SIGIS_Exit_Widget_Btn_FR_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.BndEvt__SIGIS_Exit_Widget_Btn_POL_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_Exit_Widget_C_BndEvt__SIGIS_Exit_Widget_Btn_POL_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.BndEvt__SIGIS_Exit_Widget_Btn_DebugStartMission_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_Exit_Widget_C_BndEvt__SIGIS_Exit_Widget_Btn_DebugStartMission_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.BndEvt__SIGIS_Exit_Widget_Btn_DebugIncrementMission_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_Exit_Widget_C_BndEvt__SIGIS_Exit_Widget_Btn_DebugIncrementMission_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.BndEvt__SIGIS_Exit_Widget_Btn_DebugClearMissions_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_Exit_Widget_C_BndEvt__SIGIS_Exit_Widget_Btn_DebugClearMissions_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.BndEvt__SIGIS_Exit_Widget_Button_0_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_Exit_Widget_C_BndEvt__SIGIS_Exit_Widget_Button_0_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.BndEvt__SIGIS_Exit_Widget_MM_GenericSmallBtn_Settings_1_K2Node_ComponentBoundEvent_8_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_Exit_Widget_C_BndEvt__SIGIS_Exit_Widget_MM_GenericSmallBtn_Settings_1_K2Node_ComponentBoundEvent_8_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.ClosedTheGuideMenu
	 */
	struct USIGIS_Exit_Widget_C_ClosedTheGuideMenu_Params
	{	};

	/**
	 * Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.BndEvt__SIGIS_Exit_Widget_Btn_DevDebug_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_Exit_Widget_C_BndEvt__SIGIS_Exit_Widget_Btn_DevDebug_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.ExecuteUbergraph_SIGIS_Exit_Widget
	 */
	struct USIGIS_Exit_Widget_C_ExecuteUbergraph_SIGIS_Exit_Widget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
