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
	 * UserDefinedStruct S_GuideInfo.S_GuideInfo
	 * Size -> 0x0078
	 */
	struct FS_GuideInfo
	{
	public:
		E_GuideCategory                                            Category_2_77E8B02845EDBADCB5AC04A9DD9C8DFA;             // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DHJK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Title_5_17D910A645005136621E2387ACEECDE4;                // 0x0008(0x0018) Edit, BlueprintVisible
		class FText                                                DescText_7_FB9CC4D84110B80D585817A590D7D638;             // 0x0020(0x0018) Edit, BlueprintVisible
		unsigned char                                              Image_10_92DAEB2F46F969BF1C9E31A1D1D61B0B[0x28];         // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       IsAVideo_13_34564F0142052ED23A26BE8B8E356F5E;            // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J60D[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              VideoLink_15_DA3F6DBB4A729D39A03C66BC920944C3;           // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
