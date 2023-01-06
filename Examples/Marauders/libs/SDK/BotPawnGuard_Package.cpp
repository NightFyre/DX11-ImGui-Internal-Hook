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
	 * 		Name   -> Function BotPawnGuard.BotPawnGuard_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABotPawnGuard_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BotPawnGuard.BotPawnGuard_C.ReceiveTick");
		
		ABotPawnGuard_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BotPawnGuard.BotPawnGuard_C.DismemberEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        BoneHit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector_NetQuantize                         ImpactNorm                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      DamageTypeClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void ABotPawnGuard_C::DismemberEvent(const class FName& BoneHit, const struct FVector_NetQuantize& ImpactNorm, class UClass* DamageTypeClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BotPawnGuard.BotPawnGuard_C.DismemberEvent");
		
		ABotPawnGuard_C_DismemberEvent_Params params {};
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
	 * 		Name   -> Function BotPawnGuard.BotPawnGuard_C.StartActiveEvent
	 * 		Flags  -> ()
	 */
	void ABotPawnGuard_C::StartActiveEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BotPawnGuard.BotPawnGuard_C.StartActiveEvent");
		
		ABotPawnGuard_C_StartActiveEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BotPawnGuard.BotPawnGuard_C.StartDeactiveEvent
	 * 		Flags  -> ()
	 */
	void ABotPawnGuard_C::StartDeactiveEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BotPawnGuard.BotPawnGuard_C.StartDeactiveEvent");
		
		ABotPawnGuard_C_StartDeactiveEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BotPawnGuard.BotPawnGuard_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABotPawnGuard_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BotPawnGuard.BotPawnGuard_C.ReceiveBeginPlay");
		
		ABotPawnGuard_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BotPawnGuard.BotPawnGuard_C.ExecuteUbergraph_BotPawnGuard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABotPawnGuard_C::ExecuteUbergraph_BotPawnGuard(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BotPawnGuard.BotPawnGuard_C.ExecuteUbergraph_BotPawnGuard");
		
		ABotPawnGuard_C_ExecuteUbergraph_BotPawnGuard_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABotPawnGuard_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABotPawnGuard_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BotPawnGuard.BotPawnGuard_C");
		return ptr;
	}

}


