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
	 * Class AudioSynesthesia.AudioSynesthesiaNRTSettings
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAudioSynesthesiaNRTSettings : public UAudioAnalyzerNRTSettings
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioSynesthesia.AudioSynesthesiaNRT
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class UAudioSynesthesiaNRT : public UAudioAnalyzerNRT
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioSynesthesia.ConstantQNRTSettings
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UConstantQNRTSettings : public UAudioSynesthesiaNRTSettings
	{
	public:
		float                                                      StartingFrequency;                                       // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumBands;                                                // 0x002C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NumBandsPerOctave;                                       // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnalysisPeriod;                                          // 0x0034(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDownmixToMono;                                          // 0x0038(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EConstantQFFTSizeEnum                                      FFTSize;                                                 // 0x0039(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFFTWindowType                                             WindowType;                                              // 0x003A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAudioSpectrumType                                         SpectrumType;                                            // 0x003B(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BandWidthStretch;                                        // 0x003C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EConstantQNormalizationEnum                                CQTNormalization;                                        // 0x0040(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L914[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NoiseFloorDb;                                            // 0x0044(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioSynesthesia.ConstantQNRT
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	class UConstantQNRT : public UAudioSynesthesiaNRT
	{
	public:
		class UConstantQNRTSettings*                               Settings;                                                // 0x0078(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void GetNormalizedChannelConstantQAtTime(float InSeconds, int32_t InChannel, TArray<float>* OutConstantQ);
		void GetChannelConstantQAtTime(float InSeconds, int32_t InChannel, TArray<float>* OutConstantQ);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioSynesthesia.LoudnessNRTSettings
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class ULoudnessNRTSettings : public UAudioSynesthesiaNRTSettings
	{
	public:
		float                                                      AnalysisPeriod;                                          // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimumFrequency;                                        // 0x002C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumFrequency;                                        // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELoudnessNRTCurveTypeEnum                                  CurveType;                                               // 0x0034(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_REDC[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NoiseFloorDb;                                            // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PJPM[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioSynesthesia.LoudnessNRT
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	class ULoudnessNRT : public UAudioSynesthesiaNRT
	{
	public:
		class ULoudnessNRTSettings*                                Settings;                                                // 0x0078(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void GetNormalizedLoudnessAtTime(float InSeconds, float* OutLoudness);
		void GetNormalizedChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float* OutLoudness);
		void GetLoudnessAtTime(float InSeconds, float* OutLoudness);
		void GetChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float* OutLoudness);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioSynesthesia.OnsetNRTSettings
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UOnsetNRTSettings : public UAudioSynesthesiaNRTSettings
	{
	public:
		bool                                                       bDownmixToMono;                                          // 0x0028(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U0IW[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GranularityInSeconds;                                    // 0x002C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Sensitivity;                                             // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimumFrequency;                                        // 0x0034(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumFrequency;                                        // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S3JP[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioSynesthesia.OnsetNRT
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	class UOnsetNRT : public UAudioSynesthesiaNRT
	{
	public:
		class UOnsetNRTSettings*                                   Settings;                                                // 0x0078(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void GetNormalizedChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, TArray<float>* OutOnsetTimestamps, TArray<float>* OutOnsetStrengths);
		void GetChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, TArray<float>* OutOnsetTimestamps, TArray<float>* OutOnsetStrengths);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
