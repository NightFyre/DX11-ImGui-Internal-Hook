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
	 * 		Name   -> Function MM_LaunchToMatchMain.MM_LaunchToMatchMain_C.ShowPingProblemMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMM_LaunchToMatchMain_C::ShowPingProblemMessage(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_LaunchToMatchMain.MM_LaunchToMatchMain_C.ShowPingProblemMessage");
		
		UMM_LaunchToMatchMain_C_ShowPingProblemMessage_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_LaunchToMatchMain.MM_LaunchToMatchMain_C.Enable the Launch Button
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMM_LaunchToMatchMain_C::Enable_the_Launch_Button(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_LaunchToMatchMain.MM_LaunchToMatchMain_C.Enable the Launch Button");
		
		UMM_LaunchToMatchMain_C_Enable_the_Launch_Button_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_LaunchToMatchMain.MM_LaunchToMatchMain_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMM_LaunchToMatchMain_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_LaunchToMatchMain.MM_LaunchToMatchMain_C.PreConstruct");
		
		UMM_LaunchToMatchMain_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_LaunchToMatchMain.MM_LaunchToMatchMain_C.Construct
	 * 		Flags  -> ()
	 */
	void UMM_LaunchToMatchMain_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_LaunchToMatchMain.MM_LaunchToMatchMain_C.Construct");
		
		UMM_LaunchToMatchMain_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_LaunchToMatchMain.MM_LaunchToMatchMain_C.BndEvt__Btn_Main_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMM_LaunchToMatchMain_C::BndEvt__Btn_Main_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_LaunchToMatchMain.MM_LaunchToMatchMain_C.BndEvt__Btn_Main_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");
		
		UMM_LaunchToMatchMain_C_BndEvt__Btn_Main_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_LaunchToMatchMain.MM_LaunchToMatchMain_C.BndEvt__Btn_Main_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMM_LaunchToMatchMain_C::BndEvt__Btn_Main_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_LaunchToMatchMain.MM_LaunchToMatchMain_C.BndEvt__Btn_Main_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UMM_LaunchToMatchMain_C_BndEvt__Btn_Main_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_LaunchToMatchMain.MM_LaunchToMatchMain_C.BndEvt__Btn_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMM_LaunchToMatchMain_C::BndEvt__Btn_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_LaunchToMatchMain.MM_LaunchToMatchMain_C.BndEvt__Btn_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UMM_LaunchToMatchMain_C_BndEvt__Btn_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_LaunchToMatchMain.MM_LaunchToMatchMain_C.ForceUnselectedLook
	 * 		Flags  -> ()
	 */
	void UMM_LaunchToMatchMain_C::ForceUnselectedLook()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_LaunchToMatchMain.MM_LaunchToMatchMain_C.ForceUnselectedLook");
		
		UMM_LaunchToMatchMain_C_ForceUnselectedLook_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_LaunchToMatchMain.MM_LaunchToMatchMain_C.SetShipIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      WhichShip                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMM_LaunchToMatchMain_C::SetShipIcon(const class FString& WhichShip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_LaunchToMatchMain.MM_LaunchToMatchMain_C.SetShipIcon");
		
		UMM_LaunchToMatchMain_C_SetShipIcon_Params params {};
		params.WhichShip = WhichShip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_LaunchToMatchMain.MM_LaunchToMatchMain_C.ExecuteUbergraph_MM_LaunchToMatchMain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMM_LaunchToMatchMain_C::ExecuteUbergraph_MM_LaunchToMatchMain(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_LaunchToMatchMain.MM_LaunchToMatchMain_C.ExecuteUbergraph_MM_LaunchToMatchMain");
		
		UMM_LaunchToMatchMain_C_ExecuteUbergraph_MM_LaunchToMatchMain_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_LaunchToMatchMain.MM_LaunchToMatchMain_C.ED_LaunchBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMM_LaunchToMatchMain_C::ED_LaunchBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_LaunchToMatchMain.MM_LaunchToMatchMain_C.ED_LaunchBtnPressed__DelegateSignature");
		
		UMM_LaunchToMatchMain_C_ED_LaunchBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMM_LaunchToMatchMain_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMM_LaunchToMatchMain_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MM_LaunchToMatchMain.MM_LaunchToMatchMain_C");
		return ptr;
	}

}


