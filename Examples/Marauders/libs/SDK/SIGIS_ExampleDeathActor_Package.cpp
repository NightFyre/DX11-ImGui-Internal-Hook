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
	 * 		Name   -> Function SIGIS_ExampleDeathActor.SIGIS_ExampleDeathActor_C.ActiveCalled
	 * 		Flags  -> ()
	 */
	void ASIGIS_ExampleDeathActor_C::ActiveCalled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleDeathActor.SIGIS_ExampleDeathActor_C.ActiveCalled");
		
		ASIGIS_ExampleDeathActor_C_ActiveCalled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleDeathActor.SIGIS_ExampleDeathActor_C.DeActiveCalled
	 * 		Flags  -> ()
	 */
	void ASIGIS_ExampleDeathActor_C::DeActiveCalled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleDeathActor.SIGIS_ExampleDeathActor_C.DeActiveCalled");
		
		ASIGIS_ExampleDeathActor_C_DeActiveCalled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ExampleDeathActor.SIGIS_ExampleDeathActor_C.ExecuteUbergraph_SIGIS_ExampleDeathActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASIGIS_ExampleDeathActor_C::ExecuteUbergraph_SIGIS_ExampleDeathActor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ExampleDeathActor.SIGIS_ExampleDeathActor_C.ExecuteUbergraph_SIGIS_ExampleDeathActor");
		
		ASIGIS_ExampleDeathActor_C_ExecuteUbergraph_SIGIS_ExampleDeathActor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASIGIS_ExampleDeathActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASIGIS_ExampleDeathActor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SIGIS_ExampleDeathActor.SIGIS_ExampleDeathActor_C");
		return ptr;
	}

}


