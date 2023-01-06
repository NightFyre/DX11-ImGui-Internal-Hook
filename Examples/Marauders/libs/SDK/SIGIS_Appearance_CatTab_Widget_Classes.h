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
	 * WidgetBlueprintGeneratedClass SIGIS_Appearance_CatTab_Widget.SIGIS_Appearance_CatTab_Widget_C
	 * Size -> 0x02D9 (FullSize[0x0539] - InheritedSize[0x0260])
	 */
	class USIGIS_Appearance_CatTab_Widget_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    Anim_Hover;                                              // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Anim_Pressed;                                            // 0x0270(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBorder*                                             Border_SelectedLook;                                     // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_SlotPressed;                                         // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Icon_FilterIcon;                                         // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_ShipAttachmentSlotName;                              // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSlateColor                                         AttachmentOfThisTypeIsEquipped;                          // 0x0298(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         NoAttachmentOfThisTypeIsEquipped;                        // 0x02C0(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       b_IsSelected;                                            // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_24MR[0x7];                                   // 0x02E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateFontInfo                                      SlotNameFont_NothingIn;                                  // 0x02F0(0x0058) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FSlateFontInfo                                      SlotNameFont_SomethingIn;                                // 0x0348(0x0058) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FSlateColor                                         Selected;                                                // 0x03A0(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         Unselected;                                              // 0x03C8(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		class UMaterialInterface*                                  ToUse_MatIcon;                                           // 0x03F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInterface*                                  ToUse_MatIcon_Selected;                                  // 0x03F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              FilterTypeName;                                          // 0x0400(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FText                                                ToUse_NiceName;                                          // 0x0410(0x0018) Edit, BlueprintVisible
		struct FSlateFontInfo                                      SelectedFontToUse;                                       // 0x0428(0x0058) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FSlateFontInfo                                      NormalFontToUse;                                         // 0x0480(0x0058) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FSlateColor                                         SelectedFontColour;                                      // 0x04D8(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         UnselectedFontColour;                                    // 0x0500(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             ED_CharBodyPartFilterPressed;                            // 0x0528(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		ECosmeticSlot                                              WhichBodyPart;                                           // 0x0538(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ShipAttachSlot_RefreshNumbUseableAttachments(int32_t inInt);
		void AreAnyAttachmentsOfThisTypeEquipped(bool IsOneEquipped);
		void AppearCategoryTab_IsSelectedLook(bool isSelected, bool DoNotSetAsState);
		void PreSetup();
		void BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
		void ForceUnselectedColour();
		void BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_SIGIS_Appearance_CatTab_Widget(int32_t EntryPoint);
		void ED_CharBodyPartFilterPressed__DelegateSignature(ECosmeticSlot WhichBodyPart);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
