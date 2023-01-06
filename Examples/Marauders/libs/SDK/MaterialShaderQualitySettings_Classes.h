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
	 * Class MaterialShaderQualitySettings.MaterialShaderQualitySettings
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UMaterialShaderQualitySettings : public UObject
	{
	public:
		TMap<class FName, class UShaderPlatformQualitySettings*>   ForwardSettingMap;                                       // 0x0028(0x0050) NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UShaderPlatformQualitySettings : public UObject
	{
	public:
		struct FMaterialQualityOverrides                           QualityOverrides[0x4];                                   // 0x0028(0x0024) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_44MZ[0x14];                                  // 0x004C(0x0014) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
