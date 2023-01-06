/**
 * Name: RaidGame
 * Version: 1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.ShowSettingsMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_Exit_Widget_C::ShowSettingsMenu(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.ShowSettingsMenu");
		
		USIGIS_Exit_Widget_C_ShowSettingsMenu_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.ShowAreYouSureWarning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_Exit_Widget_C::ShowAreYouSureWarning(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.ShowAreYouSureWarning");
		
		USIGIS_Exit_Widget_C_ShowAreYouSureWarning_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.OnPreviewKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply USIGIS_Exit_Widget_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.OnPreviewKeyDown");
		
		USIGIS_Exit_Widget_C_OnPreviewKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.Construct
	 * 		Flags  -> ()
	 */
	void USIGIS_Exit_Widget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.Construct");
		
		USIGIS_Exit_Widget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.ExitMenu_Open
	 * 		Flags  -> ()
	 */
	void USIGIS_Exit_Widget_C::ExitMenu_Open()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.ExitMenu_Open");
		
		USIGIS_Exit_Widget_C_ExitMenu_Open_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.CloseTheMenu
	 * 		Flags  -> ()
	 */
	void USIGIS_Exit_Widget_C::CloseTheMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.CloseTheMenu");
		
		USIGIS_Exit_Widget_C_CloseTheMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.ShowSettings
	 * 		Flags  -> ()
	 */
	void USIGIS_Exit_Widget_C::ShowSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.ShowSettings");
		
		USIGIS_Exit_Widget_C_ShowSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.BndEvt__MM_GenericSmallBtn_Resume_K2Node_ComponentBoundEvent_9_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Exit_Widget_C::BndEvt__MM_GenericSmallBtn_Resume_K2Node_ComponentBoundEvent_9_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.BndEvt__MM_GenericSmallBtn_Resume_K2Node_ComponentBoundEvent_9_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_Exit_Widget_C_BndEvt__MM_GenericSmallBtn_Resume_K2Node_ComponentBoundEvent_9_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.BndEvt__MM_GenericSmallBtn_Settings_K2Node_ComponentBoundEvent_10_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Exit_Widget_C::BndEvt__MM_GenericSmallBtn_Settings_K2Node_ComponentBoundEvent_10_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.BndEvt__MM_GenericSmallBtn_Settings_K2Node_ComponentBoundEvent_10_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_Exit_Widget_C_BndEvt__MM_GenericSmallBtn_Settings_K2Node_ComponentBoundEvent_10_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.BndEvt__MM_GenericSmallBtn_MainMenu_K2Node_ComponentBoundEvent_11_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Exit_Widget_C::BndEvt__MM_GenericSmallBtn_MainMenu_K2Node_ComponentBoundEvent_11_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.BndEvt__MM_GenericSmallBtn_MainMenu_K2Node_ComponentBoundEvent_11_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_Exit_Widget_C_BndEvt__MM_GenericSmallBtn_MainMenu_K2Node_ComponentBoundEvent_11_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.BndEvt__MM_GenericSmallBtn_BackBtn_K2Node_ComponentBoundEvent_12_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Exit_Widget_C::BndEvt__MM_GenericSmallBtn_BackBtn_K2Node_ComponentBoundEvent_12_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.BndEvt__MM_GenericSmallBtn_BackBtn_K2Node_ComponentBoundEvent_12_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_Exit_Widget_C_BndEvt__MM_GenericSmallBtn_BackBtn_K2Node_ComponentBoundEvent_12_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.BndEvt__MM_GenericSmallBtn01_1_K2Node_ComponentBoundEvent_13_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Exit_Widget_C::BndEvt__MM_GenericSmallBtn01_1_K2Node_ComponentBoundEvent_13_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.BndEvt__MM_GenericSmallBtn01_1_K2Node_ComponentBoundEvent_13_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_Exit_Widget_C_BndEvt__MM_GenericSmallBtn01_1_K2Node_ComponentBoundEvent_13_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.BndEvt__MM_GenericSmallBtn_Cancel_K2Node_ComponentBoundEvent_14_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Exit_Widget_C::BndEvt__MM_GenericSmallBtn_Cancel_K2Node_ComponentBoundEvent_14_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.BndEvt__MM_GenericSmallBtn_Cancel_K2Node_ComponentBoundEvent_14_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_Exit_Widget_C_BndEvt__MM_GenericSmallBtn_Cancel_K2Node_ComponentBoundEvent_14_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.BndEvt__MM_GenericSmallBtn_BugReports_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Exit_Widget_C::BndEvt__MM_GenericSmallBtn_BugReports_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.BndEvt__MM_GenericSmallBtn_BugReports_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_Exit_Widget_C_BndEvt__MM_GenericSmallBtn_BugReports_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.CloseBugMenu
	 * 		Flags  -> ()
	 */
	void USIGIS_Exit_Widget_C::CloseBugMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.CloseBugMenu");
		
		USIGIS_Exit_Widget_C_CloseBugMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.BndEvt__SIGIS_Exit_Widget_Btn_ENG_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Exit_Widget_C::BndEvt__SIGIS_Exit_Widget_Btn_ENG_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.BndEvt__SIGIS_Exit_Widget_Btn_ENG_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_Exit_Widget_C_BndEvt__SIGIS_Exit_Widget_Btn_ENG_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.BndEvt__SIGIS_Exit_Widget_Btn_FR_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Exit_Widget_C::BndEvt__SIGIS_Exit_Widget_Btn_FR_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.BndEvt__SIGIS_Exit_Widget_Btn_FR_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_Exit_Widget_C_BndEvt__SIGIS_Exit_Widget_Btn_FR_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.BndEvt__SIGIS_Exit_Widget_Btn_POL_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Exit_Widget_C::BndEvt__SIGIS_Exit_Widget_Btn_POL_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.BndEvt__SIGIS_Exit_Widget_Btn_POL_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_Exit_Widget_C_BndEvt__SIGIS_Exit_Widget_Btn_POL_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.BndEvt__SIGIS_Exit_Widget_Btn_DebugStartMission_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Exit_Widget_C::BndEvt__SIGIS_Exit_Widget_Btn_DebugStartMission_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.BndEvt__SIGIS_Exit_Widget_Btn_DebugStartMission_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_Exit_Widget_C_BndEvt__SIGIS_Exit_Widget_Btn_DebugStartMission_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.BndEvt__SIGIS_Exit_Widget_Btn_DebugIncrementMission_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Exit_Widget_C::BndEvt__SIGIS_Exit_Widget_Btn_DebugIncrementMission_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.BndEvt__SIGIS_Exit_Widget_Btn_DebugIncrementMission_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_Exit_Widget_C_BndEvt__SIGIS_Exit_Widget_Btn_DebugIncrementMission_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.BndEvt__SIGIS_Exit_Widget_Btn_DebugClearMissions_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Exit_Widget_C::BndEvt__SIGIS_Exit_Widget_Btn_DebugClearMissions_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.BndEvt__SIGIS_Exit_Widget_Btn_DebugClearMissions_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_Exit_Widget_C_BndEvt__SIGIS_Exit_Widget_Btn_DebugClearMissions_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.BndEvt__SIGIS_Exit_Widget_Button_0_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Exit_Widget_C::BndEvt__SIGIS_Exit_Widget_Button_0_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.BndEvt__SIGIS_Exit_Widget_Button_0_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_Exit_Widget_C_BndEvt__SIGIS_Exit_Widget_Button_0_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.BndEvt__SIGIS_Exit_Widget_MM_GenericSmallBtn_Settings_1_K2Node_ComponentBoundEvent_8_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Exit_Widget_C::BndEvt__SIGIS_Exit_Widget_MM_GenericSmallBtn_Settings_1_K2Node_ComponentBoundEvent_8_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.BndEvt__SIGIS_Exit_Widget_MM_GenericSmallBtn_Settings_1_K2Node_ComponentBoundEvent_8_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_Exit_Widget_C_BndEvt__SIGIS_Exit_Widget_MM_GenericSmallBtn_Settings_1_K2Node_ComponentBoundEvent_8_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.ClosedTheGuideMenu
	 * 		Flags  -> ()
	 */
	void USIGIS_Exit_Widget_C::ClosedTheGuideMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.ClosedTheGuideMenu");
		
		USIGIS_Exit_Widget_C_ClosedTheGuideMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.BndEvt__SIGIS_Exit_Widget_Btn_DevDebug_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Exit_Widget_C::BndEvt__SIGIS_Exit_Widget_Btn_DevDebug_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.BndEvt__SIGIS_Exit_Widget_Btn_DevDebug_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_Exit_Widget_C_BndEvt__SIGIS_Exit_Widget_Btn_DevDebug_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.ExecuteUbergraph_SIGIS_Exit_Widget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_Exit_Widget_C::ExecuteUbergraph_SIGIS_Exit_Widget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Exit_Widget.SIGIS_Exit_Widget_C.ExecuteUbergraph_SIGIS_Exit_Widget");
		
		USIGIS_Exit_Widget_C_ExecuteUbergraph_SIGIS_Exit_Widget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGIS_Exit_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGIS_Exit_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SIGIS_Exit_Widget.SIGIS_Exit_Widget_C");
		return ptr;
	}

}


