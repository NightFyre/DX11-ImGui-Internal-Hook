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
	 * 		Name   -> Function HUD_StatusEffect_SubWidget.HUD_StatusEffect_SubWidget_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_StatusEffect_SubWidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_StatusEffect_SubWidget.HUD_StatusEffect_SubWidget_C.PreConstruct");
		
		UHUD_StatusEffect_SubWidget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_StatusEffect_SubWidget.HUD_StatusEffect_SubWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_StatusEffect_SubWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_StatusEffect_SubWidget.HUD_StatusEffect_SubWidget_C.Construct");
		
		UHUD_StatusEffect_SubWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_StatusEffect_SubWidget.HUD_StatusEffect_SubWidget_C.SetVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldBeVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_StatusEffect_SubWidget_C::SetVisible(bool ShouldBeVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_StatusEffect_SubWidget.HUD_StatusEffect_SubWidget_C.SetVisible");
		
		UHUD_StatusEffect_SubWidget_C_SetVisible_Params params {};
		params.ShouldBeVisible = ShouldBeVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_StatusEffect_SubWidget.HUD_StatusEffect_SubWidget_C.ExecuteUbergraph_HUD_StatusEffect_SubWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_StatusEffect_SubWidget_C::ExecuteUbergraph_HUD_StatusEffect_SubWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_StatusEffect_SubWidget.HUD_StatusEffect_SubWidget_C.ExecuteUbergraph_HUD_StatusEffect_SubWidget");
		
		UHUD_StatusEffect_SubWidget_C_ExecuteUbergraph_HUD_StatusEffect_SubWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_StatusEffect_SubWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_StatusEffect_SubWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_StatusEffect_SubWidget.HUD_StatusEffect_SubWidget_C");
		return ptr;
	}

}


