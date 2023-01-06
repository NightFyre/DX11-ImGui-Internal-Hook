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
	 * 		Name   -> Function BPI_ShortcutUpdatable.BPI_ShortcutUpdatable_C.UpdateShortcut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EShortcutKeyType                                   ShortcutToDisplay                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_ShortcutUpdatable_C::UpdateShortcut(EShortcutKeyType ShortcutToDisplay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_ShortcutUpdatable.BPI_ShortcutUpdatable_C.UpdateShortcut");
		
		UBPI_ShortcutUpdatable_C_UpdateShortcut_Params params {};
		params.ShortcutToDisplay = ShortcutToDisplay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_ShortcutUpdatable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_ShortcutUpdatable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_ShortcutUpdatable.BPI_ShortcutUpdatable_C");
		return ptr;
	}

}


