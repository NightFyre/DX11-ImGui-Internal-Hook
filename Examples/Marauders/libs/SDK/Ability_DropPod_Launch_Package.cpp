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
	 * 		Name   -> Function Ability_DropPod_Launch.Ability_DropPod_Launch_C.TriggerHUD_Fade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Hide                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_DropPod_Launch_C::TriggerHUD_Fade(bool Hide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_DropPod_Launch.Ability_DropPod_Launch_C.TriggerHUD_Fade");
		
		UAbility_DropPod_Launch_C_TriggerHUD_Fade_Params params {};
		params.Hide = Hide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_DropPod_Launch.Ability_DropPod_Launch_C.Trigger_FadeToBlack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              FromAlpha                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ToAlpha                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bHoldWhenFinished                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_DropPod_Launch_C::Trigger_FadeToBlack(float FromAlpha, float ToAlpha, float Duration, bool bHoldWhenFinished)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_DropPod_Launch.Ability_DropPod_Launch_C.Trigger_FadeToBlack");
		
		UAbility_DropPod_Launch_C_Trigger_FadeToBlack_Params params {};
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
	 * 		Name   -> Function Ability_DropPod_Launch.Ability_DropPod_Launch_C.EventReceived_86EEC1C74D0BBA807392D194678397D5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_DropPod_Launch_C::EventReceived_86EEC1C74D0BBA807392D194678397D5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_DropPod_Launch.Ability_DropPod_Launch_C.EventReceived_86EEC1C74D0BBA807392D194678397D5");
		
		UAbility_DropPod_Launch_C_EventReceived_86EEC1C74D0BBA807392D194678397D5_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_DropPod_Launch.Ability_DropPod_Launch_C.OnCancelled_86EEC1C74D0BBA807392D194678397D5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_DropPod_Launch_C::OnCancelled_86EEC1C74D0BBA807392D194678397D5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_DropPod_Launch.Ability_DropPod_Launch_C.OnCancelled_86EEC1C74D0BBA807392D194678397D5");
		
		UAbility_DropPod_Launch_C_OnCancelled_86EEC1C74D0BBA807392D194678397D5_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_DropPod_Launch.Ability_DropPod_Launch_C.OnInterrupted_86EEC1C74D0BBA807392D194678397D5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_DropPod_Launch_C::OnInterrupted_86EEC1C74D0BBA807392D194678397D5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_DropPod_Launch.Ability_DropPod_Launch_C.OnInterrupted_86EEC1C74D0BBA807392D194678397D5");
		
		UAbility_DropPod_Launch_C_OnInterrupted_86EEC1C74D0BBA807392D194678397D5_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_DropPod_Launch.Ability_DropPod_Launch_C.OnBlendOut_86EEC1C74D0BBA807392D194678397D5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_DropPod_Launch_C::OnBlendOut_86EEC1C74D0BBA807392D194678397D5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_DropPod_Launch.Ability_DropPod_Launch_C.OnBlendOut_86EEC1C74D0BBA807392D194678397D5");
		
		UAbility_DropPod_Launch_C_OnBlendOut_86EEC1C74D0BBA807392D194678397D5_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_DropPod_Launch.Ability_DropPod_Launch_C.OnCompleted_86EEC1C74D0BBA807392D194678397D5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_DropPod_Launch_C::OnCompleted_86EEC1C74D0BBA807392D194678397D5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_DropPod_Launch.Ability_DropPod_Launch_C.OnCompleted_86EEC1C74D0BBA807392D194678397D5");
		
		UAbility_DropPod_Launch_C_OnCompleted_86EEC1C74D0BBA807392D194678397D5_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_DropPod_Launch.Ability_DropPod_Launch_C.OnFinish_D1B9EEFE4379C8676B7C8389974E5B56
	 * 		Flags  -> ()
	 */
	void UAbility_DropPod_Launch_C::OnFinish_D1B9EEFE4379C8676B7C8389974E5B56()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_DropPod_Launch.Ability_DropPod_Launch_C.OnFinish_D1B9EEFE4379C8676B7C8389974E5B56");
		
		UAbility_DropPod_Launch_C_OnFinish_D1B9EEFE4379C8676B7C8389974E5B56_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_DropPod_Launch.Ability_DropPod_Launch_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UAbility_DropPod_Launch_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_DropPod_Launch.Ability_DropPod_Launch_C.K2_ActivateAbility");
		
		UAbility_DropPod_Launch_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_DropPod_Launch.Ability_DropPod_Launch_C.K2_OnEndAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasCancelled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_DropPod_Launch_C::K2_OnEndAbility(bool bWasCancelled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_DropPod_Launch.Ability_DropPod_Launch_C.K2_OnEndAbility");
		
		UAbility_DropPod_Launch_C_K2_OnEndAbility_Params params {};
		params.bWasCancelled = bWasCancelled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_DropPod_Launch.Ability_DropPod_Launch_C.ExecuteUbergraph_Ability_DropPod_Launch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_DropPod_Launch_C::ExecuteUbergraph_Ability_DropPod_Launch(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_DropPod_Launch.Ability_DropPod_Launch_C.ExecuteUbergraph_Ability_DropPod_Launch");
		
		UAbility_DropPod_Launch_C_ExecuteUbergraph_Ability_DropPod_Launch_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_DropPod_Launch_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_DropPod_Launch_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_DropPod_Launch.Ability_DropPod_Launch_C");
		return ptr;
	}

}


