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
	 * Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
	 */
	struct UCineCameraComponent_GetVerticalFieldOfView_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
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
	 * Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName
	 */
	struct UCineCameraComponent_GetFilmbackPresetName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
