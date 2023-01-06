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
	 * Function AnimBP_MainMenuSceneCharacters.AnimBP_MainMenuSceneCharacters_C.AnimGraph
	 */
	struct UAnimBP_MainMenuSceneCharacters_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function AnimBP_MainMenuSceneCharacters.AnimBP_MainMenuSceneCharacters_C.Set_MM_CharacterPose
	 */
	struct UAnimBP_MainMenuSceneCharacters_C_Set_MM_CharacterPose_Params
	{
	public:
		class UAnimSequence*                                       AnimToUse;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AnimBP_MainMenuSceneCharacters.AnimBP_MainMenuSceneCharacters_C.Set_WhichMM_CharIAm
	 */
	struct UAnimBP_MainMenuSceneCharacters_C_Set_WhichMM_CharIAm_Params
	{
	public:
		int32_t                                                    WhichChar;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AnimBP_MainMenuSceneCharacters.AnimBP_MainMenuSceneCharacters_C.ExecuteUbergraph_AnimBP_MainMenuSceneCharacters
	 */
	struct UAnimBP_MainMenuSceneCharacters_C_ExecuteUbergraph_AnimBP_MainMenuSceneCharacters_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
