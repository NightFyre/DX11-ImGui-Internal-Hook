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
	 * 		Name   -> Function SIGIS_ShipWidget.SIGIS_ShipWidget_C.PerShipButtonPressSounds
	 * 		Flags  -> ()
	 */
	void USIGIS_ShipWidget_C::PerShipButtonPressSounds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipWidget.SIGIS_ShipWidget_C.PerShipButtonPressSounds");
		
		USIGIS_ShipWidget_C_PerShipButtonPressSounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ShipWidget.SIGIS_ShipWidget_C.IsSelectedLook
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_ShipWidget_C::IsSelectedLook(bool isSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipWidget.SIGIS_ShipWidget_C.IsSelectedLook");
		
		USIGIS_ShipWidget_C_IsSelectedLook_Params params {};
		params.isSelected = isSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ShipWidget.SIGIS_ShipWidget_C.SetAsActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_ShipWidget_C::SetAsActive(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipWidget.SIGIS_ShipWidget_C.SetAsActive");
		
		USIGIS_ShipWidget_C_SetAsActive_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ShipWidget.SIGIS_ShipWidget_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_ShipWidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipWidget.SIGIS_ShipWidget_C.PreConstruct");
		
		USIGIS_ShipWidget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ShipWidget.SIGIS_ShipWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void USIGIS_ShipWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipWidget.SIGIS_ShipWidget_C.Construct");
		
		USIGIS_ShipWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ShipWidget.SIGIS_ShipWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_ShipWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipWidget.SIGIS_ShipWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		USIGIS_ShipWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ShipWidget.SIGIS_ShipWidget_C.FakePress_ShipSelectBtn
	 * 		Flags  -> ()
	 */
	void USIGIS_ShipWidget_C::FakePress_ShipSelectBtn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipWidget.SIGIS_ShipWidget_C.FakePress_ShipSelectBtn");
		
		USIGIS_ShipWidget_C_FakePress_ShipSelectBtn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ShipWidget.SIGIS_ShipWidget_C.BndEvt__Btn_ShipRow_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_ShipWidget_C::BndEvt__Btn_ShipRow_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipWidget.SIGIS_ShipWidget_C.BndEvt__Btn_ShipRow_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		USIGIS_ShipWidget_C_BndEvt__Btn_ShipRow_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ShipWidget.SIGIS_ShipWidget_C.BndEvt__Btn_ShipRow_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_ShipWidget_C::BndEvt__Btn_ShipRow_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipWidget.SIGIS_ShipWidget_C.BndEvt__Btn_ShipRow_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		USIGIS_ShipWidget_C_BndEvt__Btn_ShipRow_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ShipWidget.SIGIS_ShipWidget_C.ForceUnselectedColour
	 * 		Flags  -> ()
	 */
	void USIGIS_ShipWidget_C::ForceUnselectedColour()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipWidget.SIGIS_ShipWidget_C.ForceUnselectedColour");
		
		USIGIS_ShipWidget_C_ForceUnselectedColour_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ShipWidget.SIGIS_ShipWidget_C.ExecuteUbergraph_SIGIS_ShipWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_ShipWidget_C::ExecuteUbergraph_SIGIS_ShipWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipWidget.SIGIS_ShipWidget_C.ExecuteUbergraph_SIGIS_ShipWidget");
		
		USIGIS_ShipWidget_C_ExecuteUbergraph_SIGIS_ShipWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ShipWidget.SIGIS_ShipWidget_C.ShipSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASIGISInventoryItem*                         ShipObjectRef                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ShipDTname                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      FrigID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      ShipName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               IsStarterShip                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_ShipWidget_C::ShipSelected__DelegateSignature(class ASIGISInventoryItem* ShipObjectRef, const class FName& ShipDTname, const class FString& FrigID, const class FString& ShipName, bool IsStarterShip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipWidget.SIGIS_ShipWidget_C.ShipSelected__DelegateSignature");
		
		USIGIS_ShipWidget_C_ShipSelected__DelegateSignature_Params params {};
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
	 * 		Name   -> PredefinedFunction USIGIS_ShipWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGIS_ShipWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SIGIS_ShipWidget.SIGIS_ShipWidget_C");
		return ptr;
	}

}


