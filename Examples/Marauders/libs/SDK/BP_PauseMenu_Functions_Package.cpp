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
	 * 		Name   -> Function BP_PauseMenu_Functions.BP_PauseMenu_Functions_C.HandlePauseMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Player_Character_or_Pawn                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PauseMenu_Functions_C::HandlePauseMenu(class UObject* Player_Character_or_Pawn, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PauseMenu_Functions.BP_PauseMenu_Functions_C.HandlePauseMenu");
		
		UBP_PauseMenu_Functions_C_HandlePauseMenu_Params params {};
		params.Player_Character_or_Pawn = Player_Character_or_Pawn;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PauseMenu_Functions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PauseMenu_Functions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PauseMenu_Functions.BP_PauseMenu_Functions_C");
		return ptr;
	}

}


