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
	 * 		Name   -> Function HUD_AreaShipPopup.HUD_AreaShipPopup_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_AreaShipPopup_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_AreaShipPopup.HUD_AreaShipPopup_C.PreConstruct");
		
		UHUD_AreaShipPopup_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_AreaShipPopup.HUD_AreaShipPopup_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_AreaShipPopup_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_AreaShipPopup.HUD_AreaShipPopup_C.Construct");
		
		UHUD_AreaShipPopup_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_AreaShipPopup.HUD_AreaShipPopup_C.FinishedAnimSoCloseAll
	 * 		Flags  -> ()
	 */
	void UHUD_AreaShipPopup_C::FinishedAnimSoCloseAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_AreaShipPopup.HUD_AreaShipPopup_C.FinishedAnimSoCloseAll");
		
		UHUD_AreaShipPopup_C_FinishedAnimSoCloseAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_AreaShipPopup.HUD_AreaShipPopup_C.ExecuteUbergraph_HUD_AreaShipPopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_AreaShipPopup_C::ExecuteUbergraph_HUD_AreaShipPopup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_AreaShipPopup.HUD_AreaShipPopup_C.ExecuteUbergraph_HUD_AreaShipPopup");
		
		UHUD_AreaShipPopup_C_ExecuteUbergraph_HUD_AreaShipPopup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_AreaShipPopup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_AreaShipPopup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_AreaShipPopup.HUD_AreaShipPopup_C");
		return ptr;
	}

}


