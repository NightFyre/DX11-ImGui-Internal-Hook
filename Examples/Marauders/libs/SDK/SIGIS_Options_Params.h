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
	 * Function SIGIS_Options.SIGIS_Options_C.Set_AsInMatchVersion
	 */
	struct USIGIS_Options_C_Set_AsInMatchVersion_Params
	{	};

	/**
	 * Function SIGIS_Options.SIGIS_Options_C.SwitchTAB_Look
	 */
	struct USIGIS_Options_C_SwitchTAB_Look_Params
	{
	public:
		E_OptionsStates                                            SwitchTo;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BDZ0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_Options.SIGIS_Options_C.Switch_Options_State
	 */
	struct USIGIS_Options_C_Switch_Options_State_Params
	{
	public:
		E_OptionsStates                                            SwitchToOptionsMenu;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Force;                                                   // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_Options.SIGIS_Options_C.Construct
	 */
	struct USIGIS_Options_C_Construct_Params
	{	};

	/**
	 * Function SIGIS_Options.SIGIS_Options_C.BndEvt__BACKBTN_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_Options_C_BndEvt__BACKBTN_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Options.SIGIS_Options_C.BndEvt__Btn_TAB_Video_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_Options_C_BndEvt__Btn_TAB_Video_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Options.SIGIS_Options_C.BndEvt__Btn_TAB_AUDIO_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_Options_C_BndEvt__Btn_TAB_AUDIO_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Options.SIGIS_Options_C.BndEvt__Btn_TAB_GAMEPLAY_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_Options_C_BndEvt__Btn_TAB_GAMEPLAY_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Options.SIGIS_Options_C.BndEvt__Btn_TAB_CONTROLS_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_Options_C_BndEvt__Btn_TAB_CONTROLS_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Options.SIGIS_Options_C.BndEvt__MM_GenericSmallBtn01_GoBack_Crew_PasswordScreen_K2Node_ComponentBoundEvent_5_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_Options_C_BndEvt__MM_GenericSmallBtn01_GoBack_Crew_PasswordScreen_K2Node_ComponentBoundEvent_5_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Options.SIGIS_Options_C.BndEvt__MM_GenericTabBtn_Video_K2Node_ComponentBoundEvent_6_ButtonHasBeenPressed__DelegateSignature
	 */
	struct USIGIS_Options_C_BndEvt__MM_GenericTabBtn_Video_K2Node_ComponentBoundEvent_6_ButtonHasBeenPressed__DelegateSignature_Params
	{
	public:
		class FString                                              WhatPressed;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_Options.SIGIS_Options_C.BndEvt__MM_GenericTabBtn_Audio_K2Node_ComponentBoundEvent_7_ButtonHasBeenPressed__DelegateSignature
	 */
	struct USIGIS_Options_C_BndEvt__MM_GenericTabBtn_Audio_K2Node_ComponentBoundEvent_7_ButtonHasBeenPressed__DelegateSignature_Params
	{
	public:
		class FString                                              WhatPressed;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_Options.SIGIS_Options_C.BndEvt__MM_GenericTabBtn_Controls_K2Node_ComponentBoundEvent_8_ButtonHasBeenPressed__DelegateSignature
	 */
	struct USIGIS_Options_C_BndEvt__MM_GenericTabBtn_Controls_K2Node_ComponentBoundEvent_8_ButtonHasBeenPressed__DelegateSignature_Params
	{
	public:
		class FString                                              WhatPressed;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_Options.SIGIS_Options_C.BndEvt__MM_GenericTabBtn_Gameplay_K2Node_ComponentBoundEvent_9_ButtonHasBeenPressed__DelegateSignature
	 */
	struct USIGIS_Options_C_BndEvt__MM_GenericTabBtn_Gameplay_K2Node_ComponentBoundEvent_9_ButtonHasBeenPressed__DelegateSignature_Params
	{
	public:
		class FString                                              WhatPressed;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_Options.SIGIS_Options_C.ExecuteUbergraph_SIGIS_Options
	 */
	struct USIGIS_Options_C_ExecuteUbergraph_SIGIS_Options_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JOKB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_Options.SIGIS_Options_C.ShowSettings__DelegateSignature
	 */
	struct USIGIS_Options_C_ShowSettings__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Options.SIGIS_Options_C.SwitchToOptions__DelegateSignature
	 */
	struct USIGIS_Options_C_SwitchToOptions__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
