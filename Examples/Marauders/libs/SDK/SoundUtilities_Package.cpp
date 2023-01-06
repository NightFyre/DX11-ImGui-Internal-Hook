/**
 * Name: RaidGame
 * Version: 1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundSimple.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundSimple::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SoundUtilities.SoundSimple");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetPitchScaleFromMIDIPitch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            BaseMidiNote                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TargetMidiNote                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USoundUtilitiesBPFunctionLibrary::GetPitchScaleFromMIDIPitch(int32_t BaseMidiNote, int32_t TargetMidiNote)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetPitchScaleFromMIDIPitch");
		
		USoundUtilitiesBPFunctionLibrary_GetPitchScaleFromMIDIPitch_Params params {};
		params.BaseMidiNote = BaseMidiNote;
		params.TargetMidiNote = TargetMidiNote;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetMIDIPitchFromFrequency
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Frequency                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USoundUtilitiesBPFunctionLibrary::GetMIDIPitchFromFrequency(float Frequency)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetMIDIPitchFromFrequency");
		
		USoundUtilitiesBPFunctionLibrary_GetMIDIPitchFromFrequency_Params params {};
		params.Frequency = Frequency;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetFrequencyFromMIDIPitch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MidiNote                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USoundUtilitiesBPFunctionLibrary::GetFrequencyFromMIDIPitch(int32_t MidiNote)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetFrequencyFromMIDIPitch");
		
		USoundUtilitiesBPFunctionLibrary_GetFrequencyFromMIDIPitch_Params params {};
		params.MidiNote = MidiNote;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetBeatTempo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              BeatsPerMinute                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BeatMultiplier                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DivisionsOfWholeNote                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USoundUtilitiesBPFunctionLibrary::GetBeatTempo(float BeatsPerMinute, int32_t BeatMultiplier, int32_t DivisionsOfWholeNote)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetBeatTempo");
		
		USoundUtilitiesBPFunctionLibrary_GetBeatTempo_Params params {};
		params.BeatsPerMinute = BeatsPerMinute;
		params.BeatMultiplier = BeatMultiplier;
		params.DivisionsOfWholeNote = DivisionsOfWholeNote;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundUtilitiesBPFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundUtilitiesBPFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SoundUtilities.SoundUtilitiesBPFunctionLibrary");
		return ptr;
	}

}


