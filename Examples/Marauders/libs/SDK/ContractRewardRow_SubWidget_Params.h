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
	 * Function ContractRewardRow_SubWidget.ContractRewardRow_SubWidget_C.Construct
	 */
	struct UContractRewardRow_SubWidget_C_Construct_Params
	{	};

	/**
	 * Function ContractRewardRow_SubWidget.ContractRewardRow_SubWidget_C.SetupRewardRow
	 */
	struct UContractRewardRow_SubWidget_C_SetupRewardRow_Params
	{
	public:
		struct FContract                                           contractStruct;                                          // 0x0000(0x00F8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ContractRewardRow_SubWidget.ContractRewardRow_SubWidget_C.ExecuteUbergraph_ContractRewardRow_SubWidget
	 */
	struct UContractRewardRow_SubWidget_C_ExecuteUbergraph_ContractRewardRow_SubWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L5W2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
