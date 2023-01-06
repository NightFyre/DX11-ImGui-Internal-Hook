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
	 * 		Name   -> Function Contract_SubWidget.Contract_SubWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UContract_SubWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Contract_SubWidget.Contract_SubWidget_C.Construct");
		
		UContract_SubWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Contract_SubWidget.Contract_SubWidget_C.Update_MissionInfo
	 * 		Flags  -> ()
	 */
	void UContract_SubWidget_C::Update_MissionInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Contract_SubWidget.Contract_SubWidget_C.Update_MissionInfo");
		
		UContract_SubWidget_C_Update_MissionInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Contract_SubWidget.Contract_SubWidget_C.BndEvt__Contract_SubWidget_MM_GenericLargeBtn01_K2Node_ComponentBoundEvent_2_GenericLargeBtn_Pressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UContract_SubWidget_C::BndEvt__Contract_SubWidget_MM_GenericLargeBtn01_K2Node_ComponentBoundEvent_2_GenericLargeBtn_Pressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Contract_SubWidget.Contract_SubWidget_C.BndEvt__Contract_SubWidget_MM_GenericLargeBtn01_K2Node_ComponentBoundEvent_2_GenericLargeBtn_Pressed__DelegateSignature");
		
		UContract_SubWidget_C_BndEvt__Contract_SubWidget_MM_GenericLargeBtn01_K2Node_ComponentBoundEvent_2_GenericLargeBtn_Pressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Contract_SubWidget.Contract_SubWidget_C.ExecuteUbergraph_Contract_SubWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UContract_SubWidget_C::ExecuteUbergraph_Contract_SubWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Contract_SubWidget.Contract_SubWidget_C.ExecuteUbergraph_Contract_SubWidget");
		
		UContract_SubWidget_C_ExecuteUbergraph_Contract_SubWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UContract_SubWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UContract_SubWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Contract_SubWidget.Contract_SubWidget_C");
		return ptr;
	}

}


