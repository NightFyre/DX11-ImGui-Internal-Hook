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
	 * Enum Qos.EQosResponseType
	 */
	enum class EQosResponseType : uint8_t
	{
		NoResponse = 0,
		Success    = 1,
		Failure    = 2,
		MAX        = 3
	};

	/**
	 * Enum Qos.EQosCompletionResult
	 */
	enum class EQosCompletionResult : uint8_t
	{
		Invalid  = 0,
		Success  = 1,
		Failure  = 2,
		Canceled = 3,
		MAX      = 4
	};

	/**
	 * Enum Qos.EQosDatacenterResult
	 */
	enum class EQosDatacenterResult : uint8_t
	{
		Invalid    = 0,
		Success    = 1,
		Incomplete = 2,
		MAX        = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Qos.QosPingServerInfo
	 * Size -> 0x0018
	 */
	struct FQosPingServerInfo
	{
	public:
		class FString                                              address;                                                 // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Port;                                                    // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XMCQ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Qos.QosDatacenterInfo
	 * Size -> 0x0038
	 */
	struct FQosDatacenterInfo
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RegionId;                                                // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OQ58[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FQosPingServerInfo>                          Servers;                                                 // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Qos.DatacenterQosInstance
	 * Size -> 0x0068
	 */
	struct FDatacenterQosInstance
	{
	public:
		struct FQosDatacenterInfo                                  Definition;                                              // 0x0000(0x0038) Transient, NativeAccessSpecifierPublic
		EQosDatacenterResult                                       Result;                                                  // 0x0038(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_39S7[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AvgPingMs;                                               // 0x003C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            PingResults;                                             // 0x0040(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YFMA[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           LastCheckTimestamp;                                      // 0x0058(0x0008) ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsable;                                                 // 0x0060(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1UU0[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Qos.QosRegionInfo
	 * Size -> 0x0030
	 */
	struct FQosRegionInfo
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018) NativeAccessSpecifierPublic
		class FString                                              RegionId;                                                // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bVisible;                                                // 0x0029(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoAssignable;                                         // 0x002A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FSY7[0x5];                                   // 0x002B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Qos.RegionQosInstance
	 * Size -> 0x0040
	 */
	struct FRegionQosInstance
	{
	public:
		struct FQosRegionInfo                                      Definition;                                              // 0x0000(0x0030) Transient, NativeAccessSpecifierPublic
		TArray<struct FDatacenterQosInstance>                      DatacenterOptions;                                       // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
