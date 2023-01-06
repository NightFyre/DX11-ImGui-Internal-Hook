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
	 * Function HangarDoorControl.HangarDoorControl_C.SetStateOnUIWidget
	 */
	struct AHangarDoorControl_C_SetStateOnUIWidget_Params
	{
	public:
		E_HangarDoorStates                                         CurrentDoorstate;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I3L3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HangarDoorControl.HangarDoorControl_C.UserConstructionScript
	 */
	struct AHangarDoorControl_C_UserConstructionScript_Params
	{	};

	/**
	 * Function HangarDoorControl.HangarDoorControl_C.ReceiveBeginPlay
	 */
	struct AHangarDoorControl_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function HangarDoorControl.HangarDoorControl_C.TriggerHangarDoorControls
	 */
	struct AHangarDoorControl_C_TriggerHangarDoorControls_Params
	{	};

	/**
	 * Function HangarDoorControl.HangarDoorControl_C.ExecuteUbergraph_HangarDoorControl
	 */
	struct AHangarDoorControl_C_ExecuteUbergraph_HangarDoorControl_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0PGU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
