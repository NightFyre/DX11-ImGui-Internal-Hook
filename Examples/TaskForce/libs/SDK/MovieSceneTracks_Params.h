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
	 * Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin
	 */
	struct UMovieSceneTransformOrigin_BP_GetTransformOrigin_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID
	 */
	struct UMovieScene3DConstraintSection_SetConstraintBindingID_Params
	{
	public:
		struct FMovieSceneObjectBindingID                          InConstraintBindingID;                                   // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID
	 */
	struct UMovieScene3DConstraintSection_GetConstraintBindingID_Params
	{
	public:
		struct FMovieSceneObjectBindingID                          ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset
	 */
	struct UMovieSceneAudioSection_SetStartOffset_Params
	{
	public:
		struct FFrameNumber                                        InStartOffset;                                           // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneTracks.MovieSceneAudioSection.SetSound
	 */
	struct UMovieSceneAudioSection_SetSound_Params
	{
	public:
		class USoundBase*                                          InSound;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset
	 */
	struct UMovieSceneAudioSection_GetStartOffset_Params
	{
	public:
		struct FFrameNumber                                        ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneTracks.MovieSceneAudioSection.GetSound
	 */
	struct UMovieSceneAudioSection_GetSound_Params
	{
	public:
		class USoundBase*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID
	 */
	struct UMovieSceneCameraCutSection_SetCameraBindingID_Params
	{
	public:
		struct FMovieSceneObjectBindingID                          InCameraBindingID;                                       // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID
	 */
	struct UMovieSceneCameraCutSection_GetCameraBindingID_Params
	{
	public:
		struct FMovieSceneObjectBindingID                          ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName
	 */
	struct UMovieSceneCinematicShotSection_SetShotDisplayName_Params
	{
	public:
		class FString                                              InShotDisplayName;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName
	 */
	struct UMovieSceneCinematicShotSection_GetShotDisplayName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility
	 */
	struct UMovieSceneLevelVisibilitySection_SetVisibility_Params
	{
	public:
		ELevelVisibility                                           InVisibility;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames
	 */
	struct UMovieSceneLevelVisibilitySection_SetLevelNames_Params
	{
	public:
		TArray<class FName>                                        InLevelNames;                                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility
	 */
	struct UMovieSceneLevelVisibilitySection_GetVisibility_Params
	{
	public:
		ELevelVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames
	 */
	struct UMovieSceneLevelVisibilitySection_GetLevelNames_Params
	{
	public:
		TArray<class FName>                                        ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
