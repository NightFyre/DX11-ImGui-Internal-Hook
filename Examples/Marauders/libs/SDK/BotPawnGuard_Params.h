#pragma once

/**
 * Name: RaidGame
 * Version: 1
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BotPawnGuard.BotPawnGuard_C.ReceiveTick
	 */
	struct ABotPawnGuard_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BotPawnGuard.BotPawnGuard_C.DismemberEvent
	 */
	struct ABotPawnGuard_C_DismemberEvent_Params
	{
	public:
		class FName                                                BoneHit;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector_NetQuantize                                 ImpactNorm;                                              // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N6LB[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              DamageTypeClass;                                         // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BotPawnGuard.BotPawnGuard_C.StartActiveEvent
	 */
	struct ABotPawnGuard_C_StartActiveEvent_Params
	{	};

	/**
	 * Function BotPawnGuard.BotPawnGuard_C.StartDeactiveEvent
	 */
	struct ABotPawnGuard_C_StartDeactiveEvent_Params
	{	};

	/**
	 * Function BotPawnGuard.BotPawnGuard_C.ReceiveBeginPlay
	 */
	struct ABotPawnGuard_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BotPawnGuard.BotPawnGuard_C.ExecuteUbergraph_BotPawnGuard
	 */
	struct ABotPawnGuard_C_ExecuteUbergraph_BotPawnGuard_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HNEN[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
