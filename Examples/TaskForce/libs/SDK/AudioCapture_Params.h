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
	 * Function AudioCapture.AudioCapture.StopCapturingAudio
	 */
	struct UAudioCapture_StopCapturingAudio_Params
	{	};

	/**
	 * Function AudioCapture.AudioCapture.StartCapturingAudio
	 */
	struct UAudioCapture_StartCapturingAudio_Params
	{	};

	/**
	 * Function AudioCapture.AudioCapture.IsCapturingAudio
	 */
	struct UAudioCapture_IsCapturingAudio_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo
	 */
	struct UAudioCapture_GetAudioCaptureDeviceInfo_Params
	{
	public:
		struct FAudioCaptureDeviceInfo                             OutInfo;                                                 // 0x0000(0x0010)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture
	 */
	struct UAudioCaptureFunctionLibrary_CreateAudioCapture_Params
	{
	public:
		class UAudioCapture*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
