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
	 * 		Name   -> Function WB_Options_Controls.WB_Options_Controls_C.RecalculateByMinMax
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWB_ProgressButton_C*                        ProgressOption                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UWB_Options_Controls_C::RecalculateByMinMax(float Value, class UWB_ProgressButton_C* ProgressOption)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.RecalculateByMinMax");
		
		UWB_Options_Controls_C_RecalculateByMinMax_Params params {};
		params.Value = Value;
		params.ProgressOption = ProgressOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Controls.WB_Options_Controls_C.GetIsGamepad
	 * 		Flags  -> ()
	 */
	bool UWB_Options_Controls_C::GetIsGamepad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.GetIsGamepad");
		
		UWB_Options_Controls_C_GetIsGamepad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Controls.WB_Options_Controls_C.NavToBackButton
	 * 		Flags  -> ()
	 */
	void UWB_Options_Controls_C::NavToBackButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.NavToBackButton");
		
		UWB_Options_Controls_C_NavToBackButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Controls.WB_Options_Controls_C.NavToOptionsButtons
	 * 		Flags  -> ()
	 */
	void UWB_Options_Controls_C::NavToOptionsButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.NavToOptionsButtons");
		
		UWB_Options_Controls_C_NavToOptionsButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Controls.WB_Options_Controls_C.NavToTextButtons
	 * 		Flags  -> ()
	 */
	void UWB_Options_Controls_C::NavToTextButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.NavToTextButtons");
		
		UWB_Options_Controls_C_NavToTextButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Controls.WB_Options_Controls_C.OnPreviewKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UWB_Options_Controls_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.OnPreviewKeyDown");
		
		UWB_Options_Controls_C_OnPreviewKeyDown_Params params {};
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
	 * 		Name   -> Function WB_Options_Controls.WB_Options_Controls_C.ActivateWidget
	 * 		Flags  -> ()
	 */
	void UWB_Options_Controls_C::ActivateWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.ActivateWidget");
		
		UWB_Options_Controls_C_ActivateWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Controls.WB_Options_Controls_C.OnInputSwitched
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInputType                                         InputType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Controls_C::OnInputSwitched(EInputType InputType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.OnInputSwitched");
		
		UWB_Options_Controls_C_OnInputSwitched_Params params {};
		params.InputType = InputType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Controls.WB_Options_Controls_C.CheckFocus
	 * 		Flags  -> ()
	 */
	void UWB_Options_Controls_C::CheckFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.CheckFocus");
		
		UWB_Options_Controls_C_CheckFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Controls.WB_Options_Controls_C.ClickBack
	 * 		Flags  -> ()
	 */
	void UWB_Options_Controls_C::ClickBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.ClickBack");
		
		UWB_Options_Controls_C_ClickBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Controls.WB_Options_Controls_C.SetGamepadAppearance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWB_Options_Controls_C::SetGamepadAppearance(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.SetGamepadAppearance");
		
		UWB_Options_Controls_C_SetGamepadAppearance_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Controls.WB_Options_Controls_C.SetDefaultValues
	 * 		Flags  -> ()
	 */
	void UWB_Options_Controls_C::SetDefaultValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.SetDefaultValues");
		
		UWB_Options_Controls_C_SetDefaultValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Controls.WB_Options_Controls_C.OnConfirmReset
	 * 		Flags  -> ()
	 */
	void UWB_Options_Controls_C::OnConfirmReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.OnConfirmReset");
		
		UWB_Options_Controls_C_OnConfirmReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Controls.WB_Options_Controls_C.OnCancelRequest
	 * 		Flags  -> ()
	 */
	void UWB_Options_Controls_C::OnCancelRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.OnCancelRequest");
		
		UWB_Options_Controls_C_OnCancelRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__Option_MouseSensi_01_K2Node_ComponentBoundEvent_2_OnProgressChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Controls_C::BndEvt__Option_MouseSensi_01_K2Node_ComponentBoundEvent_2_OnProgressChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__Option_MouseSensi_01_K2Node_ComponentBoundEvent_2_OnProgressChanged__DelegateSignature");
		
		UWB_Options_Controls_C_BndEvt__Option_MouseSensi_01_K2Node_ComponentBoundEvent_2_OnProgressChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__Option_MouseSensi_02_K2Node_ComponentBoundEvent_3_OnProgressChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Controls_C::BndEvt__Option_MouseSensi_02_K2Node_ComponentBoundEvent_3_OnProgressChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__Option_MouseSensi_02_K2Node_ComponentBoundEvent_3_OnProgressChanged__DelegateSignature");
		
		UWB_Options_Controls_C_BndEvt__Option_MouseSensi_02_K2Node_ComponentBoundEvent_3_OnProgressChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__Option_MouseSensi_03_K2Node_ComponentBoundEvent_4_OnProgressChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Controls_C::BndEvt__Option_MouseSensi_03_K2Node_ComponentBoundEvent_4_OnProgressChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__Option_MouseSensi_03_K2Node_ComponentBoundEvent_4_OnProgressChanged__DelegateSignature");
		
		UWB_Options_Controls_C_BndEvt__Option_MouseSensi_03_K2Node_ComponentBoundEvent_4_OnProgressChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__Option_MouseSensi_04_K2Node_ComponentBoundEvent_5_OnProgressChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Controls_C::BndEvt__Option_MouseSensi_04_K2Node_ComponentBoundEvent_5_OnProgressChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__Option_MouseSensi_04_K2Node_ComponentBoundEvent_5_OnProgressChanged__DelegateSignature");
		
		UWB_Options_Controls_C_BndEvt__Option_MouseSensi_04_K2Node_ComponentBoundEvent_5_OnProgressChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__Option_InvertX_K2Node_ComponentBoundEvent_6_OnStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        StateName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StateIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Controls_C::BndEvt__Option_InvertX_K2Node_ComponentBoundEvent_6_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__Option_InvertX_K2Node_ComponentBoundEvent_6_OnStateChanged__DelegateSignature");
		
		UWB_Options_Controls_C_BndEvt__Option_InvertX_K2Node_ComponentBoundEvent_6_OnStateChanged__DelegateSignature_Params params {};
		params.StateName = StateName;
		params.StateIndex = StateIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__Option_InvertY_K2Node_ComponentBoundEvent_7_OnStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        StateName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StateIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Controls_C::BndEvt__Option_InvertY_K2Node_ComponentBoundEvent_7_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__Option_InvertY_K2Node_ComponentBoundEvent_7_OnStateChanged__DelegateSignature");
		
		UWB_Options_Controls_C_BndEvt__Option_InvertY_K2Node_ComponentBoundEvent_7_OnStateChanged__DelegateSignature_Params params {};
		params.StateName = StateName;
		params.StateIndex = StateIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Controls.WB_Options_Controls_C.SetupButtons
	 * 		Flags  -> ()
	 */
	void UWB_Options_Controls_C::SetupButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.SetupButtons");
		
		UWB_Options_Controls_C_SetupButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__MM_GenericBtn_ControlsExtras_ResetToDefault_K2Node_ComponentBoundEvent_8_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWB_Options_Controls_C::BndEvt__MM_GenericBtn_ControlsExtras_ResetToDefault_K2Node_ComponentBoundEvent_8_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__MM_GenericBtn_ControlsExtras_ResetToDefault_K2Node_ComponentBoundEvent_8_GenericSmallBtnPressed__DelegateSignature");
		
		UWB_Options_Controls_C_BndEvt__MM_GenericBtn_ControlsExtras_ResetToDefault_K2Node_ComponentBoundEvent_8_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__MM_GenericBtn_ControlsExtras_ResetToDefault_1_K2Node_ComponentBoundEvent_9_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWB_Options_Controls_C::BndEvt__MM_GenericBtn_ControlsExtras_ResetToDefault_1_K2Node_ComponentBoundEvent_9_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__MM_GenericBtn_ControlsExtras_ResetToDefault_1_K2Node_ComponentBoundEvent_9_GenericSmallBtnPressed__DelegateSignature");
		
		UWB_Options_Controls_C_BndEvt__MM_GenericBtn_ControlsExtras_ResetToDefault_1_K2Node_ComponentBoundEvent_9_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__WB_Options_Controls_Option_CrouchType_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        StateName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StateIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Controls_C::BndEvt__WB_Options_Controls_Option_CrouchType_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__WB_Options_Controls_Option_CrouchType_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature");
		
		UWB_Options_Controls_C_BndEvt__WB_Options_Controls_Option_CrouchType_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature_Params params {};
		params.StateName = StateName;
		params.StateIndex = StateIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__WB_Options_Controls_Option_ADSType_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        StateName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StateIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Controls_C::BndEvt__WB_Options_Controls_Option_ADSType_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.BndEvt__WB_Options_Controls_Option_ADSType_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature");
		
		UWB_Options_Controls_C_BndEvt__WB_Options_Controls_Option_ADSType_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature_Params params {};
		params.StateName = StateName;
		params.StateIndex = StateIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Controls.WB_Options_Controls_C.Return_HaveClosedTheKeybindsMenu
	 * 		Flags  -> ()
	 */
	void UWB_Options_Controls_C::Return_HaveClosedTheKeybindsMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.Return_HaveClosedTheKeybindsMenu");
		
		UWB_Options_Controls_C_Return_HaveClosedTheKeybindsMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Controls.WB_Options_Controls_C.ExecuteUbergraph_WB_Options_Controls
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Controls_C::ExecuteUbergraph_WB_Options_Controls(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.ExecuteUbergraph_WB_Options_Controls");
		
		UWB_Options_Controls_C_ExecuteUbergraph_WB_Options_Controls_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Controls.WB_Options_Controls_C.OnClicked_Back__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWB_Options_Controls_C::OnClicked_Back__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Controls.WB_Options_Controls_C.OnClicked_Back__DelegateSignature");
		
		UWB_Options_Controls_C_OnClicked_Back__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_Options_Controls_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_Options_Controls_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_Options_Controls.WB_Options_Controls_C");
		return ptr;
	}

}


