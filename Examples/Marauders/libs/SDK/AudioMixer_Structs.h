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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum AudioMixer.EMusicalNoteName
	 */
	enum class EMusicalNoteName : uint8_t
	{
		C   = 0,
		Db  = 1,
		D   = 2,
		Eb  = 3,
		E   = 4,
		F   = 5,
		Gb  = 6,
		G   = 7,
		Ab  = 8,
		A   = 9,
		Bb  = 10,
		B   = 11,
		MAX = 12
	};

	/**
	 * Enum AudioMixer.ESubmixEffectDynamicsChannelLinkMode
	 */
	enum class ESubmixEffectDynamicsChannelLinkMode : uint8_t
	{
		Disabled = 0,
		Average  = 1,
		Peak     = 2,
		Count    = 3,
		MAX      = 4
	};

	/**
	 * Enum AudioMixer.ESubmixEffectDynamicsPeakMode
	 */
	enum class ESubmixEffectDynamicsPeakMode : uint8_t
	{
		MeanSquared     = 0,
		RootMeanSquared = 1,
		Peak            = 2,
		Count           = 3,
		MAX             = 4
	};

	/**
	 * Enum AudioMixer.ESubmixEffectDynamicsProcessorType
	 */
	enum class ESubmixEffectDynamicsProcessorType : uint8_t
	{
		Compressor = 0,
		Limiter    = 1,
		Expander   = 2,
		Gate       = 3,
		Count      = 4,
		MAX        = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AudioMixer.SubmixEffectDynamicProcessorFilterSettings
	 * Size -> 0x000C
	 */
	struct FSubmixEffectDynamicProcessorFilterSettings
	{
	public:
		unsigned char                                              bEnabled : 1;                                            // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VWEO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Cutoff;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GainDb;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AudioMixer.SubmixEffectDynamicsProcessorSettings
	 * Size -> 0x0050
	 */
	struct FSubmixEffectDynamicsProcessorSettings
	{
	public:
		ESubmixEffectDynamicsProcessorType                         DynamicsProcessorType;                                   // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESubmixEffectDynamicsPeakMode                              PeakMode;                                                // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESubmixEffectDynamicsChannelLinkMode                       LinkMode;                                                // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UMNH[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InputGainDb;                                             // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ThresholdDb;                                             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Ratio;                                                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      KneeBandwidthDb;                                         // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LookAheadMsec;                                           // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AttackTimeMsec;                                          // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReleaseTimeMsec;                                         // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundSubmix*                                        ExternalSubmix;                                          // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bChannelLinked : 1;                                      // 0x0028(0x0001) BIT_FIELD Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAnalogMode : 1;                                         // 0x0028(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bKeyAudition : 1;                                        // 0x0028(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DC2H[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      KeyGainDb;                                               // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OutputGainDb;                                            // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSubmixEffectDynamicProcessorFilterSettings         KeyHighshelf;                                            // 0x0034(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FSubmixEffectDynamicProcessorFilterSettings         KeyLowshelf;                                             // 0x0040(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_76UT[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AudioMixer.SubmixEffectEQBand
	 * Size -> 0x0010
	 */
	struct FSubmixEffectEQBand
	{
	public:
		float                                                      Frequency;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Bandwidth;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GainDb;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnabled : 1;                                            // 0x000C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q1W8[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AudioMixer.SubmixEffectSubmixEQSettings
	 * Size -> 0x0010
	 */
	struct FSubmixEffectSubmixEQSettings
	{
	public:
		TArray<struct FSubmixEffectEQBand>                         EQBands;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AudioMixer.SubmixEffectReverbSettings
	 * Size -> 0x0040
	 */
	struct FSubmixEffectReverbSettings
	{
	public:
		bool                                                       bBypassEarlyReflections;                                 // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_477A[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ReflectionsDelay;                                        // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GainHF;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReflectionsGain;                                         // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBypassLateReflections;                                  // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1TYU[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LateDelay;                                               // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DecayTime;                                               // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Density;                                                 // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Diffusion;                                               // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AirAbsorptionGainHF;                                     // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DecayHFRatio;                                            // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LateGain;                                                // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Gain;                                                    // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WetLevel;                                                // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DryLevel;                                                // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBypass;                                                 // 0x003C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_11FY[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
