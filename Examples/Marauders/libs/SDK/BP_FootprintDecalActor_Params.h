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
	 * Function BP_FootprintDecalActor.BP_FootprintDecalActor_C.SetupTheFootprint
	 */
	struct ABP_FootprintDecalActor_C_SetupTheFootprint_Params
	{
	public:
		class UMaterialInterface*                                  NewDecalMaterial;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Duration;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MaxStepsForMatType;                                      // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CurrentStepsLeft;                                        // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FootprintDecalActor.BP_FootprintDecalActor_C.ReceiveBeginPlay
	 */
	struct ABP_FootprintDecalActor_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_FootprintDecalActor.BP_FootprintDecalActor_C.ExecuteUbergraph_BP_FootprintDecalActor
	 */
	struct ABP_FootprintDecalActor_C_ExecuteUbergraph_BP_FootprintDecalActor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RMA1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
