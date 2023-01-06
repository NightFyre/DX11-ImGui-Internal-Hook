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
	 * ControlRigBlueprintGeneratedClass RaiderChar01_CtrlRig_HitReacts.RaiderChar01_CtrlRig_HitReacts_C
	 * Size -> 0x0180 (FullSize[0x07D0] - InheritedSize[0x0650])
	 */
	class URaiderChar01_CtrlRig_HitReacts_C : public UControlRig
	{
	public:
		struct FTransform                                          RhandInitialPosition;                                    // 0x0650(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		struct FTransform                                          RElbowInitialPosition;                                   // 0x0680(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		struct FTransform                                          LhandInitialPosition;                                    // 0x06B0(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		struct FTransform                                          LElbowInitialPosition;                                   // 0x06E0(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		struct FTransform                                          RLegInitialPosition;                                     // 0x0710(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		struct FTransform                                          RKneeInitialPosition;                                    // 0x0740(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		struct FTransform                                          LLegInitialPosition;                                     // 0x0770(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		struct FTransform                                          LKneeInitialPosition;                                    // 0x07A0(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
