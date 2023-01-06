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
	 * 		Name   -> Function BP_navset_event_handler.BP_navset_event_handler_C.OnValueChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Decrease                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_navset_event_handler_C::OnValueChange__DelegateSignature(bool Decrease)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_navset_event_handler.BP_navset_event_handler_C.OnValueChange__DelegateSignature");
		
		UBP_navset_event_handler_C_OnValueChange__DelegateSignature_Params params {};
		params.Decrease = Decrease;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_navset_event_handler.BP_navset_event_handler_C.OnBackClick__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_navset_event_handler_C::OnBackClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_navset_event_handler.BP_navset_event_handler_C.OnBackClick__DelegateSignature");
		
		UBP_navset_event_handler_C_OnBackClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_navset_event_handler.BP_navset_event_handler_C.OnEscapeCall__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEscapeBehaviour                                   Behaviour                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_navset_event_handler_C::OnEscapeCall__DelegateSignature(EEscapeBehaviour Behaviour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_navset_event_handler.BP_navset_event_handler_C.OnEscapeCall__DelegateSignature");
		
		UBP_navset_event_handler_C_OnEscapeCall__DelegateSignature_Params params {};
		params.Behaviour = Behaviour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_navset_event_handler.BP_navset_event_handler_C.OnMouseUnhover__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SelectedIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StepIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_navset_event_handler_C::OnMouseUnhover__DelegateSignature(int32_t SelectedIndex, int32_t StepIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_navset_event_handler.BP_navset_event_handler_C.OnMouseUnhover__DelegateSignature");
		
		UBP_navset_event_handler_C_OnMouseUnhover__DelegateSignature_Params params {};
		params.SelectedIndex = SelectedIndex;
		params.StepIndex = StepIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_navset_event_handler.BP_navset_event_handler_C.OnMouseHover__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SelectedIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StepIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_navset_event_handler_C::OnMouseHover__DelegateSignature(int32_t SelectedIndex, int32_t StepIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_navset_event_handler.BP_navset_event_handler_C.OnMouseHover__DelegateSignature");
		
		UBP_navset_event_handler_C_OnMouseHover__DelegateSignature_Params params {};
		params.SelectedIndex = SelectedIndex;
		params.StepIndex = StepIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_navset_event_handler.BP_navset_event_handler_C.OnClick__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_navset_event_handler_C::OnClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_navset_event_handler.BP_navset_event_handler_C.OnClick__DelegateSignature");
		
		UBP_navset_event_handler_C_OnClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_navset_event_handler_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_navset_event_handler_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_navset_event_handler.BP_navset_event_handler_C");
		return ptr;
	}

}


