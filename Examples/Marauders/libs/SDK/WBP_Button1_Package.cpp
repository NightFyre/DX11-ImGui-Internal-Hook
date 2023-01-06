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
	 * 		Name   -> Function WBP_Button1.WBP_Button1_C.GetSelectedIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Button1_C::GetSelectedIndex(int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button1.WBP_Button1_C.GetSelectedIndex");
		
		UWBP_Button1_C_GetSelectedIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button1.WBP_Button1_C.GetNavigationAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFNavItemAction                             Action                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Button1_C::GetNavigationAction(struct FFNavItemAction* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button1.WBP_Button1_C.GetNavigationAction");
		
		UWBP_Button1_C_GetNavigationAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Action != nullptr)
			*Action = params.Action;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button1.WBP_Button1_C.GetIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SelectedIndex                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StepIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Button1_C::GetIndex(int32_t* SelectedIndex, int32_t* StepIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button1.WBP_Button1_C.GetIndex");
		
		UWBP_Button1_C_GetIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SelectedIndex != nullptr)
			*SelectedIndex = params.SelectedIndex;
		if (StepIndex != nullptr)
			*StepIndex = params.StepIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button1.WBP_Button1_C.GetEventHandler
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_navset_event_handler_C*                  Event_Handler                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Button1_C::GetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button1.WBP_Button1_C.GetEventHandler");
		
		UWBP_Button1_C_GetEventHandler_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Event_Handler != nullptr)
			*Event_Handler = params.Event_Handler;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button1.WBP_Button1_C.updateShortcutKeyDisplay
	 * 		Flags  -> ()
	 */
	void UWBP_Button1_C::updateShortcutKeyDisplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button1.WBP_Button1_C.updateShortcutKeyDisplay");
		
		UWBP_Button1_C_updateShortcutKeyDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button1.WBP_Button1_C.ChangeShortcutKeyDisplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EShortcutKeyType                                   ShortcutKeyToDisplay                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Button1_C::ChangeShortcutKeyDisplay(EShortcutKeyType ShortcutKeyToDisplay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button1.WBP_Button1_C.ChangeShortcutKeyDisplay");
		
		UWBP_Button1_C_ChangeShortcutKeyDisplay_Params params {};
		params.ShortcutKeyToDisplay = ShortcutKeyToDisplay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button1.WBP_Button1_C.UpdateButtonStyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Specified_Color                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Button1_C::UpdateButtonStyle(const struct FLinearColor& Specified_Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button1.WBP_Button1_C.UpdateButtonStyle");
		
		UWBP_Button1_C_UpdateButtonStyle_Params params {};
		params.Specified_Color = Specified_Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button1.WBP_Button1_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Button1_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button1.WBP_Button1_C.PreConstruct");
		
		UWBP_Button1_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button1.WBP_Button1_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Button1_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button1.WBP_Button1_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Button1_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button1.WBP_Button1_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Button1_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button1.WBP_Button1_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_Button1_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button1.WBP_Button1_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Button1_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button1.WBP_Button1_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_Button1_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button1.WBP_Button1_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Button1_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button1.WBP_Button1_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");
		
		UWBP_Button1_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button1.WBP_Button1_C.HoverSelect
	 * 		Flags  -> ()
	 */
	void UWBP_Button1_C::HoverSelect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button1.WBP_Button1_C.HoverSelect");
		
		UWBP_Button1_C_HoverSelect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button1.WBP_Button1_C.HoverDeselect
	 * 		Flags  -> ()
	 */
	void UWBP_Button1_C::HoverDeselect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button1.WBP_Button1_C.HoverDeselect");
		
		UWBP_Button1_C_HoverDeselect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button1.WBP_Button1_C.OnClick
	 * 		Flags  -> ()
	 */
	void UWBP_Button1_C::OnClick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button1.WBP_Button1_C.OnClick");
		
		UWBP_Button1_C_OnClick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button1.WBP_Button1_C.SetEventHandler
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_navset_event_handler_C*                  Event_Handler                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Button1_C::SetEventHandler(class UBP_navset_event_handler_C* Event_Handler)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button1.WBP_Button1_C.SetEventHandler");
		
		UWBP_Button1_C_SetEventHandler_Params params {};
		params.Event_Handler = Event_Handler;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button1.WBP_Button1_C.SetIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SelectedIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StepIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Button1_C::SetIndex(int32_t SelectedIndex, int32_t StepIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button1.WBP_Button1_C.SetIndex");
		
		UWBP_Button1_C_SetIndex_Params params {};
		params.SelectedIndex = SelectedIndex;
		params.StepIndex = StepIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button1.WBP_Button1_C.SetFocusBPIVersion
	 * 		Flags  -> ()
	 */
	void UWBP_Button1_C::SetFocusBPIVersion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button1.WBP_Button1_C.SetFocusBPIVersion");
		
		UWBP_Button1_C_SetFocusBPIVersion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button1.WBP_Button1_C.RemoveFocus
	 * 		Flags  -> ()
	 */
	void UWBP_Button1_C::RemoveFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button1.WBP_Button1_C.RemoveFocus");
		
		UWBP_Button1_C_RemoveFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button1.WBP_Button1_C.ChangeValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Right                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Button1_C::ChangeValue(bool Right)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button1.WBP_Button1_C.ChangeValue");
		
		UWBP_Button1_C_ChangeValue_Params params {};
		params.Right = Right;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button1.WBP_Button1_C.UpdateShortcut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EShortcutKeyType                                   ShortcutToDisplay                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Button1_C::UpdateShortcut(EShortcutKeyType ShortcutToDisplay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button1.WBP_Button1_C.UpdateShortcut");
		
		UWBP_Button1_C_UpdateShortcut_Params params {};
		params.ShortcutToDisplay = ShortcutToDisplay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button1.WBP_Button1_C.ExecuteUbergraph_WBP_Button1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Button1_C::ExecuteUbergraph_WBP_Button1(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button1.WBP_Button1_C.ExecuteUbergraph_WBP_Button1");
		
		UWBP_Button1_C_ExecuteUbergraph_WBP_Button1_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button1.WBP_Button1_C.OnUnhover__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Button1_C::OnUnhover__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button1.WBP_Button1_C.OnUnhover__DelegateSignature");
		
		UWBP_Button1_C_OnUnhover__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button1.WBP_Button1_C.OnHover__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Button1_C::OnHover__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button1.WBP_Button1_C.OnHover__DelegateSignature");
		
		UWBP_Button1_C_OnHover__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button1.WBP_Button1_C.OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Button1_C::OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Button1.WBP_Button1_C.OnClicked__DelegateSignature");
		
		UWBP_Button1_C_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Button1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Button1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Button1.WBP_Button1_C");
		return ptr;
	}

}


