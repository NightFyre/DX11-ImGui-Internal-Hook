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
	 * Function MainMenu.MainMenu_C.Timeline_0__FinishedFunc
	 */
	struct AMainMenu_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function MainMenu.MainMenu_C.Timeline_0__UpdateFunc
	 */
	struct AMainMenu_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function MainMenu.MainMenu_C.ReceiveBeginPlay
	 */
	struct AMainMenu_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu
	 */
	struct AMainMenu_C_ExecuteUbergraph_MainMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
