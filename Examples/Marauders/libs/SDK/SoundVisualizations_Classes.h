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
	 * Class SoundVisualizations.SoundVisualizationStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USoundVisualizationStatics : public UBlueprintFunctionLibrary
	{
	public:
		void GetAmplitude(class USoundWave* SoundWave, int32_t Channel, float startTime, float TimeLength, int32_t AmplitudeBuckets, TArray<float>* OutAmplitudes);
		void CalculateFrequencySpectrum(class USoundWave* SoundWave, int32_t Channel, float startTime, float TimeLength, int32_t SpectrumWidth, TArray<float>* OutSpectrum);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
