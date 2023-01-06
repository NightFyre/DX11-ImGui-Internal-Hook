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
	 * WidgetBlueprintGeneratedClass MM_GenericTabBtn01.MM_GenericTabBtn01_C
	 * Size -> 0x00BA (FullSize[0x031A] - InheritedSize[0x0260])
	 */
	class UMM_GenericTabBtn01_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    Anim_Pressed;                                            // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Anim_NotSelected_Hover_Enter;                            // 0x0270(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBorder*                                             Border_StateVisuals;                                     // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_Main;                                                // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_Main;                                                // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		EMenuState                                                 Which_MenuState;                                         // 0x0290(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RN0Z[0x7];                                   // 0x0291(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             ButtonHasBeenPressed;                                    // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       isSelected;                                              // 0x02A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CXK0[0x7];                                   // 0x02A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         Txt_Colour_Selected;                                     // 0x02B0(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         Txt_Colour_UNSelected;                                   // 0x02D8(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Functionality;                                           // 0x0300(0x0018) Edit, BlueprintVisible
		E_InvEquipmentStates                                       Which_invEquipmentState;                                 // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsEnabled;                                               // 0x0319(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void Set_TabAsEnabled(bool IsEnabled);
		void Set_SelectedVisuals(bool isSelected);
		void BndEvt__Btn_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void PreConstruct(bool IsDesignTime);
		void BndEvt__Btn_Main_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Btn_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
		void ExecuteUbergraph_MM_GenericTabBtn01(int32_t EntryPoint);
		void ButtonHasBeenPressed__DelegateSignature(const class FString& WhatPressed);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
