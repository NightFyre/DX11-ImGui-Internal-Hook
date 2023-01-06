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
	 * Function BP_PC_InputDetect.BP_PC_InputDetect_C.FindRightInputType
	 */
	struct ABP_PC_InputDetect_C_FindRightInputType_Params
	{
	public:
		struct FKey                                                InputKey;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		struct FKey                                                LastPressedKey;                                          // 0x0018(0x0018)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PC_InputDetect.BP_PC_InputDetect_C.GetIsMouseMoving
	 */
	struct ABP_PC_InputDetect_C_GetIsMouseMoving_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4SQ2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PC_InputDetect.BP_PC_InputDetect_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_1
	 */
	struct ABP_PC_InputDetect_C_InpActEvt_AnyKey_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PC_InputDetect.BP_PC_InputDetect_C.UpdateMouseCursor
	 */
	struct ABP_PC_InputDetect_C_UpdateMouseCursor_Params
	{	};

	/**
	 * Function BP_PC_InputDetect.BP_PC_InputDetect_C.ExecuteUbergraph_BP_PC_InputDetect
	 */
	struct ABP_PC_InputDetect_C_ExecuteUbergraph_BP_PC_InputDetect_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FPXX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
