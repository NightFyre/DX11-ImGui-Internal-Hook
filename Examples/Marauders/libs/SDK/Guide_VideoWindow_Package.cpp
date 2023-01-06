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
	 * 		Name   -> Function Guide_VideoWindow.Guide_VideoWindow_C.Construct
	 * 		Flags  -> ()
	 */
	void UGuide_VideoWindow_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Guide_VideoWindow.Guide_VideoWindow_C.Construct");
		
		UGuide_VideoWindow_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Guide_VideoWindow.Guide_VideoWindow_C.ExecuteUbergraph_Guide_VideoWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuide_VideoWindow_C::ExecuteUbergraph_Guide_VideoWindow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Guide_VideoWindow.Guide_VideoWindow_C.ExecuteUbergraph_Guide_VideoWindow");
		
		UGuide_VideoWindow_C_ExecuteUbergraph_Guide_VideoWindow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGuide_VideoWindow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGuide_VideoWindow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Guide_VideoWindow.Guide_VideoWindow_C");
		return ptr;
	}

}


