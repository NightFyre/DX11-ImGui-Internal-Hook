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
	 * UserDefinedStruct S_AttachmentCameraOffset.S_AttachmentCameraOffset
	 * Size -> 0x0090
	 */
	struct FS_AttachmentCameraOffset
	{
	public:
		EAttachmentSlot                                            WhichAttachSlot_7_17402390479E1AE25400F7843A0755E0;      // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IJDB[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          CameraBoomOffsetTransform_10_C35F283C4573EC18CD4786A20E704A5C; // 0x0010(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		float                                                      BoomLength_11_FFB72EEB4D214845A8EB7AB14C4C2BFF;          // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ZoomInbyX_12_A2B6698546F7A079C034718CFA9689D4;           // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6RO9[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          AttachRelativeOffsetStartLoc_18_E013113B450F2BEA69A38A8F3238AA78; // 0x0050(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		class USoundCue*                                           AttachSound_17_21BA33734506D085CD6D079DCEBCBAC7;         // 0x0080(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundCue*                                           DetachSound_21_AC8492C5498210CD84A3B9973F951600;         // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
