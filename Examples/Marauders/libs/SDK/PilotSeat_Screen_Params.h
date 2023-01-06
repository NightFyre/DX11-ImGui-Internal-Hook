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
	 * Function PilotSeat_Screen.PilotSeat_Screen_C.Construct
	 */
	struct UPilotSeat_Screen_C_Construct_Params
	{	};

	/**
	 * Function PilotSeat_Screen.PilotSeat_Screen_C.TriggerDossStartup
	 */
	struct UPilotSeat_Screen_C_TriggerDossStartup_Params
	{
	public:
		struct FVector                                             WorldLocationForSound;                                   // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PilotSeat_Screen.PilotSeat_Screen_C.ResetDosScreen
	 */
	struct UPilotSeat_Screen_C_ResetDosScreen_Params
	{	};

	/**
	 * Function PilotSeat_Screen.PilotSeat_Screen_C.TurnPilotSeatScreenOn
	 */
	struct UPilotSeat_Screen_C_TurnPilotSeatScreenOn_Params
	{	};

	/**
	 * Function PilotSeat_Screen.PilotSeat_Screen_C.TurnPilotSeatScreenOff
	 */
	struct UPilotSeat_Screen_C_TurnPilotSeatScreenOff_Params
	{	};

	/**
	 * Function PilotSeat_Screen.PilotSeat_Screen_C.ExecuteUbergraph_PilotSeat_Screen
	 */
	struct UPilotSeat_Screen_C_ExecuteUbergraph_PilotSeat_Screen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_69GE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
