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
	 * 		Name   -> Function ContractRewardItem_SubWidget.ContractRewardItem_SubWidget_C.OnLoaded_EFE19E2B4C5E7426E71E0CA938EE66FB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UContractRewardItem_SubWidget_C::OnLoaded_EFE19E2B4C5E7426E71E0CA938EE66FB(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContractRewardItem_SubWidget.ContractRewardItem_SubWidget_C.OnLoaded_EFE19E2B4C5E7426E71E0CA938EE66FB");
		
		UContractRewardItem_SubWidget_C_OnLoaded_EFE19E2B4C5E7426E71E0CA938EE66FB_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContractRewardItem_SubWidget.ContractRewardItem_SubWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UContractRewardItem_SubWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContractRewardItem_SubWidget.ContractRewardItem_SubWidget_C.Construct");
		
		UContractRewardItem_SubWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContractRewardItem_SubWidget.ContractRewardItem_SubWidget_C.ExecuteUbergraph_ContractRewardItem_SubWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UContractRewardItem_SubWidget_C::ExecuteUbergraph_ContractRewardItem_SubWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContractRewardItem_SubWidget.ContractRewardItem_SubWidget_C.ExecuteUbergraph_ContractRewardItem_SubWidget");
		
		UContractRewardItem_SubWidget_C_ExecuteUbergraph_ContractRewardItem_SubWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UContractRewardItem_SubWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UContractRewardItem_SubWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ContractRewardItem_SubWidget.ContractRewardItem_SubWidget_C");
		return ptr;
	}

}


