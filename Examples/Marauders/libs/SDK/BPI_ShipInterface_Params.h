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
	 * Function BPI_ShipInterface.BPI_ShipInterface_C.ShipTakeDamage
	 */
	struct UBPI_ShipInterface_C_ShipTakeDamage_Params
	{
	public:
		float                                                      DamageAmount;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Direction;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_ShipInterface.BPI_ShipInterface_C.Frigate_IsEnteringArea
	 */
	struct UBPI_ShipInterface_C_Frigate_IsEnteringArea_Params
	{	};

	/**
	 * Function BPI_ShipInterface.BPI_ShipInterface_C.Trigger_FrigateCinematicCameraMove
	 */
	struct UBPI_ShipInterface_C_Trigger_FrigateCinematicCameraMove_Params
	{
	public:
		struct FTransform                                          ToSocketOffset;                                          // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FRotator                                            ToRotation;                                              // 0x0030(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ToBoomLength;                                            // 0x003C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
