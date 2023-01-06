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
	 * Function CoverGenerator.CoverGenerator.ReleaseCover
	 */
	struct ACoverGenerator_ReleaseCover_Params
	{
	public:
		class UCoverPoint*                                         CoverPoint;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CoverGenerator.CoverGenerator.OnNavigationGenerationFinished
	 */
	struct ACoverGenerator_OnNavigationGenerationFinished_Params
	{
	public:
		class ANavigationData*                                     NavData;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CoverGenerator.CoverGenerator.OccupyCover
	 */
	struct ACoverGenerator_OccupyCover_Params
	{
	public:
		class UCoverPoint*                                         CoverPoint;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AController*                                         Controller;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CoverGenerator.CoverGenerator.IsFreeCoverPoint
	 */
	struct ACoverGenerator_IsFreeCoverPoint_Params
	{
	public:
		class UCoverPoint*                                         CoverPoint;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CoverGenerator.CoverGenerator.GetCoverWithinBox
	 */
	struct ACoverGenerator_GetCoverWithinBox_Params
	{
	public:
		struct FBox                                                BoxIn;                                                   // 0x0000(0x001C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MEP4[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UCoverPoint*>                                 ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CoverGenerator.CoverGenerator.GetCoverGenerator
	 */
	struct ACoverGenerator_GetCoverGenerator_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ACoverGenerator*                                     ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CoverGenerator.CoverGenerator.CoverExistWithinBox
	 */
	struct ACoverGenerator_CoverExistWithinBox_Params
	{
	public:
		struct FBox                                                BoxIn;                                                   // 0x0000(0x001C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CoverGenerator.EnvQueryInstanceRaidWrapper.GetResultsAsCoverPoints
	 */
	struct UEnvQueryInstanceRaidWrapper_GetResultsAsCoverPoints_Params
	{
	public:
		TArray<class UCoverPoint*>                                 ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
