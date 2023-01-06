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
	 * Enum GameLiftServerSDK.EAttrType
	 */
	enum class EAttrType : uint8_t
	{
		NONE             = 0,
		STRING           = 1,
		_FLOAT_          = 2,
		STRING_LIST      = 3,
		STRING_FLOAT_MAP = 4,
		MAX              = 5
	};

	/**
	 * Enum GameLiftServerSDK.EGameSessionStatusServer
	 */
	enum class EGameSessionStatusServer : uint8_t
	{
		NOT_SET     = 0,
		ACTIVE      = 1,
		ACTIVATING  = 2,
		TERMINATED  = 3,
		TERMINATING = 4,
		MAX         = 5
	};

	/**
	 * Enum GameLiftServerSDK.EGameLiftServerError
	 */
	enum class EGameLiftServerError : uint8_t
	{
		ALREADY_INITIALIZED             = 0,
		FLEET_MISMATCH                  = 1,
		GAMELIFT_CLIENT_NOT_INITIALIZED = 2,
		GAMELIFT_SERVER_NOT_INITIALIZED = 3,
		GAME_SESSION_ENDED_FAILED       = 4,
		GAME_SESSION_NOT_READY          = 5,
		GAME_SESSION_READY_FAILED       = 6,
		INITIALIZATION_MISMATCH         = 7,
		NOT_INITIALIZED                 = 8,
		NO_TARGET_ALIASID_SET           = 9,
		NO_TARGET_FLEET_SET             = 10,
		PROCESS_ENDING_FAILED           = 11,
		PROCESS_NOT_ACTIVE              = 12,
		PROCESS_NOT_READY               = 13,
		PROCESS_READY_FAILED            = 14,
		SDK_VERSION_DETECTION_FAILED    = 15,
		SERVICE_CALL_FAILED             = 16,
		STX_CALL_FAILED                 = 17,
		STX_INITIALIZATION_FAILED       = 18,
		UNEXPECTED_PLAYER_SESSION       = 19,
		BAD_REQUEST_EXCEPTION           = 20,
		INTERNAL_SERVICE_EXCEPTION      = 21,
		UNKNOWN_ERROR                   = 22,
		MAX                             = 23
	};

	/**
	 * Enum GameLiftServerSDK.EPlayerSessionCreationPolicyServer
	 */
	enum class EPlayerSessionCreationPolicyServer : uint8_t
	{
		NOT_SET    = 0,
		ACCEPT_ALL = 1,
		DENY_ALL   = 2,
		MAX        = 3
	};

	/**
	 * Enum GameLiftServerSDK.EPlayerSessionStatusServer
	 */
	enum class EPlayerSessionStatusServer : uint8_t
	{
		NOT_SET   = 0,
		RESERVED  = 1,
		ACTIVE    = 2,
		COMPLETED = 3,
		TIMEDOUT  = 4,
		MAX       = 5
	};

	/**
	 * Enum GameLiftServerSDK.EUpdateReason
	 */
	enum class EUpdateReason : uint8_t
	{
		MATCHMAKING_DATA_UPDATED = 0,
		BACKFILL_FAILED          = 1,
		BACKFILL_TIMED_OUT       = 2,
		BACKFILL_CANCELLED       = 3,
		UNKNOWN                  = 4,
		MAX                      = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GameLiftServerSDK.KeyAndValue
	 * Size -> 0x0018
	 */
	struct FKeyAndValue
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3ICC[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameLiftServerSDK.AttributeValueServer
	 * Size -> 0x0040
	 */
	struct FAttributeValueServer
	{
	public:
		class FString                                              S;                                                       // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      N;                                                       // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VN22[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      sL;                                                      // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FKeyAndValue>                                sDM;                                                     // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EAttrType                                                  attrType;                                                // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KYIE[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameLiftServerSDK.GamePropertyServer
	 * Size -> 0x0020
	 */
	struct FGamePropertyServer
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Value;                                                   // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLiftServerSDK.AWSGameSessionServer
	 * Size -> 0x0090
	 */
	struct FAWSGameSessionServer
	{
	public:
		class FString                                              GameSessionId;                                           // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              fleetId;                                                 // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    maximumPlayerSessionCount;                               // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameSessionStatusServer                                   status;                                                  // 0x0034(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A5ET[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGamePropertyServer>                         gameProperties;                                          // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              IPAddress;                                               // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Port;                                                    // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KQR2[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              gameSessionData;                                         // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              matchmakerData;                                          // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              dnsName;                                                 // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLiftServerSDK.NamedAttribute
	 * Size -> 0x0050
	 */
	struct FNamedAttribute
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAttributeValueServer                               Value;                                                   // 0x0010(0x0040) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLiftServerSDK.RegionAndLatency
	 * Size -> 0x0018
	 */
	struct FRegionAndLatency
	{
	public:
		class FString                                              Region;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    latencyMs;                                               // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YX7B[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameLiftServerSDK.AWSPlayerServer
	 * Size -> 0x0040
	 */
	struct FAWSPlayerServer
	{
	public:
		class FString                                              PlayerId;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Team;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNamedAttribute>                             playerAttributes;                                        // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FRegionAndLatency>                           latencyInMs;                                             // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLiftServerSDK.AWSPlayerSessionServer
	 * Size -> 0x0090
	 */
	struct FAWSPlayerSessionServer
	{
	public:
		class FString                                              PlayerSessionId;                                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerId;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GameSessionId;                                           // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              fleetId;                                                 // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           creationTime;                                            // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           terminationTime;                                         // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlayerSessionStatusServer                                 status;                                                  // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SY5M[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              IPAddress;                                               // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Port;                                                    // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YOOP[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              playerData;                                              // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              dnsName;                                                 // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLiftServerSDK.DescribePlayerSessionsRequestServer
	 * Size -> 0x0058
	 */
	struct FDescribePlayerSessionsRequestServer
	{
	public:
		class FString                                              GameSessionId;                                           // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerId;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerSessionId;                                         // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              playerSessionStatusFilter;                               // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    limit;                                                   // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V1EJ[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              nextToken;                                               // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLiftServerSDK.DescribePlayerSessionsResultServer
	 * Size -> 0x0020
	 */
	struct FDescribePlayerSessionsResultServer
	{
	public:
		TArray<struct FAWSPlayerSessionServer>                     PlayerSessions;                                          // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              nextToken;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLiftServerSDK.GetInstanceCertificateResult
	 * Size -> 0x0050
	 */
	struct FGetInstanceCertificateResult
	{
	public:
		class FString                                              CertificatePath;                                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CertificateChainPath;                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PrivateKeyPath;                                          // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Hostname;                                                // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RootCertificatePath;                                     // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLiftServerSDK.StartMatchBackfillRequestServer
	 * Size -> 0x0040
	 */
	struct FStartMatchBackfillRequestServer
	{
	public:
		class FString                                              TicketID;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              matchmakingConfigurationArn;                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              gameSessionArn;                                          // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAWSPlayerServer>                            players;                                                 // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLiftServerSDK.StartMatchBackfillResultServer
	 * Size -> 0x0010
	 */
	struct FStartMatchBackfillResultServer
	{
	public:
		class FString                                              TicketID;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLiftServerSDK.StopMatchBackfillRequest
	 * Size -> 0x0030
	 */
	struct FStopMatchBackfillRequest
	{
	public:
		class FString                                              TicketID;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              matchmakingConfigurationArn;                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              gameSessionArn;                                          // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLiftServerSDK.UpdateGameSessionServer
	 * Size -> 0x00A8
	 */
	struct FUpdateGameSessionServer
	{
	public:
		class FString                                              backfillTicketId;                                        // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAWSGameSessionServer                               GameSession;                                             // 0x0010(0x0090) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EUpdateReason                                              updateReason;                                            // 0x00A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PFOC[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
