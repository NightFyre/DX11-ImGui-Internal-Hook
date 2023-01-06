#pragma once

/**
 * Name: RaidGame
 * Version: 1
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
	 * Enum TimeManagement.EFrameNumberDisplayFormats
	 */
	enum class EFrameNumberDisplayFormats : uint8_t
	{
		NonDropFrameTimecode = 0,
		DropFrameTimecode    = 1,
		Seconds              = 2,
		Frames               = 3,
		MAX_Count            = 4,
		MAX                  = 5
	};

	/**
	 * Enum TimeManagement.ETimedDataInputState
	 */
	enum class ETimedDataInputState : uint8_t
	{
		Connected    = 0,
		Unresponsive = 1,
		Disconnected = 2,
		MAX          = 3
	};

	/**
	 * Enum TimeManagement.ETimedDataInputEvaluationType
	 */
	enum class ETimedDataInputEvaluationType : uint8_t
	{
		None         = 0,
		Timecode     = 1,
		PlatformTime = 2,
		MAX          = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct TimeManagement.TimedDataInputEvaluationData
	 * Size -> 0x0008
	 */
	struct FTimedDataInputEvaluationData
	{
	public:
		float                                                      DistanceToNewestSampleSeconds;                           // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceToOldestSampleSeconds;                           // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TimeManagement.TimedDataChannelSampleTime
	 * Size -> 0x0018
	 */
	struct FTimedDataChannelSampleTime
	{
	public:
		unsigned char                                              UnknownData_MSR7[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
