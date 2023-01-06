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
	 * 		Name   -> Function HUD_MissionProgress_SubWidget.HUD_MissionProgress_SubWidget_C.SetStateAndRefreshInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_ContractStates                                   WhatState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        MissionName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_MissionProgress_SubWidget_C::SetStateAndRefreshInfo(E_ContractStates WhatState, const class FName& MissionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_MissionProgress_SubWidget.HUD_MissionProgress_SubWidget_C.SetStateAndRefreshInfo");
		
		UHUD_MissionProgress_SubWidget_C_SetStateAndRefreshInfo_Params params {};
		params.WhatState = WhatState;
		params.MissionName = MissionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_MissionProgress_SubWidget.HUD_MissionProgress_SubWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_MissionProgress_SubWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_MissionProgress_SubWidget.HUD_MissionProgress_SubWidget_C.Construct");
		
		UHUD_MissionProgress_SubWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_MissionProgress_SubWidget.HUD_MissionProgress_SubWidget_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_MissionProgress_SubWidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_MissionProgress_SubWidget.HUD_MissionProgress_SubWidget_C.PreConstruct");
		
		UHUD_MissionProgress_SubWidget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_MissionProgress_SubWidget.HUD_MissionProgress_SubWidget_C.ExecuteUbergraph_HUD_MissionProgress_SubWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_MissionProgress_SubWidget_C::ExecuteUbergraph_HUD_MissionProgress_SubWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_MissionProgress_SubWidget.HUD_MissionProgress_SubWidget_C.ExecuteUbergraph_HUD_MissionProgress_SubWidget");
		
		UHUD_MissionProgress_SubWidget_C_ExecuteUbergraph_HUD_MissionProgress_SubWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_MissionProgress_SubWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_MissionProgress_SubWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_MissionProgress_SubWidget.HUD_MissionProgress_SubWidget_C");
		return ptr;
	}

}


