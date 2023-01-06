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
	 * 		Name   -> Function SIGIS_Keypad.SIGIS_Keypad_C.Analytics_ShipKeypadResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               UsedCorrectCode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_Keypad_C::Analytics_ShipKeypadResult(bool UsedCorrectCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Keypad.SIGIS_Keypad_C.Analytics_ShipKeypadResult");
		
		USIGIS_Keypad_C_Analytics_ShipKeypadResult_Params params {};
		params.UsedCorrectCode = UsedCorrectCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Keypad.SIGIS_Keypad_C.SwitchKeypadUIState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_KeypadStates                                     SwitchTo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_Keypad_C::SwitchKeypadUIState(E_KeypadStates SwitchTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Keypad.SIGIS_Keypad_C.SwitchKeypadUIState");
		
		USIGIS_Keypad_C_SwitchKeypadUIState_Params params {};
		params.SwitchTo = SwitchTo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Keypad.SIGIS_Keypad_C.CodeFail
	 * 		Flags  -> ()
	 */
	void USIGIS_Keypad_C::CodeFail()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Keypad.SIGIS_Keypad_C.CodeFail");
		
		USIGIS_Keypad_C_CodeFail_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Keypad.SIGIS_Keypad_C.CodeSuccess
	 * 		Flags  -> ()
	 */
	void USIGIS_Keypad_C::CodeSuccess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Keypad.SIGIS_Keypad_C.CodeSuccess");
		
		USIGIS_Keypad_C_CodeSuccess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Keypad.SIGIS_Keypad_C.OnPreviewKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply USIGIS_Keypad_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Keypad.SIGIS_Keypad_C.OnPreviewKeyDown");
		
		USIGIS_Keypad_C_OnPreviewKeyDown_Params params {};
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
	 * 		Name   -> Function SIGIS_Keypad.SIGIS_Keypad_C.AdjustShipCode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Clear                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NumberAdded                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_Keypad_C::AdjustShipCode(bool Clear, int32_t NumberAdded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Keypad.SIGIS_Keypad_C.AdjustShipCode");
		
		USIGIS_Keypad_C_AdjustShipCode_Params params {};
		params.Clear = Clear;
		params.NumberAdded = NumberAdded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Keypad.SIGIS_Keypad_C.Construct
	 * 		Flags  -> ()
	 */
	void USIGIS_Keypad_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Keypad.SIGIS_Keypad_C.Construct");
		
		USIGIS_Keypad_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Keypad.SIGIS_Keypad_C.BndEvt__Btn_Pin01_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Keypad_C::BndEvt__Btn_Pin01_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Keypad.SIGIS_Keypad_C.BndEvt__Btn_Pin01_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_Keypad_C_BndEvt__Btn_Pin01_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Keypad.SIGIS_Keypad_C.BndEvt__Btn_Pin02_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Keypad_C::BndEvt__Btn_Pin02_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Keypad.SIGIS_Keypad_C.BndEvt__Btn_Pin02_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_Keypad_C_BndEvt__Btn_Pin02_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Keypad.SIGIS_Keypad_C.BndEvt__Btn_Pin03_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Keypad_C::BndEvt__Btn_Pin03_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Keypad.SIGIS_Keypad_C.BndEvt__Btn_Pin03_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_Keypad_C_BndEvt__Btn_Pin03_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Keypad.SIGIS_Keypad_C.BndEvt__Btn_Pin04_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Keypad_C::BndEvt__Btn_Pin04_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Keypad.SIGIS_Keypad_C.BndEvt__Btn_Pin04_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_Keypad_C_BndEvt__Btn_Pin04_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Keypad.SIGIS_Keypad_C.BndEvt__Btn_Pin05_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Keypad_C::BndEvt__Btn_Pin05_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Keypad.SIGIS_Keypad_C.BndEvt__Btn_Pin05_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_Keypad_C_BndEvt__Btn_Pin05_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Keypad.SIGIS_Keypad_C.BndEvt__Btn_Pin06_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Keypad_C::BndEvt__Btn_Pin06_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Keypad.SIGIS_Keypad_C.BndEvt__Btn_Pin06_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_Keypad_C_BndEvt__Btn_Pin06_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Keypad.SIGIS_Keypad_C.BndEvt__Btn_Pin07_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Keypad_C::BndEvt__Btn_Pin07_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Keypad.SIGIS_Keypad_C.BndEvt__Btn_Pin07_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_Keypad_C_BndEvt__Btn_Pin07_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Keypad.SIGIS_Keypad_C.BndEvt__Btn_Pin08_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Keypad_C::BndEvt__Btn_Pin08_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Keypad.SIGIS_Keypad_C.BndEvt__Btn_Pin08_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_Keypad_C_BndEvt__Btn_Pin08_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Keypad.SIGIS_Keypad_C.BndEvt__Btn_Pin09_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Keypad_C::BndEvt__Btn_Pin09_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Keypad.SIGIS_Keypad_C.BndEvt__Btn_Pin09_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_Keypad_C_BndEvt__Btn_Pin09_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Keypad.SIGIS_Keypad_C.BndEvt__Btn_Pin00_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Keypad_C::BndEvt__Btn_Pin00_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Keypad.SIGIS_Keypad_C.BndEvt__Btn_Pin00_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_Keypad_C_BndEvt__Btn_Pin00_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Keypad.SIGIS_Keypad_C.BndEvt__Btn_PinN_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Keypad_C::BndEvt__Btn_PinN_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Keypad.SIGIS_Keypad_C.BndEvt__Btn_PinN_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_Keypad_C_BndEvt__Btn_PinN_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Keypad.SIGIS_Keypad_C.BndEvt__Btn_PinY_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Keypad_C::BndEvt__Btn_PinY_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Keypad.SIGIS_Keypad_C.BndEvt__Btn_PinY_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_Keypad_C_BndEvt__Btn_PinY_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Keypad.SIGIS_Keypad_C.BndEvt__Btn_Close_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Keypad_C::BndEvt__Btn_Close_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Keypad.SIGIS_Keypad_C.BndEvt__Btn_Close_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_Keypad_C_BndEvt__Btn_Close_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Keypad.SIGIS_Keypad_C.CloseFromInUIKeyPress
	 * 		Flags  -> ()
	 */
	void USIGIS_Keypad_C::CloseFromInUIKeyPress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Keypad.SIGIS_Keypad_C.CloseFromInUIKeyPress");
		
		USIGIS_Keypad_C_CloseFromInUIKeyPress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Keypad.SIGIS_Keypad_C.ForceCloseWithDelay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_Keypad_C::ForceCloseWithDelay(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Keypad.SIGIS_Keypad_C.ForceCloseWithDelay");
		
		USIGIS_Keypad_C_ForceCloseWithDelay_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Keypad.SIGIS_Keypad_C.SubmitShipCode
	 * 		Flags  -> ()
	 */
	void USIGIS_Keypad_C::SubmitShipCode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Keypad.SIGIS_Keypad_C.SubmitShipCode");
		
		USIGIS_Keypad_C_SubmitShipCode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Keypad.SIGIS_Keypad_C.ExecuteUbergraph_SIGIS_Keypad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_Keypad_C::ExecuteUbergraph_SIGIS_Keypad(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Keypad.SIGIS_Keypad_C.ExecuteUbergraph_SIGIS_Keypad");
		
		USIGIS_Keypad_C_ExecuteUbergraph_SIGIS_Keypad_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGIS_Keypad_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGIS_Keypad_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SIGIS_Keypad.SIGIS_Keypad_C");
		return ptr;
	}

}


