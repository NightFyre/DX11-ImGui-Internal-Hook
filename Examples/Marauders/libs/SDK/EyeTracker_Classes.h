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
	 * Class EyeTracker.EyeTrackerFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void SetEyeTrackedPlayer(class APlayerController* PlayerController);
		bool IsStereoGazeDataAvailable();
		bool IsEyeTrackerConnected();
		bool GetStereoGazeData(struct FEyeTrackerStereoGazeData* OutGazeData);
		bool GetGazeData(struct FEyeTrackerGazeData* OutGazeData);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
