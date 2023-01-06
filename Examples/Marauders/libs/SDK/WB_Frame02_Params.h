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
	 * Function WB_Frame02.WB_Frame02_C.Set_FrameColor
	 */
	struct UWB_Frame02_C_Set_FrameColor_Params
	{
	public:
		struct FLinearColor                                        FrameColor;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Frame02.WB_Frame02_C.OnUnhovered
	 */
	struct UWB_Frame02_C_OnUnhovered_Params
	{	};

	/**
	 * Function WB_Frame02.WB_Frame02_C.OnClicked
	 */
	struct UWB_Frame02_C_OnClicked_Params
	{	};

	/**
	 * Function WB_Frame02.WB_Frame02_C.OnHovered
	 */
	struct UWB_Frame02_C_OnHovered_Params
	{	};

	/**
	 * Function WB_Frame02.WB_Frame02_C.OnDisabled
	 */
	struct UWB_Frame02_C_OnDisabled_Params
	{	};

	/**
	 * Function WB_Frame02.WB_Frame02_C.ExecuteUbergraph_WB_Frame02
	 */
	struct UWB_Frame02_C_ExecuteUbergraph_WB_Frame02_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
