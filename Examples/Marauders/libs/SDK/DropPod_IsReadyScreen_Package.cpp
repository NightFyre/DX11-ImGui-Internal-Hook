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
	 * 		Name   -> Function DropPod_IsReadyScreen.DropPod_IsReadyScreen_C.Construct
	 * 		Flags  -> ()
	 */
	void UDropPod_IsReadyScreen_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DropPod_IsReadyScreen.DropPod_IsReadyScreen_C.Construct");
		
		UDropPod_IsReadyScreen_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DropPod_IsReadyScreen.DropPod_IsReadyScreen_C.TriggerDossStartup
	 * 		Flags  -> ()
	 */
	void UDropPod_IsReadyScreen_C::TriggerDossStartup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DropPod_IsReadyScreen.DropPod_IsReadyScreen_C.TriggerDossStartup");
		
		UDropPod_IsReadyScreen_C_TriggerDossStartup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DropPod_IsReadyScreen.DropPod_IsReadyScreen_C.ResetDosScreen
	 * 		Flags  -> ()
	 */
	void UDropPod_IsReadyScreen_C::ResetDosScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DropPod_IsReadyScreen.DropPod_IsReadyScreen_C.ResetDosScreen");
		
		UDropPod_IsReadyScreen_C_ResetDosScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DropPod_IsReadyScreen.DropPod_IsReadyScreen_C.SetState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_DropPodDoorStates                                WhichState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDropPod_IsReadyScreen_C::SetState(E_DropPodDoorStates WhichState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DropPod_IsReadyScreen.DropPod_IsReadyScreen_C.SetState");
		
		UDropPod_IsReadyScreen_C_SetState_Params params {};
		params.WhichState = WhichState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DropPod_IsReadyScreen.DropPod_IsReadyScreen_C.Pretendtimer
	 * 		Flags  -> ()
	 */
	void UDropPod_IsReadyScreen_C::Pretendtimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DropPod_IsReadyScreen.DropPod_IsReadyScreen_C.Pretendtimer");
		
		UDropPod_IsReadyScreen_C_Pretendtimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DropPod_IsReadyScreen.DropPod_IsReadyScreen_C.ExecuteUbergraph_DropPod_IsReadyScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDropPod_IsReadyScreen_C::ExecuteUbergraph_DropPod_IsReadyScreen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DropPod_IsReadyScreen.DropPod_IsReadyScreen_C.ExecuteUbergraph_DropPod_IsReadyScreen");
		
		UDropPod_IsReadyScreen_C_ExecuteUbergraph_DropPod_IsReadyScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDropPod_IsReadyScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDropPod_IsReadyScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DropPod_IsReadyScreen.DropPod_IsReadyScreen_C");
		return ptr;
	}

}


