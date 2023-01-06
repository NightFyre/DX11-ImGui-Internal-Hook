#pragma once

/**
 * Name: Task_Force
 * Version: 0.3.3.1525
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
