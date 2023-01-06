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
	 * 		Name   -> Function FactionStanding_SubWidget.FactionStanding_SubWidget_C.UpdateFactionInfo
	 * 		Flags  -> ()
	 */
	void UFactionStanding_SubWidget_C::UpdateFactionInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FactionStanding_SubWidget.FactionStanding_SubWidget_C.UpdateFactionInfo");
		
		UFactionStanding_SubWidget_C_UpdateFactionInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FactionStanding_SubWidget.FactionStanding_SubWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UFactionStanding_SubWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FactionStanding_SubWidget.FactionStanding_SubWidget_C.Construct");
		
		UFactionStanding_SubWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FactionStanding_SubWidget.FactionStanding_SubWidget_C.ExecuteUbergraph_FactionStanding_SubWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFactionStanding_SubWidget_C::ExecuteUbergraph_FactionStanding_SubWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FactionStanding_SubWidget.FactionStanding_SubWidget_C.ExecuteUbergraph_FactionStanding_SubWidget");
		
		UFactionStanding_SubWidget_C_ExecuteUbergraph_FactionStanding_SubWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFactionStanding_SubWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFactionStanding_SubWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FactionStanding_SubWidget.FactionStanding_SubWidget_C");
		return ptr;
	}

}


