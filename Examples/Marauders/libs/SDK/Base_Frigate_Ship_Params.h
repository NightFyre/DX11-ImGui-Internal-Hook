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
	 * Function Base_Frigate_Ship.Base_Frigate_Ship_C.CheckifAbleToDock
	 */
	struct ABase_Frigate_Ship_C_CheckifAbleToDock_Params
	{
	public:
		bool                                                       isAllowedToDock;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F1Q8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Base_Frigate_Ship.Base_Frigate_Ship_C.ReceiveBeginPlay
	 */
	struct ABase_Frigate_Ship_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Base_Frigate_Ship.Base_Frigate_Ship_C.CheckIfCanDock
	 */
	struct ABase_Frigate_Ship_C_CheckIfCanDock_Params
	{	};

	/**
	 * Function Base_Frigate_Ship.Base_Frigate_Ship_C.ExecuteUbergraph_Base_Frigate_Ship
	 */
	struct ABase_Frigate_Ship_C_ExecuteUbergraph_Base_Frigate_Ship_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E3UT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
