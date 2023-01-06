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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct S_AllVoiceDTs.S_AllVoiceDTs
	 * Size -> 0x0060
	 */
	struct FS_AllVoiceDTs
	{
	public:
		class UDataTable*                                          VoiceDTRef_17_D1411D8543AAF8FEFDB741985B8C1CE2;          // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                VoiceSetName_18_FEB0C9434EDC2E0C272F419EAA0B870A;        // 0x0008(0x0018) Edit, BlueprintVisible
		class FText                                                VoiceSetDesc_19_A4997B1E422BDCEB514BCD9FC0D1ED2C;        // 0x0020(0x0018) Edit, BlueprintVisible
		unsigned char                                              VoicesetIcon_16_CF4300BD4B2B0DA941FBC3B7C4C38800[0x28];  // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
