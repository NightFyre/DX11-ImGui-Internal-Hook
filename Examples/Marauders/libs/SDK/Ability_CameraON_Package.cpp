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
	 * 		Name   -> Function Ability_CameraON.Ability_CameraON_C.CloseInventoryIfOpen
	 * 		Flags  -> ()
	 */
	void UAbility_CameraON_C::CloseInventoryIfOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraON.Ability_CameraON_C.CloseInventoryIfOpen");
		
		UAbility_CameraON_C_CloseInventoryIfOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_CameraON.Ability_CameraON_C.Trigger_CameraFade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              FromAlpha                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ToAlpha                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bHoldWhenFinished                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_CameraON_C::Trigger_CameraFade(float FromAlpha, float ToAlpha, float Duration, bool bHoldWhenFinished)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraON.Ability_CameraON_C.Trigger_CameraFade");
		
		UAbility_CameraON_C_Trigger_CameraFade_Params params {};
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
	 * 		Name   -> Function Ability_CameraON.Ability_CameraON_C.K2_CanActivateAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAbilityActorInfo                   ActorInfo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 * 		struct FGameplayTagContainer                       RelevantTags                                               (Parm, OutParm)
	 */
	bool UAbility_CameraON_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraON.Ability_CameraON_C.K2_CanActivateAbility");
		
		UAbility_CameraON_C_K2_CanActivateAbility_Params params {};
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
	 * 		Name   -> Function Ability_CameraON.Ability_CameraON_C.TriggerHudFade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Hide                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_CameraON_C::TriggerHudFade(bool Hide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraON.Ability_CameraON_C.TriggerHudFade");
		
		UAbility_CameraON_C_TriggerHudFade_Params params {};
		params.Hide = Hide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_CameraON.Ability_CameraON_C.SetUpBaseActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_CameraON_C::SetUpBaseActors(bool* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraON.Ability_CameraON_C.SetUpBaseActors");
		
		UAbility_CameraON_C_SetUpBaseActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_CameraON.Ability_CameraON_C.OnTimedOutAndDestinationReached_32F0515B4AE5A3A625D965B96941AEAE
	 * 		Flags  -> ()
	 */
	void UAbility_CameraON_C::OnTimedOutAndDestinationReached_32F0515B4AE5A3A625D965B96941AEAE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraON.Ability_CameraON_C.OnTimedOutAndDestinationReached_32F0515B4AE5A3A625D965B96941AEAE");
		
		UAbility_CameraON_C_OnTimedOutAndDestinationReached_32F0515B4AE5A3A625D965B96941AEAE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_CameraON.Ability_CameraON_C.OnTimedOut_32F0515B4AE5A3A625D965B96941AEAE
	 * 		Flags  -> ()
	 */
	void UAbility_CameraON_C::OnTimedOut_32F0515B4AE5A3A625D965B96941AEAE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraON.Ability_CameraON_C.OnTimedOut_32F0515B4AE5A3A625D965B96941AEAE");
		
		UAbility_CameraON_C_OnTimedOut_32F0515B4AE5A3A625D965B96941AEAE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_CameraON.Ability_CameraON_C.OnTargetLocationReached_870CAC394F04FB9867A1DD89E3C44AE4
	 * 		Flags  -> ()
	 */
	void UAbility_CameraON_C::OnTargetLocationReached_870CAC394F04FB9867A1DD89E3C44AE4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraON.Ability_CameraON_C.OnTargetLocationReached_870CAC394F04FB9867A1DD89E3C44AE4");
		
		UAbility_CameraON_C_OnTargetLocationReached_870CAC394F04FB9867A1DD89E3C44AE4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_CameraON.Ability_CameraON_C.OnSync_2F6414B64E8DE5C2E721AF991AC025CB
	 * 		Flags  -> ()
	 */
	void UAbility_CameraON_C::OnSync_2F6414B64E8DE5C2E721AF991AC025CB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraON.Ability_CameraON_C.OnSync_2F6414B64E8DE5C2E721AF991AC025CB");
		
		UAbility_CameraON_C_OnSync_2F6414B64E8DE5C2E721AF991AC025CB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_CameraON.Ability_CameraON_C.OnSync_F848B6A6478FAC1302667BB8E5137043
	 * 		Flags  -> ()
	 */
	void UAbility_CameraON_C::OnSync_F848B6A6478FAC1302667BB8E5137043()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraON.Ability_CameraON_C.OnSync_F848B6A6478FAC1302667BB8E5137043");
		
		UAbility_CameraON_C_OnSync_F848B6A6478FAC1302667BB8E5137043_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_CameraON.Ability_CameraON_C.OnTimedOutAndDestinationReached_31BE29944A5F3A73FABA0FBC36DECE74
	 * 		Flags  -> ()
	 */
	void UAbility_CameraON_C::OnTimedOutAndDestinationReached_31BE29944A5F3A73FABA0FBC36DECE74()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraON.Ability_CameraON_C.OnTimedOutAndDestinationReached_31BE29944A5F3A73FABA0FBC36DECE74");
		
		UAbility_CameraON_C_OnTimedOutAndDestinationReached_31BE29944A5F3A73FABA0FBC36DECE74_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_CameraON.Ability_CameraON_C.OnTimedOut_31BE29944A5F3A73FABA0FBC36DECE74
	 * 		Flags  -> ()
	 */
	void UAbility_CameraON_C::OnTimedOut_31BE29944A5F3A73FABA0FBC36DECE74()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraON.Ability_CameraON_C.OnTimedOut_31BE29944A5F3A73FABA0FBC36DECE74");
		
		UAbility_CameraON_C_OnTimedOut_31BE29944A5F3A73FABA0FBC36DECE74_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_CameraON.Ability_CameraON_C.OnFinish_999CF7E543FE86CFD2322B80EBBE58E7
	 * 		Flags  -> ()
	 */
	void UAbility_CameraON_C::OnFinish_999CF7E543FE86CFD2322B80EBBE58E7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraON.Ability_CameraON_C.OnFinish_999CF7E543FE86CFD2322B80EBBE58E7");
		
		UAbility_CameraON_C_OnFinish_999CF7E543FE86CFD2322B80EBBE58E7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_CameraON.Ability_CameraON_C.EventReceived_1A04A3644D70EB872F6EC2A3DA20697A
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_CameraON_C::EventReceived_1A04A3644D70EB872F6EC2A3DA20697A(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraON.Ability_CameraON_C.EventReceived_1A04A3644D70EB872F6EC2A3DA20697A");
		
		UAbility_CameraON_C_EventReceived_1A04A3644D70EB872F6EC2A3DA20697A_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_CameraON.Ability_CameraON_C.OnCancelled_1A04A3644D70EB872F6EC2A3DA20697A
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_CameraON_C::OnCancelled_1A04A3644D70EB872F6EC2A3DA20697A(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraON.Ability_CameraON_C.OnCancelled_1A04A3644D70EB872F6EC2A3DA20697A");
		
		UAbility_CameraON_C_OnCancelled_1A04A3644D70EB872F6EC2A3DA20697A_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_CameraON.Ability_CameraON_C.OnInterrupted_1A04A3644D70EB872F6EC2A3DA20697A
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_CameraON_C::OnInterrupted_1A04A3644D70EB872F6EC2A3DA20697A(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraON.Ability_CameraON_C.OnInterrupted_1A04A3644D70EB872F6EC2A3DA20697A");
		
		UAbility_CameraON_C_OnInterrupted_1A04A3644D70EB872F6EC2A3DA20697A_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_CameraON.Ability_CameraON_C.OnBlendOut_1A04A3644D70EB872F6EC2A3DA20697A
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_CameraON_C::OnBlendOut_1A04A3644D70EB872F6EC2A3DA20697A(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraON.Ability_CameraON_C.OnBlendOut_1A04A3644D70EB872F6EC2A3DA20697A");
		
		UAbility_CameraON_C_OnBlendOut_1A04A3644D70EB872F6EC2A3DA20697A_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_CameraON.Ability_CameraON_C.OnCompleted_1A04A3644D70EB872F6EC2A3DA20697A
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_CameraON_C::OnCompleted_1A04A3644D70EB872F6EC2A3DA20697A(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraON.Ability_CameraON_C.OnCompleted_1A04A3644D70EB872F6EC2A3DA20697A");
		
		UAbility_CameraON_C_OnCompleted_1A04A3644D70EB872F6EC2A3DA20697A_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_CameraON.Ability_CameraON_C.EventReceived_5E9FDF624A5C93BB706C9CB8EB450C7F
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_CameraON_C::EventReceived_5E9FDF624A5C93BB706C9CB8EB450C7F(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraON.Ability_CameraON_C.EventReceived_5E9FDF624A5C93BB706C9CB8EB450C7F");
		
		UAbility_CameraON_C_EventReceived_5E9FDF624A5C93BB706C9CB8EB450C7F_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_CameraON.Ability_CameraON_C.OnCancelled_5E9FDF624A5C93BB706C9CB8EB450C7F
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_CameraON_C::OnCancelled_5E9FDF624A5C93BB706C9CB8EB450C7F(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraON.Ability_CameraON_C.OnCancelled_5E9FDF624A5C93BB706C9CB8EB450C7F");
		
		UAbility_CameraON_C_OnCancelled_5E9FDF624A5C93BB706C9CB8EB450C7F_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_CameraON.Ability_CameraON_C.OnInterrupted_5E9FDF624A5C93BB706C9CB8EB450C7F
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_CameraON_C::OnInterrupted_5E9FDF624A5C93BB706C9CB8EB450C7F(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraON.Ability_CameraON_C.OnInterrupted_5E9FDF624A5C93BB706C9CB8EB450C7F");
		
		UAbility_CameraON_C_OnInterrupted_5E9FDF624A5C93BB706C9CB8EB450C7F_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_CameraON.Ability_CameraON_C.OnBlendOut_5E9FDF624A5C93BB706C9CB8EB450C7F
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_CameraON_C::OnBlendOut_5E9FDF624A5C93BB706C9CB8EB450C7F(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraON.Ability_CameraON_C.OnBlendOut_5E9FDF624A5C93BB706C9CB8EB450C7F");
		
		UAbility_CameraON_C_OnBlendOut_5E9FDF624A5C93BB706C9CB8EB450C7F_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_CameraON.Ability_CameraON_C.OnCompleted_5E9FDF624A5C93BB706C9CB8EB450C7F
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_CameraON_C::OnCompleted_5E9FDF624A5C93BB706C9CB8EB450C7F(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraON.Ability_CameraON_C.OnCompleted_5E9FDF624A5C93BB706C9CB8EB450C7F");
		
		UAbility_CameraON_C_OnCompleted_5E9FDF624A5C93BB706C9CB8EB450C7F_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_CameraON.Ability_CameraON_C.OnFinish_E8BF4A904B01CB4E81FFFAAACF819857
	 * 		Flags  -> ()
	 */
	void UAbility_CameraON_C::OnFinish_E8BF4A904B01CB4E81FFFAAACF819857()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraON.Ability_CameraON_C.OnFinish_E8BF4A904B01CB4E81FFFAAACF819857");
		
		UAbility_CameraON_C_OnFinish_E8BF4A904B01CB4E81FFFAAACF819857_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_CameraON.Ability_CameraON_C.OnFinish_BCCBAAAF4B5415DA910E82A1EF3FD65C
	 * 		Flags  -> ()
	 */
	void UAbility_CameraON_C::OnFinish_BCCBAAAF4B5415DA910E82A1EF3FD65C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraON.Ability_CameraON_C.OnFinish_BCCBAAAF4B5415DA910E82A1EF3FD65C");
		
		UAbility_CameraON_C_OnFinish_BCCBAAAF4B5415DA910E82A1EF3FD65C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_CameraON.Ability_CameraON_C.OnFinish_F3C3F12B4FB1D0799E02A08CFB2E6E40
	 * 		Flags  -> ()
	 */
	void UAbility_CameraON_C::OnFinish_F3C3F12B4FB1D0799E02A08CFB2E6E40()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraON.Ability_CameraON_C.OnFinish_F3C3F12B4FB1D0799E02A08CFB2E6E40");
		
		UAbility_CameraON_C_OnFinish_F3C3F12B4FB1D0799E02A08CFB2E6E40_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_CameraON.Ability_CameraON_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UAbility_CameraON_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraON.Ability_CameraON_C.K2_ActivateAbility");
		
		UAbility_CameraON_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_CameraON.Ability_CameraON_C.K2_OnEndAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasCancelled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_CameraON_C::K2_OnEndAbility(bool bWasCancelled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraON.Ability_CameraON_C.K2_OnEndAbility");
		
		UAbility_CameraON_C_K2_OnEndAbility_Params params {};
		params.bWasCancelled = bWasCancelled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_CameraON.Ability_CameraON_C.ExecuteUbergraph_Ability_CameraON
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_CameraON_C::ExecuteUbergraph_Ability_CameraON(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraON.Ability_CameraON_C.ExecuteUbergraph_Ability_CameraON");
		
		UAbility_CameraON_C_ExecuteUbergraph_Ability_CameraON_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_CameraON_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_CameraON_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_CameraON.Ability_CameraON_C");
		return ptr;
	}

}


