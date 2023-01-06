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
	 * 		Name   -> Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.AlignControlRotation
	 * 		Flags  -> ()
	 */
	void UAbility_GunnerOffChair_C::AlignControlRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.AlignControlRotation");
		
		UAbility_GunnerOffChair_C_AlignControlRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.Trigger_FadeToBlack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              FromAlpha                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ToAlpha                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bHoldWhenFinished                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_GunnerOffChair_C::Trigger_FadeToBlack(float FromAlpha, float ToAlpha, float Duration, bool bHoldWhenFinished)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.Trigger_FadeToBlack");
		
		UAbility_GunnerOffChair_C_Trigger_FadeToBlack_Params params {};
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
	 * 		Name   -> Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.TriggerHudInstandUIFade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Hide                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_GunnerOffChair_C::TriggerHudInstandUIFade(bool Hide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.TriggerHudInstandUIFade");
		
		UAbility_GunnerOffChair_C_TriggerHudInstandUIFade_Params params {};
		params.Hide = Hide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.TriggerHudUIFade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Hide                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_GunnerOffChair_C::TriggerHudUIFade(bool Hide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.TriggerHudUIFade");
		
		UAbility_GunnerOffChair_C_TriggerHudUIFade_Params params {};
		params.Hide = Hide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.SetUpBaseActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Fail                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_GunnerOffChair_C::SetUpBaseActors(bool* Fail)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.SetUpBaseActors");
		
		UAbility_GunnerOffChair_C_SetUpBaseActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Fail != nullptr)
			*Fail = params.Fail;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.OnSync_5941F9DA413A0B85EDDD188A924EBDCF
	 * 		Flags  -> ()
	 */
	void UAbility_GunnerOffChair_C::OnSync_5941F9DA413A0B85EDDD188A924EBDCF()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.OnSync_5941F9DA413A0B85EDDD188A924EBDCF");
		
		UAbility_GunnerOffChair_C_OnSync_5941F9DA413A0B85EDDD188A924EBDCF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.EventReceived_72D673404FF40B4374E1F9AF7F2B85FA
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_GunnerOffChair_C::EventReceived_72D673404FF40B4374E1F9AF7F2B85FA(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.EventReceived_72D673404FF40B4374E1F9AF7F2B85FA");
		
		UAbility_GunnerOffChair_C_EventReceived_72D673404FF40B4374E1F9AF7F2B85FA_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.OnCancelled_72D673404FF40B4374E1F9AF7F2B85FA
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_GunnerOffChair_C::OnCancelled_72D673404FF40B4374E1F9AF7F2B85FA(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.OnCancelled_72D673404FF40B4374E1F9AF7F2B85FA");
		
		UAbility_GunnerOffChair_C_OnCancelled_72D673404FF40B4374E1F9AF7F2B85FA_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.OnInterrupted_72D673404FF40B4374E1F9AF7F2B85FA
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_GunnerOffChair_C::OnInterrupted_72D673404FF40B4374E1F9AF7F2B85FA(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.OnInterrupted_72D673404FF40B4374E1F9AF7F2B85FA");
		
		UAbility_GunnerOffChair_C_OnInterrupted_72D673404FF40B4374E1F9AF7F2B85FA_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.OnBlendOut_72D673404FF40B4374E1F9AF7F2B85FA
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_GunnerOffChair_C::OnBlendOut_72D673404FF40B4374E1F9AF7F2B85FA(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.OnBlendOut_72D673404FF40B4374E1F9AF7F2B85FA");
		
		UAbility_GunnerOffChair_C_OnBlendOut_72D673404FF40B4374E1F9AF7F2B85FA_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.OnCompleted_72D673404FF40B4374E1F9AF7F2B85FA
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_GunnerOffChair_C::OnCompleted_72D673404FF40B4374E1F9AF7F2B85FA(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.OnCompleted_72D673404FF40B4374E1F9AF7F2B85FA");
		
		UAbility_GunnerOffChair_C_OnCompleted_72D673404FF40B4374E1F9AF7F2B85FA_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.EventReceived_89818B24431A8F4E8652A4A821CC0E90
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_GunnerOffChair_C::EventReceived_89818B24431A8F4E8652A4A821CC0E90(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.EventReceived_89818B24431A8F4E8652A4A821CC0E90");
		
		UAbility_GunnerOffChair_C_EventReceived_89818B24431A8F4E8652A4A821CC0E90_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.OnCancelled_89818B24431A8F4E8652A4A821CC0E90
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_GunnerOffChair_C::OnCancelled_89818B24431A8F4E8652A4A821CC0E90(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.OnCancelled_89818B24431A8F4E8652A4A821CC0E90");
		
		UAbility_GunnerOffChair_C_OnCancelled_89818B24431A8F4E8652A4A821CC0E90_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.OnInterrupted_89818B24431A8F4E8652A4A821CC0E90
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_GunnerOffChair_C::OnInterrupted_89818B24431A8F4E8652A4A821CC0E90(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.OnInterrupted_89818B24431A8F4E8652A4A821CC0E90");
		
		UAbility_GunnerOffChair_C_OnInterrupted_89818B24431A8F4E8652A4A821CC0E90_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.OnBlendOut_89818B24431A8F4E8652A4A821CC0E90
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_GunnerOffChair_C::OnBlendOut_89818B24431A8F4E8652A4A821CC0E90(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.OnBlendOut_89818B24431A8F4E8652A4A821CC0E90");
		
		UAbility_GunnerOffChair_C_OnBlendOut_89818B24431A8F4E8652A4A821CC0E90_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.OnCompleted_89818B24431A8F4E8652A4A821CC0E90
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_GunnerOffChair_C::OnCompleted_89818B24431A8F4E8652A4A821CC0E90(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.OnCompleted_89818B24431A8F4E8652A4A821CC0E90");
		
		UAbility_GunnerOffChair_C_OnCompleted_89818B24431A8F4E8652A4A821CC0E90_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.OnFinish_604AC427435B40CDA7BF22A0AD45E4FF
	 * 		Flags  -> ()
	 */
	void UAbility_GunnerOffChair_C::OnFinish_604AC427435B40CDA7BF22A0AD45E4FF()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.OnFinish_604AC427435B40CDA7BF22A0AD45E4FF");
		
		UAbility_GunnerOffChair_C_OnFinish_604AC427435B40CDA7BF22A0AD45E4FF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UAbility_GunnerOffChair_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.K2_ActivateAbility");
		
		UAbility_GunnerOffChair_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.K2_OnEndAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasCancelled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_GunnerOffChair_C::K2_OnEndAbility(bool bWasCancelled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.K2_OnEndAbility");
		
		UAbility_GunnerOffChair_C_K2_OnEndAbility_Params params {};
		params.bWasCancelled = bWasCancelled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.ExecuteUbergraph_Ability_GunnerOffChair
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_GunnerOffChair_C::ExecuteUbergraph_Ability_GunnerOffChair(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_GunnerOffChair.Ability_GunnerOffChair_C.ExecuteUbergraph_Ability_GunnerOffChair");
		
		UAbility_GunnerOffChair_C_ExecuteUbergraph_Ability_GunnerOffChair_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_GunnerOffChair_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_GunnerOffChair_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_GunnerOffChair.Ability_GunnerOffChair_C");
		return ptr;
	}

}


