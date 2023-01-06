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
	 * BlueprintGeneratedClass MainMenu_CameraController.MainMenu_CameraController_C
	 * Size -> 0x0110 (FullSize[0x0330] - InheritedSize[0x0220])
	 */
	class AMainMenu_CameraController_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UMediaSoundComponent*                                MediaSound;                                              // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UBillboardComponent*                                 Billboard;                                               // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAudioComponent*                                     AudioComp_Music;                                         // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USceneComponent*                                     Scene;                                                   // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class ACineCameraActor*                                    _CameraStart;                                            // 0x0248(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ACineCameraActor*                                    _Login;                                                  // 0x0250(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ACineCameraActor*                                    _MainView;                                               // 0x0258(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ACineCameraActor*                                    _Matchmaking;                                            // 0x0260(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ACineCameraActor*                                    _Settings;                                               // 0x0268(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ACineCameraActor*                                    _Inventory;                                              // 0x0270(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ACineCameraActor*                                    _Shop;                                                   // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ACineCameraActor*                                    _Crafting;                                               // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ACineCameraActor*                                    _Hangar;                                                 // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ACineCameraActor*                                    _EndMatch_Escaped;                                       // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ACineCameraActor*                                    _EndMatch_Killed;                                        // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             StartMainMenuEvent;                                      // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class AMM_HangarShipViewer_C*                              Ref_Hangar;                                              // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ACineCameraActor*                                    _Workbench;                                              // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AMM_WorkBench_RenderViewer_C*                        Ref_WpnWorkbench;                                        // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AmountOfWpnsForWorkbench;                                // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_A23N[0x4];                                   // 0x02CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AMM_PlayerChar_C*>                            ArrayOfPlayerChars;                                      // 0x02D0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate
		int32_t                                                    CurrentNumOfOtherCrew;                                   // 0x02E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Y1MH[0x4];                                   // 0x02E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ACineCameraActor*                                    _Inventory_CustomiseFullBody;                            // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AMM_PlayerChar_C*                                    Ref_PlayerChar;                                          // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ACineCameraActor*                                    _Inventory_CustomiseHead;                                // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FEOSProductUserId>                           ArrayOfBGPlayerEOS_IDs;                                  // 0x0300(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class ACineCameraActor*                                    _Missions;                                               // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AMM_CoreMissions_C*                                  Ref_CoreMissionsActor;                                   // 0x0318(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FNakamaNGroupUser>                           ArrayNakama_Current_Crew;                                // 0x0320(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void ReceiveBeginPlay();
		void Music_FadeIn(float FadeInDuration);
		void Music_FadeOut(float FadeOutDuration);
		void Music_Switch(float FadeOutDuration, class USoundBase* NewMusic, float FadeInDuration);
		void SwitchCamera(EMenuState ToWhichMenuState);
		void SwitchCameraOptions();
		void SwitchCameraEndMatch(ERaidResult MatchResult);
		void MainMenuStartup();
		void SetNumOfWpnsHaveForWorkbench(int32_t AmountOfWpnsForWorkbench);
		void CrewSizeHasChanged(int32_t HowManyOtherCrew);
		void SwitchGearCustomiseCamera(E_InvEquipmentStates InvEquipmentState, ECosmeticSlot Current_ApperBodyPart);
		void SwitchCosmeticBodyPartCameras(ECosmeticSlot Current_ApperBodyPart);
		void LobbyMemberHasChangedAnAttribute(const struct FEOSLobbyMemberUpdateReceivedCallbackInfo& Data);
		void LobbyInfoChanged_JoinedOrCreated(bool CrewUpdate);
		void UpdateLobby(const struct FEOSLobbyUpdateReceivedCallbackInfo& Data);
		void LobbyStateHasChanged(ECrewEvents NewState);
		void FORCE_BG_CharRefresh();
		void DebugTurnAllBGGuysOn();
		void CrewInfoChange_TriggerBGCharRefresh();
		void ExecuteUbergraph_MainMenu_CameraController(int32_t EntryPoint);
		void StartMainMenuEvent__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
