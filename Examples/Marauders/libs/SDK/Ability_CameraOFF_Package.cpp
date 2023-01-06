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
	 * 		Name   -> Function Ability_CameraOFF.Ability_CameraOFF_C.AlignControlRotation
	 * 		Flags  -> ()
	 */
	void UAbility_CameraOFF_C::AlignControlRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraOFF.Ability_CameraOFF_C.AlignControlRotation");
		
		UAbility_CameraOFF_C_AlignControlRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_CameraOFF.Ability_CameraOFF_C.Trigger_CameraFade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              FromAlpha                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ToAlpha                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bHoldWhenFinished                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_CameraOFF_C::Trigger_CameraFade(float FromAlpha, float ToAlpha, float Duration, bool bHoldWhenFinished)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraOFF.Ability_CameraOFF_C.Trigger_CameraFade");
		
		UAbility_CameraOFF_C_Trigger_CameraFade_Params params {};
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
	 * 		Name   -> Function Ability_CameraOFF.Ability_CameraOFF_C.TriggerHudInstandUIFade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Hide                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_CameraOFF_C::TriggerHudInstandUIFade(bool Hide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraOFF.Ability_CameraOFF_C.TriggerHudInstandUIFade");
		
		UAbility_CameraOFF_C_TriggerHudInstandUIFade_Params params {};
		params.Hide = Hide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_CameraOFF.Ability_CameraOFF_C.TriggerHudUIFade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Hide                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_CameraOFF_C::TriggerHudUIFade(bool Hide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraOFF.Ability_CameraOFF_C.TriggerHudUIFade");
		
		UAbility_CameraOFF_C_TriggerHudUIFade_Params params {};
		params.Hide = Hide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_CameraOFF.Ability_CameraOFF_C.SetUpBaseActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Fail                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_CameraOFF_C::SetUpBaseActors(bool* Fail)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraOFF.Ability_CameraOFF_C.SetUpBaseActors");
		
		UAbility_CameraOFF_C_SetUpBaseActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Fail != nullptr)
			*Fail = params.Fail;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_CameraOFF.Ability_CameraOFF_C.EventReceived_02EC29DF42C06CF71DDFAEBDE007F6D5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_CameraOFF_C::EventReceived_02EC29DF42C06CF71DDFAEBDE007F6D5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraOFF.Ability_CameraOFF_C.EventReceived_02EC29DF42C06CF71DDFAEBDE007F6D5");
		
		UAbility_CameraOFF_C_EventReceived_02EC29DF42C06CF71DDFAEBDE007F6D5_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_CameraOFF.Ability_CameraOFF_C.OnCancelled_02EC29DF42C06CF71DDFAEBDE007F6D5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_CameraOFF_C::OnCancelled_02EC29DF42C06CF71DDFAEBDE007F6D5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraOFF.Ability_CameraOFF_C.OnCancelled_02EC29DF42C06CF71DDFAEBDE007F6D5");
		
		UAbility_CameraOFF_C_OnCancelled_02EC29DF42C06CF71DDFAEBDE007F6D5_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_CameraOFF.Ability_CameraOFF_C.OnInterrupted_02EC29DF42C06CF71DDFAEBDE007F6D5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_CameraOFF_C::OnInterrupted_02EC29DF42C06CF71DDFAEBDE007F6D5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraOFF.Ability_CameraOFF_C.OnInterrupted_02EC29DF42C06CF71DDFAEBDE007F6D5");
		
		UAbility_CameraOFF_C_OnInterrupted_02EC29DF42C06CF71DDFAEBDE007F6D5_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_CameraOFF.Ability_CameraOFF_C.OnBlendOut_02EC29DF42C06CF71DDFAEBDE007F6D5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_CameraOFF_C::OnBlendOut_02EC29DF42C06CF71DDFAEBDE007F6D5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraOFF.Ability_CameraOFF_C.OnBlendOut_02EC29DF42C06CF71DDFAEBDE007F6D5");
		
		UAbility_CameraOFF_C_OnBlendOut_02EC29DF42C06CF71DDFAEBDE007F6D5_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_CameraOFF.Ability_CameraOFF_C.OnCompleted_02EC29DF42C06CF71DDFAEBDE007F6D5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_CameraOFF_C::OnCompleted_02EC29DF42C06CF71DDFAEBDE007F6D5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraOFF.Ability_CameraOFF_C.OnCompleted_02EC29DF42C06CF71DDFAEBDE007F6D5");
		
		UAbility_CameraOFF_C_OnCompleted_02EC29DF42C06CF71DDFAEBDE007F6D5_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_CameraOFF.Ability_CameraOFF_C.EventReceived_919C49DE4DECEC0CB0E3F5BB3D292E39
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_CameraOFF_C::EventReceived_919C49DE4DECEC0CB0E3F5BB3D292E39(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraOFF.Ability_CameraOFF_C.EventReceived_919C49DE4DECEC0CB0E3F5BB3D292E39");
		
		UAbility_CameraOFF_C_EventReceived_919C49DE4DECEC0CB0E3F5BB3D292E39_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_CameraOFF.Ability_CameraOFF_C.OnCancelled_919C49DE4DECEC0CB0E3F5BB3D292E39
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_CameraOFF_C::OnCancelled_919C49DE4DECEC0CB0E3F5BB3D292E39(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraOFF.Ability_CameraOFF_C.OnCancelled_919C49DE4DECEC0CB0E3F5BB3D292E39");
		
		UAbility_CameraOFF_C_OnCancelled_919C49DE4DECEC0CB0E3F5BB3D292E39_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_CameraOFF.Ability_CameraOFF_C.OnInterrupted_919C49DE4DECEC0CB0E3F5BB3D292E39
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_CameraOFF_C::OnInterrupted_919C49DE4DECEC0CB0E3F5BB3D292E39(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraOFF.Ability_CameraOFF_C.OnInterrupted_919C49DE4DECEC0CB0E3F5BB3D292E39");
		
		UAbility_CameraOFF_C_OnInterrupted_919C49DE4DECEC0CB0E3F5BB3D292E39_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_CameraOFF.Ability_CameraOFF_C.OnBlendOut_919C49DE4DECEC0CB0E3F5BB3D292E39
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_CameraOFF_C::OnBlendOut_919C49DE4DECEC0CB0E3F5BB3D292E39(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraOFF.Ability_CameraOFF_C.OnBlendOut_919C49DE4DECEC0CB0E3F5BB3D292E39");
		
		UAbility_CameraOFF_C_OnBlendOut_919C49DE4DECEC0CB0E3F5BB3D292E39_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_CameraOFF.Ability_CameraOFF_C.OnCompleted_919C49DE4DECEC0CB0E3F5BB3D292E39
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_CameraOFF_C::OnCompleted_919C49DE4DECEC0CB0E3F5BB3D292E39(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraOFF.Ability_CameraOFF_C.OnCompleted_919C49DE4DECEC0CB0E3F5BB3D292E39");
		
		UAbility_CameraOFF_C_OnCompleted_919C49DE4DECEC0CB0E3F5BB3D292E39_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_CameraOFF.Ability_CameraOFF_C.OnSync_AE80FE514CCE5623A844018F7EA72236
	 * 		Flags  -> ()
	 */
	void UAbility_CameraOFF_C::OnSync_AE80FE514CCE5623A844018F7EA72236()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraOFF.Ability_CameraOFF_C.OnSync_AE80FE514CCE5623A844018F7EA72236");
		
		UAbility_CameraOFF_C_OnSync_AE80FE514CCE5623A844018F7EA72236_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_CameraOFF.Ability_CameraOFF_C.OnFinish_7D1B8E224CC6E2DCAAB406B52B4DAE30
	 * 		Flags  -> ()
	 */
	void UAbility_CameraOFF_C::OnFinish_7D1B8E224CC6E2DCAAB406B52B4DAE30()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraOFF.Ability_CameraOFF_C.OnFinish_7D1B8E224CC6E2DCAAB406B52B4DAE30");
		
		UAbility_CameraOFF_C_OnFinish_7D1B8E224CC6E2DCAAB406B52B4DAE30_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_CameraOFF.Ability_CameraOFF_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UAbility_CameraOFF_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraOFF.Ability_CameraOFF_C.K2_ActivateAbility");
		
		UAbility_CameraOFF_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_CameraOFF.Ability_CameraOFF_C.K2_OnEndAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasCancelled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_CameraOFF_C::K2_OnEndAbility(bool bWasCancelled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraOFF.Ability_CameraOFF_C.K2_OnEndAbility");
		
		UAbility_CameraOFF_C_K2_OnEndAbility_Params params {};
		params.bWasCancelled = bWasCancelled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_CameraOFF.Ability_CameraOFF_C.ExecuteUbergraph_Ability_CameraOFF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_CameraOFF_C::ExecuteUbergraph_Ability_CameraOFF(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CameraOFF.Ability_CameraOFF_C.ExecuteUbergraph_Ability_CameraOFF");
		
		UAbility_CameraOFF_C_ExecuteUbergraph_Ability_CameraOFF_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_CameraOFF_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_CameraOFF_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_CameraOFF.Ability_CameraOFF_C");
		return ptr;
	}

}


