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
	 * Function DropPodBootScreen.DropPodBootScreen_C.Construct
	 */
	struct UDropPodBootScreen_C_Construct_Params
	{	};

	/**
	 * Function DropPodBootScreen.DropPodBootScreen_C.TriggerDossStartup
	 */
	struct UDropPodBootScreen_C_TriggerDossStartup_Params
	{
	public:
		struct FVector                                             SoundWorldLocation;                                      // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DropPodBootScreen.DropPodBootScreen_C.ResetDosScreen
	 */
	struct UDropPodBootScreen_C_ResetDosScreen_Params
	{	};

	/**
	 * Function DropPodBootScreen.DropPodBootScreen_C.ExecuteUbergraph_DropPodBootScreen
	 */
	struct UDropPodBootScreen_C_ExecuteUbergraph_DropPodBootScreen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
