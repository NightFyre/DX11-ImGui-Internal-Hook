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
	 * WidgetBlueprintGeneratedClass SIGIS_MenuMain.SIGIS_MenuMain_C
	 * Size -> 0x0899 (FullSize[0x0B11] - InheritedSize[0x0278])
	 */
	class USIGIS_MenuMain_C : public UMenuOptions
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    Anim_Event_StartWarningMessage;                          // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Anim_Event_NameRequired;                                 // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Anim_OpenNews;                                           // 0x0290(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Anim_RecommendedRegionSearchSwitch;                      // 0x0298(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Anim_LockedPressed;                                      // 0x02A0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBorder*                                             Border_BackgroundChar01;                                 // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_BackgroundChar02;                                 // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_BackgroundChar03;                                 // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_Cpt_LockCrewBtn;                                  // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_CptOnly_CrewLockedState;                          // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_CrewIsLocked;                                     // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_CrewStatMessage;                                  // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_CurrentCrewInfo;                                  // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_EarlyAccessMessage;                               // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_FrontEndMessage;                                  // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_GoToMatchSinglePlayerOLD;                         // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_LaunchBtnArea;                                    // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_LaunchBtnArea_2;                                  // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             BordeR_LaunchTxtBG;                                      // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             BordeR_LaunchTxtBG_CrewBtn;                              // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_NewArea;                                          // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_NewsChunk;                                        // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_OnNaughtyListWarning;                             // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_PlayScreenElements;                               // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_ServerLocationPreference;                         // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_CancelMatchmakeSearch_SinglePlayer;                  // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_DevAddattribute;                                     // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_DevBG_Guys;                                          // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_DevBG_Guys_2;                                        // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_DevBringUpJoinLobby;                                 // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_LaunchGameBtn_Crew;                                  // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_LaunchGameBtn_Singleplayer;                          // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_LockCrew;                                            // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_LockCrewToggle;                                      // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_PlayerReadyBtn;                                      // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_UnlockCrew;                                          // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button;                                                  // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_60;                                               // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_148;                                              // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_193;                                              // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_Test_CheckcrewInfo;                               // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_Test_CheckInfo;                                   // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_Test_Create;                                      // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_Test_Destroy;                                     // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_Test_Join;                                        // 0x03E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_Test_Kick;                                        // 0x03E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_Test_Leave;                                       // 0x03F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_Test_UpdateCrewMetaData;                          // 0x03F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_TestRefreshCrews;                                 // 0x0400(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             dummyFocusBtn;                                           // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableText*                                       EditableText_test_CrewID;                                // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    EditableTextBox_CreateCrew;                              // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    EditableTextBox_crewcheckinfo;                           // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    EditableTextBox_crewcheckinfo_2;                         // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    EditableTextBox_crewcheckinfo_3;                         // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    EditableTextBox_DeleteCrew;                              // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    EditableTextBox_Event_NameToUseForEvent;                 // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    EditableTextBox_JoinCrew;                                // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    EditableTextBox_KickCrewID;                              // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    EditableTextBox_LeaveCrew;                               // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEvent_SmallLeaderboardRow_Widget_C*                 Event_SmallLeaderboardRow_Widget;                        // 0x0460(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEvent_SmallLeaderboardRow_Widget_C*                 Event_SmallLeaderboardRow_Widget_2;                      // 0x0468(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEvent_SmallLeaderboardRow_Widget_C*                 Event_SmallLeaderboardRow_Widget_3;                      // 0x0470(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEvent_SmallLeaderboardRow_Widget_C*                 Event_SmallLeaderboardRow_Widget_4;                      // 0x0478(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEvent_SmallLeaderboardRow_Widget_C*                 Event_SmallLeaderboardRow_Widget_5;                      // 0x0480(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGenericBackground_Widget_C*                         GenericBackground_Widget_5;                              // 0x0488(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HorizontalBox_Cpt_LockUnlockCrew;                        // 0x0490(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HorizontalBox_CrewCpt_View;                              // 0x0498(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HorizontalBox_CrewNormal_View;                           // 0x04A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HorizontalBox_PingAmounts;                               // 0x04A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HorizontalBox_Region_btns;                               // 0x04B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HorizontalBox_RegionRecommendedChecking;                 // 0x04B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HorizontalBox_SetReadyStatus;                            // 0x04C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_200;                                               // 0x04C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_NewsImage;                                         // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_CrewLockState;                                       // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_Ready;                                               // 0x04E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_ShipIcon;                                            // 0x04E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_Btn_LocPref_EU;                                       // 0x04F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_Btn_LocPref_RECOMMENDED;                              // 0x04F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_Btn_LocPref_USA_EAST;                                 // 0x0500(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_Btn_LocPref_USA_WEST;                                 // 0x0508(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_Core_BG_Widget_C*                                MM_Core_BG_Widget;                                       // 0x0510(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_Core_BG_Widget_C*                                MM_Core_BG_Widget_2;                                     // 0x0518(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_Core_BG_Widget_C*                                MM_Core_BG_Widget_3;                                     // 0x0520(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_Core_BG_Widget_C*                                MM_Core_BG_Widget_4;                                     // 0x0528(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_Core_BG_Widget_C*                                MM_Core_BG_Widget_5;                                     // 0x0530(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_Core_BG_Widget_C*                                MM_Core_BG_Widget_6;                                     // 0x0538(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_Core_BG_Widget_C*                                MM_Core_BG_Widget_91;                                    // 0x0540(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_Core_BG_Widget_C*                                MM_Core_BG_Widget_167;                                   // 0x0548(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_Core_BG_Widget_C*                                MM_Core_BG_Widget_191;                                   // 0x0550(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_Core_BG_Widget_C*                                MM_Core_BG_Widget_265;                                   // 0x0558(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_Core_BG_Widget_C*                                MM_Core_BG_Widget_280;                                   // 0x0560(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_crewBtn_CreateCrew;                                   // 0x0568(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_crewBtn_JoinCrew;                                     // 0x0570(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_Event_CancelWipeMe;                                   // 0x0578(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_Event_Restart;                                        // 0x0580(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_Event_SeeFullLeaderboardList;                         // 0x0588(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_Event_Start;                                          // 0x0590(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_Event_YesWipeMe;                                      // 0x0598(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericLargeBtn01_C*                             MM_GenericLargeBtn01;                                    // 0x05A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_GenericSmallBtn01;                                    // 0x05A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_GenericSmallBtn01_DisbandCrew;                        // 0x05B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_GenericSmallBtn01_GoBack_News;                        // 0x05B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_GenericSmallBtn01_LeaveCrew;                          // 0x05C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_GenericSmallBtn01_MM_DailyContracts;                  // 0x05C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_LaunchToMatchMain_C*                             MM_LaunchToMatchMain;                                    // 0x05D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_LaunchToMatchMain_C*                             MM_LaunchToMatchMain_CrewPlay;                           // 0x05D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            Overlay_EventMenu_Progress;                              // 0x05E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          RecipeTextDescription;                                   // 0x05E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URetainerBox*                                        RetainerBox_151;                                         // 0x05F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          ScrollBox_Invites;                                       // 0x05F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          ScrollBox_TestCrewsToJoin;                               // 0x0600(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USIGIS_Crews_RowSmall_C*                             SIGIS_Crews_RowSmall;                                    // 0x0608(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USIGIS_Crews_RowSmall_C*                             SIGIS_Crews_RowSmall_2;                                  // 0x0610(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USIGIS_Crews_RowSmall_C*                             SIGIS_Crews_RowSmall_3;                                  // 0x0618(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USIGIS_Crews_RowSmall_C*                             SIGIS_Crews_RowSmall_4;                                  // 0x0620(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_CrewCreateAndJoinBtns;                           // 0x0628(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_CrewPlayBtn_OldVersion;                          // 0x0630(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_EventMenu_Start;                                 // 0x0638(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_LoneWolfPlayBtn_OldVersion;                      // 0x0640(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UThrobber*                                           Throbber;                                                // 0x0648(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UThrobber*                                           Throbber_141;                                            // 0x0650(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_AllCrewReady;                                        // 0x0658(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_AveragePingAmount;                                   // 0x0660(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_BackgroundPerson01;                                  // 0x0668(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_BackgroundPerson02;                                  // 0x0670(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_BackgroundPerson03;                                  // 0x0678(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_ContractsAvailable;                                  // 0x0680(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_CptName;                                             // 0x0688(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_CrewName;                                            // 0x0690(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_CrewPlayerCount;                                     // 0x0698(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_EarlyAccessMessage;                                  // 0x06A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_EarlyAccessTitle;                                    // 0x06A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_Event_AiKills;                                       // 0x06B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_Event_InProgressMyName;                              // 0x06B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_Event_InProgressMyName_2;                            // 0x06C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_Event_MyLeaderboardPosition;                         // 0x06C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_Event_PlayerKills;                                   // 0x06D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_Event_TotalPoints;                                   // 0x06D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_EventReasonCantStart;                                // 0x06E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          txt_FrontEndMessage;                                     // 0x06E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_Launch_Message;                                      // 0x06F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_Launch_Message_Crew;                                 // 0x06F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_LobbyID;                                             // 0x0700(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_NewsBody;                                            // 0x0708(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_NewsTitle;                                           // 0x0710(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_ReadyBtn;                                            // 0x0718(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_Region;                                              // 0x0720(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_SearchForMatchTimer_SinglePlayer;                    // 0x0728(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_ShipAsText;                                          // 0x0730(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_TextTitle;                                           // 0x0738(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_Timeremaining;                                       // 0x0740(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_TravelToMatchState_SinglePlayer;                     // 0x0748(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_CrewInvites;                                 // 0x0750(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_DailyContractInfo;                           // 0x0758(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_DailyContracts;                              // 0x0760(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_DevDebugs;                                   // 0x0768(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_Event;                                       // 0x0770(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_Event_CurrentTop5;                           // 0x0778(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_EventLeaderboardRow;                         // 0x0780(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_EventTwitch;                                 // 0x0788(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_InProgress_Details;                          // 0x0790(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_InProgress_WipeWarning;                      // 0x0798(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_StartingSearch_SinglePlayer;                 // 0x07A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_navset_event_handler_C*                          SettingsMenuEventHandlerRef;                             // 0x07A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBP_navigation_manager_C*                            NavManagerRef;                                           // 0x07B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsSettingPanelOpened;                                    // 0x07B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanFocus;                                                // 0x07B9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4VU1[0x2];                                   // 0x07BA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SettingsPanelStepIndex;                                  // 0x07BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMediaPlayer*                                        bg_video_player;                                         // 0x07C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBP_navset_event_handler_C*                          NavEventManager;                                         // 0x07C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    StepIndex;                                               // 0x07D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NHNQ[0x4];                                   // 0x07D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUserWidget*                                         CursorInteractionLimiter;                                // 0x07D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    SettingMenuFadeinOut;                                    // 0x07E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUserWidget*                                         PanelWidgetRef;                                          // 0x07E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDebugMenu_Widget_C*                                 DebugMenu;                                               // 0x07F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FCrewPartyInfo                                      CurrentCrewInfo;                                         // 0x07F8(0x0058) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IamTheCaptain;                                           // 0x0850(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_91PI[0x7];                                   // 0x0851(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGameLiftClientCompenent*                            RefGameLiftClientComponent;                              // 0x0858(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class USIGIS_Crews_RowSmall_C*>                     Array_CrewInfoRows;                                      // 0x0860(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		ECrewEvents                                                Current_MatchmakeState;                                  // 0x0870(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       b_PlayerReady;                                           // 0x0871(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3QFU[0x6];                                   // 0x0872(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameLiftPlayer>                             GameLiftPlayer;                                          // 0x0878(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      StringValue;                                             // 0x0888(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class FString, float>                                 DataMap;                                                 // 0x0898(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              CurrentTicketID;                                         // 0x08E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		struct FTimerHandle                                        TH_QueryMMTicket;                                        // 0x08F8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TArray<struct FGameliftSessionPlayerID>                    GameliftPayerSessions;                                   // 0x0900(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       b_isCrewLocked;                                          // 0x0910(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5Q2M[0x3];                                   // 0x0911(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SearchingTimerAmount;                                    // 0x0914(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        TH_SearchingForMatchTimer;                               // 0x0918(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       isSearching4Match;                                       // 0x0920(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isSearching4Match_Singleplayer;                          // 0x0921(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       WereAllCrewReadyUpBefore;                                // 0x0922(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EMenuState                                                 Current_MainMenuState;                                   // 0x0923(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FPOT[0x4];                                   // 0x0924(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             IsMatchmaking_Singleplayer;                              // 0x0928(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             SearchForMatchTimerChanged;                              // 0x0938(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             isMatchmaking_TeamView;                                  // 0x0948(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             Update_TeamMatchmakingState;                             // 0x0958(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             ED_CrewJoinPressed;                                      // 0x0968(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             ED_CrewCreatePressed;                                    // 0x0978(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class UMM_GenericSmallBtn01_C*>                     Array_RegionSelectBtns_NEW;                              // 0x0988(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class AMainMenu_CameraController_C*                        Ref_MM_CameraManager;                                    // 0x0998(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CrewAmount;                                              // 0x09A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PreviosCrewAmount;                                       // 0x09A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPopup02_Widget_C*                                   CurrentPopup_Widget;                                     // 0x09A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                CurrentRegion_NiceName;                                  // 0x09B0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              CaptainsCurrentShipType;                                 // 0x09C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class FString>                                      PlayersWhoArntMe;                                        // 0x09D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    DescribeMatchmakingPendingInt;                           // 0x09E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LJY2[0x4];                                   // 0x09EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Configuration_Name;                                      // 0x09F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		TArray<struct FSIGGameLiftPlayer>                          GRAPHQL_Players;                                         // 0x0A00(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       NewVar_1;                                                // 0x0A10(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_08X7[0x7];                                   // 0x0A11(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              UPlayerID;                                               // 0x0A18(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              Pings;                                                   // 0x0A28(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       NewsMessageAvailable;                                    // 0x0A38(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanCheckIfBeenKicked;                                    // 0x0A39(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_49JV[0x6];                                   // 0x0A3A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMediaPlayer*                                        MediaPlayer_MyStream;                                    // 0x0A40(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FMMatchMakingTicket                                 MatchingTicket;                                          // 0x0A48(0x0038) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UContract_SmallRow_SubWidget_C*>              ArrayOfContractSmallMissions;                            // 0x0A80(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		float                                                      MatchMakingSearchLoopTime;                               // 0x0A90(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_N4VT[0x4];                                   // 0x0A94(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMMatchedPlayerSession>                      CaptainTicket_Info_Connection_Info_Player_Sessions;      // 0x0A98(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UEvent_SmallLeaderboardRow_Widget_C*>         Array_EventLeaderboardRows;                              // 0x0AA8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class FString>                                      ArrayExpoStarterItems_GiveItems;                         // 0x0AB8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FTimerHandle                                        TH_HaveBeenKickedCheck;                                  // 0x0AC8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CrewKickCheckInt;                                        // 0x0AD0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WasPreviInCrew;                                          // 0x0AD4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       b_CanNowKickCrewCheck;                                   // 0x0AD5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_079H[0x2];                                   // 0x0AD6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Temp_Crew_ID;                                            // 0x0AD8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              TempJoinCrewID;                                          // 0x0AE8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       DoesCrewInviteAlreadyExist;                              // 0x0AF8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VREX[0x7];                                   // 0x0AF9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CrewMemberIPToJoin;                                      // 0x0B00(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       CanTickDelay;                                            // 0x0B10(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void FrontEndMessage(bool ShowMessage, const class FString& Text);
		void Nakama_SetPrivateVisuals(bool b_isCrewLocked);
		void Nakama_Notify_RemoveAllInvites();
		void Nakama_SetPlayerReadyNotReady_DontUseNowInGameInstance(bool IsReady);
		void Nakama_RefreshCrewInfo();
		void Nakama_IsPartOfACrew(bool IsInCrew);
		void Event_StartWarningReason(const class FText& WarningMessage, class USoundBase* Sound, class UWidgetAnimation* InAnimation);
		void CalculateLowestPing(class FString* LowestPingName);
		void DailyContracts_ShowFullScreen();
		void DailyContracts_RefreshSmallRows();
		void DailyContracts_RefreshInfo();
		void DailyContracts_SetupSmallRows();
		void Setup_CrewRows();
		void CaptSetMemebersGraphQl();
		void MatchmakingPendingIntCheck(bool Reset);
		void Region_RecommendedSearching(bool IsSearching);
		void GetCrewInLobbyOrderWhoArntMe(TArray<class FString>* PlayersWhoArntMe);
		void CheckCrewHoverInfo(bool TurnOff);
		void Analytics_EnterMatch();
		void CheckIfAllCrewReadyToLaunch(bool* AllCrewAreReady);
		void SetCrewMemberReadyAttribute(bool IsReady);
		void New_RefreshCrewInfo_OldSystem();
		class FText Bind_PlayerGold();
		void PlaySoundIfReadyUnreadyStateChanged(bool ReadyNotReadyState);
		void TellInventoryToLockUnlockGear(bool LockGear);
		void HideIsSearchingElements(bool Show);
		void SetServerLocationTAB(int32_t WhichTabActive);
		void SetServerLocationPreference(int32_t WhichRegion, bool OnlyVisuals);
		void ShowHideMatchSearchState(bool Show);
		void LaunchBtnState(E_LaunchBtnStates LaunchBtnState);
		void SetCptGameliftPlayerAttributes();
		void SetSoloGameliftPlayerAttributes();
		void SetPlayerIsReady(bool PlayerIsReady, bool isReset);
		void UpdateCurrentMatchmakingState(ECrewEvents Selection);
		void SetupCrewInfoWidgets();
		void RefreshCrewInfo_VeryOldSystem(const struct FCrewPartyInfo& CrewInfo);
		void IsPartOfACrew_OldSystem(bool IsInCrew);
		void SetMatchmakingState();
		void ClearPanelContains();
		void LoadPanel(class UClass* Class, class UWidget** Panel);
		void OnError_6FEE0C094126DD3E77316881F964EC00(const struct FNakamaListGroupMembersResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse);
		void OnSuccess_6FEE0C094126DD3E77316881F964EC00(const struct FNakamaListGroupMembersResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse);
		void OnError_A9CA40AA438296FB46AB1DAF2CDE8B59(const struct FNakamaRPCResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse);
		void OnSuccess_A9CA40AA438296FB46AB1DAF2CDE8B59(const struct FNakamaRPCResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse);
		void OnError_47B24EB741A75DA442B47DAA25851F4B(const struct FNakamaRPCResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse);
		void OnSuccess_47B24EB741A75DA442B47DAA25851F4B(const struct FNakamaRPCResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse);
		void OnError_2FF4F3E24B80F6F826DB5F9303902B33(const struct FNakamaRPCResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse);
		void OnSuccess_2FF4F3E24B80F6F826DB5F9303902B33(const struct FNakamaRPCResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse);
		void OnError_8A7F283F4733C1EBA8B12D9337940E57(const struct FNakamaRPCResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse);
		void OnSuccess_8A7F283F4733C1EBA8B12D9337940E57(const struct FNakamaRPCResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse);
		void OnError_6E45E12547E677374CF48CA51A3E3B64(const struct FNakamaRPCResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse);
		void OnSuccess_6E45E12547E677374CF48CA51A3E3B64(const struct FNakamaRPCResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse);
		void Construct();
		void CloseSetting();
		void ReFocus();
		void CustomEvent(int32_t StepIndex);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void BndEvt__dummyFocusBtn_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
		void ForceDebugClose();
		void RefreshedLobbyInfo(const struct FCrewPartyInfo& LobbyRefreshed);
		void CaptainWantsToKickPlayer(const struct FEOSProductUserId& EOS_ID_ToKick, const struct FNakamaNGroupUser& NakamaMemberInfo);
		void BndEvt__Btn_LockCrew_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__Btn_UnlockCrew_K2Node_ComponentBoundEvent_17_OnButtonPressedEvent__DelegateSignature();
		void LobbyStateHasChanged(ECrewEvents NewState);
		void BndEvt__Btn_SetAsReady_K2Node_ComponentBoundEvent_19_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__Button_61_K2Node_ComponentBoundEvent_21_OnButtonPressedEvent__DelegateSignature();
		void LaunchGameSolo();
		void StartedSoloMatchSearch();
		void CancelledCptMatchSearch();
		void CancelledSoloMatchSearch();
		void PollSoloMatchMaking();
		void CrewConnect(const class FString& CrewMemberIPToJoin);
		void SoloConnect();
		void BndEvt__Button_0_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature();
		void ForceUnlockCrew();
		void BndEvt__Btn_LaunchGameBtn_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Btn_LaunchGameBtn_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature();
		void ForceLockCrew();
		void StartedMatchmaking();
		void SearchingForMatchTimer();
		void SearchForMatch_StartTimer();
		void SearchForMatch_StopTimer();
		void CancelMatchmaking(bool DoNotPlaySound);
		void JoinedCrewMatchmaking();
		void BndEvt__Btn_LaunchGameBtn_1_K2Node_ComponentBoundEvent_29_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__Btn_CancelMatchmakeSearch_SinglePlayer_K2Node_ComponentBoundEvent_30_OnButtonPressedEvent__DelegateSignature();
		void Refresh_AveragePing();
		void SetRegionForAveragePing(EAmazonRegions RegionToSet);
		void BndEvt__Btn_LaunchGameBtn_Crew_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Btn_LaunchGameBtn_Crew_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature();
		void Force_Cancel_Matchmaking_SinglePlayer();
		void Force_CancelMatchmaking_Captain();
		void CANCEL_SEARCHING_FOR_MATCHMAKING();
		void BndEvt__MM_Btn_LocPref_EU_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature();
		void BndEvt__MM_Btn_LocPref_USA_WEST_K2Node_ComponentBoundEvent_33_GenericSmallBtnPressed__DelegateSignature();
		void BndEvt__MM_Btn_LocPref_USA_EAST_K2Node_ComponentBoundEvent_34_GenericSmallBtnPressed__DelegateSignature();
		void BndEvt__MM_Btn_LocPref_RECOMMENDED_K2Node_ComponentBoundEvent_35_GenericSmallBtnPressed__DelegateSignature();
		void BndEvt__MM_GenericSmallBtn01_LeaveCrew_K2Node_ComponentBoundEvent_36_GenericSmallBtnPressed__DelegateSignature();
		void BndEvt__MM_GenericSmallBtn01_DisbandCrew_K2Node_ComponentBoundEvent_37_GenericSmallBtnPressed__DelegateSignature();
		void BndEvt__Btn_LockCrewToggle_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Btn_LockCrewToggle_K2Node_ComponentBoundEvent_39_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__MM_crewBtn_CreateCrew_K2Node_ComponentBoundEvent_40_GenericSmallBtnPressed__DelegateSignature();
		void BndEvt__MM_crewBtn_JoinCrew_K2Node_ComponentBoundEvent_41_GenericSmallBtnPressed__DelegateSignature();
		void BndEvt__MM_LaunchToMatchMain_K2Node_ComponentBoundEvent_42_ED_LaunchBtnPressed__DelegateSignature();
		void BndEvt__MM_LaunchToMatchMain_1_K2Node_ComponentBoundEvent_43_ED_LaunchBtnPressed__DelegateSignature();
		void BndEvt__Btn_DevBringUpJoinLobby_K2Node_ComponentBoundEvent_44_OnButtonClickedEvent__DelegateSignature();
		void OnMyLobbyInfoHasChange();
		void BndEvt__Btn_DevBringUpJoinLobby_1_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature();
		void CustomEvent_2(const struct FEOSLobbyUpdateReceivedCallbackInfo& Data);
		void CustomEvent_3(const struct FEOSLobbyMemberUpdateReceivedCallbackInfo& Data);
		void LobbyUpdateCreatedOrJoined(bool CrewUpdate);
		void BndEvt__Btn_DevBG_Guys_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature();
		void SoloStartAfterWarning();
		void CancelNoWeaponWarningPopup();
		void BndEvt__Btn_DevBG_Guys_1_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature();
		void MatchmakeCancelBecauseOfProblemPopup(const class FText& Popup_Desc);
		void ProblemCancelOutOfMatchmaking_TimedOut();
		void PollSoloAWS();
		void TestCancelTicket();
		void TestStartMatchMake();
		void OnMatchMakeQuery_Event_1(const struct FMMatchMakingTicket& TicketInfo);
		void OnMatchMakeStart_Event_1(bool Success, const class FString& TicketID);
		void CustomEvent_4();
		void CustomEvent_5(const struct FMMatchMakingTicket& TicketInfo);
		void CustomEvent_6(bool Success, const class FString& TicketID);
		void StartedCptMatchSearch();
		void NewsToggle();
		void CheckForNews();
		void BndEvt__SIGIS_MenuMain_MM_GenericSmallBtn01_GoBack_News_K2Node_ComponentBoundEvent_2_GenericSmallBtnPressed__DelegateSignature();
		void FirstCheckNews();
		void CheckIfShouldBeKicked();
		void ResetCheckForIfShouldBeKicked();
		void MatchMakingHasFailed(bool Isfailed);
		void BndEvt__SIGIS_MenuMain_MM_GenericLargeBtn01_K2Node_ComponentBoundEvent_1_GenericLargeBtn_Pressed__DelegateSignature();
		void OpenTheFriendsMenu();
		void BndEvt__SIGIS_MenuMain_Button_147_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
		void REFRESH_PlayContractsSmallRows();
		void PLAY_HasBeenOpened();
		void ContractResetTimer();
		void BndEvt__SIGIS_MenuMain_MM_GenericSmallBtn01_GoBack_Tooltip_1_K2Node_ComponentBoundEvent_4_GenericSmallBtnPressed__DelegateSignature();
		void ClickedOnSmallContractRow();
		void MatchMakingResult(EMatchMakeResultEvent ResultBack);
		void StoppedMMResult(const class FString& ResultMessage);
		void ProblemCancelOnlyUI_Captain();
		void ProblemCancelOnlyUI_Solo();
		void Cancel_JustTheUI_SideOfMatchmaking();
		void CustomEvent_1();
		void BndEvt__SIGIS_MenuMain_MM_Event_Start_K2Node_ComponentBoundEvent_6_GenericSmallBtnPressed__DelegateSignature();
		void Refresh_EventDetails();
		void BndEvt__SIGIS_MenuMain_MM_Event_Restart_K2Node_ComponentBoundEvent_7_GenericSmallBtnPressed__DelegateSignature();
		void EVENT_FirstTimeOpen();
		void BndEvt__SIGIS_MenuMain_MM_Event_Restart_3_K2Node_ComponentBoundEvent_8_GenericSmallBtnPressed__DelegateSignature();
		void BndEvt__SIGIS_MenuMain_MM_Event_Restart_2_K2Node_ComponentBoundEvent_12_GenericSmallBtnPressed__DelegateSignature();
		void BndEvt__SIGIS_MenuMain_EditableTextBox_Event_NameToUseForEvent_K2Node_ComponentBoundEvent_13_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
		void OnDynoHasCharacter_Event_1(bool Success, bool HasPlayer);
		void OnDynoSetScore_Event_1(bool Success);
		void Event_GetMyScore(bool Success, const struct FLeaderBoardMemberInfo& PlayerInfo);
		void OnDynoCreateChar_Event_1(bool Success);
		void BndEvt__SIGIS_MenuMain_Button_192_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
		void Event_GetAllLeaderboardsList(bool Success, TArray<struct FLeaderBoardMemberInfo> leaderboardback);
		void BndEvt__SIGIS_MenuMain_Button_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature();
		void LoginSuccess_InMainMenuOptions();
		void BndEvt__SIGIS_MenuMain_MM_Event_SeeFullLeaderboardList_K2Node_ComponentBoundEvent_23_GenericSmallBtnPressed__DelegateSignature();
		void StartCrewKickCheckTimer();
		void RunCrewKickCheck();
		void CancelCrewCheckTimer();
		void IsMatchMakingView(bool IsinATeam);
		void CaptainKickedCrewMember(bool sucessfulkick);
		void CheckIfInACrewAndKickCheckNotRunningAlready();
		void OnNaughtyReturn_Event_1(bool isNaughty, const class FString& ReasonNaughty);
		void BndEvt__SIGIS_MenuMain_Button_Test_Create_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__SIGIS_MenuMain_Button_Test_Join_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__SIGIS_MenuMain_Button_TestRefreshCrews_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__SIGIS_MenuMain_Button_Test_Create_1_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__SIGIS_MenuMain_Button_Test_Leave_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__SIGIS_MenuMain_Button_Test_Kick_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature();
		void NakamaCrew_InitialSetup();
		void Return_NakamaCrewCreated(const class FString& CrewID);
		void Return_NakamaCrewDestroyed();
		void Return_NakamaJoinedACrew();
		void Return_NakamaLeaveACrew();
		void Return_NakamaKickedCrewMember();
		void Return_UpdateCrew();
		void BndEvt__SIGIS_MenuMain_Button_Test_Create_1_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__SIGIS_MenuMain_MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_48_GenericSmallBtnPressed__DelegateSignature();
		void ReturnOnNotification(TArray<struct FNakamaNotification> returnednotification);
		void ReturnOnNotificationDeleted();
		void Return_Connected();
		void Return_Disconnected();
		void Return_NewPresence(const struct FNakamaChannelPresenceObject& NewPres);
		void Return_StatusPresence(const struct FNakamaStatusPresenceObject& NewPres);
		void Return_ChatMessage(const struct FNakamaChatObject& ChatMsg);
		void BndEvt__SIGIS_MenuMain_Button_Test_UpdateCrewMetaData_K2Node_ComponentBoundEvent_46_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__SIGIS_MenuMain_Button_Test_CheckInfo_1_K2Node_ComponentBoundEvent_49_OnButtonClickedEvent__DelegateSignature();
		void Return_JoinedGroupChat(const class FString& ChatRoomID);
		void RefreshCurrentCrewInfo(const struct FNakamaNGroupBP& returnedinfo, bool Success);
		void Return_CrewSearchForID(TArray<struct FNakamaNGroup> returnedSearch, const class FString& pageNum);
		void REFRESH_Master_CrewOrSolo();
		void Refresh_CrewSoloInfo(const class FString& CrewID);
		void Refresh_CrewAsSoloPlay();
		void BndEvt__SIGIS_MenuMain_Button_59_K2Node_ComponentBoundEvent_50_OnButtonPressedEvent__DelegateSignature();
		void ReturnFromMatchEndScreen_NakamaRefresh();
		void GiftNotifySentToPlayer(const struct FNakamaNotification& NotifyInfo);
		void OnPingIssues_Encountered();
		void Return_OnPermMessageRecv(const class FString& messageback, bool HasMessage);
		void OnStartNakMM_Event_1(const class FString& TicketNak);
		void OnStopNakMM_Event_1();
		void MatchmakingEvent(const struct FNakamaNotification& NotifyInfo);
		void ExecuteUbergraph_SIGIS_MenuMain(int32_t EntryPoint);
		void ED_CrewCreatePressed__DelegateSignature();
		void ED_CrewJoinPressed__DelegateSignature();
		void Update_TeamMatchmakingState__DelegateSignature(ECrewEvents CrewState);
		void isMatchmaking_TeamView__DelegateSignature(bool IsinATeam);
		void SearchForMatchTimerChanged__DelegateSignature(const class FText& TimeAsText);
		void IsMatchmaking_Singleplayer__DelegateSignature(bool IsMatchmaking);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
