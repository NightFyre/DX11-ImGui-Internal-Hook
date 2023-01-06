/**
 * Name: RaidGame
 * Version: 1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Pilot.Ability_Pilot_C.CloseInventoryIfOpen
	 * 		Flags  -> ()
	 */
	void UAbility_Pilot_C::CloseInventoryIfOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Pilot.Ability_Pilot_C.CloseInventoryIfOpen");
		
		UAbility_Pilot_C_CloseInventoryIfOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Pilot.Ability_Pilot_C.Trigger_CameraFade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              FromAlpha                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ToAlpha                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bHoldWhenFinished                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_Pilot_C::Trigger_CameraFade(float FromAlpha, float ToAlpha, float Duration, bool bHoldWhenFinished)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Pilot.Ability_Pilot_C.Trigger_CameraFade");
		
		UAbility_Pilot_C_Trigger_CameraFade_Params params {};
		params.FromAlpha = FromAlpha;
		params.ToAlpha = ToAlpha;
		params.Duration = Duration;
		params.bHoldWhenFinished = bHoldWhenFinished;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Pilot.Ability_Pilot_C.K2_CanActivateAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAbilityActorInfo                   ActorInfo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 * 		struct FGameplayTagContainer                       RelevantTags                                               (Parm, OutParm)
	 */
	bool UAbility_Pilot_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Pilot.Ability_Pilot_C.K2_CanActivateAbility");
		
		UAbility_Pilot_C_K2_CanActivateAbility_Params params {};
		params.ActorInfo = ActorInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RelevantTags != nullptr)
			*RelevantTags = params.RelevantTags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Pilot.Ability_Pilot_C.TriggerHUDfadeOut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Hide                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_Pilot_C::TriggerHUDfadeOut(bool Hide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Pilot.Ability_Pilot_C.TriggerHUDfadeOut");
		
		UAbility_Pilot_C_TriggerHUDfadeOut_Params params {};
		params.Hide = Hide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Pilot.Ability_Pilot_C.SetUpBaseActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               failed                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_Pilot_C::SetUpBaseActors(bool* failed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Pilot.Ability_Pilot_C.SetUpBaseActors");
		
		UAbility_Pilot_C_SetUpBaseActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (failed != nullptr)
			*failed = params.failed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Pilot.Ability_Pilot_C.OnSync_BC1CFFA7429F81D07725EBB565FDA119
	 * 		Flags  -> ()
	 */
	void UAbility_Pilot_C::OnSync_BC1CFFA7429F81D07725EBB565FDA119()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Pilot.Ability_Pilot_C.OnSync_BC1CFFA7429F81D07725EBB565FDA119");
		
		UAbility_Pilot_C_OnSync_BC1CFFA7429F81D07725EBB565FDA119_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Pilot.Ability_Pilot_C.OnSync_E40EECA5499C085E86C4FDB7D993BD62
	 * 		Flags  -> ()
	 */
	void UAbility_Pilot_C::OnSync_E40EECA5499C085E86C4FDB7D993BD62()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Pilot.Ability_Pilot_C.OnSync_E40EECA5499C085E86C4FDB7D993BD62");
		
		UAbility_Pilot_C_OnSync_E40EECA5499C085E86C4FDB7D993BD62_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Pilot.Ability_Pilot_C.OnTimedOutAndDestinationReached_81BB39CB404C7FBEBDCF948AA9B42AA7
	 * 		Flags  -> ()
	 */
	void UAbility_Pilot_C::OnTimedOutAndDestinationReached_81BB39CB404C7FBEBDCF948AA9B42AA7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Pilot.Ability_Pilot_C.OnTimedOutAndDestinationReached_81BB39CB404C7FBEBDCF948AA9B42AA7");
		
		UAbility_Pilot_C_OnTimedOutAndDestinationReached_81BB39CB404C7FBEBDCF948AA9B42AA7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Pilot.Ability_Pilot_C.OnTimedOut_81BB39CB404C7FBEBDCF948AA9B42AA7
	 * 		Flags  -> ()
	 */
	void UAbility_Pilot_C::OnTimedOut_81BB39CB404C7FBEBDCF948AA9B42AA7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Pilot.Ability_Pilot_C.OnTimedOut_81BB39CB404C7FBEBDCF948AA9B42AA7");
		
		UAbility_Pilot_C_OnTimedOut_81BB39CB404C7FBEBDCF948AA9B42AA7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Pilot.Ability_Pilot_C.EventReceived_25FF25254834C5C5C86EF8B7FA35B3E0
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_Pilot_C::EventReceived_25FF25254834C5C5C86EF8B7FA35B3E0(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Pilot.Ability_Pilot_C.EventReceived_25FF25254834C5C5C86EF8B7FA35B3E0");
		
		UAbility_Pilot_C_EventReceived_25FF25254834C5C5C86EF8B7FA35B3E0_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Pilot.Ability_Pilot_C.OnCancelled_25FF25254834C5C5C86EF8B7FA35B3E0
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_Pilot_C::OnCancelled_25FF25254834C5C5C86EF8B7FA35B3E0(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Pilot.Ability_Pilot_C.OnCancelled_25FF25254834C5C5C86EF8B7FA35B3E0");
		
		UAbility_Pilot_C_OnCancelled_25FF25254834C5C5C86EF8B7FA35B3E0_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Pilot.Ability_Pilot_C.OnInterrupted_25FF25254834C5C5C86EF8B7FA35B3E0
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_Pilot_C::OnInterrupted_25FF25254834C5C5C86EF8B7FA35B3E0(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Pilot.Ability_Pilot_C.OnInterrupted_25FF25254834C5C5C86EF8B7FA35B3E0");
		
		UAbility_Pilot_C_OnInterrupted_25FF25254834C5C5C86EF8B7FA35B3E0_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Pilot.Ability_Pilot_C.OnBlendOut_25FF25254834C5C5C86EF8B7FA35B3E0
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_Pilot_C::OnBlendOut_25FF25254834C5C5C86EF8B7FA35B3E0(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Pilot.Ability_Pilot_C.OnBlendOut_25FF25254834C5C5C86EF8B7FA35B3E0");
		
		UAbility_Pilot_C_OnBlendOut_25FF25254834C5C5C86EF8B7FA35B3E0_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Pilot.Ability_Pilot_C.OnCompleted_25FF25254834C5C5C86EF8B7FA35B3E0
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_Pilot_C::OnCompleted_25FF25254834C5C5C86EF8B7FA35B3E0(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Pilot.Ability_Pilot_C.OnCompleted_25FF25254834C5C5C86EF8B7FA35B3E0");
		
		UAbility_Pilot_C_OnCompleted_25FF25254834C5C5C86EF8B7FA35B3E0_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Pilot.Ability_Pilot_C.OnTargetLocationReached_BAA0A1BE4FD08FDD4AA0E8B0A8911E47
	 * 		Flags  -> ()
	 */
	void UAbility_Pilot_C::OnTargetLocationReached_BAA0A1BE4FD08FDD4AA0E8B0A8911E47()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Pilot.Ability_Pilot_C.OnTargetLocationReached_BAA0A1BE4FD08FDD4AA0E8B0A8911E47");
		
		UAbility_Pilot_C_OnTargetLocationReached_BAA0A1BE4FD08FDD4AA0E8B0A8911E47_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Pilot.Ability_Pilot_C.EventReceived_6C661FAE4B3C0E195531B1A07B77DEBF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_Pilot_C::EventReceived_6C661FAE4B3C0E195531B1A07B77DEBF(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Pilot.Ability_Pilot_C.EventReceived_6C661FAE4B3C0E195531B1A07B77DEBF");
		
		UAbility_Pilot_C_EventReceived_6C661FAE4B3C0E195531B1A07B77DEBF_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Pilot.Ability_Pilot_C.OnCancelled_6C661FAE4B3C0E195531B1A07B77DEBF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_Pilot_C::OnCancelled_6C661FAE4B3C0E195531B1A07B77DEBF(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Pilot.Ability_Pilot_C.OnCancelled_6C661FAE4B3C0E195531B1A07B77DEBF");
		
		UAbility_Pilot_C_OnCancelled_6C661FAE4B3C0E195531B1A07B77DEBF_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Pilot.Ability_Pilot_C.OnInterrupted_6C661FAE4B3C0E195531B1A07B77DEBF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_Pilot_C::OnInterrupted_6C661FAE4B3C0E195531B1A07B77DEBF(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Pilot.Ability_Pilot_C.OnInterrupted_6C661FAE4B3C0E195531B1A07B77DEBF");
		
		UAbility_Pilot_C_OnInterrupted_6C661FAE4B3C0E195531B1A07B77DEBF_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Pilot.Ability_Pilot_C.OnBlendOut_6C661FAE4B3C0E195531B1A07B77DEBF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_Pilot_C::OnBlendOut_6C661FAE4B3C0E195531B1A07B77DEBF(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Pilot.Ability_Pilot_C.OnBlendOut_6C661FAE4B3C0E195531B1A07B77DEBF");
		
		UAbility_Pilot_C_OnBlendOut_6C661FAE4B3C0E195531B1A07B77DEBF_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Pilot.Ability_Pilot_C.OnCompleted_6C661FAE4B3C0E195531B1A07B77DEBF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_Pilot_C::OnCompleted_6C661FAE4B3C0E195531B1A07B77DEBF(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Pilot.Ability_Pilot_C.OnCompleted_6C661FAE4B3C0E195531B1A07B77DEBF");
		
		UAbility_Pilot_C_OnCompleted_6C661FAE4B3C0E195531B1A07B77DEBF_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Pilot.Ability_Pilot_C.OnFinish_35F7A38E40F73F3BFA24D1A474AC4104
	 * 		Flags  -> ()
	 */
	void UAbility_Pilot_C::OnFinish_35F7A38E40F73F3BFA24D1A474AC4104()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Pilot.Ability_Pilot_C.OnFinish_35F7A38E40F73F3BFA24D1A474AC4104");
		
		UAbility_Pilot_C_OnFinish_35F7A38E40F73F3BFA24D1A474AC4104_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Pilot.Ability_Pilot_C.OnFinish_7515B0F74611DFBF6CD9858C4FA3A41D
	 * 		Flags  -> ()
	 */
	void UAbility_Pilot_C::OnFinish_7515B0F74611DFBF6CD9858C4FA3A41D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Pilot.Ability_Pilot_C.OnFinish_7515B0F74611DFBF6CD9858C4FA3A41D");
		
		UAbility_Pilot_C_OnFinish_7515B0F74611DFBF6CD9858C4FA3A41D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Pilot.Ability_Pilot_C.OnTimedOutAndDestinationReached_F98EAFFA4EB8F2B73E8AA3898C193C31
	 * 		Flags  -> ()
	 */
	void UAbility_Pilot_C::OnTimedOutAndDestinationReached_F98EAFFA4EB8F2B73E8AA3898C193C31()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Pilot.Ability_Pilot_C.OnTimedOutAndDestinationReached_F98EAFFA4EB8F2B73E8AA3898C193C31");
		
		UAbility_Pilot_C_OnTimedOutAndDestinationReached_F98EAFFA4EB8F2B73E8AA3898C193C31_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Pilot.Ability_Pilot_C.OnTimedOut_F98EAFFA4EB8F2B73E8AA3898C193C31
	 * 		Flags  -> ()
	 */
	void UAbility_Pilot_C::OnTimedOut_F98EAFFA4EB8F2B73E8AA3898C193C31()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Pilot.Ability_Pilot_C.OnTimedOut_F98EAFFA4EB8F2B73E8AA3898C193C31");
		
		UAbility_Pilot_C_OnTimedOut_F98EAFFA4EB8F2B73E8AA3898C193C31_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Pilot.Ability_Pilot_C.OnFinish_424362CC44B952BC93648AB72DF8D170
	 * 		Flags  -> ()
	 */
	void UAbility_Pilot_C::OnFinish_424362CC44B952BC93648AB72DF8D170()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Pilot.Ability_Pilot_C.OnFinish_424362CC44B952BC93648AB72DF8D170");
		
		UAbility_Pilot_C_OnFinish_424362CC44B952BC93648AB72DF8D170_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Pilot.Ability_Pilot_C.OnFinish_9E6D3C174D4E65C228999AAE1552C474
	 * 		Flags  -> ()
	 */
	void UAbility_Pilot_C::OnFinish_9E6D3C174D4E65C228999AAE1552C474()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Pilot.Ability_Pilot_C.OnFinish_9E6D3C174D4E65C228999AAE1552C474");
		
		UAbility_Pilot_C_OnFinish_9E6D3C174D4E65C228999AAE1552C474_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Pilot.Ability_Pilot_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UAbility_Pilot_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Pilot.Ability_Pilot_C.K2_ActivateAbility");
		
		UAbility_Pilot_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Pilot.Ability_Pilot_C.K2_OnEndAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasCancelled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_Pilot_C::K2_OnEndAbility(bool bWasCancelled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Pilot.Ability_Pilot_C.K2_OnEndAbility");
		
		UAbility_Pilot_C_K2_OnEndAbility_Params params {};
		params.bWasCancelled = bWasCancelled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Pilot.Ability_Pilot_C.ExecuteUbergraph_Ability_Pilot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Pilot_C::ExecuteUbergraph_Ability_Pilot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Pilot.Ability_Pilot_C.ExecuteUbergraph_Ability_Pilot");
		
		UAbility_Pilot_C_ExecuteUbergraph_Ability_Pilot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_Pilot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_Pilot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Pilot.Ability_Pilot_C");
		return ptr;
	}

}


