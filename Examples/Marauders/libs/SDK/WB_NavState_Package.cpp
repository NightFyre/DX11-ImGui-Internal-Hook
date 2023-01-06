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
	 * 		Name   -> Function WB_NavState.WB_NavState_C.SetColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                BrushColor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_NavState_C::SetColor(const struct FLinearColor& BrushColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_NavState.WB_NavState_C.SetColor");
		
		UWB_NavState_C_SetColor_Params params {};
		params.BrushColor = BrushColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_NavState.WB_NavState_C.ExecuteUbergraph_WB_NavState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_NavState_C::ExecuteUbergraph_WB_NavState(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_NavState.WB_NavState_C.ExecuteUbergraph_WB_NavState");
		
		UWB_NavState_C_ExecuteUbergraph_WB_NavState_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_NavState_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_NavState_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_NavState.WB_NavState_C");
		return ptr;
	}

}


