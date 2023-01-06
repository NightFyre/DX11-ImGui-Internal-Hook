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
	 * 		Name   -> Function SIGIS_ShipAttachmentSlots.SIGIS_ShipAttachmentSlots_C.ShipAttachSlot_RefreshNumbUseableAttachments
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            inInt                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_ShipAttachmentSlots_C::ShipAttachSlot_RefreshNumbUseableAttachments(int32_t inInt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipAttachmentSlots.SIGIS_ShipAttachmentSlots_C.ShipAttachSlot_RefreshNumbUseableAttachments");
		
		USIGIS_ShipAttachmentSlots_C_ShipAttachSlot_RefreshNumbUseableAttachments_Params params {};
		params.inInt = inInt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ShipAttachmentSlots.SIGIS_ShipAttachmentSlots_C.AreAnyAttachmentsOfThisTypeEquipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOneEquipped                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_ShipAttachmentSlots_C::AreAnyAttachmentsOfThisTypeEquipped(bool IsOneEquipped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipAttachmentSlots.SIGIS_ShipAttachmentSlots_C.AreAnyAttachmentsOfThisTypeEquipped");
		
		USIGIS_ShipAttachmentSlots_C_AreAnyAttachmentsOfThisTypeEquipped_Params params {};
		params.IsOneEquipped = IsOneEquipped;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ShipAttachmentSlots.SIGIS_ShipAttachmentSlots_C.ShipAttchmentSlot_IsSelectedLook
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_ShipAttachmentSlots_C::ShipAttchmentSlot_IsSelectedLook(bool isSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipAttachmentSlots.SIGIS_ShipAttachmentSlots_C.ShipAttchmentSlot_IsSelectedLook");
		
		USIGIS_ShipAttachmentSlots_C_ShipAttchmentSlot_IsSelectedLook_Params params {};
		params.isSelected = isSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ShipAttachmentSlots.SIGIS_ShipAttachmentSlots_C.PreSetup
	 * 		Flags  -> ()
	 */
	void USIGIS_ShipAttachmentSlots_C::PreSetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipAttachmentSlots.SIGIS_ShipAttachmentSlots_C.PreSetup");
		
		USIGIS_ShipAttachmentSlots_C_PreSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ShipAttachmentSlots.SIGIS_ShipAttachmentSlots_C.BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_ShipAttachmentSlots_C::BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipAttachmentSlots.SIGIS_ShipAttachmentSlots_C.BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_ShipAttachmentSlots_C_BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ShipAttachmentSlots.SIGIS_ShipAttachmentSlots_C.ForceUnselectedColour
	 * 		Flags  -> ()
	 */
	void USIGIS_ShipAttachmentSlots_C::ForceUnselectedColour()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipAttachmentSlots.SIGIS_ShipAttachmentSlots_C.ForceUnselectedColour");
		
		USIGIS_ShipAttachmentSlots_C_ForceUnselectedColour_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ShipAttachmentSlots.SIGIS_ShipAttachmentSlots_C.Refresh_WhatsInShipAttachSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEmpty                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        ItemName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_ShipAttachmentSlots_C::Refresh_WhatsInShipAttachSlot(bool IsEmpty, const class FName& ItemName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipAttachmentSlots.SIGIS_ShipAttachmentSlots_C.Refresh_WhatsInShipAttachSlot");
		
		USIGIS_ShipAttachmentSlots_C_Refresh_WhatsInShipAttachSlot_Params params {};
		params.IsEmpty = IsEmpty;
		params.ItemName = ItemName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ShipAttachmentSlots.SIGIS_ShipAttachmentSlots_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_ShipAttachmentSlots_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipAttachmentSlots.SIGIS_ShipAttachmentSlots_C.PreConstruct");
		
		USIGIS_ShipAttachmentSlots_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ShipAttachmentSlots.SIGIS_ShipAttachmentSlots_C.BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_ShipAttachmentSlots_C::BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipAttachmentSlots.SIGIS_ShipAttachmentSlots_C.BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		USIGIS_ShipAttachmentSlots_C_BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ShipAttachmentSlots.SIGIS_ShipAttachmentSlots_C.BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_ShipAttachmentSlots_C::BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipAttachmentSlots.SIGIS_ShipAttachmentSlots_C.BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		USIGIS_ShipAttachmentSlots_C_BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ShipAttachmentSlots.SIGIS_ShipAttachmentSlots_C.ExecuteUbergraph_SIGIS_ShipAttachmentSlots
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_ShipAttachmentSlots_C::ExecuteUbergraph_SIGIS_ShipAttachmentSlots(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipAttachmentSlots.SIGIS_ShipAttachmentSlots_C.ExecuteUbergraph_SIGIS_ShipAttachmentSlots");
		
		USIGIS_ShipAttachmentSlots_C_ExecuteUbergraph_SIGIS_ShipAttachmentSlots_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ShipAttachmentSlots.SIGIS_ShipAttachmentSlots_C.ED_ShipAttachmentSlotPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EShipAttachmentSlot                                PressedAttachmentSlot                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_ShipAttachmentSlots_C::ED_ShipAttachmentSlotPressed__DelegateSignature(EShipAttachmentSlot PressedAttachmentSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipAttachmentSlots.SIGIS_ShipAttachmentSlots_C.ED_ShipAttachmentSlotPressed__DelegateSignature");
		
		USIGIS_ShipAttachmentSlots_C_ED_ShipAttachmentSlotPressed__DelegateSignature_Params params {};
		params.PressedAttachmentSlot = PressedAttachmentSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGIS_ShipAttachmentSlots_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGIS_ShipAttachmentSlots_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SIGIS_ShipAttachmentSlots.SIGIS_ShipAttachmentSlots_C");
		return ptr;
	}

}


