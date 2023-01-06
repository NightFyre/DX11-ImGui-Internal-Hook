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
	 * 		Name   -> Function BP_PC_InputDetect.BP_PC_InputDetect_C.FindRightInputType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        InputKey                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		struct FKey                                        LastPressedKey                                             (Parm, OutParm, HasGetValueTypeHash)
	 */
	void ABP_PC_InputDetect_C::FindRightInputType(const struct FKey& InputKey, struct FKey* LastPressedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PC_InputDetect.BP_PC_InputDetect_C.FindRightInputType");
		
		ABP_PC_InputDetect_C_FindRightInputType_Params params {};
		params.InputKey = InputKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LastPressedKey != nullptr)
			*LastPressedKey = params.LastPressedKey;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PC_InputDetect.BP_PC_InputDetect_C.GetIsMouseMoving
	 * 		Flags  -> ()
	 */
	bool ABP_PC_InputDetect_C::GetIsMouseMoving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PC_InputDetect.BP_PC_InputDetect_C.GetIsMouseMoving");
		
		ABP_PC_InputDetect_C_GetIsMouseMoving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PC_InputDetect.BP_PC_InputDetect_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_PC_InputDetect_C::InpActEvt_AnyKey_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PC_InputDetect.BP_PC_InputDetect_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_1");
		
		ABP_PC_InputDetect_C_InpActEvt_AnyKey_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PC_InputDetect.BP_PC_InputDetect_C.UpdateMouseCursor
	 * 		Flags  -> ()
	 */
	void ABP_PC_InputDetect_C::UpdateMouseCursor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PC_InputDetect.BP_PC_InputDetect_C.UpdateMouseCursor");
		
		ABP_PC_InputDetect_C_UpdateMouseCursor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PC_InputDetect.BP_PC_InputDetect_C.ExecuteUbergraph_BP_PC_InputDetect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PC_InputDetect_C::ExecuteUbergraph_BP_PC_InputDetect(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PC_InputDetect.BP_PC_InputDetect_C.ExecuteUbergraph_BP_PC_InputDetect");
		
		ABP_PC_InputDetect_C_ExecuteUbergraph_BP_PC_InputDetect_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PC_InputDetect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PC_InputDetect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PC_InputDetect.BP_PC_InputDetect_C");
		return ptr;
	}

}


