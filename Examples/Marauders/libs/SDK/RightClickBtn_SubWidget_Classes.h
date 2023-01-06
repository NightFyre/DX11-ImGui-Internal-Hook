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
	 * WidgetBlueprintGeneratedClass RightClickBtn_SubWidget.RightClickBtn_SubWidget_C
	 * Size -> 0x0201 (FullSize[0x0461] - InheritedSize[0x0260])
	 */
	class URightClickBtn_SubWidget_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UBorder*                                             Border_ForPadding;                                       // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_RighClickOption;                                     // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HorizontalBox_MoneyCost;                                 // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            Overlay_1;                                               // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_ImportantIcon;                                   // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_OveralSize;                                      // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_Cost;                                                // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_MainOption;                                          // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_MyCurrentMoney_2;                                    // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		EItemOptions                                               ButtonType;                                              // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       isMainOption;                                            // 0x02B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_T06R[0x2];                                   // 0x02B2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RepairCost;                                              // 0x02B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FScriptMulticastDelegate                             ED_RightClickOptionPressed;                              // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FSlateFontInfo                                      FontToUse_MainBtnLook;                                   // 0x02C8(0x0058) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FSlateFontInfo                                      FontToUse_NomalBtnLook;                                  // 0x0320(0x0058) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FSlateColor                                         Font_Colour_MainBtnLook;                                 // 0x0378(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         Font_Colour_NormalBtnLook;                               // 0x03A0(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         Font_Colour_MainBtnLook_Hovered;                         // 0x03C8(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         Font_Colour_NormalBtnLook_Hovered;                       // 0x03F0(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         Font_Colour_SpecialBtnLook;                              // 0x0418(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       isSpecialItem;                                           // 0x0440(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       OverrideTextForSimpleUse;                                // 0x0441(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7NYG[0x6];                                   // 0x0442(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                SimpleUseName;                                           // 0x0448(0x0018) Edit, BlueprintVisible
		bool                                                       isRepairableItem;                                        // 0x0460(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BndEvt__RightClickBtn_SubWidget_Btn_RighClickOption_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__RightClickBtn_SubWidget_Btn_RighClickOption_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__RightClickBtn_SubWidget_Btn_RighClickOption_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
		void Construct();
		void ExecuteUbergraph_RightClickBtn_SubWidget(int32_t EntryPoint);
		void ED_RightClickOptionPressed__DelegateSignature(EItemOptions WhichOptionPressed);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
