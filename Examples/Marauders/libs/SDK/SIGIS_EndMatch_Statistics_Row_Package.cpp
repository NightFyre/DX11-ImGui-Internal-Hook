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
	 * 		Name   -> Function SIGIS_EndMatch_Statistics_Row.SIGIS_EndMatch_Statistics_Row_C.Set_StatAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_EndMatch_Statistics_Row_C::Set_StatAmount(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_EndMatch_Statistics_Row.SIGIS_EndMatch_Statistics_Row_C.Set_StatAmount");
		
		USIGIS_EndMatch_Statistics_Row_C_Set_StatAmount_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_EndMatch_Statistics_Row.SIGIS_EndMatch_Statistics_Row_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_EndMatch_Statistics_Row_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_EndMatch_Statistics_Row.SIGIS_EndMatch_Statistics_Row_C.PreConstruct");
		
		USIGIS_EndMatch_Statistics_Row_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_EndMatch_Statistics_Row.SIGIS_EndMatch_Statistics_Row_C.ExecuteUbergraph_SIGIS_EndMatch_Statistics_Row
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_EndMatch_Statistics_Row_C::ExecuteUbergraph_SIGIS_EndMatch_Statistics_Row(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_EndMatch_Statistics_Row.SIGIS_EndMatch_Statistics_Row_C.ExecuteUbergraph_SIGIS_EndMatch_Statistics_Row");
		
		USIGIS_EndMatch_Statistics_Row_C_ExecuteUbergraph_SIGIS_EndMatch_Statistics_Row_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGIS_EndMatch_Statistics_Row_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGIS_EndMatch_Statistics_Row_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SIGIS_EndMatch_Statistics_Row.SIGIS_EndMatch_Statistics_Row_C");
		return ptr;
	}

}


