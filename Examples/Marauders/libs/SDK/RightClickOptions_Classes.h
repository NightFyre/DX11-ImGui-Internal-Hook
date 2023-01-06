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
	 * WidgetBlueprintGeneratedClass RightClickOptions.RightClickOptions_C
	 * Size -> 0x0139 (FullSize[0x0481] - InheritedSize[0x0348])
	 */
	class URightClickOptions_C : public UTooltipWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0348(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    Anim_MessageShow;                                        // 0x0350(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Anim_RenameInputShake;                                   // 0x0358(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Anim_OpenRightClickMenu;                                 // 0x0360(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBorder*                                             Border_Keycard;                                          // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_DevRandoDamagae;                                     // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    EditableTextBox_NewContainerNameToUse;                   // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_Core_BG_Widget_C*                                MM_Core_BG_Widget;                                       // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_Core_BG_Widget_C*                                MM_Core_BG_Widget_107;                                   // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_GenericSmallBtn01_GoBack_Tooltip;                     // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_GenericSmallBtn01_GoBack_Tooltip_2;                   // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_GenericSmallBtn01_MoreInfoSmall;                      // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URightClickBtn_SubWidget_C*                          RightClickBtn_ItemSetName_ClearName;                     // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URightClickBtn_SubWidget_C*                          RightClickBtn_ItemSetName_UseName;                       // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URightClickBtn_SubWidget_C*                          RightClickBtn_SubWidget;                                 // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_DevRandomDamageBtn;                              // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_MoreInfo;                                        // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_SetContainerNameElements;                        // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          SplitTxt;                                                // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_CannotBeRepaired;                                    // 0x03E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_CptName;                                             // 0x03E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_ReasonCantDo;                                        // 0x03F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_ShipName;                                            // 0x03F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_ShipType;                                            // 0x0400(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_BtnList;                                     // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSlateColor                                         Selected;                                                // 0x0410(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         Unselected;                                              // 0x0438(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		EItemOptions                                               Options1;                                                // 0x0460(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EItemOptions                                               Options2;                                                // 0x0461(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EItemOptions                                               Options3;                                                // 0x0462(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EItemOptions                                               Options4;                                                // 0x0463(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EItemOptions                                               Options5;                                                // 0x0464(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KCAA[0x3];                                   // 0x0465(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                NewContainerNameToUse;                                   // 0x0468(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       HasADiscardOption;                                       // 0x0480(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void Run_Reason_Cant_Rename(const class FText& WarningMessage, class USoundBase* Sound, class UWidgetAnimation* InAnimation);
		void GetButtonTextForInt(int32_t ButtonNumber, class UTextBlock** ReturnField);
		void GetButtonForIntAndSetOption(int32_t ButtonNumber, EItemOptions OptionIn, class UButton** Button);
		void Force_RightClickOptionsClose();
		void BndEvt__MM_GenericSmallBtn01_GoBack_Crew_PasswordScreen_K2Node_ComponentBoundEvent_9_GenericSmallBtnPressed__DelegateSignature();
		void BndEvt__RightClickOptions_MM_GenericSmallBtn01_GoBack_Tooltip_1_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature();
		void ForceOption03_Unselected();
		void OnRightClickOpen();
		void BndEvt__RightClickOptions_Option5BTN_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__RightClickOptions_Option5BTN_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature();
		void ForceOption05_Unselected();
		void ForceOption02_Unselected();
		void BndEvt__RightClickOptions_Option2BTN_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__RightClickOptions_Option1BTN_K2Node_ComponentBoundEvent_17_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__RightClickOptions_Option3BTN_K2Node_ComponentBoundEvent_18_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__RightClickOptions_Option4BTN_K2Node_ComponentBoundEvent_19_OnButtonPressedEvent__DelegateSignature();
		void SetButtonOptions(int32_t Button, EItemOptions OptionToSet);
		void BndEvt__Option4BTN_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Option4BTN_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Option3BTN_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Option3BTN_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Option2BTN_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Option2BTN_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__RightClickOptions_MM_GenericSmallBtn01_GoBack_Tooltip_2_K2Node_ComponentBoundEvent_21_GenericSmallBtnPressed__DelegateSignature();
		void SetOptionArray(TArray<EItemOptions> SentItems);
		void ForceOption04_Unselected();
		void ForceOption01_Unselected();
		void Construct();
		void RightClickButtonHasBeenPressed(EItemOptions WhichOptionPressed);
		void BndEvt__Option1BTN_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
		void ShowHideNameStorageElement(bool Show);
		void BndEvt__RightClickOptions_EditableTextBox_NewContainerNameToUse_K2Node_ComponentBoundEvent_11_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
		void BndEvt__Option1BTN_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__RightClickOptions_RightClickBtn_SubWidget_1_K2Node_ComponentBoundEvent_13_ED_RightClickOptionPressed__DelegateSignature(EItemOptions WhichOptionPressed);
		void BndEvt__RightClickOptions_RightClickBtn_SubWidget_2_K2Node_ComponentBoundEvent_14_ED_RightClickOptionPressed__DelegateSignature(EItemOptions WhichOptionPressed);
		void BndEvt__RightClickOptions_EditableTextBox_NewContainerNameToUse_K2Node_ComponentBoundEvent_20_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void BndEvt__RightClickOptions_Btn_DevRandoDamagae_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature();
		void ExecuteUbergraph_RightClickOptions(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
