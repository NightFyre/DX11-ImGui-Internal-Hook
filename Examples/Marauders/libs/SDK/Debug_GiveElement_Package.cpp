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
	 * 		Name   -> Function Debug_GiveElement.Debug_GiveElement_C.Does Contain if Not Hide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Reset                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	 * 		class FText                                        DoesContainThis                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UDebug_GiveElement_C::Does_Contain_if_Not_Hide(bool Reset, const class FText& DoesContainThis)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug_GiveElement.Debug_GiveElement_C.Does Contain if Not Hide");
		
		UDebug_GiveElement_C_Does_Contain_if_Not_Hide_Params params {};
		params.Reset = Reset;
		params.DoesContainThis = DoesContainThis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug_GiveElement.Debug_GiveElement_C.Construct
	 * 		Flags  -> ()
	 */
	void UDebug_GiveElement_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug_GiveElement.Debug_GiveElement_C.Construct");
		
		UDebug_GiveElement_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug_GiveElement.Debug_GiveElement_C.BndEvt__Btn_DevMake1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebug_GiveElement_C::BndEvt__Btn_DevMake1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug_GiveElement.Debug_GiveElement_C.BndEvt__Btn_DevMake1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UDebug_GiveElement_C_BndEvt__Btn_DevMake1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug_GiveElement.Debug_GiveElement_C.BndEvt__Btn_DevMake2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebug_GiveElement_C::BndEvt__Btn_DevMake2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug_GiveElement.Debug_GiveElement_C.BndEvt__Btn_DevMake2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UDebug_GiveElement_C_BndEvt__Btn_DevMake2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug_GiveElement.Debug_GiveElement_C.BndEvt__Btn_DevMake5_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebug_GiveElement_C::BndEvt__Btn_DevMake5_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug_GiveElement.Debug_GiveElement_C.BndEvt__Btn_DevMake5_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UDebug_GiveElement_C_BndEvt__Btn_DevMake5_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug_GiveElement.Debug_GiveElement_C.ExecuteUbergraph_Debug_GiveElement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebug_GiveElement_C::ExecuteUbergraph_Debug_GiveElement(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Debug_GiveElement.Debug_GiveElement_C.ExecuteUbergraph_Debug_GiveElement");
		
		UDebug_GiveElement_C_ExecuteUbergraph_Debug_GiveElement_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDebug_GiveElement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDebug_GiveElement_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Debug_GiveElement.Debug_GiveElement_C");
		return ptr;
	}

}


