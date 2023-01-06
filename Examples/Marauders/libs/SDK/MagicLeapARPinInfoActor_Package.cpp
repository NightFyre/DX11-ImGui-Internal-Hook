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
	 * 		Name   -> Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.UpdatePinState
	 * 		Flags  -> ()
	 */
	void AMagicLeapARPinInfoActor_C::UpdatePinState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.UpdatePinState");
		
		AMagicLeapARPinInfoActor_C_UpdatePinState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AMagicLeapARPinInfoActor_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.UserConstructionScript");
		
		AMagicLeapARPinInfoActor_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.OnUpdateARPinState
	 * 		Flags  -> ()
	 */
	void AMagicLeapARPinInfoActor_C::OnUpdateARPinState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.OnUpdateARPinState");
		
		AMagicLeapARPinInfoActor_C_OnUpdateARPinState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMagicLeapARPinInfoActor_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.ReceiveTick");
		
		AMagicLeapARPinInfoActor_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.ExecuteUbergraph_MagicLeapARPinInfoActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMagicLeapARPinInfoActor_C::ExecuteUbergraph_MagicLeapARPinInfoActor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.ExecuteUbergraph_MagicLeapARPinInfoActor");
		
		AMagicLeapARPinInfoActor_C_ExecuteUbergraph_MagicLeapARPinInfoActor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMagicLeapARPinInfoActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMagicLeapARPinInfoActor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C");
		return ptr;
	}

}


