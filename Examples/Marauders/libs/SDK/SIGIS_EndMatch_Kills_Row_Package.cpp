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
	 * 		Name   -> Function SIGIS_EndMatch_Kills_Row.SIGIS_EndMatch_Kills_Row_C.Construct
	 * 		Flags  -> ()
	 */
	void USIGIS_EndMatch_Kills_Row_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_EndMatch_Kills_Row.SIGIS_EndMatch_Kills_Row_C.Construct");
		
		USIGIS_EndMatch_Kills_Row_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_EndMatch_Kills_Row.SIGIS_EndMatch_Kills_Row_C.ExecuteUbergraph_SIGIS_EndMatch_Kills_Row
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_EndMatch_Kills_Row_C::ExecuteUbergraph_SIGIS_EndMatch_Kills_Row(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_EndMatch_Kills_Row.SIGIS_EndMatch_Kills_Row_C.ExecuteUbergraph_SIGIS_EndMatch_Kills_Row");
		
		USIGIS_EndMatch_Kills_Row_C_ExecuteUbergraph_SIGIS_EndMatch_Kills_Row_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGIS_EndMatch_Kills_Row_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGIS_EndMatch_Kills_Row_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SIGIS_EndMatch_Kills_Row.SIGIS_EndMatch_Kills_Row_C");
		return ptr;
	}

}


