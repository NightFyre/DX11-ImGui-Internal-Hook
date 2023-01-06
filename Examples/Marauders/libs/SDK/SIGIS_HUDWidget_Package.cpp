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
	 * 		Name   -> Function SIGIS_HUDWidget.SIGIS_HUDWidget_C.RefreshCoreMissionProgress
	 * 		Flags  -> ()
	 */
	void USIGIS_HUDWidget_C::RefreshCoreMissionProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_HUDWidget.SIGIS_HUDWidget_C.RefreshCoreMissionProgress");
		
		USIGIS_HUDWidget_C_RefreshCoreMissionProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_HUDWidget.SIGIS_HUDWidget_C.RefreshMissionProgress
	 * 		Flags  -> ()
	 */
	void USIGIS_HUDWidget_C::RefreshMissionProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_HUDWidget.SIGIS_HUDWidget_C.RefreshMissionProgress");
		
		USIGIS_HUDWidget_C_RefreshMissionProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_HUDWidget.SIGIS_HUDWidget_C.CheckStatusEffects
	 * 		Flags  -> ()
	 */
	void USIGIS_HUDWidget_C::CheckStatusEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_HUDWidget.SIGIS_HUDWidget_C.CheckStatusEffects");
		
		USIGIS_HUDWidget_C_CheckStatusEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_HUDWidget.SIGIS_HUDWidget_C.Get_Bar_Health_Percent
	 * 		Flags  -> ()
	 */
	float USIGIS_HUDWidget_C::Get_Bar_Health_Percent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_HUDWidget.SIGIS_HUDWidget_C.Get_Bar_Health_Percent");
		
		USIGIS_HUDWidget_C_Get_Bar_Health_Percent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_HUDWidget.SIGIS_HUDWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void USIGIS_HUDWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_HUDWidget.SIGIS_HUDWidget_C.Construct");
		
		USIGIS_HUDWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_HUDWidget.SIGIS_HUDWidget_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_HUDWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_HUDWidget.SIGIS_HUDWidget_C.Tick");
		
		USIGIS_HUDWidget_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_HUDWidget.SIGIS_HUDWidget_C.InventoryStateChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInventoryState                                    NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_HUDWidget_C::InventoryStateChange(EInventoryState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_HUDWidget.SIGIS_HUDWidget_C.InventoryStateChange");
		
		USIGIS_HUDWidget_C_InventoryStateChange_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_HUDWidget.SIGIS_HUDWidget_C.MenuOpenStateChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELootWindowState                                   NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_HUDWidget_C::MenuOpenStateChange(ELootWindowState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_HUDWidget.SIGIS_HUDWidget_C.MenuOpenStateChange");
		
		USIGIS_HUDWidget_C_MenuOpenStateChange_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_HUDWidget.SIGIS_HUDWidget_C.BndEvt__SIGIS_HUDWidget_Button_68_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_HUDWidget_C::BndEvt__SIGIS_HUDWidget_Button_68_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_HUDWidget.SIGIS_HUDWidget_C.BndEvt__SIGIS_HUDWidget_Button_68_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		USIGIS_HUDWidget_C_BndEvt__SIGIS_HUDWidget_Button_68_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_HUDWidget.SIGIS_HUDWidget_C.BndEvt__SIGIS_HUDWidget_Button_68_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_HUDWidget_C::BndEvt__SIGIS_HUDWidget_Button_68_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_HUDWidget.SIGIS_HUDWidget_C.BndEvt__SIGIS_HUDWidget_Button_68_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		USIGIS_HUDWidget_C_BndEvt__SIGIS_HUDWidget_Button_68_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_HUDWidget.SIGIS_HUDWidget_C.RefreshStaminaBarValues
	 * 		Flags  -> ()
	 */
	void USIGIS_HUDWidget_C::RefreshStaminaBarValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_HUDWidget.SIGIS_HUDWidget_C.RefreshStaminaBarValues");
		
		USIGIS_HUDWidget_C_RefreshStaminaBarValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_HUDWidget.SIGIS_HUDWidget_C.ExecuteUbergraph_SIGIS_HUDWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_HUDWidget_C::ExecuteUbergraph_SIGIS_HUDWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_HUDWidget.SIGIS_HUDWidget_C.ExecuteUbergraph_SIGIS_HUDWidget");
		
		USIGIS_HUDWidget_C_ExecuteUbergraph_SIGIS_HUDWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGIS_HUDWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGIS_HUDWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SIGIS_HUDWidget.SIGIS_HUDWidget_C");
		return ptr;
	}

}


