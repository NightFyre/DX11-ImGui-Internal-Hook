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
	 * 		Name   -> Function Ability_PilotOffChair.Ability_PilotOffChair_C.AlignControlRotation
	 * 		Flags  -> ()
	 */
	void UAbility_PilotOffChair_C::AlignControlRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_PilotOffChair.Ability_PilotOffChair_C.AlignControlRotation");
		
		UAbility_PilotOffChair_C_AlignControlRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_PilotOffChair.Ability_PilotOffChair_C.SetUpBaseActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               failed                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_PilotOffChair_C::SetUpBaseActors(bool* failed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_PilotOffChair.Ability_PilotOffChair_C.SetUpBaseActors");
		
		UAbility_PilotOffChair_C_SetUpBaseActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (failed != nullptr)
			*failed = params.failed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_PilotOffChair.Ability_PilotOffChair_C.OnSync_2ADC627D45541B5D3C3BA0BCA47752DD
	 * 		Flags  -> ()
	 */
	void UAbility_PilotOffChair_C::OnSync_2ADC627D45541B5D3C3BA0BCA47752DD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_PilotOffChair.Ability_PilotOffChair_C.OnSync_2ADC627D45541B5D3C3BA0BCA47752DD");
		
		UAbility_PilotOffChair_C_OnSync_2ADC627D45541B5D3C3BA0BCA47752DD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_PilotOffChair.Ability_PilotOffChair_C.EventReceived_0A1466BE4CA8AB32B958978757338BD8
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_PilotOffChair_C::EventReceived_0A1466BE4CA8AB32B958978757338BD8(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_PilotOffChair.Ability_PilotOffChair_C.EventReceived_0A1466BE4CA8AB32B958978757338BD8");
		
		UAbility_PilotOffChair_C_EventReceived_0A1466BE4CA8AB32B958978757338BD8_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_PilotOffChair.Ability_PilotOffChair_C.OnCancelled_0A1466BE4CA8AB32B958978757338BD8
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_PilotOffChair_C::OnCancelled_0A1466BE4CA8AB32B958978757338BD8(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_PilotOffChair.Ability_PilotOffChair_C.OnCancelled_0A1466BE4CA8AB32B958978757338BD8");
		
		UAbility_PilotOffChair_C_OnCancelled_0A1466BE4CA8AB32B958978757338BD8_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_PilotOffChair.Ability_PilotOffChair_C.OnInterrupted_0A1466BE4CA8AB32B958978757338BD8
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_PilotOffChair_C::OnInterrupted_0A1466BE4CA8AB32B958978757338BD8(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_PilotOffChair.Ability_PilotOffChair_C.OnInterrupted_0A1466BE4CA8AB32B958978757338BD8");
		
		UAbility_PilotOffChair_C_OnInterrupted_0A1466BE4CA8AB32B958978757338BD8_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_PilotOffChair.Ability_PilotOffChair_C.OnBlendOut_0A1466BE4CA8AB32B958978757338BD8
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_PilotOffChair_C::OnBlendOut_0A1466BE4CA8AB32B958978757338BD8(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_PilotOffChair.Ability_PilotOffChair_C.OnBlendOut_0A1466BE4CA8AB32B958978757338BD8");
		
		UAbility_PilotOffChair_C_OnBlendOut_0A1466BE4CA8AB32B958978757338BD8_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_PilotOffChair.Ability_PilotOffChair_C.OnCompleted_0A1466BE4CA8AB32B958978757338BD8
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_PilotOffChair_C::OnCompleted_0A1466BE4CA8AB32B958978757338BD8(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_PilotOffChair.Ability_PilotOffChair_C.OnCompleted_0A1466BE4CA8AB32B958978757338BD8");
		
		UAbility_PilotOffChair_C_OnCompleted_0A1466BE4CA8AB32B958978757338BD8_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_PilotOffChair.Ability_PilotOffChair_C.EventReceived_2BB641324DDA55D29F0599A55D511D8B
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_PilotOffChair_C::EventReceived_2BB641324DDA55D29F0599A55D511D8B(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_PilotOffChair.Ability_PilotOffChair_C.EventReceived_2BB641324DDA55D29F0599A55D511D8B");
		
		UAbility_PilotOffChair_C_EventReceived_2BB641324DDA55D29F0599A55D511D8B_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_PilotOffChair.Ability_PilotOffChair_C.OnCancelled_2BB641324DDA55D29F0599A55D511D8B
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_PilotOffChair_C::OnCancelled_2BB641324DDA55D29F0599A55D511D8B(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_PilotOffChair.Ability_PilotOffChair_C.OnCancelled_2BB641324DDA55D29F0599A55D511D8B");
		
		UAbility_PilotOffChair_C_OnCancelled_2BB641324DDA55D29F0599A55D511D8B_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_PilotOffChair.Ability_PilotOffChair_C.OnInterrupted_2BB641324DDA55D29F0599A55D511D8B
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_PilotOffChair_C::OnInterrupted_2BB641324DDA55D29F0599A55D511D8B(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_PilotOffChair.Ability_PilotOffChair_C.OnInterrupted_2BB641324DDA55D29F0599A55D511D8B");
		
		UAbility_PilotOffChair_C_OnInterrupted_2BB641324DDA55D29F0599A55D511D8B_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_PilotOffChair.Ability_PilotOffChair_C.OnBlendOut_2BB641324DDA55D29F0599A55D511D8B
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_PilotOffChair_C::OnBlendOut_2BB641324DDA55D29F0599A55D511D8B(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_PilotOffChair.Ability_PilotOffChair_C.OnBlendOut_2BB641324DDA55D29F0599A55D511D8B");
		
		UAbility_PilotOffChair_C_OnBlendOut_2BB641324DDA55D29F0599A55D511D8B_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_PilotOffChair.Ability_PilotOffChair_C.OnCompleted_2BB641324DDA55D29F0599A55D511D8B
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAbility_PilotOffChair_C::OnCompleted_2BB641324DDA55D29F0599A55D511D8B(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_PilotOffChair.Ability_PilotOffChair_C.OnCompleted_2BB641324DDA55D29F0599A55D511D8B");
		
		UAbility_PilotOffChair_C_OnCompleted_2BB641324DDA55D29F0599A55D511D8B_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_PilotOffChair.Ability_PilotOffChair_C.OnFinish_7D92FB174D7A409EEBC2D6BBA4EEFF6D
	 * 		Flags  -> ()
	 */
	void UAbility_PilotOffChair_C::OnFinish_7D92FB174D7A409EEBC2D6BBA4EEFF6D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_PilotOffChair.Ability_PilotOffChair_C.OnFinish_7D92FB174D7A409EEBC2D6BBA4EEFF6D");
		
		UAbility_PilotOffChair_C_OnFinish_7D92FB174D7A409EEBC2D6BBA4EEFF6D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_PilotOffChair.Ability_PilotOffChair_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UAbility_PilotOffChair_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_PilotOffChair.Ability_PilotOffChair_C.K2_ActivateAbility");
		
		UAbility_PilotOffChair_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_PilotOffChair.Ability_PilotOffChair_C.K2_OnEndAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasCancelled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_PilotOffChair_C::K2_OnEndAbility(bool bWasCancelled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_PilotOffChair.Ability_PilotOffChair_C.K2_OnEndAbility");
		
		UAbility_PilotOffChair_C_K2_OnEndAbility_Params params {};
		params.bWasCancelled = bWasCancelled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ability_PilotOffChair.Ability_PilotOffChair_C.ExecuteUbergraph_Ability_PilotOffChair
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_PilotOffChair_C::ExecuteUbergraph_Ability_PilotOffChair(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_PilotOffChair.Ability_PilotOffChair_C.ExecuteUbergraph_Ability_PilotOffChair");
		
		UAbility_PilotOffChair_C_ExecuteUbergraph_Ability_PilotOffChair_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_PilotOffChair_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_PilotOffChair_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_PilotOffChair.Ability_PilotOffChair_C");
		return ptr;
	}

}


