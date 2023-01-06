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
	 * 		Name   -> Function BFL_Events.BFL_Events_C.LoadEventKillTally
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PlayerKills                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AiKills                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBFL_Events_C::LoadEventKillTally(class UObject* __WorldContext, int32_t* PlayerKills, int32_t* AiKills)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_Events.BFL_Events_C.LoadEventKillTally");
		
		UBFL_Events_C_LoadEventKillTally_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerKills != nullptr)
			*PlayerKills = params.PlayerKills;
		if (AiKills != nullptr)
			*AiKills = params.AiKills;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_Events.BFL_Events_C.SaveEventKillTally
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PlayerKills                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AiKills                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBFL_Events_C::SaveEventKillTally(int32_t PlayerKills, int32_t AiKills, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_Events.BFL_Events_C.SaveEventKillTally");
		
		UBFL_Events_C_SaveEventKillTally_Params params {};
		params.PlayerKills = PlayerKills;
		params.AiKills = AiKills;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_Events.BFL_Events_C.EventIDtoDisplayName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        EventPlayerDisplayName                                     (Parm, OutParm)
	 */
	void UBFL_Events_C::EventIDtoDisplayName(const class FText& InText, class UObject* __WorldContext, class FText* EventPlayerDisplayName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_Events.BFL_Events_C.EventIDtoDisplayName");
		
		UBFL_Events_C_EventIDtoDisplayName_Params params {};
		params.InText = InText;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EventPlayerDisplayName != nullptr)
			*EventPlayerDisplayName = params.EventPlayerDisplayName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_Events.BFL_Events_C.DeleteEventName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBFL_Events_C::DeleteEventName(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_Events.BFL_Events_C.DeleteEventName");
		
		UBFL_Events_C_DeleteEventName_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_Events.BFL_Events_C.LoadEventName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        PlayerId                                                   (Parm, OutParm)
	 * 		class FText                                        PlayerDisplayName                                          (Parm, OutParm)
	 */
	bool UBFL_Events_C::LoadEventName(class UObject* __WorldContext, class FText* PlayerId, class FText* PlayerDisplayName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_Events.BFL_Events_C.LoadEventName");
		
		UBFL_Events_C_LoadEventName_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerId != nullptr)
			*PlayerId = params.PlayerId;
		if (PlayerDisplayName != nullptr)
			*PlayerDisplayName = params.PlayerDisplayName;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_Events.BFL_Events_C.SaveEventName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        NameUsed                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBFL_Events_C::SaveEventName(const class FText& NameUsed, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_Events.BFL_Events_C.SaveEventName");
		
		UBFL_Events_C_SaveEventName_Params params {};
		params.NameUsed = NameUsed;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBFL_Events_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBFL_Events_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BFL_Events.BFL_Events_C");
		return ptr;
	}

}


