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
	 * 		Name   -> Function SIGIS_WpnAttachmentSlots.SIGIS_WpnAttachmentSlots_C.AreAnyAttachmentsOfThisTypeEquipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOneEquipped                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_WpnAttachmentSlots_C::AreAnyAttachmentsOfThisTypeEquipped(bool IsOneEquipped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_WpnAttachmentSlots.SIGIS_WpnAttachmentSlots_C.AreAnyAttachmentsOfThisTypeEquipped");
		
		USIGIS_WpnAttachmentSlots_C_AreAnyAttachmentsOfThisTypeEquipped_Params params {};
		params.IsOneEquipped = IsOneEquipped;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_WpnAttachmentSlots.SIGIS_WpnAttachmentSlots_C.WpnAttchmentSlot_IsSelectedLook
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_WpnAttachmentSlots_C::WpnAttchmentSlot_IsSelectedLook(bool isSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_WpnAttachmentSlots.SIGIS_WpnAttachmentSlots_C.WpnAttchmentSlot_IsSelectedLook");
		
		USIGIS_WpnAttachmentSlots_C_WpnAttchmentSlot_IsSelectedLook_Params params {};
		params.isSelected = isSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_WpnAttachmentSlots.SIGIS_WpnAttachmentSlots_C.PreSetup
	 * 		Flags  -> ()
	 */
	void USIGIS_WpnAttachmentSlots_C::PreSetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_WpnAttachmentSlots.SIGIS_WpnAttachmentSlots_C.PreSetup");
		
		USIGIS_WpnAttachmentSlots_C_PreSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_WpnAttachmentSlots.SIGIS_WpnAttachmentSlots_C.Refresh_AttachAmountAvailable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Number                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_WpnAttachmentSlots_C::Refresh_AttachAmountAvailable(int32_t Number)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_WpnAttachmentSlots.SIGIS_WpnAttachmentSlots_C.Refresh_AttachAmountAvailable");
		
		USIGIS_WpnAttachmentSlots_C_Refresh_AttachAmountAvailable_Params params {};
		params.Number = Number;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_WpnAttachmentSlots.SIGIS_WpnAttachmentSlots_C.Refresh_WhatsInWpnAttachmentSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEmpty                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        ItemName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_WpnAttachmentSlots_C::Refresh_WhatsInWpnAttachmentSlot(bool IsEmpty, const class FName& ItemName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_WpnAttachmentSlots.SIGIS_WpnAttachmentSlots_C.Refresh_WhatsInWpnAttachmentSlot");
		
		USIGIS_WpnAttachmentSlots_C_Refresh_WhatsInWpnAttachmentSlot_Params params {};
		params.IsEmpty = IsEmpty;
		params.ItemName = ItemName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_WpnAttachmentSlots.SIGIS_WpnAttachmentSlots_C.BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_WpnAttachmentSlots_C::BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_WpnAttachmentSlots.SIGIS_WpnAttachmentSlots_C.BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		USIGIS_WpnAttachmentSlots_C_BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_WpnAttachmentSlots.SIGIS_WpnAttachmentSlots_C.BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_WpnAttachmentSlots_C::BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_WpnAttachmentSlots.SIGIS_WpnAttachmentSlots_C.BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		USIGIS_WpnAttachmentSlots_C_BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_WpnAttachmentSlots.SIGIS_WpnAttachmentSlots_C.ForceUnselectedColour
	 * 		Flags  -> ()
	 */
	void USIGIS_WpnAttachmentSlots_C::ForceUnselectedColour()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_WpnAttachmentSlots.SIGIS_WpnAttachmentSlots_C.ForceUnselectedColour");
		
		USIGIS_WpnAttachmentSlots_C_ForceUnselectedColour_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_WpnAttachmentSlots.SIGIS_WpnAttachmentSlots_C.BndEvt__BACKBTN_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_WpnAttachmentSlots_C::BndEvt__BACKBTN_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_WpnAttachmentSlots.SIGIS_WpnAttachmentSlots_C.BndEvt__BACKBTN_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_WpnAttachmentSlots_C_BndEvt__BACKBTN_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_WpnAttachmentSlots.SIGIS_WpnAttachmentSlots_C.BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_WpnAttachmentSlots_C::BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_WpnAttachmentSlots.SIGIS_WpnAttachmentSlots_C.BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_WpnAttachmentSlots_C_BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_WpnAttachmentSlots.SIGIS_WpnAttachmentSlots_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_WpnAttachmentSlots_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_WpnAttachmentSlots.SIGIS_WpnAttachmentSlots_C.PreConstruct");
		
		USIGIS_WpnAttachmentSlots_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_WpnAttachmentSlots.SIGIS_WpnAttachmentSlots_C.ExecuteUbergraph_SIGIS_WpnAttachmentSlots
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_WpnAttachmentSlots_C::ExecuteUbergraph_SIGIS_WpnAttachmentSlots(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_WpnAttachmentSlots.SIGIS_WpnAttachmentSlots_C.ExecuteUbergraph_SIGIS_WpnAttachmentSlots");
		
		USIGIS_WpnAttachmentSlots_C_ExecuteUbergraph_SIGIS_WpnAttachmentSlots_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_WpnAttachmentSlots.SIGIS_WpnAttachmentSlots_C.ED_AttachSlot_RemoveButtonPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAttachmentSlot                                    RemoveThisAttachSlot                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_WpnAttachmentSlots_C::ED_AttachSlot_RemoveButtonPressed__DelegateSignature(EAttachmentSlot RemoveThisAttachSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_WpnAttachmentSlots.SIGIS_WpnAttachmentSlots_C.ED_AttachSlot_RemoveButtonPressed__DelegateSignature");
		
		USIGIS_WpnAttachmentSlots_C_ED_AttachSlot_RemoveButtonPressed__DelegateSignature_Params params {};
		params.RemoveThisAttachSlot = RemoveThisAttachSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_WpnAttachmentSlots.SIGIS_WpnAttachmentSlots_C.ED_AttachmentSlotPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAttachmentSlot                                    PressedAttachmentSlot                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_WpnAttachmentSlots_C::ED_AttachmentSlotPressed__DelegateSignature(EAttachmentSlot PressedAttachmentSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_WpnAttachmentSlots.SIGIS_WpnAttachmentSlots_C.ED_AttachmentSlotPressed__DelegateSignature");
		
		USIGIS_WpnAttachmentSlots_C_ED_AttachmentSlotPressed__DelegateSignature_Params params {};
		params.PressedAttachmentSlot = PressedAttachmentSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGIS_WpnAttachmentSlots_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGIS_WpnAttachmentSlots_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SIGIS_WpnAttachmentSlots.SIGIS_WpnAttachmentSlots_C");
		return ptr;
	}

}


