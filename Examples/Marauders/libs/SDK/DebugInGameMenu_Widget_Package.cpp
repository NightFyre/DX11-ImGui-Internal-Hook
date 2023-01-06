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
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.DevSpawnItemsList_Search
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Reset                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        DoesContainThis                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UDebugInGameMenu_Widget_C::DevSpawnItemsList_Search(bool Reset, const class FText& DoesContainThis)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.DevSpawnItemsList_Search");
		
		UDebugInGameMenu_Widget_C_DevSpawnItemsList_Search_Params params {};
		params.Reset = Reset;
		params.DoesContainThis = DoesContainThis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.GenerateList_OfAll_Items_InDT
	 * 		Flags  -> ()
	 */
	void UDebugInGameMenu_Widget_C::GenerateList_OfAll_Items_InDT()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.GenerateList_OfAll_Items_InDT");
		
		UDebugInGameMenu_Widget_C_GenerateList_OfAll_Items_InDT_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.Construct
	 * 		Flags  -> ()
	 */
	void UDebugInGameMenu_Widget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.Construct");
		
		UDebugInGameMenu_Widget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugInGameMenu_Widget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.Tick");
		
		UDebugInGameMenu_Widget_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__SubmitBtn_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__SubmitBtn_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__SubmitBtn_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__SubmitBtn_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_Money_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__Btn_Debug_Money_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_Money_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_Money_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_Points_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__Btn_Debug_Points_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_Points_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_Points_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_UnlockRecipe_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__Btn_Debug_UnlockRecipe_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_UnlockRecipe_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_UnlockRecipe_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__BACKBTN_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__BACKBTN_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__BACKBTN_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__BACKBTN_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_DeleteSave_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__Btn_Debug_DeleteSave_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_DeleteSave_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_DeleteSave_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_add_StartShip_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__Btn_Debug_add_StartShip_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_add_StartShip_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_add_StartShip_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_addVIP_Ship_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__Btn_Debug_addVIP_Ship_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_addVIP_Ship_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_addVIP_Ship_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_add_FastShip_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__Btn_Debug_add_FastShip_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_add_FastShip_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_add_FastShip_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_add_HeavyShip_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__Btn_Debug_add_HeavyShip_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_add_HeavyShip_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_add_HeavyShip_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_DebugXP_1_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__Btn_DebugXP_1_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_DebugXP_1_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__Btn_DebugXP_1_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_add_HeavyShip_1_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__Btn_Debug_add_HeavyShip_1_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_add_HeavyShip_1_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_add_HeavyShip_1_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_WipePlayerData_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__Btn_Debug_WipePlayerData_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_WipePlayerData_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_WipePlayerData_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_WipePlayerInventory_K2Node_ComponentBoundEvent_13_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__Btn_Debug_WipePlayerInventory_K2Node_ComponentBoundEvent_13_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_WipePlayerInventory_K2Node_ComponentBoundEvent_13_OnButtonPressedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_WipePlayerInventory_K2Node_ComponentBoundEvent_13_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_GetStartItems_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__Btn_Debug_GetStartItems_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_GetStartItems_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_GetStartItems_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_GetStartItemsVIP_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__Btn_Debug_GetStartItemsVIP_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_GetStartItemsVIP_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_GetStartItemsVIP_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_UnlockRecipe_1_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__Btn_Debug_UnlockRecipe_1_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_UnlockRecipe_1_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_UnlockRecipe_1_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_UnlockRecipe_2_K2Node_ComponentBoundEvent_17_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__Btn_Debug_UnlockRecipe_2_K2Node_ComponentBoundEvent_17_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_UnlockRecipe_2_K2Node_ComponentBoundEvent_17_OnButtonPressedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_UnlockRecipe_2_K2Node_ComponentBoundEvent_17_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_UnlockRecipe_3_K2Node_ComponentBoundEvent_18_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__Btn_Debug_UnlockRecipe_3_K2Node_ComponentBoundEvent_18_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_UnlockRecipe_3_K2Node_ComponentBoundEvent_18_OnButtonPressedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_UnlockRecipe_3_K2Node_ComponentBoundEvent_18_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_AllGuns_1_K2Node_ComponentBoundEvent_19_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__Btn_Debug_AllGuns_1_K2Node_ComponentBoundEvent_19_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_AllGuns_1_K2Node_ComponentBoundEvent_19_OnButtonPressedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_AllGuns_1_K2Node_ComponentBoundEvent_19_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_AllGuns_2_K2Node_ComponentBoundEvent_20_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__Btn_Debug_AllGuns_2_K2Node_ComponentBoundEvent_20_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_AllGuns_2_K2Node_ComponentBoundEvent_20_OnButtonPressedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_AllGuns_2_K2Node_ComponentBoundEvent_20_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_Health_K2Node_ComponentBoundEvent_21_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__Btn_Debug_Health_K2Node_ComponentBoundEvent_21_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_Health_K2Node_ComponentBoundEvent_21_OnButtonPressedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_Health_K2Node_ComponentBoundEvent_21_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_Armour_K2Node_ComponentBoundEvent_22_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__Btn_Debug_Armour_K2Node_ComponentBoundEvent_22_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_Armour_K2Node_ComponentBoundEvent_22_OnButtonPressedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_Armour_K2Node_ComponentBoundEvent_22_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_Armour_1_K2Node_ComponentBoundEvent_23_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__Btn_Debug_Armour_1_K2Node_ComponentBoundEvent_23_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_Armour_1_K2Node_ComponentBoundEvent_23_OnButtonPressedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_Armour_1_K2Node_ComponentBoundEvent_23_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_Armour_Head_K2Node_ComponentBoundEvent_24_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__Btn_Debug_Armour_Head_K2Node_ComponentBoundEvent_24_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_Armour_Head_K2Node_ComponentBoundEvent_24_OnButtonPressedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_Armour_Head_K2Node_ComponentBoundEvent_24_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_Bags_K2Node_ComponentBoundEvent_25_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__Btn_Debug_Bags_K2Node_ComponentBoundEvent_25_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_Bags_K2Node_ComponentBoundEvent_25_OnButtonPressedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_Bags_K2Node_ComponentBoundEvent_25_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_ShipAttachments_K2Node_ComponentBoundEvent_26_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__Btn_Debug_ShipAttachments_K2Node_ComponentBoundEvent_26_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_ShipAttachments_K2Node_ComponentBoundEvent_26_OnButtonPressedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_ShipAttachments_K2Node_ComponentBoundEvent_26_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_Clearallships_K2Node_ComponentBoundEvent_27_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__Btn_Debug_Clearallships_K2Node_ComponentBoundEvent_27_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_Clearallships_K2Node_ComponentBoundEvent_27_OnButtonPressedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_Clearallships_K2Node_ComponentBoundEvent_27_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_add_ScoutShip_K2Node_ComponentBoundEvent_28_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__Btn_Debug_add_ScoutShip_K2Node_ComponentBoundEvent_28_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_add_ScoutShip_K2Node_ComponentBoundEvent_28_OnButtonPressedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_add_ScoutShip_K2Node_ComponentBoundEvent_28_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_ShipBowGuns_K2Node_ComponentBoundEvent_29_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__Btn_Debug_ShipBowGuns_K2Node_ComponentBoundEvent_29_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_ShipBowGuns_K2Node_ComponentBoundEvent_29_OnButtonPressedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_ShipBowGuns_K2Node_ComponentBoundEvent_29_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_TravelToLocalServer_K2Node_ComponentBoundEvent_30_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__Btn_Debug_TravelToLocalServer_K2Node_ComponentBoundEvent_30_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_TravelToLocalServer_K2Node_ComponentBoundEvent_30_OnButtonPressedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_TravelToLocalServer_K2Node_ComponentBoundEvent_30_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_DebugXP_1_K2Node_ComponentBoundEvent_31_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__Btn_DebugXP_1_K2Node_ComponentBoundEvent_31_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_DebugXP_1_K2Node_ComponentBoundEvent_31_OnButtonPressedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__Btn_DebugXP_1_K2Node_ComponentBoundEvent_31_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugMenu_Widget_Btn_DebugClearMissions_K2Node_ComponentBoundEvent_33_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__DebugMenu_Widget_Btn_DebugClearMissions_K2Node_ComponentBoundEvent_33_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugMenu_Widget_Btn_DebugClearMissions_K2Node_ComponentBoundEvent_33_OnButtonPressedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__DebugMenu_Widget_Btn_DebugClearMissions_K2Node_ComponentBoundEvent_33_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugMenu_Widget_Btn_DebugStartMission_2_K2Node_ComponentBoundEvent_34_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__DebugMenu_Widget_Btn_DebugStartMission_2_K2Node_ComponentBoundEvent_34_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugMenu_Widget_Btn_DebugStartMission_2_K2Node_ComponentBoundEvent_34_OnButtonPressedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__DebugMenu_Widget_Btn_DebugStartMission_2_K2Node_ComponentBoundEvent_34_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugMenu_Widget_EditableTextBox_DevSearchItem_K2Node_ComponentBoundEvent_35_OnEditableTextBoxChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__DebugMenu_Widget_EditableTextBox_DevSearchItem_K2Node_ComponentBoundEvent_35_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugMenu_Widget_EditableTextBox_DevSearchItem_K2Node_ComponentBoundEvent_35_OnEditableTextBoxChangedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__DebugMenu_Widget_EditableTextBox_DevSearchItem_K2Node_ComponentBoundEvent_35_OnEditableTextBoxChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugMenu_Widget_Btn_DebugXP_1_K2Node_ComponentBoundEvent_36_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__DebugMenu_Widget_Btn_DebugXP_1_K2Node_ComponentBoundEvent_36_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugMenu_Widget_Btn_DebugXP_1_K2Node_ComponentBoundEvent_36_OnButtonPressedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__DebugMenu_Widget_Btn_DebugXP_1_K2Node_ComponentBoundEvent_36_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugMenu_Widget_Btn_Debug_LotsItems_Equipment_K2Node_ComponentBoundEvent_37_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__DebugMenu_Widget_Btn_Debug_LotsItems_Equipment_K2Node_ComponentBoundEvent_37_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugMenu_Widget_Btn_Debug_LotsItems_Equipment_K2Node_ComponentBoundEvent_37_OnButtonPressedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__DebugMenu_Widget_Btn_Debug_LotsItems_Equipment_K2Node_ComponentBoundEvent_37_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugMenu_Widget_Btn_Debug_LotsItems_Equipment_1_K2Node_ComponentBoundEvent_38_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__DebugMenu_Widget_Btn_Debug_LotsItems_Equipment_1_K2Node_ComponentBoundEvent_38_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugMenu_Widget_Btn_Debug_LotsItems_Equipment_1_K2Node_ComponentBoundEvent_38_OnButtonPressedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__DebugMenu_Widget_Btn_Debug_LotsItems_Equipment_1_K2Node_ComponentBoundEvent_38_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugMenu_Widget_Btn_Debug_AllGuns_3_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__DebugMenu_Widget_Btn_Debug_AllGuns_3_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugMenu_Widget_Btn_Debug_AllGuns_3_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__DebugMenu_Widget_Btn_Debug_AllGuns_3_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugMenu_Widget_Btn_Debug_AllGuns_4_K2Node_ComponentBoundEvent_40_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__DebugMenu_Widget_Btn_Debug_AllGuns_4_K2Node_ComponentBoundEvent_40_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugMenu_Widget_Btn_Debug_AllGuns_4_K2Node_ComponentBoundEvent_40_OnButtonPressedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__DebugMenu_Widget_Btn_Debug_AllGuns_4_K2Node_ComponentBoundEvent_40_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugMenu_Widget_Btn_TryPassword_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__DebugMenu_Widget_Btn_TryPassword_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugMenu_Widget_Btn_TryPassword_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__DebugMenu_Widget_Btn_TryPassword_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugMenu_Widget_EditableTextBox_128_K2Node_ComponentBoundEvent_42_OnEditableTextBoxChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__DebugMenu_Widget_EditableTextBox_128_K2Node_ComponentBoundEvent_42_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugMenu_Widget_EditableTextBox_128_K2Node_ComponentBoundEvent_42_OnEditableTextBoxChangedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__DebugMenu_Widget_EditableTextBox_128_K2Node_ComponentBoundEvent_42_OnEditableTextBoxChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugMenu_Widget_EditableTextBox_128_K2Node_ComponentBoundEvent_43_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__DebugMenu_Widget_EditableTextBox_128_K2Node_ComponentBoundEvent_43_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugMenu_Widget_EditableTextBox_128_K2Node_ComponentBoundEvent_43_OnEditableTextBoxCommittedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__DebugMenu_Widget_EditableTextBox_128_K2Node_ComponentBoundEvent_43_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugMenu_Widget_EditableTextBox_XP_1_K2Node_ComponentBoundEvent_44_OnEditableTextBoxChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__DebugMenu_Widget_EditableTextBox_XP_1_K2Node_ComponentBoundEvent_44_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugMenu_Widget_EditableTextBox_XP_1_K2Node_ComponentBoundEvent_44_OnEditableTextBoxChangedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__DebugMenu_Widget_EditableTextBox_XP_1_K2Node_ComponentBoundEvent_44_OnEditableTextBoxChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugMenu_Widget_EditableTextBox_XP_1_K2Node_ComponentBoundEvent_51_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__DebugMenu_Widget_EditableTextBox_XP_1_K2Node_ComponentBoundEvent_51_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugMenu_Widget_EditableTextBox_XP_1_K2Node_ComponentBoundEvent_51_OnEditableTextBoxCommittedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__DebugMenu_Widget_EditableTextBox_XP_1_K2Node_ComponentBoundEvent_51_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugMenu_Widget_Btn_EnterConsoleCommand_K2Node_ComponentBoundEvent_52_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__DebugMenu_Widget_Btn_EnterConsoleCommand_K2Node_ComponentBoundEvent_52_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugMenu_Widget_Btn_EnterConsoleCommand_K2Node_ComponentBoundEvent_52_OnButtonPressedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__DebugMenu_Widget_Btn_EnterConsoleCommand_K2Node_ComponentBoundEvent_52_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugMenu_Widget_Btn_ClearConsoleCommand_K2Node_ComponentBoundEvent_53_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__DebugMenu_Widget_Btn_ClearConsoleCommand_K2Node_ComponentBoundEvent_53_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugMenu_Widget_Btn_ClearConsoleCommand_K2Node_ComponentBoundEvent_53_OnButtonPressedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__DebugMenu_Widget_Btn_ClearConsoleCommand_K2Node_ComponentBoundEvent_53_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugInGameMenu_Widget_Btn_DebugActivateCameraMode_K2Node_ComponentBoundEvent_32_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__DebugInGameMenu_Widget_Btn_DebugActivateCameraMode_K2Node_ComponentBoundEvent_32_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugInGameMenu_Widget_Btn_DebugActivateCameraMode_K2Node_ComponentBoundEvent_32_OnButtonPressedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__DebugInGameMenu_Widget_Btn_DebugActivateCameraMode_K2Node_ComponentBoundEvent_32_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugInGameMenu_Widget_Btn_DebugActivateHIdePlayerUI_K2Node_ComponentBoundEvent_41_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugInGameMenu_Widget_C::BndEvt__DebugInGameMenu_Widget_Btn_DebugActivateHIdePlayerUI_K2Node_ComponentBoundEvent_41_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugInGameMenu_Widget_Btn_DebugActivateHIdePlayerUI_K2Node_ComponentBoundEvent_41_OnButtonPressedEvent__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_BndEvt__DebugInGameMenu_Widget_Btn_DebugActivateHIdePlayerUI_K2Node_ComponentBoundEvent_41_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.ExecuteUbergraph_DebugInGameMenu_Widget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugInGameMenu_Widget_C::ExecuteUbergraph_DebugInGameMenu_Widget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.ExecuteUbergraph_DebugInGameMenu_Widget");
		
		UDebugInGameMenu_Widget_C_ExecuteUbergraph_DebugInGameMenu_Widget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.CloseDebugMenu__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugInGameMenu_Widget_C::CloseDebugMenu__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.CloseDebugMenu__DelegateSignature");
		
		UDebugInGameMenu_Widget_C_CloseDebugMenu__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDebugInGameMenu_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDebugInGameMenu_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DebugInGameMenu_Widget.DebugInGameMenu_Widget_C");
		return ptr;
	}

}


