#pragma once

/**
 * Name: RaidGame
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass SIGIS_ShipAttachmentSlots.SIGIS_ShipAttachmentSlots_C
	 * Size -> 0x01C0 (FullSize[0x0420] - InheritedSize[0x0260])
	 */
	class USIGIS_ShipAttachmentSlots_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    Anim_Hover;                                              // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Anim_Pressed;                                            // 0x0270(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBorder*                                             Border_SelectedLook;                                     // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_SlotPressed;                                         // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Icon_ShipPart;                                           // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_AttachAvailable;                                     // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_AttachmentSlot_Current;                              // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_ShipAttachmentSlotName;                              // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TxtWeaponNumber;                                         // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             ED_ShipAttachmentSlotPressed;                            // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		EShipAttachmentSlot                                        E_WhichShipAttachmentSlot;                               // 0x02C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FUMU[0x7];                                   // 0x02C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         AttachmentOfThisTypeIsEquipped;                          // 0x02C8(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         NoAttachmentOfThisTypeIsEquipped;                        // 0x02F0(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       b_IsSelected;                                            // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0KI3[0x7];                                   // 0x0319(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateFontInfo                                      SlotNameFont_NothingIn;                                  // 0x0320(0x0058) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FSlateFontInfo                                      SlotNameFont_SomethingIn;                                // 0x0378(0x0058) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FSlateColor                                         Selected;                                                // 0x03D0(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         Unselected;                                              // 0x03F8(0x0028) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void ShipAttachSlot_RefreshNumbUseableAttachments(int32_t inInt);
		void AreAnyAttachmentsOfThisTypeEquipped(bool IsOneEquipped);
		void ShipAttchmentSlot_IsSelectedLook(bool isSelected);
		void PreSetup();
		void BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
		void ForceUnselectedColour();
		void Refresh_WhatsInShipAttachSlot(bool IsEmpty, const class FName& ItemName);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
		void ExecuteUbergraph_SIGIS_ShipAttachmentSlots(int32_t EntryPoint);
		void ED_ShipAttachmentSlotPressed__DelegateSignature(EShipAttachmentSlot PressedAttachmentSlot);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
