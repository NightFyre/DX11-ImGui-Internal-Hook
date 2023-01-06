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
	 * Function MM_ShopKeeperChar.MM_ShopKeeperChar_C.SetShopKeepVisuals
	 */
	struct AMM_ShopKeeperChar_C_SetShopKeepVisuals_Params
	{
	public:
		int32_t                                                    WhichShopKeep;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MM_ShopKeeperChar.MM_ShopKeeperChar_C.ExecuteUbergraph_MM_ShopKeeperChar
	 */
	struct AMM_ShopKeeperChar_C_ExecuteUbergraph_MM_ShopKeeperChar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
