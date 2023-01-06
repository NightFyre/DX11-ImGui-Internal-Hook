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
	 * Function AsyncLoadingScreen.AsyncLoadingScreenLibrary.SetDisplayTipTextIndex
	 */
	struct UAsyncLoadingScreenLibrary_SetDisplayTipTextIndex_Params
	{
	public:
		int32_t                                                    TipTextIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AsyncLoadingScreen.AsyncLoadingScreenLibrary.SetDisplayMovieIndex
	 */
	struct UAsyncLoadingScreenLibrary_SetDisplayMovieIndex_Params
	{
	public:
		int32_t                                                    MovieIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AsyncLoadingScreen.AsyncLoadingScreenLibrary.SetDisplayBackgroundIndex
	 */
	struct UAsyncLoadingScreenLibrary_SetDisplayBackgroundIndex_Params
	{
	public:
		int32_t                                                    BackgroundIndex;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
