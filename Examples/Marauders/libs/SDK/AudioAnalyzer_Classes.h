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
	 * Class AudioAnalyzer.AudioAnalyzerAsset
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAudioAnalyzerAsset : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioAnalyzer.AudioAnalyzerNRTSettings
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAudioAnalyzerNRTSettings : public UAudioAnalyzerAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioAnalyzer.AudioAnalyzerNRT
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UAudioAnalyzerNRT : public UAudioAnalyzerAsset
	{
	public:
		class USoundWave*                                          Sound;                                                   // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DurationInSeconds;                                       // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z2KM[0x44];                                  // 0x0034(0x0044) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
