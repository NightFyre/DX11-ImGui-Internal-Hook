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
	 * 		Name   -> Function Guide_ItemBtn_SubWidget.Guide_ItemBtn_SubWidget_C.Set_SelectedVisuals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HoverDontSet                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGuide_ItemBtn_SubWidget_C::Set_SelectedVisuals(bool isSelected, bool HoverDontSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Guide_ItemBtn_SubWidget.Guide_ItemBtn_SubWidget_C.Set_SelectedVisuals");
		
		UGuide_ItemBtn_SubWidget_C_Set_SelectedVisuals_Params params {};
		params.isSelected = isSelected;
		params.HoverDontSet = HoverDontSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Guide_ItemBtn_SubWidget.Guide_ItemBtn_SubWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UGuide_ItemBtn_SubWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Guide_ItemBtn_SubWidget.Guide_ItemBtn_SubWidget_C.Construct");
		
		UGuide_ItemBtn_SubWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Guide_ItemBtn_SubWidget.Guide_ItemBtn_SubWidget_C.BndEvt__Btn_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuide_ItemBtn_SubWidget_C::BndEvt__Btn_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Guide_ItemBtn_SubWidget.Guide_ItemBtn_SubWidget_C.BndEvt__Btn_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UGuide_ItemBtn_SubWidget_C_BndEvt__Btn_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Guide_ItemBtn_SubWidget.Guide_ItemBtn_SubWidget_C.BndEvt__Btn_Main_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuide_ItemBtn_SubWidget_C::BndEvt__Btn_Main_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Guide_ItemBtn_SubWidget.Guide_ItemBtn_SubWidget_C.BndEvt__Btn_Main_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UGuide_ItemBtn_SubWidget_C_BndEvt__Btn_Main_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Guide_ItemBtn_SubWidget.Guide_ItemBtn_SubWidget_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGuide_ItemBtn_SubWidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Guide_ItemBtn_SubWidget.Guide_ItemBtn_SubWidget_C.PreConstruct");
		
		UGuide_ItemBtn_SubWidget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Guide_ItemBtn_SubWidget.Guide_ItemBtn_SubWidget_C.BndEvt__Btn_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuide_ItemBtn_SubWidget_C::BndEvt__Btn_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Guide_ItemBtn_SubWidget.Guide_ItemBtn_SubWidget_C.BndEvt__Btn_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UGuide_ItemBtn_SubWidget_C_BndEvt__Btn_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Guide_ItemBtn_SubWidget.Guide_ItemBtn_SubWidget_C.ForceUnselectedColour
	 * 		Flags  -> ()
	 */
	void UGuide_ItemBtn_SubWidget_C::ForceUnselectedColour()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Guide_ItemBtn_SubWidget.Guide_ItemBtn_SubWidget_C.ForceUnselectedColour");
		
		UGuide_ItemBtn_SubWidget_C_ForceUnselectedColour_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Guide_ItemBtn_SubWidget.Guide_ItemBtn_SubWidget_C.ExecuteUbergraph_Guide_ItemBtn_SubWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuide_ItemBtn_SubWidget_C::ExecuteUbergraph_Guide_ItemBtn_SubWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Guide_ItemBtn_SubWidget.Guide_ItemBtn_SubWidget_C.ExecuteUbergraph_Guide_ItemBtn_SubWidget");
		
		UGuide_ItemBtn_SubWidget_C_ExecuteUbergraph_Guide_ItemBtn_SubWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Guide_ItemBtn_SubWidget.Guide_ItemBtn_SubWidget_C.GuideItemButtonPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        SelectedRowName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuide_ItemBtn_SubWidget_C::GuideItemButtonPressed__DelegateSignature(const class FName& SelectedRowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Guide_ItemBtn_SubWidget.Guide_ItemBtn_SubWidget_C.GuideItemButtonPressed__DelegateSignature");
		
		UGuide_ItemBtn_SubWidget_C_GuideItemButtonPressed__DelegateSignature_Params params {};
		params.SelectedRowName = SelectedRowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGuide_ItemBtn_SubWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGuide_ItemBtn_SubWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Guide_ItemBtn_SubWidget.Guide_ItemBtn_SubWidget_C");
		return ptr;
	}

}


