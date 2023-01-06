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
	 * 		Name   -> Function MM_MainOptionsBtns.MM_MainOptionsBtns_C.TurnOnOffImportantIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TurnOn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMM_MainOptionsBtns_C::TurnOnOffImportantIcon(bool TurnOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_MainOptionsBtns.MM_MainOptionsBtns_C.TurnOnOffImportantIcon");
		
		UMM_MainOptionsBtns_C_TurnOnOffImportantIcon_Params params {};
		params.TurnOn = TurnOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_MainOptionsBtns.MM_MainOptionsBtns_C.Set_SelectedVisuals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMM_MainOptionsBtns_C::Set_SelectedVisuals(bool isSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_MainOptionsBtns.MM_MainOptionsBtns_C.Set_SelectedVisuals");
		
		UMM_MainOptionsBtns_C_Set_SelectedVisuals_Params params {};
		params.isSelected = isSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_MainOptionsBtns.MM_MainOptionsBtns_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMM_MainOptionsBtns_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_MainOptionsBtns.MM_MainOptionsBtns_C.PreConstruct");
		
		UMM_MainOptionsBtns_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_MainOptionsBtns.MM_MainOptionsBtns_C.Construct
	 * 		Flags  -> ()
	 */
	void UMM_MainOptionsBtns_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_MainOptionsBtns.MM_MainOptionsBtns_C.Construct");
		
		UMM_MainOptionsBtns_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_MainOptionsBtns.MM_MainOptionsBtns_C.BndEvt__Btn_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMM_MainOptionsBtns_C::BndEvt__Btn_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_MainOptionsBtns.MM_MainOptionsBtns_C.BndEvt__Btn_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UMM_MainOptionsBtns_C_BndEvt__Btn_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_MainOptionsBtns.MM_MainOptionsBtns_C.BndEvt__Btn_Main_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMM_MainOptionsBtns_C::BndEvt__Btn_Main_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_MainOptionsBtns.MM_MainOptionsBtns_C.BndEvt__Btn_Main_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UMM_MainOptionsBtns_C_BndEvt__Btn_Main_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_MainOptionsBtns.MM_MainOptionsBtns_C.BndEvt__Btn_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMM_MainOptionsBtns_C::BndEvt__Btn_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_MainOptionsBtns.MM_MainOptionsBtns_C.BndEvt__Btn_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UMM_MainOptionsBtns_C_BndEvt__Btn_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_MainOptionsBtns.MM_MainOptionsBtns_C.ExecuteUbergraph_MM_MainOptionsBtns
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMM_MainOptionsBtns_C::ExecuteUbergraph_MM_MainOptionsBtns(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_MainOptionsBtns.MM_MainOptionsBtns_C.ExecuteUbergraph_MM_MainOptionsBtns");
		
		UMM_MainOptionsBtns_C_ExecuteUbergraph_MM_MainOptionsBtns_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_MainOptionsBtns.MM_MainOptionsBtns_C.ButtonHasBeenPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMenuState                                         WhichButtonPressed                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMM_MainOptionsBtns_C::ButtonHasBeenPressed__DelegateSignature(EMenuState WhichButtonPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_MainOptionsBtns.MM_MainOptionsBtns_C.ButtonHasBeenPressed__DelegateSignature");
		
		UMM_MainOptionsBtns_C_ButtonHasBeenPressed__DelegateSignature_Params params {};
		params.WhichButtonPressed = WhichButtonPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMM_MainOptionsBtns_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMM_MainOptionsBtns_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MM_MainOptionsBtns.MM_MainOptionsBtns_C");
		return ptr;
	}

}


