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
	 * 		Name   -> Function WB_FillColor.WB_FillColor_C.SetFillColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_FillColor_C::SetFillColor(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_FillColor.WB_FillColor_C.SetFillColor");
		
		UWB_FillColor_C_SetFillColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_FillColor.WB_FillColor_C.AddColorV_Value
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InColor                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ExtraV                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                OutColor                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_FillColor_C::AddColorV_Value(const struct FLinearColor& InColor, float ExtraV, struct FLinearColor* OutColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_FillColor.WB_FillColor_C.AddColorV_Value");
		
		UWB_FillColor_C_AddColorV_Value_Params params {};
		params.InColor = InColor;
		params.ExtraV = ExtraV;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutColor != nullptr)
			*OutColor = params.OutColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_FillColor.WB_FillColor_C.OnUnhovered
	 * 		Flags  -> ()
	 */
	void UWB_FillColor_C::OnUnhovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_FillColor.WB_FillColor_C.OnUnhovered");
		
		UWB_FillColor_C_OnUnhovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_FillColor.WB_FillColor_C.OnClicked
	 * 		Flags  -> ()
	 */
	void UWB_FillColor_C::OnClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_FillColor.WB_FillColor_C.OnClicked");
		
		UWB_FillColor_C_OnClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_FillColor.WB_FillColor_C.OnHovered
	 * 		Flags  -> ()
	 */
	void UWB_FillColor_C::OnHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_FillColor.WB_FillColor_C.OnHovered");
		
		UWB_FillColor_C_OnHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_FillColor.WB_FillColor_C.OnDisabled
	 * 		Flags  -> ()
	 */
	void UWB_FillColor_C::OnDisabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_FillColor.WB_FillColor_C.OnDisabled");
		
		UWB_FillColor_C_OnDisabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_FillColor.WB_FillColor_C.Construct
	 * 		Flags  -> ()
	 */
	void UWB_FillColor_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_FillColor.WB_FillColor_C.Construct");
		
		UWB_FillColor_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_FillColor.WB_FillColor_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWB_FillColor_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_FillColor.WB_FillColor_C.PreConstruct");
		
		UWB_FillColor_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_FillColor.WB_FillColor_C.ExecuteUbergraph_WB_FillColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_FillColor_C::ExecuteUbergraph_WB_FillColor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_FillColor.WB_FillColor_C.ExecuteUbergraph_WB_FillColor");
		
		UWB_FillColor_C_ExecuteUbergraph_WB_FillColor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_FillColor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_FillColor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_FillColor.WB_FillColor_C");
		return ptr;
	}

}


