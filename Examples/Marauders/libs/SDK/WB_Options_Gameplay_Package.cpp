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
	 * 		Name   -> Function WB_Options_Gameplay.WB_Options_Gameplay_C.GetIsGamepad
	 * 		Flags  -> ()
	 */
	bool UWB_Options_Gameplay_C::GetIsGamepad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.GetIsGamepad");
		
		UWB_Options_Gameplay_C_GetIsGamepad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Gameplay.WB_Options_Gameplay_C.NavToBackButton
	 * 		Flags  -> ()
	 */
	void UWB_Options_Gameplay_C::NavToBackButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.NavToBackButton");
		
		UWB_Options_Gameplay_C_NavToBackButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Gameplay.WB_Options_Gameplay_C.NavToOptionsButtons
	 * 		Flags  -> ()
	 */
	void UWB_Options_Gameplay_C::NavToOptionsButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.NavToOptionsButtons");
		
		UWB_Options_Gameplay_C_NavToOptionsButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Gameplay.WB_Options_Gameplay_C.NavToTextButtons
	 * 		Flags  -> ()
	 */
	void UWB_Options_Gameplay_C::NavToTextButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.NavToTextButtons");
		
		UWB_Options_Gameplay_C_NavToTextButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Gameplay.WB_Options_Gameplay_C.OnPreviewKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UWB_Options_Gameplay_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.OnPreviewKeyDown");
		
		UWB_Options_Gameplay_C_OnPreviewKeyDown_Params params {};
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
	 * 		Name   -> Function WB_Options_Gameplay.WB_Options_Gameplay_C.ClickBack
	 * 		Flags  -> ()
	 */
	void UWB_Options_Gameplay_C::ClickBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.ClickBack");
		
		UWB_Options_Gameplay_C_ClickBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__Option_ShowHUD_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        StateName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StateIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Gameplay_C::BndEvt__Option_ShowHUD_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__Option_ShowHUD_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature");
		
		UWB_Options_Gameplay_C_BndEvt__Option_ShowHUD_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature_Params params {};
		params.StateName = StateName;
		params.StateIndex = StateIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__Option_GameplayOption_02_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        StateName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StateIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Gameplay_C::BndEvt__Option_GameplayOption_02_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__Option_GameplayOption_02_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature");
		
		UWB_Options_Gameplay_C_BndEvt__Option_GameplayOption_02_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature_Params params {};
		params.StateName = StateName;
		params.StateIndex = StateIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__Option_GameplayOption_03_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        StateName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StateIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Gameplay_C::BndEvt__Option_GameplayOption_03_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__Option_GameplayOption_03_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature");
		
		UWB_Options_Gameplay_C_BndEvt__Option_GameplayOption_03_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature_Params params {};
		params.StateName = StateName;
		params.StateIndex = StateIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__Option_GameplayOption_04_K2Node_ComponentBoundEvent_3_OnStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        StateName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StateIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Gameplay_C::BndEvt__Option_GameplayOption_04_K2Node_ComponentBoundEvent_3_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__Option_GameplayOption_04_K2Node_ComponentBoundEvent_3_OnStateChanged__DelegateSignature");
		
		UWB_Options_Gameplay_C_BndEvt__Option_GameplayOption_04_K2Node_ComponentBoundEvent_3_OnStateChanged__DelegateSignature_Params params {};
		params.StateName = StateName;
		params.StateIndex = StateIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__Option_GameplayOption_05_K2Node_ComponentBoundEvent_4_OnStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        StateName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StateIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Gameplay_C::BndEvt__Option_GameplayOption_05_K2Node_ComponentBoundEvent_4_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__Option_GameplayOption_05_K2Node_ComponentBoundEvent_4_OnStateChanged__DelegateSignature");
		
		UWB_Options_Gameplay_C_BndEvt__Option_GameplayOption_05_K2Node_ComponentBoundEvent_4_OnStateChanged__DelegateSignature_Params params {};
		params.StateName = StateName;
		params.StateIndex = StateIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__Option_GameplayOption_06_K2Node_ComponentBoundEvent_5_OnStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        StateName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StateIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Gameplay_C::BndEvt__Option_GameplayOption_06_K2Node_ComponentBoundEvent_5_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__Option_GameplayOption_06_K2Node_ComponentBoundEvent_5_OnStateChanged__DelegateSignature");
		
		UWB_Options_Gameplay_C_BndEvt__Option_GameplayOption_06_K2Node_ComponentBoundEvent_5_OnStateChanged__DelegateSignature_Params params {};
		params.StateName = StateName;
		params.StateIndex = StateIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__Option_GameplayOption_07_K2Node_ComponentBoundEvent_6_OnStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        StateName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StateIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Gameplay_C::BndEvt__Option_GameplayOption_07_K2Node_ComponentBoundEvent_6_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__Option_GameplayOption_07_K2Node_ComponentBoundEvent_6_OnStateChanged__DelegateSignature");
		
		UWB_Options_Gameplay_C_BndEvt__Option_GameplayOption_07_K2Node_ComponentBoundEvent_6_OnStateChanged__DelegateSignature_Params params {};
		params.StateName = StateName;
		params.StateIndex = StateIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Gameplay.WB_Options_Gameplay_C.CheckFocus
	 * 		Flags  -> ()
	 */
	void UWB_Options_Gameplay_C::CheckFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.CheckFocus");
		
		UWB_Options_Gameplay_C_CheckFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Gameplay.WB_Options_Gameplay_C.OnInputSwitched
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInputType                                         InputType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Gameplay_C::OnInputSwitched(EInputType InputType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.OnInputSwitched");
		
		UWB_Options_Gameplay_C_OnInputSwitched_Params params {};
		params.InputType = InputType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Gameplay.WB_Options_Gameplay_C.SetGamepadAppearance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWB_Options_Gameplay_C::SetGamepadAppearance(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.SetGamepadAppearance");
		
		UWB_Options_Gameplay_C_SetGamepadAppearance_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Gameplay.WB_Options_Gameplay_C.OnConfirmReset
	 * 		Flags  -> ()
	 */
	void UWB_Options_Gameplay_C::OnConfirmReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.OnConfirmReset");
		
		UWB_Options_Gameplay_C_OnConfirmReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Gameplay.WB_Options_Gameplay_C.OnCancelRequest
	 * 		Flags  -> ()
	 */
	void UWB_Options_Gameplay_C::OnCancelRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.OnCancelRequest");
		
		UWB_Options_Gameplay_C_OnCancelRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Gameplay.WB_Options_Gameplay_C.SetDefaultValues
	 * 		Flags  -> ()
	 */
	void UWB_Options_Gameplay_C::SetDefaultValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.SetDefaultValues");
		
		UWB_Options_Gameplay_C_SetDefaultValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__MM_GenericBtn_Audio_ResetToDefault_K2Node_ComponentBoundEvent_7_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWB_Options_Gameplay_C::BndEvt__MM_GenericBtn_Audio_ResetToDefault_K2Node_ComponentBoundEvent_7_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__MM_GenericBtn_Audio_ResetToDefault_K2Node_ComponentBoundEvent_7_GenericSmallBtnPressed__DelegateSignature");
		
		UWB_Options_Gameplay_C_BndEvt__MM_GenericBtn_Audio_ResetToDefault_K2Node_ComponentBoundEvent_7_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__WB_Options_Gameplay_ComboBoxString_280_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Gameplay_C::BndEvt__WB_Options_Gameplay_ComboBoxString_280_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.BndEvt__WB_Options_Gameplay_ComboBoxString_280_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");
		
		UWB_Options_Gameplay_C_BndEvt__WB_Options_Gameplay_ComboBoxString_280_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Gameplay.WB_Options_Gameplay_C.GAMEPLAY_OPENED
	 * 		Flags  -> ()
	 */
	void UWB_Options_Gameplay_C::GAMEPLAY_OPENED()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.GAMEPLAY_OPENED");
		
		UWB_Options_Gameplay_C_GAMEPLAY_OPENED_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Gameplay.WB_Options_Gameplay_C.ActivateWidget
	 * 		Flags  -> ()
	 */
	void UWB_Options_Gameplay_C::ActivateWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.ActivateWidget");
		
		UWB_Options_Gameplay_C_ActivateWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Gameplay.WB_Options_Gameplay_C.ExecuteUbergraph_WB_Options_Gameplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Gameplay_C::ExecuteUbergraph_WB_Options_Gameplay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.ExecuteUbergraph_WB_Options_Gameplay");
		
		UWB_Options_Gameplay_C_ExecuteUbergraph_WB_Options_Gameplay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Gameplay.WB_Options_Gameplay_C.OnClicked_Back__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWB_Options_Gameplay_C::OnClicked_Back__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Gameplay.WB_Options_Gameplay_C.OnClicked_Back__DelegateSignature");
		
		UWB_Options_Gameplay_C_OnClicked_Back__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_Options_Gameplay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_Options_Gameplay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_Options_Gameplay.WB_Options_Gameplay_C");
		return ptr;
	}

}


