#pragma once

/**
 * Name: RaidGame
 * Version: 1
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function MainPlayerController.MainPlayerController_C.CauseRandomExplosionOnShip
	 */
	struct AMainPlayerController_C_CauseRandomExplosionOnShip_Params
	{	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.CheckIfAimingController
	 */
	struct AMainPlayerController_C_CheckIfAimingController_Params
	{	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.CenterOutMouse
	 */
	struct AMainPlayerController_C_CenterOutMouse_Params
	{	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.CheckSetInvertedYMouse
	 */
	struct AMainPlayerController_C_CheckSetInvertedYMouse_Params
	{	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.DragItem_StopSound
	 */
	struct AMainPlayerController_C_DragItem_StopSound_Params
	{
	public:
		class FName                                                ItemRowName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.DragItem_StartSound
	 */
	struct AMainPlayerController_C_DragItem_StartSound_Params
	{
	public:
		class FName                                                ItemRowName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.PlayDropItemSound
	 */
	struct AMainPlayerController_C_PlayDropItemSound_Params
	{
	public:
		class FName                                                ItemRowName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.PlayPickupSound
	 */
	struct AMainPlayerController_C_PlayPickupSound_Params
	{
	public:
		class FName                                                ItemRowName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.InpActEvt_Tab_K2Node_InputKeyEvent_1
	 */
	struct AMainPlayerController_C_InpActEvt_Tab_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.InpActEvt_MenuSelect_K2Node_InputActionEvent_5
	 */
	struct AMainPlayerController_C_InpActEvt_MenuSelect_K2Node_InputActionEvent_5_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.InpActEvt_MenuSelect_K2Node_InputActionEvent_4
	 */
	struct AMainPlayerController_C_InpActEvt_MenuSelect_K2Node_InputActionEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.InpActEvt_MenuOptions_K2Node_InputActionEvent_3
	 */
	struct AMainPlayerController_C_InpActEvt_MenuOptions_K2Node_InputActionEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.InpActEvt_MenuOptions_K2Node_InputActionEvent_2
	 */
	struct AMainPlayerController_C_InpActEvt_MenuOptions_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.InpActEvt_InGameMenu_K2Node_InputActionEvent_1
	 */
	struct AMainPlayerController_C_InpActEvt_InGameMenu_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.OnLoaded_4C1D4E9B4BC4E96078881BB908C8ADB9
	 */
	struct AMainPlayerController_C_OnLoaded_4C1D4E9B4BC4E96078881BB908C8ADB9_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.OnLoaded_66CA392A49C8AF2B03E39AB30921D2BD
	 */
	struct AMainPlayerController_C_OnLoaded_66CA392A49C8AF2B03E39AB30921D2BD_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.CantLandEmemyOnBoard
	 */
	struct AMainPlayerController_C_CantLandEmemyOnBoard_Params
	{	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.NotTheCaptain
	 */
	struct AMainPlayerController_C_NotTheCaptain_Params
	{
	public:
		bool                                                       JustCrew;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.EnteringLandRaidVolume
	 */
	struct AMainPlayerController_C_EnteringLandRaidVolume_Params
	{	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.EnteringPlanetRaidVolume
	 */
	struct AMainPlayerController_C_EnteringPlanetRaidVolume_Params
	{	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.EnteringPlanetSpaceVolume
	 */
	struct AMainPlayerController_C_EnteringPlanetSpaceVolume_Params
	{
	public:
		bool                                                       Boarded;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.ReceiveBeginPlay
	 */
	struct AMainPlayerController_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.TransitionStateChange
	 */
	struct AMainPlayerController_C_TransitionStateChange_Params
	{
	public:
		EPlayerTranisitionState                                    From;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EPlayerTranisitionState                                    To;                                                      // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.OnFrigatesBeenHitAndInside
	 */
	struct AMainPlayerController_C_OnFrigatesBeenHitAndInside_Params
	{	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.BP_CloseEvenventory
	 */
	struct AMainPlayerController_C_BP_CloseEvenventory_Params
	{	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.ShowHangerKeyPad
	 */
	struct AMainPlayerController_C_ShowHangerKeyPad_Params
	{	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.CloseShowHangar_KeyPad
	 */
	struct AMainPlayerController_C_CloseShowHangar_KeyPad_Params
	{	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.PlayCameraShake
	 */
	struct AMainPlayerController_C_PlayCameraShake_Params
	{
	public:
		class UClass*                                              Shake;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Scale;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.World_PickedUpItem
	 */
	struct AMainPlayerController_C_World_PickedUpItem_Params
	{
	public:
		class FName                                                ItemRowName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.World_DroppedItem
	 */
	struct AMainPlayerController_C_World_DroppedItem_Params
	{
	public:
		class FName                                                ItemRowName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.UI_EndedDrag
	 */
	struct AMainPlayerController_C_UI_EndedDrag_Params
	{
	public:
		class FName                                                ItemRowName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.UI_StartedDrag
	 */
	struct AMainPlayerController_C_UI_StartedDrag_Params
	{
	public:
		class FName                                                ItemRowName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.KeyEnterCheck
	 */
	struct AMainPlayerController_C_KeyEnterCheck_Params
	{
	public:
		bool                                                       failed;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.EvacRaid
	 */
	struct AMainPlayerController_C_EvacRaid_Params
	{
	public:
		bool                                                       Frigate;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OVXX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                FrigNameIn;                                              // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.OnClientFiredTurret
	 */
	struct AMainPlayerController_C_OnClientFiredTurret_Params
	{
	public:
		float                                                      TimeforReload;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.OnClientNoAmmoForTuret
	 */
	struct AMainPlayerController_C_OnClientNoAmmoForTuret_Params
	{
	public:
		float                                                      ReloadTime;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.RefreshTurretInfo
	 */
	struct AMainPlayerController_C_RefreshTurretInfo_Params
	{	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.TurretFirstTimeOpen
	 */
	struct AMainPlayerController_C_TurretFirstTimeOpen_Params
	{	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.Turret_CurrentAimLocToHUD
	 */
	struct AMainPlayerController_C_Turret_CurrentAimLocToHUD_Params
	{
	public:
		struct FVector                                             WorldTargetLocation;                                     // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZX6T[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          TurretCrosshair_Core;                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          TurretCrosshair_Aim;                                     // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       TurretIsZoomedIn;                                        // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       TurretAimingAtOwnShip;                                   // 0x0021(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.BeenBreached
	 */
	struct AMainPlayerController_C_BeenBreached_Params
	{	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.HealingEvent
	 */
	struct AMainPlayerController_C_HealingEvent_Params
	{
	public:
		EHealingOptions                                            HealEvent;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.OnUsedItemEvent
	 */
	struct AMainPlayerController_C_OnUsedItemEvent_Params
	{
	public:
		class FName                                                ItemName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.InpAxisEvt_ControllerLook_K2Node_InputAxisEvent_3
	 */
	struct AMainPlayerController_C_InpAxisEvt_ControllerLook_K2Node_InputAxisEvent_3_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.InpAxisEvt_ControllerTurn_K2Node_InputAxisEvent_4
	 */
	struct AMainPlayerController_C_InpAxisEvt_ControllerTurn_K2Node_InputAxisEvent_4_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.OnUpDateMission
	 */
	struct AMainPlayerController_C_OnUpDateMission_Params
	{
	public:
		class FName                                                MissionRowUpdated;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.ReceiveTick
	 */
	struct AMainPlayerController_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.InitialiseAimingSensitivity
	 */
	struct AMainPlayerController_C_InitialiseAimingSensitivity_Params
	{	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.CantFireWeaponBroken
	 */
	struct AMainPlayerController_C_CantFireWeaponBroken_Params
	{	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.PoolTimer
	 */
	struct AMainPlayerController_C_PoolTimer_Params
	{	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.HangerEvent
	 */
	struct AMainPlayerController_C_HangerEvent_Params
	{
	public:
		EHangerEvent                                               HEvent;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.PlaySoftRef_2DSound
	 */
	struct AMainPlayerController_C_PlaySoftRef_2DSound_Params
	{	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.Headshot
	 */
	struct AMainPlayerController_C_Headshot_Params
	{
	public:
		bool                                                       ArmourHit;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.Bodyshot
	 */
	struct AMainPlayerController_C_Bodyshot_Params
	{
	public:
		bool                                                       ArmourHit;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.BulletWizzPastHead
	 */
	struct AMainPlayerController_C_BulletWizzPastHead_Params
	{
	public:
		EBulletType                                                BulletType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.PlaySoftRef_WorldLocationSound
	 */
	struct AMainPlayerController_C_PlaySoftRef_WorldLocationSound_Params
	{
	public:
		unsigned char                                              UnknownData_J13C[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Location;                                                // 0x0028(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.OnMutatedItem
	 */
	struct AMainPlayerController_C_OnMutatedItem_Params
	{
	public:
		class FName                                                ItemRowName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.CantFoldItemsInside
	 */
	struct AMainPlayerController_C_CantFoldItemsInside_Params
	{	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.OnHealingAnimStarted
	 */
	struct AMainPlayerController_C_OnHealingAnimStarted_Params
	{
	public:
		class FName                                                ItemRow;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      HealingTime;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.OnHealingAnimStopped
	 */
	struct AMainPlayerController_C_OnHealingAnimStopped_Params
	{	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.PlayerTakenDamageEvent
	 */
	struct AMainPlayerController_C_PlayerTakenDamageEvent_Params
	{
	public:
		float                                                      DamageAmount;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    directionInt;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              DamageType;                                              // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.ForceLookSensitivityRefresh
	 */
	struct AMainPlayerController_C_ForceLookSensitivityRefresh_Params
	{	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.OnUpDateChapterMission
	 */
	struct AMainPlayerController_C_OnUpDateChapterMission_Params
	{
	public:
		bool                                                       bCompleted;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RKYX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                RowName;                                                 // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainPlayerController.MainPlayerController_C.ExecuteUbergraph_MainPlayerController
	 */
	struct AMainPlayerController_C_ExecuteUbergraph_MainPlayerController_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y7KH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
