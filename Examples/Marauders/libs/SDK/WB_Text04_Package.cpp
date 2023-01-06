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
	 * 		Name   -> Function WB_Text04.WB_Text04_C.GetHB_Text_Size
	 * 		Flags  -> ()
	 */
	struct FVector2D UWB_Text04_C::GetHB_Text_Size()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Text04.WB_Text04_C.GetHB_Text_Size");
		
		UWB_Text04_C_GetHB_Text_Size_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Text04.WB_Text04_C.UpdateFontInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFont*                                       Font                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UFontFace*                                   FontFace                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            FontSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Text04_C::UpdateFontInfo(class UFont* Font, class UFontFace* FontFace, int32_t FontSize, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Text04.WB_Text04_C.UpdateFontInfo");
		
		UWB_Text04_C_UpdateFontInfo_Params params {};
		params.Font = Font;
		params.FontFace = FontFace;
		params.FontSize = FontSize;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Text04.WB_Text04_C.UpdateText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWB_Text04_C::UpdateText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Text04.WB_Text04_C.UpdateText");
		
		UWB_Text04_C_UpdateText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Text04.WB_Text04_C.AddHintIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Widget38x38                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Text04_C::AddHintIcon(class UClass* Widget38x38)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Text04.WB_Text04_C.AddHintIcon");
		
		UWB_Text04_C_AddHintIcon_Params params {};
		params.Widget38x38 = Widget38x38;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Text04.WB_Text04_C.ExecuteUbergraph_WB_Text04
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Text04_C::ExecuteUbergraph_WB_Text04(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Text04.WB_Text04_C.ExecuteUbergraph_WB_Text04");
		
		UWB_Text04_C_ExecuteUbergraph_WB_Text04_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_Text04_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_Text04_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_Text04.WB_Text04_C");
		return ptr;
	}

}


