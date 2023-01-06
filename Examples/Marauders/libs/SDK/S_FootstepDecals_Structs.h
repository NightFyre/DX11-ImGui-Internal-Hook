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
	 * UserDefinedStruct S_FootstepDecals.S_FootstepDecals
	 * Size -> 0x0020
	 */
	struct FS_FootstepDecals
	{
	public:
		class UPhysicalMaterial*                                   CausedByWhatPhysMat_3_4F12828249012FEFDEB2CCB84593161B;  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumberOfStepsLasts_5_CD3B0EF243F0642159410F887A335505;   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LengthOfTimeEachStepLasts_8_6E91DC6B4392A983EDF3F9B0007C10BE; // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstance*                                   Decal_LeftFootMIC_13_CF28DFB54D5A0D57427FC78E8D92A582;   // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstance*                                   Decal_RightFootMIC_14_D671BC8A41F907C81690088BBB82F9D1;  // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
