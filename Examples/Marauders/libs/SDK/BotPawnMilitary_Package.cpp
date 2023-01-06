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
	 * 		Name   -> Function BotPawnMilitary.BotPawnMilitary_C.StartActiveEvent
	 * 		Flags  -> ()
	 */
	void ABotPawnMilitary_C::StartActiveEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BotPawnMilitary.BotPawnMilitary_C.StartActiveEvent");
		
		ABotPawnMilitary_C_StartActiveEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BotPawnMilitary.BotPawnMilitary_C.StartDeactiveEvent
	 * 		Flags  -> ()
	 */
	void ABotPawnMilitary_C::StartDeactiveEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BotPawnMilitary.BotPawnMilitary_C.StartDeactiveEvent");
		
		ABotPawnMilitary_C_StartDeactiveEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BotPawnMilitary.BotPawnMilitary_C.DismemberEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        BoneHit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector_NetQuantize                         ImpactNorm                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      DamageTypeClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void ABotPawnMilitary_C::DismemberEvent(const class FName& BoneHit, const struct FVector_NetQuantize& ImpactNorm, class UClass* DamageTypeClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BotPawnMilitary.BotPawnMilitary_C.DismemberEvent");
		
		ABotPawnMilitary_C_DismemberEvent_Params params {};
		params.BoneHit = BoneHit;
		params.ImpactNorm = ImpactNorm;
		params.DamageTypeClass = DamageTypeClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BotPawnMilitary.BotPawnMilitary_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABotPawnMilitary_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BotPawnMilitary.BotPawnMilitary_C.ReceiveTick");
		
		ABotPawnMilitary_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BotPawnMilitary.BotPawnMilitary_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABotPawnMilitary_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BotPawnMilitary.BotPawnMilitary_C.ReceiveBeginPlay");
		
		ABotPawnMilitary_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BotPawnMilitary.BotPawnMilitary_C.ExecuteUbergraph_BotPawnMilitary
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABotPawnMilitary_C::ExecuteUbergraph_BotPawnMilitary(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BotPawnMilitary.BotPawnMilitary_C.ExecuteUbergraph_BotPawnMilitary");
		
		ABotPawnMilitary_C_ExecuteUbergraph_BotPawnMilitary_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABotPawnMilitary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABotPawnMilitary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BotPawnMilitary.BotPawnMilitary_C");
		return ptr;
	}

}


