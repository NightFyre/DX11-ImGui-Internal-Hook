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
	 * 		Name   -> Function SIGIS_BannedScreen.SIGIS_BannedScreen_C.Construct
	 * 		Flags  -> ()
	 */
	void USIGIS_BannedScreen_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_BannedScreen.SIGIS_BannedScreen_C.Construct");
		
		USIGIS_BannedScreen_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_BannedScreen.SIGIS_BannedScreen_C.BndEvt__SIGIS_BannedScreen_MM_GenericSmallBtn01_1_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_BannedScreen_C::BndEvt__SIGIS_BannedScreen_MM_GenericSmallBtn01_1_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_BannedScreen.SIGIS_BannedScreen_C.BndEvt__SIGIS_BannedScreen_MM_GenericSmallBtn01_1_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_BannedScreen_C_BndEvt__SIGIS_BannedScreen_MM_GenericSmallBtn01_1_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_BannedScreen.SIGIS_BannedScreen_C.ExecuteUbergraph_SIGIS_BannedScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_BannedScreen_C::ExecuteUbergraph_SIGIS_BannedScreen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_BannedScreen.SIGIS_BannedScreen_C.ExecuteUbergraph_SIGIS_BannedScreen");
		
		USIGIS_BannedScreen_C_ExecuteUbergraph_SIGIS_BannedScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGIS_BannedScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGIS_BannedScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SIGIS_BannedScreen.SIGIS_BannedScreen_C");
		return ptr;
	}

}


