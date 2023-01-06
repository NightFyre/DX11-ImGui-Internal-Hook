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
	 * 		Name   -> Function MM_GenericSmallBtn01.MM_GenericSmallBtn01_C.EnableTheButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMM_GenericSmallBtn01_C::EnableTheButton(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_GenericSmallBtn01.MM_GenericSmallBtn01_C.EnableTheButton");
		
		UMM_GenericSmallBtn01_C_EnableTheButton_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_GenericSmallBtn01.MM_GenericSmallBtn01_C.Set_SelectedVisuals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMM_GenericSmallBtn01_C::Set_SelectedVisuals(bool isSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_GenericSmallBtn01.MM_GenericSmallBtn01_C.Set_SelectedVisuals");
		
		UMM_GenericSmallBtn01_C_Set_SelectedVisuals_Params params {};
		params.isSelected = isSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_GenericSmallBtn01.MM_GenericSmallBtn01_C.ForceUnselectedColour
	 * 		Flags  -> ()
	 */
	void UMM_GenericSmallBtn01_C::ForceUnselectedColour()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_GenericSmallBtn01.MM_GenericSmallBtn01_C.ForceUnselectedColour");
		
		UMM_GenericSmallBtn01_C_ForceUnselectedColour_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_GenericSmallBtn01.MM_GenericSmallBtn01_C.BndEvt__Btn_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMM_GenericSmallBtn01_C::BndEvt__Btn_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_GenericSmallBtn01.MM_GenericSmallBtn01_C.BndEvt__Btn_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UMM_GenericSmallBtn01_C_BndEvt__Btn_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_GenericSmallBtn01.MM_GenericSmallBtn01_C.BndEvt__Btn_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMM_GenericSmallBtn01_C::BndEvt__Btn_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_GenericSmallBtn01.MM_GenericSmallBtn01_C.BndEvt__Btn_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UMM_GenericSmallBtn01_C_BndEvt__Btn_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_GenericSmallBtn01.MM_GenericSmallBtn01_C.Construct
	 * 		Flags  -> ()
	 */
	void UMM_GenericSmallBtn01_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_GenericSmallBtn01.MM_GenericSmallBtn01_C.Construct");
		
		UMM_GenericSmallBtn01_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_GenericSmallBtn01.MM_GenericSmallBtn01_C.BndEvt__Btn_Main_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMM_GenericSmallBtn01_C::BndEvt__Btn_Main_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_GenericSmallBtn01.MM_GenericSmallBtn01_C.BndEvt__Btn_Main_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UMM_GenericSmallBtn01_C_BndEvt__Btn_Main_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_GenericSmallBtn01.MM_GenericSmallBtn01_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMM_GenericSmallBtn01_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_GenericSmallBtn01.MM_GenericSmallBtn01_C.PreConstruct");
		
		UMM_GenericSmallBtn01_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_GenericSmallBtn01.MM_GenericSmallBtn01_C.ExecuteUbergraph_MM_GenericSmallBtn01
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMM_GenericSmallBtn01_C::ExecuteUbergraph_MM_GenericSmallBtn01(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_GenericSmallBtn01.MM_GenericSmallBtn01_C.ExecuteUbergraph_MM_GenericSmallBtn01");
		
		UMM_GenericSmallBtn01_C_ExecuteUbergraph_MM_GenericSmallBtn01_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_GenericSmallBtn01.MM_GenericSmallBtn01_C.GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMM_GenericSmallBtn01_C::GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_GenericSmallBtn01.MM_GenericSmallBtn01_C.GenericSmallBtnPressed__DelegateSignature");
		
		UMM_GenericSmallBtn01_C_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMM_GenericSmallBtn01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMM_GenericSmallBtn01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MM_GenericSmallBtn01.MM_GenericSmallBtn01_C");
		return ptr;
	}

}


