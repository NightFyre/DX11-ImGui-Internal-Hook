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
	 * Function Base_ShipInsideActor.Base_ShipInsideActor_C.TriggerInsideShipActor_Damage
	 */
	struct ABase_ShipInsideActor_C_TriggerInsideShipActor_Damage_Params
	{	};

	/**
	 * Function Base_ShipInsideActor.Base_ShipInsideActor_C.TriggerCriticalLightState
	 */
	struct ABase_ShipInsideActor_C_TriggerCriticalLightState_Params
	{
	public:
		bool                                                       TurnOnCriticalState;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Base_ShipInsideActor.Base_ShipInsideActor_C.TriggerCritcialWarningSpinningLights
	 */
	struct ABase_ShipInsideActor_C_TriggerCritcialWarningSpinningLights_Params
	{
	public:
		bool                                                       TurnOnCriticalState;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Base_ShipInsideActor.Base_ShipInsideActor_C.TriggerDamageLightFlicker
	 */
	struct ABase_ShipInsideActor_C_TriggerDamageLightFlicker_Params
	{	};

	/**
	 * Function Base_ShipInsideActor.Base_ShipInsideActor_C.Trigger
	 */
	struct ABase_ShipInsideActor_C_Trigger_Params
	{	};

	/**
	 * Function Base_ShipInsideActor.Base_ShipInsideActor_C.ExecuteUbergraph_Base_ShipInsideActor
	 */
	struct ABase_ShipInsideActor_C_ExecuteUbergraph_Base_ShipInsideActor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
