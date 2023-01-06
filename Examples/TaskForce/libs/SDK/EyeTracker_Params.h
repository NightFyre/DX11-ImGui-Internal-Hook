#pragma once

/**
 * Name: Task_Force
 * Version: 0.3.6.1537
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
	 * Function EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer
	 */
	struct UEyeTrackerFunctionLibrary_SetEyeTrackedPlayer_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable
	 */
	struct UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected
	 */
	struct UEyeTrackerFunctionLibrary_IsEyeTrackerConnected_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData
	 */
	struct UEyeTrackerFunctionLibrary_GetStereoGazeData_Params
	{
	public:
		struct FEyeTrackerStereoGazeData                           OutGazeData;                                             // 0x0000(0x0040)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EyeTracker.EyeTrackerFunctionLibrary.GetGazeData
	 */
	struct UEyeTrackerFunctionLibrary_GetGazeData_Params
	{
	public:
		struct FEyeTrackerGazeData                                 OutGazeData;                                             // 0x0000(0x0028)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
