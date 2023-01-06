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
	 * UserDefinedStruct S_WpnWB_ViewerInfo.S_WpnWB_ViewerInfo
	 * Size -> 0x0048
	 */
	struct FS_WpnWB_ViewerInfo
	{
	public:
		struct FTransform                                          WeaponTransformOffset_3_B9B357AE43236C0E9A47EF9B0AA80654; // 0x0000(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		float                                                      MainCameraBoomLength_6_897AD26D4D5DBA02DB78118819C3D089; // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QJA3[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FS_AttachmentCameraOffset>                   AttachmentsViewOffsets_10_46A1B96C4005EF480D185AA385C0D52C; // 0x0038(0x0010) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
