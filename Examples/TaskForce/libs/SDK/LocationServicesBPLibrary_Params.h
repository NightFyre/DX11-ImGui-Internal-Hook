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
	 * Function LocationServicesBPLibrary.LocationServices.StopLocationServices
	 */
	struct ULocationServices_StopLocationServices_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LocationServicesBPLibrary.LocationServices.StartLocationServices
	 */
	struct ULocationServices_StartLocationServices_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LocationServicesBPLibrary.LocationServices.IsLocationAccuracyAvailable
	 */
	struct ULocationServices_IsLocationAccuracyAvailable_Params
	{
	public:
		ELocationAccuracy                                          Accuracy;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LocationServicesBPLibrary.LocationServices.InitLocationServices
	 */
	struct ULocationServices_InitLocationServices_Params
	{
	public:
		ELocationAccuracy                                          Accuracy;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WWKQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      UpdateFrequency;                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MinDistanceFilter;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LocationServicesBPLibrary.LocationServices.GetLocationServicesImpl
	 */
	struct ULocationServices_GetLocationServicesImpl_Params
	{
	public:
		class ULocationServicesImpl*                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LocationServicesBPLibrary.LocationServices.GetLastKnownLocation
	 */
	struct ULocationServices_GetLastKnownLocation_Params
	{
	public:
		struct FLocationServicesData                               ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LocationServicesBPLibrary.LocationServices.AreLocationServicesEnabled
	 */
	struct ULocationServices_AreLocationServicesEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
