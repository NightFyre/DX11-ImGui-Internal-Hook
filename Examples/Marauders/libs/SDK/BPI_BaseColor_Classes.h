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
	 * BlueprintGeneratedClass BPI_BaseColor.BPI_BaseColor_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_BaseColor_C : public UInterface
	{
	public:
		void SetBaseColor(bool bUseBaseColor, const struct FLinearColor& Grad0, const struct FLinearColor& Grad1, const struct FLinearColor& Grad2, const struct FLinearColor& Grad3);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
