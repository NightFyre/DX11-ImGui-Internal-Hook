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
	 * Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing
	 */
	struct UMovieSceneCaptureProtocolBase_IsCapturing_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState
	 */
	struct UMovieSceneCaptureProtocolBase_GetState_Params
	{
	public:
		EMovieSceneCaptureProtocolState                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType
	 */
	struct UMovieSceneCapture_SetImageCaptureProtocolType_Params
	{
	public:
		class UClass*                                              ProtocolType;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType
	 */
	struct UMovieSceneCapture_SetAudioCaptureProtocolType_Params
	{
	public:
		class UClass*                                              ProtocolType;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol
	 */
	struct UMovieSceneCapture_GetImageCaptureProtocol_Params
	{
	public:
		class UMovieSceneCaptureProtocolBase*                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol
	 */
	struct UMovieSceneCapture_GetAudioCaptureProtocol_Params
	{
	public:
		class UMovieSceneCaptureProtocolBase*                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress
	 */
	struct UMovieSceneCaptureEnvironment_IsCaptureInProgress_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber
	 */
	struct UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime
	 */
	struct UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindImageCaptureProtocol
	 */
	struct UMovieSceneCaptureEnvironment_FindImageCaptureProtocol_Params
	{
	public:
		class UMovieSceneImageCaptureProtocolBase*                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindAudioCaptureProtocol
	 */
	struct UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol_Params
	{
	public:
		class UMovieSceneAudioCaptureProtocolBase*                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels
	 */
	struct UUserDefinedCaptureProtocol_StopCapturingFinalPixels_Params
	{	};

	/**
	 * Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels
	 */
	struct UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Params
	{
	public:
		struct FCapturedPixelsID                                   StreamID;                                                // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer
	 */
	struct UUserDefinedCaptureProtocol_ResolveBuffer_Params
	{
	public:
		class UTexture*                                            Buffer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCapturedPixelsID                                   BufferID;                                                // 0x0008(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp
	 */
	struct UUserDefinedCaptureProtocol_OnWarmUp_Params
	{	};

	/**
	 * Function MovieSceneCapture.UserDefinedCaptureProtocol.OnTick
	 */
	struct UUserDefinedCaptureProtocol_OnTick_Params
	{	};

	/**
	 * Function MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture
	 */
	struct UUserDefinedCaptureProtocol_OnStartCapture_Params
	{	};

	/**
	 * Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup
	 */
	struct UUserDefinedCaptureProtocol_OnSetup_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick
	 */
	struct UUserDefinedCaptureProtocol_OnPreTick_Params
	{	};

	/**
	 * Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived
	 */
	struct UUserDefinedCaptureProtocol_OnPixelsReceived_Params
	{
	public:
		struct FCapturedPixels                                     Pixels;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FCapturedPixelsID                                   ID;                                                      // 0x0010(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FFrameMetrics                                       FrameMetrics;                                            // 0x0060(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture
	 */
	struct UUserDefinedCaptureProtocol_OnPauseCapture_Params
	{	};

	/**
	 * Function MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize
	 */
	struct UUserDefinedCaptureProtocol_OnFinalize_Params
	{	};

	/**
	 * Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame
	 */
	struct UUserDefinedCaptureProtocol_OnCaptureFrame_Params
	{	};

	/**
	 * Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize
	 */
	struct UUserDefinedCaptureProtocol_OnCanFinalize_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize
	 */
	struct UUserDefinedCaptureProtocol_OnBeginFinalize_Params
	{	};

	/**
	 * Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics
	 */
	struct UUserDefinedCaptureProtocol_GetCurrentFrameMetrics_Params
	{
	public:
		struct FFrameMetrics                                       ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename
	 */
	struct UUserDefinedCaptureProtocol_GenerateFilename_Params
	{
	public:
		struct FFrameMetrics                                       InFrameMetrics;                                          // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk
	 */
	struct UUserDefinedImageCaptureProtocol_WriteImageToDisk_Params
	{
	public:
		struct FCapturedPixels                                     PixelData;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FCapturedPixelsID                                   StreamID;                                                // 0x0010(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FFrameMetrics                                       FrameMetrics;                                            // 0x0060(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bCopyImageData;                                          // 0x0070(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame
	 */
	struct UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer
	 */
	struct UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Params
	{
	public:
		class UTexture*                                            Buffer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCapturedPixelsID                                   StreamID;                                                // 0x0008(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0058(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
