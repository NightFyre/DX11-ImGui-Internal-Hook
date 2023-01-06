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
	 * BlueprintGeneratedClass MainPlayerController.MainPlayerController_C
	 * Size -> 0x002C (FullSize[0x0B1C] - InheritedSize[0x0AF0])
	 */
	class AMainPlayerController_C : public ARaidPlayerController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0AF0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		bool                                                       ShowMouse;                                               // 0x0AF8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       InventoryShow;                                           // 0x0AF9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsInEditor;                                              // 0x0AFA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_09GZ[0x5];                                   // 0x0AFB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             MenuW;                                                   // 0x0B00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USIGIS_Keypad_C*                                     ShipCodeKeypad_Widget;                                   // 0x0B08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundCue*                                           UseItemSoundToPlay;                                      // 0x0B10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Aiming;                                                  // 0x0B18(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		E_PlayerTypes                                              PlayerTypes;                                             // 0x0B19(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       wasPrevAiming;                                           // 0x0B1A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		E_PlayerTypes                                              PrevPlayerType;                                          // 0x0B1B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CauseRandomExplosionOnShip();
		void CheckIfAimingController();
		void CenterOutMouse();
		void CheckSetInvertedYMouse();
		void DragItem_StopSound(const class FName& ItemRowName);
		void DragItem_StartSound(const class FName& ItemRowName);
		void PlayDropItemSound(const class FName& ItemRowName);
		void PlayPickupSound(const class FName& ItemRowName);
		void InpActEvt_Tab_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void InpActEvt_MenuSelect_K2Node_InputActionEvent_5(const struct FKey& Key);
		void InpActEvt_MenuSelect_K2Node_InputActionEvent_4(const struct FKey& Key);
		void InpActEvt_MenuOptions_K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_MenuOptions_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_InGameMenu_K2Node_InputActionEvent_1(const struct FKey& Key);
		void OnLoaded_4C1D4E9B4BC4E96078881BB908C8ADB9(class UObject* Loaded);
		void OnLoaded_66CA392A49C8AF2B03E39AB30921D2BD(class UObject* Loaded);
		void CantLandEmemyOnBoard();
		void NotTheCaptain(bool JustCrew);
		void EnteringLandRaidVolume();
		void EnteringPlanetRaidVolume();
		void EnteringPlanetSpaceVolume(bool Boarded);
		void ReceiveBeginPlay();
		void TransitionStateChange(EPlayerTranisitionState From, EPlayerTranisitionState To);
		void OnFrigatesBeenHitAndInside();
		void BP_CloseEvenventory();
		void ShowHangerKeyPad();
		void CloseShowHangar_KeyPad();
		void PlayCameraShake(class UClass* Shake, float Scale);
		void World_PickedUpItem(const class FName& ItemRowName);
		void World_DroppedItem(const class FName& ItemRowName);
		void UI_EndedDrag(const class FName& ItemRowName);
		void UI_StartedDrag(const class FName& ItemRowName);
		void KeyEnterCheck(bool failed);
		void EvacRaid(bool Frigate, const class FName& FrigNameIn);
		void OnClientFiredTurret(float TimeforReload);
		void OnClientNoAmmoForTuret(float ReloadTime);
		void RefreshTurretInfo();
		void TurretFirstTimeOpen();
		void Turret_CurrentAimLocToHUD(const struct FVector& WorldTargetLocation, class UTexture2D* TurretCrosshair_Core, class UTexture2D* TurretCrosshair_Aim, bool TurretIsZoomedIn, bool TurretAimingAtOwnShip);
		void BeenBreached();
		void HealingEvent(EHealingOptions HealEvent);
		void OnUsedItemEvent(const class FName& ItemName);
		void InpAxisEvt_ControllerLook_K2Node_InputAxisEvent_3(float AxisValue);
		void InpAxisEvt_ControllerTurn_K2Node_InputAxisEvent_4(float AxisValue);
		void OnUpDateMission(const class FName& MissionRowUpdated);
		void ReceiveTick(float DeltaSeconds);
		void InitialiseAimingSensitivity();
		void CantFireWeaponBroken();
		void PoolTimer();
		void HangerEvent(EHangerEvent HEvent);
		void PlaySoftRef_2DSound();
		void Headshot(bool ArmourHit);
		void Bodyshot(bool ArmourHit);
		void BulletWizzPastHead(EBulletType BulletType);
		void PlaySoftRef_WorldLocationSound(const struct FVector& Location);
		void OnMutatedItem(const class FName& ItemRowName);
		void CantFoldItemsInside();
		void OnHealingAnimStarted(const class FName& ItemRow, float HealingTime);
		void OnHealingAnimStopped();
		void PlayerTakenDamageEvent(float DamageAmount, int32_t directionInt, const class FString& DamageType);
		void ForceLookSensitivityRefresh();
		void OnUpDateChapterMission(bool bCompleted, const class FName& RowName);
		void ExecuteUbergraph_MainPlayerController(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
