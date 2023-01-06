#pragma once

/**
 * Name: Task_Force
 * Version: 0.3.6.1537
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
	 * Class LightPropagationVolumeRuntime.LightPropagationVolumeBlendable
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class ULightPropagationVolumeBlendable : public UObject
	{
	public:
		unsigned char                                              UnknownData_458D[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLightPropagationVolumeSettings                     Settings;                                                // 0x0030(0x0040) Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic
		float                                                      BlendWeight;                                             // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1ZR4[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
