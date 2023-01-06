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
	 * Function Ability_DropPod_BoardStation.Ability_DropPod_BoardStation_C.SetAreaEnteringNameInHUD
	 */
	struct UAbility_DropPod_BoardStation_C_SetAreaEnteringNameInHUD_Params
	{
	public:
		class FName                                                AreaName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_DropPod_BoardStation.Ability_DropPod_BoardStation_C.TriggerFadeToBlack
	 */
	struct UAbility_DropPod_BoardStation_C_TriggerFadeToBlack_Params
	{
	public:
		float                                                      FromAlpha;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ToAlpha;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Duration;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bHoldWhenFinished;                                       // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4MNZ[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_DropPod_BoardStation.Ability_DropPod_BoardStation_C.TriggerHudFade
	 */
	struct UAbility_DropPod_BoardStation_C_TriggerHudFade_Params
	{
	public:
		bool                                                       Hide;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BL0X[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_DropPod_BoardStation.Ability_DropPod_BoardStation_C.OnTimedOutAndDestinationReached_512F646845DEB0C19FB038A3655F0758
	 */
	struct UAbility_DropPod_BoardStation_C_OnTimedOutAndDestinationReached_512F646845DEB0C19FB038A3655F0758_Params
	{	};

	/**
	 * Function Ability_DropPod_BoardStation.Ability_DropPod_BoardStation_C.OnTimedOut_512F646845DEB0C19FB038A3655F0758
	 */
	struct UAbility_DropPod_BoardStation_C_OnTimedOut_512F646845DEB0C19FB038A3655F0758_Params
	{	};

	/**
	 * Function Ability_DropPod_BoardStation.Ability_DropPod_BoardStation_C.OnTargetLocationReached_004372334EDBE57A1EAB7B851CA4FB48
	 */
	struct UAbility_DropPod_BoardStation_C_OnTargetLocationReached_004372334EDBE57A1EAB7B851CA4FB48_Params
	{	};

	/**
	 * Function Ability_DropPod_BoardStation.Ability_DropPod_BoardStation_C.OnFinish_A9E6EAD64F7459B3095D3084A75921BB
	 */
	struct UAbility_DropPod_BoardStation_C_OnFinish_A9E6EAD64F7459B3095D3084A75921BB_Params
	{	};

	/**
	 * Function Ability_DropPod_BoardStation.Ability_DropPod_BoardStation_C.OnFinish_8B325BF24B52E46D98BD959E03AB1D01
	 */
	struct UAbility_DropPod_BoardStation_C_OnFinish_8B325BF24B52E46D98BD959E03AB1D01_Params
	{	};

	/**
	 * Function Ability_DropPod_BoardStation.Ability_DropPod_BoardStation_C.OnSync_F1B6FF5F4279EB7107639E984C09593F
	 */
	struct UAbility_DropPod_BoardStation_C_OnSync_F1B6FF5F4279EB7107639E984C09593F_Params
	{	};

	/**
	 * Function Ability_DropPod_BoardStation.Ability_DropPod_BoardStation_C.K2_ActivateAbility
	 */
	struct UAbility_DropPod_BoardStation_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function Ability_DropPod_BoardStation.Ability_DropPod_BoardStation_C.K2_OnEndAbility
	 */
	struct UAbility_DropPod_BoardStation_C_K2_OnEndAbility_Params
	{
	public:
		bool                                                       bWasCancelled;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_DropPod_BoardStation.Ability_DropPod_BoardStation_C.ExecuteUbergraph_Ability_DropPod_BoardStation
	 */
	struct UAbility_DropPod_BoardStation_C_ExecuteUbergraph_Ability_DropPod_BoardStation_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
