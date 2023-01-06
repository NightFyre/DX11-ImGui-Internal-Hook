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
	 * 		Name   -> Function BP_PC_MainMenu.BP_PC_MainMenu_C.UpdateInputMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShowMouseCursor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UWidget*                                     InWidgetToFocus                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PC_MainMenu_C::UpdateInputMode(bool ShowMouseCursor, class UWidget* InWidgetToFocus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PC_MainMenu.BP_PC_MainMenu_C.UpdateInputMode");
		
		ABP_PC_MainMenu_C_UpdateInputMode_Params params {};
		params.ShowMouseCursor = ShowMouseCursor;
		params.InWidgetToFocus = InWidgetToFocus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PC_MainMenu.BP_PC_MainMenu_C.ExecuteUbergraph_BP_PC_MainMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PC_MainMenu_C::ExecuteUbergraph_BP_PC_MainMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PC_MainMenu.BP_PC_MainMenu_C.ExecuteUbergraph_BP_PC_MainMenu");
		
		ABP_PC_MainMenu_C_ExecuteUbergraph_BP_PC_MainMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PC_MainMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PC_MainMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PC_MainMenu.BP_PC_MainMenu_C");
		return ptr;
	}

}


