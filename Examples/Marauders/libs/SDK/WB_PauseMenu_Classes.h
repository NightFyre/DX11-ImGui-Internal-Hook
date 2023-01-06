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
	 * WidgetBlueprintGeneratedClass WB_PauseMenu.WB_PauseMenu_C
	 * Size -> 0x00B8 (FullSize[0x0318] - InheritedSize[0x0260])
	 */
	class UWB_PauseMenu_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    FadeAnim;                                                // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              BackgroundImg;                                           // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_SettingsButton01_C*                              Button_Audio;                                            // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_TabButton02_C*                                   Button_Back;                                             // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_SettingsButton01_C*                              Button_Controls;                                         // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_SettingsButton01_C*                              Button_Gameplay;                                         // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_TabButton01_C*                                   Button_Quit;                                             // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_TabButton01_C*                                   Button_Resume;                                           // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_TabButton01_C*                                   Button_Settings;                                         // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_SettingsButton01_C*                              Button_Video;                                            // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_TabButton02_C*                                   InfoButton_Down;                                         // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_TabButton02_C*                                   InfoButton_Select01;                                     // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_TabButton02_C*                                   InfoButton_Up;                                           // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SB_Button_Back;                                          // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_Background_C*                                    WB_Background;                                           // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WS_Global;                                               // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WS_Info;                                                 // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WS_Tabs;                                                 // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_Options_Gameplay_C*                              WB_Options_Gameplay;                                     // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWB_Options_Controls_C*                              WB_Options_Controls;                                     // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWB_Options_Video_C*                                 WB_Options_Video;                                        // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWB_Options_Audio_C*                                 WB_Options_Audio;                                        // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void RemoveChildren();
		void SetOptionButtonFocus(class UWB_SettingsButton01_C* Button);
		struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void SetTabButtonFocus(class UWB_TabButton01_C* Button);
		void GetOptionButtons(TArray<class UWB_SettingsButton01_C*>* Array);
		void SetCurrentOptionButtonFocus(class UWB_SettingsButton01_C* Target);
		void GetOnMouseEntered(bool* MouseEntered);
		void SetWidgetIndex_Global(int32_t Index);
		void SetWidgetIndex_Tabs(int32_t Index);
		void BndEvt__Button_Gameplay_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
		void BndEvt__Button_Controls_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
		void BndEvt__Button_Video_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
		void BndEvt__Button_Audio_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
		void OnSwitchBackFromChild();
		void OnInputSwitched(EInputType InputType);
		void SetGamepadAppearance(bool Active);
		void CheckMouseEntered();
		void BndEvt__Button_Quit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
		void OnConfirmQuit();
		void ClickQuit();
		void OnCancelQuit();
		void SetCurrentFocus();
		void RemoveWidget();
		void ActivateWidget();
		void BndEvt__Button_Resume_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
		void BndEvt__Button_Settings_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
		void BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
		void ClickBack();
		void ClickResume();
		void ExecuteUbergraph_WB_PauseMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
