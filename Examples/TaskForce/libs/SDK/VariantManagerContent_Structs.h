#pragma once

/**
 * Name: Task_Force
 * Version: 0.3.6.1537
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum VariantManagerContent.EPropertyValueCategory
	 */
	enum class EPropertyValueCategory : uint8_t
	{
		Undefined        = 0,
		Generic          = 1,
		RelativeLocation = 2,
		RelativeRotation = 3,
		RelativeScale3D  = 4,
		bVisible         = 5,
		Material         = 6,
		Color            = 7,
		MAX              = 8
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct VariantManagerContent.CapturedPropSegment
	 * Size -> 0x0028
	 */
	struct FCapturedPropSegment
	{
	public:
		class FString                                              PropertyName;                                            // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PropertyIndex;                                           // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5ESU[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ComponentName;                                           // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct VariantManagerContent.FunctionCaller
	 * Size -> 0x0008
	 */
	struct FFunctionCaller
	{
	public:
		class FName                                                FunctionName;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
