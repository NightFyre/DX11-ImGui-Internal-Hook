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
	 * 		Name   -> Function Ability_HumanBreachedIn.Ability_HumanBreachedIn_C.AlignControlRotation
	 * 		Flags  -> ()
	 */
	void UAbility_HumanBreachedIn_C::AlignControlRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_HumanBreachedIn.Ability_HumanBreachedIn_C.AlignControlRotation");
		
		UAbility_HumanBreachedIn_C_AlignControlRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_HumanBreachedIn.Ability_HumanBreachedIn_C.SetUpBaseActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               failed                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_HumanBreachedIn_C::SetUpBaseActors(bool* failed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_HumanBreachedIn.Ability_HumanBreachedIn_C.SetUpBaseActors");
		
		UAbility_HumanBreachedIn_C_SetUpBaseActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (failed != nullptr)
			*failed = params.failed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_HumanBreachedIn.Ability_HumanBreachedIn_C.EventReceived_40ED19D24FCBDD28EC1290A90A05732D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_HumanBreachedIn_C::EventReceived_40ED19D24FCBDD28EC1290A90A05732D(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_HumanBreachedIn.Ability_HumanBreachedIn_C.EventReceived_40ED19D24FCBDD28EC1290A90A05732D");
		
		UAbility_HumanBreachedIn_C_EventReceived_40ED19D24FCBDD28EC1290A90A05732D_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_HumanBreachedIn.Ability_HumanBreachedIn_C.OnCancelled_40ED19D24FCBDD28EC1290A90A05732D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_HumanBreachedIn_C::OnCancelled_40ED19D24FCBDD28EC1290A90A05732D(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_HumanBreachedIn.Ability_HumanBreachedIn_C.OnCancelled_40ED19D24FCBDD28EC1290A90A05732D");
		
		UAbility_HumanBreachedIn_C_OnCancelled_40ED19D24FCBDD28EC1290A90A05732D_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_HumanBreachedIn.Ability_HumanBreachedIn_C.OnInterrupted_40ED19D24FCBDD28EC1290A90A05732D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_HumanBreachedIn_C::OnInterrupted_40ED19D24FCBDD28EC1290A90A05732D(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_HumanBreachedIn.Ability_HumanBreachedIn_C.OnInterrupted_40ED19D24FCBDD28EC1290A90A05732D");
		
		UAbility_HumanBreachedIn_C_OnInterrupted_40ED19D24FCBDD28EC1290A90A05732D_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_HumanBreachedIn.Ability_HumanBreachedIn_C.OnBlendOut_40ED19D24FCBDD28EC1290A90A05732D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_HumanBreachedIn_C::OnBlendOut_40ED19D24FCBDD28EC1290A90A05732D(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_HumanBreachedIn.Ability_HumanBreachedIn_C.OnBlendOut_40ED19D24FCBDD28EC1290A90A05732D");
		
		UAbility_HumanBreachedIn_C_OnBlendOut_40ED19D24FCBDD28EC1290A90A05732D_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_HumanBreachedIn.Ability_HumanBreachedIn_C.OnCompleted_40ED19D24FCBDD28EC1290A90A05732D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_HumanBreachedIn_C::OnCompleted_40ED19D24FCBDD28EC1290A90A05732D(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_HumanBreachedIn.Ability_HumanBreachedIn_C.OnCompleted_40ED19D24FCBDD28EC1290A90A05732D");
		
		UAbility_HumanBreachedIn_C_OnCompleted_40ED19D24FCBDD28EC1290A90A05732D_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_HumanBreachedIn.Ability_HumanBreachedIn_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UAbility_HumanBreachedIn_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_HumanBreachedIn.Ability_HumanBreachedIn_C.K2_ActivateAbility");
		
		UAbility_HumanBreachedIn_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_HumanBreachedIn.Ability_HumanBreachedIn_C.K2_OnEndAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasCancelled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_HumanBreachedIn_C::K2_OnEndAbility(bool bWasCancelled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_HumanBreachedIn.Ability_HumanBreachedIn_C.K2_OnEndAbility");
		
		UAbility_HumanBreachedIn_C_K2_OnEndAbility_Params params {};
		params.bWasCancelled = bWasCancelled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_HumanBreachedIn.Ability_HumanBreachedIn_C.ExecuteUbergraph_Ability_HumanBreachedIn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_HumanBreachedIn_C::ExecuteUbergraph_Ability_HumanBreachedIn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_HumanBreachedIn.Ability_HumanBreachedIn_C.ExecuteUbergraph_Ability_HumanBreachedIn");
		
		UAbility_HumanBreachedIn_C_ExecuteUbergraph_Ability_HumanBreachedIn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_HumanBreachedIn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_HumanBreachedIn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_HumanBreachedIn.Ability_HumanBreachedIn_C");
		return ptr;
	}

}


