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
	 * WidgetBlueprintGeneratedClass LeaderboardWidget.LeaderboardWidget_C
	 * Size -> 0x0198 (FullSize[0x03F8] - InheritedSize[0x0260])
	 */
	class ULeaderboardWidget_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    Anim_LoadingInfo_FadeIn;                                 // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Anim_Refresh;                                            // 0x0270(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBorder*                                             Border_RefreshingLeaderboards;                           // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_138;                                              // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HorizontalBox_MyRank;                                    // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_248;                                               // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_MyisOnlineNew;                                       // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_Core_BG_Widget_C*                                MM_Core_BG_Widget;                                       // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_GenericSmallBtn01_GoBack_Leaderboard;                 // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericTabBtn01_C*                               MM_GenericTabBtn01_Kills;                                // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericTabBtn01_C*                               MM_GenericTabBtn01_MyKills;                              // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericTabBtn01_C*                               MM_GenericTabBtn01_Prestige;                             // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericTabBtn01_C*                               MM_GenericTabBtn01_Richest;                              // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        Records;                                                 // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URetainerBox*                                        RetainerBox_1;                                           // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          ScrollBox_Leaderboard;                                   // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_isOnline;                                        // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_LeaderboardDesc;                                     // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_MyDisplayName_2;                                     // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_MyRankNew;                                           // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_MyScoreNew;                                          // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_AllLeaderbordInfo;                           // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_MyCurrentPosition;                           // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FString                                              LeaderboardId;                                           // 0x0320(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		TArray<class UMM_GenericTabBtn01_C*>                       Array_LeaderboardTabs;                                   // 0x0330(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class FString                                              Leaderboard_Stat;                                        // 0x0340(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FText                                                LeaderboardDescMessage;                                  // 0x0350(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		E_LeaderboardTypes                                         WhichLeaderBoardType;                                    // 0x0368(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CE18[0x7];                                   // 0x0369(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNakamaAccount                                      MyNakamaAccountID;                                       // 0x0370(0x0088) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SwitchRefreshing(bool isLoading);
		void SwitchTabLook(E_LeaderboardTypes SwitchTo);
		void OnCallback_81F04D564FF37A07EDBD1CA8A81C39B2(const struct FEOSLeaderboardsOnQueryLeaderboardRanksCompleteCallbackInfo& Data);
		void OnCallback_8388F38A4B0CFEF829B713BFE84A3F06(const struct FEOSLeaderboardsOnQueryLeaderboardDefinitionsCompleteCallbackInfo& Data);
		void BndEvt__MM_GenericSmallBtn01_GoBack_BugReportMenu_K2Node_ComponentBoundEvent_3_GenericSmallBtnPressed__DelegateSignature();
		void Fill_List();
		void LoadDefault();
		void BndEvt__LeaderboardWidget_MM_GenericTabBtn01_K2Node_ComponentBoundEvent_4_ButtonHasBeenPressed__DelegateSignature(const class FString& WhatPressed);
		void BndEvt__LeaderboardWidget_MM_GenericTabBtn01_1_K2Node_ComponentBoundEvent_5_ButtonHasBeenPressed__DelegateSignature(const class FString& WhatPressed);
		void BndEvt__LeaderboardWidget_MM_GenericTabBtn01_2_K2Node_ComponentBoundEvent_6_ButtonHasBeenPressed__DelegateSignature(const class FString& WhatPressed);
		void FIll_AWS_Lists();
		void aws_AllLeaderboardKills(TArray<struct FLeaderBoardMemberInfo> leaderboardback);
		void aws_MyLeaderboardKills(const struct FLeaderBoardMemberInfo& PlayerInfo);
		void BndEvt__LeaderboardWidget_Button_137_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void Fill_NakamaLeaderboard();
		void Return_NakamaLeaderboard(TArray<struct FNakamaNLeaderBoardRow> returnedrecords, TArray<struct FNakamaNLeaderBoardRow> returnedrecordsSpecific, const class FString& pageNumNext, const class FString& pageNumPrev);
		void ReturnMyAccount(const struct FNakamaAccount& Myaccount);
		void Construct();
		void BndEvt__LeaderboardWidget_MM_GenericTabBtn01_KillsNearMe_K2Node_ComponentBoundEvent_1_ButtonHasBeenPressed__DelegateSignature(const class FString& WhatPressed);
		void Fill_NakamaLeaderboardAoundMe();
		void Return_NakamaLeaderboardAroundMe(TArray<struct FNakamaNLeaderBoardRow> returnedrecords, TArray<struct FNakamaNLeaderBoardRow> returnedrecordsSpecific, const class FString& pageNumNext, const class FString& pageNumPrev);
		void ExecuteUbergraph_LeaderboardWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
