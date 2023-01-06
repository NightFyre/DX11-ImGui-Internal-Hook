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
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.IsWeaponBroken
	 */
	struct UHUD_Main_Widget_C_IsWeaponBroken_Params
	{
	public:
		bool                                                       WeaponisBroken;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_98VM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.SetHealthBarAndVisualsCheck
	 */
	struct UHUD_Main_Widget_C_SetHealthBarAndVisualsCheck_Params
	{	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.FireModeVisuals
	 */
	struct UHUD_Main_Widget_C_FireModeVisuals_Params
	{
	public:
		bool                                                       ShowifValid;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YD35[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ItemDTname;                                              // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.GetIsHealingCheckAndVisuals
	 */
	struct UHUD_Main_Widget_C_GetIsHealingCheckAndVisuals_Params
	{	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.SetStaminaBarAndVisualsCheck
	 */
	struct UHUD_Main_Widget_C_SetStaminaBarAndVisualsCheck_Params
	{	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.ShouldShowFrigateAbandonShipMessage
	 */
	struct UHUD_Main_Widget_C_ShouldShowFrigateAbandonShipMessage_Params
	{
	public:
		bool                                                       Hull_IsBroken;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TTT6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.GetAreaInfoFromDataTable
	 */
	struct UHUD_Main_Widget_C_GetAreaInfoFromDataTable_Params
	{
	public:
		bool                                                       NoInfoFound;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ENIS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Line01;                                                  // 0x0008(0x0018)  (Parm, OutParm)
		class FText                                                Line02;                                                  // 0x0020(0x0018)  (Parm, OutParm)
		class FText                                                Line03;                                                  // 0x0038(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.FadeInOutBlack
	 */
	struct UHUD_Main_Widget_C_FadeInOutBlack_Params
	{
	public:
		float                                                      FromAlpha;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ToAlpha;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Duration;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bHoldWhenFinished;                                       // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OO6P[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.FrigateShowHideHealthBars
	 */
	struct UHUD_Main_Widget_C_FrigateShowHideHealthBars_Params
	{	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.GetFillUI_ForCurrentShip
	 */
	struct UHUD_Main_Widget_C_GetFillUI_ForCurrentShip_Params
	{	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.PlayAreaOrShipPopupWidget
	 */
	struct UHUD_Main_Widget_C_PlayAreaOrShipPopupWidget_Params
	{
	public:
		float                                                      DelayBeforePopup;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7YB0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                LineOne;                                                 // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                LineTwo;                                                 // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                LineThreeDifficulty;                                     // 0x0038(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.SetDropPodUISpeeds
	 */
	struct UHUD_Main_Widget_C_SetDropPodUISpeeds_Params
	{
	public:
		int32_t                                                    Speed;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.UpdateDropPodhealth
	 */
	struct UHUD_Main_Widget_C_UpdateDropPodhealth_Params
	{	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.BoostBarValue
	 */
	struct UHUD_Main_Widget_C_BoostBarValue_Params
	{
	public:
		float                                                      InPercent;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.DropPodIsBoosting
	 */
	struct UHUD_Main_Widget_C_DropPodIsBoosting_Params
	{
	public:
		bool                                                       IsBoosting;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.ShipHitWhileInsideEffects
	 */
	struct UHUD_Main_Widget_C_ShipHitWhileInsideEffects_Params
	{	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.UpdateHealthOfSpecificPart
	 */
	struct UHUD_Main_Widget_C_UpdateHealthOfSpecificPart_Params
	{
	public:
		struct FSystemHealth                                       SystemHealth;                                            // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.UpdateFrigateSystemsHealth
	 */
	struct UHUD_Main_Widget_C_UpdateFrigateSystemsHealth_Params
	{	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.ReturnTodaysDateIn1992
	 */
	struct UHUD_Main_Widget_C_ReturnTodaysDateIn1992_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.WriteText
	 */
	struct UHUD_Main_Widget_C_WriteText_Params
	{
	public:
		class UTextBlock*                                          TextField;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.WasKilled
	 */
	struct UHUD_Main_Widget_C_WasKilled_Params
	{	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.Get_Bar_Stamina_Percent_1
	 */
	struct UHUD_Main_Widget_C_Get_Bar_Stamina_Percent_1_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.GivenDamageToAnotherPlayer
	 */
	struct UHUD_Main_Widget_C_GivenDamageToAnotherPlayer_Params
	{	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.Have Taken Damage
	 */
	struct UHUD_Main_Widget_C_Have_Taken_Damage_Params
	{
	public:
		float                                                      DamageTaken;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7TK3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class APawn*                                               PawnInstigator;                                          // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Direction;                                               // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       DidDieFromHit;                                           // 0x0024(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1K8L[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              DamageType;                                              // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.Set_SpeedLines
	 */
	struct UHUD_Main_Widget_C_Set_SpeedLines_Params
	{
	public:
		ESlateVisibility                                           InVisibility;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y4OS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      AlphaValue;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LineMoveSpeed;                                           // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.SwitchHudToState
	 */
	struct UHUD_Main_Widget_C_SwitchHudToState_Params
	{
	public:
		EPlayerTranisitionState                                    SwitchToState;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EPlayerTranisitionState                                    SwitchingFromState;                                      // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EVD4[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.Show_Interact_Prompt
	 */
	struct UHUD_Main_Widget_C_Show_Interact_Prompt_Params
	{
	public:
		bool                                                       SomethingInFront;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GUW2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ObjectName;                                              // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       HasHold;                                                 // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CTOX[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.OnLoaded_8AB7082F449422D76CFB48B4EB857D57
	 */
	struct UHUD_Main_Widget_C_OnLoaded_8AB7082F449422D76CFB48B4EB857D57_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.Construct
	 */
	struct UHUD_Main_Widget_C_Construct_Params
	{	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.MyTick
	 */
	struct UHUD_Main_Widget_C_MyTick_Params
	{	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.Tick
	 */
	struct UHUD_Main_Widget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.DeathMusicWithDelay
	 */
	struct UHUD_Main_Widget_C_DeathMusicWithDelay_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.PlayText_InitialShipStart
	 */
	struct UHUD_Main_Widget_C_PlayText_InitialShipStart_Params
	{	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.NewAreaMessage
	 */
	struct UHUD_Main_Widget_C_NewAreaMessage_Params
	{
	public:
		class FString                                              TextToUse;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.PlayerIsReadyToSpawn
	 */
	struct UHUD_Main_Widget_C_PlayerIsReadyToSpawn_Params
	{	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.CheckFrigateSystemsHealth
	 */
	struct UHUD_Main_Widget_C_CheckFrigateSystemsHealth_Params
	{	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.Exit_Raid_FadeOutHUD
	 */
	struct UHUD_Main_Widget_C_Exit_Raid_FadeOutHUD_Params
	{	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.MyFastTick
	 */
	struct UHUD_Main_Widget_C_MyFastTick_Params
	{	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.ActivateBoostBar
	 */
	struct UHUD_Main_Widget_C_ActivateBoostBar_Params
	{	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.BoostFinished
	 */
	struct UHUD_Main_Widget_C_BoostFinished_Params
	{	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.DeactivateBoostBar
	 */
	struct UHUD_Main_Widget_C_DeactivateBoostBar_Params
	{	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.HUD_Turret_RefreshInfo
	 */
	struct UHUD_Main_Widget_C_HUD_Turret_RefreshInfo_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Desc;                                                    // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    Ammo_Left;                                               // 0x0030(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Ammo_Max;                                                // 0x0034(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.HUD_Turret_Reloading
	 */
	struct UHUD_Main_Widget_C_HUD_Turret_Reloading_Params
	{
	public:
		float                                                      ReloadTime;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.HUD_Turret_NoAmmo
	 */
	struct UHUD_Main_Widget_C_HUD_Turret_NoAmmo_Params
	{
	public:
		float                                                      ReloadingTimer;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.HUD_TurretOpened
	 */
	struct UHUD_Main_Widget_C_HUD_TurretOpened_Params
	{	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.ReloadingTimerReduce
	 */
	struct UHUD_Main_Widget_C_ReloadingTimerReduce_Params
	{	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.CheckDropPodHealth
	 */
	struct UHUD_Main_Widget_C_CheckDropPodHealth_Params
	{	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.Cinematic_FadeUI
	 */
	struct UHUD_Main_Widget_C_Cinematic_FadeUI_Params
	{
	public:
		bool                                                       Hide;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.Cinematic_BlackTransitionHide
	 */
	struct UHUD_Main_Widget_C_Cinematic_BlackTransitionHide_Params
	{
	public:
		bool                                                       ShowBlack;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MIHC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      PlaybackSpeed;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.Cinematic_FadeUI_Instant
	 */
	struct UHUD_Main_Widget_C_Cinematic_FadeUI_Instant_Params
	{
	public:
		bool                                                       Hide;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.DelayTurretPopup
	 */
	struct UHUD_Main_Widget_C_DelayTurretPopup_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.Delayed_DropPodHealthChange
	 */
	struct UHUD_Main_Widget_C_Delayed_DropPodHealthChange_Params
	{
	public:
		float                                                      TargetHealth;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Delay_Duration;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.SetUIAbleToPodBreach
	 */
	struct UHUD_Main_Widget_C_SetUIAbleToPodBreach_Params
	{
	public:
		bool                                                       ShowCanBreachUI;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.HudWidget_TurretAimLoc
	 */
	struct UHUD_Main_Widget_C_HudWidget_TurretAimLoc_Params
	{
	public:
		struct FVector                                             AimLoc;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JSMP[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          TurretCrosshair_Core;                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          TurretCrosshair_Aim;                                     // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       TurretIsZoomedIn;                                        // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AimingAtOwnShip;                                         // 0x0021(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.TurretAimLocationTICK
	 */
	struct UHUD_Main_Widget_C_TurretAimLocationTICK_Params
	{	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.Warning_BeenBorded
	 */
	struct UHUD_Main_Widget_C_Warning_BeenBorded_Params
	{	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.HUD_StaminaCooldown_Started
	 */
	struct UHUD_Main_Widget_C_HUD_StaminaCooldown_Started_Params
	{	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.HUD_StaminaCooldown_Finished
	 */
	struct UHUD_Main_Widget_C_HUD_StaminaCooldown_Finished_Params
	{	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.CheckifShouldHideStaminaBar
	 */
	struct UHUD_Main_Widget_C_CheckifShouldHideStaminaBar_Params
	{	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.NoSpaceForItem
	 */
	struct UHUD_Main_Widget_C_NoSpaceForItem_Params
	{	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.TurnOffNotEnoughSpace
	 */
	struct UHUD_Main_Widget_C_TurnOffNotEnoughSpace_Params
	{	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.SetAbleToDockPrompt
	 */
	struct UHUD_Main_Widget_C_SetAbleToDockPrompt_Params
	{
	public:
		bool                                                       ShowCanDockUI;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.CheckifShouldHideHealthBar
	 */
	struct UHUD_Main_Widget_C_CheckifShouldHideHealthBar_Params
	{	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.OxygenDyingTimer
	 */
	struct UHUD_Main_Widget_C_OxygenDyingTimer_Params
	{	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.AirlockUse_Message
	 */
	struct UHUD_Main_Widget_C_AirlockUse_Message_Params
	{
	public:
		EHangerEvent                                               Hanger_UseEvent;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.PlayerStartedSecondOptionHold
	 */
	struct UHUD_Main_Widget_C_PlayerStartedSecondOptionHold_Params
	{	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.PlayerStoppedSecondOptionHold
	 */
	struct UHUD_Main_Widget_C_PlayerStoppedSecondOptionHold_Params
	{	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.HoldingInteractFor2ndOption
	 */
	struct UHUD_Main_Widget_C_HoldingInteractFor2ndOption_Params
	{	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.HoldInteractComplete_ResetDetails
	 */
	struct UHUD_Main_Widget_C_HoldInteractComplete_ResetDetails_Params
	{	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.PlayPlayerLocal_TakeDamageEffects
	 */
	struct UHUD_Main_Widget_C_PlayPlayerLocal_TakeDamageEffects_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_47D7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              DamageType;                                              // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.POD_PretendDeath
	 */
	struct UHUD_Main_Widget_C_POD_PretendDeath_Params
	{	};

	/**
	 * Function HUD_Main_Widget.HUD_Main_Widget_C.ExecuteUbergraph_HUD_Main_Widget
	 */
	struct UHUD_Main_Widget_C_ExecuteUbergraph_HUD_Main_Widget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
