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
	 * 		Name   -> Function PilotSeat_Screen.PilotSeat_Screen_C.Construct
	 * 		Flags  -> ()
	 */
	void UPilotSeat_Screen_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PilotSeat_Screen.PilotSeat_Screen_C.Construct");
		
		UPilotSeat_Screen_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PilotSeat_Screen.PilotSeat_Screen_C.TriggerDossStartup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     WorldLocationForSound                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPilotSeat_Screen_C::TriggerDossStartup(const struct FVector& WorldLocationForSound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PilotSeat_Screen.PilotSeat_Screen_C.TriggerDossStartup");
		
		UPilotSeat_Screen_C_TriggerDossStartup_Params params {};
		params.WorldLocationForSound = WorldLocationForSound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PilotSeat_Screen.PilotSeat_Screen_C.ResetDosScreen
	 * 		Flags  -> ()
	 */
	void UPilotSeat_Screen_C::ResetDosScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PilotSeat_Screen.PilotSeat_Screen_C.ResetDosScreen");
		
		UPilotSeat_Screen_C_ResetDosScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PilotSeat_Screen.PilotSeat_Screen_C.TurnPilotSeatScreenOn
	 * 		Flags  -> ()
	 */
	void UPilotSeat_Screen_C::TurnPilotSeatScreenOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PilotSeat_Screen.PilotSeat_Screen_C.TurnPilotSeatScreenOn");
		
		UPilotSeat_Screen_C_TurnPilotSeatScreenOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PilotSeat_Screen.PilotSeat_Screen_C.TurnPilotSeatScreenOff
	 * 		Flags  -> ()
	 */
	void UPilotSeat_Screen_C::TurnPilotSeatScreenOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PilotSeat_Screen.PilotSeat_Screen_C.TurnPilotSeatScreenOff");
		
		UPilotSeat_Screen_C_TurnPilotSeatScreenOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PilotSeat_Screen.PilotSeat_Screen_C.ExecuteUbergraph_PilotSeat_Screen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPilotSeat_Screen_C::ExecuteUbergraph_PilotSeat_Screen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PilotSeat_Screen.PilotSeat_Screen_C.ExecuteUbergraph_PilotSeat_Screen");
		
		UPilotSeat_Screen_C_ExecuteUbergraph_PilotSeat_Screen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPilotSeat_Screen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPilotSeat_Screen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PilotSeat_Screen.PilotSeat_Screen_C");
		return ptr;
	}

}


