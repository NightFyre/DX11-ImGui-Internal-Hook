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
	 * 		Name   -> Function Ability_Droppod.Ability_Droppod_C.Analytics_UsedDropPod
	 * 		Flags  -> ()
	 */
	void UAbility_Droppod_C::Analytics_UsedDropPod()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Droppod.Ability_Droppod_C.Analytics_UsedDropPod");
		
		UAbility_Droppod_C_Analytics_UsedDropPod_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Droppod.Ability_Droppod_C.CloseInventoryIfOpen
	 * 		Flags  -> ()
	 */
	void UAbility_Droppod_C::CloseInventoryIfOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Droppod.Ability_Droppod_C.CloseInventoryIfOpen");
		
		UAbility_Droppod_C_CloseInventoryIfOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Droppod.Ability_Droppod_C.K2_CanActivateAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAbilityActorInfo                   ActorInfo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 * 		struct FGameplayTagContainer                       RelevantTags                                               (Parm, OutParm)
	 */
	bool UAbility_Droppod_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Droppod.Ability_Droppod_C.K2_CanActivateAbility");
		
		UAbility_Droppod_C_K2_CanActivateAbility_Params params {};
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
	 * 		Name   -> Function Ability_Droppod.Ability_Droppod_C.Trigger_FadeToBlack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              FromAlpha                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ToAlpha                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bHoldWhenFinished                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_Droppod_C::Trigger_FadeToBlack(float FromAlpha, float ToAlpha, float Duration, bool bHoldWhenFinished)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Droppod.Ability_Droppod_C.Trigger_FadeToBlack");
		
		UAbility_Droppod_C_Trigger_FadeToBlack_Params params {};
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
	 * 		Name   -> Function Ability_Droppod.Ability_Droppod_C.TriggerHudFade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Hide                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_Droppod_C::TriggerHudFade(bool Hide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Droppod.Ability_Droppod_C.TriggerHudFade");
		
		UAbility_Droppod_C_TriggerHudFade_Params params {};
		params.Hide = Hide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Droppod.Ability_Droppod_C.TurnBackOnInteractionCollision
	 * 		Flags  -> ()
	 */
	void UAbility_Droppod_C::TurnBackOnInteractionCollision()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Droppod.Ability_Droppod_C.TurnBackOnInteractionCollision");
		
		UAbility_Droppod_C_TurnBackOnInteractionCollision_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Droppod.Ability_Droppod_C.SetUpBaseActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               failed                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_Droppod_C::SetUpBaseActors(bool* failed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Droppod.Ability_Droppod_C.SetUpBaseActors");
		
		UAbility_Droppod_C_SetUpBaseActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (failed != nullptr)
			*failed = params.failed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Droppod.Ability_Droppod_C.OnTargetLocationReached_E223A6AB499A7A8B1AF5A58228FEE367
	 * 		Flags  -> ()
	 */
	void UAbility_Droppod_C::OnTargetLocationReached_E223A6AB499A7A8B1AF5A58228FEE367()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Droppod.Ability_Droppod_C.OnTargetLocationReached_E223A6AB499A7A8B1AF5A58228FEE367");
		
		UAbility_Droppod_C_OnTargetLocationReached_E223A6AB499A7A8B1AF5A58228FEE367_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Droppod.Ability_Droppod_C.OnTimedOutAndDestinationReached_3830054047D00FCDB2E0D88C40822CEA
	 * 		Flags  -> ()
	 */
	void UAbility_Droppod_C::OnTimedOutAndDestinationReached_3830054047D00FCDB2E0D88C40822CEA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Droppod.Ability_Droppod_C.OnTimedOutAndDestinationReached_3830054047D00FCDB2E0D88C40822CEA");
		
		UAbility_Droppod_C_OnTimedOutAndDestinationReached_3830054047D00FCDB2E0D88C40822CEA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Droppod.Ability_Droppod_C.OnTimedOut_3830054047D00FCDB2E0D88C40822CEA
	 * 		Flags  -> ()
	 */
	void UAbility_Droppod_C::OnTimedOut_3830054047D00FCDB2E0D88C40822CEA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Droppod.Ability_Droppod_C.OnTimedOut_3830054047D00FCDB2E0D88C40822CEA");
		
		UAbility_Droppod_C_OnTimedOut_3830054047D00FCDB2E0D88C40822CEA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Droppod.Ability_Droppod_C.OnSync_00A035E74C8708DF59208A8829D61CFB
	 * 		Flags  -> ()
	 */
	void UAbility_Droppod_C::OnSync_00A035E74C8708DF59208A8829D61CFB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Droppod.Ability_Droppod_C.OnSync_00A035E74C8708DF59208A8829D61CFB");
		
		UAbility_Droppod_C_OnSync_00A035E74C8708DF59208A8829D61CFB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Droppod.Ability_Droppod_C.OnSync_0A31F94743E1D8FDB5647FB1EFE0EDB8
	 * 		Flags  -> ()
	 */
	void UAbility_Droppod_C::OnSync_0A31F94743E1D8FDB5647FB1EFE0EDB8()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Droppod.Ability_Droppod_C.OnSync_0A31F94743E1D8FDB5647FB1EFE0EDB8");
		
		UAbility_Droppod_C_OnSync_0A31F94743E1D8FDB5647FB1EFE0EDB8_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Droppod.Ability_Droppod_C.OnFinish_2D9AC5B04B15584F646029B671420EB8
	 * 		Flags  -> ()
	 */
	void UAbility_Droppod_C::OnFinish_2D9AC5B04B15584F646029B671420EB8()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Droppod.Ability_Droppod_C.OnFinish_2D9AC5B04B15584F646029B671420EB8");
		
		UAbility_Droppod_C_OnFinish_2D9AC5B04B15584F646029B671420EB8_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Droppod.Ability_Droppod_C.OnTimedOutAndDestinationReached_D1607FA74A6ED8D267192484DC89644B
	 * 		Flags  -> ()
	 */
	void UAbility_Droppod_C::OnTimedOutAndDestinationReached_D1607FA74A6ED8D267192484DC89644B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Droppod.Ability_Droppod_C.OnTimedOutAndDestinationReached_D1607FA74A6ED8D267192484DC89644B");
		
		UAbility_Droppod_C_OnTimedOutAndDestinationReached_D1607FA74A6ED8D267192484DC89644B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Droppod.Ability_Droppod_C.OnTimedOut_D1607FA74A6ED8D267192484DC89644B
	 * 		Flags  -> ()
	 */
	void UAbility_Droppod_C::OnTimedOut_D1607FA74A6ED8D267192484DC89644B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Droppod.Ability_Droppod_C.OnTimedOut_D1607FA74A6ED8D267192484DC89644B");
		
		UAbility_Droppod_C_OnTimedOut_D1607FA74A6ED8D267192484DC89644B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Droppod.Ability_Droppod_C.OnFinish_7C07E5894D1606F9FA7C92887F8DA834
	 * 		Flags  -> ()
	 */
	void UAbility_Droppod_C::OnFinish_7C07E5894D1606F9FA7C92887F8DA834()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Droppod.Ability_Droppod_C.OnFinish_7C07E5894D1606F9FA7C92887F8DA834");
		
		UAbility_Droppod_C_OnFinish_7C07E5894D1606F9FA7C92887F8DA834_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Droppod.Ability_Droppod_C.EventReceived_71D9BA7B4988ED3BC908F5901C0F4857
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_Droppod_C::EventReceived_71D9BA7B4988ED3BC908F5901C0F4857(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Droppod.Ability_Droppod_C.EventReceived_71D9BA7B4988ED3BC908F5901C0F4857");
		
		UAbility_Droppod_C_EventReceived_71D9BA7B4988ED3BC908F5901C0F4857_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Droppod.Ability_Droppod_C.OnCancelled_71D9BA7B4988ED3BC908F5901C0F4857
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_Droppod_C::OnCancelled_71D9BA7B4988ED3BC908F5901C0F4857(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Droppod.Ability_Droppod_C.OnCancelled_71D9BA7B4988ED3BC908F5901C0F4857");
		
		UAbility_Droppod_C_OnCancelled_71D9BA7B4988ED3BC908F5901C0F4857_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Droppod.Ability_Droppod_C.OnInterrupted_71D9BA7B4988ED3BC908F5901C0F4857
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_Droppod_C::OnInterrupted_71D9BA7B4988ED3BC908F5901C0F4857(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Droppod.Ability_Droppod_C.OnInterrupted_71D9BA7B4988ED3BC908F5901C0F4857");
		
		UAbility_Droppod_C_OnInterrupted_71D9BA7B4988ED3BC908F5901C0F4857_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Droppod.Ability_Droppod_C.OnBlendOut_71D9BA7B4988ED3BC908F5901C0F4857
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_Droppod_C::OnBlendOut_71D9BA7B4988ED3BC908F5901C0F4857(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Droppod.Ability_Droppod_C.OnBlendOut_71D9BA7B4988ED3BC908F5901C0F4857");
		
		UAbility_Droppod_C_OnBlendOut_71D9BA7B4988ED3BC908F5901C0F4857_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Droppod.Ability_Droppod_C.OnCompleted_71D9BA7B4988ED3BC908F5901C0F4857
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_Droppod_C::OnCompleted_71D9BA7B4988ED3BC908F5901C0F4857(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Droppod.Ability_Droppod_C.OnCompleted_71D9BA7B4988ED3BC908F5901C0F4857");
		
		UAbility_Droppod_C_OnCompleted_71D9BA7B4988ED3BC908F5901C0F4857_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Droppod.Ability_Droppod_C.EventReceived_446521CD4516F81934C2489C07074A82
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_Droppod_C::EventReceived_446521CD4516F81934C2489C07074A82(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Droppod.Ability_Droppod_C.EventReceived_446521CD4516F81934C2489C07074A82");
		
		UAbility_Droppod_C_EventReceived_446521CD4516F81934C2489C07074A82_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Droppod.Ability_Droppod_C.OnCancelled_446521CD4516F81934C2489C07074A82
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_Droppod_C::OnCancelled_446521CD4516F81934C2489C07074A82(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Droppod.Ability_Droppod_C.OnCancelled_446521CD4516F81934C2489C07074A82");
		
		UAbility_Droppod_C_OnCancelled_446521CD4516F81934C2489C07074A82_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Droppod.Ability_Droppod_C.OnInterrupted_446521CD4516F81934C2489C07074A82
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_Droppod_C::OnInterrupted_446521CD4516F81934C2489C07074A82(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Droppod.Ability_Droppod_C.OnInterrupted_446521CD4516F81934C2489C07074A82");
		
		UAbility_Droppod_C_OnInterrupted_446521CD4516F81934C2489C07074A82_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Droppod.Ability_Droppod_C.OnBlendOut_446521CD4516F81934C2489C07074A82
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_Droppod_C::OnBlendOut_446521CD4516F81934C2489C07074A82(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Droppod.Ability_Droppod_C.OnBlendOut_446521CD4516F81934C2489C07074A82");
		
		UAbility_Droppod_C_OnBlendOut_446521CD4516F81934C2489C07074A82_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Droppod.Ability_Droppod_C.OnCompleted_446521CD4516F81934C2489C07074A82
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_Droppod_C::OnCompleted_446521CD4516F81934C2489C07074A82(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Droppod.Ability_Droppod_C.OnCompleted_446521CD4516F81934C2489C07074A82");
		
		UAbility_Droppod_C_OnCompleted_446521CD4516F81934C2489C07074A82_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Droppod.Ability_Droppod_C.OnTargetLocationReached_262B4D1C4EBFF78F126BFC9E6CD8FC11
	 * 		Flags  -> ()
	 */
	void UAbility_Droppod_C::OnTargetLocationReached_262B4D1C4EBFF78F126BFC9E6CD8FC11()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Droppod.Ability_Droppod_C.OnTargetLocationReached_262B4D1C4EBFF78F126BFC9E6CD8FC11");
		
		UAbility_Droppod_C_OnTargetLocationReached_262B4D1C4EBFF78F126BFC9E6CD8FC11_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Droppod.Ability_Droppod_C.K2_OnEndAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasCancelled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_Droppod_C::K2_OnEndAbility(bool bWasCancelled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Droppod.Ability_Droppod_C.K2_OnEndAbility");
		
		UAbility_Droppod_C_K2_OnEndAbility_Params params {};
		params.bWasCancelled = bWasCancelled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Droppod.Ability_Droppod_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UAbility_Droppod_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Droppod.Ability_Droppod_C.K2_ActivateAbility");
		
		UAbility_Droppod_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_Droppod.Ability_Droppod_C.ExecuteUbergraph_Ability_Droppod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Droppod_C::ExecuteUbergraph_Ability_Droppod(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Droppod.Ability_Droppod_C.ExecuteUbergraph_Ability_Droppod");
		
		UAbility_Droppod_C_ExecuteUbergraph_Ability_Droppod_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_Droppod_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_Droppod_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Droppod.Ability_Droppod_C");
		return ptr;
	}

}


