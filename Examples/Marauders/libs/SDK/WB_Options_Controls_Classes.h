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
	 * WidgetBlueprintGeneratedClass WB_Options_Controls.WB_Options_Controls_C
	 * Size -> 0x0081 (FullSize[0x02E1] - InheritedSize[0x0260])
	 */
	class UWB_Options_Controls_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    Fade;                                                    // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_GenericBtn_ControlsExtras_ResetToDefault;             // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_GenericBtn_KeybindsButton;                            // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_StateButton_C*                                   Option_ADSType;                                          // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_StateButton_C*                                   Option_CrouchType;                                       // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_StateButton_C*                                   Option_InvertX;                                          // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_StateButton_C*                                   Option_InvertY;                                          // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_ProgressButton_C*                                Option_MouseSensi_01;                                    // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_ProgressButton_C*                                Option_MouseSensi_02;                                    // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_ProgressButton_C*                                Option_MouseSensi_03;                                    // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_ProgressButton_C*                                Option_MouseSensi_04;                                    // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClicked_Back;                                          // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FTimerHandle                                        FocusTimer;                                              // 0x02D0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UWB_Options_KeyRebinding_C*                          WB_Options_KeyRebinding;                                 // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsMainMenu;                                             // 0x02E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		float RecalculateByMinMax(float Value, class UWB_ProgressButton_C* ProgressOption);
		bool GetIsGamepad();
		void NavToBackButton();
		void NavToOptionsButtons();
		void NavToTextButtons();
		struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void ActivateWidget();
		void OnInputSwitched(EInputType InputType);
		void CheckFocus();
		void ClickBack();
		void SetGamepadAppearance(bool Active);
		void SetDefaultValues();
		void OnConfirmReset();
		void OnCancelRequest();
		void BndEvt__Option_MouseSensi_01_K2Node_ComponentBoundEvent_2_OnProgressChanged__DelegateSignature(float Value);
		void BndEvt__Option_MouseSensi_02_K2Node_ComponentBoundEvent_3_OnProgressChanged__DelegateSignature(float Value);
		void BndEvt__Option_MouseSensi_03_K2Node_ComponentBoundEvent_4_OnProgressChanged__DelegateSignature(float Value);
		void BndEvt__Option_MouseSensi_04_K2Node_ComponentBoundEvent_5_OnProgressChanged__DelegateSignature(float Value);
		void BndEvt__Option_InvertX_K2Node_ComponentBoundEvent_6_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex);
		void BndEvt__Option_InvertY_K2Node_ComponentBoundEvent_7_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex);
		void SetupButtons();
		void BndEvt__MM_GenericBtn_ControlsExtras_ResetToDefault_K2Node_ComponentBoundEvent_8_GenericSmallBtnPressed__DelegateSignature();
		void BndEvt__MM_GenericBtn_ControlsExtras_ResetToDefault_1_K2Node_ComponentBoundEvent_9_GenericSmallBtnPressed__DelegateSignature();
		void BndEvt__WB_Options_Controls_Option_CrouchType_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex);
		void BndEvt__WB_Options_Controls_Option_ADSType_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex);
		void Return_HaveClosedTheKeybindsMenu();
		void ExecuteUbergraph_WB_Options_Controls(int32_t EntryPoint);
		void OnClicked_Back__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
