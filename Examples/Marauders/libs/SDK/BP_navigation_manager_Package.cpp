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
	 * 		Name   -> Function BP_navigation_manager.BP_navigation_manager_C.UpdateAllShortcutIcons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENavigationDeviceTypes                             Navigation_Device                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_navigation_manager_C::UpdateAllShortcutIcons(ENavigationDeviceTypes Navigation_Device)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.UpdateAllShortcutIcons");
		
		UBP_navigation_manager_C_UpdateAllShortcutIcons_Params params {};
		params.Navigation_Device = Navigation_Device;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_navigation_manager.BP_navigation_manager_C.AddToShortcutUpdateList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFWidgetFix                                 Updatable_Widget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_navigation_manager_C::AddToShortcutUpdateList(const struct FFWidgetFix& Updatable_Widget, int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.AddToShortcutUpdateList");
		
		UBP_navigation_manager_C_AddToShortcutUpdateList_Params params {};
		params.Updatable_Widget = Updatable_Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_navigation_manager.BP_navigation_manager_C.OnValueChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Decrease                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_navigation_manager_C::OnValueChanged(bool Decrease)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.OnValueChanged");
		
		UBP_navigation_manager_C_OnValueChanged_Params params {};
		params.Decrease = Decrease;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_navigation_manager.BP_navigation_manager_C.GetSelectedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_navigation_manager_C::GetSelectedItem(class UWidget** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.GetSelectedItem");
		
		UBP_navigation_manager_C_GetSelectedItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_navigation_manager.BP_navigation_manager_C.GetCurrentStep
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CurrentStep                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_navigation_manager_C::GetCurrentStep(int32_t* CurrentStep)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.GetCurrentStep");
		
		UBP_navigation_manager_C_GetCurrentStep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentStep != nullptr)
			*CurrentStep = params.CurrentStep;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_navigation_manager.BP_navigation_manager_C.NavigateTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_navigation_manager_C::NavigateTo(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.NavigateTo");
		
		UBP_navigation_manager_C_NavigateTo_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_navigation_manager.BP_navigation_manager_C.CustomNavigation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CustomAction                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_navigation_manager_C::CustomNavigation(const class FString& CustomAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.CustomNavigation");
		
		UBP_navigation_manager_C_CustomNavigation_Params params {};
		params.CustomAction = CustomAction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_navigation_manager.BP_navigation_manager_C.GetNavigableItemList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FFNavItem>                           NavigableItemArray                                         (Parm, OutParm, ContainsInstancedReference)
	 */
	void UBP_navigation_manager_C::GetNavigableItemList(TArray<struct FFNavItem>* NavigableItemArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.GetNavigableItemList");
		
		UBP_navigation_manager_C_GetNavigableItemList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NavigableItemArray != nullptr)
			*NavigableItemArray = params.NavigableItemArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_navigation_manager.BP_navigation_manager_C.RemoveUnfocusedSteps
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               EscKeyPress                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_navigation_manager_C::RemoveUnfocusedSteps(bool EscKeyPress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.RemoveUnfocusedSteps");
		
		UBP_navigation_manager_C_RemoveUnfocusedSteps_Params params {};
		params.EscKeyPress = EscKeyPress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_navigation_manager.BP_navigation_manager_C.SetOverrideEscape
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OverrideEscape                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_navigation_manager_C::SetOverrideEscape(bool OverrideEscape)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.SetOverrideEscape");
		
		UBP_navigation_manager_C_SetOverrideEscape_Params params {};
		params.OverrideEscape = OverrideEscape;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_navigation_manager.BP_navigation_manager_C.Remove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            StepIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               RemoveFromArrayOnly                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_navigation_manager_C::Remove(int32_t StepIndex, bool RemoveFromArrayOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.Remove");
		
		UBP_navigation_manager_C_Remove_Params params {};
		params.StepIndex = StepIndex;
		params.RemoveFromArrayOnly = RemoveFromArrayOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_navigation_manager.BP_navigation_manager_C.SimulateClick
	 * 		Flags  -> ()
	 */
	void UBP_navigation_manager_C::SimulateClick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.SimulateClick");
		
		UBP_navigation_manager_C_SimulateClick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_navigation_manager.BP_navigation_manager_C.UpdateValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Decrease                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_navigation_manager_C::UpdateValue(bool Decrease)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.UpdateValue");
		
		UBP_navigation_manager_C_UpdateValue_Params params {};
		params.Decrease = Decrease;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_navigation_manager.BP_navigation_manager_C.CycleFirst
	 * 		Flags  -> ()
	 */
	void UBP_navigation_manager_C::CycleFirst()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.CycleFirst");
		
		UBP_navigation_manager_C_CycleFirst_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_navigation_manager.BP_navigation_manager_C.CycleLast
	 * 		Flags  -> ()
	 */
	void UBP_navigation_manager_C::CycleLast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.CycleLast");
		
		UBP_navigation_manager_C_CycleLast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_navigation_manager.BP_navigation_manager_C.Navigate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        PressedKey                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		TArray<struct FKey>                                ExpectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ENavActionTypes                                    ActionType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      CustomAction                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_navigation_manager_C::Navigate(const struct FKey& PressedKey, TArray<struct FKey>* ExpectedKey, ENavActionTypes ActionType, const class FString& CustomAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.Navigate");
		
		UBP_navigation_manager_C_Navigate_Params params {};
		params.PressedKey = PressedKey;
		params.ActionType = ActionType;
		params.CustomAction = CustomAction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ExpectedKey != nullptr)
			*ExpectedKey = params.ExpectedKey;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_navigation_manager.BP_navigation_manager_C.NavigateRight
	 * 		Flags  -> ()
	 */
	void UBP_navigation_manager_C::NavigateRight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.NavigateRight");
		
		UBP_navigation_manager_C_NavigateRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_navigation_manager.BP_navigation_manager_C.NavigateLeft
	 * 		Flags  -> ()
	 */
	void UBP_navigation_manager_C::NavigateLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.NavigateLeft");
		
		UBP_navigation_manager_C_NavigateLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_navigation_manager.BP_navigation_manager_C.NavigateDown
	 * 		Flags  -> ()
	 */
	void UBP_navigation_manager_C::NavigateDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.NavigateDown");
		
		UBP_navigation_manager_C_NavigateDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_navigation_manager.BP_navigation_manager_C.NavigateUp
	 * 		Flags  -> ()
	 */
	void UBP_navigation_manager_C::NavigateUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.NavigateUp");
		
		UBP_navigation_manager_C_NavigateUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_navigation_manager.BP_navigation_manager_C.NavItemMouseUnhover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SelectedIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StepIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_navigation_manager_C::NavItemMouseUnhover(int32_t SelectedIndex, int32_t StepIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.NavItemMouseUnhover");
		
		UBP_navigation_manager_C_NavItemMouseUnhover_Params params {};
		params.SelectedIndex = SelectedIndex;
		params.StepIndex = StepIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_navigation_manager.BP_navigation_manager_C.NavItemMouseHover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SelectedIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StepIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_navigation_manager_C::NavItemMouseHover(int32_t SelectedIndex, int32_t StepIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.NavItemMouseHover");
		
		UBP_navigation_manager_C_NavItemMouseHover_Params params {};
		params.SelectedIndex = SelectedIndex;
		params.StepIndex = StepIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_navigation_manager.BP_navigation_manager_C.SetNavigationFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Clear                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            StepIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_navigation_manager_C::SetNavigationFocus(bool Clear, int32_t StepIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.SetNavigationFocus");
		
		UBP_navigation_manager_C_SetNavigationFocus_Params params {};
		params.Clear = Clear;
		params.StepIndex = StepIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_navigation_manager.BP_navigation_manager_C.GetNavItemsFromContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Box                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Vertical                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FFWidgetFix>                         Navigable_Widgets                                          (Parm, OutParm, ContainsInstancedReference)
	 */
	void UBP_navigation_manager_C::GetNavItemsFromContainer(class UWidget** Box, bool Vertical, TArray<struct FFWidgetFix>* Navigable_Widgets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.GetNavItemsFromContainer");
		
		UBP_navigation_manager_C_GetNavItemsFromContainer_Params params {};
		params.Vertical = Vertical;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Box != nullptr)
			*Box = params.Box;
		if (Navigable_Widgets != nullptr)
			*Navigable_Widgets = params.Navigable_Widgets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_navigation_manager.BP_navigation_manager_C.AddToNavigableArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFNavItem                                   Nav_Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	 * 		TArray<struct FFWidgetFix>                         Final_Array                                                (Parm, OutParm, ContainsInstancedReference)
	 */
	void UBP_navigation_manager_C::AddToNavigableArray(struct FFNavItem* Nav_Item, TArray<struct FFWidgetFix>* Final_Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.AddToNavigableArray");
		
		UBP_navigation_manager_C_AddToNavigableArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Nav_Item != nullptr)
			*Nav_Item = params.Nav_Item;
		if (Final_Array != nullptr)
			*Final_Array = params.Final_Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_navigation_manager.BP_navigation_manager_C.OnInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	struct FEventReply UBP_navigation_manager_C::OnInput(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.OnInput");
		
		UBP_navigation_manager_C_OnInput_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_navigation_manager.BP_navigation_manager_C.OnSelectedItemValueChange__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_navigation_manager_C::OnSelectedItemValueChange__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.OnSelectedItemValueChange__DelegateSignature");
		
		UBP_navigation_manager_C_OnSelectedItemValueChange__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_navigation_manager.BP_navigation_manager_C.OnSelectedItemChange__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_navigation_manager_C::OnSelectedItemChange__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.OnSelectedItemChange__DelegateSignature");
		
		UBP_navigation_manager_C_OnSelectedItemChange__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_navigation_manager.BP_navigation_manager_C.OnNavigation__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENavigationDeviceTypes                             NavigationDevice                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_navigation_manager_C::OnNavigation__DelegateSignature(ENavigationDeviceTypes NavigationDevice)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.OnNavigation__DelegateSignature");
		
		UBP_navigation_manager_C_OnNavigation__DelegateSignature_Params params {};
		params.NavigationDevice = NavigationDevice;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_navigation_manager.BP_navigation_manager_C.OnOverrideEscape__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_navigation_manager_C::OnOverrideEscape__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.OnOverrideEscape__DelegateSignature");
		
		UBP_navigation_manager_C_OnOverrideEscape__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_navigation_manager.BP_navigation_manager_C.OnEscapeWhenOverrideEnabled__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_navigation_manager_C::OnEscapeWhenOverrideEnabled__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.OnEscapeWhenOverrideEnabled__DelegateSignature");
		
		UBP_navigation_manager_C_OnEscapeWhenOverrideEnabled__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_navigation_manager.BP_navigation_manager_C.OnEscape__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_navigation_manager_C::OnEscape__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.OnEscape__DelegateSignature");
		
		UBP_navigation_manager_C_OnEscape__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_navigation_manager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_navigation_manager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_navigation_manager.BP_navigation_manager_C");
		return ptr;
	}

}


