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
	 * 		Name   -> Function WB_Frame02.WB_Frame02_C.Set_FrameColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                FrameColor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Frame02_C::Set_FrameColor(const struct FLinearColor& FrameColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Frame02.WB_Frame02_C.Set_FrameColor");
		
		UWB_Frame02_C_Set_FrameColor_Params params {};
		params.FrameColor = FrameColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Frame02.WB_Frame02_C.OnUnhovered
	 * 		Flags  -> ()
	 */
	void UWB_Frame02_C::OnUnhovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Frame02.WB_Frame02_C.OnUnhovered");
		
		UWB_Frame02_C_OnUnhovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Frame02.WB_Frame02_C.OnClicked
	 * 		Flags  -> ()
	 */
	void UWB_Frame02_C::OnClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Frame02.WB_Frame02_C.OnClicked");
		
		UWB_Frame02_C_OnClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Frame02.WB_Frame02_C.OnHovered
	 * 		Flags  -> ()
	 */
	void UWB_Frame02_C::OnHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Frame02.WB_Frame02_C.OnHovered");
		
		UWB_Frame02_C_OnHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Frame02.WB_Frame02_C.OnDisabled
	 * 		Flags  -> ()
	 */
	void UWB_Frame02_C::OnDisabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Frame02.WB_Frame02_C.OnDisabled");
		
		UWB_Frame02_C_OnDisabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Frame02.WB_Frame02_C.ExecuteUbergraph_WB_Frame02
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Frame02_C::ExecuteUbergraph_WB_Frame02(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Frame02.WB_Frame02_C.ExecuteUbergraph_WB_Frame02");
		
		UWB_Frame02_C_ExecuteUbergraph_WB_Frame02_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_Frame02_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_Frame02_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_Frame02.WB_Frame02_C");
		return ptr;
	}

}


