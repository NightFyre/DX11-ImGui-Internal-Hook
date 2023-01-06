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
	 * 		Name   -> Function HUD_FrigatePartsHealthBars_SubWidget.HUD_FrigatePartsHealthBars_SubWidget_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_FrigatePartsHealthBars_SubWidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_FrigatePartsHealthBars_SubWidget.HUD_FrigatePartsHealthBars_SubWidget_C.PreConstruct");
		
		UHUD_FrigatePartsHealthBars_SubWidget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_FrigatePartsHealthBars_SubWidget.HUD_FrigatePartsHealthBars_SubWidget_C.SetBarPercentValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              PercentAmount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_FrigatePartsHealthBars_SubWidget_C::SetBarPercentValue(float PercentAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_FrigatePartsHealthBars_SubWidget.HUD_FrigatePartsHealthBars_SubWidget_C.SetBarPercentValue");
		
		UHUD_FrigatePartsHealthBars_SubWidget_C_SetBarPercentValue_Params params {};
		params.PercentAmount = PercentAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_FrigatePartsHealthBars_SubWidget.HUD_FrigatePartsHealthBars_SubWidget_C.IsPartDisabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDisabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_FrigatePartsHealthBars_SubWidget_C::IsPartDisabled(bool IsDisabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_FrigatePartsHealthBars_SubWidget.HUD_FrigatePartsHealthBars_SubWidget_C.IsPartDisabled");
		
		UHUD_FrigatePartsHealthBars_SubWidget_C_IsPartDisabled_Params params {};
		params.IsDisabled = IsDisabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_FrigatePartsHealthBars_SubWidget.HUD_FrigatePartsHealthBars_SubWidget_C.Delayed_ShipHealthChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TargetHealth                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Delay_Duration                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_FrigatePartsHealthBars_SubWidget_C::Delayed_ShipHealthChange(float TargetHealth, float Delay_Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_FrigatePartsHealthBars_SubWidget.HUD_FrigatePartsHealthBars_SubWidget_C.Delayed_ShipHealthChange");
		
		UHUD_FrigatePartsHealthBars_SubWidget_C_Delayed_ShipHealthChange_Params params {};
		params.TargetHealth = TargetHealth;
		params.Delay_Duration = Delay_Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_FrigatePartsHealthBars_SubWidget.HUD_FrigatePartsHealthBars_SubWidget_C.OverrideWithCorrectShipImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  FrontImage_ToUse                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  BackgroundImage_ToUse                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_FrigatePartsHealthBars_SubWidget_C::OverrideWithCorrectShipImage(class UTexture2D* FrontImage_ToUse, class UTexture2D* BackgroundImage_ToUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_FrigatePartsHealthBars_SubWidget.HUD_FrigatePartsHealthBars_SubWidget_C.OverrideWithCorrectShipImage");
		
		UHUD_FrigatePartsHealthBars_SubWidget_C_OverrideWithCorrectShipImage_Params params {};
		params.FrontImage_ToUse = FrontImage_ToUse;
		params.BackgroundImage_ToUse = BackgroundImage_ToUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_FrigatePartsHealthBars_SubWidget.HUD_FrigatePartsHealthBars_SubWidget_C.ExecuteUbergraph_HUD_FrigatePartsHealthBars_SubWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_FrigatePartsHealthBars_SubWidget_C::ExecuteUbergraph_HUD_FrigatePartsHealthBars_SubWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_FrigatePartsHealthBars_SubWidget.HUD_FrigatePartsHealthBars_SubWidget_C.ExecuteUbergraph_HUD_FrigatePartsHealthBars_SubWidget");
		
		UHUD_FrigatePartsHealthBars_SubWidget_C_ExecuteUbergraph_HUD_FrigatePartsHealthBars_SubWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_FrigatePartsHealthBars_SubWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_FrigatePartsHealthBars_SubWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_FrigatePartsHealthBars_SubWidget.HUD_FrigatePartsHealthBars_SubWidget_C");
		return ptr;
	}

}


