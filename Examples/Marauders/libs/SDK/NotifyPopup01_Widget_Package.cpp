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
	 * 		Name   -> Function NotifyPopup01_Widget.NotifyPopup01_Widget_C.Construct
	 * 		Flags  -> ()
	 */
	void UNotifyPopup01_Widget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyPopup01_Widget.NotifyPopup01_Widget_C.Construct");
		
		UNotifyPopup01_Widget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyPopup01_Widget.NotifyPopup01_Widget_C.RunPopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Popup_Title                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Popup_Desc                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class USoundCue*                                   SoundToPlay                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TimeUpFor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyPopup01_Widget_C::RunPopup(const class FText& Popup_Title, const class FText& Popup_Desc, class USoundCue* SoundToPlay, float TimeUpFor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyPopup01_Widget.NotifyPopup01_Widget_C.RunPopup");
		
		UNotifyPopup01_Widget_C_RunPopup_Params params {};
		params.Popup_Title = Popup_Title;
		params.Popup_Desc = Popup_Desc;
		params.SoundToPlay = SoundToPlay;
		params.TimeUpFor = TimeUpFor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyPopup01_Widget.NotifyPopup01_Widget_C.CloseAnimHasFinished
	 * 		Flags  -> ()
	 */
	void UNotifyPopup01_Widget_C::CloseAnimHasFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyPopup01_Widget.NotifyPopup01_Widget_C.CloseAnimHasFinished");
		
		UNotifyPopup01_Widget_C_CloseAnimHasFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyPopup01_Widget.NotifyPopup01_Widget_C.ExecuteUbergraph_NotifyPopup01_Widget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyPopup01_Widget_C::ExecuteUbergraph_NotifyPopup01_Widget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyPopup01_Widget.NotifyPopup01_Widget_C.ExecuteUbergraph_NotifyPopup01_Widget");
		
		UNotifyPopup01_Widget_C_ExecuteUbergraph_NotifyPopup01_Widget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNotifyPopup01_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNotifyPopup01_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NotifyPopup01_Widget.NotifyPopup01_Widget_C");
		return ptr;
	}

}


