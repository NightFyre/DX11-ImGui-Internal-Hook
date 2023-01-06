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
	 * Class FacialAnimation.AudioCurveSourceComponent
	 * Size -> 0x0040 (FullSize[0x08A0] - InheritedSize[0x0860])
	 */
	class UAudioCurveSourceComponent : public UAudioComponent
	{
	public:
		unsigned char                                              UnknownData_FAHZ[0x8];                                   // 0x0860(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CurveSourceBindingName;                                  // 0x0868(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurveSyncOffset;                                         // 0x0870(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PCLV[0x2C];                                  // 0x0874(0x002C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
