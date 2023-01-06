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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct SessionMessages.SessionServiceLogUnsubscribe
	 * Size -> 0x0001
	 */
	struct FSessionServiceLogUnsubscribe
	{
	public:
		unsigned char                                              UnknownData_ASFK[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SessionMessages.SessionServiceLogSubscribe
	 * Size -> 0x0001
	 */
	struct FSessionServiceLogSubscribe
	{
	public:
		unsigned char                                              UnknownData_51CA[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SessionMessages.SessionServiceLog
	 * Size -> 0x0038
	 */
	struct FSessionServiceLog
	{
	public:
		class FName                                                Category;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Data;                                                    // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               instanceId;                                              // 0x0018(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     TimeSeconds;                                             // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Verbosity;                                               // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M8U2[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SessionMessages.SessionServicePong
	 * Size -> 0x0090
	 */
	struct FSessionServicePong
	{
	public:
		bool                                                       Authorized;                                              // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_334G[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              BuildDate;                                               // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DeviceName;                                              // 0x0018(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               instanceId;                                              // 0x0028(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              InstanceName;                                            // 0x0038(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlatformName;                                            // 0x0048(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               SessionId;                                               // 0x0058(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SessionName;                                             // 0x0068(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SessionOwner;                                            // 0x0078(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Standalone;                                              // 0x0088(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7TZK[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SessionMessages.SessionServicePing
	 * Size -> 0x0010
	 */
	struct FSessionServicePing
	{
	public:
		class FString                                              username;                                                // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
