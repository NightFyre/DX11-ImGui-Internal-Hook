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
	 * 		Name   -> Function HUD_Message_SubWidget.HUD_Message_SubWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_Message_SubWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Message_SubWidget.HUD_Message_SubWidget_C.Construct");
		
		UHUD_Message_SubWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Message_SubWidget.HUD_Message_SubWidget_C.FinishedAnim
	 * 		Flags  -> ()
	 */
	void UHUD_Message_SubWidget_C::FinishedAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Message_SubWidget.HUD_Message_SubWidget_C.FinishedAnim");
		
		UHUD_Message_SubWidget_C_FinishedAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Message_SubWidget.HUD_Message_SubWidget_C.ExecuteUbergraph_HUD_Message_SubWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Message_SubWidget_C::ExecuteUbergraph_HUD_Message_SubWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Message_SubWidget.HUD_Message_SubWidget_C.ExecuteUbergraph_HUD_Message_SubWidget");
		
		UHUD_Message_SubWidget_C_ExecuteUbergraph_HUD_Message_SubWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_Message_SubWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Message_SubWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Message_SubWidget.HUD_Message_SubWidget_C");
		return ptr;
	}

}


