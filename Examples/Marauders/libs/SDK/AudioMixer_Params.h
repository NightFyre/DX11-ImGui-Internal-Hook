#pragma once

/**
 * Name: RaidGame
 * Version: 1
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function AudioMixer.SynthComponent.Stop
	 */
	struct USynthComponent_Stop_Params
	{	};

	/**
	 * Function AudioMixer.SynthComponent.Start
	 */
	struct USynthComponent_Start_Params
	{	};

	/**
	 * Function AudioMixer.SynthComponent.SetVolumeMultiplier
	 */
	struct USynthComponent_SetVolumeMultiplier_Params
	{
	public:
		float                                                      VolumeMultiplier;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.SynthComponent.SetSubmixSend
	 */
	struct USynthComponent_SetSubmixSend_Params
	{
	public:
		class USoundSubmixBase*                                    Submix;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SendLevel;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.SynthComponent.SetLowPassFilterFrequency
	 */
	struct USynthComponent_SetLowPassFilterFrequency_Params
	{
	public:
		float                                                      InLowPassFilterFrequency;                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.SynthComponent.SetLowPassFilterEnabled
	 */
	struct USynthComponent_SetLowPassFilterEnabled_Params
	{
	public:
		bool                                                       InLowPassFilterEnabled;                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.SynthComponent.IsPlaying
	 */
	struct USynthComponent_IsPlaying_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache
	 */
	struct UAudioMixerBlueprintLibrary_TrimAudioCache_Params
	{
	public:
		float                                                      InMegabytesToFree;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput
	 */
	struct UAudioMixerBlueprintLibrary_StopRecordingOutput_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAudioRecordingExportType                                  ExportType;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Q6IP[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Name;                                                    // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Path;                                                    // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundSubmix*                                        SubmixToRecord;                                          // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundWave*                                          ExistingSoundWaveToOverwrite;                            // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundWave*                                          ReturnValue;                                             // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.StopAudioBus
	 */
	struct UAudioMixerBlueprintLibrary_StopAudioBus_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAudioBus*                                           AudioBus;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput
	 */
	struct UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundSubmix*                                        SubmixToStopAnalyzing;                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput
	 */
	struct UAudioMixerBlueprintLibrary_StartRecordingOutput_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ExpectedDuration;                                        // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2NXV[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USoundSubmix*                                        SubmixToRecord;                                          // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.StartAudioBus
	 */
	struct UAudioMixerBlueprintLibrary_StartAudioBus_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAudioBus*                                           AudioBus;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput
	 */
	struct UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundSubmix*                                        SubmixToAnalyze;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EFFTSize                                                   FFTSize;                                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EFFTPeakInterpolationMethod                                InterpolationMethod;                                     // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EFFTWindowType                                             WindowType;                                              // 0x0012(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CU4L[0x1];                                   // 0x0013(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      HopSize;                                                 // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAudioSpectrumType                                         SpectrumType;                                            // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.SetSubmixEffectChainOverride
	 */
	struct UAudioMixerBlueprintLibrary_SetSubmixEffectChainOverride_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundSubmix*                                        SoundSubmix;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class USoundEffectSubmixPreset*>                    SubmixEffectPresetChain;                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		float                                                      FadeTimeSec;                                             // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry
	 */
	struct UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundEffectSourcePresetChain*                       PresetChain;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    EntryIndex;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bBypassed;                                               // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput
	 */
	struct UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundSubmix*                                        SubmixToPause;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSoundEffectSubmix
	 */
	struct UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundSubmix*                                        InSoundSubmix;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SubmixChainIndex;                                        // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_80X4[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USoundEffectSubmixPreset*                            SubmixEffectPreset;                                      // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPresetAtIndex
	 */
	struct UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundSubmix*                                        SoundSubmix;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SubmixChainIndex;                                        // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPreset
	 */
	struct UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundSubmix*                                        SoundSubmix;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundEffectSubmixPreset*                            SubmixEffectPreset;                                      // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain
	 */
	struct UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundEffectSourcePresetChain*                       PresetChain;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    EntryIndex;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect
	 */
	struct UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundEffectSubmixPreset*                            SubmixEffectPreset;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback
	 */
	struct UAudioMixerBlueprintLibrary_PrimeSoundForPlayback_Params
	{
	public:
		class USoundWave*                                          SoundWave;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnLoadCompletion;                                        // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback
	 */
	struct UAudioMixerBlueprintLibrary_PrimeSoundCueForPlayback_Params
	{
	public:
		class USoundCue*                                           SoundCue;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput
	 */
	struct UAudioMixerBlueprintLibrary_PauseRecordingOutput_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundSubmix*                                        SubmixToPause;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.MakePresetSpectralAnalysisBandSettings
	 */
	struct UAudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings_Params
	{
	public:
		EAudioSpectrumBandPresetType                               InBandPresetType;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FG7J[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InNumBands;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InAttackTimeMsec;                                        // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InReleaseTimeMsec;                                       // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FSoundSubmixSpectralAnalysisBandSettings>    ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.MakeMusicalSpectralAnalysisBandSettings
	 */
	struct UAudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings_Params
	{
	public:
		int32_t                                                    InNumSemitones;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMusicalNoteName                                           InStartingMusicalNote;                                   // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_S7GE[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InStartingOctave;                                        // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InAttackTimeMsec;                                        // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InReleaseTimeMsec;                                       // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_A5CB[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FSoundSubmixSpectralAnalysisBandSettings>    ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.MakeFullSpectrumSpectralAnalysisBandSettings
	 */
	struct UAudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings_Params
	{
	public:
		int32_t                                                    InNumBands;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InMinimumFrequency;                                      // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InMaximumFrequency;                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InAttackTimeMsec;                                        // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InReleaseTimeMsec;                                       // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8QEJ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FSoundSubmixSpectralAnalysisBandSettings>    ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.IsAudioBusActive
	 */
	struct UAudioMixerBlueprintLibrary_IsAudioBusActive_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAudioBus*                                           AudioBus;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies
	 */
	struct UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<float>                                              Frequencies;                                             // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<float>                                              Phases;                                                  // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		class USoundSubmix*                                        SubmixToAnalyze;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain
	 */
	struct UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundEffectSourcePresetChain*                       PresetChain;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies
	 */
	struct UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<float>                                              Frequencies;                                             // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<float>                                              Magnitudes;                                              // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		class USoundSubmix*                                        SubmixToAnalyze;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffects
	 */
	struct UAudioMixerBlueprintLibrary_ClearSubmixEffects_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundSubmix*                                        SoundSubmix;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffectChainOverride
	 */
	struct UAudioMixerBlueprintLibrary_ClearSubmixEffectChainOverride_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundSubmix*                                        SoundSubmix;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      FadeTimeSec;                                             // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects
	 */
	struct UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.AddSubmixEffect
	 */
	struct UAudioMixerBlueprintLibrary_AddSubmixEffect_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundSubmix*                                        SoundSubmix;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundEffectSubmixPreset*                            SubmixEffectPreset;                                      // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain
	 */
	struct UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundEffectSourcePresetChain*                       PresetChain;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSourceEffectChainEntry                             Entry;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect
	 */
	struct UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundEffectSubmixPreset*                            SubmixEffectPreset;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.QuartzClockHandle.UnsubscribeFromTimeDivision
	 */
	struct UQuartzClockHandle_UnsubscribeFromTimeDivision_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EQuartzCommandQuantization                                 InQuantizationBoundary;                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.QuartzClockHandle.UnsubscribeFromAllTimeDivisions
	 */
	struct UQuartzClockHandle_UnsubscribeFromAllTimeDivisions_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.QuartzClockHandle.SubscribeToQuantizationEvent
	 */
	struct UQuartzClockHandle_SubscribeToQuantizationEvent_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EQuartzCommandQuantization                                 InQuantizationBoundary;                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YV11[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      OnQuantizationEvent;                                     // 0x000C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.QuartzClockHandle.SubscribeToAllQuantizationEvents
	 */
	struct UQuartzClockHandle_SubscribeToAllQuantizationEvents_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnQuantizationEvent;                                     // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.QuartzClockHandle.SetTicksPerSecond
	 */
	struct UQuartzClockHandle_SetTicksPerSecond_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FQuartzQuantizationBoundary                         QuantizationBoundary;                                    // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0014(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		float                                                      TicksPerSecond;                                          // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.QuartzClockHandle.SetThirtySecondNotesPerMinute
	 */
	struct UQuartzClockHandle_SetThirtySecondNotesPerMinute_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FQuartzQuantizationBoundary                         QuantizationBoundary;                                    // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0014(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		float                                                      ThirtySecondsNotesPerMinute;                             // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.QuartzClockHandle.SetSecondsPerTick
	 */
	struct UQuartzClockHandle_SetSecondsPerTick_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FQuartzQuantizationBoundary                         QuantizationBoundary;                                    // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0014(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		float                                                      SecondsPerTick;                                          // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.QuartzClockHandle.SetMillisecondsPerTick
	 */
	struct UQuartzClockHandle_SetMillisecondsPerTick_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FQuartzQuantizationBoundary                         QuantizationBoundary;                                    // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0014(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		float                                                      MillisecondsPerTick;                                     // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.QuartzClockHandle.SetBeatsPerMinute
	 */
	struct UQuartzClockHandle_SetBeatsPerMinute_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FQuartzQuantizationBoundary                         QuantizationBoundary;                                    // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0014(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		float                                                      BeatsPerMinute;                                          // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.QuartzClockHandle.ResumeClock
	 */
	struct UQuartzClockHandle_ResumeClock_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.QuartzClockHandle.ResetTransport
	 */
	struct UQuartzClockHandle_ResetTransport_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      InDelegate;                                              // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.QuartzClockHandle.PauseClock
	 */
	struct UQuartzClockHandle_PauseClock_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.QuartzClockHandle.GetTicksPerSecond
	 */
	struct UQuartzClockHandle_GetTicksPerSecond_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.QuartzClockHandle.GetThirtySecondNotesPerMinute
	 */
	struct UQuartzClockHandle_GetThirtySecondNotesPerMinute_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.QuartzClockHandle.GetSecondsPerTick
	 */
	struct UQuartzClockHandle_GetSecondsPerTick_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.QuartzClockHandle.GetMillisecondsPerTick
	 */
	struct UQuartzClockHandle_GetMillisecondsPerTick_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.QuartzClockHandle.GetBeatsPerMinute
	 */
	struct UQuartzClockHandle_GetBeatsPerMinute_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings
	 */
	struct USubmixEffectDynamicsProcessorPreset_SetSettings_Params
	{
	public:
		struct FSubmixEffectDynamicsProcessorSettings              Settings;                                                // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix
	 */
	struct USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Params
	{
	public:
		class USoundSubmix*                                        Submix;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings
	 */
	struct USubmixEffectSubmixEQPreset_SetSettings_Params
	{
	public:
		struct FSubmixEffectSubmixEQSettings                       InSettings;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect
	 */
	struct USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Params
	{
	public:
		class UReverbEffect*                                       InReverbEffect;                                          // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      WetLevel;                                                // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DryLevel;                                                // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.SubmixEffectReverbPreset.SetSettings
	 */
	struct USubmixEffectReverbPreset_SetSettings_Params
	{
	public:
		struct FSubmixEffectReverbSettings                         InSettings;                                              // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.QuartzSubsystem.GetRoundTripMinLatency
	 */
	struct UQuartzSubsystem_GetRoundTripMinLatency_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.QuartzSubsystem.GetRoundTripMaxLatency
	 */
	struct UQuartzSubsystem_GetRoundTripMaxLatency_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.QuartzSubsystem.GetRoundTripAverageLatency
	 */
	struct UQuartzSubsystem_GetRoundTripAverageLatency_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.QuartzSubsystem.GetHandleForClock
	 */
	struct UQuartzSubsystem_GetHandleForClock_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ClockName;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UQuartzClockHandle*                                  ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMinLatency
	 */
	struct UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMaxLatency
	 */
	struct UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadAverageLatency
	 */
	struct UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMinLatency
	 */
	struct UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMaxLatency
	 */
	struct UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadAverageLatency
	 */
	struct UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.QuartzSubsystem.DoesClockExist
	 */
	struct UQuartzSubsystem_DoesClockExist_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ClockName;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioMixer.QuartzSubsystem.CreateNewClock
	 */
	struct UQuartzSubsystem_CreateNewClock_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ClockName;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FQuartzClockSettings                                InSettings;                                              // 0x0010(0x0020)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       bOverrideSettingsIfClockExists;                          // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PTKJ[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UQuartzClockHandle*                                  ReturnValue;                                             // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
