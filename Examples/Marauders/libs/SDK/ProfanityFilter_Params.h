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
	 * Function ProfanityFilter.ProfanityFilterFunctionLibrary.ContainsProfanity_Text
	 */
	struct UProfanityFilterFunctionLibrary_ContainsProfanity_Text_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		unsigned char                                              InMinimumSeverity;                                       // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProfanityFilter.ProfanityFilterFunctionLibrary.ContainsProfanity_String
	 */
	struct UProfanityFilterFunctionLibrary_ContainsProfanity_String_Params
	{
	public:
		class FString                                              inString;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              InMinimumSeverity;                                       // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProfanityFilter.ProfanityFilterFunctionLibrary.ContainsProfanity_Name
	 */
	struct UProfanityFilterFunctionLibrary_ContainsProfanity_Name_Params
	{
	public:
		class FName                                                InName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              InMinimumSeverity;                                       // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
