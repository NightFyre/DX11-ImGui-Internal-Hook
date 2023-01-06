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
	 * 		Name   -> Function HangarDoor_InShip_ControlPannel_Widget.HangarDoor_InShip_ControlPannel_Widget_C.Construct
	 * 		Flags  -> ()
	 */
	void UHangarDoor_InShip_ControlPannel_Widget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HangarDoor_InShip_ControlPannel_Widget.HangarDoor_InShip_ControlPannel_Widget_C.Construct");
		
		UHangarDoor_InShip_ControlPannel_Widget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HangarDoor_InShip_ControlPannel_Widget.HangarDoor_InShip_ControlPannel_Widget_C.ChangeHangarDoorUI_State
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_HangarDoorStates                                 StateToUse                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     LocationForSound                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHangarDoor_InShip_ControlPannel_Widget_C::ChangeHangarDoorUI_State(E_HangarDoorStates StateToUse, const struct FVector& LocationForSound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HangarDoor_InShip_ControlPannel_Widget.HangarDoor_InShip_ControlPannel_Widget_C.ChangeHangarDoorUI_State");
		
		UHangarDoor_InShip_ControlPannel_Widget_C_ChangeHangarDoorUI_State_Params params {};
		params.StateToUse = StateToUse;
		params.LocationForSound = LocationForSound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HangarDoor_InShip_ControlPannel_Widget.HangarDoor_InShip_ControlPannel_Widget_C.TriggerDossStartup
	 * 		Flags  -> ()
	 */
	void UHangarDoor_InShip_ControlPannel_Widget_C::TriggerDossStartup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HangarDoor_InShip_ControlPannel_Widget.HangarDoor_InShip_ControlPannel_Widget_C.TriggerDossStartup");
		
		UHangarDoor_InShip_ControlPannel_Widget_C_TriggerDossStartup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HangarDoor_InShip_ControlPannel_Widget.HangarDoor_InShip_ControlPannel_Widget_C.ResetDosScreen
	 * 		Flags  -> ()
	 */
	void UHangarDoor_InShip_ControlPannel_Widget_C::ResetDosScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HangarDoor_InShip_ControlPannel_Widget.HangarDoor_InShip_ControlPannel_Widget_C.ResetDosScreen");
		
		UHangarDoor_InShip_ControlPannel_Widget_C_ResetDosScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HangarDoor_InShip_ControlPannel_Widget.HangarDoor_InShip_ControlPannel_Widget_C.Set_HangarKeycodeInUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UHangarDoor_InShip_ControlPannel_Widget_C::Set_HangarKeycodeInUI(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HangarDoor_InShip_ControlPannel_Widget.HangarDoor_InShip_ControlPannel_Widget_C.Set_HangarKeycodeInUI");
		
		UHangarDoor_InShip_ControlPannel_Widget_C_Set_HangarKeycodeInUI_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HangarDoor_InShip_ControlPannel_Widget.HangarDoor_InShip_ControlPannel_Widget_C.ExecuteUbergraph_HangarDoor_InShip_ControlPannel_Widget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHangarDoor_InShip_ControlPannel_Widget_C::ExecuteUbergraph_HangarDoor_InShip_ControlPannel_Widget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HangarDoor_InShip_ControlPannel_Widget.HangarDoor_InShip_ControlPannel_Widget_C.ExecuteUbergraph_HangarDoor_InShip_ControlPannel_Widget");
		
		UHangarDoor_InShip_ControlPannel_Widget_C_ExecuteUbergraph_HangarDoor_InShip_ControlPannel_Widget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHangarDoor_InShip_ControlPannel_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHangarDoor_InShip_ControlPannel_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HangarDoor_InShip_ControlPannel_Widget.HangarDoor_InShip_ControlPannel_Widget_C");
		return ptr;
	}

}


