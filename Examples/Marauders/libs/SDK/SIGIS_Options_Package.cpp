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
	 * 		Name   -> Function SIGIS_Options.SIGIS_Options_C.Set_AsInMatchVersion
	 * 		Flags  -> ()
	 */
	void USIGIS_Options_C::Set_AsInMatchVersion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Options.SIGIS_Options_C.Set_AsInMatchVersion");
		
		USIGIS_Options_C_Set_AsInMatchVersion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Options.SIGIS_Options_C.SwitchTAB_Look
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_OptionsStates                                    SwitchTo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_Options_C::SwitchTAB_Look(E_OptionsStates SwitchTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Options.SIGIS_Options_C.SwitchTAB_Look");
		
		USIGIS_Options_C_SwitchTAB_Look_Params params {};
		params.SwitchTo = SwitchTo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Options.SIGIS_Options_C.Switch_Options_State
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_OptionsStates                                    SwitchToOptionsMenu                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Force                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_Options_C::Switch_Options_State(E_OptionsStates SwitchToOptionsMenu, bool Force)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Options.SIGIS_Options_C.Switch_Options_State");
		
		USIGIS_Options_C_Switch_Options_State_Params params {};
		params.SwitchToOptionsMenu = SwitchToOptionsMenu;
		params.Force = Force;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Options.SIGIS_Options_C.Construct
	 * 		Flags  -> ()
	 */
	void USIGIS_Options_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Options.SIGIS_Options_C.Construct");
		
		USIGIS_Options_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Options.SIGIS_Options_C.BndEvt__BACKBTN_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Options_C::BndEvt__BACKBTN_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Options.SIGIS_Options_C.BndEvt__BACKBTN_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_Options_C_BndEvt__BACKBTN_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Options.SIGIS_Options_C.BndEvt__Btn_TAB_Video_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Options_C::BndEvt__Btn_TAB_Video_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Options.SIGIS_Options_C.BndEvt__Btn_TAB_Video_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_Options_C_BndEvt__Btn_TAB_Video_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Options.SIGIS_Options_C.BndEvt__Btn_TAB_AUDIO_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Options_C::BndEvt__Btn_TAB_AUDIO_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Options.SIGIS_Options_C.BndEvt__Btn_TAB_AUDIO_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_Options_C_BndEvt__Btn_TAB_AUDIO_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Options.SIGIS_Options_C.BndEvt__Btn_TAB_GAMEPLAY_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Options_C::BndEvt__Btn_TAB_GAMEPLAY_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Options.SIGIS_Options_C.BndEvt__Btn_TAB_GAMEPLAY_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_Options_C_BndEvt__Btn_TAB_GAMEPLAY_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Options.SIGIS_Options_C.BndEvt__Btn_TAB_CONTROLS_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Options_C::BndEvt__Btn_TAB_CONTROLS_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Options.SIGIS_Options_C.BndEvt__Btn_TAB_CONTROLS_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_Options_C_BndEvt__Btn_TAB_CONTROLS_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Options.SIGIS_Options_C.BndEvt__MM_GenericSmallBtn01_GoBack_Crew_PasswordScreen_K2Node_ComponentBoundEvent_5_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Options_C::BndEvt__MM_GenericSmallBtn01_GoBack_Crew_PasswordScreen_K2Node_ComponentBoundEvent_5_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Options.SIGIS_Options_C.BndEvt__MM_GenericSmallBtn01_GoBack_Crew_PasswordScreen_K2Node_ComponentBoundEvent_5_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_Options_C_BndEvt__MM_GenericSmallBtn01_GoBack_Crew_PasswordScreen_K2Node_ComponentBoundEvent_5_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Options.SIGIS_Options_C.BndEvt__MM_GenericTabBtn_Video_K2Node_ComponentBoundEvent_6_ButtonHasBeenPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      WhatPressed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_Options_C::BndEvt__MM_GenericTabBtn_Video_K2Node_ComponentBoundEvent_6_ButtonHasBeenPressed__DelegateSignature(const class FString& WhatPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Options.SIGIS_Options_C.BndEvt__MM_GenericTabBtn_Video_K2Node_ComponentBoundEvent_6_ButtonHasBeenPressed__DelegateSignature");
		
		USIGIS_Options_C_BndEvt__MM_GenericTabBtn_Video_K2Node_ComponentBoundEvent_6_ButtonHasBeenPressed__DelegateSignature_Params params {};
		params.WhatPressed = WhatPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Options.SIGIS_Options_C.BndEvt__MM_GenericTabBtn_Audio_K2Node_ComponentBoundEvent_7_ButtonHasBeenPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      WhatPressed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_Options_C::BndEvt__MM_GenericTabBtn_Audio_K2Node_ComponentBoundEvent_7_ButtonHasBeenPressed__DelegateSignature(const class FString& WhatPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Options.SIGIS_Options_C.BndEvt__MM_GenericTabBtn_Audio_K2Node_ComponentBoundEvent_7_ButtonHasBeenPressed__DelegateSignature");
		
		USIGIS_Options_C_BndEvt__MM_GenericTabBtn_Audio_K2Node_ComponentBoundEvent_7_ButtonHasBeenPressed__DelegateSignature_Params params {};
		params.WhatPressed = WhatPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Options.SIGIS_Options_C.BndEvt__MM_GenericTabBtn_Controls_K2Node_ComponentBoundEvent_8_ButtonHasBeenPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      WhatPressed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_Options_C::BndEvt__MM_GenericTabBtn_Controls_K2Node_ComponentBoundEvent_8_ButtonHasBeenPressed__DelegateSignature(const class FString& WhatPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Options.SIGIS_Options_C.BndEvt__MM_GenericTabBtn_Controls_K2Node_ComponentBoundEvent_8_ButtonHasBeenPressed__DelegateSignature");
		
		USIGIS_Options_C_BndEvt__MM_GenericTabBtn_Controls_K2Node_ComponentBoundEvent_8_ButtonHasBeenPressed__DelegateSignature_Params params {};
		params.WhatPressed = WhatPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Options.SIGIS_Options_C.BndEvt__MM_GenericTabBtn_Gameplay_K2Node_ComponentBoundEvent_9_ButtonHasBeenPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      WhatPressed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_Options_C::BndEvt__MM_GenericTabBtn_Gameplay_K2Node_ComponentBoundEvent_9_ButtonHasBeenPressed__DelegateSignature(const class FString& WhatPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Options.SIGIS_Options_C.BndEvt__MM_GenericTabBtn_Gameplay_K2Node_ComponentBoundEvent_9_ButtonHasBeenPressed__DelegateSignature");
		
		USIGIS_Options_C_BndEvt__MM_GenericTabBtn_Gameplay_K2Node_ComponentBoundEvent_9_ButtonHasBeenPressed__DelegateSignature_Params params {};
		params.WhatPressed = WhatPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Options.SIGIS_Options_C.ExecuteUbergraph_SIGIS_Options
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_Options_C::ExecuteUbergraph_SIGIS_Options(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Options.SIGIS_Options_C.ExecuteUbergraph_SIGIS_Options");
		
		USIGIS_Options_C_ExecuteUbergraph_SIGIS_Options_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Options.SIGIS_Options_C.ShowSettings__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Options_C::ShowSettings__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Options.SIGIS_Options_C.ShowSettings__DelegateSignature");
		
		USIGIS_Options_C_ShowSettings__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Options.SIGIS_Options_C.SwitchToOptions__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Options_C::SwitchToOptions__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Options.SIGIS_Options_C.SwitchToOptions__DelegateSignature");
		
		USIGIS_Options_C_SwitchToOptions__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGIS_Options_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGIS_Options_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SIGIS_Options.SIGIS_Options_C");
		return ptr;
	}

}


