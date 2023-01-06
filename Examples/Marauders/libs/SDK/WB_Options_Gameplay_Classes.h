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
	 * WidgetBlueprintGeneratedClass WB_Options_Gameplay.WB_Options_Gameplay_C
	 * Size -> 0x0088 (FullSize[0x02E8] - InheritedSize[0x0260])
	 */
	class UWB_Options_Gameplay_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    Fade;                                                    // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UComboBoxString*                                     ComboBoxString_Language;                                 // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_GenericBtn_Audio_ResetToDefault;                      // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_StateButton_C*                                   Option_GameplayOption_02;                                // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_StateButton_C*                                   Option_GameplayOption_03;                                // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_StateButton_C*                                   Option_GameplayOption_04;                                // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_StateButton_C*                                   Option_GameplayOption_05;                                // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_StateButton_C*                                   Option_GameplayOption_06;                                // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_StateButton_C*                                   Option_GameplayOption_07;                                // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_StateButton_C*                                   Option_ShowHUD;                                          // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClicked_Back;                                          // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FTimerHandle                                        FocusTimer;                                              // 0x02C8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsMainMenu;                                             // 0x02D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_3WUF[0x7];                                   // 0x02D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LangToUse;                                               // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash

	public:
		bool GetIsGamepad();
		void NavToBackButton();
		void NavToOptionsButtons();
		void NavToTextButtons();
		struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void ClickBack();
		void BndEvt__Option_ShowHUD_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex);
		void BndEvt__Option_GameplayOption_02_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex);
		void BndEvt__Option_GameplayOption_03_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex);
		void BndEvt__Option_GameplayOption_04_K2Node_ComponentBoundEvent_3_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex);
		void BndEvt__Option_GameplayOption_05_K2Node_ComponentBoundEvent_4_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex);
		void BndEvt__Option_GameplayOption_06_K2Node_ComponentBoundEvent_5_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex);
		void BndEvt__Option_GameplayOption_07_K2Node_ComponentBoundEvent_6_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex);
		void CheckFocus();
		void OnInputSwitched(EInputType InputType);
		void SetGamepadAppearance(bool Active);
		void OnConfirmReset();
		void OnCancelRequest();
		void SetDefaultValues();
		void BndEvt__MM_GenericBtn_Audio_ResetToDefault_K2Node_ComponentBoundEvent_7_GenericSmallBtnPressed__DelegateSignature();
		void BndEvt__WB_Options_Gameplay_ComboBoxString_280_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void GAMEPLAY_OPENED();
		void ActivateWidget();
		void ExecuteUbergraph_WB_Options_Gameplay(int32_t EntryPoint);
		void OnClicked_Back__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
