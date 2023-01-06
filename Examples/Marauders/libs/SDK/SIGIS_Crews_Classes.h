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
	 * WidgetBlueprintGeneratedClass SIGIS_Crews.SIGIS_Crews_C
	 * Size -> 0x0348 (FullSize[0x05A8] - InheritedSize[0x0260])
	 */
	class USIGIS_Crews_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    Anim_Profanity_PasswordNameShake;                        // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Anim_WarningReasonMessage;                               // 0x0270(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Anim_Profanity_CrewNameShake;                            // 0x0278(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Anim_WindowSwitch;                                       // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Anim_Open;                                               // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Anim_PasswordWrong;                                      // 0x0290(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBackgroundBlur*                                     BackgroundBlur_126;                                      // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_CantFindSerevers;                                 // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_CptCreateCrew;                                    // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_FiltersAllCrews;                                  // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_FiltersFriendsOnly;                               // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_FiltersSpecificCrewFind;                          // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_JoinCrewList;                                     // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_MakeACrew;                                        // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_PasswordCheck;                                    // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_RefreshingListLoadingIcon;                        // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_RequiresPassword;                                 // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_SearchForCrew;                                    // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_FilterAllCrews;                                      // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_FilterCrewFind;                                      // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_FilterFriendsOnly;                                   // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_RefreshCrewListNoCrewsFound;                         // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_RefreshCrewsList;                                    // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_TempClearSearchCrewName;                             // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_TempSearchForCrewname;                               // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           CheckBox_CrewCreate_isPrivate;                           // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    CrewNameCreate;                                          // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    CrewNewPassword;                                         // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    EditableTextBox_232;                                     // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          HasPassword;                                             // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HorizontalBox_SearchOptions;                             // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_135;                                               // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_248;                                               // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_Core_BG_Widget_C*                                MM_Core_BG_Widget;                                       // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_Core_BG_Widget_C*                                MM_Core_BG_Widget_2;                                     // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_Core_BG_Widget_C*                                MM_Core_BG_Widget_3;                                     // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_Core_BG_Widget_C*                                MM_Core_BG_Widget_135;                                   // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_Core_BG_Widget_C*                                MM_Core_BG_Widget_249;                                   // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_Core_BG_Widget_C*                                MM_Core_BG_Widget_516;                                   // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_Core_BG_Widget_C*                                MM_Core_BG_Widget_722;                                   // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_GenericSmallBtn01;                                    // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_GenericSmallBtn01_ExactSeatch_Clear;                  // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_GenericSmallBtn01_ExactSeatch_Go;                     // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_GenericSmallBtn01_GoBack_Crew_PasswordScreen;         // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_GenericSmallBtn01_GoBack_CrewCreate;                  // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_GenericSmallBtn01_GoBack_CrewMenu;                    // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_GenericSmallBtn01_TryPassword;                        // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_GenericSmallBtn_RefreshCrewListNoCrewsFound;          // 0x03E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_GenericSmallBtn_RefreshCrewListNoCrewsFound_2;        // 0x03E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericTabBtn01_C*                               MM_GenericTabBtn01_AllCrews;                             // 0x03F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericTabBtn01_C*                               MM_GenericTabBtn01_CrewFind;                             // 0x03F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericTabBtn01_C*                               MM_GenericTabBtn01_FriendsOnly;                          // 0x0400(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             RefreshBtn;                                              // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URetainerBox*                                        RetainerBox;                                             // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URetainerBox*                                        RetainerBox_1;                                           // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URetainerBox*                                        RetainerBox_2;                                           // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URetainerBox*                                        RetainerBox_12;                                          // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          ScrollBox_CrewsResults;                                  // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          ScrollBox_SearchResults;                                 // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             ServerBrowse;                                            // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_AllCrews;                                        // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UThrobber*                                           Throbber;                                                // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UThrobber*                                           Throbber_141;                                            // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    TryPasswordForCrew;                                      // 0x0460(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_NameOfCrewPasswordJoin;                              // 0x0468(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_NameOfCrewPasswordJoin_2;                            // 0x0470(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_NoCrewsFoundBotMessage;                              // 0x0478(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_NoCrewsFoundtopMessage;                              // 0x0480(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_ReasonCantMakeCrew;                                  // 0x0488(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher_PasswordCheck;                            // 0x0490(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		E_CrewMenus                                                CurrentCrewMenuState;                                    // 0x0498(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NSJD[0x7];                                   // 0x0499(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                PasswordToTry;                                           // 0x04A0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class USIGIS_Crews_ListRow_C*>                      CrewsCanJoinList;                                        // 0x04B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		struct FTimerHandle                                        TH_AutoCrewListRefresh;                                  // 0x04C8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FLobbySearchInfo                                    LobbyTryingToJoin;                                       // 0x04D0(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              LobbyREQpassword;                                        // 0x04F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FText                                                SearchForCrewName;                                       // 0x0500(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		E_SearchCrewTypes                                          CurrentJoinCrewMenuState;                                // 0x0518(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QQRO[0x7];                                   // 0x0519(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMM_GenericTabBtn01_C*>                       Array_MainChoiceTabs;                                    // 0x0520(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		struct FNakamaNGroupBP                                     NakamaCurrentCrew;                                       // 0x0530(0x0078) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SwitchTabLook(E_SearchCrewTypes WhichSubMenu);
		void RunReasonCantMakeCrew(const class FText& WarningPhrase, class USoundCue* SoundToPlay, class UWidgetAnimation* UI_Anim_To_Play);
		void EnableSearchOptions(bool EnableInteractions);
		void FillCrewList(TArray<struct FNakamaNGroup>* returnedSearch);
		void SetCrewListRefreshState(E_CrewListSearchStates CrewListState);
		bool SaveLastCrewDetails(const class FString& PrevCrewName);
		void LoadLastCrewDetails(bool* DidLoad, class FString* PrevCrewName);
		void CrewMenuState(bool Close, E_CrewMenus WhichCrewMenu);
		void OnError_6979939A4D20C1501BF376934FA2306B(const struct FNakamaListGroupMembersResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse);
		void OnSuccess_6979939A4D20C1501BF376934FA2306B(const struct FNakamaListGroupMembersResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse);
		void Crew_CrewAvailList_Opened();
		void RefreshTheCrewList();
		void TriedToJoinAMatchReturn(const struct FCrewPartyInfo& JoinedTeam);
		void CloseTheCrewsMenu();
		void Crew_PasswordCheck_Opened();
		void BndEvt__TryPasswordForCrew_K2Node_ComponentBoundEvent_10_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
		void ThereAreCrewsToJoin(bool CrewsToJoin);
		void ValidJoinReturn_Event_1(const class FString& Error);
		void BndEvt__Btn_RefreshCrewListNoCrewsFound_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__MM_GenericSmallBtn01_GoBack_CrewMenu_K2Node_ComponentBoundEvent_12_GenericSmallBtnPressed__DelegateSignature();
		void BndEvt__MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_13_GenericSmallBtnPressed__DelegateSignature();
		void BndEvt__MM_GenericSmallBtn01_GoBack_CrewCreate_K2Node_ComponentBoundEvent_14_GenericSmallBtnPressed__DelegateSignature();
		void BndEvt__MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_15_GenericSmallBtnPressed__DelegateSignature();
		void BndEvt__MM_GenericSmallBtn01_GoBack_Crew_PasswordScreen_K2Node_ComponentBoundEvent_16_GenericSmallBtnPressed__DelegateSignature();
		void BndEvt__MM_GenericSmallBtn01_1_K2Node_ComponentBoundEvent_17_GenericSmallBtnPressed__DelegateSignature();
		void BndEvt__MM_GenericSmallBtn_RefreshCrewListNoCrewsFound_1_K2Node_ComponentBoundEvent_18_GenericSmallBtnPressed__DelegateSignature();
		void Crew_CreateMenu_Opened();
		void TryToJoinThisLobby(const struct FLobbySearchInfo& WhichLobby, const struct FNakamaNGroup& NakamaGroup, bool HasPassword, const class FString& REQpassword, const class FText& CrewName);
		void BndEvt__SIGIS_Crews_Btn_FilterAllCrews_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__SIGIS_Crews_Btn_FilterFriendsOnly_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__SIGIS_Crews_EditableTextBox_231_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
		void BndEvt__SIGIS_Crews_Button_526_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__SIGIS_Crews_Button_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__SIGIS_Crews_Btn_FilterCrewFind_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__CrewNewPassword_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
		void BndEvt__CrewNameCreate_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
		void BndEvt__SIGIS_Crews_MM_GenericTabBtn01_AllCrews_K2Node_ComponentBoundEvent_8_ButtonHasBeenPressed__DelegateSignature(const class FString& WhatPressed);
		void BndEvt__SIGIS_Crews_MM_GenericTabBtn01_FriendsOnly_K2Node_ComponentBoundEvent_9_ButtonHasBeenPressed__DelegateSignature(const class FString& WhatPressed);
		void BndEvt__SIGIS_Crews_MM_GenericTabBtn01_FriendsOnly_1_K2Node_ComponentBoundEvent_19_ButtonHasBeenPressed__DelegateSignature(const class FString& WhatPressed);
		void BndEvt__SIGIS_Crews_MM_GenericSmallBtn01_ExactSeatch_Go_K2Node_ComponentBoundEvent_20_GenericSmallBtnPressed__DelegateSignature();
		void BndEvt__SIGIS_Crews_MM_GenericSmallBtn01_ExactSeatch_Clear_K2Node_ComponentBoundEvent_21_GenericSmallBtnPressed__DelegateSignature();
		void BndEvt__SIGIS_Crews_EditableTextBox_231_K2Node_ComponentBoundEvent_22_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void Construct();
		void Return_NakamaCrewSearchResult(TArray<struct FNakamaNGroup> returnedSearch, const class FString& pageNum);
		void OnNKCrewSearchForMyfriendCrews_Event_1(TArray<struct FNakamaNGroup> returnedSearch, const class FString& pageNum);
		void Return_NKGetAllFreindsGroups(TArray<struct FNakamaNGroup> returnedSearch, bool Success);
		void ExecuteUbergraph_SIGIS_Crews(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
