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
	 * 		Name   -> Function WB_Request.WB_Request_C.NavToConfirmButton
	 * 		Flags  -> ()
	 */
	void UWB_Request_C::NavToConfirmButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Request.WB_Request_C.NavToConfirmButton");
		
		UWB_Request_C_NavToConfirmButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Request.WB_Request_C.GetIsGamepad
	 * 		Flags  -> ()
	 */
	bool UWB_Request_C::GetIsGamepad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Request.WB_Request_C.GetIsGamepad");
		
		UWB_Request_C_GetIsGamepad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Request.WB_Request_C.NavToCancelButton
	 * 		Flags  -> ()
	 */
	void UWB_Request_C::NavToCancelButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Request.WB_Request_C.NavToCancelButton");
		
		UWB_Request_C_NavToCancelButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Request.WB_Request_C.OnPreviewKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UWB_Request_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Request.WB_Request_C.OnPreviewKeyDown");
		
		UWB_Request_C_OnPreviewKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Request.WB_Request_C.OnInputSwitched
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInputType                                         InputType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Request_C::OnInputSwitched(EInputType InputType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Request.WB_Request_C.OnInputSwitched");
		
		UWB_Request_C_OnInputSwitched_Params params {};
		params.InputType = InputType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Request.WB_Request_C.CheckFocus
	 * 		Flags  -> ()
	 */
	void UWB_Request_C::CheckFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Request.WB_Request_C.CheckFocus");
		
		UWB_Request_C_CheckFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Request.WB_Request_C.ActivateWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShowOnlyOkButton                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bUseCancelCountdown                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        HeadText                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        MessageText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWB_Request_C::ActivateWidget(bool bShowOnlyOkButton, bool bUseCancelCountdown, const class FText& HeadText, const class FText& MessageText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Request.WB_Request_C.ActivateWidget");
		
		UWB_Request_C_ActivateWidget_Params params {};
		params.bShowOnlyOkButton = bShowOnlyOkButton;
		params.bUseCancelCountdown = bUseCancelCountdown;
		params.HeadText = HeadText;
		params.MessageText = MessageText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Request.WB_Request_C.ClickCancel
	 * 		Flags  -> ()
	 */
	void UWB_Request_C::ClickCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Request.WB_Request_C.ClickCancel");
		
		UWB_Request_C_ClickCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Request.WB_Request_C.SetGamepadAppearance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWB_Request_C::SetGamepadAppearance(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Request.WB_Request_C.SetGamepadAppearance");
		
		UWB_Request_C_SetGamepadAppearance_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Request.WB_Request_C.ClickOK
	 * 		Flags  -> ()
	 */
	void UWB_Request_C::ClickOK()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Request.WB_Request_C.ClickOK");
		
		UWB_Request_C_ClickOK_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Request.WB_Request_C.RemoveRequest
	 * 		Flags  -> ()
	 */
	void UWB_Request_C::RemoveRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Request.WB_Request_C.RemoveRequest");
		
		UWB_Request_C_RemoveRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Request.WB_Request_C.SetBaseColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bUseBaseColor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                Grad0                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Grad1                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Grad2                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Grad3                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Request_C::SetBaseColor(bool bUseBaseColor, const struct FLinearColor& Grad0, const struct FLinearColor& Grad1, const struct FLinearColor& Grad2, const struct FLinearColor& Grad3)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Request.WB_Request_C.SetBaseColor");
		
		UWB_Request_C_SetBaseColor_Params params {};
		params.bUseBaseColor = bUseBaseColor;
		params.Grad0 = Grad0;
		params.Grad1 = Grad1;
		params.Grad2 = Grad2;
		params.Grad3 = Grad3;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Request.WB_Request_C.BndEvt__MM_GenBtn01_Confirm_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWB_Request_C::BndEvt__MM_GenBtn01_Confirm_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Request.WB_Request_C.BndEvt__MM_GenBtn01_Confirm_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature");
		
		UWB_Request_C_BndEvt__MM_GenBtn01_Confirm_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Request.WB_Request_C.BndEvt__MM_GenBtn01_Cancel_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWB_Request_C::BndEvt__MM_GenBtn01_Cancel_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Request.WB_Request_C.BndEvt__MM_GenBtn01_Cancel_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature");
		
		UWB_Request_C_BndEvt__MM_GenBtn01_Cancel_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Request.WB_Request_C.Countdown
	 * 		Flags  -> ()
	 */
	void UWB_Request_C::Countdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Request.WB_Request_C.Countdown");
		
		UWB_Request_C_Countdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Request.WB_Request_C.ExecuteUbergraph_WB_Request
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Request_C::ExecuteUbergraph_WB_Request(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Request.WB_Request_C.ExecuteUbergraph_WB_Request");
		
		UWB_Request_C_ExecuteUbergraph_WB_Request_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Request.WB_Request_C.OnClicked_Ok__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWB_Request_C::OnClicked_Ok__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Request.WB_Request_C.OnClicked_Ok__DelegateSignature");
		
		UWB_Request_C_OnClicked_Ok__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Request.WB_Request_C.OnClicked_Cancel__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWB_Request_C::OnClicked_Cancel__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Request.WB_Request_C.OnClicked_Cancel__DelegateSignature");
		
		UWB_Request_C_OnClicked_Cancel__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_Request_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_Request_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_Request.WB_Request_C");
		return ptr;
	}

}


