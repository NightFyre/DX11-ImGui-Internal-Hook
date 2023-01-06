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
	 * Function Ability_CameraON.Ability_CameraON_C.CloseInventoryIfOpen
	 */
	struct UAbility_CameraON_C_CloseInventoryIfOpen_Params
	{	};

	/**
	 * Function Ability_CameraON.Ability_CameraON_C.Trigger_CameraFade
	 */
	struct UAbility_CameraON_C_Trigger_CameraFade_Params
	{
	public:
		float                                                      FromAlpha;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ToAlpha;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Duration;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bHoldWhenFinished;                                       // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H5R0[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_CameraON.Ability_CameraON_C.K2_CanActivateAbility
	 */
	struct UAbility_CameraON_C_K2_CanActivateAbility_Params
	{
	public:
		struct FGameplayAbilityActorInfo                           ActorInfo;                                               // 0x0000(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
		struct FGameplayTagContainer                               RelevantTags;                                            // 0x0048(0x0020)  (Parm, OutParm)
		bool                                                       ReturnValue;                                             // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HV89[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_CameraON.Ability_CameraON_C.TriggerHudFade
	 */
	struct UAbility_CameraON_C_TriggerHudFade_Params
	{
	public:
		bool                                                       Hide;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MG1L[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_CameraON.Ability_CameraON_C.SetUpBaseActors
	 */
	struct UAbility_CameraON_C_SetUpBaseActors_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KOIC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_CameraON.Ability_CameraON_C.OnTimedOutAndDestinationReached_32F0515B4AE5A3A625D965B96941AEAE
	 */
	struct UAbility_CameraON_C_OnTimedOutAndDestinationReached_32F0515B4AE5A3A625D965B96941AEAE_Params
	{	};

	/**
	 * Function Ability_CameraON.Ability_CameraON_C.OnTimedOut_32F0515B4AE5A3A625D965B96941AEAE
	 */
	struct UAbility_CameraON_C_OnTimedOut_32F0515B4AE5A3A625D965B96941AEAE_Params
	{	};

	/**
	 * Function Ability_CameraON.Ability_CameraON_C.OnTargetLocationReached_870CAC394F04FB9867A1DD89E3C44AE4
	 */
	struct UAbility_CameraON_C_OnTargetLocationReached_870CAC394F04FB9867A1DD89E3C44AE4_Params
	{	};

	/**
	 * Function Ability_CameraON.Ability_CameraON_C.OnSync_2F6414B64E8DE5C2E721AF991AC025CB
	 */
	struct UAbility_CameraON_C_OnSync_2F6414B64E8DE5C2E721AF991AC025CB_Params
	{	};

	/**
	 * Function Ability_CameraON.Ability_CameraON_C.OnSync_F848B6A6478FAC1302667BB8E5137043
	 */
	struct UAbility_CameraON_C_OnSync_F848B6A6478FAC1302667BB8E5137043_Params
	{	};

	/**
	 * Function Ability_CameraON.Ability_CameraON_C.OnTimedOutAndDestinationReached_31BE29944A5F3A73FABA0FBC36DECE74
	 */
	struct UAbility_CameraON_C_OnTimedOutAndDestinationReached_31BE29944A5F3A73FABA0FBC36DECE74_Params
	{	};

	/**
	 * Function Ability_CameraON.Ability_CameraON_C.OnTimedOut_31BE29944A5F3A73FABA0FBC36DECE74
	 */
	struct UAbility_CameraON_C_OnTimedOut_31BE29944A5F3A73FABA0FBC36DECE74_Params
	{	};

	/**
	 * Function Ability_CameraON.Ability_CameraON_C.OnFinish_999CF7E543FE86CFD2322B80EBBE58E7
	 */
	struct UAbility_CameraON_C_OnFinish_999CF7E543FE86CFD2322B80EBBE58E7_Params
	{	};

	/**
	 * Function Ability_CameraON.Ability_CameraON_C.EventReceived_1A04A3644D70EB872F6EC2A3DA20697A
	 */
	struct UAbility_CameraON_C_EventReceived_1A04A3644D70EB872F6EC2A3DA20697A_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_CameraON.Ability_CameraON_C.OnCancelled_1A04A3644D70EB872F6EC2A3DA20697A
	 */
	struct UAbility_CameraON_C_OnCancelled_1A04A3644D70EB872F6EC2A3DA20697A_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_CameraON.Ability_CameraON_C.OnInterrupted_1A04A3644D70EB872F6EC2A3DA20697A
	 */
	struct UAbility_CameraON_C_OnInterrupted_1A04A3644D70EB872F6EC2A3DA20697A_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_CameraON.Ability_CameraON_C.OnBlendOut_1A04A3644D70EB872F6EC2A3DA20697A
	 */
	struct UAbility_CameraON_C_OnBlendOut_1A04A3644D70EB872F6EC2A3DA20697A_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_CameraON.Ability_CameraON_C.OnCompleted_1A04A3644D70EB872F6EC2A3DA20697A
	 */
	struct UAbility_CameraON_C_OnCompleted_1A04A3644D70EB872F6EC2A3DA20697A_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_CameraON.Ability_CameraON_C.EventReceived_5E9FDF624A5C93BB706C9CB8EB450C7F
	 */
	struct UAbility_CameraON_C_EventReceived_5E9FDF624A5C93BB706C9CB8EB450C7F_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_CameraON.Ability_CameraON_C.OnCancelled_5E9FDF624A5C93BB706C9CB8EB450C7F
	 */
	struct UAbility_CameraON_C_OnCancelled_5E9FDF624A5C93BB706C9CB8EB450C7F_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_CameraON.Ability_CameraON_C.OnInterrupted_5E9FDF624A5C93BB706C9CB8EB450C7F
	 */
	struct UAbility_CameraON_C_OnInterrupted_5E9FDF624A5C93BB706C9CB8EB450C7F_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_CameraON.Ability_CameraON_C.OnBlendOut_5E9FDF624A5C93BB706C9CB8EB450C7F
	 */
	struct UAbility_CameraON_C_OnBlendOut_5E9FDF624A5C93BB706C9CB8EB450C7F_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_CameraON.Ability_CameraON_C.OnCompleted_5E9FDF624A5C93BB706C9CB8EB450C7F
	 */
	struct UAbility_CameraON_C_OnCompleted_5E9FDF624A5C93BB706C9CB8EB450C7F_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Ability_CameraON.Ability_CameraON_C.OnFinish_E8BF4A904B01CB4E81FFFAAACF819857
	 */
	struct UAbility_CameraON_C_OnFinish_E8BF4A904B01CB4E81FFFAAACF819857_Params
	{	};

	/**
	 * Function Ability_CameraON.Ability_CameraON_C.OnFinish_BCCBAAAF4B5415DA910E82A1EF3FD65C
	 */
	struct UAbility_CameraON_C_OnFinish_BCCBAAAF4B5415DA910E82A1EF3FD65C_Params
	{	};

	/**
	 * Function Ability_CameraON.Ability_CameraON_C.OnFinish_F3C3F12B4FB1D0799E02A08CFB2E6E40
	 */
	struct UAbility_CameraON_C_OnFinish_F3C3F12B4FB1D0799E02A08CFB2E6E40_Params
	{	};

	/**
	 * Function Ability_CameraON.Ability_CameraON_C.K2_ActivateAbility
	 */
	struct UAbility_CameraON_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function Ability_CameraON.Ability_CameraON_C.K2_OnEndAbility
	 */
	struct UAbility_CameraON_C_K2_OnEndAbility_Params
	{
	public:
		bool                                                       bWasCancelled;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_CameraON.Ability_CameraON_C.ExecuteUbergraph_Ability_CameraON
	 */
	struct UAbility_CameraON_C_ExecuteUbergraph_Ability_CameraON_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
