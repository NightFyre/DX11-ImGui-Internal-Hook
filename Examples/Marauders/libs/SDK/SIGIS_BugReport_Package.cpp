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
	 * 		Name   -> Function SIGIS_BugReport.SIGIS_BugReport_C.SetSendButtonEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanUseSendBtn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_BugReport_C::SetSendButtonEnabled(bool CanUseSendBtn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_BugReport.SIGIS_BugReport_C.SetSendButtonEnabled");
		
		USIGIS_BugReport_C_SetSendButtonEnabled_Params params {};
		params.CanUseSendBtn = CanUseSendBtn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_BugReport.SIGIS_BugReport_C.SwitchToState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Ee_BugReportStates                                 WhichState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_BugReport_C::SwitchToState(Ee_BugReportStates WhichState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_BugReport.SIGIS_BugReport_C.SwitchToState");
		
		USIGIS_BugReport_C_SwitchToState_Params params {};
		params.WhichState = WhichState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_BugReport.SIGIS_BugReport_C.Construct
	 * 		Flags  -> ()
	 */
	void USIGIS_BugReport_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_BugReport.SIGIS_BugReport_C.Construct");
		
		USIGIS_BugReport_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_BugReport.SIGIS_BugReport_C.BndEvt__MM_GenericSmallBtn01_GoBack_BugReportMenu_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_BugReport_C::BndEvt__MM_GenericSmallBtn01_GoBack_BugReportMenu_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_BugReport.SIGIS_BugReport_C.BndEvt__MM_GenericSmallBtn01_GoBack_BugReportMenu_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_BugReport_C_BndEvt__MM_GenericSmallBtn01_GoBack_BugReportMenu_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_BugReport.SIGIS_BugReport_C.BndEvt__MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_BugReport_C::BndEvt__MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_BugReport.SIGIS_BugReport_C.BndEvt__MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_BugReport_C_BndEvt__MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_BugReport.SIGIS_BugReport_C.BndEvt__MM_GenericSmallBtn01_Recieved_K2Node_ComponentBoundEvent_2_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_BugReport_C::BndEvt__MM_GenericSmallBtn01_Recieved_K2Node_ComponentBoundEvent_2_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_BugReport.SIGIS_BugReport_C.BndEvt__MM_GenericSmallBtn01_Recieved_K2Node_ComponentBoundEvent_2_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_BugReport_C_BndEvt__MM_GenericSmallBtn01_Recieved_K2Node_ComponentBoundEvent_2_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_BugReport.SIGIS_BugReport_C.TicketResponse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ticketvalid                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_BugReport_C::TicketResponse(bool ticketvalid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_BugReport.SIGIS_BugReport_C.TicketResponse");
		
		USIGIS_BugReport_C_TicketResponse_Params params {};
		params.ticketvalid = ticketvalid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_BugReport.SIGIS_BugReport_C.BndEvt__MM_GenericSmallBtn01_ClosefromErrorScreen_K2Node_ComponentBoundEvent_3_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_BugReport_C::BndEvt__MM_GenericSmallBtn01_ClosefromErrorScreen_K2Node_ComponentBoundEvent_3_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_BugReport.SIGIS_BugReport_C.BndEvt__MM_GenericSmallBtn01_ClosefromErrorScreen_K2Node_ComponentBoundEvent_3_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_BugReport_C_BndEvt__MM_GenericSmallBtn01_ClosefromErrorScreen_K2Node_ComponentBoundEvent_3_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_BugReport.SIGIS_BugReport_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_BugReport_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_BugReport.SIGIS_BugReport_C.Tick");
		
		USIGIS_BugReport_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_BugReport.SIGIS_BugReport_C.BndEvt__ComboBoxString_872_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_BugReport_C::BndEvt__ComboBoxString_872_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_BugReport.SIGIS_BugReport_C.BndEvt__ComboBoxString_872_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature");
		
		USIGIS_BugReport_C_BndEvt__ComboBoxString_872_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_BugReport.SIGIS_BugReport_C.ExecuteUbergraph_SIGIS_BugReport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_BugReport_C::ExecuteUbergraph_SIGIS_BugReport(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_BugReport.SIGIS_BugReport_C.ExecuteUbergraph_SIGIS_BugReport");
		
		USIGIS_BugReport_C_ExecuteUbergraph_SIGIS_BugReport_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_BugReport.SIGIS_BugReport_C.ED_CloseBugReport__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_BugReport_C::ED_CloseBugReport__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_BugReport.SIGIS_BugReport_C.ED_CloseBugReport__DelegateSignature");
		
		USIGIS_BugReport_C_ED_CloseBugReport__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGIS_BugReport_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGIS_BugReport_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SIGIS_BugReport.SIGIS_BugReport_C");
		return ptr;
	}

}


