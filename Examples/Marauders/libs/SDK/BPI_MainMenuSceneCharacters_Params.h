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
	 * Function BPI_MainMenuSceneCharacters.BPI_MainMenuSceneCharacters_C.Set_WhichMM_CharIAm
	 */
	struct UBPI_MainMenuSceneCharacters_C_Set_WhichMM_CharIAm_Params
	{
	public:
		int32_t                                                    WhichChar;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_MainMenuSceneCharacters.BPI_MainMenuSceneCharacters_C.Set_MM_CharacterPose
	 */
	struct UBPI_MainMenuSceneCharacters_C_Set_MM_CharacterPose_Params
	{
	public:
		class UAnimSequence*                                       AnimToUse;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
