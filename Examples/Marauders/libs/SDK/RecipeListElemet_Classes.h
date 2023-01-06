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
	 * WidgetBlueprintGeneratedClass RecipeListElemet.RecipeListElemet_C
	 * Size -> 0x0168 (FullSize[0x0508] - InheritedSize[0x03A0])
	 */
	class URecipeListElemet_C : public UCraftingWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03A0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    Anim_Pressed;                                            // 0x03A8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBorder*                                             Border_ButtonGroup;                                      // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_LockedBG;                                         // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_LockedIcon;                                       // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_81;                                                // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScaleBox*                                           ScaleBox_Recipe_Name;                                    // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_IsLocked;                                        // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_EditorOnly_RecipeID;                                 // 0x03E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       isSelected;                                              // 0x03E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8E1D[0x7];                                   // 0x03E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USIGIS_InventoryWidget_C*                            Ref_InventoryWidget;                                     // 0x03F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSlateColor                                         SelectedTextColour;                                      // 0x03F8(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         UnselectedTextColour;                                    // 0x0420(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateFontInfo                                      SelectedFontToUse;                                       // 0x0448(0x0058) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FSlateFontInfo                                      NormalFontToUse;                                         // 0x04A0(0x0058) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class UTexture2D*                                          RecipeIcon;                                              // 0x04F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                RecipeItem_DT_Name;                                      // 0x0500(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Set_isSelectedLook(bool isSelected);
		void SetupLook();
		void ISLockedLook(bool isUnlocked);
		struct FSlateBrush GetBackground_1();
		void UnlockedRecipe();
		void DeActiveRecipe();
		void RefreshLook();
		void FakePress_RecipeListBtn();
		void ActiveRecipe();
		void BndEvt__ActiveButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__ActiveButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void BndEvt__ActiveButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
		void Recipe_ForceUnselectedColour();
		void FakePress_RecipeListBtn_WithDelay();
		void ExecuteUbergraph_RecipeListElemet(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
