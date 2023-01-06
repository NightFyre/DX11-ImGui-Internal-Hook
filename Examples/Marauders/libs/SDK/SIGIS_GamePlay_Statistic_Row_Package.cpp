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
	 * 		Name   -> Function SIGIS_GamePlay_Statistic_Row.SIGIS_GamePlay_Statistic_Row_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_GamePlay_Statistic_Row_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_GamePlay_Statistic_Row.SIGIS_GamePlay_Statistic_Row_C.PreConstruct");
		
		USIGIS_GamePlay_Statistic_Row_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_GamePlay_Statistic_Row.SIGIS_GamePlay_Statistic_Row_C.SetStatValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_GamePlay_Statistic_Row_C::SetStatValue(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_GamePlay_Statistic_Row.SIGIS_GamePlay_Statistic_Row_C.SetStatValue");
		
		USIGIS_GamePlay_Statistic_Row_C_SetStatValue_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_GamePlay_Statistic_Row.SIGIS_GamePlay_Statistic_Row_C.ExecuteUbergraph_SIGIS_GamePlay_Statistic_Row
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_GamePlay_Statistic_Row_C::ExecuteUbergraph_SIGIS_GamePlay_Statistic_Row(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_GamePlay_Statistic_Row.SIGIS_GamePlay_Statistic_Row_C.ExecuteUbergraph_SIGIS_GamePlay_Statistic_Row");
		
		USIGIS_GamePlay_Statistic_Row_C_ExecuteUbergraph_SIGIS_GamePlay_Statistic_Row_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGIS_GamePlay_Statistic_Row_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGIS_GamePlay_Statistic_Row_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SIGIS_GamePlay_Statistic_Row.SIGIS_GamePlay_Statistic_Row_C");
		return ptr;
	}

}


