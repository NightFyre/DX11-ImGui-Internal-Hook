#pragma once

/**
 * Name: Task_Force
 * Version: 0.3.6.1537
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
	 * Function Discord.DiscordHelpers.UpdatePresence
	 */
	struct UDiscordHelpers_UpdatePresence_Params
	{	};

	/**
	 * Function Discord.DiscordHelpers.Shutdown
	 */
	struct UDiscordHelpers_Shutdown_Params
	{	};

	/**
	 * Function Discord.DiscordHelpers.RunCallbacks
	 */
	struct UDiscordHelpers_RunCallbacks_Params
	{	};

	/**
	 * Function Discord.DiscordHelpers.Respond
	 */
	struct UDiscordHelpers_Respond_Params
	{
	public:
		class FString                                              userId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Reply;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Discord.DiscordHelpers.Initialize
	 */
	struct UDiscordHelpers_Initialize_Params
	{
	public:
		class FString                                              applicationId;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       autoRegister;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TSRT[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              optionalSteamId;                                         // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Discord.DiscordHelpers.ClearPresence
	 */
	struct UDiscordHelpers_ClearPresence_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
