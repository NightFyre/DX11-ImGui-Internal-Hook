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
	 * 		Name   -> Function WB_Frame03.WB_Frame03_C.Set_FrameColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                FrameColor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Frame03_C::Set_FrameColor(const struct FLinearColor& FrameColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Frame03.WB_Frame03_C.Set_FrameColor");
		
		UWB_Frame03_C_Set_FrameColor_Params params {};
		params.FrameColor = FrameColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_Frame03_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_Frame03_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_Frame03.WB_Frame03_C");
		return ptr;
	}

}


