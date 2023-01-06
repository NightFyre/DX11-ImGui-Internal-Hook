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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Renderer.LightPropagationVolumeSettings
	 * Size -> 0x0040
	 */
	struct FLightPropagationVolumeSettings
	{
	public:
		unsigned char                                              bOverride_LPVIntensity : 1;                              // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_LPVDirectionalOcclusionIntensity : 1;          // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_LPVDirectionalOcclusionRadius : 1;             // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_LPVDiffuseOcclusionExponent : 1;               // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_LPVSpecularOcclusionExponent : 1;              // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_LPVDiffuseOcclusionIntensity : 1;              // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_LPVSpecularOcclusionIntensity : 1;             // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_LPVSize : 1;                                   // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_LPVSecondaryOcclusionIntensity : 1;            // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_LPVSecondaryBounceIntensity : 1;               // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_LPVGeometryVolumeBias : 1;                     // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_LPVVplInjectionBias : 1;                       // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_LPVEmissiveInjectionIntensity : 1;             // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X7QD[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LPVIntensity;                                            // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LPVVplInjectionBias;                                     // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LPVSize;                                                 // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LPVSecondaryOcclusionIntensity;                          // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LPVSecondaryBounceIntensity;                             // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LPVGeometryVolumeBias;                                   // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LPVEmissiveInjectionIntensity;                           // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LPVDirectionalOcclusionIntensity;                        // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LPVDirectionalOcclusionRadius;                           // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LPVDiffuseOcclusionExponent;                             // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LPVSpecularOcclusionExponent;                            // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LPVDiffuseOcclusionIntensity;                            // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LPVSpecularOcclusionIntensity;                           // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LPVFadeRange;                                            // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LPVDirectionalOcclusionFadeRange;                        // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
