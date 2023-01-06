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
	 * 		Name   -> Function SIGIS_Prestige_Widget.SIGIS_Prestige_Widget_C.Construct
	 * 		Flags  -> ()
	 */
	void USIGIS_Prestige_Widget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Prestige_Widget.SIGIS_Prestige_Widget_C.Construct");
		
		USIGIS_Prestige_Widget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Prestige_Widget.SIGIS_Prestige_Widget_C.BndEvt__MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Prestige_Widget_C::BndEvt__MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Prestige_Widget.SIGIS_Prestige_Widget_C.BndEvt__MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_Prestige_Widget_C_BndEvt__MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Prestige_Widget.SIGIS_Prestige_Widget_C.BndEvt__MM_GenericSmallBtn01_1_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Prestige_Widget_C::BndEvt__MM_GenericSmallBtn01_1_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Prestige_Widget.SIGIS_Prestige_Widget_C.BndEvt__MM_GenericSmallBtn01_1_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_Prestige_Widget_C_BndEvt__MM_GenericSmallBtn01_1_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Prestige_Widget.SIGIS_Prestige_Widget_C.ExecuteUbergraph_SIGIS_Prestige_Widget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_Prestige_Widget_C::ExecuteUbergraph_SIGIS_Prestige_Widget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Prestige_Widget.SIGIS_Prestige_Widget_C.ExecuteUbergraph_SIGIS_Prestige_Widget");
		
		USIGIS_Prestige_Widget_C_ExecuteUbergraph_SIGIS_Prestige_Widget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Prestige_Widget.SIGIS_Prestige_Widget_C.ED_CancelPrestige__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Prestige_Widget_C::ED_CancelPrestige__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Prestige_Widget.SIGIS_Prestige_Widget_C.ED_CancelPrestige__DelegateSignature");
		
		USIGIS_Prestige_Widget_C_ED_CancelPrestige__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Prestige_Widget.SIGIS_Prestige_Widget_C.ED_AcceptPrestige__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PrestPointsToGive                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_Prestige_Widget_C::ED_AcceptPrestige__DelegateSignature(int32_t PrestPointsToGive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Prestige_Widget.SIGIS_Prestige_Widget_C.ED_AcceptPrestige__DelegateSignature");
		
		USIGIS_Prestige_Widget_C_ED_AcceptPrestige__DelegateSignature_Params params {};
		params.PrestPointsToGive = PrestPointsToGive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGIS_Prestige_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGIS_Prestige_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SIGIS_Prestige_Widget.SIGIS_Prestige_Widget_C");
		return ptr;
	}

}


