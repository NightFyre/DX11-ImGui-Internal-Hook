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
	 * Enum GameLiftFramework.EUpdateReasonFrame
	 */
	enum class EUpdateReasonFrame : uint8_t
	{
		NO_UPDATE_RECEIVED       = 0,
		BACKFILL_INITIATED       = 1,
		MATCHMAKING_DATA_UPDATED = 2,
		BACKFILL_FAILED          = 3,
		BACKFILL_TIMED_OUT       = 4,
		BACKFILL_CANCELLED       = 5,
		BACKFILL_COMPLETED       = 6,
		MAX                      = 7
	};

	/**
	 * Enum GameLiftFramework.EAcceptanceTypeFrame
	 */
	enum class EAcceptanceTypeFrame : uint8_t
	{
		NOT_SET = 0,
		ACCEPT  = 1,
		REJECT  = 2,
		MAX     = 3
	};

	/**
	 * Enum GameLiftFramework.EMatchMakingStatus
	 */
	enum class EMatchMakingStatus : uint8_t
	{
		NOT_SET             = 0,
		CANCELLED           = 1,
		COMPLETED           = 2,
		FAILED              = 3,
		PLACING             = 4,
		QUEUED              = 5,
		REQUIRES_ACCEPTANCE = 6,
		SEARCHING           = 7,
		TIMED_OUT           = 8,
		MAX                 = 9
	};

	/**
	 * Enum GameLiftFramework.EGameLiftScheme
	 */
	enum class EGameLiftScheme : uint8_t
	{
		HTTP  = 0,
		HTTPS = 1,
		MAX   = 2
	};

	/**
	 * Enum GameLiftFramework.EGameLiftRegion
	 */
	enum class EGameLiftRegion : uint8_t
	{
		US_EAST        = 0,
		US_WEST        = 1,
		US_WEST01      = 2,
		EU_WEST        = 3,
		EU_WEST01      = 4,
		EU_CENTRAL     = 5,
		AP_SOUTHEAST   = 6,
		AP_SOUTHEAST01 = 7,
		AP_NORTHEAST   = 8,
		AP_NORTHEAST01 = 9,
		SA_EAST        = 10,
		AP_SOUTH       = 11,
		MAX            = 12
	};

	/**
	 * Enum GameLiftFramework.EGameLiftPlayerSessionCreationPolicy
	 */
	enum class EGameLiftPlayerSessionCreationPolicy : uint8_t
	{
		NOT_SET   = 0,
		AcceptAll = 1,
		DenyAll   = 2,
		MAX       = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GameLiftFramework.StartGameSessionState
	 * Size -> 0x0018
	 */
	struct FStartGameSessionState
	{
	public:
		bool                                                       status;                                                  // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L9P5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              matchmakingConfigurationArn;                             // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLiftFramework.UpdateGameSessionState
	 * Size -> 0x0001
	 */
	struct FUpdateGameSessionState
	{
	public:
		EUpdateReasonFrame                                         Reason;                                                  // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLiftFramework.ProcessTerminateState
	 * Size -> 0x0008
	 */
	struct FProcessTerminateState
	{
	public:
		bool                                                       status;                                                  // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0WVF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameLiftFramework.HealthCheckState
	 * Size -> 0x0001
	 */
	struct FHealthCheckState
	{
	public:
		bool                                                       status;                                                  // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLiftFramework.GameLiftProperty
	 * Size -> 0x0018
	 */
	struct FGameLiftProperty
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Value;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLiftFramework.GameLiftAttributeValueFrame
	 * Size -> 0x0078
	 */
	struct FGameLiftAttributeValueFrame
	{
	public:
		class FString                                              StringValue;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatValue;                                              // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JXP9[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      StringList;                                              // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TMap<class FString, float>                                 DataMap;                                                 // 0x0028(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLiftFramework.GameLiftPlayer
	 * Size -> 0x0060
	 */
	struct FGameLiftPlayer
	{
	public:
		class FString                                              PlayerId;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, struct FGameLiftAttributeValueFrame>   Attributes;                                              // 0x0010(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLiftFramework.MatchedPlayerSessionFrame
	 * Size -> 0x0020
	 */
	struct FMatchedPlayerSessionFrame
	{
	public:
		class FString                                              PlayerId;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerSessionId;                                         // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLiftFramework.GameSessionConnectionInfo
	 * Size -> 0x0038
	 */
	struct FGameSessionConnectionInfo
	{
	public:
		class FString                                              gameSessionArn;                                          // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              IPAddress;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Port;                                                    // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IZLN[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMatchedPlayerSessionFrame>                  PlayerSessions;                                          // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLiftFramework.MatchMakingTicketFrame
	 * Size -> 0x0080
	 */
	struct FMatchMakingTicketFrame
	{
	public:
		class FString                                              TicketID;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              configurationName;                                       // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMatchMakingStatus                                         status;                                                  // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E8E7[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           startTime;                                               // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           endTime;                                                 // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGameLiftPlayer>                             players;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FGameSessionConnectionInfo                          ConnectionInfo;                                          // 0x0048(0x0038) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLiftFramework.GameLiftFleet
	 * Size -> 0x000C
	 */
	struct FGameLiftFleet
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlias;                                                  // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameLiftRegion                                            Region;                                                  // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LK67[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameLiftFramework.GameLiftGameSession
	 * Size -> 0x0050
	 */
	struct FGameLiftGameSession
	{
	public:
		class FString                                              SessionId;                                               // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGameLiftProperty>                           Properties;                                              // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    MaxPlayers;                                              // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    players;                                                 // 0x0034(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              IPAddress;                                               // 0x0038(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Port;                                                    // 0x0048(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameLiftPlayerSessionCreationPolicy                       playerSessionCreationPolicy;                             // 0x004C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1XC1[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameLiftFramework.GameLiftPlayerSession
	 * Size -> 0x0030
	 */
	struct FGameLiftPlayerSession
	{
	public:
		class FString                                              PlayerSessionId;                                         // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GameSessionId;                                           // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerId;                                                // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
