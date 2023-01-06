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
	 * Function HangarDoor01.HangarDoor01_C.SetSpinningLightOnOff
	 */
	struct AHangarDoor01_C_SetSpinningLightOnOff_Params
	{
	public:
		bool                                                       TurnOn;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_85H0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HangarDoor01.HangarDoor01_C.FadeTheLights__FinishedFunc
	 */
	struct AHangarDoor01_C_FadeTheLights__FinishedFunc_Params
	{	};

	/**
	 * Function HangarDoor01.HangarDoor01_C.FadeTheLights__UpdateFunc
	 */
	struct AHangarDoor01_C_FadeTheLights__UpdateFunc_Params
	{	};

	/**
	 * Function HangarDoor01.HangarDoor01_C.ReceiveBeginPlay
	 */
	struct AHangarDoor01_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function HangarDoor01.HangarDoor01_C.ReceiveTick
	 */
	struct AHangarDoor01_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HangarDoor01.HangarDoor01_C.TriggerHangarDoor
	 */
	struct AHangarDoor01_C_TriggerHangarDoor_Params
	{
	public:
		bool                                                       ShouldOpen;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HangarDoor01.HangarDoor01_C.LightsOnOff
	 */
	struct AHangarDoor01_C_LightsOnOff_Params
	{
	public:
		bool                                                       LightsOn;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HangarDoor01.HangarDoor01_C.ExecuteUbergraph_HangarDoor01
	 */
	struct AHangarDoor01_C_ExecuteUbergraph_HangarDoor01_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
