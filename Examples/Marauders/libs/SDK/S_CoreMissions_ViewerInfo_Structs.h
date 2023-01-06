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
	 * UserDefinedStruct S_CoreMissions_ViewerInfo.S_CoreMissions_ViewerInfo
	 * Size -> 0x0040
	 */
	struct FS_CoreMissions_ViewerInfo
	{
	public:
		float                                                      BoomDistance_3_99B4651847372CBAFD9F95AA6255626C;         // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WK1Z[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          TransformAdditive_6_C0060FDB4A6A12B4F98CD8A5D9B21151;    // 0x0010(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
