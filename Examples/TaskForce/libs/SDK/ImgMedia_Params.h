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
	 * Function ImgMedia.ImgMediaSource.SetSequencePath
	 */
	struct UImgMediaSource_SetSequencePath_Params
	{
	public:
		class FString                                              Path;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ImgMedia.ImgMediaSource.GetSequencePath
	 */
	struct UImgMediaSource_GetSequencePath_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ImgMedia.ImgMediaSource.GetProxies
	 */
	struct UImgMediaSource_GetProxies_Params
	{
	public:
		TArray<class FString>                                      OutProxies;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
