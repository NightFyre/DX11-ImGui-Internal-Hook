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
	 * WidgetBlueprintGeneratedClass MM_GenericSmallBtn01.MM_GenericSmallBtn01_C
	 * Size -> 0x01A8 (FullSize[0x0408] - InheritedSize[0x0260])
	 */
	class UMM_GenericSmallBtn01_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    Anim_Pressed;                                            // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Anim_Hover;                                              // 0x0270(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBorder*                                             Border_DisabledLook;                                     // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_Main;                                                // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HorizontalBox_All;                                       // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Icon_SecondaryBtn;                                       // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_Icon;                                            // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_Size;                                            // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_Main;                                                // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             GenericSmallBtnPressed;                                  // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      WidthOverride;                                           // 0x02C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HeightOverride;                                          // 0x02C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSlateColor                                         Unselected;                                              // 0x02C8(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         Selected;                                                // 0x02F0(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                ButtonText;                                              // 0x0318(0x0018) Edit, BlueprintVisible
		class UMaterialInterface*                                  Button_Icon;                                             // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       b_TexOnlyVersion;                                        // 0x0338(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       OverrideFont;                                            // 0x0339(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MSO4[0x6];                                   // 0x033A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateFontInfo                                      OverrideFontToUse;                                       // 0x0340(0x0058) Edit, BlueprintVisible, HasGetValueTypeHash
		bool                                                       OverrideFont_Colour;                                     // 0x0398(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2M04[0x7];                                   // 0x0399(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         Override_FontColour_Selected;                            // 0x03A0(0x0028) Edit, BlueprintVisible
		struct FSlateColor                                         Override_FontColour_Unselected;                          // 0x03C8(0x0028) Edit, BlueprintVisible
		bool                                                       b_is_Selected;                                           // 0x03F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsEnabled;                                               // 0x03F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_S7AR[0x6];                                   // 0x03F2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          Sound_OnClick;                                           // 0x03F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          Sound_OnHover;                                           // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void EnableTheButton(bool IsEnabled);
		void Set_SelectedVisuals(bool isSelected);
		void ForceUnselectedColour();
		void BndEvt__Btn_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Btn_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void Construct();
		void BndEvt__Btn_Main_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_MM_GenericSmallBtn01(int32_t EntryPoint);
		void GenericSmallBtnPressed__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
