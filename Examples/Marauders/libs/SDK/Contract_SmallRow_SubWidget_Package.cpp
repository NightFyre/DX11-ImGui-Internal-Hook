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
	 * 		Name   -> Function Contract_SmallRow_SubWidget.Contract_SmallRow_SubWidget_C.StateChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_ContractStates                                   State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UContract_SmallRow_SubWidget_C::StateChange(E_ContractStates State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Contract_SmallRow_SubWidget.Contract_SmallRow_SubWidget_C.StateChange");
		
		UContract_SmallRow_SubWidget_C_StateChange_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Contract_SmallRow_SubWidget.Contract_SmallRow_SubWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UContract_SmallRow_SubWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Contract_SmallRow_SubWidget.Contract_SmallRow_SubWidget_C.Construct");
		
		UContract_SmallRow_SubWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Contract_SmallRow_SubWidget.Contract_SmallRow_SubWidget_C.Update
	 * 		Flags  -> ()
	 */
	void UContract_SmallRow_SubWidget_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Contract_SmallRow_SubWidget.Contract_SmallRow_SubWidget_C.Update");
		
		UContract_SmallRow_SubWidget_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Contract_SmallRow_SubWidget.Contract_SmallRow_SubWidget_C.BndEvt__Contract_SmallRow_SubWidget_Btn_RowClicked_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UContract_SmallRow_SubWidget_C::BndEvt__Contract_SmallRow_SubWidget_Btn_RowClicked_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Contract_SmallRow_SubWidget.Contract_SmallRow_SubWidget_C.BndEvt__Contract_SmallRow_SubWidget_Btn_RowClicked_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");
		
		UContract_SmallRow_SubWidget_C_BndEvt__Contract_SmallRow_SubWidget_Btn_RowClicked_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Contract_SmallRow_SubWidget.Contract_SmallRow_SubWidget_C.ExecuteUbergraph_Contract_SmallRow_SubWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UContract_SmallRow_SubWidget_C::ExecuteUbergraph_Contract_SmallRow_SubWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Contract_SmallRow_SubWidget.Contract_SmallRow_SubWidget_C.ExecuteUbergraph_Contract_SmallRow_SubWidget");
		
		UContract_SmallRow_SubWidget_C_ExecuteUbergraph_Contract_SmallRow_SubWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Contract_SmallRow_SubWidget.Contract_SmallRow_SubWidget_C.ED_SmallContractRowClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UContract_SmallRow_SubWidget_C::ED_SmallContractRowClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Contract_SmallRow_SubWidget.Contract_SmallRow_SubWidget_C.ED_SmallContractRowClicked__DelegateSignature");
		
		UContract_SmallRow_SubWidget_C_ED_SmallContractRowClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UContract_SmallRow_SubWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UContract_SmallRow_SubWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Contract_SmallRow_SubWidget.Contract_SmallRow_SubWidget_C");
		return ptr;
	}

}


