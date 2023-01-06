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
	 * WidgetBlueprintGeneratedClass PlayerLookRow_Widget.PlayerLookRow_Widget_C
	 * Size -> 0x0130 (FullSize[0x0390] - InheritedSize[0x0260])
	 */
	class UPlayerLookRow_Widget_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UBorder*                                             Border_VarientsBlocker;                                  // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_Main01;                                              // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UClothingElement_Widget_C*                           ClothingElement_Widget_Main;                             // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UClothingElement_Widget_C*                           ClothingElement_Widget_Var01;                            // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UClothingElement_Widget_C*                           ClothingElement_Widget_Var02;                            // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UClothingElement_Widget_C*                           ClothingElement_Widget_Var03;                            // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UClothingElement_Widget_C*                           ClothingElement_Widget_Var04;                            // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UClothingElement_Widget_C*                           ClothingElement_Widget_Var05;                            // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UClothingElement_Widget_C*                           ClothingElement_Widget_Var06;                            // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UClothingElement_Widget_C*                           ClothingElement_Widget_Var07;                            // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UClothingElement_Widget_C*                           ClothingElement_Widget_Var08;                            // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image;                                                   // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_MainBtn;                                             // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_Core_BG_Widget_C*                                MM_Core_BG_Widget;                                       // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_LockMainBtn;                                     // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_MainBtn;                                         // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_WholeThingSize;                                  // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_ClothingSetDesc;                                     // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_ClothingSetDesc_2;                                   // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_ClothingsetName;                                     // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_NoVariants;                                          // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_AllVarientsArea;                             // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FName                                                DT_ClothingSet_UI_Name;                                  // 0x0318(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                DT_MainPart;                                             // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                DT_Var01;                                                // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                DT_Var02;                                                // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                DT_Var03;                                                // 0x0338(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                DT_Var04;                                                // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             ED_PlayerAppearanceBtnPressed;                           // 0x0348(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FName                                                DT_Var05;                                                // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                DT_Var06;                                                // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                DT_Var07;                                                // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                DT_Var08;                                                // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       MainWidgetIsUnlocked;                                    // 0x0378(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ECosmeticSlot                                              WhichPartSlotType;                                       // 0x0379(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_S6JY[0x6];                                   // 0x037A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClothingElement_Widget_C*>                   Array_ClothingSubWidgets;                                // 0x0380(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void OnLoaded_083DDC794415461098E392B72288FC96(class UObject* Loaded);
		void OnLoaded_083DDC794415461098E392B7EAED02C2(class UObject* Loaded);
		void OnLoaded_083DDC794415461098E392B7C51161F1(class UObject* Loaded);
		void OnLoaded_083DDC794415461098E392B76124C2F2(class UObject* Loaded);
		void OnLoaded_083DDC794415461098E392B7666DB3A5(class UObject* Loaded);
		void OnLoaded_083DDC794415461098E392B708225058(class UObject* Loaded);
		void OnLoaded_083DDC794415461098E392B75AF5551A(class UObject* Loaded);
		void OnLoaded_083DDC794415461098E392B75B07A232(class UObject* Loaded);
		void OnLoaded_083DDC794415461098E392B7E52FE544(class UObject* Loaded);
		void Construct();
		void CheckUnlockStates(TArray<class FString> StringUnlockArrays);
		void BndEvt__ClothingElement_Widget_Main_K2Node_ComponentBoundEvent_4_ED_ClothingElementPressed__DelegateSignature();
		void BndEvt__ClothingElement_Widget_Var01_K2Node_ComponentBoundEvent_6_ED_ClothingElementPressed__DelegateSignature();
		void BndEvt__ClothingElement_Widget_Var02_K2Node_ComponentBoundEvent_7_ED_ClothingElementPressed__DelegateSignature();
		void BndEvt__ClothingElement_Widget_Var03_K2Node_ComponentBoundEvent_8_ED_ClothingElementPressed__DelegateSignature();
		void BndEvt__ClothingElement_Widget_Var04_K2Node_ComponentBoundEvent_9_ED_ClothingElementPressed__DelegateSignature();
		void CheckSetSelected(const class FName& DTname_Current);
		void BndEvt__PlayerLookRow_Widget_ClothingElement_Widget_Var05_K2Node_ComponentBoundEvent_0_ED_ClothingElementPressed__DelegateSignature();
		void BndEvt__PlayerLookRow_Widget_ClothingElement_Widget_Var06_K2Node_ComponentBoundEvent_1_ED_ClothingElementPressed__DelegateSignature();
		void BndEvt__PlayerLookRow_Widget_ClothingElement_Widget_Var07_K2Node_ComponentBoundEvent_2_ED_ClothingElementPressed__DelegateSignature();
		void BndEvt__PlayerLookRow_Widget_ClothingElement_Widget_Var08_K2Node_ComponentBoundEvent_3_ED_ClothingElementPressed__DelegateSignature();
		void ExecuteUbergraph_PlayerLookRow_Widget(int32_t EntryPoint);
		void ED_PlayerAppearanceBtnPressed__DelegateSignature(const class FName& PartDTName, const class FName& DT_ClothingUIName);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
