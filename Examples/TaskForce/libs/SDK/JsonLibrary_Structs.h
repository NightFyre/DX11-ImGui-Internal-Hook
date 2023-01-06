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
	 * Enum JsonLibrary.EJsonLibraryNotifyAction
	 */
	enum class EJsonLibraryNotifyAction : uint8_t
	{
		None    = 0,
		Added   = 1,
		Removed = 2,
		Changed = 3,
		Reset   = 4,
		MAX     = 5
	};

	/**
	 * Enum JsonLibrary.EJsonLibraryType
	 */
	enum class EJsonLibraryType : uint8_t
	{
		Invalid = 0,
		Null    = 1,
		Object  = 2,
		Array   = 3,
		Boolean = 4,
		Number  = 5,
		String  = 6,
		MAX     = 7
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct JsonLibrary.StructBase
	 * Size -> 0x0008
	 */
	struct FStructBase
	{
	public:
		unsigned char                                              UnknownData_3CF3[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct JsonLibrary.JsonLibraryObject
	 * Size -> 0x0038
	 */
	struct FJsonLibraryObject
	{
	public:
		unsigned char                                              UnknownData_Q3SG[0x38];                                  // 0x0000(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct JsonLibrary.JsonLibraryValue
	 * Size -> 0x0010
	 */
	struct FJsonLibraryValue
	{
	public:
		unsigned char                                              UnknownData_F0DW[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct JsonLibrary.JsonLibraryList
	 * Size -> 0x0038
	 */
	struct FJsonLibraryList
	{
	public:
		unsigned char                                              UnknownData_9K9Z[0x38];                                  // 0x0000(0x0038) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
