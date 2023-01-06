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
	 * 		Name   -> Function Guide_Widget.Guide_Widget_C.SetSelectedLook
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NameOfSelected                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuide_Widget_C::SetSelectedLook(const class FName& NameOfSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Guide_Widget.Guide_Widget_C.SetSelectedLook");
		
		UGuide_Widget_C_SetSelectedLook_Params params {};
		params.NameOfSelected = NameOfSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Guide_Widget.Guide_Widget_C.FillInGuideInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        RowName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuide_Widget_C::FillInGuideInfo(const class FName& RowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Guide_Widget.Guide_Widget_C.FillInGuideInfo");
		
		UGuide_Widget_C_FillInGuideInfo_Params params {};
		params.RowName = RowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Guide_Widget.Guide_Widget_C.Construct
	 * 		Flags  -> ()
	 */
	void UGuide_Widget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Guide_Widget.Guide_Widget_C.Construct");
		
		UGuide_Widget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Guide_Widget.Guide_Widget_C.BndEvt__Guide_Widget_MM_GenericSmallBtn01_GoBack_StatsMenu_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuide_Widget_C::BndEvt__Guide_Widget_MM_GenericSmallBtn01_GoBack_StatsMenu_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Guide_Widget.Guide_Widget_C.BndEvt__Guide_Widget_MM_GenericSmallBtn01_GoBack_StatsMenu_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature");
		
		UGuide_Widget_C_BndEvt__Guide_Widget_MM_GenericSmallBtn01_GoBack_StatsMenu_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Guide_Widget.Guide_Widget_C.PressedARow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        GuideRowName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuide_Widget_C::PressedARow(const class FName& GuideRowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Guide_Widget.Guide_Widget_C.PressedARow");
		
		UGuide_Widget_C_PressedARow_Params params {};
		params.GuideRowName = GuideRowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Guide_Widget.Guide_Widget_C.ExecuteUbergraph_Guide_Widget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuide_Widget_C::ExecuteUbergraph_Guide_Widget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Guide_Widget.Guide_Widget_C.ExecuteUbergraph_Guide_Widget");
		
		UGuide_Widget_C_ExecuteUbergraph_Guide_Widget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Guide_Widget.Guide_Widget_C.ED_CloseGuide__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuide_Widget_C::ED_CloseGuide__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Guide_Widget.Guide_Widget_C.ED_CloseGuide__DelegateSignature");
		
		UGuide_Widget_C_ED_CloseGuide__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGuide_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGuide_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Guide_Widget.Guide_Widget_C");
		return ptr;
	}

}


