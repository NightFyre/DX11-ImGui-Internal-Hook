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
	 * Function WB_Frame.WB_Frame_C.HasColor
	 */
	struct UWB_Frame_C_HasColor_Params
	{
	public:
		struct FLinearColor                                        InColor;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GNAL[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_Frame.WB_Frame_C.Set_ShineColor
	 */
	struct UWB_Frame_C_Set_ShineColor_Params
	{
	public:
		struct FLinearColor                                        FrameColor;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Frame.WB_Frame_C.Set_FrameColor
	 */
	struct UWB_Frame_C_Set_FrameColor_Params
	{
	public:
		struct FLinearColor                                        FrameColor;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Frame.WB_Frame_C.PreConstruct
	 */
	struct UWB_Frame_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_Frame.WB_Frame_C.Construct
	 */
	struct UWB_Frame_C_Construct_Params
	{	};

	/**
	 * Function WB_Frame.WB_Frame_C.OnHovered
	 */
	struct UWB_Frame_C_OnHovered_Params
	{	};

	/**
	 * Function WB_Frame.WB_Frame_C.OnClicked
	 */
	struct UWB_Frame_C_OnClicked_Params
	{	};

	/**
	 * Function WB_Frame.WB_Frame_C.OnUnhovered
	 */
	struct UWB_Frame_C_OnUnhovered_Params
	{	};

	/**
	 * Function WB_Frame.WB_Frame_C.OnDisabled
	 */
	struct UWB_Frame_C_OnDisabled_Params
	{	};

	/**
	 * Function WB_Frame.WB_Frame_C.UpdateFrameThickness
	 */
	struct UWB_Frame_C_UpdateFrameThickness_Params
	{
	public:
		float                                                      FrameThickness;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Frame.WB_Frame_C.ExecuteUbergraph_WB_Frame
	 */
	struct UWB_Frame_C_ExecuteUbergraph_WB_Frame_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
