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
	 * 		Name   -> Function HangarDoorControl.HangarDoorControl_C.SetStateOnUIWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_HangarDoorStates                                 CurrentDoorstate                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHangarDoorControl_C::SetStateOnUIWidget(E_HangarDoorStates CurrentDoorstate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HangarDoorControl.HangarDoorControl_C.SetStateOnUIWidget");
		
		AHangarDoorControl_C_SetStateOnUIWidget_Params params {};
		params.CurrentDoorstate = CurrentDoorstate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HangarDoorControl.HangarDoorControl_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AHangarDoorControl_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HangarDoorControl.HangarDoorControl_C.UserConstructionScript");
		
		AHangarDoorControl_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HangarDoorControl.HangarDoorControl_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AHangarDoorControl_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HangarDoorControl.HangarDoorControl_C.ReceiveBeginPlay");
		
		AHangarDoorControl_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HangarDoorControl.HangarDoorControl_C.TriggerHangarDoorControls
	 * 		Flags  -> ()
	 */
	void AHangarDoorControl_C::TriggerHangarDoorControls()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HangarDoorControl.HangarDoorControl_C.TriggerHangarDoorControls");
		
		AHangarDoorControl_C_TriggerHangarDoorControls_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HangarDoorControl.HangarDoorControl_C.ExecuteUbergraph_HangarDoorControl
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHangarDoorControl_C::ExecuteUbergraph_HangarDoorControl(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HangarDoorControl.HangarDoorControl_C.ExecuteUbergraph_HangarDoorControl");
		
		AHangarDoorControl_C_ExecuteUbergraph_HangarDoorControl_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHangarDoorControl_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHangarDoorControl_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HangarDoorControl.HangarDoorControl_C");
		return ptr;
	}

}


