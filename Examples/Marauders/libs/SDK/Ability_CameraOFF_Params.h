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
	 * Function Ability_CameraOFF.Ability_CameraOFF_C.AlignControlRotation
	 */
	struct UAbility_CameraOFF_C_AlignControlRotation_Params
	{	};

	/**
	 * Function Ability_CameraOFF.Ability_CameraOFF_C.Trigger_CameraFade
	 */
	struct UAbility_CameraOFF_C_Trigger_CameraFade_Params
	{
	public:
		float                                                      FromAlpha;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ToAlpha;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Duration;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bHoldWhenFinished;                                       // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WLFR[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_CameraOFF.Ability_CameraOFF_C.TriggerHudInstandUIFade
	 */
	struct UAbility_CameraOFF_C_TriggerHudInstandUIFade_Params
	{
	public:
		bool                                                       Hide;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NBPU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_CameraOFF.Ability_CameraOFF_C.TriggerHudUIFade
	 */
	struct UAbility_CameraOFF_C_TriggerHudUIFade_Params
	{
	public:
		bool                                                       Hide;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q3VF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_CameraOFF.Ability_CameraOFF_C.SetUpBaseActors
	 */
	struct UAbility_CameraOFF_C_SetUpBaseActors_Params
	{
	public:
		bool                                                       Fail;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ITZT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_CameraOFF.Ability_CameraOFF_C.EventReceived_02EC29DF42C06CF71DDFAEBDE007F6D5
	 */
	struct UAbility_CameraOFF_C_EventReceived_02EC29DF42C06CF71DDFAEBDE007F6D5_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_CameraOFF.Ability_CameraOFF_C.OnCancelled_02EC29DF42C06CF71DDFAEBDE007F6D5
	 */
	struct UAbility_CameraOFF_C_OnCancelled_02EC29DF42C06CF71DDFAEBDE007F6D5_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_CameraOFF.Ability_CameraOFF_C.OnInterrupted_02EC29DF42C06CF71DDFAEBDE007F6D5
	 */
	struct UAbility_CameraOFF_C_OnInterrupted_02EC29DF42C06CF71DDFAEBDE007F6D5_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_CameraOFF.Ability_CameraOFF_C.OnBlendOut_02EC29DF42C06CF71DDFAEBDE007F6D5
	 */
	struct UAbility_CameraOFF_C_OnBlendOut_02EC29DF42C06CF71DDFAEBDE007F6D5_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_CameraOFF.Ability_CameraOFF_C.OnCompleted_02EC29DF42C06CF71DDFAEBDE007F6D5
	 */
	struct UAbility_CameraOFF_C_OnCompleted_02EC29DF42C06CF71DDFAEBDE007F6D5_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_CameraOFF.Ability_CameraOFF_C.EventReceived_919C49DE4DECEC0CB0E3F5BB3D292E39
	 */
	struct UAbility_CameraOFF_C_EventReceived_919C49DE4DECEC0CB0E3F5BB3D292E39_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_CameraOFF.Ability_CameraOFF_C.OnCancelled_919C49DE4DECEC0CB0E3F5BB3D292E39
	 */
	struct UAbility_CameraOFF_C_OnCancelled_919C49DE4DECEC0CB0E3F5BB3D292E39_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_CameraOFF.Ability_CameraOFF_C.OnInterrupted_919C49DE4DECEC0CB0E3F5BB3D292E39
	 */
	struct UAbility_CameraOFF_C_OnInterrupted_919C49DE4DECEC0CB0E3F5BB3D292E39_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_CameraOFF.Ability_CameraOFF_C.OnBlendOut_919C49DE4DECEC0CB0E3F5BB3D292E39
	 */
	struct UAbility_CameraOFF_C_OnBlendOut_919C49DE4DECEC0CB0E3F5BB3D292E39_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_CameraOFF.Ability_CameraOFF_C.OnCompleted_919C49DE4DECEC0CB0E3F5BB3D292E39
	 */
	struct UAbility_CameraOFF_C_OnCompleted_919C49DE4DECEC0CB0E3F5BB3D292E39_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_CameraOFF.Ability_CameraOFF_C.OnSync_AE80FE514CCE5623A844018F7EA72236
	 */
	struct UAbility_CameraOFF_C_OnSync_AE80FE514CCE5623A844018F7EA72236_Params
	{	};

	/**
	 * Function Ability_CameraOFF.Ability_CameraOFF_C.OnFinish_7D1B8E224CC6E2DCAAB406B52B4DAE30
	 */
	struct UAbility_CameraOFF_C_OnFinish_7D1B8E224CC6E2DCAAB406B52B4DAE30_Params
	{	};

	/**
	 * Function Ability_CameraOFF.Ability_CameraOFF_C.K2_ActivateAbility
	 */
	struct UAbility_CameraOFF_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function Ability_CameraOFF.Ability_CameraOFF_C.K2_OnEndAbility
	 */
	struct UAbility_CameraOFF_C_K2_OnEndAbility_Params
	{
	public:
		bool                                                       bWasCancelled;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_CameraOFF.Ability_CameraOFF_C.ExecuteUbergraph_Ability_CameraOFF
	 */
	struct UAbility_CameraOFF_C_ExecuteUbergraph_Ability_CameraOFF_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
