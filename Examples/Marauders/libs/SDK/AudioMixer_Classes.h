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
	 * Class AudioMixer.SynthComponent
	 * Size -> 0x04C8 (FullSize[0x06C0] - InheritedSize[0x01F8])
	 */
	class USynthComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_0R90[0x8];                                   // 0x01F8(0x0008) Fix Super Size
		class USoundAttenuation*                                   AttenuationSettings;                                     // 0x0200(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoundAttenuationSettings                           AttenuationOverrides;                                    // 0x0208(0x03A0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class USoundConcurrency*                                   ConcurrencySettings;                                     // 0x05A8(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ConcurrencySet[0x50];                                    // 0x05B0(0x0050) UNKNOWN PROPERTY: SetProperty
		class USoundClass*                                         SoundClass;                                              // 0x0600(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundEffectSourcePresetChain*                       SourceEffectChain;                                       // 0x0608(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundSubmixBase*                                    SoundSubmix;                                             // 0x0610(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FSoundSubmixSendInfo>                        SoundSubmixSends;                                        // 0x0618(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSoundSourceBusSendInfo>                     BusSends;                                                // 0x0628(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSoundSourceBusSendInfo>                     PreEffectBusSends;                                       // 0x0638(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              bIsUISound : 1;                                          // 0x0648(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsPreviewSound : 1;                                     // 0x0648(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2E2O[0x3];                                   // 0x0649(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    EnvelopeFollowerAttackTime;                              // 0x064C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EnvelopeFollowerReleaseTime;                             // 0x0650(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XV5H[0x4];                                   // 0x0654(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnAudioEnvelopeValue;                                    // 0x0658(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5GY6[0x20];                                  // 0x0668(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USynthSound*                                         Synth;                                                   // 0x0688(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAudioComponent*                                     AudioComponent;                                          // 0x0690(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TYA4[0x28];                                  // 0x0698(0x0028) MISSED OFFSET (PADDING)

	public:
		void Stop();
		void Start();
		void SetVolumeMultiplier(float VolumeMultiplier);
		void SetSubmixSend(class USoundSubmixBase* Submix, float SendLevel);
		void SetLowPassFilterFrequency(float InLowPassFilterFrequency);
		void SetLowPassFilterEnabled(bool InLowPassFilterEnabled);
		bool IsPlaying();
		static UClass* StaticClass();
	};

	/**
	 * Class AudioMixer.AudioGenerator
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class UAudioGenerator : public UObject
	{
	public:
		unsigned char                                              UnknownData_0UCG[0x80];                                  // 0x0028(0x0080) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioMixer.AudioMixerBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		float TrimAudioCache(float InMegabytesToFree);
		class USoundWave* StopRecordingOutput(class UObject* WorldContextObject, EAudioRecordingExportType ExportType, const class FString& Name, const class FString& Path, class USoundSubmix* SubmixToRecord, class USoundWave* ExistingSoundWaveToOverwrite);
		void StopAudioBus(class UObject* WorldContextObject, class UAudioBus* AudioBus);
		void StopAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToStopAnalyzing);
		void StartRecordingOutput(class UObject* WorldContextObject, float ExpectedDuration, class USoundSubmix* SubmixToRecord);
		void StartAudioBus(class UObject* WorldContextObject, class UAudioBus* AudioBus);
		void StartAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToAnalyze, EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize, EAudioSpectrumType SpectrumType);
		void SetSubmixEffectChainOverride(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, TArray<class USoundEffectSubmixPreset*> SubmixEffectPresetChain, float FadeTimeSec);
		void SetBypassSourceEffectChainEntry(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex, bool bBypassed);
		void ResumeRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);
		void ReplaceSoundEffectSubmix(class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int32_t SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset);
		void RemoveSubmixEffectPresetAtIndex(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int32_t SubmixChainIndex);
		void RemoveSubmixEffectPreset(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);
		void RemoveSourceEffectFromPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex);
		void RemoveMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
		void PrimeSoundForPlayback(class USoundWave* SoundWave, const class FScriptDelegate& OnLoadCompletion);
		void PrimeSoundCueForPlayback(class USoundCue* SoundCue);
		void PauseRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);
		TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakePresetSpectralAnalysisBandSettings(EAudioSpectrumBandPresetType InBandPresetType, int32_t InNumBands, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec);
		TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakeMusicalSpectralAnalysisBandSettings(int32_t InNumSemitones, EMusicalNoteName InStartingMusicalNote, int32_t InStartingOctave, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec);
		TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakeFullSpectrumSpectralAnalysisBandSettings(int32_t InNumBands, float InMinimumFrequency, float InMaximumFrequency, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec);
		bool IsAudioBusActive(class UObject* WorldContextObject, class UAudioBus* AudioBus);
		void GetPhaseForFrequencies(class UObject* WorldContextObject, TArray<float> Frequencies, TArray<float>* Phases, class USoundSubmix* SubmixToAnalyze);
		int32_t GetNumberOfEntriesInSourceEffectChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain);
		void GetMagnitudeForFrequencies(class UObject* WorldContextObject, TArray<float> Frequencies, TArray<float>* Magnitudes, class USoundSubmix* SubmixToAnalyze);
		void ClearSubmixEffects(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix);
		void ClearSubmixEffectChainOverride(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, float FadeTimeSec);
		void ClearMasterSubmixEffects(class UObject* WorldContextObject);
		int32_t AddSubmixEffect(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);
		void AddSourceEffectToPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, const struct FSourceEffectChainEntry& Entry);
		void AddMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioMixer.QuartzClockHandle
	 * Size -> 0x0168 (FullSize[0x0190] - InheritedSize[0x0028])
	 */
	class UQuartzClockHandle : public UObject
	{
	public:
		unsigned char                                              UnknownData_OVKS[0x168];                                 // 0x0028(0x0168) MISSED OFFSET (PADDING)

	public:
		void UnsubscribeFromTimeDivision(class UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary);
		void UnsubscribeFromAllTimeDivisions(class UObject* WorldContextObject);
		void SubscribeToQuantizationEvent(class UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary, const class FScriptDelegate& OnQuantizationEvent);
		void SubscribeToAllQuantizationEvents(class UObject* WorldContextObject, const class FScriptDelegate& OnQuantizationEvent);
		void SetTicksPerSecond(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const class FScriptDelegate& Delegate, float TicksPerSecond);
		void SetThirtySecondNotesPerMinute(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const class FScriptDelegate& Delegate, float ThirtySecondsNotesPerMinute);
		void SetSecondsPerTick(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const class FScriptDelegate& Delegate, float SecondsPerTick);
		void SetMillisecondsPerTick(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const class FScriptDelegate& Delegate, float MillisecondsPerTick);
		void SetBeatsPerMinute(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const class FScriptDelegate& Delegate, float BeatsPerMinute);
		void ResumeClock(class UObject* WorldContextObject);
		void ResetTransport(class UObject* WorldContextObject, const class FScriptDelegate& InDelegate);
		void PauseClock(class UObject* WorldContextObject);
		float GetTicksPerSecond(class UObject* WorldContextObject);
		float GetThirtySecondNotesPerMinute(class UObject* WorldContextObject);
		float GetSecondsPerTick(class UObject* WorldContextObject);
		float GetMillisecondsPerTick(class UObject* WorldContextObject);
		float GetBeatsPerMinute(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioMixer.SubmixEffectDynamicsProcessorPreset
	 * Size -> 0x00C8 (FullSize[0x0130] - InheritedSize[0x0068])
	 */
	class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
	{
	public:
		unsigned char                                              UnknownData_ZU6W[0x78];                                  // 0x0068(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSubmixEffectDynamicsProcessorSettings              Settings;                                                // 0x00E0(0x0050) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetSettings(const struct FSubmixEffectDynamicsProcessorSettings& Settings);
		void SetExternalSubmix(class USoundSubmix* Submix);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioMixer.SubmixEffectSubmixEQPreset
	 * Size -> 0x0048 (FullSize[0x00B0] - InheritedSize[0x0068])
	 */
	class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
	{
	public:
		unsigned char                                              UnknownData_WT5I[0x38];                                  // 0x0068(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSubmixEffectSubmixEQSettings                       Settings;                                                // 0x00A0(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		void SetSettings(const struct FSubmixEffectSubmixEQSettings& InSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioMixer.SubmixEffectReverbPreset
	 * Size -> 0x00A8 (FullSize[0x0110] - InheritedSize[0x0068])
	 */
	class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
	{
	public:
		unsigned char                                              UnknownData_34JX[0x68];                                  // 0x0068(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSubmixEffectReverbSettings                         Settings;                                                // 0x00D0(0x0040) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel, float DryLevel);
		void SetSettings(const struct FSubmixEffectReverbSettings& InSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioMixer.QuartzSubsystem
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UQuartzSubsystem : public UWorldSubsystem
	{
	public:
		unsigned char                                              UnknownData_IWC9[0x50];                                  // 0x0030(0x0050) MISSED OFFSET (PADDING)

	public:
		float GetRoundTripMinLatency(class UObject* WorldContextObject);
		float GetRoundTripMaxLatency(class UObject* WorldContextObject);
		float GetRoundTripAverageLatency(class UObject* WorldContextObject);
		class UQuartzClockHandle* GetHandleForClock(class UObject* WorldContextObject, const class FName& ClockName);
		float GetGameThreadToAudioRenderThreadMinLatency(class UObject* WorldContextObject);
		float GetGameThreadToAudioRenderThreadMaxLatency(class UObject* WorldContextObject);
		float GetGameThreadToAudioRenderThreadAverageLatency(class UObject* WorldContextObject);
		float GetAudioRenderThreadToGameThreadMinLatency();
		float GetAudioRenderThreadToGameThreadMaxLatency();
		float GetAudioRenderThreadToGameThreadAverageLatency();
		bool DoesClockExist(class UObject* WorldContextObject, const class FName& ClockName);
		class UQuartzClockHandle* CreateNewClock(class UObject* WorldContextObject, const class FName& ClockName, const struct FQuartzClockSettings& InSettings, bool bOverrideSettingsIfClockExists);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioMixer.SynthSound
	 * Size -> 0x0020 (FullSize[0x03E0] - InheritedSize[0x03C0])
	 */
	class USynthSound : public USoundWaveProcedural
	{
	public:
		class USynthComponent*                                     OwningSynthComponent;                                    // 0x03C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DSXS[0x18];                                  // 0x03C8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
