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
	 * 		Name   -> Function SIGIS_ShipManagmentRow.SIGIS_ShipManagmentRow_C.GetBrushColor_1
	 * 		Flags  -> ()
	 */
	struct FLinearColor USIGIS_ShipManagmentRow_C::GetBrushColor_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipManagmentRow.SIGIS_ShipManagmentRow_C.GetBrushColor_1");
		
		USIGIS_ShipManagmentRow_C_GetBrushColor_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ShipManagmentRow.SIGIS_ShipManagmentRow_C.IsSelectedLook
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_ShipManagmentRow_C::IsSelectedLook(bool isSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipManagmentRow.SIGIS_ShipManagmentRow_C.IsSelectedLook");
		
		USIGIS_ShipManagmentRow_C_IsSelectedLook_Params params {};
		params.isSelected = isSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ShipManagmentRow.SIGIS_ShipManagmentRow_C.SetAsActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_ShipManagmentRow_C::SetAsActive(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipManagmentRow.SIGIS_ShipManagmentRow_C.SetAsActive");
		
		USIGIS_ShipManagmentRow_C_SetAsActive_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ShipManagmentRow.SIGIS_ShipManagmentRow_C.ForceUnselectedColour
	 * 		Flags  -> ()
	 */
	void USIGIS_ShipManagmentRow_C::ForceUnselectedColour()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipManagmentRow.SIGIS_ShipManagmentRow_C.ForceUnselectedColour");
		
		USIGIS_ShipManagmentRow_C_ForceUnselectedColour_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ShipManagmentRow.SIGIS_ShipManagmentRow_C.FakePress_ShipSelectBtn
	 * 		Flags  -> ()
	 */
	void USIGIS_ShipManagmentRow_C::FakePress_ShipSelectBtn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipManagmentRow.SIGIS_ShipManagmentRow_C.FakePress_ShipSelectBtn");
		
		USIGIS_ShipManagmentRow_C_FakePress_ShipSelectBtn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ShipManagmentRow.SIGIS_ShipManagmentRow_C.Construct
	 * 		Flags  -> ()
	 */
	void USIGIS_ShipManagmentRow_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipManagmentRow.SIGIS_ShipManagmentRow_C.Construct");
		
		USIGIS_ShipManagmentRow_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ShipManagmentRow.SIGIS_ShipManagmentRow_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_ShipManagmentRow_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipManagmentRow.SIGIS_ShipManagmentRow_C.PreConstruct");
		
		USIGIS_ShipManagmentRow_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ShipManagmentRow.SIGIS_ShipManagmentRow_C.BndEvt__SIGIS_ShipManagmentRow_MM_GenericLargeBtn01_K2Node_ComponentBoundEvent_3_GenericLargeBtn_Pressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_ShipManagmentRow_C::BndEvt__SIGIS_ShipManagmentRow_MM_GenericLargeBtn01_K2Node_ComponentBoundEvent_3_GenericLargeBtn_Pressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipManagmentRow.SIGIS_ShipManagmentRow_C.BndEvt__SIGIS_ShipManagmentRow_MM_GenericLargeBtn01_K2Node_ComponentBoundEvent_3_GenericLargeBtn_Pressed__DelegateSignature");
		
		USIGIS_ShipManagmentRow_C_BndEvt__SIGIS_ShipManagmentRow_MM_GenericLargeBtn01_K2Node_ComponentBoundEvent_3_GenericLargeBtn_Pressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ShipManagmentRow.SIGIS_ShipManagmentRow_C.YES_ScrapThisShip
	 * 		Flags  -> ()
	 */
	void USIGIS_ShipManagmentRow_C::YES_ScrapThisShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipManagmentRow.SIGIS_ShipManagmentRow_C.YES_ScrapThisShip");
		
		USIGIS_ShipManagmentRow_C_YES_ScrapThisShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ShipManagmentRow.SIGIS_ShipManagmentRow_C.CancelSureYouWantToScrapShip
	 * 		Flags  -> ()
	 */
	void USIGIS_ShipManagmentRow_C::CancelSureYouWantToScrapShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipManagmentRow.SIGIS_ShipManagmentRow_C.CancelSureYouWantToScrapShip");
		
		USIGIS_ShipManagmentRow_C_CancelSureYouWantToScrapShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ShipManagmentRow.SIGIS_ShipManagmentRow_C.ExecuteUbergraph_SIGIS_ShipManagmentRow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_ShipManagmentRow_C::ExecuteUbergraph_SIGIS_ShipManagmentRow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipManagmentRow.SIGIS_ShipManagmentRow_C.ExecuteUbergraph_SIGIS_ShipManagmentRow");
		
		USIGIS_ShipManagmentRow_C_ExecuteUbergraph_SIGIS_ShipManagmentRow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ShipManagmentRow.SIGIS_ShipManagmentRow_C.ED_ScrapThisShip__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        WhichShipDT                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      FrigID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            ScrapReward                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_ShipManagmentRow_C::ED_ScrapThisShip__DelegateSignature(const class FName& WhichShipDT, const class FString& FrigID, int32_t ScrapReward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipManagmentRow.SIGIS_ShipManagmentRow_C.ED_ScrapThisShip__DelegateSignature");
		
		USIGIS_ShipManagmentRow_C_ED_ScrapThisShip__DelegateSignature_Params params {};
		params.WhichShipDT = WhichShipDT;
		params.FrigID = FrigID;
		params.ScrapReward = ScrapReward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ShipManagmentRow.SIGIS_ShipManagmentRow_C.ShipSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASIGISInventoryItem*                         ShipObjectRef                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ShipDTname                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      FrigID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      ShipName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               IsStarterShip                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_ShipManagmentRow_C::ShipSelected__DelegateSignature(class ASIGISInventoryItem* ShipObjectRef, const class FName& ShipDTname, const class FString& FrigID, const class FString& ShipName, bool IsStarterShip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipManagmentRow.SIGIS_ShipManagmentRow_C.ShipSelected__DelegateSignature");
		
		USIGIS_ShipManagmentRow_C_ShipSelected__DelegateSignature_Params params {};
		params.ShipObjectRef = ShipObjectRef;
		params.ShipDTname = ShipDTname;
		params.FrigID = FrigID;
		params.ShipName = ShipName;
		params.IsStarterShip = IsStarterShip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGIS_ShipManagmentRow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGIS_ShipManagmentRow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SIGIS_ShipManagmentRow.SIGIS_ShipManagmentRow_C");
		return ptr;
	}

}


