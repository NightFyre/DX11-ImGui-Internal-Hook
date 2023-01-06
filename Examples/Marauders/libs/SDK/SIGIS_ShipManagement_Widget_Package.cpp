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
	 * 		Name   -> Function SIGIS_ShipManagement_Widget.SIGIS_ShipManagement_Widget_C.Construct
	 * 		Flags  -> ()
	 */
	void USIGIS_ShipManagement_Widget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipManagement_Widget.SIGIS_ShipManagement_Widget_C.Construct");
		
		USIGIS_ShipManagement_Widget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ShipManagement_Widget.SIGIS_ShipManagement_Widget_C.BndEvt__SIGIS_ShipManagement_Widget_MM_GenericSmallBtn01_GoBack_ShipManagment_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_ShipManagement_Widget_C::BndEvt__SIGIS_ShipManagement_Widget_MM_GenericSmallBtn01_GoBack_ShipManagment_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipManagement_Widget.SIGIS_ShipManagement_Widget_C.BndEvt__SIGIS_ShipManagement_Widget_MM_GenericSmallBtn01_GoBack_ShipManagment_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_ShipManagement_Widget_C_BndEvt__SIGIS_ShipManagement_Widget_MM_GenericSmallBtn01_GoBack_ShipManagment_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ShipManagement_Widget.SIGIS_ShipManagement_Widget_C.DeleteThisShipTriggered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        WhichDataTableRow                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      FrigID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            ScrapReward                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_ShipManagement_Widget_C::DeleteThisShipTriggered(const class FName& WhichDataTableRow, const class FString& FrigID, int32_t ScrapReward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipManagement_Widget.SIGIS_ShipManagement_Widget_C.DeleteThisShipTriggered");
		
		USIGIS_ShipManagement_Widget_C_DeleteThisShipTriggered_Params params {};
		params.WhichDataTableRow = WhichDataTableRow;
		params.FrigID = FrigID;
		params.ScrapReward = ScrapReward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ShipManagement_Widget.SIGIS_ShipManagement_Widget_C.Refresh_List
	 * 		Flags  -> ()
	 */
	void USIGIS_ShipManagement_Widget_C::Refresh_List()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipManagement_Widget.SIGIS_ShipManagement_Widget_C.Refresh_List");
		
		USIGIS_ShipManagement_Widget_C_Refresh_List_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ShipManagement_Widget.SIGIS_ShipManagement_Widget_C.Confirm_CloseThePopup
	 * 		Flags  -> ()
	 */
	void USIGIS_ShipManagement_Widget_C::Confirm_CloseThePopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipManagement_Widget.SIGIS_ShipManagement_Widget_C.Confirm_CloseThePopup");
		
		USIGIS_ShipManagement_Widget_C_Confirm_CloseThePopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ShipManagement_Widget.SIGIS_ShipManagement_Widget_C.Cancel_CloseThePopup
	 * 		Flags  -> ()
	 */
	void USIGIS_ShipManagement_Widget_C::Cancel_CloseThePopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipManagement_Widget.SIGIS_ShipManagement_Widget_C.Cancel_CloseThePopup");
		
		USIGIS_ShipManagement_Widget_C_Cancel_CloseThePopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ShipManagement_Widget.SIGIS_ShipManagement_Widget_C.ExecuteUbergraph_SIGIS_ShipManagement_Widget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_ShipManagement_Widget_C::ExecuteUbergraph_SIGIS_ShipManagement_Widget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipManagement_Widget.SIGIS_ShipManagement_Widget_C.ExecuteUbergraph_SIGIS_ShipManagement_Widget");
		
		USIGIS_ShipManagement_Widget_C_ExecuteUbergraph_SIGIS_ShipManagement_Widget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ShipManagement_Widget.SIGIS_ShipManagement_Widget_C.ED_CloseShipManagementMenu__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_ShipManagement_Widget_C::ED_CloseShipManagementMenu__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipManagement_Widget.SIGIS_ShipManagement_Widget_C.ED_CloseShipManagementMenu__DelegateSignature");
		
		USIGIS_ShipManagement_Widget_C_ED_CloseShipManagementMenu__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ShipManagement_Widget.SIGIS_ShipManagement_Widget_C.ED_RemoveShip__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ShipDataTable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      ToDelete_FrigID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            RewardMoney                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_ShipManagement_Widget_C::ED_RemoveShip__DelegateSignature(const class FName& ShipDataTable, const class FString& ToDelete_FrigID, int32_t RewardMoney)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipManagement_Widget.SIGIS_ShipManagement_Widget_C.ED_RemoveShip__DelegateSignature");
		
		USIGIS_ShipManagement_Widget_C_ED_RemoveShip__DelegateSignature_Params params {};
		params.ShipDataTable = ShipDataTable;
		params.ToDelete_FrigID = ToDelete_FrigID;
		params.RewardMoney = RewardMoney;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGIS_ShipManagement_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGIS_ShipManagement_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SIGIS_ShipManagement_Widget.SIGIS_ShipManagement_Widget_C");
		return ptr;
	}

}


