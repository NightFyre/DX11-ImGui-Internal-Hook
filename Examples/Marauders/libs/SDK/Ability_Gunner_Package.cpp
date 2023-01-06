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
	 * 		Name   -> Function Ability_Gunner.Ability_Gunner_C.CloseInventoryIfOpen
	 * 		Flags  -> ()
	 */
	void UAbility_Gunner_C::CloseInventoryIfOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner.Ability_Gunner_C.CloseInventoryIfOpen");
		
		UAbility_Gunner_C_CloseInventoryIfOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Gunner.Ability_Gunner_C.Trigger_CameraFade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              FromAlpha                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ToAlpha                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bHoldWhenFinished                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_Gunner_C::Trigger_CameraFade(float FromAlpha, float ToAlpha, float Duration, bool bHoldWhenFinished)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner.Ability_Gunner_C.Trigger_CameraFade");
		
		UAbility_Gunner_C_Trigger_CameraFade_Params params {};
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
	 * 		Name   -> Function Ability_Gunner.Ability_Gunner_C.K2_CanActivateAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAbilityActorInfo                   ActorInfo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 * 		struct FGameplayTagContainer                       RelevantTags                                               (Parm, OutParm)
	 */
	bool UAbility_Gunner_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner.Ability_Gunner_C.K2_CanActivateAbility");
		
		UAbility_Gunner_C_K2_CanActivateAbility_Params params {};
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
	 * 		Name   -> Function Ability_Gunner.Ability_Gunner_C.TriggerHudFade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Hide                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_Gunner_C::TriggerHudFade(bool Hide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner.Ability_Gunner_C.TriggerHudFade");
		
		UAbility_Gunner_C_TriggerHudFade_Params params {};
		params.Hide = Hide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Gunner.Ability_Gunner_C.SetUpBaseActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_Gunner_C::SetUpBaseActors(bool* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner.Ability_Gunner_C.SetUpBaseActors");
		
		UAbility_Gunner_C_SetUpBaseActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Gunner.Ability_Gunner_C.OnSync_31631862425308A0DC0255B378883A75
	 * 		Flags  -> ()
	 */
	void UAbility_Gunner_C::OnSync_31631862425308A0DC0255B378883A75()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner.Ability_Gunner_C.OnSync_31631862425308A0DC0255B378883A75");
		
		UAbility_Gunner_C_OnSync_31631862425308A0DC0255B378883A75_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Gunner.Ability_Gunner_C.OnSync_40F1C9104B9227C05D971DAB001B1C07
	 * 		Flags  -> ()
	 */
	void UAbility_Gunner_C::OnSync_40F1C9104B9227C05D971DAB001B1C07()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner.Ability_Gunner_C.OnSync_40F1C9104B9227C05D971DAB001B1C07");
		
		UAbility_Gunner_C_OnSync_40F1C9104B9227C05D971DAB001B1C07_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Gunner.Ability_Gunner_C.OnTimedOutAndDestinationReached_3566C3414D4DB957A0AB70970F31C741
	 * 		Flags  -> ()
	 */
	void UAbility_Gunner_C::OnTimedOutAndDestinationReached_3566C3414D4DB957A0AB70970F31C741()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner.Ability_Gunner_C.OnTimedOutAndDestinationReached_3566C3414D4DB957A0AB70970F31C741");
		
		UAbility_Gunner_C_OnTimedOutAndDestinationReached_3566C3414D4DB957A0AB70970F31C741_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Gunner.Ability_Gunner_C.OnTimedOut_3566C3414D4DB957A0AB70970F31C741
	 * 		Flags  -> ()
	 */
	void UAbility_Gunner_C::OnTimedOut_3566C3414D4DB957A0AB70970F31C741()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner.Ability_Gunner_C.OnTimedOut_3566C3414D4DB957A0AB70970F31C741");
		
		UAbility_Gunner_C_OnTimedOut_3566C3414D4DB957A0AB70970F31C741_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Gunner.Ability_Gunner_C.OnTimedOutAndDestinationReached_37A351EF4A3E920F4AE2B9AF491E4974
	 * 		Flags  -> ()
	 */
	void UAbility_Gunner_C::OnTimedOutAndDestinationReached_37A351EF4A3E920F4AE2B9AF491E4974()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner.Ability_Gunner_C.OnTimedOutAndDestinationReached_37A351EF4A3E920F4AE2B9AF491E4974");
		
		UAbility_Gunner_C_OnTimedOutAndDestinationReached_37A351EF4A3E920F4AE2B9AF491E4974_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Gunner.Ability_Gunner_C.OnTimedOut_37A351EF4A3E920F4AE2B9AF491E4974
	 * 		Flags  -> ()
	 */
	void UAbility_Gunner_C::OnTimedOut_37A351EF4A3E920F4AE2B9AF491E4974()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner.Ability_Gunner_C.OnTimedOut_37A351EF4A3E920F4AE2B9AF491E4974");
		
		UAbility_Gunner_C_OnTimedOut_37A351EF4A3E920F4AE2B9AF491E4974_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Gunner.Ability_Gunner_C.EventReceived_246C1C784F82EFC688D648ACA332E4E9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_Gunner_C::EventReceived_246C1C784F82EFC688D648ACA332E4E9(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner.Ability_Gunner_C.EventReceived_246C1C784F82EFC688D648ACA332E4E9");
		
		UAbility_Gunner_C_EventReceived_246C1C784F82EFC688D648ACA332E4E9_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Gunner.Ability_Gunner_C.OnCancelled_246C1C784F82EFC688D648ACA332E4E9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_Gunner_C::OnCancelled_246C1C784F82EFC688D648ACA332E4E9(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner.Ability_Gunner_C.OnCancelled_246C1C784F82EFC688D648ACA332E4E9");
		
		UAbility_Gunner_C_OnCancelled_246C1C784F82EFC688D648ACA332E4E9_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Gunner.Ability_Gunner_C.OnInterrupted_246C1C784F82EFC688D648ACA332E4E9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_Gunner_C::OnInterrupted_246C1C784F82EFC688D648ACA332E4E9(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner.Ability_Gunner_C.OnInterrupted_246C1C784F82EFC688D648ACA332E4E9");
		
		UAbility_Gunner_C_OnInterrupted_246C1C784F82EFC688D648ACA332E4E9_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Gunner.Ability_Gunner_C.OnBlendOut_246C1C784F82EFC688D648ACA332E4E9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_Gunner_C::OnBlendOut_246C1C784F82EFC688D648ACA332E4E9(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner.Ability_Gunner_C.OnBlendOut_246C1C784F82EFC688D648ACA332E4E9");
		
		UAbility_Gunner_C_OnBlendOut_246C1C784F82EFC688D648ACA332E4E9_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Gunner.Ability_Gunner_C.OnCompleted_246C1C784F82EFC688D648ACA332E4E9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_Gunner_C::OnCompleted_246C1C784F82EFC688D648ACA332E4E9(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner.Ability_Gunner_C.OnCompleted_246C1C784F82EFC688D648ACA332E4E9");
		
		UAbility_Gunner_C_OnCompleted_246C1C784F82EFC688D648ACA332E4E9_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Gunner.Ability_Gunner_C.EventReceived_C232B99945EC6CD2F9AC2B9B424FC7FC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_Gunner_C::EventReceived_C232B99945EC6CD2F9AC2B9B424FC7FC(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner.Ability_Gunner_C.EventReceived_C232B99945EC6CD2F9AC2B9B424FC7FC");
		
		UAbility_Gunner_C_EventReceived_C232B99945EC6CD2F9AC2B9B424FC7FC_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Gunner.Ability_Gunner_C.OnCancelled_C232B99945EC6CD2F9AC2B9B424FC7FC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_Gunner_C::OnCancelled_C232B99945EC6CD2F9AC2B9B424FC7FC(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner.Ability_Gunner_C.OnCancelled_C232B99945EC6CD2F9AC2B9B424FC7FC");
		
		UAbility_Gunner_C_OnCancelled_C232B99945EC6CD2F9AC2B9B424FC7FC_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Gunner.Ability_Gunner_C.OnInterrupted_C232B99945EC6CD2F9AC2B9B424FC7FC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_Gunner_C::OnInterrupted_C232B99945EC6CD2F9AC2B9B424FC7FC(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner.Ability_Gunner_C.OnInterrupted_C232B99945EC6CD2F9AC2B9B424FC7FC");
		
		UAbility_Gunner_C_OnInterrupted_C232B99945EC6CD2F9AC2B9B424FC7FC_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Gunner.Ability_Gunner_C.OnBlendOut_C232B99945EC6CD2F9AC2B9B424FC7FC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_Gunner_C::OnBlendOut_C232B99945EC6CD2F9AC2B9B424FC7FC(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner.Ability_Gunner_C.OnBlendOut_C232B99945EC6CD2F9AC2B9B424FC7FC");
		
		UAbility_Gunner_C_OnBlendOut_C232B99945EC6CD2F9AC2B9B424FC7FC_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Gunner.Ability_Gunner_C.OnCompleted_C232B99945EC6CD2F9AC2B9B424FC7FC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_Gunner_C::OnCompleted_C232B99945EC6CD2F9AC2B9B424FC7FC(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner.Ability_Gunner_C.OnCompleted_C232B99945EC6CD2F9AC2B9B424FC7FC");
		
		UAbility_Gunner_C_OnCompleted_C232B99945EC6CD2F9AC2B9B424FC7FC_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Gunner.Ability_Gunner_C.OnFinish_343182354082AEEAFF31568A1F88BB38
	 * 		Flags  -> ()
	 */
	void UAbility_Gunner_C::OnFinish_343182354082AEEAFF31568A1F88BB38()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner.Ability_Gunner_C.OnFinish_343182354082AEEAFF31568A1F88BB38");
		
		UAbility_Gunner_C_OnFinish_343182354082AEEAFF31568A1F88BB38_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Gunner.Ability_Gunner_C.OnFinish_D0980CD14CF03D166382FFA091E167D7
	 * 		Flags  -> ()
	 */
	void UAbility_Gunner_C::OnFinish_D0980CD14CF03D166382FFA091E167D7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner.Ability_Gunner_C.OnFinish_D0980CD14CF03D166382FFA091E167D7");
		
		UAbility_Gunner_C_OnFinish_D0980CD14CF03D166382FFA091E167D7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Gunner.Ability_Gunner_C.OnFinish_F537D4154B7A6E0F34E6B08F1B3BACB7
	 * 		Flags  -> ()
	 */
	void UAbility_Gunner_C::OnFinish_F537D4154B7A6E0F34E6B08F1B3BACB7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner.Ability_Gunner_C.OnFinish_F537D4154B7A6E0F34E6B08F1B3BACB7");
		
		UAbility_Gunner_C_OnFinish_F537D4154B7A6E0F34E6B08F1B3BACB7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Gunner.Ability_Gunner_C.OnFinish_8DFA5C274D16403C195F64B33C38D6D9
	 * 		Flags  -> ()
	 */
	void UAbility_Gunner_C::OnFinish_8DFA5C274D16403C195F64B33C38D6D9()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner.Ability_Gunner_C.OnFinish_8DFA5C274D16403C195F64B33C38D6D9");
		
		UAbility_Gunner_C_OnFinish_8DFA5C274D16403C195F64B33C38D6D9_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Gunner.Ability_Gunner_C.OnTargetLocationReached_7A38C7E341F2617FDD0E97B172486612
	 * 		Flags  -> ()
	 */
	void UAbility_Gunner_C::OnTargetLocationReached_7A38C7E341F2617FDD0E97B172486612()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner.Ability_Gunner_C.OnTargetLocationReached_7A38C7E341F2617FDD0E97B172486612");
		
		UAbility_Gunner_C_OnTargetLocationReached_7A38C7E341F2617FDD0E97B172486612_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Gunner.Ability_Gunner_C.K2_OnEndAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasCancelled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_Gunner_C::K2_OnEndAbility(bool bWasCancelled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner.Ability_Gunner_C.K2_OnEndAbility");
		
		UAbility_Gunner_C_K2_OnEndAbility_Params params {};
		params.bWasCancelled = bWasCancelled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Gunner.Ability_Gunner_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UAbility_Gunner_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner.Ability_Gunner_C.K2_ActivateAbility");
		
		UAbility_Gunner_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Gunner.Ability_Gunner_C.ExecuteUbergraph_Ability_Gunner
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Gunner_C::ExecuteUbergraph_Ability_Gunner(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner.Ability_Gunner_C.ExecuteUbergraph_Ability_Gunner");
		
		UAbility_Gunner_C_ExecuteUbergraph_Ability_Gunner_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_Gunner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_Gunner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Gunner.Ability_Gunner_C");
		return ptr;
	}

}


