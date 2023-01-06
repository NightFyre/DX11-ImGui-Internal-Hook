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
	 * Class AudioExtensions.OcclusionPluginSourceSettingsBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOcclusionPluginSourceSettingsBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioExtensions.ReverbPluginSourceSettingsBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UReverbPluginSourceSettingsBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioExtensions.SpatializationPluginSourceSettingsBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USpatializationPluginSourceSettingsBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioExtensions.SoundfieldEncodingSettingsBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USoundfieldEncodingSettingsBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioExtensions.AudioEndpointSettingsBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAudioEndpointSettingsBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioExtensions.SoundModulatorBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USoundModulatorBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioExtensions.SoundfieldEndpointSettingsBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USoundfieldEndpointSettingsBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioExtensions.SoundfieldEffectSettingsBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USoundfieldEffectSettingsBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioExtensions.SoundfieldEffectBase
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class USoundfieldEffectBase : public UObject
	{
	public:
		class USoundfieldEffectSettingsBase*                       Settings;                                                // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
