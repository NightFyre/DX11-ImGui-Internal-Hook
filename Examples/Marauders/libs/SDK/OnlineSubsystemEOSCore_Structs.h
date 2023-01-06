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
	 * ScriptStruct OnlineSubsystemEOSCore.EOSConfig
	 * Size -> 0x0078
	 */
	struct FEOSConfig
	{
	public:
		class FString                                              ConfigName;                                              // 0x0000(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ProductId;                                               // 0x0010(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SandboxId;                                               // 0x0020(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DeploymentId;                                            // 0x0030(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ClientId;                                                // 0x0040(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ClientSecret;                                            // 0x0050(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EncryptionKey;                                           // 0x0060(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableRTC;                                              // 0x0070(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FXB1[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OnlineSubsystemEOSCore.EOSSessionSetting
	 * Size -> 0x0028
	 */
	struct FEOSSessionSetting
	{
	public:
		unsigned char                                              UnknownData_PZEG[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OnlineSubsystemEOSCore.EOSSessionResult
	 * Size -> 0x0118
	 */
	struct FEOSSessionResult
	{
	public:
		struct FBlueprintSessionResult                             Result;                                                  // 0x0000(0x0108) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
		TArray<struct FEOSSessionSetting>                          SessionSettings;                                         // 0x0108(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OnlineSubsystemEOSCore.EOSSessionSearchSetting
	 * Size -> 0x0020
	 */
	struct FEOSSessionSearchSetting
	{
	public:
		unsigned char                                              UnknownData_X27M[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
