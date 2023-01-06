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
	 * 		Name   -> Function BP_HUD_MainMenu.BP_HUD_MainMenu_C.CreateMainMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWB_ProMainMenu_C*                           WB_ProMainMenu                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HUD_MainMenu_C::CreateMainMenu(class UWB_ProMainMenu_C** WB_ProMainMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_MainMenu.BP_HUD_MainMenu_C.CreateMainMenu");
		
		ABP_HUD_MainMenu_C_CreateMainMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WB_ProMainMenu != nullptr)
			*WB_ProMainMenu = params.WB_ProMainMenu;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD_MainMenu.BP_HUD_MainMenu_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_HUD_MainMenu_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_MainMenu.BP_HUD_MainMenu_C.ReceiveBeginPlay");
		
		ABP_HUD_MainMenu_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD_MainMenu.BP_HUD_MainMenu_C.ExecuteUbergraph_BP_HUD_MainMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HUD_MainMenu_C::ExecuteUbergraph_BP_HUD_MainMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_MainMenu.BP_HUD_MainMenu_C.ExecuteUbergraph_BP_HUD_MainMenu");
		
		ABP_HUD_MainMenu_C_ExecuteUbergraph_BP_HUD_MainMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_HUD_MainMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_HUD_MainMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HUD_MainMenu.BP_HUD_MainMenu_C");
		return ptr;
	}

}


