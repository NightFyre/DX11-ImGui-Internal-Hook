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
	 * BlueprintGeneratedClass MatchHUD.MatchHUD_C
	 * Size -> 0x0038 (FullSize[0x0898] - InheritedSize[0x0860])
	 */
	class AMatchHUD_C : public ARaidHUD
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0860(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0868(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_BoostBarValue_BE6931F940C4E4DE71177284C838A19F; // 0x0870(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_BE6931F940C4E4DE71177284C838A19F;  // 0x0874(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_KQSD[0x3];                                   // 0x0875(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x0878(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USIGIS_Exit_Widget_C*                                Exit_Widget;                                             // 0x0880(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UHUD_Main_Widget_C*                                  HUD_Widget;                                              // 0x0888(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                StoredAreaDTName;                                        // 0x0890(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AudioDuckingForInInventory(bool ForceOff, bool ForceON);
		void CenterOutMouse();
		void IsInventoryOpen(bool* InventoryIsVisible);
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void TriggerExitMenu_ForceClose();
		void BP_ShowInfoEvent(const class FString& KeyAndItemType, bool HasHold);
		void BP_HideInfoEvent();
		void ToggledInventory();
		void UI_TransitioningState(EPlayerTranisitionState From, EPlayerTranisitionState To);
		void HudTakenDamage(float DamageTaken, const struct FDamageEvent& DamageEvent, class APawn* PawnInstigator, int32_t Direction);
		void HudGivenDamage();
		void F_ForinventoryWasPresed();
		void ReceiveBeginPlay();
		void OnKilledEvent();
		void InventoryOpen();
		void InventoryClosed();
		void PlayerReadyToDeploy();
		void Trigger_ExitMenu();
		void MenuStateChanged(EMenuState NewState);
		void ReceiveDrawHUD(int32_t SizeX, int32_t SizeY);
		void ShipHitWhilePlayerInside_HUDEffetcs();
		void LeaveMatch_FadeOutHUD();
		void DropPodIsBoosting(bool IsBoosting);
		void StoreEnteringAreaName(const class FName& AreaDTName);
		void TurretAimLoc_InHUD(const struct FVector& AimLoc, class UTexture2D* TurretCrosshair_Core, class UTexture2D* TurretCrosshair_Aim, bool TurretIsZoomedIn, bool TurretAimingAtOwnShip);
		void StaminaCooldownStarted();
		void StaminaCooldownFinished();
		void BP_NoSpaceForItem();
		void CompletelyCloseExitMenu();
		void CloseInventoryIfOpen();
		void StartedHold();
		void EndedHold();
		void ExecuteUbergraph_MatchHUD(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
