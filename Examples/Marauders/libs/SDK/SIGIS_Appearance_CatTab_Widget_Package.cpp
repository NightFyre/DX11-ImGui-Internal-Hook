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
	 * 		Name   -> Function SIGIS_Appearance_CatTab_Widget.SIGIS_Appearance_CatTab_Widget_C.ShipAttachSlot_RefreshNumbUseableAttachments
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            inInt                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_Appearance_CatTab_Widget_C::ShipAttachSlot_RefreshNumbUseableAttachments(int32_t inInt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Appearance_CatTab_Widget.SIGIS_Appearance_CatTab_Widget_C.ShipAttachSlot_RefreshNumbUseableAttachments");
		
		USIGIS_Appearance_CatTab_Widget_C_ShipAttachSlot_RefreshNumbUseableAttachments_Params params {};
		params.inInt = inInt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Appearance_CatTab_Widget.SIGIS_Appearance_CatTab_Widget_C.AreAnyAttachmentsOfThisTypeEquipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOneEquipped                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_Appearance_CatTab_Widget_C::AreAnyAttachmentsOfThisTypeEquipped(bool IsOneEquipped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Appearance_CatTab_Widget.SIGIS_Appearance_CatTab_Widget_C.AreAnyAttachmentsOfThisTypeEquipped");
		
		USIGIS_Appearance_CatTab_Widget_C_AreAnyAttachmentsOfThisTypeEquipped_Params params {};
		params.IsOneEquipped = IsOneEquipped;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Appearance_CatTab_Widget.SIGIS_Appearance_CatTab_Widget_C.AppearCategoryTab_IsSelectedLook
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               DoNotSetAsState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_Appearance_CatTab_Widget_C::AppearCategoryTab_IsSelectedLook(bool isSelected, bool DoNotSetAsState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Appearance_CatTab_Widget.SIGIS_Appearance_CatTab_Widget_C.AppearCategoryTab_IsSelectedLook");
		
		USIGIS_Appearance_CatTab_Widget_C_AppearCategoryTab_IsSelectedLook_Params params {};
		params.isSelected = isSelected;
		params.DoNotSetAsState = DoNotSetAsState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Appearance_CatTab_Widget.SIGIS_Appearance_CatTab_Widget_C.PreSetup
	 * 		Flags  -> ()
	 */
	void USIGIS_Appearance_CatTab_Widget_C::PreSetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Appearance_CatTab_Widget.SIGIS_Appearance_CatTab_Widget_C.PreSetup");
		
		USIGIS_Appearance_CatTab_Widget_C_PreSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Appearance_CatTab_Widget.SIGIS_Appearance_CatTab_Widget_C.BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Appearance_CatTab_Widget_C::BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Appearance_CatTab_Widget.SIGIS_Appearance_CatTab_Widget_C.BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_Appearance_CatTab_Widget_C_BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Appearance_CatTab_Widget.SIGIS_Appearance_CatTab_Widget_C.ForceUnselectedColour
	 * 		Flags  -> ()
	 */
	void USIGIS_Appearance_CatTab_Widget_C::ForceUnselectedColour()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Appearance_CatTab_Widget.SIGIS_Appearance_CatTab_Widget_C.ForceUnselectedColour");
		
		USIGIS_Appearance_CatTab_Widget_C_ForceUnselectedColour_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Appearance_CatTab_Widget.SIGIS_Appearance_CatTab_Widget_C.BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Appearance_CatTab_Widget_C::BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Appearance_CatTab_Widget.SIGIS_Appearance_CatTab_Widget_C.BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		USIGIS_Appearance_CatTab_Widget_C_BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Appearance_CatTab_Widget.SIGIS_Appearance_CatTab_Widget_C.BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Appearance_CatTab_Widget_C::BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Appearance_CatTab_Widget.SIGIS_Appearance_CatTab_Widget_C.BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		USIGIS_Appearance_CatTab_Widget_C_BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Appearance_CatTab_Widget.SIGIS_Appearance_CatTab_Widget_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_Appearance_CatTab_Widget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Appearance_CatTab_Widget.SIGIS_Appearance_CatTab_Widget_C.PreConstruct");
		
		USIGIS_Appearance_CatTab_Widget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Appearance_CatTab_Widget.SIGIS_Appearance_CatTab_Widget_C.ExecuteUbergraph_SIGIS_Appearance_CatTab_Widget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_Appearance_CatTab_Widget_C::ExecuteUbergraph_SIGIS_Appearance_CatTab_Widget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Appearance_CatTab_Widget.SIGIS_Appearance_CatTab_Widget_C.ExecuteUbergraph_SIGIS_Appearance_CatTab_Widget");
		
		USIGIS_Appearance_CatTab_Widget_C_ExecuteUbergraph_SIGIS_Appearance_CatTab_Widget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Appearance_CatTab_Widget.SIGIS_Appearance_CatTab_Widget_C.ED_CharBodyPartFilterPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECosmeticSlot                                      WhichBodyPart                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_Appearance_CatTab_Widget_C::ED_CharBodyPartFilterPressed__DelegateSignature(ECosmeticSlot WhichBodyPart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Appearance_CatTab_Widget.SIGIS_Appearance_CatTab_Widget_C.ED_CharBodyPartFilterPressed__DelegateSignature");
		
		USIGIS_Appearance_CatTab_Widget_C_ED_CharBodyPartFilterPressed__DelegateSignature_Params params {};
		params.WhichBodyPart = WhichBodyPart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGIS_Appearance_CatTab_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGIS_Appearance_CatTab_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SIGIS_Appearance_CatTab_Widget.SIGIS_Appearance_CatTab_Widget_C");
		return ptr;
	}

}


