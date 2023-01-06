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
	 * 		Name   -> Function FullScreenError_Widget.FullScreenError_Widget_C.BndEvt__FullScreenError_Widget_MM_GenericSmallBtn01_Accept_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFullScreenError_Widget_C::BndEvt__FullScreenError_Widget_MM_GenericSmallBtn01_Accept_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FullScreenError_Widget.FullScreenError_Widget_C.BndEvt__FullScreenError_Widget_MM_GenericSmallBtn01_Accept_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature");
		
		UFullScreenError_Widget_C_BndEvt__FullScreenError_Widget_MM_GenericSmallBtn01_Accept_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FullScreenError_Widget.FullScreenError_Widget_C.RunPopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Popup_Title                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Popup_Desc                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class USoundCue*                                   SoundToPlay                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        RightButtonText                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               OnlyShowOneButton                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFullScreenError_Widget_C::RunPopup(const class FText& Popup_Title, const class FText& Popup_Desc, class USoundCue* SoundToPlay, const class FText& RightButtonText, bool OnlyShowOneButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FullScreenError_Widget.FullScreenError_Widget_C.RunPopup");
		
		UFullScreenError_Widget_C_RunPopup_Params params {};
		params.Popup_Title = Popup_Title;
		params.Popup_Desc = Popup_Desc;
		params.SoundToPlay = SoundToPlay;
		params.RightButtonText = RightButtonText;
		params.OnlyShowOneButton = OnlyShowOneButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FullScreenError_Widget.FullScreenError_Widget_C.Construct
	 * 		Flags  -> ()
	 */
	void UFullScreenError_Widget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FullScreenError_Widget.FullScreenError_Widget_C.Construct");
		
		UFullScreenError_Widget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FullScreenError_Widget.FullScreenError_Widget_C.ExecuteUbergraph_FullScreenError_Widget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFullScreenError_Widget_C::ExecuteUbergraph_FullScreenError_Widget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FullScreenError_Widget.FullScreenError_Widget_C.ExecuteUbergraph_FullScreenError_Widget");
		
		UFullScreenError_Widget_C_ExecuteUbergraph_FullScreenError_Widget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFullScreenError_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFullScreenError_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FullScreenError_Widget.FullScreenError_Widget_C");
		return ptr;
	}

}


