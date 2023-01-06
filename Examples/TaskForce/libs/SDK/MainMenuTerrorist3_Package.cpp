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
	 * 		Name   -> Function MainMenuTerrorist3.MainMenuTerrorist3_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMainMenuTerrorist3_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuTerrorist3.MainMenuTerrorist3_C.UserConstructionScript");
		
		AMainMenuTerrorist3_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E50E0
	 * 		Name   -> Function MainMenuTerrorist3.MainMenuTerrorist3_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AMainMenuTerrorist3_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuTerrorist3.MainMenuTerrorist3_C.ReceiveBeginPlay");
		
		AMainMenuTerrorist3_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E50E0
	 * 		Name   -> Function MainMenuTerrorist3.MainMenuTerrorist3_C.ExecuteUbergraph_MainMenuTerrorist3
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainMenuTerrorist3_C::ExecuteUbergraph_MainMenuTerrorist3(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuTerrorist3.MainMenuTerrorist3_C.ExecuteUbergraph_MainMenuTerrorist3");
		
		AMainMenuTerrorist3_C_ExecuteUbergraph_MainMenuTerrorist3_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMainMenuTerrorist3_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMainMenuTerrorist3_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MainMenuTerrorist3.MainMenuTerrorist3_C");
		return ptr;
	}

}


