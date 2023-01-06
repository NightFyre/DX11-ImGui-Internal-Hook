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
	 * Class SoundUtilities.SoundSimple
	 * Size -> 0x0018 (FullSize[0x01D0] - InheritedSize[0x01B8])
	 */
	class USoundSimple : public USoundBase
	{
	public:
		TArray<struct FSoundVariation>                             Variations;                                              // 0x01B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class USoundWave*                                          SoundWave;                                               // 0x01C8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SoundUtilities.SoundUtilitiesBPFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USoundUtilitiesBPFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		float GetPitchScaleFromMIDIPitch(int32_t BaseMidiNote, int32_t TargetMidiNote);
		int32_t GetMIDIPitchFromFrequency(float Frequency);
		float GetFrequencyFromMIDIPitch(int32_t MidiNote);
		float GetBeatTempo(float BeatsPerMinute, int32_t BeatMultiplier, int32_t DivisionsOfWholeNote);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
