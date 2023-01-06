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
	 * Function MatchHUD.MatchHUD_C.AudioDuckingForInInventory
	 */
	struct AMatchHUD_C_AudioDuckingForInInventory_Params
	{
	public:
		bool                                                       ForceOff;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ForceON;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MatchHUD.MatchHUD_C.CenterOutMouse
	 */
	struct AMatchHUD_C_CenterOutMouse_Params
	{	};

	/**
	 * Function MatchHUD.MatchHUD_C.IsInventoryOpen
	 */
	struct AMatchHUD_C_IsInventoryOpen_Params
	{
	public:
		bool                                                       InventoryIsVisible;                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MNYK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MatchHUD.MatchHUD_C.Timeline_0__FinishedFunc
	 */
	struct AMatchHUD_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function MatchHUD.MatchHUD_C.Timeline_0__UpdateFunc
	 */
	struct AMatchHUD_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function MatchHUD.MatchHUD_C.TriggerExitMenu_ForceClose
	 */
	struct AMatchHUD_C_TriggerExitMenu_ForceClose_Params
	{	};

	/**
	 * Function MatchHUD.MatchHUD_C.BP_ShowInfoEvent
	 */
	struct AMatchHUD_C_BP_ShowInfoEvent_Params
	{
	public:
		class FString                                              KeyAndItemType;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       HasHold;                                                 // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MatchHUD.MatchHUD_C.BP_HideInfoEvent
	 */
	struct AMatchHUD_C_BP_HideInfoEvent_Params
	{	};

	/**
	 * Function MatchHUD.MatchHUD_C.ToggledInventory
	 */
	struct AMatchHUD_C_ToggledInventory_Params
	{	};

	/**
	 * Function MatchHUD.MatchHUD_C.UI_TransitioningState
	 */
	struct AMatchHUD_C_UI_TransitioningState_Params
	{
	public:
		EPlayerTranisitionState                                    From;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EPlayerTranisitionState                                    To;                                                      // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MatchHUD.MatchHUD_C.HudTakenDamage
	 */
	struct AMatchHUD_C_HudTakenDamage_Params
	{
	public:
		float                                                      DamageTaken;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OGCR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class APawn*                                               PawnInstigator;                                          // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Direction;                                               // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MatchHUD.MatchHUD_C.HudGivenDamage
	 */
	struct AMatchHUD_C_HudGivenDamage_Params
	{	};

	/**
	 * Function MatchHUD.MatchHUD_C.F_ForinventoryWasPresed
	 */
	struct AMatchHUD_C_F_ForinventoryWasPresed_Params
	{	};

	/**
	 * Function MatchHUD.MatchHUD_C.ReceiveBeginPlay
	 */
	struct AMatchHUD_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MatchHUD.MatchHUD_C.OnKilledEvent
	 */
	struct AMatchHUD_C_OnKilledEvent_Params
	{	};

	/**
	 * Function MatchHUD.MatchHUD_C.InventoryOpen
	 */
	struct AMatchHUD_C_InventoryOpen_Params
	{	};

	/**
	 * Function MatchHUD.MatchHUD_C.InventoryClosed
	 */
	struct AMatchHUD_C_InventoryClosed_Params
	{	};

	/**
	 * Function MatchHUD.MatchHUD_C.PlayerReadyToDeploy
	 */
	struct AMatchHUD_C_PlayerReadyToDeploy_Params
	{	};

	/**
	 * Function MatchHUD.MatchHUD_C.Trigger_ExitMenu
	 */
	struct AMatchHUD_C_Trigger_ExitMenu_Params
	{	};

	/**
	 * Function MatchHUD.MatchHUD_C.MenuStateChanged
	 */
	struct AMatchHUD_C_MenuStateChanged_Params
	{
	public:
		EMenuState                                                 NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MatchHUD.MatchHUD_C.ReceiveDrawHUD
	 */
	struct AMatchHUD_C_ReceiveDrawHUD_Params
	{
	public:
		int32_t                                                    SizeX;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SizeY;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MatchHUD.MatchHUD_C.ShipHitWhilePlayerInside_HUDEffetcs
	 */
	struct AMatchHUD_C_ShipHitWhilePlayerInside_HUDEffetcs_Params
	{	};

	/**
	 * Function MatchHUD.MatchHUD_C.LeaveMatch_FadeOutHUD
	 */
	struct AMatchHUD_C_LeaveMatch_FadeOutHUD_Params
	{	};

	/**
	 * Function MatchHUD.MatchHUD_C.DropPodIsBoosting
	 */
	struct AMatchHUD_C_DropPodIsBoosting_Params
	{
	public:
		bool                                                       IsBoosting;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MatchHUD.MatchHUD_C.StoreEnteringAreaName
	 */
	struct AMatchHUD_C_StoreEnteringAreaName_Params
	{
	public:
		class FName                                                AreaDTName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MatchHUD.MatchHUD_C.TurretAimLoc_InHUD
	 */
	struct AMatchHUD_C_TurretAimLoc_InHUD_Params
	{
	public:
		struct FVector                                             AimLoc;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8LS7[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          TurretCrosshair_Core;                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          TurretCrosshair_Aim;                                     // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       TurretIsZoomedIn;                                        // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       TurretAimingAtOwnShip;                                   // 0x0021(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MatchHUD.MatchHUD_C.StaminaCooldownStarted
	 */
	struct AMatchHUD_C_StaminaCooldownStarted_Params
	{	};

	/**
	 * Function MatchHUD.MatchHUD_C.StaminaCooldownFinished
	 */
	struct AMatchHUD_C_StaminaCooldownFinished_Params
	{	};

	/**
	 * Function MatchHUD.MatchHUD_C.BP_NoSpaceForItem
	 */
	struct AMatchHUD_C_BP_NoSpaceForItem_Params
	{	};

	/**
	 * Function MatchHUD.MatchHUD_C.CompletelyCloseExitMenu
	 */
	struct AMatchHUD_C_CompletelyCloseExitMenu_Params
	{	};

	/**
	 * Function MatchHUD.MatchHUD_C.CloseInventoryIfOpen
	 */
	struct AMatchHUD_C_CloseInventoryIfOpen_Params
	{	};

	/**
	 * Function MatchHUD.MatchHUD_C.StartedHold
	 */
	struct AMatchHUD_C_StartedHold_Params
	{	};

	/**
	 * Function MatchHUD.MatchHUD_C.EndedHold
	 */
	struct AMatchHUD_C_EndedHold_Params
	{	};

	/**
	 * Function MatchHUD.MatchHUD_C.ExecuteUbergraph_MatchHUD
	 */
	struct AMatchHUD_C_ExecuteUbergraph_MatchHUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
