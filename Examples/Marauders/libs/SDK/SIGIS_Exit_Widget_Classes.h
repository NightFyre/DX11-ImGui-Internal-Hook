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
	 * WidgetBlueprintGeneratedClass SIGIS_Exit_Widget.SIGIS_Exit_Widget_C
	 * Size -> 0x0140 (FullSize[0x03A0] - InheritedSize[0x0260])
	 */
	class USIGIS_Exit_Widget_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    Anim_SettingsFadeIn;                                     // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Anim_ShowExitWarning;                                    // 0x0270(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Anim_ExitFadeOut;                                        // 0x0278(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Anim_OpenMenu;                                           // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBorder*                                             Border_AreYouSure;                                       // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_DebugMissions;                                    // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_DebugVoicesEditorOnly;                            // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_EarlyAccessMessage;                               // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_FullScreenFadeOut;                                // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_Logo;                                             // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_MainMenuOptions;                                  // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_Settings;                                         // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_DebugClearMissions;                                  // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_DebugIncrementMission;                               // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_DebugStartMission;                                   // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_DevDebug;                                            // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_ENG;                                                 // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_FR;                                                  // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_POL;                                                 // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_1;                                                // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    EditableTextBox_DebugCurrentLocation;                    // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    EditableTextBox_MissionName;                             // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_131;                                               // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_DebugBtnLook;                                        // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_Core_BG_Widget_C*                                MM_Core_BG_Widget;                                       // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_Core_BG_Widget_C*                                MM_Core_BG_Widget_85;                                    // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_GenericSmallBtn_BackBtn;                              // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_GenericSmallBtn_BugReports;                           // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_GenericSmallBtn_Cancel;                               // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_GenericSmallBtn_Exit;                                 // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_GenericSmallBtn_MainMenu;                             // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_GenericSmallBtn_Resume;                               // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_GenericSmallBtn_Settings;                             // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_GenericSmallBtn_Settings_2;                           // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URetainerBox*                                        RetainerBox;                                             // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USIGIS_Options_C*                                    SIGIS_Options;                                           // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       SettingsIsOpen;                                          // 0x0388(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AreYouSureMenuOpen;                                      // 0x0389(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DNFE[0x6];                                   // 0x038A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USIGIS_BugReport_C*                                  BugReport_Widget;                                        // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UGuide_Widget_C*                                     Guide_Widget;                                            // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ShowSettingsMenu(bool Show);
		void ShowAreYouSureWarning(bool Show);
		struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void Construct();
		void ExitMenu_Open();
		void CloseTheMenu();
		void ShowSettings();
		void BndEvt__MM_GenericSmallBtn_Resume_K2Node_ComponentBoundEvent_9_GenericSmallBtnPressed__DelegateSignature();
		void BndEvt__MM_GenericSmallBtn_Settings_K2Node_ComponentBoundEvent_10_GenericSmallBtnPressed__DelegateSignature();
		void BndEvt__MM_GenericSmallBtn_MainMenu_K2Node_ComponentBoundEvent_11_GenericSmallBtnPressed__DelegateSignature();
		void BndEvt__MM_GenericSmallBtn_BackBtn_K2Node_ComponentBoundEvent_12_GenericSmallBtnPressed__DelegateSignature();
		void BndEvt__MM_GenericSmallBtn01_1_K2Node_ComponentBoundEvent_13_GenericSmallBtnPressed__DelegateSignature();
		void BndEvt__MM_GenericSmallBtn_Cancel_K2Node_ComponentBoundEvent_14_GenericSmallBtnPressed__DelegateSignature();
		void BndEvt__MM_GenericSmallBtn_BugReports_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature();
		void CloseBugMenu();
		void BndEvt__SIGIS_Exit_Widget_Btn_ENG_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__SIGIS_Exit_Widget_Btn_FR_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__SIGIS_Exit_Widget_Btn_POL_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__SIGIS_Exit_Widget_Btn_DebugStartMission_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__SIGIS_Exit_Widget_Btn_DebugIncrementMission_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__SIGIS_Exit_Widget_Btn_DebugClearMissions_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__SIGIS_Exit_Widget_Button_0_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__SIGIS_Exit_Widget_MM_GenericSmallBtn_Settings_1_K2Node_ComponentBoundEvent_8_GenericSmallBtnPressed__DelegateSignature();
		void ClosedTheGuideMenu();
		void BndEvt__SIGIS_Exit_Widget_Btn_DevDebug_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature();
		void ExecuteUbergraph_SIGIS_Exit_Widget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
