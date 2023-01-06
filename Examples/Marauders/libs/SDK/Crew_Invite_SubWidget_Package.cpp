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
	 * 		Name   -> Function Crew_Invite_SubWidget.Crew_Invite_SubWidget_C.OnError_B6856B7D44880E506726A5955983B651
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNakamaListGroupMembersResponse             SuccessResponse                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FNakamaErrorResponse                        ErrorResponse                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCrew_Invite_SubWidget_C::OnError_B6856B7D44880E506726A5955983B651(const struct FNakamaListGroupMembersResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crew_Invite_SubWidget.Crew_Invite_SubWidget_C.OnError_B6856B7D44880E506726A5955983B651");
		
		UCrew_Invite_SubWidget_C_OnError_B6856B7D44880E506726A5955983B651_Params params {};
		params.SuccessResponse = SuccessResponse;
		params.ErrorResponse = ErrorResponse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Crew_Invite_SubWidget.Crew_Invite_SubWidget_C.OnSuccess_B6856B7D44880E506726A5955983B651
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNakamaListGroupMembersResponse             SuccessResponse                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FNakamaErrorResponse                        ErrorResponse                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCrew_Invite_SubWidget_C::OnSuccess_B6856B7D44880E506726A5955983B651(const struct FNakamaListGroupMembersResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crew_Invite_SubWidget.Crew_Invite_SubWidget_C.OnSuccess_B6856B7D44880E506726A5955983B651");
		
		UCrew_Invite_SubWidget_C_OnSuccess_B6856B7D44880E506726A5955983B651_Params params {};
		params.SuccessResponse = SuccessResponse;
		params.ErrorResponse = ErrorResponse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Crew_Invite_SubWidget.Crew_Invite_SubWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UCrew_Invite_SubWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crew_Invite_SubWidget.Crew_Invite_SubWidget_C.Construct");
		
		UCrew_Invite_SubWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Crew_Invite_SubWidget.Crew_Invite_SubWidget_C.DestroyTheWidget
	 * 		Flags  -> ()
	 */
	void UCrew_Invite_SubWidget_C::DestroyTheWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crew_Invite_SubWidget.Crew_Invite_SubWidget_C.DestroyTheWidget");
		
		UCrew_Invite_SubWidget_C_DestroyTheWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Crew_Invite_SubWidget.Crew_Invite_SubWidget_C.BndEvt__Crew_Invite_SubWidget_MM_btn_Accept_K2Node_ComponentBoundEvent_2_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCrew_Invite_SubWidget_C::BndEvt__Crew_Invite_SubWidget_MM_btn_Accept_K2Node_ComponentBoundEvent_2_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crew_Invite_SubWidget.Crew_Invite_SubWidget_C.BndEvt__Crew_Invite_SubWidget_MM_btn_Accept_K2Node_ComponentBoundEvent_2_GenericSmallBtnPressed__DelegateSignature");
		
		UCrew_Invite_SubWidget_C_BndEvt__Crew_Invite_SubWidget_MM_btn_Accept_K2Node_ComponentBoundEvent_2_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Crew_Invite_SubWidget.Crew_Invite_SubWidget_C.BndEvt__Crew_Invite_SubWidget_MM_btn_Cancel_K2Node_ComponentBoundEvent_3_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCrew_Invite_SubWidget_C::BndEvt__Crew_Invite_SubWidget_MM_btn_Cancel_K2Node_ComponentBoundEvent_3_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crew_Invite_SubWidget.Crew_Invite_SubWidget_C.BndEvt__Crew_Invite_SubWidget_MM_btn_Cancel_K2Node_ComponentBoundEvent_3_GenericSmallBtnPressed__DelegateSignature");
		
		UCrew_Invite_SubWidget_C_BndEvt__Crew_Invite_SubWidget_MM_btn_Cancel_K2Node_ComponentBoundEvent_3_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Crew_Invite_SubWidget.Crew_Invite_SubWidget_C.ExecuteUbergraph_Crew_Invite_SubWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCrew_Invite_SubWidget_C::ExecuteUbergraph_Crew_Invite_SubWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crew_Invite_SubWidget.Crew_Invite_SubWidget_C.ExecuteUbergraph_Crew_Invite_SubWidget");
		
		UCrew_Invite_SubWidget_C_ExecuteUbergraph_Crew_Invite_SubWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCrew_Invite_SubWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrew_Invite_SubWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Crew_Invite_SubWidget.Crew_Invite_SubWidget_C");
		return ptr;
	}

}


