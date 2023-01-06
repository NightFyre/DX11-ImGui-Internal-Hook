#pragma once

/**
 * Name: RaidGame
 * Version: 1
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
	 * Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent
	 */
	struct ACameraRig_Rail_GetRailSplineComponent_Params
	{
	public:
		class USplineComponent*                                    ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CinematicCamera.CineCameraActor.GetCineCameraComponent
	 */
	struct ACineCameraActor_GetCineCameraComponent_Params
	{
	public:
		class UCineCameraComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CinematicCamera.CineCameraComponent.SetLensPresetByName
	 */
	struct UCineCameraComponent_SetLensPresetByName_Params
	{
	public:
		class FString                                              InPresetName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
	 */
	struct UCineCameraComponent_SetFilmbackPresetByName_Params
	{
	public:
		class FString                                              InPresetName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength
	 */
	struct UCineCameraComponent_SetCurrentFocalLength_Params
	{
	public:
		float                                                      InFocalLength;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
	 */
	struct UCineCameraComponent_GetVerticalFieldOfView_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy
	 */
	struct UCineCameraComponent_GetLensPresetsCopy_Params
	{
	public:
		TArray<struct FNamedLensPreset>                            ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CinematicCamera.CineCameraComponent.GetLensPresetName
	 */
	struct UCineCameraComponent_GetLensPresetName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
	 */
	struct UCineCameraComponent_GetHorizontalFieldOfView_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy
	 */
	struct UCineCameraComponent_GetFilmbackPresetsCopy_Params
	{
	public:
		TArray<struct FNamedFilmbackPreset>                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName
	 */
	struct UCineCameraComponent_GetFilmbackPresetName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName
	 */
	struct UCineCameraComponent_GetDefaultFilmbackPresetName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
