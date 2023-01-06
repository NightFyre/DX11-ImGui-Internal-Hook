#pragma once

/**
 * Name: RaidGame
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BPI_MainMenuSceneCharacters.BPI_MainMenuSceneCharacters_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_MainMenuSceneCharacters_C : public UInterface
	{
	public:
		void Set_WhichMM_CharIAm(int32_t WhichChar);
		void Set_MM_CharacterPose(class UAnimSequence* AnimToUse);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
