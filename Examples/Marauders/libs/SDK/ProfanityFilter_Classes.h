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
	 * Class ProfanityFilter.ProfanityFilterFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UProfanityFilterFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool ContainsProfanity_Text(const class FText& InText, unsigned char InMinimumSeverity);
		bool ContainsProfanity_String(const class FString& inString, unsigned char InMinimumSeverity);
		bool ContainsProfanity_Name(const class FName& InName, unsigned char InMinimumSeverity);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
