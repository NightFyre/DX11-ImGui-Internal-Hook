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
	 * 		Name   -> Function MainMenuSpecialForces.MainMenuSpecialForces_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMainMenuSpecialForces_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuSpecialForces.MainMenuSpecialForces_C.UserConstructionScript");
		
		AMainMenuSpecialForces_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E50E0
	 * 		Name   -> Function MainMenuSpecialForces.MainMenuSpecialForces_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AMainMenuSpecialForces_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuSpecialForces.MainMenuSpecialForces_C.ReceiveBeginPlay");
		
		AMainMenuSpecialForces_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E50E0
	 * 		Name   -> Function MainMenuSpecialForces.MainMenuSpecialForces_C.ExecuteUbergraph_MainMenuSpecialForces
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainMenuSpecialForces_C::ExecuteUbergraph_MainMenuSpecialForces(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuSpecialForces.MainMenuSpecialForces_C.ExecuteUbergraph_MainMenuSpecialForces");
		
		AMainMenuSpecialForces_C_ExecuteUbergraph_MainMenuSpecialForces_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMainMenuSpecialForces_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMainMenuSpecialForces_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MainMenuSpecialForces.MainMenuSpecialForces_C");
		return ptr;
	}

}


