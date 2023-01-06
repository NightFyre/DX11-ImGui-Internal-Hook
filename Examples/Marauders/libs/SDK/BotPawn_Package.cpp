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
	 * 		Name   -> Function BotPawn.BotPawn_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABotPawn_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BotPawn.BotPawn_C.ReceiveTick");
		
		ABotPawn_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BotPawn.BotPawn_C.DismemberEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        BoneHit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector_NetQuantize                         ImpactNorm                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      DamageTypeClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void ABotPawn_C::DismemberEvent(const class FName& BoneHit, const struct FVector_NetQuantize& ImpactNorm, class UClass* DamageTypeClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BotPawn.BotPawn_C.DismemberEvent");
		
		ABotPawn_C_DismemberEvent_Params params {};
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
	 * 		Name   -> Function BotPawn.BotPawn_C.StartActiveEvent
	 * 		Flags  -> ()
	 */
	void ABotPawn_C::StartActiveEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BotPawn.BotPawn_C.StartActiveEvent");
		
		ABotPawn_C_StartActiveEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BotPawn.BotPawn_C.StartDeactiveEvent
	 * 		Flags  -> ()
	 */
	void ABotPawn_C::StartDeactiveEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BotPawn.BotPawn_C.StartDeactiveEvent");
		
		ABotPawn_C_StartDeactiveEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BotPawn.BotPawn_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABotPawn_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BotPawn.BotPawn_C.ReceiveBeginPlay");
		
		ABotPawn_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BotPawn.BotPawn_C.OnProxyHitReact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Impact                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABotPawn_C::OnProxyHitReact(const struct FHitResult& Impact)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BotPawn.BotPawn_C.OnProxyHitReact");
		
		ABotPawn_C_OnProxyHitReact_Params params {};
		params.Impact = Impact;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BotPawn.BotPawn_C.ExecuteUbergraph_BotPawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABotPawn_C::ExecuteUbergraph_BotPawn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BotPawn.BotPawn_C.ExecuteUbergraph_BotPawn");
		
		ABotPawn_C_ExecuteUbergraph_BotPawn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABotPawn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABotPawn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BotPawn.BotPawn_C");
		return ptr;
	}

}


