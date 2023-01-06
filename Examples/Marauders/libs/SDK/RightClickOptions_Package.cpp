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
	 * 		Name   -> Function RightClickOptions.RightClickOptions_C.Run Reason Cant Rename
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        WarningMessage                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class USoundBase*                                  Sound                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidgetAnimation*                            InAnimation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URightClickOptions_C::Run_Reason_Cant_Rename(const class FText& WarningMessage, class USoundBase* Sound, class UWidgetAnimation* InAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RightClickOptions.RightClickOptions_C.Run Reason Cant Rename");
		
		URightClickOptions_C_Run_Reason_Cant_Rename_Params params {};
		params.WarningMessage = WarningMessage;
		params.Sound = Sound;
		params.InAnimation = InAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RightClickOptions.RightClickOptions_C.GetButtonTextForInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ButtonNumber                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextBlock*                                  ReturnField                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URightClickOptions_C::GetButtonTextForInt(int32_t ButtonNumber, class UTextBlock** ReturnField)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RightClickOptions.RightClickOptions_C.GetButtonTextForInt");
		
		URightClickOptions_C_GetButtonTextForInt_Params params {};
		params.ButtonNumber = ButtonNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnField != nullptr)
			*ReturnField = params.ReturnField;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RightClickOptions.RightClickOptions_C.GetButtonForIntAndSetOption
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ButtonNumber                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemOptions                                       OptionIn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UButton*                                     Button                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URightClickOptions_C::GetButtonForIntAndSetOption(int32_t ButtonNumber, EItemOptions OptionIn, class UButton** Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RightClickOptions.RightClickOptions_C.GetButtonForIntAndSetOption");
		
		URightClickOptions_C_GetButtonForIntAndSetOption_Params params {};
		params.ButtonNumber = ButtonNumber;
		params.OptionIn = OptionIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Button != nullptr)
			*Button = params.Button;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RightClickOptions.RightClickOptions_C.Force_RightClickOptionsClose
	 * 		Flags  -> ()
	 */
	void URightClickOptions_C::Force_RightClickOptionsClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RightClickOptions.RightClickOptions_C.Force_RightClickOptionsClose");
		
		URightClickOptions_C_Force_RightClickOptionsClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RightClickOptions.RightClickOptions_C.BndEvt__MM_GenericSmallBtn01_GoBack_Crew_PasswordScreen_K2Node_ComponentBoundEvent_9_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URightClickOptions_C::BndEvt__MM_GenericSmallBtn01_GoBack_Crew_PasswordScreen_K2Node_ComponentBoundEvent_9_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RightClickOptions.RightClickOptions_C.BndEvt__MM_GenericSmallBtn01_GoBack_Crew_PasswordScreen_K2Node_ComponentBoundEvent_9_GenericSmallBtnPressed__DelegateSignature");
		
		URightClickOptions_C_BndEvt__MM_GenericSmallBtn01_GoBack_Crew_PasswordScreen_K2Node_ComponentBoundEvent_9_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RightClickOptions.RightClickOptions_C.BndEvt__RightClickOptions_MM_GenericSmallBtn01_GoBack_Tooltip_1_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URightClickOptions_C::BndEvt__RightClickOptions_MM_GenericSmallBtn01_GoBack_Tooltip_1_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RightClickOptions.RightClickOptions_C.BndEvt__RightClickOptions_MM_GenericSmallBtn01_GoBack_Tooltip_1_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature");
		
		URightClickOptions_C_BndEvt__RightClickOptions_MM_GenericSmallBtn01_GoBack_Tooltip_1_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RightClickOptions.RightClickOptions_C.ForceOption03_Unselected
	 * 		Flags  -> ()
	 */
	void URightClickOptions_C::ForceOption03_Unselected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RightClickOptions.RightClickOptions_C.ForceOption03_Unselected");
		
		URightClickOptions_C_ForceOption03_Unselected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RightClickOptions.RightClickOptions_C.OnRightClickOpen
	 * 		Flags  -> ()
	 */
	void URightClickOptions_C::OnRightClickOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RightClickOptions.RightClickOptions_C.OnRightClickOpen");
		
		URightClickOptions_C_OnRightClickOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RightClickOptions.RightClickOptions_C.BndEvt__RightClickOptions_Option5BTN_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URightClickOptions_C::BndEvt__RightClickOptions_Option5BTN_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RightClickOptions.RightClickOptions_C.BndEvt__RightClickOptions_Option5BTN_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");
		
		URightClickOptions_C_BndEvt__RightClickOptions_Option5BTN_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RightClickOptions.RightClickOptions_C.BndEvt__RightClickOptions_Option5BTN_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URightClickOptions_C::BndEvt__RightClickOptions_Option5BTN_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RightClickOptions.RightClickOptions_C.BndEvt__RightClickOptions_Option5BTN_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature");
		
		URightClickOptions_C_BndEvt__RightClickOptions_Option5BTN_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RightClickOptions.RightClickOptions_C.ForceOption05_Unselected
	 * 		Flags  -> ()
	 */
	void URightClickOptions_C::ForceOption05_Unselected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RightClickOptions.RightClickOptions_C.ForceOption05_Unselected");
		
		URightClickOptions_C_ForceOption05_Unselected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RightClickOptions.RightClickOptions_C.ForceOption02_Unselected
	 * 		Flags  -> ()
	 */
	void URightClickOptions_C::ForceOption02_Unselected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RightClickOptions.RightClickOptions_C.ForceOption02_Unselected");
		
		URightClickOptions_C_ForceOption02_Unselected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RightClickOptions.RightClickOptions_C.BndEvt__RightClickOptions_Option2BTN_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URightClickOptions_C::BndEvt__RightClickOptions_Option2BTN_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RightClickOptions.RightClickOptions_C.BndEvt__RightClickOptions_Option2BTN_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature");
		
		URightClickOptions_C_BndEvt__RightClickOptions_Option2BTN_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RightClickOptions.RightClickOptions_C.BndEvt__RightClickOptions_Option1BTN_K2Node_ComponentBoundEvent_17_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URightClickOptions_C::BndEvt__RightClickOptions_Option1BTN_K2Node_ComponentBoundEvent_17_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RightClickOptions.RightClickOptions_C.BndEvt__RightClickOptions_Option1BTN_K2Node_ComponentBoundEvent_17_OnButtonPressedEvent__DelegateSignature");
		
		URightClickOptions_C_BndEvt__RightClickOptions_Option1BTN_K2Node_ComponentBoundEvent_17_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RightClickOptions.RightClickOptions_C.BndEvt__RightClickOptions_Option3BTN_K2Node_ComponentBoundEvent_18_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URightClickOptions_C::BndEvt__RightClickOptions_Option3BTN_K2Node_ComponentBoundEvent_18_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RightClickOptions.RightClickOptions_C.BndEvt__RightClickOptions_Option3BTN_K2Node_ComponentBoundEvent_18_OnButtonPressedEvent__DelegateSignature");
		
		URightClickOptions_C_BndEvt__RightClickOptions_Option3BTN_K2Node_ComponentBoundEvent_18_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RightClickOptions.RightClickOptions_C.BndEvt__RightClickOptions_Option4BTN_K2Node_ComponentBoundEvent_19_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URightClickOptions_C::BndEvt__RightClickOptions_Option4BTN_K2Node_ComponentBoundEvent_19_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RightClickOptions.RightClickOptions_C.BndEvt__RightClickOptions_Option4BTN_K2Node_ComponentBoundEvent_19_OnButtonPressedEvent__DelegateSignature");
		
		URightClickOptions_C_BndEvt__RightClickOptions_Option4BTN_K2Node_ComponentBoundEvent_19_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RightClickOptions.RightClickOptions_C.SetButtonOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemOptions                                       OptionToSet                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URightClickOptions_C::SetButtonOptions(int32_t Button, EItemOptions OptionToSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RightClickOptions.RightClickOptions_C.SetButtonOptions");
		
		URightClickOptions_C_SetButtonOptions_Params params {};
		params.Button = Button;
		params.OptionToSet = OptionToSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RightClickOptions.RightClickOptions_C.BndEvt__Option4BTN_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URightClickOptions_C::BndEvt__Option4BTN_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RightClickOptions.RightClickOptions_C.BndEvt__Option4BTN_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");
		
		URightClickOptions_C_BndEvt__Option4BTN_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RightClickOptions.RightClickOptions_C.BndEvt__Option4BTN_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URightClickOptions_C::BndEvt__Option4BTN_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RightClickOptions.RightClickOptions_C.BndEvt__Option4BTN_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");
		
		URightClickOptions_C_BndEvt__Option4BTN_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RightClickOptions.RightClickOptions_C.BndEvt__Option3BTN_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URightClickOptions_C::BndEvt__Option3BTN_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RightClickOptions.RightClickOptions_C.BndEvt__Option3BTN_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");
		
		URightClickOptions_C_BndEvt__Option3BTN_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RightClickOptions.RightClickOptions_C.BndEvt__Option3BTN_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URightClickOptions_C::BndEvt__Option3BTN_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RightClickOptions.RightClickOptions_C.BndEvt__Option3BTN_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");
		
		URightClickOptions_C_BndEvt__Option3BTN_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RightClickOptions.RightClickOptions_C.BndEvt__Option2BTN_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URightClickOptions_C::BndEvt__Option2BTN_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RightClickOptions.RightClickOptions_C.BndEvt__Option2BTN_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");
		
		URightClickOptions_C_BndEvt__Option2BTN_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RightClickOptions.RightClickOptions_C.BndEvt__Option2BTN_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URightClickOptions_C::BndEvt__Option2BTN_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RightClickOptions.RightClickOptions_C.BndEvt__Option2BTN_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		URightClickOptions_C_BndEvt__Option2BTN_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RightClickOptions.RightClickOptions_C.BndEvt__RightClickOptions_MM_GenericSmallBtn01_GoBack_Tooltip_2_K2Node_ComponentBoundEvent_21_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URightClickOptions_C::BndEvt__RightClickOptions_MM_GenericSmallBtn01_GoBack_Tooltip_2_K2Node_ComponentBoundEvent_21_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RightClickOptions.RightClickOptions_C.BndEvt__RightClickOptions_MM_GenericSmallBtn01_GoBack_Tooltip_2_K2Node_ComponentBoundEvent_21_GenericSmallBtnPressed__DelegateSignature");
		
		URightClickOptions_C_BndEvt__RightClickOptions_MM_GenericSmallBtn01_GoBack_Tooltip_2_K2Node_ComponentBoundEvent_21_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RightClickOptions.RightClickOptions_C.SetOptionArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<EItemOptions>                               SentItems                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void URightClickOptions_C::SetOptionArray(TArray<EItemOptions> SentItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RightClickOptions.RightClickOptions_C.SetOptionArray");
		
		URightClickOptions_C_SetOptionArray_Params params {};
		params.SentItems = SentItems;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RightClickOptions.RightClickOptions_C.ForceOption04_Unselected
	 * 		Flags  -> ()
	 */
	void URightClickOptions_C::ForceOption04_Unselected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RightClickOptions.RightClickOptions_C.ForceOption04_Unselected");
		
		URightClickOptions_C_ForceOption04_Unselected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RightClickOptions.RightClickOptions_C.ForceOption01_Unselected
	 * 		Flags  -> ()
	 */
	void URightClickOptions_C::ForceOption01_Unselected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RightClickOptions.RightClickOptions_C.ForceOption01_Unselected");
		
		URightClickOptions_C_ForceOption01_Unselected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RightClickOptions.RightClickOptions_C.Construct
	 * 		Flags  -> ()
	 */
	void URightClickOptions_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RightClickOptions.RightClickOptions_C.Construct");
		
		URightClickOptions_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RightClickOptions.RightClickOptions_C.RightClickButtonHasBeenPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemOptions                                       WhichOptionPressed                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URightClickOptions_C::RightClickButtonHasBeenPressed(EItemOptions WhichOptionPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RightClickOptions.RightClickOptions_C.RightClickButtonHasBeenPressed");
		
		URightClickOptions_C_RightClickButtonHasBeenPressed_Params params {};
		params.WhichOptionPressed = WhichOptionPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RightClickOptions.RightClickOptions_C.BndEvt__Option1BTN_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URightClickOptions_C::BndEvt__Option1BTN_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RightClickOptions.RightClickOptions_C.BndEvt__Option1BTN_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		URightClickOptions_C_BndEvt__Option1BTN_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RightClickOptions.RightClickOptions_C.ShowHideNameStorageElement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URightClickOptions_C::ShowHideNameStorageElement(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RightClickOptions.RightClickOptions_C.ShowHideNameStorageElement");
		
		URightClickOptions_C_ShowHideNameStorageElement_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RightClickOptions.RightClickOptions_C.BndEvt__RightClickOptions_EditableTextBox_NewContainerNameToUse_K2Node_ComponentBoundEvent_11_OnEditableTextBoxChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void URightClickOptions_C::BndEvt__RightClickOptions_EditableTextBox_NewContainerNameToUse_K2Node_ComponentBoundEvent_11_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RightClickOptions.RightClickOptions_C.BndEvt__RightClickOptions_EditableTextBox_NewContainerNameToUse_K2Node_ComponentBoundEvent_11_OnEditableTextBoxChangedEvent__DelegateSignature");
		
		URightClickOptions_C_BndEvt__RightClickOptions_EditableTextBox_NewContainerNameToUse_K2Node_ComponentBoundEvent_11_OnEditableTextBoxChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RightClickOptions.RightClickOptions_C.BndEvt__Option1BTN_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URightClickOptions_C::BndEvt__Option1BTN_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RightClickOptions.RightClickOptions_C.BndEvt__Option1BTN_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		URightClickOptions_C_BndEvt__Option1BTN_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RightClickOptions.RightClickOptions_C.BndEvt__RightClickOptions_RightClickBtn_SubWidget_1_K2Node_ComponentBoundEvent_13_ED_RightClickOptionPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemOptions                                       WhichOptionPressed                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URightClickOptions_C::BndEvt__RightClickOptions_RightClickBtn_SubWidget_1_K2Node_ComponentBoundEvent_13_ED_RightClickOptionPressed__DelegateSignature(EItemOptions WhichOptionPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RightClickOptions.RightClickOptions_C.BndEvt__RightClickOptions_RightClickBtn_SubWidget_1_K2Node_ComponentBoundEvent_13_ED_RightClickOptionPressed__DelegateSignature");
		
		URightClickOptions_C_BndEvt__RightClickOptions_RightClickBtn_SubWidget_1_K2Node_ComponentBoundEvent_13_ED_RightClickOptionPressed__DelegateSignature_Params params {};
		params.WhichOptionPressed = WhichOptionPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RightClickOptions.RightClickOptions_C.BndEvt__RightClickOptions_RightClickBtn_SubWidget_2_K2Node_ComponentBoundEvent_14_ED_RightClickOptionPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemOptions                                       WhichOptionPressed                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URightClickOptions_C::BndEvt__RightClickOptions_RightClickBtn_SubWidget_2_K2Node_ComponentBoundEvent_14_ED_RightClickOptionPressed__DelegateSignature(EItemOptions WhichOptionPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RightClickOptions.RightClickOptions_C.BndEvt__RightClickOptions_RightClickBtn_SubWidget_2_K2Node_ComponentBoundEvent_14_ED_RightClickOptionPressed__DelegateSignature");
		
		URightClickOptions_C_BndEvt__RightClickOptions_RightClickBtn_SubWidget_2_K2Node_ComponentBoundEvent_14_ED_RightClickOptionPressed__DelegateSignature_Params params {};
		params.WhichOptionPressed = WhichOptionPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RightClickOptions.RightClickOptions_C.BndEvt__RightClickOptions_EditableTextBox_NewContainerNameToUse_K2Node_ComponentBoundEvent_20_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URightClickOptions_C::BndEvt__RightClickOptions_EditableTextBox_NewContainerNameToUse_K2Node_ComponentBoundEvent_20_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RightClickOptions.RightClickOptions_C.BndEvt__RightClickOptions_EditableTextBox_NewContainerNameToUse_K2Node_ComponentBoundEvent_20_OnEditableTextBoxCommittedEvent__DelegateSignature");
		
		URightClickOptions_C_BndEvt__RightClickOptions_EditableTextBox_NewContainerNameToUse_K2Node_ComponentBoundEvent_20_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RightClickOptions.RightClickOptions_C.BndEvt__RightClickOptions_Btn_DevRandoDamagae_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URightClickOptions_C::BndEvt__RightClickOptions_Btn_DevRandoDamagae_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RightClickOptions.RightClickOptions_C.BndEvt__RightClickOptions_Btn_DevRandoDamagae_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature");
		
		URightClickOptions_C_BndEvt__RightClickOptions_Btn_DevRandoDamagae_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RightClickOptions.RightClickOptions_C.ExecuteUbergraph_RightClickOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URightClickOptions_C::ExecuteUbergraph_RightClickOptions(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RightClickOptions.RightClickOptions_C.ExecuteUbergraph_RightClickOptions");
		
		URightClickOptions_C_ExecuteUbergraph_RightClickOptions_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URightClickOptions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URightClickOptions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RightClickOptions.RightClickOptions_C");
		return ptr;
	}

}


