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
	 * 		Name   -> Function MainMenuTerrorist1.MainMenuTerrorist1_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMainMenuTerrorist1_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuTerrorist1.MainMenuTerrorist1_C.UserConstructionScript");
		
		AMainMenuTerrorist1_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E50E0
	 * 		Name   -> Function MainMenuTerrorist1.MainMenuTerrorist1_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AMainMenuTerrorist1_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuTerrorist1.MainMenuTerrorist1_C.ReceiveBeginPlay");
		
		AMainMenuTerrorist1_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E50E0
	 * 		Name   -> Function MainMenuTerrorist1.MainMenuTerrorist1_C.ExecuteUbergraph_MainMenuTerrorist1
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainMenuTerrorist1_C::ExecuteUbergraph_MainMenuTerrorist1(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuTerrorist1.MainMenuTerrorist1_C.ExecuteUbergraph_MainMenuTerrorist1");
		
		AMainMenuTerrorist1_C_ExecuteUbergraph_MainMenuTerrorist1_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMainMenuTerrorist1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMainMenuTerrorist1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MainMenuTerrorist1.MainMenuTerrorist1_C");
		return ptr;
	}

}


