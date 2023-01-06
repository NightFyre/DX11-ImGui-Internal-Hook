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
	 * Function TimeManagement.TimeManagementBlueprintLibrary.TransformTime
	 */
	struct UTimeManagementBlueprintLibrary_TransformTime_Params
	{
	public:
		struct FFrameTime                                          SourceTime;                                              // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFrameRate                                          SourceRate;                                              // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFrameRate                                          DestinationRate;                                         // 0x0010(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFrameTime                                          ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberInteger
	 */
	struct UTimeManagementBlueprintLibrary_Subtract_FrameNumberInteger_Params
	{
	public:
		struct FFrameNumber                                        A;                                                       // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    B;                                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFrameNumber                                        ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberFrameNumber
	 */
	struct UTimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber_Params
	{
	public:
		struct FFrameNumber                                        A;                                                       // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFrameNumber                                        B;                                                       // 0x0004(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFrameNumber                                        ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TimeManagement.TimeManagementBlueprintLibrary.SnapFrameTimeToRate
	 */
	struct UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Params
	{
	public:
		struct FFrameTime                                          SourceTime;                                              // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFrameRate                                          SourceRate;                                              // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFrameRate                                          SnapToRate;                                              // 0x0010(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFrameTime                                          ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate
	 */
	struct UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Params
	{
	public:
		float                                                      TimeInSeconds;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFrameRate                                          FrameRate;                                               // 0x0004(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFrameTime                                          ReturnValue;                                             // 0x000C(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_FrameNumberInteger
	 */
	struct UTimeManagementBlueprintLibrary_Multiply_FrameNumberInteger_Params
	{
	public:
		struct FFrameNumber                                        A;                                                       // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    B;                                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFrameNumber                                        ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_MultipleOf
	 */
	struct UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Params
	{
	public:
		struct FFrameRate                                          InFrameRate;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFrameRate                                          OtherFramerate;                                          // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_Framerate
	 */
	struct UTimeManagementBlueprintLibrary_IsValid_Framerate_Params
	{
	public:
		struct FFrameRate                                          InFrameRate;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecode
	 */
	struct UTimeManagementBlueprintLibrary_GetTimecode_Params
	{
	public:
		struct FTimecode                                           ReturnValue;                                             // 0x0000(0x0014)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TimeManagement.TimeManagementBlueprintLibrary.Divide_FrameNumberInteger
	 */
	struct UTimeManagementBlueprintLibrary_Divide_FrameNumberInteger_Params
	{
	public:
		struct FFrameNumber                                        A;                                                       // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    B;                                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFrameNumber                                        ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString
	 */
	struct UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Params
	{
	public:
		struct FTimecode                                           InTimecode;                                              // 0x0000(0x0014)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForceSignDisplay;                                       // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JVF2[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds
	 */
	struct UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Params
	{
	public:
		struct FQualifiedFrameTime                                 InFrameTime;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds
	 */
	struct UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Params
	{
	public:
		struct FFrameRate                                          InFrameRate;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameNumberToInteger
	 */
	struct UTimeManagementBlueprintLibrary_Conv_FrameNumberToInteger_Params
	{
	public:
		struct FFrameNumber                                        InFrameNumber;                                           // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberInteger
	 */
	struct UTimeManagementBlueprintLibrary_Add_FrameNumberInteger_Params
	{
	public:
		struct FFrameNumber                                        A;                                                       // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    B;                                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFrameNumber                                        ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberFrameNumber
	 */
	struct UTimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber_Params
	{
	public:
		struct FFrameNumber                                        A;                                                       // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFrameNumber                                        B;                                                       // 0x0004(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFrameNumber                                        ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
