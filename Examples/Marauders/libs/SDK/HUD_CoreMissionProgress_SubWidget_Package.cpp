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
	 * 		Name   -> Function HUD_CoreMissionProgress_SubWidget.HUD_CoreMissionProgress_SubWidget_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_CoreMissionProgress_SubWidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CoreMissionProgress_SubWidget.HUD_CoreMissionProgress_SubWidget_C.PreConstruct");
		
		UHUD_CoreMissionProgress_SubWidget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CoreMissionProgress_SubWidget.HUD_CoreMissionProgress_SubWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_CoreMissionProgress_SubWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CoreMissionProgress_SubWidget.HUD_CoreMissionProgress_SubWidget_C.Construct");
		
		UHUD_CoreMissionProgress_SubWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CoreMissionProgress_SubWidget.HUD_CoreMissionProgress_SubWidget_C.SetStateAndRefreshInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FChapterMissionUI                           CurrentCoreMissionInfo                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UHUD_CoreMissionProgress_SubWidget_C::SetStateAndRefreshInfo(const struct FChapterMissionUI& CurrentCoreMissionInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CoreMissionProgress_SubWidget.HUD_CoreMissionProgress_SubWidget_C.SetStateAndRefreshInfo");
		
		UHUD_CoreMissionProgress_SubWidget_C_SetStateAndRefreshInfo_Params params {};
		params.CurrentCoreMissionInfo = CurrentCoreMissionInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CoreMissionProgress_SubWidget.HUD_CoreMissionProgress_SubWidget_C.ExecuteUbergraph_HUD_CoreMissionProgress_SubWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_CoreMissionProgress_SubWidget_C::ExecuteUbergraph_HUD_CoreMissionProgress_SubWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CoreMissionProgress_SubWidget.HUD_CoreMissionProgress_SubWidget_C.ExecuteUbergraph_HUD_CoreMissionProgress_SubWidget");
		
		UHUD_CoreMissionProgress_SubWidget_C_ExecuteUbergraph_HUD_CoreMissionProgress_SubWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_CoreMissionProgress_SubWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_CoreMissionProgress_SubWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_CoreMissionProgress_SubWidget.HUD_CoreMissionProgress_SubWidget_C");
		return ptr;
	}

}


