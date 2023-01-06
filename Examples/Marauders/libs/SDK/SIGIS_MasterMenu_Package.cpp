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
	 * 		Name   -> Function SIGIS_MasterMenu.SIGIS_MasterMenu_C.SwitchToMatchmaking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               GoBackToMM                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_MasterMenu_C::SwitchToMatchmaking(bool GoBackToMM)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MasterMenu.SIGIS_MasterMenu_C.SwitchToMatchmaking");
		
		USIGIS_MasterMenu_C_SwitchToMatchmaking_Params params {};
		params.GoBackToMM = GoBackToMM;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MasterMenu.SIGIS_MasterMenu_C.SwitchToInventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInventoryState                                    OpenWhichInvMenu                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               GoBackToMM                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_MasterMenu_C::SwitchToInventory(EInventoryState OpenWhichInvMenu, bool GoBackToMM)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MasterMenu.SIGIS_MasterMenu_C.SwitchToInventory");
		
		USIGIS_MasterMenu_C_SwitchToInventory_Params params {};
		params.OpenWhichInvMenu = OpenWhichInvMenu;
		params.GoBackToMM = GoBackToMM;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MasterMenu.SIGIS_MasterMenu_C.TriggerInventoryRefresh
	 * 		Flags  -> ()
	 */
	void USIGIS_MasterMenu_C::TriggerInventoryRefresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MasterMenu.SIGIS_MasterMenu_C.TriggerInventoryRefresh");
		
		USIGIS_MasterMenu_C_TriggerInventoryRefresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MasterMenu.SIGIS_MasterMenu_C.SwitchToEndMatchScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               GoBackToMM                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ERaidResult                                        RaidResult                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_MasterMenu_C::SwitchToEndMatchScreen(bool GoBackToMM, ERaidResult RaidResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MasterMenu.SIGIS_MasterMenu_C.SwitchToEndMatchScreen");
		
		USIGIS_MasterMenu_C_SwitchToEndMatchScreen_Params params {};
		params.GoBackToMM = GoBackToMM;
		params.RaidResult = RaidResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MasterMenu.SIGIS_MasterMenu_C.SwitchToOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               GoBackToMM                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_MasterMenu_C::SwitchToOptions(bool GoBackToMM)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MasterMenu.SIGIS_MasterMenu_C.SwitchToOptions");
		
		USIGIS_MasterMenu_C_SwitchToOptions_Params params {};
		params.GoBackToMM = GoBackToMM;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MasterMenu.SIGIS_MasterMenu_C.SwitchToWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMenuState                                         WhichState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_MasterMenu_C::SwitchToWidget(EMenuState WhichState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MasterMenu.SIGIS_MasterMenu_C.SwitchToWidget");
		
		USIGIS_MasterMenu_C_SwitchToWidget_Params params {};
		params.WhichState = WhichState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MasterMenu.SIGIS_MasterMenu_C.StartMainMenu
	 * 		Flags  -> ()
	 */
	void USIGIS_MasterMenu_C::StartMainMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MasterMenu.SIGIS_MasterMenu_C.StartMainMenu");
		
		USIGIS_MasterMenu_C_StartMainMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MasterMenu.SIGIS_MasterMenu_C.LogInSuccess
	 * 		Flags  -> ()
	 */
	void USIGIS_MasterMenu_C::LogInSuccess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MasterMenu.SIGIS_MasterMenu_C.LogInSuccess");
		
		USIGIS_MasterMenu_C_LogInSuccess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MasterMenu.SIGIS_MasterMenu_C.OptionsPressed
	 * 		Flags  -> ()
	 */
	void USIGIS_MasterMenu_C::OptionsPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MasterMenu.SIGIS_MasterMenu_C.OptionsPressed");
		
		USIGIS_MasterMenu_C_OptionsPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MasterMenu.SIGIS_MasterMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void USIGIS_MasterMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MasterMenu.SIGIS_MasterMenu_C.Construct");
		
		USIGIS_MasterMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MasterMenu.SIGIS_MasterMenu_C.EscapePressed
	 * 		Flags  -> ()
	 */
	void USIGIS_MasterMenu_C::EscapePressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MasterMenu.SIGIS_MasterMenu_C.EscapePressed");
		
		USIGIS_MasterMenu_C_EscapePressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MasterMenu.SIGIS_MasterMenu_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_MasterMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MasterMenu.SIGIS_MasterMenu_C.Tick");
		
		USIGIS_MasterMenu_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MasterMenu.SIGIS_MasterMenu_C.CustomEvent_1
	 * 		Flags  -> ()
	 */
	void USIGIS_MasterMenu_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MasterMenu.SIGIS_MasterMenu_C.CustomEvent_1");
		
		USIGIS_MasterMenu_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MasterMenu.SIGIS_MasterMenu_C.ExecuteUbergraph_SIGIS_MasterMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_MasterMenu_C::ExecuteUbergraph_SIGIS_MasterMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MasterMenu.SIGIS_MasterMenu_C.ExecuteUbergraph_SIGIS_MasterMenu");
		
		USIGIS_MasterMenu_C_ExecuteUbergraph_SIGIS_MasterMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGIS_MasterMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGIS_MasterMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SIGIS_MasterMenu.SIGIS_MasterMenu_C");
		return ptr;
	}

}


