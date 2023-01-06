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
	 * Function Ability_Frigate_BoardStation.Ability_Frigate_BoardStation_C.SetAreaEnteringNameInHUD
	 */
	struct UAbility_Frigate_BoardStation_C_SetAreaEnteringNameInHUD_Params
	{
	public:
		class FName                                                AreaName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_Frigate_BoardStation.Ability_Frigate_BoardStation_C.TriggerFadeToBlack
	 */
	struct UAbility_Frigate_BoardStation_C_TriggerFadeToBlack_Params
	{
	public:
		float                                                      FromAlpha;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ToAlpha;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Duration;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bHoldWhenFinished;                                       // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HAE0[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_Frigate_BoardStation.Ability_Frigate_BoardStation_C.TriggerHudFade
	 */
	struct UAbility_Frigate_BoardStation_C_TriggerHudFade_Params
	{
	public:
		bool                                                       Hide;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4MYZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_Frigate_BoardStation.Ability_Frigate_BoardStation_C.OnTargetLocationReached_762C00C14E5E793715B3AB8A44DE2874
	 */
	struct UAbility_Frigate_BoardStation_C_OnTargetLocationReached_762C00C14E5E793715B3AB8A44DE2874_Params
	{	};

	/**
	 * Function Ability_Frigate_BoardStation.Ability_Frigate_BoardStation_C.OnFinish_734400844FF4F53D9C21258DBA9378DA
	 */
	struct UAbility_Frigate_BoardStation_C_OnFinish_734400844FF4F53D9C21258DBA9378DA_Params
	{	};

	/**
	 * Function Ability_Frigate_BoardStation.Ability_Frigate_BoardStation_C.OnSync_598D8C174778802182186D86370C04DC
	 */
	struct UAbility_Frigate_BoardStation_C_OnSync_598D8C174778802182186D86370C04DC_Params
	{	};

	/**
	 * Function Ability_Frigate_BoardStation.Ability_Frigate_BoardStation_C.OnFinish_48B5AF244282B4801DD13EB0075CE4D6
	 */
	struct UAbility_Frigate_BoardStation_C_OnFinish_48B5AF244282B4801DD13EB0075CE4D6_Params
	{	};

	/**
	 * Function Ability_Frigate_BoardStation.Ability_Frigate_BoardStation_C.OnTimedOutAndDestinationReached_317FF0D34187C62BC22D05B801A3AE3C
	 */
	struct UAbility_Frigate_BoardStation_C_OnTimedOutAndDestinationReached_317FF0D34187C62BC22D05B801A3AE3C_Params
	{	};

	/**
	 * Function Ability_Frigate_BoardStation.Ability_Frigate_BoardStation_C.OnTimedOut_317FF0D34187C62BC22D05B801A3AE3C
	 */
	struct UAbility_Frigate_BoardStation_C_OnTimedOut_317FF0D34187C62BC22D05B801A3AE3C_Params
	{	};

	/**
	 * Function Ability_Frigate_BoardStation.Ability_Frigate_BoardStation_C.K2_OnEndAbility
	 */
	struct UAbility_Frigate_BoardStation_C_K2_OnEndAbility_Params
	{
	public:
		bool                                                       bWasCancelled;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_Frigate_BoardStation.Ability_Frigate_BoardStation_C.K2_ActivateAbility
	 */
	struct UAbility_Frigate_BoardStation_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function Ability_Frigate_BoardStation.Ability_Frigate_BoardStation_C.ExecuteUbergraph_Ability_Frigate_BoardStation
	 */
	struct UAbility_Frigate_BoardStation_C_ExecuteUbergraph_Ability_Frigate_BoardStation_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4NDQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
