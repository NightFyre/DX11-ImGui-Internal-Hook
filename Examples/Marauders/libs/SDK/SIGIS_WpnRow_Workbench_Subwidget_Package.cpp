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
	 * 		Name   -> Function SIGIS_WpnRow_Workbench_Subwidget.SIGIS_WpnRow_Workbench_Subwidget_C.WpnRow_IsEquipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isEquipped                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_WpnRow_Workbench_Subwidget_C::WpnRow_IsEquipped(bool isEquipped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_WpnRow_Workbench_Subwidget.SIGIS_WpnRow_Workbench_Subwidget_C.WpnRow_IsEquipped");
		
		USIGIS_WpnRow_Workbench_Subwidget_C_WpnRow_IsEquipped_Params params {};
		params.isEquipped = isEquipped;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_WpnRow_Workbench_Subwidget.SIGIS_WpnRow_Workbench_Subwidget_C.WorkbenchWpnRow_SetupInfo
	 * 		Flags  -> ()
	 */
	void USIGIS_WpnRow_Workbench_Subwidget_C::WorkbenchWpnRow_SetupInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_WpnRow_Workbench_Subwidget.SIGIS_WpnRow_Workbench_Subwidget_C.WorkbenchWpnRow_SetupInfo");
		
		USIGIS_WpnRow_Workbench_Subwidget_C_WorkbenchWpnRow_SetupInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_WpnRow_Workbench_Subwidget.SIGIS_WpnRow_Workbench_Subwidget_C.WpnRow_IsSelectedLook
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_WpnRow_Workbench_Subwidget_C::WpnRow_IsSelectedLook(bool isSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_WpnRow_Workbench_Subwidget.SIGIS_WpnRow_Workbench_Subwidget_C.WpnRow_IsSelectedLook");
		
		USIGIS_WpnRow_Workbench_Subwidget_C_WpnRow_IsSelectedLook_Params params {};
		params.isSelected = isSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_WpnRow_Workbench_Subwidget.SIGIS_WpnRow_Workbench_Subwidget_C.SetAsActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_WpnRow_Workbench_Subwidget_C::SetAsActive(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_WpnRow_Workbench_Subwidget.SIGIS_WpnRow_Workbench_Subwidget_C.SetAsActive");
		
		USIGIS_WpnRow_Workbench_Subwidget_C_SetAsActive_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_WpnRow_Workbench_Subwidget.SIGIS_WpnRow_Workbench_Subwidget_C.FakePress_WpnWorkbenchBtn
	 * 		Flags  -> ()
	 */
	void USIGIS_WpnRow_Workbench_Subwidget_C::FakePress_WpnWorkbenchBtn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_WpnRow_Workbench_Subwidget.SIGIS_WpnRow_Workbench_Subwidget_C.FakePress_WpnWorkbenchBtn");
		
		USIGIS_WpnRow_Workbench_Subwidget_C_FakePress_WpnWorkbenchBtn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_WpnRow_Workbench_Subwidget.SIGIS_WpnRow_Workbench_Subwidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_WpnRow_Workbench_Subwidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_WpnRow_Workbench_Subwidget.SIGIS_WpnRow_Workbench_Subwidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		USIGIS_WpnRow_Workbench_Subwidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_WpnRow_Workbench_Subwidget.SIGIS_WpnRow_Workbench_Subwidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_WpnRow_Workbench_Subwidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_WpnRow_Workbench_Subwidget.SIGIS_WpnRow_Workbench_Subwidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		USIGIS_WpnRow_Workbench_Subwidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_WpnRow_Workbench_Subwidget.SIGIS_WpnRow_Workbench_Subwidget_C.ForceUnselectedColour
	 * 		Flags  -> ()
	 */
	void USIGIS_WpnRow_Workbench_Subwidget_C::ForceUnselectedColour()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_WpnRow_Workbench_Subwidget.SIGIS_WpnRow_Workbench_Subwidget_C.ForceUnselectedColour");
		
		USIGIS_WpnRow_Workbench_Subwidget_C_ForceUnselectedColour_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_WpnRow_Workbench_Subwidget.SIGIS_WpnRow_Workbench_Subwidget_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_WpnRow_Workbench_Subwidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_WpnRow_Workbench_Subwidget.SIGIS_WpnRow_Workbench_Subwidget_C.PreConstruct");
		
		USIGIS_WpnRow_Workbench_Subwidget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_WpnRow_Workbench_Subwidget.SIGIS_WpnRow_Workbench_Subwidget_C.Construct
	 * 		Flags  -> ()
	 */
	void USIGIS_WpnRow_Workbench_Subwidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_WpnRow_Workbench_Subwidget.SIGIS_WpnRow_Workbench_Subwidget_C.Construct");
		
		USIGIS_WpnRow_Workbench_Subwidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_WpnRow_Workbench_Subwidget.SIGIS_WpnRow_Workbench_Subwidget_C.BndEvt__SIGIS_WpnRow_Workbench_Subwidget_Btn_WeaponRow_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_WpnRow_Workbench_Subwidget_C::BndEvt__SIGIS_WpnRow_Workbench_Subwidget_Btn_WeaponRow_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_WpnRow_Workbench_Subwidget.SIGIS_WpnRow_Workbench_Subwidget_C.BndEvt__SIGIS_WpnRow_Workbench_Subwidget_Btn_WeaponRow_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_WpnRow_Workbench_Subwidget_C_BndEvt__SIGIS_WpnRow_Workbench_Subwidget_Btn_WeaponRow_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_WpnRow_Workbench_Subwidget.SIGIS_WpnRow_Workbench_Subwidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_WpnRow_Workbench_Subwidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_WpnRow_Workbench_Subwidget.SIGIS_WpnRow_Workbench_Subwidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		USIGIS_WpnRow_Workbench_Subwidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_WpnRow_Workbench_Subwidget.SIGIS_WpnRow_Workbench_Subwidget_C.RightClickIfMeFakePress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      WpnUIIDLookingFor                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_WpnRow_Workbench_Subwidget_C::RightClickIfMeFakePress(const class FString& WpnUIIDLookingFor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_WpnRow_Workbench_Subwidget.SIGIS_WpnRow_Workbench_Subwidget_C.RightClickIfMeFakePress");
		
		USIGIS_WpnRow_Workbench_Subwidget_C_RightClickIfMeFakePress_Params params {};
		params.WpnUIIDLookingFor = WpnUIIDLookingFor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_WpnRow_Workbench_Subwidget.SIGIS_WpnRow_Workbench_Subwidget_C.ExecuteUbergraph_SIGIS_WpnRow_Workbench_Subwidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_WpnRow_Workbench_Subwidget_C::ExecuteUbergraph_SIGIS_WpnRow_Workbench_Subwidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_WpnRow_Workbench_Subwidget.SIGIS_WpnRow_Workbench_Subwidget_C.ExecuteUbergraph_SIGIS_WpnRow_Workbench_Subwidget");
		
		USIGIS_WpnRow_Workbench_Subwidget_C_ExecuteUbergraph_SIGIS_WpnRow_Workbench_Subwidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_WpnRow_Workbench_Subwidget.SIGIS_WpnRow_Workbench_Subwidget_C.WeaponSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASIGISInventoryItem*                         WpnObjectRef                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ItemDTrowName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WhichINT                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_WpnRow_Workbench_Subwidget_C::WeaponSelected__DelegateSignature(class ASIGISInventoryItem* WpnObjectRef, const class FName& ItemDTrowName, int32_t WhichINT)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_WpnRow_Workbench_Subwidget.SIGIS_WpnRow_Workbench_Subwidget_C.WeaponSelected__DelegateSignature");
		
		USIGIS_WpnRow_Workbench_Subwidget_C_WeaponSelected__DelegateSignature_Params params {};
		params.WpnObjectRef = WpnObjectRef;
		params.ItemDTrowName = ItemDTrowName;
		params.WhichINT = WhichINT;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGIS_WpnRow_Workbench_Subwidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGIS_WpnRow_Workbench_Subwidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SIGIS_WpnRow_Workbench_Subwidget.SIGIS_WpnRow_Workbench_Subwidget_C");
		return ptr;
	}

}


