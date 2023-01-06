#pragma once

/**
 * Name: Task_Force
 * Version: 0.3.6.1537
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
		void STATIC_SetEyeTrackedPlayer(class APlayerController* PlayerController);
		bool STATIC_IsStereoGazeDataAvailable();
		bool STATIC_IsEyeTrackerConnected();
		bool STATIC_GetStereoGazeData(struct FEyeTrackerStereoGazeData* OutGazeData);
		bool STATIC_GetGazeData(struct FEyeTrackerGazeData* OutGazeData);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
