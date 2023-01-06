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
	 * Function BotPawn.BotPawn_C.ReceiveTick
	 */
	struct ABotPawn_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BotPawn.BotPawn_C.DismemberEvent
	 */
	struct ABotPawn_C_DismemberEvent_Params
	{
	public:
		class FName                                                BoneHit;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector_NetQuantize                                 ImpactNorm;                                              // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G1QH[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              DamageTypeClass;                                         // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BotPawn.BotPawn_C.StartActiveEvent
	 */
	struct ABotPawn_C_StartActiveEvent_Params
	{	};

	/**
	 * Function BotPawn.BotPawn_C.StartDeactiveEvent
	 */
	struct ABotPawn_C_StartDeactiveEvent_Params
	{	};

	/**
	 * Function BotPawn.BotPawn_C.ReceiveBeginPlay
	 */
	struct ABotPawn_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BotPawn.BotPawn_C.OnProxyHitReact
	 */
	struct ABotPawn_C_OnProxyHitReact_Params
	{
	public:
		struct FHitResult                                          Impact;                                                  // 0x0000(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BotPawn.BotPawn_C.ExecuteUbergraph_BotPawn
	 */
	struct ABotPawn_C_ExecuteUbergraph_BotPawn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OEKL[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
