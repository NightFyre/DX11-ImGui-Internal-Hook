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
	 * 		Name   -> Function WB_PauseMenu.WB_PauseMenu_C.RemoveChildren
	 * 		Flags  -> ()
	 */
	void UWB_PauseMenu_C::RemoveChildren()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.RemoveChildren");
		
		UWB_PauseMenu_C_RemoveChildren_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_PauseMenu.WB_PauseMenu_C.SetOptionButtonFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWB_SettingsButton01_C*                      Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_PauseMenu_C::SetOptionButtonFocus(class UWB_SettingsButton01_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.SetOptionButtonFocus");
		
		UWB_PauseMenu_C_SetOptionButtonFocus_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_PauseMenu.WB_PauseMenu_C.OnPreviewKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UWB_PauseMenu_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.OnPreviewKeyDown");
		
		UWB_PauseMenu_C_OnPreviewKeyDown_Params params {};
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
	 * 		Name   -> Function WB_PauseMenu.WB_PauseMenu_C.SetTabButtonFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWB_TabButton01_C*                           Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_PauseMenu_C::SetTabButtonFocus(class UWB_TabButton01_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.SetTabButtonFocus");
		
		UWB_PauseMenu_C_SetTabButtonFocus_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_PauseMenu.WB_PauseMenu_C.GetOptionButtons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UWB_SettingsButton01_C*>              Array                                                      (Parm, OutParm, ContainsInstancedReference)
	 */
	void UWB_PauseMenu_C::GetOptionButtons(TArray<class UWB_SettingsButton01_C*>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.GetOptionButtons");
		
		UWB_PauseMenu_C_GetOptionButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_PauseMenu.WB_PauseMenu_C.SetCurrentOptionButtonFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWB_SettingsButton01_C*                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_PauseMenu_C::SetCurrentOptionButtonFocus(class UWB_SettingsButton01_C* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.SetCurrentOptionButtonFocus");
		
		UWB_PauseMenu_C_SetCurrentOptionButtonFocus_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_PauseMenu.WB_PauseMenu_C.GetOnMouseEntered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               MouseEntered                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWB_PauseMenu_C::GetOnMouseEntered(bool* MouseEntered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.GetOnMouseEntered");
		
		UWB_PauseMenu_C_GetOnMouseEntered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MouseEntered != nullptr)
			*MouseEntered = params.MouseEntered;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_PauseMenu.WB_PauseMenu_C.SetWidgetIndex_Global
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_PauseMenu_C::SetWidgetIndex_Global(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.SetWidgetIndex_Global");
		
		UWB_PauseMenu_C_SetWidgetIndex_Global_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_PauseMenu.WB_PauseMenu_C.SetWidgetIndex_Tabs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_PauseMenu_C::SetWidgetIndex_Tabs(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.SetWidgetIndex_Tabs");
		
		UWB_PauseMenu_C_SetWidgetIndex_Tabs_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Gameplay_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWB_PauseMenu_C::BndEvt__Button_Gameplay_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Gameplay_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");
		
		UWB_PauseMenu_C_BndEvt__Button_Gameplay_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Controls_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWB_PauseMenu_C::BndEvt__Button_Controls_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Controls_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");
		
		UWB_PauseMenu_C_BndEvt__Button_Controls_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Video_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWB_PauseMenu_C::BndEvt__Button_Video_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Video_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");
		
		UWB_PauseMenu_C_BndEvt__Button_Video_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Audio_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWB_PauseMenu_C::BndEvt__Button_Audio_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Audio_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");
		
		UWB_PauseMenu_C_BndEvt__Button_Audio_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_PauseMenu.WB_PauseMenu_C.OnSwitchBackFromChild
	 * 		Flags  -> ()
	 */
	void UWB_PauseMenu_C::OnSwitchBackFromChild()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.OnSwitchBackFromChild");
		
		UWB_PauseMenu_C_OnSwitchBackFromChild_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_PauseMenu.WB_PauseMenu_C.OnInputSwitched
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInputType                                         InputType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_PauseMenu_C::OnInputSwitched(EInputType InputType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.OnInputSwitched");
		
		UWB_PauseMenu_C_OnInputSwitched_Params params {};
		params.InputType = InputType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_PauseMenu.WB_PauseMenu_C.SetGamepadAppearance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWB_PauseMenu_C::SetGamepadAppearance(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.SetGamepadAppearance");
		
		UWB_PauseMenu_C_SetGamepadAppearance_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_PauseMenu.WB_PauseMenu_C.CheckMouseEntered
	 * 		Flags  -> ()
	 */
	void UWB_PauseMenu_C::CheckMouseEntered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.CheckMouseEntered");
		
		UWB_PauseMenu_C_CheckMouseEntered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Quit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWB_PauseMenu_C::BndEvt__Button_Quit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Quit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UWB_PauseMenu_C_BndEvt__Button_Quit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_PauseMenu.WB_PauseMenu_C.OnConfirmQuit
	 * 		Flags  -> ()
	 */
	void UWB_PauseMenu_C::OnConfirmQuit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.OnConfirmQuit");
		
		UWB_PauseMenu_C_OnConfirmQuit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_PauseMenu.WB_PauseMenu_C.ClickQuit
	 * 		Flags  -> ()
	 */
	void UWB_PauseMenu_C::ClickQuit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.ClickQuit");
		
		UWB_PauseMenu_C_ClickQuit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_PauseMenu.WB_PauseMenu_C.OnCancelQuit
	 * 		Flags  -> ()
	 */
	void UWB_PauseMenu_C::OnCancelQuit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.OnCancelQuit");
		
		UWB_PauseMenu_C_OnCancelQuit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_PauseMenu.WB_PauseMenu_C.SetCurrentFocus
	 * 		Flags  -> ()
	 */
	void UWB_PauseMenu_C::SetCurrentFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.SetCurrentFocus");
		
		UWB_PauseMenu_C_SetCurrentFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_PauseMenu.WB_PauseMenu_C.RemoveWidget
	 * 		Flags  -> ()
	 */
	void UWB_PauseMenu_C::RemoveWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.RemoveWidget");
		
		UWB_PauseMenu_C_RemoveWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_PauseMenu.WB_PauseMenu_C.ActivateWidget
	 * 		Flags  -> ()
	 */
	void UWB_PauseMenu_C::ActivateWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.ActivateWidget");
		
		UWB_PauseMenu_C_ActivateWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Resume_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWB_PauseMenu_C::BndEvt__Button_Resume_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Resume_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UWB_PauseMenu_C_BndEvt__Button_Resume_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Settings_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWB_PauseMenu_C::BndEvt__Button_Settings_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Settings_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UWB_PauseMenu_C_BndEvt__Button_Settings_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWB_PauseMenu_C::BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UWB_PauseMenu_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_PauseMenu.WB_PauseMenu_C.ClickBack
	 * 		Flags  -> ()
	 */
	void UWB_PauseMenu_C::ClickBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.ClickBack");
		
		UWB_PauseMenu_C_ClickBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_PauseMenu.WB_PauseMenu_C.ClickResume
	 * 		Flags  -> ()
	 */
	void UWB_PauseMenu_C::ClickResume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.ClickResume");
		
		UWB_PauseMenu_C_ClickResume_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_PauseMenu.WB_PauseMenu_C.ExecuteUbergraph_WB_PauseMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_PauseMenu_C::ExecuteUbergraph_WB_PauseMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_PauseMenu.WB_PauseMenu_C.ExecuteUbergraph_WB_PauseMenu");
		
		UWB_PauseMenu_C_ExecuteUbergraph_WB_PauseMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_PauseMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_PauseMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_PauseMenu.WB_PauseMenu_C");
		return ptr;
	}

}


