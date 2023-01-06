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
	 * Function SIGIS_RewardPannel.SIGIS_RewardPannel_C.Run_LinearMissions_RewardsPannel
	 */
	struct USIGIS_RewardPannel_C_Run_LinearMissions_RewardsPannel_Params
	{
	public:
		struct FChapterMissionUI                                   ChapterMissionRewards;                                   // 0x0000(0x0138)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
		TArray<class FName>                                        ArrayOfItemDTRow_Rewards;                                // 0x0138(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SIGIS_RewardPannel.SIGIS_RewardPannel_C.ExecuteUbergraph_SIGIS_RewardPannel
	 */
	struct USIGIS_RewardPannel_C_ExecuteUbergraph_SIGIS_RewardPannel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UPCH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
