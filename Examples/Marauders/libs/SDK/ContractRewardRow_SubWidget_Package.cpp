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
	 * 		Name   -> Function ContractRewardRow_SubWidget.ContractRewardRow_SubWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UContractRewardRow_SubWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContractRewardRow_SubWidget.ContractRewardRow_SubWidget_C.Construct");
		
		UContractRewardRow_SubWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContractRewardRow_SubWidget.ContractRewardRow_SubWidget_C.SetupRewardRow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FContract                                   contractStruct                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UContractRewardRow_SubWidget_C::SetupRewardRow(const struct FContract& contractStruct)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContractRewardRow_SubWidget.ContractRewardRow_SubWidget_C.SetupRewardRow");
		
		UContractRewardRow_SubWidget_C_SetupRewardRow_Params params {};
		params.contractStruct = contractStruct;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContractRewardRow_SubWidget.ContractRewardRow_SubWidget_C.ExecuteUbergraph_ContractRewardRow_SubWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UContractRewardRow_SubWidget_C::ExecuteUbergraph_ContractRewardRow_SubWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContractRewardRow_SubWidget.ContractRewardRow_SubWidget_C.ExecuteUbergraph_ContractRewardRow_SubWidget");
		
		UContractRewardRow_SubWidget_C_ExecuteUbergraph_ContractRewardRow_SubWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UContractRewardRow_SubWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UContractRewardRow_SubWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ContractRewardRow_SubWidget.ContractRewardRow_SubWidget_C");
		return ptr;
	}

}


