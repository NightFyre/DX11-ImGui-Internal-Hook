/**
 * Name: Task_Force
 * Version: 0.3.3.1525
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x008E50E0
	 * 		Name   -> Function MainMenuTerrorist2.MainMenuTerrorist2_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMainMenuTerrorist2_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuTerrorist2.MainMenuTerrorist2_C.UserConstructionScript");
		
		AMainMenuTerrorist2_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E50E0
	 * 		Name   -> Function MainMenuTerrorist2.MainMenuTerrorist2_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AMainMenuTerrorist2_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuTerrorist2.MainMenuTerrorist2_C.ReceiveBeginPlay");
		
		AMainMenuTerrorist2_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E50E0
	 * 		Name   -> Function MainMenuTerrorist2.MainMenuTerrorist2_C.ExecuteUbergraph_MainMenuTerrorist2
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainMenuTerrorist2_C::ExecuteUbergraph_MainMenuTerrorist2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuTerrorist2.MainMenuTerrorist2_C.ExecuteUbergraph_MainMenuTerrorist2");
		
		AMainMenuTerrorist2_C_ExecuteUbergraph_MainMenuTerrorist2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMainMenuTerrorist2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMainMenuTerrorist2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MainMenuTerrorist2.MainMenuTerrorist2_C");
		return ptr;
	}

}


