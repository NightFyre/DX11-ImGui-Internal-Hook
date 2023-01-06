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
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.Calculate_HowManyPrestigePointsWouldGet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CurrentPrestigeLevel                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            HowManyPtsWouldGet                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_MainOverlay_C::Calculate_HowManyPrestigePointsWouldGet(int32_t* CurrentPrestigeLevel, int32_t* HowManyPtsWouldGet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.Calculate_HowManyPrestigePointsWouldGet");
		
		USIGIS_MainOverlay_C_Calculate_HowManyPrestigePointsWouldGet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentPrestigeLevel != nullptr)
			*CurrentPrestigeLevel = params.CurrentPrestigeLevel;
		if (HowManyPtsWouldGet != nullptr)
			*HowManyPtsWouldGet = params.HowManyPtsWouldGet;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.CalculateAndGiveNextLevelPrestigePoints
	 * 		Flags  -> ()
	 */
	void USIGIS_MainOverlay_C::CalculateAndGiveNextLevelPrestigePoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.CalculateAndGiveNextLevelPrestigePoints");
		
		USIGIS_MainOverlay_C_CalculateAndGiveNextLevelPrestigePoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.Analytics_Prestiging
	 * 		Flags  -> ()
	 */
	void USIGIS_MainOverlay_C::Analytics_Prestiging()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.Analytics_Prestiging");
		
		USIGIS_MainOverlay_C_Analytics_Prestiging_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.Get_SizeBox_CanPrestige_Visibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility USIGIS_MainOverlay_C::Get_SizeBox_CanPrestige_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.Get_SizeBox_CanPrestige_Visibility_1");
		
		USIGIS_MainOverlay_C_Get_SizeBox_CanPrestige_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.Set_EquipmentSubMenu_BtnsVisuals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_InvEquipmentStates                               Which_MenuState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_MainOverlay_C::Set_EquipmentSubMenu_BtnsVisuals(E_InvEquipmentStates Which_MenuState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.Set_EquipmentSubMenu_BtnsVisuals");
		
		USIGIS_MainOverlay_C_Set_EquipmentSubMenu_BtnsVisuals_Params params {};
		params.Which_MenuState = Which_MenuState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.SetupMM_SubMenusButtons
	 * 		Flags  -> ()
	 */
	void USIGIS_MainOverlay_C::SetupMM_SubMenusButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.SetupMM_SubMenusButtons");
		
		USIGIS_MainOverlay_C_SetupMM_SubMenusButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.Setup_MM_SecondaryButtons
	 * 		Flags  -> ()
	 */
	void USIGIS_MainOverlay_C::Setup_MM_SecondaryButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.Setup_MM_SecondaryButtons");
		
		USIGIS_MainOverlay_C_Setup_MM_SecondaryButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.CheckIfYouHaveGifts
	 * 		Flags  -> ()
	 */
	void USIGIS_MainOverlay_C::CheckIfYouHaveGifts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.CheckIfYouHaveGifts");
		
		USIGIS_MainOverlay_C_CheckIfYouHaveGifts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.Bind_PrestigePoints
	 * 		Flags  -> ()
	 */
	class FText USIGIS_MainOverlay_C::Bind_PrestigePoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.Bind_PrestigePoints");
		
		USIGIS_MainOverlay_C_Bind_PrestigePoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.Switch_EndMatchScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Close                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ERaidResult                                        RaidResult                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_MainOverlay_C::Switch_EndMatchScreen(bool Close, ERaidResult RaidResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.Switch_EndMatchScreen");
		
		USIGIS_MainOverlay_C_Switch_EndMatchScreen_Params params {};
		params.Close = Close;
		params.RaidResult = RaidResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.SwitchToMyPlayerInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               GoBackTo_MM                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_MainOverlay_C::SwitchToMyPlayerInfo(bool GoBackTo_MM)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.SwitchToMyPlayerInfo");
		
		USIGIS_MainOverlay_C_SwitchToMyPlayerInfo_Params params {};
		params.GoBackTo_MM = GoBackTo_MM;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.Bind_SkillPoints
	 * 		Flags  -> ()
	 */
	class FText USIGIS_MainOverlay_C::Bind_SkillPoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.Bind_SkillPoints");
		
		USIGIS_MainOverlay_C_Bind_SkillPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.isGoingToMatch
	 * 		Flags  -> ()
	 */
	void USIGIS_MainOverlay_C::isGoingToMatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.isGoingToMatch");
		
		USIGIS_MainOverlay_C_isGoingToMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.SwitchToOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               GoBackTo_MM                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_MainOverlay_C::SwitchToOptions(bool GoBackTo_MM)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.SwitchToOptions");
		
		USIGIS_MainOverlay_C_SwitchToOptions_Params params {};
		params.GoBackTo_MM = GoBackTo_MM;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.Bind_PlayerGold
	 * 		Flags  -> ()
	 */
	class FText USIGIS_MainOverlay_C::Bind_PlayerGold()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.Bind_PlayerGold");
		
		USIGIS_MainOverlay_C_Bind_PlayerGold_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.Set_MM_MainBtnsVisuals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMenuState                                         Which_MenuState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_MainOverlay_C::Set_MM_MainBtnsVisuals(EMenuState Which_MenuState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.Set_MM_MainBtnsVisuals");
		
		USIGIS_MainOverlay_C_Set_MM_MainBtnsVisuals_Params params {};
		params.Which_MenuState = Which_MenuState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.ForceHideTheInventoryExtras
	 * 		Flags  -> ()
	 */
	void USIGIS_MainOverlay_C::ForceHideTheInventoryExtras()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.ForceHideTheInventoryExtras");
		
		USIGIS_MainOverlay_C_ForceHideTheInventoryExtras_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.Construct
	 * 		Flags  -> ()
	 */
	void USIGIS_MainOverlay_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.Construct");
		
		USIGIS_MainOverlay_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.DragItemStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlotType                                          DraggedFrom                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_MainOverlay_C::DragItemStarted(ESlotType DraggedFrom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.DragItemStarted");
		
		USIGIS_MainOverlay_C_DragItemStarted_Params params {};
		params.DraggedFrom = DraggedFrom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.DragItemStopped
	 * 		Flags  -> ()
	 */
	void USIGIS_MainOverlay_C::DragItemStopped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.DragItemStopped");
		
		USIGIS_MainOverlay_C_DragItemStopped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.GotToMatchFadeOut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              PlaybackSpeed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_MainOverlay_C::GotToMatchFadeOut(float PlaybackSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.GotToMatchFadeOut");
		
		USIGIS_MainOverlay_C_GotToMatchFadeOut_Params params {};
		params.PlaybackSpeed = PlaybackSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.AfterLoginOpenMainMenu
	 * 		Flags  -> ()
	 */
	void USIGIS_MainOverlay_C::AfterLoginOpenMainMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.AfterLoginOpenMainMenu");
		
		USIGIS_MainOverlay_C_AfterLoginOpenMainMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.MM_MainBtnHasBeenPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMenuState                                         WhichPressed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_MainOverlay_C::MM_MainBtnHasBeenPressed(EMenuState WhichPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.MM_MainBtnHasBeenPressed");
		
		USIGIS_MainOverlay_C_MM_MainBtnHasBeenPressed_Params params {};
		params.WhichPressed = WhichPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.MM_SecBtnHasBeenPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_MM_SecondaryOptions                              WhichPressed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_MainOverlay_C::MM_SecBtnHasBeenPressed(E_MM_SecondaryOptions WhichPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.MM_SecBtnHasBeenPressed");
		
		USIGIS_MainOverlay_C_MM_SecBtnHasBeenPressed_Params params {};
		params.WhichPressed = WhichPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.EscapeKeyHasBeenPressed
	 * 		Flags  -> ()
	 */
	void USIGIS_MainOverlay_C::EscapeKeyHasBeenPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.EscapeKeyHasBeenPressed");
		
		USIGIS_MainOverlay_C_EscapeKeyHasBeenPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.OptionsPressed
	 * 		Flags  -> ()
	 */
	void USIGIS_MainOverlay_C::OptionsPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.OptionsPressed");
		
		USIGIS_MainOverlay_C_OptionsPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.BndEvt__Btn_DevDebug_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MainOverlay_C::BndEvt__Btn_DevDebug_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.BndEvt__Btn_DevDebug_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		USIGIS_MainOverlay_C_BndEvt__Btn_DevDebug_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.ForceDebugClose
	 * 		Flags  -> ()
	 */
	void USIGIS_MainOverlay_C::ForceDebugClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.ForceDebugClose");
		
		USIGIS_MainOverlay_C_ForceDebugClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.CustomEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsMatchmaking                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_MainOverlay_C::CustomEvent_1(bool IsMatchmaking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.CustomEvent_1");
		
		USIGIS_MainOverlay_C_CustomEvent_1_Params params {};
		params.IsMatchmaking = IsMatchmaking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.BndEvt__MM_GenericSmallBtn01_1_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MainOverlay_C::BndEvt__MM_GenericSmallBtn01_1_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.BndEvt__MM_GenericSmallBtn01_1_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_MainOverlay_C_BndEvt__MM_GenericSmallBtn01_1_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.GoToMatchTimerchanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        TimeAsText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_MainOverlay_C::GoToMatchTimerchanged(const class FText& TimeAsText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.GoToMatchTimerchanged");
		
		USIGIS_MainOverlay_C_GoToMatchTimerchanged_Params params {};
		params.TimeAsText = TimeAsText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.BndEvt__MM_GenericSmallBtn01_SinglePlayer_CancelMatchmaking_1_K2Node_ComponentBoundEvent_2_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MainOverlay_C::BndEvt__MM_GenericSmallBtn01_SinglePlayer_CancelMatchmaking_1_K2Node_ComponentBoundEvent_2_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.BndEvt__MM_GenericSmallBtn01_SinglePlayer_CancelMatchmaking_1_K2Node_ComponentBoundEvent_2_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_MainOverlay_C_BndEvt__MM_GenericSmallBtn01_SinglePlayer_CancelMatchmaking_1_K2Node_ComponentBoundEvent_2_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.CustomEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsinATeam                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_MainOverlay_C::CustomEvent_2(bool IsinATeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.CustomEvent_2");
		
		USIGIS_MainOverlay_C_CustomEvent_2_Params params {};
		params.IsinATeam = IsinATeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.CustomEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECrewEvents                                        CrewState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_MainOverlay_C::CustomEvent_3(ECrewEvents CrewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.CustomEvent_3");
		
		USIGIS_MainOverlay_C_CustomEvent_3_Params params {};
		params.CrewState = CrewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.MoneyAmountHasChanged
	 * 		Flags  -> ()
	 */
	void USIGIS_MainOverlay_C::MoneyAmountHasChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.MoneyAmountHasChanged");
		
		USIGIS_MainOverlay_C_MoneyAmountHasChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.BndEvt__SIGIS_MyRank_K2Node_ComponentBoundEvent_4_ED_MyPlayerProfilePressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MainOverlay_C::BndEvt__SIGIS_MyRank_K2Node_ComponentBoundEvent_4_ED_MyPlayerProfilePressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.BndEvt__SIGIS_MyRank_K2Node_ComponentBoundEvent_4_ED_MyPlayerProfilePressed__DelegateSignature");
		
		USIGIS_MainOverlay_C_BndEvt__SIGIS_MyRank_K2Node_ComponentBoundEvent_4_ED_MyPlayerProfilePressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.ForceClose_MyStatsMenu
	 * 		Flags  -> ()
	 */
	void USIGIS_MainOverlay_C::ForceClose_MyStatsMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.ForceClose_MyStatsMenu");
		
		USIGIS_MainOverlay_C_ForceClose_MyStatsMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.TriggerCrew_JoinPressed
	 * 		Flags  -> ()
	 */
	void USIGIS_MainOverlay_C::TriggerCrew_JoinPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.TriggerCrew_JoinPressed");
		
		USIGIS_MainOverlay_C_TriggerCrew_JoinPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.TriggerCrew_CreatePressed
	 * 		Flags  -> ()
	 */
	void USIGIS_MainOverlay_C::TriggerCrew_CreatePressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.TriggerCrew_CreatePressed");
		
		USIGIS_MainOverlay_C_TriggerCrew_CreatePressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.CraftQue_IsSomethingReadyToCollect_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReadyToCollect                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_MainOverlay_C::CraftQue_IsSomethingReadyToCollect_Event_1(bool ReadyToCollect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.CraftQue_IsSomethingReadyToCollect_Event_1");
		
		USIGIS_MainOverlay_C_CraftQue_IsSomethingReadyToCollect_Event_1_Params params {};
		params.ReadyToCollect = ReadyToCollect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.BndEvt__Btn_DevDebug_2_FakeEndMatch_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MainOverlay_C::BndEvt__Btn_DevDebug_2_FakeEndMatch_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.BndEvt__Btn_DevDebug_2_FakeEndMatch_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_MainOverlay_C_BndEvt__Btn_DevDebug_2_FakeEndMatch_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.Close the EndMatchMenu
	 * 		Flags  -> ()
	 */
	void USIGIS_MainOverlay_C::Close_the_EndMatchMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.Close the EndMatchMenu");
		
		USIGIS_MainOverlay_C_Close_the_EndMatchMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.Equipment_SubTabPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_InvEquipmentStates                               WhichMenuPressed                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_MainOverlay_C::Equipment_SubTabPressed(E_InvEquipmentStates WhichMenuPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.Equipment_SubTabPressed");
		
		USIGIS_MainOverlay_C_Equipment_SubTabPressed_Params params {};
		params.WhichMenuPressed = WhichMenuPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.BndEvt__MM_GenericLargeBtn01_K2Node_ComponentBoundEvent_5_GenericLargeBtn_Pressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MainOverlay_C::BndEvt__MM_GenericLargeBtn01_K2Node_ComponentBoundEvent_5_GenericLargeBtn_Pressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.BndEvt__MM_GenericLargeBtn01_K2Node_ComponentBoundEvent_5_GenericLargeBtn_Pressed__DelegateSignature");
		
		USIGIS_MainOverlay_C_BndEvt__MM_GenericLargeBtn01_K2Node_ComponentBoundEvent_5_GenericLargeBtn_Pressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.PrestigeAccept
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PrestPointsToGive                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_MainOverlay_C::PrestigeAccept(int32_t PrestPointsToGive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.PrestigeAccept");
		
		USIGIS_MainOverlay_C_PrestigeAccept_Params params {};
		params.PrestPointsToGive = PrestPointsToGive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.PrestigeCancel
	 * 		Flags  -> ()
	 */
	void USIGIS_MainOverlay_C::PrestigeCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.PrestigeCancel");
		
		USIGIS_MainOverlay_C_PrestigeCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.HaveStatsLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               validstats                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_MainOverlay_C::HaveStatsLoaded(bool validstats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.HaveStatsLoaded");
		
		USIGIS_MainOverlay_C_HaveStatsLoaded_Params params {};
		params.validstats = validstats;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.ForceTabChangeFromInventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMenuState                                         ForceToWhichMenu                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_MainOverlay_C::ForceTabChangeFromInventory(EMenuState ForceToWhichMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.ForceTabChangeFromInventory");
		
		USIGIS_MainOverlay_C_ForceTabChangeFromInventory_Params params {};
		params.ForceToWhichMenu = ForceToWhichMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.BndEvt__SIGIS_MainOverlay_Btn_TempPrestige_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MainOverlay_C::BndEvt__SIGIS_MainOverlay_Btn_TempPrestige_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.BndEvt__SIGIS_MainOverlay_Btn_TempPrestige_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_MainOverlay_C_BndEvt__SIGIS_MainOverlay_Btn_TempPrestige_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.OnNaughtyReturn_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isNaughty                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      ReasonNaughty                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_MainOverlay_C::OnNaughtyReturn_Event_1(bool isNaughty, const class FString& ReasonNaughty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.OnNaughtyReturn_Event_1");
		
		USIGIS_MainOverlay_C_OnNaughtyReturn_Event_1_Params params {};
		params.isNaughty = isNaughty;
		params.ReasonNaughty = ReasonNaughty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.ReturnOnNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FNakamaNotification>                 returnednotification                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void USIGIS_MainOverlay_C::ReturnOnNotification(TArray<struct FNakamaNotification> returnednotification)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.ReturnOnNotification");
		
		USIGIS_MainOverlay_C_ReturnOnNotification_Params params {};
		params.returnednotification = returnednotification;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.UpdateGiftsMenu
	 * 		Flags  -> ()
	 */
	void USIGIS_MainOverlay_C::UpdateGiftsMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.UpdateGiftsMenu");
		
		USIGIS_MainOverlay_C_UpdateGiftsMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.ExecuteUbergraph_SIGIS_MainOverlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_MainOverlay_C::ExecuteUbergraph_SIGIS_MainOverlay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MainOverlay.SIGIS_MainOverlay_C.ExecuteUbergraph_SIGIS_MainOverlay");
		
		USIGIS_MainOverlay_C_ExecuteUbergraph_SIGIS_MainOverlay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGIS_MainOverlay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGIS_MainOverlay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SIGIS_MainOverlay.SIGIS_MainOverlay_C");
		return ptr;
	}

}


