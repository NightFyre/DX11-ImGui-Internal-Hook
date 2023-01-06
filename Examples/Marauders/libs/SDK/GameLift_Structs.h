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
	 * Enum GameLift.EAcceptanceType
	 */
	enum class EAcceptanceType : uint8_t
	{
		NOT_SET = 0,
		ACCEPT  = 1,
		REJECT  = 2,
		MAX     = 3
	};

	/**
	 * Enum GameLift.EAWSGameLiftFlexMatchMode
	 */
	enum class EAWSGameLiftFlexMatchMode : uint8_t
	{
		NOT_SET    = 0,
		STANDALONE = 1,
		WITH_QUEUE = 2,
		MAX        = 3
	};

	/**
	 * Enum GameLift.EAWSGameLiftLocationUpdateStatus
	 */
	enum class EAWSGameLiftLocationUpdateStatus : uint8_t
	{
		NOT_SET        = 0,
		PENDING_UPDATE = 1,
		MAX            = 2
	};

	/**
	 * Enum GameLift.EAWSGameLiftPriorityType
	 */
	enum class EAWSGameLiftPriorityType : uint8_t
	{
		NOT_SET     = 0,
		LATENCY     = 1,
		COST        = 2,
		DESTINATION = 3,
		LOCATION    = 4,
		MAX         = 5
	};

	/**
	 * Enum GameLift.EBackfillMode
	 */
	enum class EBackfillMode : uint8_t
	{
		NOT_SET   = 0,
		AUTOMATIC = 1,
		MANUAL    = 2,
		MAX       = 3
	};

	/**
	 * Enum GameLift.EAWSBalancingStrategy
	 */
	enum class EAWSBalancingStrategy : uint8_t
	{
		NOT_SET        = 0,
		SPOT_ONLY      = 1,
		SPOT_PREFERRED = 2,
		ON_DEMAND_ONLY = 3,
		MAX            = 4
	};

	/**
	 * Enum GameLift.EBuildStatus
	 */
	enum class EBuildStatus : uint8_t
	{
		NOT_SET     = 0,
		INITIALIZED = 1,
		READY       = 2,
		FAILED      = 3,
		MAX         = 4
	};

	/**
	 * Enum GameLift.ECertificateType
	 */
	enum class ECertificateType : uint8_t
	{
		NOT_SET   = 0,
		DISABLED  = 1,
		GENERATED = 2,
		MAX       = 3
	};

	/**
	 * Enum GameLift.EComparisonOperatorType
	 */
	enum class EComparisonOperatorType : uint8_t
	{
		NOT_SET                       = 0,
		GreaterThanOrEqualToThreshold = 1,
		GreaterThanThreshold          = 2,
		LessThanThreshold             = 3,
		LessThanOrEqualToThreshold    = 4,
		MAX                           = 5
	};

	/**
	 * Enum GameLift.EEC2InstanceType
	 */
	enum class EEC2InstanceType : uint8_t
	{
		NOT_SET      = 0,
		t2_micro     = 1,
		t2_small     = 2,
		t2_medium    = 3,
		t2_large     = 4,
		c3_large     = 5,
		c3_xlarge    = 6,
		c3_2xlarge   = 7,
		c3_4xlarge   = 8,
		c3_8xlarge   = 9,
		c4_large     = 10,
		c4_xlarge    = 11,
		c4_2xlarge   = 12,
		c4_4xlarge   = 13,
		c4_8xlarge   = 14,
		c5_large     = 15,
		c5_xlarge    = 16,
		c5_2xlarge   = 17,
		c5_4xlarge   = 18,
		c5_9xlarge   = 19,
		c5_12xlarge  = 20,
		c5_18xlarge  = 21,
		c5_24xlarge  = 22,
		c5a_large    = 23,
		c5a_xlarge   = 24,
		c5a_2xlarge  = 25,
		c5a_4xlarge  = 26,
		c5a_8xlarge  = 27,
		c5a_12xlarge = 28,
		c5a_16xlarge = 29,
		c5a_24xlarge = 30,
		r3_large     = 31,
		r3_xlarge    = 32,
		r3_2xlarge   = 33,
		r3_4xlarge   = 34,
		r3_8xlarge   = 35,
		r4_large     = 36,
		r4_xlarge    = 37,
		r4_2xlarge   = 38,
		r4_4xlarge   = 39,
		r4_8xlarge   = 40,
		r4_16xlarge  = 41,
		r5_large     = 42,
		r5_xlarge    = 43,
		r5_2xlarge   = 44,
		r5_4xlarge   = 45,
		r5_8xlarge   = 46,
		r5_12xlarge  = 47,
		r5_16xlarge  = 48,
		r5_24xlarge  = 49,
		r5a_large    = 50,
		r5a_xlarge   = 51,
		r5a_2xlarge  = 52,
		r5a_4xlarge  = 53,
		r5a_8xlarge  = 54,
		r5a_12xlarge = 55,
		r5a_16xlarge = 56,
		r5a_24xlarge = 57,
		m3_medium    = 58,
		m3_large     = 59,
		m3_xlarge    = 60,
		m3_2xlarge   = 61,
		m4_large     = 62,
		m4_xlarge    = 63,
		m4_2xlarge   = 64,
		m4_4xlarge   = 65,
		m4_10xlarge  = 66,
		m5_large     = 67,
		m5_xlarge    = 68,
		m5_2xlarge   = 69,
		m5_4xlarge   = 70,
		m5_8xlarge   = 71,
		m5_12xlarge  = 72,
		m5_16xlarge  = 73,
		m5_24xlarge  = 74,
		m5a_large    = 75,
		m5a_xlarge   = 76,
		m5a_2xlarge  = 77,
		m5a_4xlarge  = 78,
		m5a_8xlarge  = 79,
		m5a_12xlarge = 80,
		m5a_16xlarge = 81,
		m5a_24xlarge = 82,
		MAX          = 83
	};

	/**
	 * Enum GameLift.EEventCode
	 */
	enum class EEventCode : uint8_t
	{
		NOT_SET                                          = 0,
		GENERIC_EVENT                                    = 1,
		FLEET_CREATED                                    = 2,
		FLEET_DELETED                                    = 3,
		FLEET_SCALING_EVENT                              = 4,
		FLEET_STATE_DOWNLOADING                          = 5,
		FLEET_STATE_VALIDATING                           = 6,
		FLEET_STATE_BUILDING                             = 7,
		FLEET_STATE_ACTIVATING                           = 8,
		FLEET_STATE_ACTIVE                               = 9,
		FLEET_STATE_ERROR                                = 10,
		FLEET_INITIALIZATION_FAILED                      = 11,
		FLEET_BINARY_DOWNLOAD_FAILED                     = 12,
		FLEET_VALIDATION_LAUNCH_PATH_NOT_FOUND           = 13,
		FLEET_VALIDATION_EXECUTABLE_RUNTIME_FAILURE      = 14,
		FLEET_VALIDATION_TIMED_OUT                       = 15,
		FLEET_ACTIVATION_FAILED                          = 16,
		FLEET_ACTIVATION_FAILED_NO_INSTANCES             = 17,
		FLEET_NEW_GAME_SESSION_PROTECTION_POLICY_UPDATED = 18,
		SERVER_PROCESS_INVALID_PATH                      = 19,
		SERVER_PROCESS_SDK_INITIALIZATION_TIMEOUT        = 20,
		SERVER_PROCESS_PROCESS_READY_TIMEOUT             = 21,
		SERVER_PROCESS_CRASHED                           = 22,
		SERVER_PROCESS_TERMINATED_UNHEALTHY              = 23,
		SERVER_PROCESS_FORCE_TERMINATED                  = 24,
		SERVER_PROCESS_PROCESS_EXIT_TIMEOUT              = 25,
		GAME_SESSION_ACTIVATION_TIMEOUT                  = 26,
		FLEET_CREATION_EXTRACTING_BUILD                  = 27,
		FLEET_CREATION_RUNNING_INSTALLER                 = 28,
		FLEET_CREATION_VALIDATING_RUNTIME_CONFIG         = 29,
		FLEET_VPC_PEERING_SUCCEEDED                      = 30,
		FLEET_VPC_PEERING_FAILED                         = 31,
		FLEET_VPC_PEERING_DELETED                        = 32,
		INSTANCE_INTERRUPTED                             = 33,
		MAX                                              = 34
	};

	/**
	 * Enum GameLift.EFleetAction
	 */
	enum class EFleetAction : uint8_t
	{
		NOT_SET      = 0,
		AUTO_SCALING = 1,
		MAX          = 2
	};

	/**
	 * Enum GameLift.EFleetStatus
	 */
	enum class EFleetStatus : uint8_t
	{
		NOT_SET     = 0,
		NEW_        = 1,
		DOWNLOADING = 2,
		VALIDATING  = 3,
		BUILDING    = 4,
		ACTIVATING  = 5,
		ACTIVE      = 6,
		DELETING    = 7,
		ERROR_      = 8,
		TERMINATED  = 9,
		MAX         = 10
	};

	/**
	 * Enum GameLift.EFleetType
	 */
	enum class EFleetType : uint8_t
	{
		NOT_SET   = 0,
		ON_DEMAND = 1,
		SPOT      = 2,
		MAX       = 3
	};

	/**
	 * Enum GameLift.EGameLiftError
	 */
	enum class EGameLiftError : uint8_t
	{
		INCOMPLETE_SIGNATURE          = 0,
		INTERNAL_FAILURE              = 1,
		INVALID_ACTION                = 2,
		INVALID_CLIENT_TOKEN_ID       = 3,
		INVALID_PARAMETER_COMBINATION = 4,
		INVALID_QUERY_PARAMETER       = 5,
		INVALID_PARAMETER_VALUE       = 6,
		MISSING_ACTION                = 7,
		MISSING_AUTHENTICATION_TOKEN  = 8,
		MISSING_PARAMETER             = 9,
		OPT_IN_REQUIRED               = 10,
		REQUEST_EXPIRED               = 11,
		SERVICE_UNAVAILABLE           = 12,
		THROTTLING                    = 13,
		VALIDATION                    = 14,
		ACCESS_DENIED                 = 15,
		RESOURCE_NOT_FOUND            = 16,
		UNRECOGNIZED_CLIENT           = 17,
		MALFORMED_QUERY_STRING        = 18,
		SLOW_DOWN                     = 19,
		REQUEST_TIME_TOO_SKEWED       = 20,
		INVALID_SIGNATURE             = 21,
		SIGNATURE_DOES_NOT_MATCH      = 22,
		INVALID_ACCESS_KEY_ID         = 23,
		REQUEST_TIMEOUT               = 24,
		NETWORK_CONNECTION            = 25,
		UNKNOWN                       = 26,
		CONFLICT                      = 27,
		FLEET_CAPACITY_EXCEEDED       = 28,
		GAME_SESSION_FULL             = 29,
		IDEMPOTENT_PARAMETER_MISMATCH = 30,
		INTERNAL_SERVICE              = 31,
		INVALID_FLEET_STATUS          = 32,
		INVALID_GAME_SESSION_STATUS   = 33,
		INVALID_REQUEST               = 34,
		LIMIT_EXCEEDED                = 35,
		NOT_FOUND                     = 36,
		OUT_OF_CAPACITY               = 37,
		TAGGING_FAILED                = 38,
		TERMINAL_ROUTING_STRATEGY     = 39,
		UNAUTHORIZED                  = 40,
		UNSUPPORTED_REGION            = 41,
		MAX                           = 42
	};

	/**
	 * Enum GameLift.EGameLiftARNType
	 */
	enum class EGameLiftARNType : uint8_t
	{
		UNKNOWN        = 0,
		Fleet_Id       = 1,
		Alias_Id       = 2,
		GameSession_Id = 3,
		MAX            = 4
	};

	/**
	 * Enum GameLift.EAWSGameServerClaimStatus
	 */
	enum class EAWSGameServerClaimStatus : uint8_t
	{
		NOT_SET = 0,
		CLAIMED = 1,
		MAX     = 2
	};

	/**
	 * Enum GameLift.EAWSGameServerGroupAction
	 */
	enum class EAWSGameServerGroupAction : uint8_t
	{
		NOT_SET                = 0,
		REPLACE_INSTANCE_TYPES = 1,
		MAX                    = 2
	};

	/**
	 * Enum GameLift.EAWSGameServerGroupDeleteOption
	 */
	enum class EAWSGameServerGroupDeleteOption : uint8_t
	{
		NOT_SET      = 0,
		SAFE_DELETE  = 1,
		FORCE_DELETE = 2,
		RETAIN       = 3,
		MAX          = 4
	};

	/**
	 * Enum GameLift.EAWSGameServerGroupInstanceType
	 */
	enum class EAWSGameServerGroupInstanceType : uint8_t
	{
		NOT_SET      = 0,
		c4_large     = 1,
		c4_xlarge    = 2,
		c4_2xlarge   = 3,
		c4_4xlarge   = 4,
		c4_8xlarge   = 5,
		c5_large     = 6,
		c5_xlarge    = 7,
		c5_2xlarge   = 8,
		c5_4xlarge   = 9,
		c5_9xlarge   = 10,
		c5_12xlarge  = 11,
		c5_18xlarge  = 12,
		c5_24xlarge  = 13,
		c5a_large    = 14,
		c5a_xlarge   = 15,
		c5a_2xlarge  = 16,
		c5a_4xlarge  = 17,
		c5a_8xlarge  = 18,
		c5a_12xlarge = 19,
		c5a_16xlarge = 20,
		c5a_24xlarge = 21,
		r4_large     = 22,
		r4_xlarge    = 23,
		r4_2xlarge   = 24,
		r4_4xlarge   = 25,
		r4_8xlarge   = 26,
		r4_16xlarge  = 27,
		r5_large     = 28,
		r5_xlarge    = 29,
		r5_2xlarge   = 30,
		r5_4xlarge   = 31,
		r5_8xlarge   = 32,
		r5_12xlarge  = 33,
		r5_16xlarge  = 34,
		r5_24xlarge  = 35,
		r5a_large    = 36,
		r5a_xlarge   = 37,
		r5a_2xlarge  = 38,
		r5a_4xlarge  = 39,
		r5a_8xlarge  = 40,
		r5a_12xlarge = 41,
		r5a_16xlarge = 42,
		r5a_24xlarge = 43,
		m4_large     = 44,
		m4_xlarge    = 45,
		m4_2xlarge   = 46,
		m4_4xlarge   = 47,
		m4_10xlarge  = 48,
		m5_large     = 49,
		m5_xlarge    = 50,
		m5_2xlarge   = 51,
		m5_4xlarge   = 52,
		m5_8xlarge   = 53,
		m5_12xlarge  = 54,
		m5_16xlarge  = 55,
		m5_24xlarge  = 56,
		m5a_large    = 57,
		m5a_xlarge   = 58,
		m5a_2xlarge  = 59,
		m5a_4xlarge  = 60,
		m5a_8xlarge  = 61,
		m5a_12xlarge = 62,
		m5a_16xlarge = 63,
		m5a_24xlarge = 64,
		MAX          = 65
	};

	/**
	 * Enum GameLift.EAWSGameServerGroupStatus
	 */
	enum class EAWSGameServerGroupStatus : uint8_t
	{
		NOT_SET          = 0,
		NEW_             = 1,
		ACTIVATING       = 2,
		ACTIVE           = 3,
		DELETE_SCHEDULED = 4,
		DELETING         = 5,
		DELETED          = 6,
		ERROR_           = 7,
		MAX              = 8
	};

	/**
	 * Enum GameLift.EAWSGameServerHealthCheck
	 */
	enum class EAWSGameServerHealthCheck : uint8_t
	{
		NOT_SET = 0,
		HEALTHY = 1,
		MAX     = 2
	};

	/**
	 * Enum GameLift.EAWSGameServerInstanceStatus
	 */
	enum class EAWSGameServerInstanceStatus : uint8_t
	{
		NOT_SET          = 0,
		ACTIVE           = 1,
		DRAINING         = 2,
		SPOT_TERMINATING = 3,
		MAX              = 4
	};

	/**
	 * Enum GameLift.EAWSGameServerProtectionPolicy
	 */
	enum class EAWSGameServerProtectionPolicy : uint8_t
	{
		NOT_SET         = 0,
		NO_PROTECTION   = 1,
		FULL_PROTECTION = 2,
		MAX             = 3
	};

	/**
	 * Enum GameLift.EAWSGameServerUtilizationStatus
	 */
	enum class EAWSGameServerUtilizationStatus : uint8_t
	{
		NOT_SET   = 0,
		AVAILABLE = 1,
		UTILIZED  = 2,
		MAX       = 3
	};

	/**
	 * Enum GameLift.EGameSessionPlacementState
	 */
	enum class EGameSessionPlacementState : uint8_t
	{
		NOT_SET   = 0,
		PENDING   = 1,
		FULFILLED = 2,
		CANCELLED = 3,
		TIMED_OUT = 4,
		FAILED    = 5,
		MAX       = 6
	};

	/**
	 * Enum GameLift.EGameSessionStatus
	 */
	enum class EGameSessionStatus : uint8_t
	{
		NOT_SET     = 0,
		ACTIVE      = 1,
		ACTIVATING  = 2,
		TERMINATED  = 3,
		TERMINATING = 4,
		ERROR_      = 5,
		MAX         = 6
	};

	/**
	 * Enum GameLift.EGameSessionStatusReason
	 */
	enum class EGameSessionStatusReason : uint8_t
	{
		NOT_SET     = 0,
		INTERRUPTED = 1,
		MAX         = 2
	};

	/**
	 * Enum GameLift.EInstanceStatus
	 */
	enum class EInstanceStatus : uint8_t
	{
		NOT_SET     = 0,
		PENDING     = 1,
		ACTIVE      = 2,
		TERMINATING = 3,
		MAX         = 4
	};

	/**
	 * Enum GameLift.EIpProtocol
	 */
	enum class EIpProtocol : uint8_t
	{
		NOT_SET = 0,
		TCP     = 1,
		UDP     = 2,
		MAX     = 3
	};

	/**
	 * Enum GameLift.EMatchmakingConfigurationStatus
	 */
	enum class EMatchmakingConfigurationStatus : uint8_t
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
	 * Enum GameLift.EMetricName
	 */
	enum class EMetricName : uint8_t
	{
		NOT_SET                      = 0,
		ActivatingGameSessions       = 1,
		ActiveGameSessions           = 2,
		ActiveInstances              = 3,
		AvailableGameSessions        = 4,
		AvailablePlayerSessions      = 5,
		CurrentPlayerSessions        = 6,
		IdleInstances                = 7,
		PercentAvailableGameSessions = 8,
		PercentIdleInstances         = 9,
		QueueDepth                   = 10,
		WaitTime                     = 11,
		MAX                          = 12
	};

	/**
	 * Enum GameLift.EOperatingSystem
	 */
	enum class EOperatingSystem : uint8_t
	{
		NOT_SET        = 0,
		WINDOWS        = 1,
		AMAZON_LINUX   = 2,
		AMAZON_LINUX01 = 3,
		MAX            = 4
	};

	/**
	 * Enum GameLift.EPlayerSessionCreationPolicy
	 */
	enum class EPlayerSessionCreationPolicy : uint8_t
	{
		NOT_SET    = 0,
		ACCEPT_ALL = 1,
		DENY_ALL   = 2,
		MAX        = 3
	};

	/**
	 * Enum GameLift.EPlayerSessionStatus
	 */
	enum class EPlayerSessionStatus : uint8_t
	{
		NOT_SET   = 0,
		RESERVED  = 1,
		ACTIVE    = 2,
		COMPLETED = 3,
		TIMEDOUT  = 4,
		MAX       = 5
	};

	/**
	 * Enum GameLift.EPolicyType
	 */
	enum class EPolicyType : uint8_t
	{
		NOT_SET     = 0,
		RuleBased   = 1,
		TargetBased = 2,
		MAX         = 3
	};

	/**
	 * Enum GameLift.EProtectionPolicy
	 */
	enum class EProtectionPolicy : uint8_t
	{
		NOT_SET        = 0,
		NoProtection   = 1,
		FullProtection = 2,
		MAX            = 3
	};

	/**
	 * Enum GameLift.ERoutingStrategyType
	 */
	enum class ERoutingStrategyType : uint8_t
	{
		NOT_SET  = 0,
		SIMPLE   = 1,
		TERMINAL = 2,
		MAX      = 3
	};

	/**
	 * Enum GameLift.EScalingAdjustmentType
	 */
	enum class EScalingAdjustmentType : uint8_t
	{
		NOT_SET                 = 0,
		ChangeInCapacity        = 1,
		ExactCapacity           = 2,
		PercentChangeInCapacity = 3,
		MAX                     = 4
	};

	/**
	 * Enum GameLift.EScalingStatusType
	 */
	enum class EScalingStatusType : uint8_t
	{
		NOT_SET          = 0,
		ACTIVE           = 1,
		UPDATE_REQUESTED = 2,
		UPDATING         = 3,
		DELETE_REQUESTED = 4,
		DELETING         = 5,
		DELETED          = 6,
		ERROR_           = 7,
		MAX              = 8
	};

	/**
	 * Enum GameLift.EAWSSortOrder
	 */
	enum class EAWSSortOrder : uint8_t
	{
		NOT_SET    = 0,
		ASCENDING  = 1,
		DESCENDING = 2,
		MAX        = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GameLift.AcceptMatchRequest
	 * Size -> 0x0028
	 */
	struct FAcceptMatchRequest
	{
	public:
		class FString                                              TicketID;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      playerIds;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EAcceptanceType                                            acceptanceType;                                          // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VTOL[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameLift.AcceptMatchResult
	 * Size -> 0x0001
	 */
	struct FAcceptMatchResult
	{
	public:
		unsigned char                                              UnknownData_HRHQ[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameLift.RoutingStrategy
	 * Size -> 0x0028
	 */
	struct FRoutingStrategy
	{
	public:
		ERoutingStrategyType                                       Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2H6S[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              fleetId;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.Alias
	 * Size -> 0x0078
	 */
	struct FAlias
	{
	public:
		class FString                                              aliasId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              aliasArn;                                                // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRoutingStrategy                                    RoutingStrategy;                                         // 0x0040(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FDateTime                                           creationTime;                                            // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           lastUpdatedTime;                                         // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.AWSEvent
	 * Size -> 0x0050
	 */
	struct FAWSEvent
	{
	public:
		class FString                                              eventId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              resourceId;                                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEventCode                                                 eventCode;                                               // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E8S1[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Message;                                                 // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           eventTime;                                               // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              preSignedLogUrl;                                         // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.AWSGameLiftLocationConfiguration
	 * Size -> 0x0010
	 */
	struct FAWSGameLiftLocationConfiguration
	{
	public:
		class FString                                              Location;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.AWSGameLiftCreateFleetLocationsRequest
	 * Size -> 0x0020
	 */
	struct FAWSGameLiftCreateFleetLocationsRequest
	{
	public:
		class FString                                              fleetId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAWSGameLiftLocationConfiguration>           locations;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.AWSGameLiftLocationState
	 * Size -> 0x0018
	 */
	struct FAWSGameLiftLocationState
	{
	public:
		class FString                                              Location;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFleetStatus                                               status;                                                  // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QKKK[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameLift.AWSGameLiftCreateFleetLocationsResult
	 * Size -> 0x0030
	 */
	struct FAWSGameLiftCreateFleetLocationsResult
	{
	public:
		class FString                                              fleetId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              fleetArn;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAWSGameLiftLocationState>                   locationStates;                                          // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.AWSGameLiftDeleteFleetLocationsRequest
	 * Size -> 0x0020
	 */
	struct FAWSGameLiftDeleteFleetLocationsRequest
	{
	public:
		class FString                                              fleetId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      locations;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.AWSGameLiftDeleteFleetLocationsResult
	 * Size -> 0x0030
	 */
	struct FAWSGameLiftDeleteFleetLocationsResult
	{
	public:
		class FString                                              fleetId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              fleetArn;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAWSGameLiftLocationState>                   locationStates;                                          // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.AWSGameLiftDescribeFleetLocationAttributesRequest
	 * Size -> 0x0038
	 */
	struct FAWSGameLiftDescribeFleetLocationAttributesRequest
	{
	public:
		class FString                                              fleetId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      locations;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    limit;                                                   // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_26UG[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              nextToken;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.AWSGameLiftLocationAttributes
	 * Size -> 0x0030
	 */
	struct FAWSGameLiftLocationAttributes
	{
	public:
		struct FAWSGameLiftLocationState                           locationState;                                           // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<EFleetAction>                                       stoppedActions;                                          // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EAWSGameLiftLocationUpdateStatus                           updateStatus;                                            // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AVM7[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameLift.AWSGameLiftDescribeFleetLocationAttributesResult
	 * Size -> 0x0040
	 */
	struct FAWSGameLiftDescribeFleetLocationAttributesResult
	{
	public:
		class FString                                              fleetId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              fleetArn;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAWSGameLiftLocationAttributes>              locationAttributes;                                      // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              nextToken;                                               // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.AWSGameLiftDescribeFleetLocationCapacityRequest
	 * Size -> 0x0020
	 */
	struct FAWSGameLiftDescribeFleetLocationCapacityRequest
	{
	public:
		class FString                                              fleetId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Location;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.EC2InstanceCounts
	 * Size -> 0x001C
	 */
	struct FEC2InstanceCounts
	{
	public:
		int32_t                                                    DESIRED;                                                 // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MINIMUM;                                                 // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MAXIMUM;                                                 // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PENDING;                                                 // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Active;                                                  // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Idle;                                                    // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TERMINATING;                                             // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.FleetCapacity
	 * Size -> 0x0050
	 */
	struct FFleetCapacity
	{
	public:
		class FString                                              fleetId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              fleetArn;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEC2InstanceType                                           instanceType;                                            // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UVVJ[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEC2InstanceCounts                                  instanceCounts;                                          // 0x0024(0x001C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FString                                              Location;                                                // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.AWSGameLiftDescribeFleetLocationCapacityResult
	 * Size -> 0x0050
	 */
	struct FAWSGameLiftDescribeFleetLocationCapacityResult
	{
	public:
		struct FFleetCapacity                                      FleetCapacity;                                           // 0x0000(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.AWSGameLiftDescribeFleetLocationUtilizationRequest
	 * Size -> 0x0020
	 */
	struct FAWSGameLiftDescribeFleetLocationUtilizationRequest
	{
	public:
		class FString                                              fleetId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Location;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.FleetUtilization
	 * Size -> 0x0040
	 */
	struct FFleetUtilization
	{
	public:
		class FString                                              fleetId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              fleetArn;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    activeServerProcessCount;                                // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    activeGameSessionCount;                                  // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    currentPlayerSessionCount;                               // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    maximumPlayerSessionCount;                               // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Location;                                                // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.AWSGameLiftDescribeFleetLocationUtilizationResult
	 * Size -> 0x0040
	 */
	struct FAWSGameLiftDescribeFleetLocationUtilizationResult
	{
	public:
		struct FFleetUtilization                                   FleetUtilization;                                        // 0x0000(0x0040) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.AWSGameLiftFilterConfiguration
	 * Size -> 0x0010
	 */
	struct FAWSGameLiftFilterConfiguration
	{
	public:
		TArray<class FString>                                      allowedLocations;                                        // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.AWSGameLiftPriorityConfiguration
	 * Size -> 0x0020
	 */
	struct FAWSGameLiftPriorityConfiguration
	{
	public:
		TArray<EAWSGameLiftPriorityType>                           priorityOrder;                                           // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      locationOrder;                                           // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.GameProperty
	 * Size -> 0x0020
	 */
	struct FGameProperty
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Value;                                                   // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.AWSGameSession
	 * Size -> 0x00D8
	 */
	struct FAWSGameSession
	{
	public:
		class FString                                              GameSessionId;                                           // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              fleetId;                                                 // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              fleetArn;                                                // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           creationTime;                                            // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           terminationTime;                                         // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    currentPlayerSessionCount;                               // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    maximumPlayerSessionCount;                               // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameSessionStatus                                         status;                                                  // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameSessionStatusReason                                   statusReason;                                            // 0x0059(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D0D1[0x6];                                   // 0x005A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameProperty>                               gameProperties;                                          // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              IPAddress;                                               // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              dnsName;                                                 // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Port;                                                    // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlayerSessionCreationPolicy                               playerSessionCreationPolicy;                             // 0x0094(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FFJ3[0x3];                                   // 0x0095(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              creatorId;                                               // 0x0098(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              gameSessionData;                                         // 0x00A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              matchmakerData;                                          // 0x00B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Location;                                                // 0x00C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.GameLiftAttributeValue
	 * Size -> 0x0078
	 */
	struct FGameLiftAttributeValue
	{
	public:
		class FString                                              S;                                                       // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      N;                                                       // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ME9W[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      sL;                                                      // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TMap<class FString, float>                                 sDM;                                                     // 0x0028(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.AWSPlayer
	 * Size -> 0x00C0
	 */
	struct FAWSPlayer
	{
	public:
		class FString                                              PlayerId;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, struct FGameLiftAttributeValue>        playerAttributes;                                        // 0x0010(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              Team;                                                    // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, int32_t>                               latencyInMs;                                             // 0x0070(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.Build
	 * Size -> 0x0060
	 */
	struct FBuild
	{
	public:
		class FString                                              buildId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              buildArn;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Version;                                                 // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBuildStatus                                               status;                                                  // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9C2A[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    sizeOnDisk;                                              // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOperatingSystem                                           operatingSystem;                                         // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZLFL[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           creationTime;                                            // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.CertificateConfiguration
	 * Size -> 0x0001
	 */
	struct FCertificateConfiguration
	{
	public:
		ECertificateType                                           certificateType;                                         // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.ClaimGameServerRequest
	 * Size -> 0x0030
	 */
	struct FClaimGameServerRequest
	{
	public:
		class FString                                              gameServerGroupName;                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              gameServerId;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              gameServerData;                                          // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.GameServer
	 * Size -> 0x0080
	 */
	struct FGameServer
	{
	public:
		class FString                                              gameServerGroupName;                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              gameServerGroupArn;                                      // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              gameServerId;                                            // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              instanceId;                                              // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ConnectionInfo;                                          // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              gameServerData;                                          // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSGameServerClaimStatus                                  claimStatus;                                             // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSGameServerUtilizationStatus                            utilizationStatus;                                       // 0x0061(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PAYZ[0x6];                                   // 0x0062(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           registrationTime;                                        // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           lastClaimTime;                                           // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           lastHealthCheckTime;                                     // 0x0078(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.ClaimGameServerResult
	 * Size -> 0x0080
	 */
	struct FClaimGameServerResult
	{
	public:
		struct FGameServer                                         GameServer;                                              // 0x0000(0x0080) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.GameLiftS3Location
	 * Size -> 0x0040
	 */
	struct FGameLiftS3Location
	{
	public:
		class FString                                              bucket;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Key;                                                     // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              roleArn;                                                 // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              objectVersion;                                           // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.GameLiftTag
	 * Size -> 0x0020
	 */
	struct FGameLiftTag
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Value;                                                   // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.CreateBuildRequest
	 * Size -> 0x0078
	 */
	struct FCreateBuildRequest
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Version;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameLiftS3Location                                 storageLocation;                                         // 0x0020(0x0040) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EOperatingSystem                                           operatingSystem;                                         // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O8PV[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameLiftTag>                                Tags;                                                    // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.GameLiftCredentials
	 * Size -> 0x0030
	 */
	struct FGameLiftCredentials
	{
	public:
		class FString                                              accessKeyId;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              secretAccessKey;                                         // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              sessionToken;                                            // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.CreateBuildResult
	 * Size -> 0x00D0
	 */
	struct FCreateBuildResult
	{
	public:
		struct FBuild                                              Build;                                                   // 0x0000(0x0060) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameLiftCredentials                                uploadCredentials;                                       // 0x0060(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameLiftS3Location                                 storageLocation;                                         // 0x0090(0x0040) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.IpPermission
	 * Size -> 0x0020
	 */
	struct FIpPermission
	{
	public:
		int32_t                                                    fromPort;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    toPort;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ipRange;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIpProtocol                                                Protocol;                                                // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U3SL[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameLift.ServerProcess
	 * Size -> 0x0028
	 */
	struct FServerProcess
	{
	public:
		class FString                                              launchPath;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Parameters;                                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    concurrentExecutions;                                    // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_92KT[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameLift.RuntimeConfiguration
	 * Size -> 0x0018
	 */
	struct FRuntimeConfiguration
	{
	public:
		TArray<struct FServerProcess>                              serverProcesses;                                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    maxConcurrentGameSessionActivations;                     // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    gameSessionActivationTimeoutSeconds;                     // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.ResourceCreationLimitPolicy
	 * Size -> 0x0008
	 */
	struct FResourceCreationLimitPolicy
	{
	public:
		int32_t                                                    newGameSessionsPerCreator;                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    policyPeriodInMinutes;                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.CreateFleetRequest
	 * Size -> 0x0120
	 */
	struct FCreateFleetRequest
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              buildId;                                                 // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              scriptId;                                                // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              serverLaunchPath;                                        // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              serverLaunchParameters;                                  // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      logPaths;                                                // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EEC2InstanceType                                           eC2InstanceType;                                         // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I9VL[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FIpPermission>                               eC2InboundPermissions;                                   // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EProtectionPolicy                                          newGameSessionProtectionPolicy;                          // 0x0088(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JKVT[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeConfiguration                               RuntimeConfiguration;                                    // 0x0090(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FResourceCreationLimitPolicy                        ResourceCreationLimitPolicy;                             // 0x00A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      metricGroups;                                            // 0x00B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              peerVpcAwsAccountId;                                     // 0x00C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              peerVpcId;                                               // 0x00D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFleetType                                                 fleetType;                                               // 0x00E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V35W[0x7];                                   // 0x00E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              instanceRoleArn;                                         // 0x00E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCertificateConfiguration                           CertificateConfiguration;                                // 0x00F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B4WN[0x7];                                   // 0x00F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAWSGameLiftLocationConfiguration>           locations;                                               // 0x0100(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGameLiftTag>                                Tags;                                                    // 0x0110(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.FleetAttributes
	 * Size -> 0x0118
	 */
	struct FFleetAttributes
	{
	public:
		class FString                                              fleetId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              fleetArn;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFleetType                                                 fleetType;                                               // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEC2InstanceType                                           instanceType;                                            // 0x0021(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZP6N[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Description;                                             // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           creationTime;                                            // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           terminationTime;                                         // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFleetStatus                                               status;                                                  // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_STOA[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              buildId;                                                 // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              buildArn;                                                // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              scriptId;                                                // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              scriptArn;                                               // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              serverLaunchPath;                                        // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              serverLaunchParameters;                                  // 0x00B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      logPaths;                                                // 0x00C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EProtectionPolicy                                          newGameSessionProtectionPolicy;                          // 0x00D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOperatingSystem                                           operatingSystem;                                         // 0x00D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E9PE[0x2];                                   // 0x00D2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FResourceCreationLimitPolicy                        ResourceCreationLimitPolicy;                             // 0x00D4(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2XG9[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      metricGroups;                                            // 0x00E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<EFleetAction>                                       stoppedActions;                                          // 0x00F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              instanceRoleArn;                                         // 0x0100(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCertificateConfiguration                           CertificateConfiguration;                                // 0x0110(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EK7P[0x7];                                   // 0x0111(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameLift.CreateFleetResult
	 * Size -> 0x0118
	 */
	struct FCreateFleetResult
	{
	public:
		struct FFleetAttributes                                    FleetAttributes;                                         // 0x0000(0x0118) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.LaunchTemplateSpecification
	 * Size -> 0x0030
	 */
	struct FLaunchTemplateSpecification
	{
	public:
		class FString                                              launchTemplateId;                                        // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              launchTemplateName;                                      // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Version;                                                 // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.InstanceDefinition
	 * Size -> 0x0018
	 */
	struct FInstanceDefinition
	{
	public:
		EAWSGameServerGroupInstanceType                            instanceType;                                            // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OJQ8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              weightedCapacity;                                        // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.TargetTrackingConfiguration
	 * Size -> 0x0004
	 */
	struct FTargetTrackingConfiguration
	{
	public:
		float                                                      targetValue;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.GameServerGroupAutoScalingPolicy
	 * Size -> 0x0008
	 */
	struct FGameServerGroupAutoScalingPolicy
	{
	public:
		int32_t                                                    estimatedInstanceWarmup;                                 // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTargetTrackingConfiguration                        TargetTrackingConfiguration;                             // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.CreateGameServerGroupRequest
	 * Size -> 0x0098
	 */
	struct FCreateGameServerGroupRequest
	{
	public:
		class FString                                              gameServerGroupName;                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              roleArn;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    minSize;                                                 // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    maxSize;                                                 // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLaunchTemplateSpecification                        launchTemplate;                                          // 0x0028(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FInstanceDefinition>                         instanceDefinitions;                                     // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FGameServerGroupAutoScalingPolicy                   autoScalingPolicy;                                       // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EAWSBalancingStrategy                                      balancingStrategy;                                       // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSGameServerProtectionPolicy                             gameServerProtectionPolicy;                              // 0x0071(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GQ9R[0x6];                                   // 0x0072(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      vpcSubnets;                                              // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGameLiftTag>                                Tags;                                                    // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.GameServerGroup
	 * Size -> 0x0090
	 */
	struct FGameServerGroup
	{
	public:
		class FString                                              gameServerGroupName;                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              gameServerGroupArn;                                      // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              roleArn;                                                 // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FInstanceDefinition>                         instanceDefinitions;                                     // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EAWSBalancingStrategy                                      balancingStrategy;                                       // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSGameServerProtectionPolicy                             gameServerProtectionPolicy;                              // 0x0041(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W139[0x6];                                   // 0x0042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              autoScalingGroupArn;                                     // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSGameServerGroupStatus                                  status;                                                  // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3A08[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              statusReason;                                            // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<EAWSGameServerGroupAction>                          suspendedActions;                                        // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FDateTime                                           creationTime;                                            // 0x0080(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           lastUpdatedTime;                                         // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.CreateGameServerGroupResult
	 * Size -> 0x0090
	 */
	struct FCreateGameServerGroupResult
	{
	public:
		struct FGameServerGroup                                    GameServerGroup;                                         // 0x0000(0x0090) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.PlayerLatencyPolicy
	 * Size -> 0x0008
	 */
	struct FPlayerLatencyPolicy
	{
	public:
		int32_t                                                    maximumIndividualPlayerLatencyMilliseconds;              // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    policyDurationSeconds;                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.GameSessionQueueDestination
	 * Size -> 0x0010
	 */
	struct FGameSessionQueueDestination
	{
	public:
		class FString                                              destinationArn;                                          // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.CreateGameSessionQueueRequest
	 * Size -> 0x0098
	 */
	struct FCreateGameSessionQueueRequest
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    timeoutInSeconds;                                        // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S2QQ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPlayerLatencyPolicy>                        playerLatencyPolicies;                                   // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGameSessionQueueDestination>                destinations;                                            // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FAWSGameLiftFilterConfiguration                     filterConfiguration;                                     // 0x0038(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FAWSGameLiftPriorityConfiguration                   priorityConfiguration;                                   // 0x0048(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              customEventData;                                         // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              notificationTarget;                                      // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGameLiftTag>                                Tags;                                                    // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.GameSessionQueue
	 * Size -> 0x0098
	 */
	struct FGameSessionQueue
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              gameSessionQueueArn;                                     // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    timeoutInSeconds;                                        // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FVYU[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPlayerLatencyPolicy>                        playerLatencyPolicies;                                   // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGameSessionQueueDestination>                destinations;                                            // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FAWSGameLiftFilterConfiguration                     filterConfiguration;                                     // 0x0048(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FAWSGameLiftPriorityConfiguration                   priorityConfiguration;                                   // 0x0058(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              customEventData;                                         // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              notificationTarget;                                      // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.CreateGameSessionQueueResult
	 * Size -> 0x0098
	 */
	struct FCreateGameSessionQueueResult
	{
	public:
		struct FGameSessionQueue                                   GameSessionQueue;                                        // 0x0000(0x0098) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.CreateGameSessionRequest
	 * Size -> 0x0088
	 */
	struct FCreateGameSessionRequest
	{
	public:
		class FString                                              awsResourceName;                                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    maximumPlayerSessionCount;                               // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G7QK[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGameProperty>                               gameProperties;                                          // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              creatorId;                                               // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GameSessionId;                                           // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              idempotencyToken;                                        // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              gameSessionData;                                         // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Location;                                                // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.CreateGameSessionResult
	 * Size -> 0x00D8
	 */
	struct FCreateGameSessionResult
	{
	public:
		struct FAWSGameSession                                     GameSession;                                             // 0x0000(0x00D8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.CreateMatchmakingConfigurationRequest
	 * Size -> 0x00B0
	 */
	struct FCreateMatchmakingConfigurationRequest
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      gameSessionQueueArns;                                    // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    requestTimeoutSeconds;                                   // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    acceptanceTimeoutSeconds;                                // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       acceptanceRequired;                                      // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4ALV[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ruleSetName;                                             // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              notificationTarget;                                      // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    additionalPlayerCount;                                   // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8R66[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              customEventData;                                         // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGameProperty>                               gameProperties;                                          // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              gameSessionData;                                         // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBackfillMode                                              backfillMode;                                            // 0x0098(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSGameLiftFlexMatchMode                                  flexMatchMode;                                           // 0x0099(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H2IA[0x6];                                   // 0x009A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameLiftTag>                                Tags;                                                    // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.MatchmakingConfiguration
	 * Size -> 0x00C8
	 */
	struct FMatchmakingConfiguration
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              configurationArn;                                        // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      gameSessionQueueArns;                                    // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    requestTimeoutSeconds;                                   // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    acceptanceTimeoutSeconds;                                // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       acceptanceRequired;                                      // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QNCX[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ruleSetName;                                             // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ruleSetArn;                                              // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              notificationTarget;                                      // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    additionalPlayerCount;                                   // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OTGM[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              customEventData;                                         // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           creationTime;                                            // 0x0098(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGameProperty>                               gameProperties;                                          // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              gameSessionData;                                         // 0x00B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBackfillMode                                              backfillMode;                                            // 0x00C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSGameLiftFlexMatchMode                                  flexMatchMode;                                           // 0x00C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SLLC[0x6];                                   // 0x00C2(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameLift.CreateMatchmakingConfigurationResult
	 * Size -> 0x00C8
	 */
	struct FCreateMatchmakingConfigurationResult
	{
	public:
		struct FMatchmakingConfiguration                           configuration;                                           // 0x0000(0x00C8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.CreateMatchmakingRuleSetRequest
	 * Size -> 0x0030
	 */
	struct FCreateMatchmakingRuleSetRequest
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ruleSetBody;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGameLiftTag>                                Tags;                                                    // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.MatchmakingRuleSet
	 * Size -> 0x0038
	 */
	struct FMatchmakingRuleSet
	{
	public:
		class FString                                              ruleSetName;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ruleSetArn;                                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ruleSetBody;                                             // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           creationTime;                                            // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.CreateMatchmakingRuleSetResult
	 * Size -> 0x0038
	 */
	struct FCreateMatchmakingRuleSetResult
	{
	public:
		struct FMatchmakingRuleSet                                 ruleSet;                                                 // 0x0000(0x0038) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.CreatePlayerSessionRequest
	 * Size -> 0x0030
	 */
	struct FCreatePlayerSessionRequest
	{
	public:
		class FString                                              awsResourceName;                                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerId;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              playerData;                                              // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.AWSPlayerSession
	 * Size -> 0x00A0
	 */
	struct FAWSPlayerSession
	{
	public:
		class FString                                              PlayerSessionId;                                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerId;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GameSessionId;                                           // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              fleetId;                                                 // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              fleetArn;                                                // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           creationTime;                                            // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           terminationTime;                                         // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlayerSessionStatus                                       status;                                                  // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZZAQ[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              IPAddress;                                               // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              dnsName;                                                 // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Port;                                                    // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VTID[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              playerData;                                              // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.CreatePlayerSessionResult
	 * Size -> 0x00A0
	 */
	struct FCreatePlayerSessionResult
	{
	public:
		struct FAWSPlayerSession                                   playerSession;                                           // 0x0000(0x00A0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.CreatePlayerSessionsRequest
	 * Size -> 0x0070
	 */
	struct FCreatePlayerSessionsRequest
	{
	public:
		class FString                                              awsResourceName;                                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      playerIds;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         playerDataMap;                                           // 0x0020(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.CreatePlayerSessionsResult
	 * Size -> 0x0010
	 */
	struct FCreatePlayerSessionsResult
	{
	public:
		TArray<struct FAWSPlayerSession>                           PlayerSessions;                                          // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.CreateScriptRequest
	 * Size -> 0x0080
	 */
	struct FCreateScriptRequest
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Version;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameLiftS3Location                                 storageLocation;                                         // 0x0020(0x0040) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              zipFile;                                                 // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGameLiftTag>                                Tags;                                                    // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.Script
	 * Size -> 0x0090
	 */
	struct FScript
	{
	public:
		class FString                                              scriptId;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              scriptArn;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Version;                                                 // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    sizeOnDisk;                                              // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           creationTime;                                            // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameLiftS3Location                                 storageLocation;                                         // 0x0050(0x0040) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.CreateScriptResult
	 * Size -> 0x0090
	 */
	struct FCreateScriptResult
	{
	public:
		struct FScript                                             Script;                                                  // 0x0000(0x0090) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.CreateVpcPeeringAuthorizationRequest
	 * Size -> 0x0020
	 */
	struct FCreateVpcPeeringAuthorizationRequest
	{
	public:
		class FString                                              gameLiftAwsAccountId;                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              peerVpcId;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.VpcPeeringAuthorization
	 * Size -> 0x0040
	 */
	struct FVpcPeeringAuthorization
	{
	public:
		class FString                                              gameLiftAwsAccountId;                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              peerVpcAwsAccountId;                                     // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              peerVpcId;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           creationTime;                                            // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           expirationTime;                                          // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.CreateVpcPeeringAuthorizationResult
	 * Size -> 0x0040
	 */
	struct FCreateVpcPeeringAuthorizationResult
	{
	public:
		struct FVpcPeeringAuthorization                            VpcPeeringAuthorization;                                 // 0x0000(0x0040) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.CreateVpcPeeringConnectionRequest
	 * Size -> 0x0030
	 */
	struct FCreateVpcPeeringConnectionRequest
	{
	public:
		class FString                                              fleetId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              peerVpcAwsAccountId;                                     // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              peerVpcId;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.CreateVpcPeeringConnectionResult
	 * Size -> 0x0001
	 */
	struct FCreateVpcPeeringConnectionResult
	{
	public:
		unsigned char                                              UnknownData_NE2W[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameLift.DeleteBuildRequest
	 * Size -> 0x0010
	 */
	struct FDeleteBuildRequest
	{
	public:
		class FString                                              buildId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DeleteFleetRequest
	 * Size -> 0x0010
	 */
	struct FDeleteFleetRequest
	{
	public:
		class FString                                              fleetId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DeleteGameServerGroupRequest
	 * Size -> 0x0018
	 */
	struct FDeleteGameServerGroupRequest
	{
	public:
		class FString                                              gameServerGroupName;                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSGameServerGroupDeleteOption                            deleteOption;                                            // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZUOA[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameLift.DeleteGameServerGroupResult
	 * Size -> 0x0090
	 */
	struct FDeleteGameServerGroupResult
	{
	public:
		struct FGameServerGroup                                    GameServerGroup;                                         // 0x0000(0x0090) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DeleteGameSessionQueueRequest
	 * Size -> 0x0010
	 */
	struct FDeleteGameSessionQueueRequest
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DeleteGameSessionQueueResult
	 * Size -> 0x0001
	 */
	struct FDeleteGameSessionQueueResult
	{
	public:
		unsigned char                                              UnknownData_B8X8[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameLift.DeleteMatchmakingConfigurationRequest
	 * Size -> 0x0010
	 */
	struct FDeleteMatchmakingConfigurationRequest
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DeleteMatchmakingConfigurationResult
	 * Size -> 0x0001
	 */
	struct FDeleteMatchmakingConfigurationResult
	{
	public:
		unsigned char                                              UnknownData_92AP[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameLift.DeleteMatchmakingRuleSetRequest
	 * Size -> 0x0010
	 */
	struct FDeleteMatchmakingRuleSetRequest
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DeleteMatchmakingRuleSetResult
	 * Size -> 0x0001
	 */
	struct FDeleteMatchmakingRuleSetResult
	{
	public:
		unsigned char                                              UnknownData_QCJH[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameLift.DeleteScalingPolicyRequest
	 * Size -> 0x0020
	 */
	struct FDeleteScalingPolicyRequest
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              fleetId;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DeleteScriptRequest
	 * Size -> 0x0010
	 */
	struct FDeleteScriptRequest
	{
	public:
		class FString                                              scriptId;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DeleteVpcPeeringAuthorizationRequest
	 * Size -> 0x0020
	 */
	struct FDeleteVpcPeeringAuthorizationRequest
	{
	public:
		class FString                                              gameLiftAwsAccountId;                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              peerVpcId;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DeleteVpcPeeringAuthorizationResult
	 * Size -> 0x0001
	 */
	struct FDeleteVpcPeeringAuthorizationResult
	{
	public:
		unsigned char                                              UnknownData_AUTF[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameLift.DeleteVpcPeeringConnectionRequest
	 * Size -> 0x0020
	 */
	struct FDeleteVpcPeeringConnectionRequest
	{
	public:
		class FString                                              fleetId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              vpcPeeringConnectionId;                                  // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DeleteVpcPeeringConnectionResult
	 * Size -> 0x0001
	 */
	struct FDeleteVpcPeeringConnectionResult
	{
	public:
		unsigned char                                              UnknownData_MWJA[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameLift.DeregisterGameServerRequest
	 * Size -> 0x0020
	 */
	struct FDeregisterGameServerRequest
	{
	public:
		class FString                                              gameServerGroupName;                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              gameServerId;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DescribeAliasRequest
	 * Size -> 0x0010
	 */
	struct FDescribeAliasRequest
	{
	public:
		class FString                                              aliasId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DescribeAliasResult
	 * Size -> 0x0078
	 */
	struct FDescribeAliasResult
	{
	public:
		struct FAlias                                              Alias;                                                   // 0x0000(0x0078) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DescribeBuildRequest
	 * Size -> 0x0010
	 */
	struct FDescribeBuildRequest
	{
	public:
		class FString                                              buildId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DescribeBuildResult
	 * Size -> 0x0060
	 */
	struct FDescribeBuildResult
	{
	public:
		struct FBuild                                              Build;                                                   // 0x0000(0x0060) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DescribeEC2InstanceLimitsRequest
	 * Size -> 0x0018
	 */
	struct FDescribeEC2InstanceLimitsRequest
	{
	public:
		EEC2InstanceType                                           eC2InstanceType;                                         // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RIZ0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Location;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.EC2InstanceLimit
	 * Size -> 0x0020
	 */
	struct FEC2InstanceLimit
	{
	public:
		EEC2InstanceType                                           eC2InstanceType;                                         // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ELNC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    currentInstances;                                        // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    instanceLimit;                                           // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H2OQ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Location;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DescribeEC2InstanceLimitsResult
	 * Size -> 0x0010
	 */
	struct FDescribeEC2InstanceLimitsResult
	{
	public:
		TArray<struct FEC2InstanceLimit>                           EC2InstanceLimits;                                       // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DescribeFleetAttributesRequest
	 * Size -> 0x0028
	 */
	struct FDescribeFleetAttributesRequest
	{
	public:
		TArray<class FString>                                      fleetIds;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    limit;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VEM3[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              nextToken;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DescribeFleetAttributesResult
	 * Size -> 0x0020
	 */
	struct FDescribeFleetAttributesResult
	{
	public:
		TArray<struct FFleetAttributes>                            FleetAttributes;                                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              nextToken;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DescribeFleetCapacityRequest
	 * Size -> 0x0028
	 */
	struct FDescribeFleetCapacityRequest
	{
	public:
		TArray<class FString>                                      fleetIds;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    limit;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LW6L[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              nextToken;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DescribeFleetCapacityResult
	 * Size -> 0x0020
	 */
	struct FDescribeFleetCapacityResult
	{
	public:
		TArray<struct FFleetCapacity>                              FleetCapacity;                                           // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              nextToken;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DescribeFleetEventsRequest
	 * Size -> 0x0038
	 */
	struct FDescribeFleetEventsRequest
	{
	public:
		class FString                                              fleetId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           startTime;                                               // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           endTime;                                                 // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    limit;                                                   // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DUV6[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              nextToken;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DescribeFleetEventsResult
	 * Size -> 0x0020
	 */
	struct FDescribeFleetEventsResult
	{
	public:
		TArray<struct FAWSEvent>                                   events;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              nextToken;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DescribeFleetPortSettingsRequest
	 * Size -> 0x0020
	 */
	struct FDescribeFleetPortSettingsRequest
	{
	public:
		class FString                                              fleetId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Location;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DescribeFleetPortSettingsResult
	 * Size -> 0x0048
	 */
	struct FDescribeFleetPortSettingsResult
	{
	public:
		class FString                                              fleetId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              fleetArn;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FIpPermission>                               inboundPermissions;                                      // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EAWSGameLiftLocationUpdateStatus                           updateStatus;                                            // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OK7H[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Location;                                                // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DescribeFleetUtilizationRequest
	 * Size -> 0x0028
	 */
	struct FDescribeFleetUtilizationRequest
	{
	public:
		TArray<class FString>                                      fleetIds;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    limit;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S2O6[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              nextToken;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DescribeFleetUtilizationResult
	 * Size -> 0x0020
	 */
	struct FDescribeFleetUtilizationResult
	{
	public:
		TArray<struct FFleetUtilization>                           FleetUtilization;                                        // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              nextToken;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DescribeGameServerGroupRequest
	 * Size -> 0x0010
	 */
	struct FDescribeGameServerGroupRequest
	{
	public:
		class FString                                              gameServerGroupName;                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DescribeGameServerGroupResult
	 * Size -> 0x0090
	 */
	struct FDescribeGameServerGroupResult
	{
	public:
		struct FGameServerGroup                                    GameServerGroup;                                         // 0x0000(0x0090) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DescribeGameServerInstancesRequest
	 * Size -> 0x0038
	 */
	struct FDescribeGameServerInstancesRequest
	{
	public:
		class FString                                              gameServerGroupName;                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      instanceIds;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    limit;                                                   // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ADLA[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              nextToken;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.GameServerInstance
	 * Size -> 0x0038
	 */
	struct FGameServerInstance
	{
	public:
		class FString                                              gameServerGroupName;                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              gameServerGroupArn;                                      // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              instanceId;                                              // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSGameServerInstanceStatus                               instanceStatus;                                          // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_00XX[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameLift.DescribeGameServerInstancesResult
	 * Size -> 0x0020
	 */
	struct FDescribeGameServerInstancesResult
	{
	public:
		TArray<struct FGameServerInstance>                         gameServerInstances;                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              nextToken;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DescribeGameServerRequest
	 * Size -> 0x0020
	 */
	struct FDescribeGameServerRequest
	{
	public:
		class FString                                              gameServerGroupName;                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              gameServerId;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DescribeGameServerResult
	 * Size -> 0x0080
	 */
	struct FDescribeGameServerResult
	{
	public:
		struct FGameServer                                         GameServer;                                              // 0x0000(0x0080) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DescribeGameSessionDetailsRequest
	 * Size -> 0x0048
	 */
	struct FDescribeGameSessionDetailsRequest
	{
	public:
		class FString                                              awsResourceName;                                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Location;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              statusFilter;                                            // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    limit;                                                   // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SO9C[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              nextToken;                                               // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.AWSGameSessionDetail
	 * Size -> 0x00E0
	 */
	struct FAWSGameSessionDetail
	{
	public:
		struct FAWSGameSession                                     GameSession;                                             // 0x0000(0x00D8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EProtectionPolicy                                          protectionPolicy;                                        // 0x00D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KNKL[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameLift.DescribeGameSessionDetailsResult
	 * Size -> 0x0020
	 */
	struct FDescribeGameSessionDetailsResult
	{
	public:
		TArray<struct FAWSGameSessionDetail>                       gameSessionDetails;                                      // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              nextToken;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DescribeGameSessionPlacementRequest
	 * Size -> 0x0010
	 */
	struct FDescribeGameSessionPlacementRequest
	{
	public:
		class FString                                              placementId;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.PlayerLatency
	 * Size -> 0x0028
	 */
	struct FPlayerLatency
	{
	public:
		class FString                                              PlayerId;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              regionIdentifier;                                        // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      latencyInMilliseconds;                                   // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3VA8[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameLift.PlacedPlayerSession
	 * Size -> 0x0020
	 */
	struct FPlacedPlayerSession
	{
	public:
		class FString                                              PlayerId;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerSessionId;                                         // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.GameSessionPlacement
	 * Size -> 0x00F8
	 */
	struct FGameSessionPlacement
	{
	public:
		class FString                                              placementId;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              gameSessionQueueName;                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameSessionPlacementState                                 status;                                                  // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ORA0[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameProperty>                               gameProperties;                                          // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    maximumPlayerSessionCount;                               // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N0T5[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              gameSessionName;                                         // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GameSessionId;                                           // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              gameSessionArn;                                          // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              gameSessionRegion;                                       // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPlayerLatency>                              playerLatencies;                                         // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FDateTime                                           startTime;                                               // 0x0090(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           endTime;                                                 // 0x0098(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              IPAddress;                                               // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              dnsName;                                                 // 0x00B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Port;                                                    // 0x00C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_REG3[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPlacedPlayerSession>                        placedPlayerSessions;                                    // 0x00C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              gameSessionData;                                         // 0x00D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              matchmakerData;                                          // 0x00E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DescribeGameSessionPlacementResult
	 * Size -> 0x00F8
	 */
	struct FDescribeGameSessionPlacementResult
	{
	public:
		struct FGameSessionPlacement                               GameSessionPlacement;                                    // 0x0000(0x00F8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DescribeGameSessionQueuesRequest
	 * Size -> 0x0028
	 */
	struct FDescribeGameSessionQueuesRequest
	{
	public:
		TArray<class FString>                                      names;                                                   // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    limit;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YPRX[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              nextToken;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DescribeGameSessionQueuesResult
	 * Size -> 0x0020
	 */
	struct FDescribeGameSessionQueuesResult
	{
	public:
		TArray<struct FGameSessionQueue>                           gameSessionQueues;                                       // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              nextToken;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DescribeGameSessionsRequest
	 * Size -> 0x0048
	 */
	struct FDescribeGameSessionsRequest
	{
	public:
		class FString                                              awsResourceName;                                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Location;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              statusFilter;                                            // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    limit;                                                   // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V4Z0[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              nextToken;                                               // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DescribeGameSessionsResult
	 * Size -> 0x0020
	 */
	struct FDescribeGameSessionsResult
	{
	public:
		TArray<struct FAWSGameSession>                             gameSessions;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              nextToken;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DescribeInstancesRequest
	 * Size -> 0x0048
	 */
	struct FDescribeInstancesRequest
	{
	public:
		class FString                                              fleetId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              instanceId;                                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    limit;                                                   // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZSXM[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              nextToken;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Location;                                                // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.Instance
	 * Size -> 0x0070
	 */
	struct FInstance
	{
	public:
		class FString                                              fleetId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              fleetArn;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              instanceId;                                              // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              IPAddress;                                               // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              dnsName;                                                 // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOperatingSystem                                           operatingSystem;                                         // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEC2InstanceType                                           Type;                                                    // 0x0051(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInstanceStatus                                            status;                                                  // 0x0052(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XVCD[0x5];                                   // 0x0053(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           creationTime;                                            // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Location;                                                // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DescribeInstancesResult
	 * Size -> 0x0020
	 */
	struct FDescribeInstancesResult
	{
	public:
		TArray<struct FInstance>                                   Instances;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              nextToken;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DescribeMatchmakingConfigurationsRequest
	 * Size -> 0x0038
	 */
	struct FDescribeMatchmakingConfigurationsRequest
	{
	public:
		TArray<class FString>                                      names;                                                   // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              ruleSetName;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    limit;                                                   // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y5G2[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              nextToken;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DescribeMatchmakingConfigurationsResult
	 * Size -> 0x0020
	 */
	struct FDescribeMatchmakingConfigurationsResult
	{
	public:
		TArray<struct FMatchmakingConfiguration>                   configurations;                                          // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              nextToken;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DescribeMatchmakingRequest
	 * Size -> 0x0010
	 */
	struct FDescribeMatchmakingRequest
	{
	public:
		TArray<class FString>                                      ticketIds;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.MatchedPlayerSession
	 * Size -> 0x0020
	 */
	struct FMatchedPlayerSession
	{
	public:
		class FString                                              PlayerId;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerSessionId;                                         // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.AWSGameSessionConnectionInfo
	 * Size -> 0x0048
	 */
	struct FAWSGameSessionConnectionInfo
	{
	public:
		class FString                                              gameSessionArn;                                          // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              IPAddress;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              dnsName;                                                 // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Port;                                                    // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K31J[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMatchedPlayerSession>                       matchedPlayerSessions;                                   // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.MatchmakingTicket
	 * Size -> 0x00C8
	 */
	struct FMatchmakingTicket
	{
	public:
		class FString                                              TicketID;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              configurationName;                                       // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              configurationArn;                                        // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMatchmakingConfigurationStatus                            status;                                                  // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W1W9[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              statusReason;                                            // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              statusMessage;                                           // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           startTime;                                               // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           endTime;                                                 // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAWSPlayer>                                  players;                                                 // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FAWSGameSessionConnectionInfo                       GameSessionConnectionInfo;                               // 0x0078(0x0048) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    estimatedWaitTime;                                       // 0x00C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9B0X[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameLift.DescribeMatchmakingResult
	 * Size -> 0x0010
	 */
	struct FDescribeMatchmakingResult
	{
	public:
		TArray<struct FMatchmakingTicket>                          ticketList;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DescribeMatchmakingRuleSetsRequest
	 * Size -> 0x0028
	 */
	struct FDescribeMatchmakingRuleSetsRequest
	{
	public:
		TArray<class FString>                                      names;                                                   // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    limit;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y4GH[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              nextToken;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DescribeMatchmakingRuleSetsResult
	 * Size -> 0x0020
	 */
	struct FDescribeMatchmakingRuleSetsResult
	{
	public:
		TArray<struct FMatchmakingRuleSet>                         ruleSets;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              nextToken;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DescribePlayerSessionsRequest
	 * Size -> 0x0058
	 */
	struct FDescribePlayerSessionsRequest
	{
	public:
		class FString                                              awsResourceName;                                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerId;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerSessionId;                                         // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              playerSessionStatusFilter;                               // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    limit;                                                   // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7SEG[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              nextToken;                                               // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DescribePlayerSessionsResult
	 * Size -> 0x0020
	 */
	struct FDescribePlayerSessionsResult
	{
	public:
		TArray<struct FAWSPlayerSession>                           PlayerSessions;                                          // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              nextToken;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DescribeRuntimeConfigurationRequest
	 * Size -> 0x0010
	 */
	struct FDescribeRuntimeConfigurationRequest
	{
	public:
		class FString                                              fleetId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DescribeRuntimeConfigurationResult
	 * Size -> 0x0018
	 */
	struct FDescribeRuntimeConfigurationResult
	{
	public:
		struct FRuntimeConfiguration                               RuntimeConfiguration;                                    // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DescribeScalingPoliciesRequest
	 * Size -> 0x0038
	 */
	struct FDescribeScalingPoliciesRequest
	{
	public:
		class FString                                              fleetId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EScalingStatusType                                         statusFilter;                                            // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EH90[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    limit;                                                   // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              nextToken;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Location;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.TargetConfiguration
	 * Size -> 0x0004
	 */
	struct FTargetConfiguration
	{
	public:
		float                                                      targetValue;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.ScalingPolicy
	 * Size -> 0x0060
	 */
	struct FScalingPolicy
	{
	public:
		class FString                                              fleetId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              fleetArn;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EScalingStatusType                                         status;                                                  // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RZX9[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    scalingAdjustment;                                       // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EScalingAdjustmentType                                     scalingAdjustmentType;                                   // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EComparisonOperatorType                                    comparisonOperator;                                      // 0x0039(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6UW5[0x2];                                   // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      threshold;                                               // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    evaluationPeriods;                                       // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMetricName                                                metricName;                                              // 0x0044(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPolicyType                                                policyType;                                              // 0x0045(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OOLR[0x2];                                   // 0x0046(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTargetConfiguration                                TargetConfiguration;                                     // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EAWSGameLiftLocationUpdateStatus                           updateStatus;                                            // 0x004C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CJIK[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Location;                                                // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DescribeScalingPoliciesResult
	 * Size -> 0x0020
	 */
	struct FDescribeScalingPoliciesResult
	{
	public:
		TArray<struct FScalingPolicy>                              scalingPolicies;                                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              nextToken;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DescribeScriptRequest
	 * Size -> 0x0010
	 */
	struct FDescribeScriptRequest
	{
	public:
		class FString                                              scriptId;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DescribeScriptResult
	 * Size -> 0x0090
	 */
	struct FDescribeScriptResult
	{
	public:
		struct FScript                                             Script;                                                  // 0x0000(0x0090) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DescribeVpcPeeringAuthorizationsRequest
	 * Size -> 0x0001
	 */
	struct FDescribeVpcPeeringAuthorizationsRequest
	{
	public:
		unsigned char                                              UnknownData_Q0M8[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameLift.DescribeVpcPeeringAuthorizationsResult
	 * Size -> 0x0010
	 */
	struct FDescribeVpcPeeringAuthorizationsResult
	{
	public:
		TArray<struct FVpcPeeringAuthorization>                    vpcPeeringAuthorizations;                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DescribeVpcPeeringConnectionsRequest
	 * Size -> 0x0010
	 */
	struct FDescribeVpcPeeringConnectionsRequest
	{
	public:
		class FString                                              fleetId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.VpcPeeringConnectionStatus
	 * Size -> 0x0020
	 */
	struct FVpcPeeringConnectionStatus
	{
	public:
		class FString                                              code;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.VpcPeeringConnection
	 * Size -> 0x0080
	 */
	struct FVpcPeeringConnection
	{
	public:
		class FString                                              fleetId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              fleetArn;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ipV4CidrBlock;                                           // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              vpcPeeringConnectionId;                                  // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVpcPeeringConnectionStatus                         status;                                                  // 0x0040(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              peerVpcId;                                               // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              gameLiftVpcId;                                           // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DescribeVpcPeeringConnectionsResult
	 * Size -> 0x0010
	 */
	struct FDescribeVpcPeeringConnectionsResult
	{
	public:
		TArray<struct FVpcPeeringConnection>                       vpcPeeringConnections;                                   // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.DesiredPlayerSession
	 * Size -> 0x0020
	 */
	struct FDesiredPlayerSession
	{
	public:
		class FString                                              PlayerId;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              playerData;                                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.GameLiftCreateAliasRequest
	 * Size -> 0x0058
	 */
	struct FGameLiftCreateAliasRequest
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRoutingStrategy                                    RoutingStrategy;                                         // 0x0020(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FGameLiftTag>                                Tags;                                                    // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.GameLiftCreateAliasResult
	 * Size -> 0x0078
	 */
	struct FGameLiftCreateAliasResult
	{
	public:
		struct FAlias                                              Alias;                                                   // 0x0000(0x0078) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.GameLiftDeleteAliasRequest
	 * Size -> 0x0010
	 */
	struct FGameLiftDeleteAliasRequest
	{
	public:
		class FString                                              aliasId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.GameLiftListAliasesRequest
	 * Size -> 0x0030
	 */
	struct FGameLiftListAliasesRequest
	{
	public:
		ERoutingStrategyType                                       routingStrategyType;                                     // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9QA2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    limit;                                                   // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4FY8[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              nextToken;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.GameLiftListAliasesResult
	 * Size -> 0x0020
	 */
	struct FGameLiftListAliasesResult
	{
	public:
		TArray<struct FAlias>                                      aliases;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              nextToken;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.GameLiftListTagsForResourceRequest
	 * Size -> 0x0010
	 */
	struct FGameLiftListTagsForResourceRequest
	{
	public:
		class FString                                              resourceARN;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.GameLiftListTagsForResourceResult
	 * Size -> 0x0010
	 */
	struct FGameLiftListTagsForResourceResult
	{
	public:
		TArray<struct FGameLiftTag>                                Tags;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.GameLiftTagResourceRequest
	 * Size -> 0x0020
	 */
	struct FGameLiftTagResourceRequest
	{
	public:
		class FString                                              resourceARN;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGameLiftTag>                                Tags;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.GameLiftTagResourceResult
	 * Size -> 0x0001
	 */
	struct FGameLiftTagResourceResult
	{
	public:
		unsigned char                                              UnknownData_SPER[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameLift.GameLiftUntagResourceRequest
	 * Size -> 0x0020
	 */
	struct FGameLiftUntagResourceRequest
	{
	public:
		class FString                                              resourceARN;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      tagKeys;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.UntagResourceResult
	 * Size -> 0x0001
	 */
	struct FUntagResourceResult
	{
	public:
		unsigned char                                              UnknownData_EB4Z[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameLift.GameLiftUpdateAliasRequest
	 * Size -> 0x0058
	 */
	struct FGameLiftUpdateAliasRequest
	{
	public:
		class FString                                              aliasId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRoutingStrategy                                    RoutingStrategy;                                         // 0x0030(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.GameLiftUpdateAliasResult
	 * Size -> 0x0078
	 */
	struct FGameLiftUpdateAliasResult
	{
	public:
		struct FAlias                                              Alias;                                                   // 0x0000(0x0078) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.GetGameSessionLogUrlRequest
	 * Size -> 0x0010
	 */
	struct FGetGameSessionLogUrlRequest
	{
	public:
		class FString                                              GameSessionId;                                           // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.GetGameSessionLogUrlResult
	 * Size -> 0x0010
	 */
	struct FGetGameSessionLogUrlResult
	{
	public:
		class FString                                              preSignedUrl;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.GetInstanceAccessRequest
	 * Size -> 0x0020
	 */
	struct FGetInstanceAccessRequest
	{
	public:
		class FString                                              fleetId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              instanceId;                                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.InstanceCredentials
	 * Size -> 0x0020
	 */
	struct FInstanceCredentials
	{
	public:
		class FString                                              username;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              secret;                                                  // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.InstanceAccess
	 * Size -> 0x0058
	 */
	struct FInstanceAccess
	{
	public:
		class FString                                              fleetId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              instanceId;                                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              IPAddress;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOperatingSystem                                           operatingSystem;                                         // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_440R[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInstanceCredentials                                credentials;                                             // 0x0038(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.GetInstanceAccessResult
	 * Size -> 0x0058
	 */
	struct FGetInstanceAccessResult
	{
	public:
		struct FInstanceAccess                                     InstanceAccess;                                          // 0x0000(0x0058) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.ListBuildsRequest
	 * Size -> 0x0018
	 */
	struct FListBuildsRequest
	{
	public:
		EBuildStatus                                               status;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_66QH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    limit;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              nextToken;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.ListBuildsResult
	 * Size -> 0x0020
	 */
	struct FListBuildsResult
	{
	public:
		TArray<struct FBuild>                                      builds;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              nextToken;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.ListFleetsRequest
	 * Size -> 0x0038
	 */
	struct FListFleetsRequest
	{
	public:
		class FString                                              buildId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              scriptId;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    limit;                                                   // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RRMH[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              nextToken;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.ListFleetsResult
	 * Size -> 0x0020
	 */
	struct FListFleetsResult
	{
	public:
		TArray<class FString>                                      fleetIds;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              nextToken;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.ListGameServerGroupsRequest
	 * Size -> 0x0018
	 */
	struct FListGameServerGroupsRequest
	{
	public:
		int32_t                                                    limit;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FEYH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              nextToken;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.ListGameServerGroupsResult
	 * Size -> 0x0020
	 */
	struct FListGameServerGroupsResult
	{
	public:
		TArray<struct FGameServerGroup>                            gameServerGroups;                                        // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              nextToken;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.ListGameServersRequest
	 * Size -> 0x0028
	 */
	struct FListGameServersRequest
	{
	public:
		class FString                                              gameServerGroupName;                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSSortOrder                                              sortOrder;                                               // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8VTH[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    limit;                                                   // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              nextToken;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.ListGameServersResult
	 * Size -> 0x0020
	 */
	struct FListGameServersResult
	{
	public:
		TArray<struct FGameServer>                                 gameServers;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              nextToken;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.ListScriptsRequest
	 * Size -> 0x0018
	 */
	struct FListScriptsRequest
	{
	public:
		int32_t                                                    limit;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EJS9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              nextToken;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.ListScriptsResult
	 * Size -> 0x0020
	 */
	struct FListScriptsResult
	{
	public:
		TArray<struct FScript>                                     scripts;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              nextToken;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.PutScalingPolicyRequest
	 * Size -> 0x0040
	 */
	struct FPutScalingPolicyRequest
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              fleetId;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    scalingAdjustment;                                       // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EScalingAdjustmentType                                     scalingAdjustmentType;                                   // 0x0024(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1PYG[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      threshold;                                               // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EComparisonOperatorType                                    comparisonOperator;                                      // 0x002C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y9D7[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    evaluationPeriods;                                       // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMetricName                                                metricName;                                              // 0x0034(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPolicyType                                                policyType;                                              // 0x0035(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JSDB[0x2];                                   // 0x0036(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTargetConfiguration                                TargetConfiguration;                                     // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6TUN[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameLift.PutScalingPolicyResult
	 * Size -> 0x0010
	 */
	struct FPutScalingPolicyResult
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.RegisterGameServerRequest
	 * Size -> 0x0050
	 */
	struct FRegisterGameServerRequest
	{
	public:
		class FString                                              gameServerGroupName;                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              gameServerId;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              instanceId;                                              // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ConnectionInfo;                                          // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              gameServerData;                                          // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.RegisterGameServerResult
	 * Size -> 0x0080
	 */
	struct FRegisterGameServerResult
	{
	public:
		struct FGameServer                                         GameServer;                                              // 0x0000(0x0080) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.RequestUploadCredentialsRequest
	 * Size -> 0x0010
	 */
	struct FRequestUploadCredentialsRequest
	{
	public:
		class FString                                              buildId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.RequestUploadCredentialsResult
	 * Size -> 0x0070
	 */
	struct FRequestUploadCredentialsResult
	{
	public:
		struct FGameLiftCredentials                                uploadCredentials;                                       // 0x0000(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameLiftS3Location                                 storageLocation;                                         // 0x0030(0x0040) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.ResolveAliasRequest
	 * Size -> 0x0010
	 */
	struct FResolveAliasRequest
	{
	public:
		class FString                                              aliasId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.ResolveAliasResult
	 * Size -> 0x0020
	 */
	struct FResolveAliasResult
	{
	public:
		class FString                                              fleetId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              fleetArn;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.ResumeGameServerGroupRequest
	 * Size -> 0x0020
	 */
	struct FResumeGameServerGroupRequest
	{
	public:
		class FString                                              gameServerGroupName;                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<EAWSGameServerGroupAction>                          resumeActions;                                           // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.ResumeGameServerGroupResult
	 * Size -> 0x0090
	 */
	struct FResumeGameServerGroupResult
	{
	public:
		struct FGameServerGroup                                    GameServerGroup;                                         // 0x0000(0x0090) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.SearchGameSessionsRequest
	 * Size -> 0x0058
	 */
	struct FSearchGameSessionsRequest
	{
	public:
		class FString                                              awsResourceName;                                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Location;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              filterExpression;                                        // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              sortExpression;                                          // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    limit;                                                   // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0XMK[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              nextToken;                                               // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.SearchGameSessionsResult
	 * Size -> 0x0020
	 */
	struct FSearchGameSessionsResult
	{
	public:
		TArray<struct FAWSGameSession>                             gameSessions;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              nextToken;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.StartFleetActionsRequest
	 * Size -> 0x0030
	 */
	struct FStartFleetActionsRequest
	{
	public:
		class FString                                              fleetId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<EFleetAction>                                       actions;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              Location;                                                // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.StartFleetActionsResult
	 * Size -> 0x0020
	 */
	struct FStartFleetActionsResult
	{
	public:
		class FString                                              fleetId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              fleetArn;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.StartGameSessionPlacementRequest
	 * Size -> 0x0078
	 */
	struct FStartGameSessionPlacementRequest
	{
	public:
		class FString                                              placementId;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              gameSessionQueueName;                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGameProperty>                               gameProperties;                                          // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    maximumPlayerSessionCount;                               // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OP0W[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              gameSessionName;                                         // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPlayerLatency>                              playerLatencies;                                         // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FDesiredPlayerSession>                       desiredPlayerSessions;                                   // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              gameSessionData;                                         // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.StartGameSessionPlacementResult
	 * Size -> 0x00F8
	 */
	struct FStartGameSessionPlacementResult
	{
	public:
		struct FGameSessionPlacement                               GameSessionPlacement;                                    // 0x0000(0x00F8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.StartMatchBackfillRequest
	 * Size -> 0x0040
	 */
	struct FStartMatchBackfillRequest
	{
	public:
		class FString                                              TicketID;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              configurationName;                                       // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              gameSessionArn;                                          // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAWSPlayer>                                  players;                                                 // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.StartMatchBackfillResult
	 * Size -> 0x00C8
	 */
	struct FStartMatchBackfillResult
	{
	public:
		struct FMatchmakingTicket                                  MatchmakingTicket;                                       // 0x0000(0x00C8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.StartMatchmakingRequest
	 * Size -> 0x0030
	 */
	struct FStartMatchmakingRequest
	{
	public:
		class FString                                              TicketID;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              configurationName;                                       // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAWSPlayer>                                  players;                                                 // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.StartMatchmakingResult
	 * Size -> 0x00C8
	 */
	struct FStartMatchmakingResult
	{
	public:
		struct FMatchmakingTicket                                  MatchmakingTicket;                                       // 0x0000(0x00C8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.StopFleetActionsRequest
	 * Size -> 0x0030
	 */
	struct FStopFleetActionsRequest
	{
	public:
		class FString                                              fleetId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<EFleetAction>                                       actions;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              Location;                                                // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.StopFleetActionsResult
	 * Size -> 0x0020
	 */
	struct FStopFleetActionsResult
	{
	public:
		class FString                                              fleetId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              fleetArn;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.StopGameSessionPlacementRequest
	 * Size -> 0x0010
	 */
	struct FStopGameSessionPlacementRequest
	{
	public:
		class FString                                              placementId;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.StopGameSessionPlacementResult
	 * Size -> 0x00F8
	 */
	struct FStopGameSessionPlacementResult
	{
	public:
		struct FGameSessionPlacement                               GameSessionPlacement;                                    // 0x0000(0x00F8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.StopMatchmakingRequest
	 * Size -> 0x0010
	 */
	struct FStopMatchmakingRequest
	{
	public:
		class FString                                              TicketID;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.StopMatchmakingResult
	 * Size -> 0x0001
	 */
	struct FStopMatchmakingResult
	{
	public:
		unsigned char                                              UnknownData_DHLL[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameLift.SuspendGameServerGroupRequest
	 * Size -> 0x0020
	 */
	struct FSuspendGameServerGroupRequest
	{
	public:
		class FString                                              gameServerGroupName;                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<EAWSGameServerGroupAction>                          suspendActions;                                          // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.SuspendGameServerGroupResult
	 * Size -> 0x0090
	 */
	struct FSuspendGameServerGroupResult
	{
	public:
		struct FGameServerGroup                                    GameServerGroup;                                         // 0x0000(0x0090) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.UpdateBuildRequest
	 * Size -> 0x0030
	 */
	struct FUpdateBuildRequest
	{
	public:
		class FString                                              buildId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Version;                                                 // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.UpdateBuildResult
	 * Size -> 0x0060
	 */
	struct FUpdateBuildResult
	{
	public:
		struct FBuild                                              Build;                                                   // 0x0000(0x0060) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.UpdateFleetAttributesRequest
	 * Size -> 0x0050
	 */
	struct FUpdateFleetAttributesRequest
	{
	public:
		class FString                                              fleetId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EProtectionPolicy                                          newGameSessionProtectionPolicy;                          // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0MNL[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FResourceCreationLimitPolicy                        ResourceCreationLimitPolicy;                             // 0x0034(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WH3N[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      metricGroups;                                            // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.UpdateFleetAttributesResult
	 * Size -> 0x0010
	 */
	struct FUpdateFleetAttributesResult
	{
	public:
		class FString                                              fleetId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.UpdateFleetCapacityRequest
	 * Size -> 0x0030
	 */
	struct FUpdateFleetCapacityRequest
	{
	public:
		class FString                                              fleetId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    desiredInstances;                                        // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    minSize;                                                 // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    maxSize;                                                 // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A5QJ[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Location;                                                // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.UpdateFleetCapacityResult
	 * Size -> 0x0030
	 */
	struct FUpdateFleetCapacityResult
	{
	public:
		class FString                                              fleetId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              fleetArn;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Location;                                                // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.UpdateFleetPortSettingsRequest
	 * Size -> 0x0030
	 */
	struct FUpdateFleetPortSettingsRequest
	{
	public:
		class FString                                              fleetId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FIpPermission>                               inboundPermissionAuthorizations;                         // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FIpPermission>                               inboundPermissionRevocations;                            // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.UpdateFleetPortSettingsResult
	 * Size -> 0x0010
	 */
	struct FUpdateFleetPortSettingsResult
	{
	public:
		class FString                                              fleetId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.UpdateGameServerGroupRequest
	 * Size -> 0x0038
	 */
	struct FUpdateGameServerGroupRequest
	{
	public:
		class FString                                              gameServerGroupName;                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              roleArn;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FInstanceDefinition>                         instanceDefinitions;                                     // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EAWSGameServerProtectionPolicy                             gameServerProtectionPolicy;                              // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSBalancingStrategy                                      balancingStrategy;                                       // 0x0031(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LTGD[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameLift.UpdateGameServerGroupResult
	 * Size -> 0x0090
	 */
	struct FUpdateGameServerGroupResult
	{
	public:
		struct FGameServerGroup                                    GameServerGroup;                                         // 0x0000(0x0090) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.UpdateGameServerRequest
	 * Size -> 0x0038
	 */
	struct FUpdateGameServerRequest
	{
	public:
		class FString                                              gameServerGroupName;                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              gameServerId;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              gameServerData;                                          // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSGameServerUtilizationStatus                            utilizationStatus;                                       // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSGameServerHealthCheck                                  HealthCheck;                                             // 0x0031(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NIEX[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameLift.UpdateGameServerResult
	 * Size -> 0x0080
	 */
	struct FUpdateGameServerResult
	{
	public:
		struct FGameServer                                         GameServer;                                              // 0x0000(0x0080) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.UpdateGameSessionQueueRequest
	 * Size -> 0x0088
	 */
	struct FUpdateGameSessionQueueRequest
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    timeoutInSeconds;                                        // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_69WE[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPlayerLatencyPolicy>                        playerLatencyPolicies;                                   // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGameSessionQueueDestination>                destinations;                                            // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FAWSGameLiftFilterConfiguration                     filterConfiguration;                                     // 0x0038(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FAWSGameLiftPriorityConfiguration                   priorityConfiguration;                                   // 0x0048(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              customEventData;                                         // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              notificationTarget;                                      // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.UpdateGameSessionQueueResult
	 * Size -> 0x0098
	 */
	struct FUpdateGameSessionQueueResult
	{
	public:
		struct FGameSessionQueue                                   GameSessionQueue;                                        // 0x0000(0x0098) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.UpdateGameSessionRequest
	 * Size -> 0x0030
	 */
	struct FUpdateGameSessionRequest
	{
	public:
		class FString                                              awsResourceName;                                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    maximumPlayerSessionCount;                               // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WMLF[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlayerSessionCreationPolicy                               playerSessionCreationPolicy;                             // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EProtectionPolicy                                          protectionPolicy;                                        // 0x0029(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VHNJ[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameLift.UpdateGameSessionResult
	 * Size -> 0x00D8
	 */
	struct FUpdateGameSessionResult
	{
	public:
		struct FAWSGameSession                                     GameSession;                                             // 0x0000(0x00D8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.UpdateMatchmakingConfigurationRequest
	 * Size -> 0x00A0
	 */
	struct FUpdateMatchmakingConfigurationRequest
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      gameSessionQueueArns;                                    // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    requestTimeoutSeconds;                                   // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    acceptanceTimeoutSeconds;                                // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       acceptanceRequired;                                      // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IIGZ[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ruleSetName;                                             // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              notificationTarget;                                      // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    additionalPlayerCount;                                   // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZI7K[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              customEventData;                                         // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGameProperty>                               gameProperties;                                          // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              gameSessionData;                                         // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBackfillMode                                              backfillMode;                                            // 0x0098(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSGameLiftFlexMatchMode                                  flexMatchMode;                                           // 0x0099(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0G6K[0x6];                                   // 0x009A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameLift.UpdateMatchmakingConfigurationResult
	 * Size -> 0x00C8
	 */
	struct FUpdateMatchmakingConfigurationResult
	{
	public:
		struct FMatchmakingConfiguration                           configuration;                                           // 0x0000(0x00C8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.UpdateRuntimeConfigurationRequest
	 * Size -> 0x0028
	 */
	struct FUpdateRuntimeConfigurationRequest
	{
	public:
		class FString                                              fleetId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRuntimeConfiguration                               RuntimeConfiguration;                                    // 0x0010(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.UpdateRuntimeConfigurationResult
	 * Size -> 0x0018
	 */
	struct FUpdateRuntimeConfigurationResult
	{
	public:
		struct FRuntimeConfiguration                               RuntimeConfiguration;                                    // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.UpdateScriptRequest
	 * Size -> 0x0080
	 */
	struct FUpdateScriptRequest
	{
	public:
		class FString                                              scriptId;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Version;                                                 // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameLiftS3Location                                 storageLocation;                                         // 0x0030(0x0040) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              zipFile;                                                 // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.UpdateScriptResult
	 * Size -> 0x0090
	 */
	struct FUpdateScriptResult
	{
	public:
		struct FScript                                             Script;                                                  // 0x0000(0x0090) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.ValidateMatchmakingRuleSetRequest
	 * Size -> 0x0010
	 */
	struct FValidateMatchmakingRuleSetRequest
	{
	public:
		class FString                                              ruleSetBody;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameLift.ValidateMatchmakingRuleSetResult
	 * Size -> 0x0001
	 */
	struct FValidateMatchmakingRuleSetResult
	{
	public:
		bool                                                       valid;                                                   // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
