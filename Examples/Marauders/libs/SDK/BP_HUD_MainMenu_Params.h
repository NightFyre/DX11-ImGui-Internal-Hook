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
	 * Function BP_HUD_MainMenu.BP_HUD_MainMenu_C.CreateMainMenu
	 */
	struct ABP_HUD_MainMenu_C_CreateMainMenu_Params
	{
	public:
		class UWB_ProMainMenu_C*                                   WB_ProMainMenu;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD_MainMenu.BP_HUD_MainMenu_C.ReceiveBeginPlay
	 */
	struct ABP_HUD_MainMenu_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_HUD_MainMenu.BP_HUD_MainMenu_C.ExecuteUbergraph_BP_HUD_MainMenu
	 */
	struct ABP_HUD_MainMenu_C_ExecuteUbergraph_BP_HUD_MainMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2SXU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
