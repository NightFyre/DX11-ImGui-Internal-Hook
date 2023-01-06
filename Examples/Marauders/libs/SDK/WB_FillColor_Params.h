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
	 * Function WB_FillColor.WB_FillColor_C.SetFillColor
	 */
	struct UWB_FillColor_C_SetFillColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_FillColor.WB_FillColor_C.AddColorV_Value
	 */
	struct UWB_FillColor_C_AddColorV_Value_Params
	{
	public:
		struct FLinearColor                                        InColor;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ExtraV;                                                  // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        OutColor;                                                // 0x0014(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_FillColor.WB_FillColor_C.OnUnhovered
	 */
	struct UWB_FillColor_C_OnUnhovered_Params
	{	};

	/**
	 * Function WB_FillColor.WB_FillColor_C.OnClicked
	 */
	struct UWB_FillColor_C_OnClicked_Params
	{	};

	/**
	 * Function WB_FillColor.WB_FillColor_C.OnHovered
	 */
	struct UWB_FillColor_C_OnHovered_Params
	{	};

	/**
	 * Function WB_FillColor.WB_FillColor_C.OnDisabled
	 */
	struct UWB_FillColor_C_OnDisabled_Params
	{	};

	/**
	 * Function WB_FillColor.WB_FillColor_C.Construct
	 */
	struct UWB_FillColor_C_Construct_Params
	{	};

	/**
	 * Function WB_FillColor.WB_FillColor_C.PreConstruct
	 */
	struct UWB_FillColor_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_FillColor.WB_FillColor_C.ExecuteUbergraph_WB_FillColor
	 */
	struct UWB_FillColor_C_ExecuteUbergraph_WB_FillColor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
