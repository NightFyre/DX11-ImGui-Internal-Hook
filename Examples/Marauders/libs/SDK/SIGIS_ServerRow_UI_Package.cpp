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
	 * 		Name   -> Function SIGIS_ServerRow_UI.SIGIS_ServerRow_UI_C.F_SetInactive
	 * 		Flags  -> ()
	 */
	void USIGIS_ServerRow_UI_C::F_SetInactive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ServerRow_UI.SIGIS_ServerRow_UI_C.F_SetInactive");
		
		USIGIS_ServerRow_UI_C_F_SetInactive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ServerRow_UI.SIGIS_ServerRow_UI_C.GetBackground_1
	 * 		Flags  -> ()
	 */
	struct FSlateBrush USIGIS_ServerRow_UI_C::GetBackground_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ServerRow_UI.SIGIS_ServerRow_UI_C.GetBackground_1");
		
		USIGIS_ServerRow_UI_C_GetBackground_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ServerRow_UI.SIGIS_ServerRow_UI_C.GetText_1
	 * 		Flags  -> ()
	 */
	class FText USIGIS_ServerRow_UI_C::GetText_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ServerRow_UI.SIGIS_ServerRow_UI_C.GetText_1");
		
		USIGIS_ServerRow_UI_C_GetText_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ServerRow_UI.SIGIS_ServerRow_UI_C.BndEvt__Button_54_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_ServerRow_UI_C::BndEvt__Button_54_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ServerRow_UI.SIGIS_ServerRow_UI_C.BndEvt__Button_54_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		USIGIS_ServerRow_UI_C_BndEvt__Button_54_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ServerRow_UI.SIGIS_ServerRow_UI_C.OnPing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Resolved                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Error                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_ServerRow_UI_C::OnPing(const class FString& Target, float Duration, const class FString& Resolved, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ServerRow_UI.SIGIS_ServerRow_UI_C.OnPing");
		
		USIGIS_ServerRow_UI_C_OnPing_Params params {};
		params.Target = Target;
		params.Duration = Duration;
		params.Resolved = Resolved;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ServerRow_UI.SIGIS_ServerRow_UI_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_ServerRow_UI_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ServerRow_UI.SIGIS_ServerRow_UI_C.PreConstruct");
		
		USIGIS_ServerRow_UI_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ServerRow_UI.SIGIS_ServerRow_UI_C.ExecuteUbergraph_SIGIS_ServerRow_UI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_ServerRow_UI_C::ExecuteUbergraph_SIGIS_ServerRow_UI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ServerRow_UI.SIGIS_ServerRow_UI_C.ExecuteUbergraph_SIGIS_ServerRow_UI");
		
		USIGIS_ServerRow_UI_C_ExecuteUbergraph_SIGIS_ServerRow_UI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ServerRow_UI.SIGIS_ServerRow_UI_C.FoundIP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FoundIPin                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_ServerRow_UI_C::FoundIP__DelegateSignature(const class FString& FoundIPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ServerRow_UI.SIGIS_ServerRow_UI_C.FoundIP__DelegateSignature");
		
		USIGIS_ServerRow_UI_C_FoundIP__DelegateSignature_Params params {};
		params.FoundIPin = FoundIPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGIS_ServerRow_UI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGIS_ServerRow_UI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SIGIS_ServerRow_UI.SIGIS_ServerRow_UI_C");
		return ptr;
	}

}


