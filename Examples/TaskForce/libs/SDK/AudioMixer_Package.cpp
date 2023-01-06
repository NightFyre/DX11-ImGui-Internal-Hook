/**
 * Name: Task_Force
 * Version: 0.3.6.1537
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x013BA9F0
	 * 		Name   -> Function AudioMixer.SynthComponent.Stop
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USynthComponent::Stop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.Stop");
		
		USynthComponent_Stop_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013BA710
	 * 		Name   -> Function AudioMixer.SynthComponent.Start
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USynthComponent::Start()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.Start");
		
		USynthComponent_Start_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013BA690
	 * 		Name   -> Function AudioMixer.SynthComponent.SetVolumeMultiplier
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              VolumeMultiplier                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponent::SetVolumeMultiplier(float VolumeMultiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.SetVolumeMultiplier");
		
		USynthComponent_SetVolumeMultiplier_Params params {};
		params.VolumeMultiplier = VolumeMultiplier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013BA5C0
	 * 		Name   -> Function AudioMixer.SynthComponent.SetSubmixSend
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USoundSubmix*                                Submix                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SendLevel                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponent::SetSubmixSend(class USoundSubmix* Submix, float SendLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.SetSubmixSend");
		
		USynthComponent_SetSubmixSend_Params params {};
		params.Submix = Submix;
		params.SendLevel = SendLevel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013B9E40
	 * 		Name   -> Function AudioMixer.SynthComponent.IsPlaying
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool USynthComponent::IsPlaying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.IsPlaying");
		
		USynthComponent_IsPlaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USynthComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USynthComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioMixer.SynthComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioMixer.AudioGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013BAAC0
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAudioRecordingExportType                          ExportType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundSubmix*                                SubmixToRecord                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundWave*                                  ExistingSoundWaveToOverwrite                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USoundWave* UAudioMixerBlueprintLibrary::STATIC_StopRecordingOutput(class UObject* WorldContextObject, EAudioRecordingExportType ExportType, const class FString& Name, const class FString& Path, class USoundSubmix* SubmixToRecord, class USoundWave* ExistingSoundWaveToOverwrite)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput");
		
		UAudioMixerBlueprintLibrary_StopRecordingOutput_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ExportType = ExportType;
		params.Name = Name;
		params.Path = Path;
		params.SubmixToRecord = SubmixToRecord;
		params.ExistingSoundWaveToOverwrite = ExistingSoundWaveToOverwrite;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013BAA10
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundSubmix*                                SubmixToStopAnalyzing                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::STATIC_StopAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToStopAnalyzing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput");
		
		UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SubmixToStopAnalyzing = SubmixToStopAnalyzing;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013BA8F0
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ExpectedDuration                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundSubmix*                                SubmixToRecord                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::STATIC_StartRecordingOutput(class UObject* WorldContextObject, float ExpectedDuration, class USoundSubmix* SubmixToRecord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput");
		
		UAudioMixerBlueprintLibrary_StartRecordingOutput_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ExpectedDuration = ExpectedDuration;
		params.SubmixToRecord = SubmixToRecord;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013BA730
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundSubmix*                                SubmixToAnalyze                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFFTSize                                           FFTSize                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFFTPeakInterpolationMethod                        InterpolationMethod                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFFTWindowType                                     WindowType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              HopSize                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::STATIC_StartAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToAnalyze, EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput");
		
		UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SubmixToAnalyze = SubmixToAnalyze;
		params.FFTSize = FFTSize;
		params.InterpolationMethod = InterpolationMethod;
		params.WindowType = WindowType;
		params.HopSize = HopSize;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013BA170
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundEffectSourcePresetChain*               PresetChain                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            EntryIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bBypassed                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::STATIC_SetBypassSourceEffectChainEntry(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex, bool bBypassed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry");
		
		UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PresetChain = PresetChain;
		params.EntryIndex = EntryIndex;
		params.bBypassed = bBypassed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013BA0C0
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundSubmix*                                SubmixToPause                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::STATIC_ResumeRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput");
		
		UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SubmixToPause = SubmixToPause;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013B9FD0
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundEffectSourcePresetChain*               PresetChain                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            EntryIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::STATIC_RemoveSourceEffectFromPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain");
		
		UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PresetChain = PresetChain;
		params.EntryIndex = EntryIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013B9F20
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundEffectSubmixPreset*                    SubmixEffectPreset                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::STATIC_RemoveMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect");
		
		UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SubmixEffectPreset = SubmixEffectPreset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013B9E70
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundSubmix*                                SubmixToPause                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::STATIC_PauseRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput");
		
		UAudioMixerBlueprintLibrary_PauseRecordingOutput_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SubmixToPause = SubmixToPause;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013B9CC0
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      Frequencies                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      Phases                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class USoundSubmix*                                SubmixToAnalyze                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::STATIC_GetPhaseForFrequencies(class UObject* WorldContextObject, TArray<float> Frequencies, TArray<float>* Phases, class USoundSubmix* SubmixToAnalyze)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies");
		
		UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Frequencies = Frequencies;
		params.SubmixToAnalyze = SubmixToAnalyze;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Phases != nullptr)
			*Phases = params.Phases;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013B9C00
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundEffectSourcePresetChain*               PresetChain                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UAudioMixerBlueprintLibrary::STATIC_GetNumberOfEntriesInSourceEffectChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain");
		
		UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PresetChain = PresetChain;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013B9A80
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      Frequencies                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      Magnitudes                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class USoundSubmix*                                SubmixToAnalyze                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::STATIC_GetMagnitudeForFrequencies(class UObject* WorldContextObject, TArray<float> Frequencies, TArray<float>* Magnitudes, class USoundSubmix* SubmixToAnalyze)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies");
		
		UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Frequencies = Frequencies;
		params.SubmixToAnalyze = SubmixToAnalyze;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Magnitudes != nullptr)
			*Magnitudes = params.Magnitudes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013B9A10
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::STATIC_ClearMasterSubmixEffects(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects");
		
		UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013B9910
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundEffectSourcePresetChain*               PresetChain                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSourceEffectChainEntry                     Entry                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::STATIC_AddSourceEffectToPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, const struct FSourceEffectChainEntry& Entry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain");
		
		UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PresetChain = PresetChain;
		params.Entry = Entry;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013B9860
	 * 		Name   -> Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundEffectSubmixPreset*                    SubmixEffectPreset                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMixerBlueprintLibrary::STATIC_AddMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect");
		
		UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SubmixEffectPreset = SubmixEffectPreset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioMixerBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioMixerBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioMixer.AudioMixerBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013BA2A0
	 * 		Name   -> Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSubmixEffectDynamicsProcessorSettings      InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectDynamicsProcessorPreset::SetSettings(const struct FSubmixEffectDynamicsProcessorSettings& InSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings");
		
		USubmixEffectDynamicsProcessorPreset_SetSettings_Params params {};
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USubmixEffectDynamicsProcessorPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubmixEffectDynamicsProcessorPreset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioMixer.SubmixEffectDynamicsProcessorPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013BA410
	 * 		Name   -> Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSubmixEffectSubmixEQSettings               InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectSubmixEQPreset::SetSettings(const struct FSubmixEffectSubmixEQSettings& InSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings");
		
		USubmixEffectSubmixEQPreset_SetSettings_Params params {};
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USubmixEffectSubmixEQPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubmixEffectSubmixEQPreset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioMixer.SubmixEffectSubmixEQPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013BA4C0
	 * 		Name   -> Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UReverbEffect*                               InReverbEffect                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              WetLevel                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DryLevel                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectReverbPreset::SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel, float DryLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect");
		
		USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Params params {};
		params.InReverbEffect = InReverbEffect;
		params.WetLevel = WetLevel;
		params.DryLevel = DryLevel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013BA350
	 * 		Name   -> Function AudioMixer.SubmixEffectReverbPreset.SetSettings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSubmixEffectReverbSettings                 InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectReverbPreset::SetSettings(const struct FSubmixEffectReverbSettings& InSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectReverbPreset.SetSettings");
		
		USubmixEffectReverbPreset_SetSettings_Params params {};
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USubmixEffectReverbPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubmixEffectReverbPreset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioMixer.SubmixEffectReverbPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013BA4C0
	 * 		Name   -> Function AudioMixer.SubmixEffectReverbFastPreset.SetSettingsWithReverbEffect
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UReverbEffect*                               InReverbEffect                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              WetLevel                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DryLevel                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectReverbFastPreset::SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel, float DryLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectReverbFastPreset.SetSettingsWithReverbEffect");
		
		USubmixEffectReverbFastPreset_SetSettingsWithReverbEffect_Params params {};
		params.InReverbEffect = InReverbEffect;
		params.WetLevel = WetLevel;
		params.DryLevel = DryLevel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013BA350
	 * 		Name   -> Function AudioMixer.SubmixEffectReverbFastPreset.SetSettings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSubmixEffectReverbFastSettings             InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectReverbFastPreset::SetSettings(const struct FSubmixEffectReverbFastSettings& InSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectReverbFastPreset.SetSettings");
		
		USubmixEffectReverbFastPreset_SetSettings_Params params {};
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USubmixEffectReverbFastPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubmixEffectReverbFastPreset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioMixer.SubmixEffectReverbFastPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USynthSound.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USynthSound::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioMixer.SynthSound");
		return ptr;
	}

}


