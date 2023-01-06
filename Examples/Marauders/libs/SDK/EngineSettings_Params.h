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
	 * Function EngineSettings.GameMapsSettings.SetSkipAssigningGamepadToPlayer1
	 */
	struct UGameMapsSettings_SetSkipAssigningGamepadToPlayer1_Params
	{
	public:
		bool                                                       bSkipFirstPlayer;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EngineSettings.GameMapsSettings.GetSkipAssigningGamepadToPlayer1
	 */
	struct UGameMapsSettings_GetSkipAssigningGamepadToPlayer1_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EngineSettings.GameMapsSettings.GetGameMapsSettings
	 */
	struct UGameMapsSettings_GetGameMapsSettings_Params
	{
	public:
		class UGameMapsSettings*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
