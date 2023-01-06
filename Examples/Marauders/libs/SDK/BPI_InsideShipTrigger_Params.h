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
	 * Function BPI_InsideShipTrigger.BPI_InsideShipTrigger_C.TriggerDamageLightFlicker
	 */
	struct UBPI_InsideShipTrigger_C_TriggerDamageLightFlicker_Params
	{	};

	/**
	 * Function BPI_InsideShipTrigger.BPI_InsideShipTrigger_C.TriggerCritcialWarningSpinningLights
	 */
	struct UBPI_InsideShipTrigger_C_TriggerCritcialWarningSpinningLights_Params
	{
	public:
		bool                                                       TurnOnCriticalState;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_InsideShipTrigger.BPI_InsideShipTrigger_C.TriggerCriticalLightState
	 */
	struct UBPI_InsideShipTrigger_C_TriggerCriticalLightState_Params
	{
	public:
		bool                                                       TurnOnCriticalState;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_InsideShipTrigger.BPI_InsideShipTrigger_C.TriggerInsideShipActor_Damage
	 */
	struct UBPI_InsideShipTrigger_C_TriggerInsideShipActor_Damage_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
