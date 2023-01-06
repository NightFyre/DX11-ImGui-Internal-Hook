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
	 * Function Base_ExitGateCinematic.Base_ExitGateCinematic_C.Timeline_0__FinishedFunc
	 */
	struct ABase_ExitGateCinematic_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function Base_ExitGateCinematic.Base_ExitGateCinematic_C.Timeline_0__UpdateFunc
	 */
	struct ABase_ExitGateCinematic_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function Base_ExitGateCinematic.Base_ExitGateCinematic_C.OnLoaded_F35158C34C07B2A5A38E7AB5D7360091
	 */
	struct ABase_ExitGateCinematic_C_OnLoaded_F35158C34C07B2A5A38E7AB5D7360091_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_ExitGateCinematic.Base_ExitGateCinematic_C.RunCinematic
	 */
	struct ABase_ExitGateCinematic_C_RunCinematic_Params
	{
	public:
		class ARaidPlayerController*                               WhichPlayerController;                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsFrigate;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CIKK[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                NameOfShip;                                              // 0x000C(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Base_ExitGateCinematic.Base_ExitGateCinematic_C.ExecuteUbergraph_Base_ExitGateCinematic
	 */
	struct ABase_ExitGateCinematic_C_ExecuteUbergraph_Base_ExitGateCinematic_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
