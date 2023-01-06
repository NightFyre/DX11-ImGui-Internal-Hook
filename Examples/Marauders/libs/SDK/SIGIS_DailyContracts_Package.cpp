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
	 * 		Name   -> Function SIGIS_DailyContracts.SIGIS_DailyContracts_C.Construct
	 * 		Flags  -> ()
	 */
	void USIGIS_DailyContracts_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_DailyContracts.SIGIS_DailyContracts_C.Construct");
		
		USIGIS_DailyContracts_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_DailyContracts.SIGIS_DailyContracts_C.BndEvt__SIGIS_DailyContracts_MM_GenericSmallBtn01_CloseDailyContracts_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_DailyContracts_C::BndEvt__SIGIS_DailyContracts_MM_GenericSmallBtn01_CloseDailyContracts_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_DailyContracts.SIGIS_DailyContracts_C.BndEvt__SIGIS_DailyContracts_MM_GenericSmallBtn01_CloseDailyContracts_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_DailyContracts_C_BndEvt__SIGIS_DailyContracts_MM_GenericSmallBtn01_CloseDailyContracts_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_DailyContracts.SIGIS_DailyContracts_C.RefreshDailyContracts
	 * 		Flags  -> ()
	 */
	void USIGIS_DailyContracts_C::RefreshDailyContracts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_DailyContracts.SIGIS_DailyContracts_C.RefreshDailyContracts");
		
		USIGIS_DailyContracts_C_RefreshDailyContracts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_DailyContracts.SIGIS_DailyContracts_C.ContractResetTimer
	 * 		Flags  -> ()
	 */
	void USIGIS_DailyContracts_C::ContractResetTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_DailyContracts.SIGIS_DailyContracts_C.ContractResetTimer");
		
		USIGIS_DailyContracts_C_ContractResetTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_DailyContracts.SIGIS_DailyContracts_C.UpdateFactionContracts
	 * 		Flags  -> ()
	 */
	void USIGIS_DailyContracts_C::UpdateFactionContracts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_DailyContracts.SIGIS_DailyContracts_C.UpdateFactionContracts");
		
		USIGIS_DailyContracts_C_UpdateFactionContracts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_DailyContracts.SIGIS_DailyContracts_C.StartedAContract
	 * 		Flags  -> ()
	 */
	void USIGIS_DailyContracts_C::StartedAContract()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_DailyContracts.SIGIS_DailyContracts_C.StartedAContract");
		
		USIGIS_DailyContracts_C_StartedAContract_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_DailyContracts.SIGIS_DailyContracts_C.CollectedAContract
	 * 		Flags  -> ()
	 */
	void USIGIS_DailyContracts_C::CollectedAContract()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_DailyContracts.SIGIS_DailyContracts_C.CollectedAContract");
		
		USIGIS_DailyContracts_C_CollectedAContract_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_DailyContracts.SIGIS_DailyContracts_C.ExecuteUbergraph_SIGIS_DailyContracts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_DailyContracts_C::ExecuteUbergraph_SIGIS_DailyContracts(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_DailyContracts.SIGIS_DailyContracts_C.ExecuteUbergraph_SIGIS_DailyContracts");
		
		USIGIS_DailyContracts_C_ExecuteUbergraph_SIGIS_DailyContracts_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGIS_DailyContracts_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGIS_DailyContracts_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SIGIS_DailyContracts.SIGIS_DailyContracts_C");
		return ptr;
	}

}


