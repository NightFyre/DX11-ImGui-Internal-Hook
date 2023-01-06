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
	 * Enum DynamoDB.EAWSAttributeAction
	 */
	enum class EAWSAttributeAction : uint8_t
	{
		NOT_SET   = 0,
		ADD       = 1,
		PUT       = 2,
		DELETEAtt = 3,
		MAX       = 4
	};

	/**
	 * Enum DynamoDB.EAWSDynamoDBBatchStatementErrorCodeEnum
	 */
	enum class EAWSDynamoDBBatchStatementErrorCodeEnum : uint8_t
	{
		NOT_SET                         = 0,
		ConditionalCheckFailed          = 1,
		ItemCollectionSizeLimitExceeded = 2,
		RequestLimitExceeded            = 3,
		ValidationError                 = 4,
		ProvisionedThroughputExceeded   = 5,
		TransactionConflict             = 6,
		ThrottlingError                 = 7,
		InternalServerError             = 8,
		ResourceNotFound                = 9,
		AccessDenied                    = 10,
		DuplicateItem                   = 11,
		MAX                             = 12
	};

	/**
	 * Enum DynamoDB.EAWSDynamoDBDestinationStatus
	 */
	enum class EAWSDynamoDBDestinationStatus : uint8_t
	{
		NOT_SET       = 0,
		ENABLING      = 1,
		ACTIVE        = 2,
		DISABLING     = 3,
		DISABLED      = 4,
		ENABLE_FAILED = 5,
		MAX           = 6
	};

	/**
	 * Enum DynamoDB.EAWSDynamoDBExportFormat
	 */
	enum class EAWSDynamoDBExportFormat : uint8_t
	{
		NOT_SET       = 0,
		DYNAMODB_JSON = 1,
		ION           = 2,
		MAX           = 3
	};

	/**
	 * Enum DynamoDB.EAWSDynamoDBExportStatus
	 */
	enum class EAWSDynamoDBExportStatus : uint8_t
	{
		NOT_SET     = 0,
		IN_PROGRESS = 1,
		COMPLETED   = 2,
		FAILED      = 3,
		MAX         = 4
	};

	/**
	 * Enum DynamoDB.EAWSDynamoDBS3SseAlgorithm
	 */
	enum class EAWSDynamoDBS3SseAlgorithm : uint8_t
	{
		NOT_SET = 0,
		AES256  = 1,
		KMS     = 2,
		MAX     = 3
	};

	/**
	 * Enum DynamoDB.EAWSBackupStatus
	 */
	enum class EAWSBackupStatus : uint8_t
	{
		NOT_SET   = 0,
		CREATING  = 1,
		DELETED   = 2,
		AVAILABLE = 3,
		MAX       = 4
	};

	/**
	 * Enum DynamoDB.EAWSBackupType
	 */
	enum class EAWSBackupType : uint8_t
	{
		NOT_SET    = 0,
		USER       = 1,
		SYSTEM     = 2,
		AWS_BACKUP = 3,
		MAX        = 4
	};

	/**
	 * Enum DynamoDB.EAWSBackupTypeFilter
	 */
	enum class EAWSBackupTypeFilter : uint8_t
	{
		NOT_SET    = 0,
		USER       = 1,
		SYSTEM     = 2,
		AWS_BACKUP = 3,
		ALL        = 4,
		MAX        = 5
	};

	/**
	 * Enum DynamoDB.EAWSBillingMode
	 */
	enum class EAWSBillingMode : uint8_t
	{
		NOT_SET         = 0,
		PROVISIONED     = 1,
		PAY_PER_REQUEST = 2,
		MAX             = 3
	};

	/**
	 * Enum DynamoDB.EAWSComparisonOperator
	 */
	enum class EAWSComparisonOperator : uint8_t
	{
		NOT_SET      = 0,
		EQ           = 1,
		NE           = 2,
		IN_          = 3,
		LE           = 4,
		LT           = 5,
		GE           = 6,
		GT           = 7,
		BETWEEN      = 8,
		NOT_NULL     = 9,
		NULL_        = 10,
		CONTAINS     = 11,
		NOT_CONTAINS = 12,
		BEGINS_WITH  = 13,
		MAX          = 14
	};

	/**
	 * Enum DynamoDB.EAWSConditionalOperator
	 */
	enum class EAWSConditionalOperator : uint8_t
	{
		NOT_SET = 0,
		AND     = 1,
		OR      = 2,
		MAX     = 3
	};

	/**
	 * Enum DynamoDB.EAWSContinuousBackupsStatus
	 */
	enum class EAWSContinuousBackupsStatus : uint8_t
	{
		NOT_SET  = 0,
		ENABLED  = 1,
		DISABLED = 2,
		MAX      = 3
	};

	/**
	 * Enum DynamoDB.EAWSContributorInsightsAction
	 */
	enum class EAWSContributorInsightsAction : uint8_t
	{
		NOT_SET = 0,
		ENABLE  = 1,
		DISABLE = 2,
		MAX     = 3
	};

	/**
	 * Enum DynamoDB.EAWSContributorInsightsStatus
	 */
	enum class EAWSContributorInsightsStatus : uint8_t
	{
		NOT_SET   = 0,
		ENABLING  = 1,
		ENABLED   = 2,
		DISABLING = 3,
		DISABLED  = 4,
		FAILED    = 5,
		MAX       = 6
	};

	/**
	 * Enum DynamoDB.EDynamoDBError
	 */
	enum class EDynamoDBError : uint8_t
	{
		INCOMPLETE_SIGNATURE                = 0,
		INTERNAL_FAILURE                    = 1,
		INVALID_ACTION                      = 2,
		INVALID_CLIENT_TOKEN_ID             = 3,
		INVALID_PARAMETER_COMBINATION       = 4,
		INVALID_QUERY_PARAMETER             = 5,
		INVALID_PARAMETER_VALUE             = 6,
		MISSING_ACTION                      = 7,
		MISSING_AUTHENTICATION_TOKEN        = 8,
		MISSING_PARAMETER                   = 9,
		OPT_IN_REQUIRED                     = 10,
		REQUEST_EXPIRED                     = 11,
		SERVICE_UNAVAILABLE                 = 12,
		THROTTLING                          = 13,
		VALIDATION                          = 14,
		ACCESS_DENIED                       = 15,
		RESOURCE_NOT_FOUND                  = 16,
		UNRECOGNIZED_CLIENT                 = 17,
		MALFORMED_QUERY_STRING              = 18,
		SLOW_DOWN                           = 19,
		REQUEST_TIME_TOO_SKEWED             = 20,
		INVALID_SIGNATURE                   = 21,
		SIGNATURE_DOES_NOT_MATCH            = 22,
		INVALID_ACCESS_KEY_ID               = 23,
		REQUEST_TIMEOUT                     = 24,
		NETWORK_CONNECTION                  = 25,
		UNKNOWN                             = 26,
		BACKUP_IN_USE                       = 27,
		BACKUP_NOT_FOUND                    = 28,
		CONDITIONAL_CHECK_FAILED            = 29,
		CONTINUOUS_BACKUPS_UNAVAILABLE      = 30,
		DUPLICATE_ITEM                      = 31,
		EXPORT_CONFLICT                     = 32,
		EXPORT_NOT_FOUND                    = 33,
		GLOBAL_TABLE_ALREADY_EXISTS         = 34,
		GLOBAL_TABLE_NOT_FOUND              = 35,
		IDEMPOTENT_PARAMETER_MISMATCH       = 36,
		INDEX_NOT_FOUND                     = 37,
		INVALID_EXPORT_TIME                 = 38,
		INVALID_RESTORE_TIME                = 39,
		ITEM_COLLECTION_SIZE_LIMIT_EXCEEDED = 40,
		LIMIT_EXCEEDED                      = 41,
		POINT_IN_TIME_RECOVERY_UNAVAILABLE  = 42,
		PROVISIONED_THROUGHPUT_EXCEEDED     = 43,
		REPLICA_ALREADY_EXISTS              = 44,
		REPLICA_NOT_FOUND                   = 45,
		REQUEST_LIMIT_EXCEEDED              = 46,
		RESOURCE_IN_USE                     = 47,
		TABLE_ALREADY_EXISTS                = 48,
		TABLE_IN_USE                        = 49,
		TABLE_NOT_FOUND                     = 50,
		TRANSACTION_CANCELED                = 51,
		TRANSACTION_CONFLICT                = 52,
		TRANSACTION_IN_PROGRESS             = 53,
		MAX                                 = 54
	};

	/**
	 * Enum DynamoDB.EAWSDynamoDBKeyType
	 */
	enum class EAWSDynamoDBKeyType : uint8_t
	{
		NOT_SET = 0,
		HASH    = 1,
		RANGE   = 2,
		MAX     = 3
	};

	/**
	 * Enum DynamoDB.EAWSDynamoDBStreamViewType
	 */
	enum class EAWSDynamoDBStreamViewType : uint8_t
	{
		NOT_SET            = 0,
		NEW_IMAGE          = 1,
		OLD_IMAGE          = 2,
		NEW_AND_OLD_IMAGES = 3,
		KEYS_ONLY          = 4,
		MAX                = 5
	};

	/**
	 * Enum DynamoDB.EAWSGlobalTableStatus
	 */
	enum class EAWSGlobalTableStatus : uint8_t
	{
		NOT_SET  = 0,
		CREATING = 1,
		ACTIVE   = 2,
		DELETING = 3,
		UPDATING = 4,
		MAX      = 5
	};

	/**
	 * Enum DynamoDB.EAWSIndexStatus
	 */
	enum class EAWSIndexStatus : uint8_t
	{
		NOT_SET  = 0,
		CREATING = 1,
		UPDATING = 2,
		DELETING = 3,
		ACTIVE   = 4,
		MAX      = 5
	};

	/**
	 * Enum DynamoDB.EAWSPointInTimeRecoveryStatus
	 */
	enum class EAWSPointInTimeRecoveryStatus : uint8_t
	{
		NOT_SET  = 0,
		ENABLED  = 1,
		DISABLED = 2,
		MAX      = 3
	};

	/**
	 * Enum DynamoDB.EAWSProjectionType
	 */
	enum class EAWSProjectionType : uint8_t
	{
		NOT_SET   = 0,
		ALL       = 1,
		KEYS_ONLY = 2,
		INCLUDE   = 3,
		MAX       = 4
	};

	/**
	 * Enum DynamoDB.EAWSReplicaStatus
	 */
	enum class EAWSReplicaStatus : uint8_t
	{
		NOT_SET                             = 0,
		CREATING                            = 1,
		CREATION_FAILED                     = 2,
		UPDATING                            = 3,
		DELETING                            = 4,
		ACTIVE                              = 5,
		REGION_DISABLED                     = 6,
		INACCESSIBLE_ENCRYPTION_CREDENTIALS = 7,
		MAX                                 = 8
	};

	/**
	 * Enum DynamoDB.EAWSReturnConsumedCapacity
	 */
	enum class EAWSReturnConsumedCapacity : uint8_t
	{
		NOT_SET = 0,
		INDEXES = 1,
		TOTAL   = 2,
		NONE    = 3,
		MAX     = 4
	};

	/**
	 * Enum DynamoDB.EAWSReturnItemCollectionMetrics
	 */
	enum class EAWSReturnItemCollectionMetrics : uint8_t
	{
		NOT_SET = 0,
		SIZE    = 1,
		NONE    = 2,
		MAX     = 3
	};

	/**
	 * Enum DynamoDB.EAWSReturnValue
	 */
	enum class EAWSReturnValue : uint8_t
	{
		NOT_SET     = 0,
		NONE        = 1,
		ALL_OLD     = 2,
		UPDATED_OLD = 3,
		ALL_NEW     = 4,
		UPDATED_NEW = 5,
		MAX         = 6
	};

	/**
	 * Enum DynamoDB.EAWSReturnValuesOnConditionCheckFailure
	 */
	enum class EAWSReturnValuesOnConditionCheckFailure : uint8_t
	{
		NOT_SET = 0,
		ALL_OLD = 1,
		NONE    = 2,
		MAX     = 3
	};

	/**
	 * Enum DynamoDB.EAWSScalarAttributeType
	 */
	enum class EAWSScalarAttributeType : uint8_t
	{
		NOT_SET = 0,
		S       = 1,
		N       = 2,
		B       = 3,
		MAX     = 4
	};

	/**
	 * Enum DynamoDB.EAWSSelect
	 */
	enum class EAWSSelect : uint8_t
	{
		NOT_SET                  = 0,
		ALL_ATTRIBUTES           = 1,
		ALL_PROJECTED_ATTRIBUTES = 2,
		SPECIFIC_ATTRIBUTES      = 3,
		COUNT                    = 4,
		MAX                      = 5
	};

	/**
	 * Enum DynamoDB.EAWSSSEStatus
	 */
	enum class EAWSSSEStatus : uint8_t
	{
		NOT_SET   = 0,
		ENABLING  = 1,
		ENABLED   = 2,
		DISABLING = 3,
		DISABLED  = 4,
		UPDATING  = 5,
		MAX       = 6
	};

	/**
	 * Enum DynamoDB.EAWSSSEType
	 */
	enum class EAWSSSEType : uint8_t
	{
		NOT_SET = 0,
		AES256  = 1,
		KMS     = 2,
		MAX     = 3
	};

	/**
	 * Enum DynamoDB.EAWSStreamViewType
	 */
	enum class EAWSStreamViewType : uint8_t
	{
		NOT_SET            = 0,
		NEW_IMAGE          = 1,
		OLD_IMAGE          = 2,
		NEW_AND_OLD_IMAGES = 3,
		KEYS_ONLY          = 4,
		MAX                = 5
	};

	/**
	 * Enum DynamoDB.EAWSTableStatus
	 */
	enum class EAWSTableStatus : uint8_t
	{
		NOT_SET                             = 0,
		CREATING                            = 1,
		UPDATING                            = 2,
		DELETING                            = 3,
		ACTIVE                              = 4,
		INACCESSIBLE_ENCRYPTION_CREDENTIALS = 5,
		ARCHIVING                           = 6,
		ARCHIVED                            = 7,
		MAX                                 = 8
	};

	/**
	 * Enum DynamoDB.EAWSTimeToLiveStatus
	 */
	enum class EAWSTimeToLiveStatus : uint8_t
	{
		NOT_SET   = 0,
		ENABLING  = 1,
		DISABLING = 2,
		ENABLED   = 3,
		DISABLED  = 4,
		MAX       = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct DynamoDB.ArchivalSummary
	 * Size -> 0x0028
	 */
	struct FArchivalSummary
	{
	public:
		struct FDateTime                                           archivalDateTime;                                        // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              archivalReason;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              archivalBackupArn;                                       // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.AttributeDefinition
	 * Size -> 0x0018
	 */
	struct FAttributeDefinition
	{
	public:
		class FString                                              AttributeName;                                           // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSScalarAttributeType                                    attributeType;                                           // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JG3H[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DynamoDB.DynamoDBAttributeValue
	 * Size -> 0x0010
	 */
	struct FDynamoDBAttributeValue
	{
	public:
		class FString                                              Json;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.AttributeValueUpdate
	 * Size -> 0x0018
	 */
	struct FAttributeValueUpdate
	{
	public:
		struct FDynamoDBAttributeValue                             Value;                                                   // 0x0000(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EAWSAttributeAction                                        Action;                                                  // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XTOD[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DynamoDB.AutoScalingTargetTrackingScalingPolicyConfigurationDescription
	 * Size -> 0x0010
	 */
	struct FAutoScalingTargetTrackingScalingPolicyConfigurationDescription
	{
	public:
		bool                                                       disableScaleIn;                                          // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XN8D[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    scaleInCooldown;                                         // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    scaleOutCooldown;                                        // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      targetValue;                                             // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.AutoScalingPolicyDescription
	 * Size -> 0x0020
	 */
	struct FAutoScalingPolicyDescription
	{
	public:
		class FString                                              policyName;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAutoScalingTargetTrackingScalingPolicyConfigurationDescription targetTrackingScalingPolicyConfiguration;                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.AutoScalingTargetTrackingScalingPolicyConfigurationUpdate
	 * Size -> 0x0010
	 */
	struct FAutoScalingTargetTrackingScalingPolicyConfigurationUpdate
	{
	public:
		bool                                                       disableScaleIn;                                          // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7IR5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    scaleInCooldown;                                         // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    scaleOutCooldown;                                        // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      targetValue;                                             // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.AutoScalingPolicyUpdate
	 * Size -> 0x0020
	 */
	struct FAutoScalingPolicyUpdate
	{
	public:
		class FString                                              policyName;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAutoScalingTargetTrackingScalingPolicyConfigurationUpdate targetTrackingScalingPolicyConfiguration;                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.AutoScalingSettingsDescription
	 * Size -> 0x0038
	 */
	struct FAutoScalingSettingsDescription
	{
	public:
		int64_t                                                    minimumUnits;                                            // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    maximumUnits;                                            // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       autoScalingDisabled;                                     // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3ACL[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              autoScalingRoleArn;                                      // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAutoScalingPolicyDescription>               scalingPolicies;                                         // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.AutoScalingSettingsUpdate
	 * Size -> 0x0048
	 */
	struct FAutoScalingSettingsUpdate
	{
	public:
		int64_t                                                    minimumUnits;                                            // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    maximumUnits;                                            // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       autoScalingDisabled;                                     // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YZ32[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              autoScalingRoleArn;                                      // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAutoScalingPolicyUpdate                            scalingPolicyUpdate;                                     // 0x0028(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.AWSDynamoDBBatchStatementRequest
	 * Size -> 0x0028
	 */
	struct FAWSDynamoDBBatchStatementRequest
	{
	public:
		class FString                                              statement;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDynamoDBAttributeValue>                     Parameters;                                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       consistentRead;                                          // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M6U4[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DynamoDB.AWSDynamoDBBatchExecuteStatementRequest
	 * Size -> 0x0010
	 */
	struct FAWSDynamoDBBatchExecuteStatementRequest
	{
	public:
		TArray<struct FAWSDynamoDBBatchStatementRequest>           statements;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.AWSDynamoDBBatchStatementError
	 * Size -> 0x0018
	 */
	struct FAWSDynamoDBBatchStatementError
	{
	public:
		EAWSDynamoDBBatchStatementErrorCodeEnum                    code;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BZ1C[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Message;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.AWSDynamoDBBatchStatementResponse
	 * Size -> 0x0078
	 */
	struct FAWSDynamoDBBatchStatementResponse
	{
	public:
		struct FAWSDynamoDBBatchStatementError                     Error;                                                   // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              tableName;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, struct FDynamoDBAttributeValue>        Item;                                                    // 0x0028(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.AWSDynamoDBBatchExecuteStatementResult
	 * Size -> 0x0010
	 */
	struct FAWSDynamoDBBatchExecuteStatementResult
	{
	public:
		TArray<struct FAWSDynamoDBBatchStatementResponse>          responses;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.AWSDynamoDBDescribeExportRequest
	 * Size -> 0x0010
	 */
	struct FAWSDynamoDBDescribeExportRequest
	{
	public:
		class FString                                              exportArn;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.AWSDynamoDBExportDescription
	 * Size -> 0x00F0
	 */
	struct FAWSDynamoDBExportDescription
	{
	public:
		class FString                                              exportArn;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSDynamoDBExportStatus                                   exportStatus;                                            // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SCN6[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           startTime;                                               // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           endTime;                                                 // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              exportManifest;                                          // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              tableArn;                                                // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              tableId;                                                 // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           exportTime;                                              // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              clientToken;                                             // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              S3Bucket;                                                // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              s3BucketOwner;                                           // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              s3Prefix;                                                // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSDynamoDBS3SseAlgorithm                                 s3SseAlgorithm;                                          // 0x00A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HFWB[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              s3SseKmsKeyId;                                           // 0x00A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              failureCode;                                             // 0x00B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              failureMessage;                                          // 0x00C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSDynamoDBExportFormat                                   exportFormat;                                            // 0x00D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PHZQ[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    billedSizeBytes;                                         // 0x00E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    itemCount;                                               // 0x00E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.AWSDynamoDBDescribeExportResult
	 * Size -> 0x00F0
	 */
	struct FAWSDynamoDBDescribeExportResult
	{
	public:
		struct FAWSDynamoDBExportDescription                       exportDescription;                                       // 0x0000(0x00F0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.AWSDynamoDBDescribeKinesisStreamingDestinationRequest
	 * Size -> 0x0010
	 */
	struct FAWSDynamoDBDescribeKinesisStreamingDestinationRequest
	{
	public:
		class FString                                              tableName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.AWSDynamoDBKinesisDataStreamDestination
	 * Size -> 0x0028
	 */
	struct FAWSDynamoDBKinesisDataStreamDestination
	{
	public:
		class FString                                              streamArn;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSDynamoDBDestinationStatus                              destinationStatus;                                       // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_51D8[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              destinationStatusDescription;                            // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.AWSDynamoDBDescribeKinesisStreamingDestinationResult
	 * Size -> 0x0020
	 */
	struct FAWSDynamoDBDescribeKinesisStreamingDestinationResult
	{
	public:
		class FString                                              tableName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAWSDynamoDBKinesisDataStreamDestination>    kinesisDataStreamDestinations;                           // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.AWSDynamoDBDisableKinesisStreamingDestinationRequest
	 * Size -> 0x0020
	 */
	struct FAWSDynamoDBDisableKinesisStreamingDestinationRequest
	{
	public:
		class FString                                              tableName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              streamArn;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.AWSDynamoDBDisableKinesisStreamingDestinationResult
	 * Size -> 0x0028
	 */
	struct FAWSDynamoDBDisableKinesisStreamingDestinationResult
	{
	public:
		class FString                                              tableName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              streamArn;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSDynamoDBDestinationStatus                              destinationStatus;                                       // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FKWP[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DynamoDB.AWSDynamoDBEnableKinesisStreamingDestinationRequest
	 * Size -> 0x0020
	 */
	struct FAWSDynamoDBEnableKinesisStreamingDestinationRequest
	{
	public:
		class FString                                              tableName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              streamArn;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.AWSDynamoDBEnableKinesisStreamingDestinationResult
	 * Size -> 0x0028
	 */
	struct FAWSDynamoDBEnableKinesisStreamingDestinationResult
	{
	public:
		class FString                                              tableName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              streamArn;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSDynamoDBDestinationStatus                              destinationStatus;                                       // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PGPA[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DynamoDB.AWSDynamoDBExecuteStatementRequest
	 * Size -> 0x0038
	 */
	struct FAWSDynamoDBExecuteStatementRequest
	{
	public:
		class FString                                              statement;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDynamoDBAttributeValue>                     Parameters;                                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       consistentRead;                                          // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KVZJ[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              nextToken;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.AWSDynamoDBExecuteStatementResult
	 * Size -> 0x0020
	 */
	struct FAWSDynamoDBExecuteStatementResult
	{
	public:
		TArray<class FString>                                      Items;                                                   // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              nextToken;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.AWSDynamoDBParameterizedStatement
	 * Size -> 0x0020
	 */
	struct FAWSDynamoDBParameterizedStatement
	{
	public:
		class FString                                              statement;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDynamoDBAttributeValue>                     Parameters;                                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.AWSDynamoDBExecuteTransactionRequest
	 * Size -> 0x0020
	 */
	struct FAWSDynamoDBExecuteTransactionRequest
	{
	public:
		TArray<struct FAWSDynamoDBParameterizedStatement>          transactStatements;                                      // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              clientRequestToken;                                      // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.ItemResponse
	 * Size -> 0x0050
	 */
	struct FItemResponse
	{
	public:
		TMap<class FString, struct FDynamoDBAttributeValue>        Item;                                                    // 0x0000(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.AWSDynamoDBExecuteTransactionResult
	 * Size -> 0x0010
	 */
	struct FAWSDynamoDBExecuteTransactionResult
	{
	public:
		TArray<struct FItemResponse>                               responses;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.AWSDynamoDBExportSummary
	 * Size -> 0x0018
	 */
	struct FAWSDynamoDBExportSummary
	{
	public:
		class FString                                              exportArn;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSDynamoDBExportStatus                                   exportStatus;                                            // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TNUR[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DynamoDB.AWSDynamoDBExportTableToPointInTimeRequest
	 * Size -> 0x0078
	 */
	struct FAWSDynamoDBExportTableToPointInTimeRequest
	{
	public:
		class FString                                              tableArn;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           exportTime;                                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              clientToken;                                             // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              S3Bucket;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              s3BucketOwner;                                           // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              s3Prefix;                                                // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSDynamoDBS3SseAlgorithm                                 s3SseAlgorithm;                                          // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_831C[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              s3SseKmsKeyId;                                           // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSDynamoDBExportFormat                                   exportFormat;                                            // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9T39[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DynamoDB.AWSDynamoDBExportTableToPointInTimeResult
	 * Size -> 0x00F0
	 */
	struct FAWSDynamoDBExportTableToPointInTimeResult
	{
	public:
		struct FAWSDynamoDBExportDescription                       exportDescription;                                       // 0x0000(0x00F0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.AWSDynamoDBListExportsRequest
	 * Size -> 0x0028
	 */
	struct FAWSDynamoDBListExportsRequest
	{
	public:
		class FString                                              tableArn;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    maxResults;                                              // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IMZQ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              nextToken;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.AWSDynamoDBListExportsResult
	 * Size -> 0x0020
	 */
	struct FAWSDynamoDBListExportsResult
	{
	public:
		TArray<struct FAWSDynamoDBExportSummary>                   exportSummaries;                                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              nextToken;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.BackupDetails
	 * Size -> 0x0040
	 */
	struct FBackupDetails
	{
	public:
		class FString                                              backupArn;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              backupName;                                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    backupSizeBytes;                                         // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSBackupStatus                                           backupStatus;                                            // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSBackupType                                             backupType;                                              // 0x0029(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4UX5[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           backupCreationDateTime;                                  // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           backupExpiryDateTime;                                    // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.DynamoDBKeySchemaElement
	 * Size -> 0x0018
	 */
	struct FDynamoDBKeySchemaElement
	{
	public:
		class FString                                              AttributeName;                                           // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSDynamoDBKeyType                                        keyType;                                                 // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8KB0[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DynamoDB.ProvisionedThroughput
	 * Size -> 0x0010
	 */
	struct FProvisionedThroughput
	{
	public:
		int64_t                                                    readCapacityUnits;                                       // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    writeCapacityUnits;                                      // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.SourceTableDetails
	 * Size -> 0x0070
	 */
	struct FSourceTableDetails
	{
	public:
		class FString                                              tableName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              tableId;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              tableArn;                                                // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    tableSizeBytes;                                          // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDynamoDBKeySchemaElement>                   keySchema;                                               // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FDateTime                                           tableCreationDateTime;                                   // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FProvisionedThroughput                              ProvisionedThroughput;                                   // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int64_t                                                    itemCount;                                               // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSBillingMode                                            billingMode;                                             // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5A8V[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DynamoDB.Projection
	 * Size -> 0x0018
	 */
	struct FProjection
	{
	public:
		EAWSProjectionType                                         ProjectionType;                                          // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZMQE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      nonKeyAttributes;                                        // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.LocalSecondaryIndexInfo
	 * Size -> 0x0038
	 */
	struct FLocalSecondaryIndexInfo
	{
	public:
		class FString                                              indexName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDynamoDBKeySchemaElement>                   keySchema;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FProjection                                         Projection;                                              // 0x0020(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.GlobalSecondaryIndexInfo
	 * Size -> 0x0048
	 */
	struct FGlobalSecondaryIndexInfo
	{
	public:
		class FString                                              indexName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDynamoDBKeySchemaElement>                   keySchema;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FProjection                                         Projection;                                              // 0x0020(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FProvisionedThroughput                              ProvisionedThroughput;                                   // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.StreamSpecification
	 * Size -> 0x0002
	 */
	struct FStreamSpecification
	{
	public:
		bool                                                       streamEnabled;                                           // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSDynamoDBStreamViewType                                 streamViewType;                                          // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.TimeToLiveDescription
	 * Size -> 0x0018
	 */
	struct FTimeToLiveDescription
	{
	public:
		EAWSTimeToLiveStatus                                       timeToLiveStatus;                                        // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JTC3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AttributeName;                                           // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.SSEDescription
	 * Size -> 0x0020
	 */
	struct FSSEDescription
	{
	public:
		EAWSSSEStatus                                              status;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSSSEType                                                SSEType;                                                 // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5E15[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              KMSMasterKeyArn;                                         // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           inaccessibleEncryptionDateTime;                          // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.SourceTableFeatureDetails
	 * Size -> 0x0060
	 */
	struct FSourceTableFeatureDetails
	{
	public:
		TArray<struct FLocalSecondaryIndexInfo>                    localSecondaryIndexes;                                   // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGlobalSecondaryIndexInfo>                   globalSecondaryIndexes;                                  // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FStreamSpecification                                streamDescription;                                       // 0x0020(0x0002) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CO0I[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimeToLiveDescription                              TimeToLiveDescription;                                   // 0x0028(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSSEDescription                                     SSEDescription;                                          // 0x0040(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.BackupDescription
	 * Size -> 0x0110
	 */
	struct FBackupDescription
	{
	public:
		struct FBackupDetails                                      BackupDetails;                                           // 0x0000(0x0040) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSourceTableDetails                                 SourceTableDetails;                                      // 0x0040(0x0070) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSourceTableFeatureDetails                          SourceTableFeatureDetails;                               // 0x00B0(0x0060) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.BackupSummary
	 * Size -> 0x0070
	 */
	struct FBackupSummary
	{
	public:
		class FString                                              tableName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              tableId;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              tableArn;                                                // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              backupArn;                                               // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              backupName;                                              // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           backupCreationDateTime;                                  // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           backupExpiryDateTime;                                    // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSBackupStatus                                           backupStatus;                                            // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSBackupType                                             backupType;                                              // 0x0061(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V10L[0x6];                                   // 0x0062(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    backupSizeBytes;                                         // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.KeysAndAttributes
	 * Size -> 0x0078
	 */
	struct FKeysAndAttributes
	{
	public:
		TArray<class FString>                                      keys;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       consistentRead;                                          // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_18DN[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              projectionExpression;                                    // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         expressionAttributeNames;                                // 0x0028(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.BatchGetItemRequest
	 * Size -> 0x0058
	 */
	struct FBatchGetItemRequest
	{
	public:
		TMap<class FString, struct FKeysAndAttributes>             requestItems;                                            // 0x0000(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EAWSReturnConsumedCapacity                                 returnConsumedCapacity;                                  // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1BRI[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DynamoDB.Capacity
	 * Size -> 0x000C
	 */
	struct FCapacity
	{
	public:
		float                                                      readCapacityUnits;                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      writeCapacityUnits;                                      // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      capacityUnits;                                           // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.ConsumedCapacity
	 * Size -> 0x00C8
	 */
	struct FConsumedCapacity
	{
	public:
		class FString                                              tableName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      capacityUnits;                                           // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      readCapacityUnits;                                       // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      writeCapacityUnits;                                      // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCapacity                                           Table;                                                   // 0x001C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TMap<class FString, struct FCapacity>                      localSecondaryIndexes;                                   // 0x0028(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TMap<class FString, struct FCapacity>                      globalSecondaryIndexes;                                  // 0x0078(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.BatchGetItemResult
	 * Size -> 0x0070
	 */
	struct FBatchGetItemResult
	{
	public:
		class FString                                              responses;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, struct FKeysAndAttributes>             unprocessedKeys;                                         // 0x0010(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FConsumedCapacity>                           ConsumedCapacity;                                        // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.BatchWriteItemRequest
	 * Size -> 0x0018
	 */
	struct FBatchWriteItemRequest
	{
	public:
		class FString                                              requestItems;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSReturnConsumedCapacity                                 returnConsumedCapacity;                                  // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSReturnItemCollectionMetrics                            returnItemCollectionMetrics;                             // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F5NR[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DynamoDB.BatchWriteItemResult
	 * Size -> 0x0030
	 */
	struct FBatchWriteItemResult
	{
	public:
		class FString                                              unprocessedItems;                                        // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemCollectionMetrics;                                   // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FConsumedCapacity>                           ConsumedCapacity;                                        // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.BillingModeSummary
	 * Size -> 0x0010
	 */
	struct FBillingModeSummary
	{
	public:
		EAWSBillingMode                                            billingMode;                                             // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MOJ6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           lastUpdateToPayPerRequestDateTime;                       // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.CancellationReason
	 * Size -> 0x0070
	 */
	struct FCancellationReason
	{
	public:
		TMap<class FString, struct FDynamoDBAttributeValue>        Item;                                                    // 0x0000(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              code;                                                    // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.ConditionCheck
	 * Size -> 0x0118
	 */
	struct FConditionCheck
	{
	public:
		TMap<class FString, struct FDynamoDBAttributeValue>        Key;                                                     // 0x0000(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              tableName;                                               // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              conditionExpression;                                     // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         expressionAttributeNames;                                // 0x0070(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TMap<class FString, struct FDynamoDBAttributeValue>        expressionAttributeValues;                               // 0x00C0(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EAWSReturnValuesOnConditionCheckFailure                    returnValuesOnConditionCheckFailure;                     // 0x0110(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TMRT[0x7];                                   // 0x0111(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DynamoDB.PointInTimeRecoveryDescription
	 * Size -> 0x0018
	 */
	struct FPointInTimeRecoveryDescription
	{
	public:
		EAWSPointInTimeRecoveryStatus                              pointInTimeRecoveryStatus;                               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SQQD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           earliestRestorableDateTime;                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           latestRestorableDateTime;                                // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.ContinuousBackupsDescription
	 * Size -> 0x0020
	 */
	struct FContinuousBackupsDescription
	{
	public:
		EAWSContinuousBackupsStatus                                continuousBackupsStatus;                                 // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DA61[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointInTimeRecoveryDescription                     PointInTimeRecoveryDescription;                          // 0x0008(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.ContributorInsightsSummary
	 * Size -> 0x0028
	 */
	struct FContributorInsightsSummary
	{
	public:
		class FString                                              tableName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              indexName;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSContributorInsightsStatus                              contributorInsightsStatus;                               // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A5CJ[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DynamoDB.CreateBackupRequest
	 * Size -> 0x0020
	 */
	struct FCreateBackupRequest
	{
	public:
		class FString                                              tableName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              backupName;                                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.CreateBackupResult
	 * Size -> 0x0040
	 */
	struct FCreateBackupResult
	{
	public:
		struct FBackupDetails                                      BackupDetails;                                           // 0x0000(0x0040) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.CreateGlobalSecondaryIndexAction
	 * Size -> 0x0048
	 */
	struct FCreateGlobalSecondaryIndexAction
	{
	public:
		class FString                                              indexName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDynamoDBKeySchemaElement>                   keySchema;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FProjection                                         Projection;                                              // 0x0020(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FProvisionedThroughput                              ProvisionedThroughput;                                   // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.Replica
	 * Size -> 0x0010
	 */
	struct FReplica
	{
	public:
		class FString                                              regionName;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.CreateGlobalTableRequest
	 * Size -> 0x0020
	 */
	struct FCreateGlobalTableRequest
	{
	public:
		class FString                                              globalTableName;                                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FReplica>                                    replicationGroup;                                        // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.ProvisionedThroughputOverride
	 * Size -> 0x0008
	 */
	struct FProvisionedThroughputOverride
	{
	public:
		int64_t                                                    readCapacityUnits;                                       // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.ReplicaGlobalSecondaryIndexDescription
	 * Size -> 0x0018
	 */
	struct FReplicaGlobalSecondaryIndexDescription
	{
	public:
		class FString                                              indexName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FProvisionedThroughputOverride                      ProvisionedThroughputOverride;                           // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.ReplicaDescription
	 * Size -> 0x0068
	 */
	struct FReplicaDescription
	{
	public:
		class FString                                              regionName;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSReplicaStatus                                          replicaStatus;                                           // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5P3R[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              replicaStatusDescription;                                // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              replicaStatusPercentProgress;                            // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              kMSMasterKeyId;                                          // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FProvisionedThroughputOverride                      ProvisionedThroughputOverride;                           // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FReplicaGlobalSecondaryIndexDescription>     globalSecondaryIndexes;                                  // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FDateTime                                           replicaInaccessibleDateTime;                             // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.GlobalTableDescription
	 * Size -> 0x0040
	 */
	struct FGlobalTableDescription
	{
	public:
		TArray<struct FReplicaDescription>                         replicationGroup;                                        // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              globalTableArn;                                          // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           creationDateTime;                                        // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSGlobalTableStatus                                      globalTableStatus;                                       // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V1I9[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              globalTableName;                                         // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.CreateGlobalTableResult
	 * Size -> 0x0040
	 */
	struct FCreateGlobalTableResult
	{
	public:
		struct FGlobalTableDescription                             GlobalTableDescription;                                  // 0x0000(0x0040) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.CreateReplicaAction
	 * Size -> 0x0010
	 */
	struct FCreateReplicaAction
	{
	public:
		class FString                                              regionName;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.ReplicaGlobalSecondaryIndex
	 * Size -> 0x0018
	 */
	struct FReplicaGlobalSecondaryIndex
	{
	public:
		class FString                                              indexName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FProvisionedThroughputOverride                      ProvisionedThroughputOverride;                           // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.CreateReplicationGroupMemberAction
	 * Size -> 0x0038
	 */
	struct FCreateReplicationGroupMemberAction
	{
	public:
		class FString                                              regionName;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              kMSMasterKeyId;                                          // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FProvisionedThroughputOverride                      ProvisionedThroughputOverride;                           // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FReplicaGlobalSecondaryIndex>                globalSecondaryIndexes;                                  // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.LocalSecondaryIndex
	 * Size -> 0x0038
	 */
	struct FLocalSecondaryIndex
	{
	public:
		class FString                                              indexName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDynamoDBKeySchemaElement>                   keySchema;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FProjection                                         Projection;                                              // 0x0020(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.GlobalSecondaryIndex
	 * Size -> 0x0048
	 */
	struct FGlobalSecondaryIndex
	{
	public:
		class FString                                              indexName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDynamoDBKeySchemaElement>                   keySchema;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FProjection                                         Projection;                                              // 0x0020(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FProvisionedThroughput                              ProvisionedThroughput;                                   // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.SSESpecification
	 * Size -> 0x0018
	 */
	struct FSSESpecification
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSSSEType                                                SSEType;                                                 // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U134[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              kMSMasterKeyId;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.DynamoDBTag
	 * Size -> 0x0020
	 */
	struct FDynamoDBTag
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Value;                                                   // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.CreateTableRequest
	 * Size -> 0x0098
	 */
	struct FCreateTableRequest
	{
	public:
		TArray<struct FAttributeDefinition>                        attributeDefinitions;                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              tableName;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDynamoDBKeySchemaElement>                   keySchema;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FLocalSecondaryIndex>                        localSecondaryIndexes;                                   // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGlobalSecondaryIndex>                       globalSecondaryIndexes;                                  // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EAWSBillingMode                                            billingMode;                                             // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S8JX[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FProvisionedThroughput                              ProvisionedThroughput;                                   // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FStreamSpecification                                StreamSpecification;                                     // 0x0068(0x0002) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_33AQ[0x6];                                   // 0x006A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSSESpecification                                   SSESpecification;                                        // 0x0070(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FDynamoDBTag>                                Tags;                                                    // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.ProvisionedThroughputDescription
	 * Size -> 0x0028
	 */
	struct FProvisionedThroughputDescription
	{
	public:
		struct FDateTime                                           lastIncreaseDateTime;                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           lastDecreaseDateTime;                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    numberOfDecreasesToday;                                  // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    readCapacityUnits;                                       // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    writeCapacityUnits;                                      // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.LocalSecondaryIndexDescription
	 * Size -> 0x0058
	 */
	struct FLocalSecondaryIndexDescription
	{
	public:
		class FString                                              indexName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDynamoDBKeySchemaElement>                   keySchema;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FProjection                                         Projection;                                              // 0x0020(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int64_t                                                    indexSizeBytes;                                          // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    itemCount;                                               // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              indexArn;                                                // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.GlobalSecondaryIndexDescription
	 * Size -> 0x0088
	 */
	struct FGlobalSecondaryIndexDescription
	{
	public:
		class FString                                              indexName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDynamoDBKeySchemaElement>                   keySchema;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FProjection                                         Projection;                                              // 0x0020(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EAWSIndexStatus                                            indexStatus;                                             // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       backfilling;                                             // 0x0039(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DR51[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FProvisionedThroughputDescription                   ProvisionedThroughput;                                   // 0x0040(0x0028) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		int64_t                                                    indexSizeBytes;                                          // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    itemCount;                                               // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              indexArn;                                                // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.RestoreSummary
	 * Size -> 0x0030
	 */
	struct FRestoreSummary
	{
	public:
		class FString                                              sourceBackupArn;                                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              sourceTableArn;                                          // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           restoreDateTime;                                         // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       restoreInProgress;                                       // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IOUC[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DynamoDB.TableDescription
	 * Size -> 0x0188
	 */
	struct FTableDescription
	{
	public:
		TArray<struct FAttributeDefinition>                        attributeDefinitions;                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              tableName;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDynamoDBKeySchemaElement>                   keySchema;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EAWSTableStatus                                            tableStatus;                                             // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XNBP[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           creationDateTime;                                        // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FProvisionedThroughputDescription                   ProvisionedThroughput;                                   // 0x0040(0x0028) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		int64_t                                                    tableSizeBytes;                                          // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    itemCount;                                               // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              tableArn;                                                // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              tableId;                                                 // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBillingModeSummary                                 BillingModeSummary;                                      // 0x0098(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FLocalSecondaryIndexDescription>             localSecondaryIndexes;                                   // 0x00A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGlobalSecondaryIndexDescription>            globalSecondaryIndexes;                                  // 0x00B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FStreamSpecification                                StreamSpecification;                                     // 0x00C8(0x0002) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J1HE[0x6];                                   // 0x00CA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              latestStreamLabel;                                       // 0x00D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              latestStreamArn;                                         // 0x00E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              globalTableVersion;                                      // 0x00F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FReplicaDescription>                         replicas;                                                // 0x0100(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FRestoreSummary                                     RestoreSummary;                                          // 0x0110(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSSEDescription                                     SSEDescription;                                          // 0x0140(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FArchivalSummary                                    ArchivalSummary;                                         // 0x0160(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.CreateTableResult
	 * Size -> 0x0188
	 */
	struct FCreateTableResult
	{
	public:
		struct FTableDescription                                   TableDescription;                                        // 0x0000(0x0188) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.DeleteBackupRequest
	 * Size -> 0x0010
	 */
	struct FDeleteBackupRequest
	{
	public:
		class FString                                              backupArn;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.DeleteBackupResult
	 * Size -> 0x0110
	 */
	struct FDeleteBackupResult
	{
	public:
		struct FBackupDescription                                  BackupDescription;                                       // 0x0000(0x0110) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.DeleteGlobalSecondaryIndexAction
	 * Size -> 0x0010
	 */
	struct FDeleteGlobalSecondaryIndexAction
	{
	public:
		class FString                                              indexName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.DeleteItemRequest
	 * Size -> 0x0118
	 */
	struct FDeleteItemRequest
	{
	public:
		class FString                                              tableName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, struct FDynamoDBAttributeValue>        Key;                                                     // 0x0010(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EAWSReturnValue                                            returnValues;                                            // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSReturnConsumedCapacity                                 returnConsumedCapacity;                                  // 0x0061(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSReturnItemCollectionMetrics                            returnItemCollectionMetrics;                             // 0x0062(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B5NW[0x5];                                   // 0x0063(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              conditionExpression;                                     // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         expressionAttributeNames;                                // 0x0078(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TMap<class FString, struct FDynamoDBAttributeValue>        expressionAttributeValues;                               // 0x00C8(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.ItemCollectionMetrics
	 * Size -> 0x0060
	 */
	struct FItemCollectionMetrics
	{
	public:
		TMap<class FString, struct FDynamoDBAttributeValue>        itemCollectionKey;                                       // 0x0000(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<float>                                              sizeEstimateRangeGB;                                     // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.DeleteItemResult
	 * Size -> 0x0178
	 */
	struct FDeleteItemResult
	{
	public:
		TMap<class FString, struct FDynamoDBAttributeValue>        Attributes;                                              // 0x0000(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FConsumedCapacity                                   ConsumedCapacity;                                        // 0x0050(0x00C8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FItemCollectionMetrics                              ItemCollectionMetrics;                                   // 0x0118(0x0060) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.DeleteReplicaAction
	 * Size -> 0x0010
	 */
	struct FDeleteReplicaAction
	{
	public:
		class FString                                              regionName;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.DeleteReplicationGroupMemberAction
	 * Size -> 0x0010
	 */
	struct FDeleteReplicationGroupMemberAction
	{
	public:
		class FString                                              regionName;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.DeleteRequest
	 * Size -> 0x0050
	 */
	struct FDeleteRequest
	{
	public:
		TMap<class FString, struct FDynamoDBAttributeValue>        Key;                                                     // 0x0000(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.DeleteTableRequest
	 * Size -> 0x0010
	 */
	struct FDeleteTableRequest
	{
	public:
		class FString                                              tableName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.DeleteTableResult
	 * Size -> 0x0188
	 */
	struct FDeleteTableResult
	{
	public:
		struct FTableDescription                                   TableDescription;                                        // 0x0000(0x0188) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.DescribeBackupRequest
	 * Size -> 0x0010
	 */
	struct FDescribeBackupRequest
	{
	public:
		class FString                                              backupArn;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.DescribeBackupResult
	 * Size -> 0x0110
	 */
	struct FDescribeBackupResult
	{
	public:
		struct FBackupDescription                                  BackupDescription;                                       // 0x0000(0x0110) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.DescribeContinuousBackupsRequest
	 * Size -> 0x0010
	 */
	struct FDescribeContinuousBackupsRequest
	{
	public:
		class FString                                              tableName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.DescribeContinuousBackupsResult
	 * Size -> 0x0020
	 */
	struct FDescribeContinuousBackupsResult
	{
	public:
		struct FContinuousBackupsDescription                       ContinuousBackupsDescription;                            // 0x0000(0x0020) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.DescribeContributorInsightsRequest
	 * Size -> 0x0020
	 */
	struct FDescribeContributorInsightsRequest
	{
	public:
		class FString                                              tableName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              indexName;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.FailureException
	 * Size -> 0x0020
	 */
	struct FFailureException
	{
	public:
		class FString                                              exceptionName;                                           // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              exceptionDescription;                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.DescribeContributorInsightsResult
	 * Size -> 0x0060
	 */
	struct FDescribeContributorInsightsResult
	{
	public:
		class FString                                              tableName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              indexName;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      contributorInsightsRuleList;                             // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EAWSContributorInsightsStatus                              contributorInsightsStatus;                               // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UYEX[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           lastUpdateDateTime;                                      // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFailureException                                   FailureException;                                        // 0x0040(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.DescribeEndpointsRequest
	 * Size -> 0x0001
	 */
	struct FDescribeEndpointsRequest
	{
	public:
		unsigned char                                              UnknownData_8008[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DynamoDB.Endpoint
	 * Size -> 0x0018
	 */
	struct FEndpoint
	{
	public:
		class FString                                              address;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    cachePeriodInMinutes;                                    // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.DescribeEndpointsResult
	 * Size -> 0x0010
	 */
	struct FDescribeEndpointsResult
	{
	public:
		TArray<struct FEndpoint>                                   endpoints;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.DescribeGlobalTableRequest
	 * Size -> 0x0010
	 */
	struct FDescribeGlobalTableRequest
	{
	public:
		class FString                                              globalTableName;                                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.DescribeGlobalTableResult
	 * Size -> 0x0040
	 */
	struct FDescribeGlobalTableResult
	{
	public:
		struct FGlobalTableDescription                             GlobalTableDescription;                                  // 0x0000(0x0040) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.DescribeGlobalTableSettingsRequest
	 * Size -> 0x0010
	 */
	struct FDescribeGlobalTableSettingsRequest
	{
	public:
		class FString                                              globalTableName;                                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.ReplicaGlobalSecondaryIndexSettingsDescription
	 * Size -> 0x0098
	 */
	struct FReplicaGlobalSecondaryIndexSettingsDescription
	{
	public:
		class FString                                              indexName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSIndexStatus                                            indexStatus;                                             // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JRRQ[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    provisionedReadCapacityUnits;                            // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAutoScalingSettingsDescription                     provisionedReadCapacityAutoScalingSettings;              // 0x0020(0x0038) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int64_t                                                    provisionedWriteCapacityUnits;                           // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAutoScalingSettingsDescription                     provisionedWriteCapacityAutoScalingSettings;             // 0x0060(0x0038) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.ReplicaSettingsDescription
	 * Size -> 0x00B8
	 */
	struct FReplicaSettingsDescription
	{
	public:
		class FString                                              regionName;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSReplicaStatus                                          replicaStatus;                                           // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_984E[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBillingModeSummary                                 replicaBillingModeSummary;                               // 0x0018(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		int64_t                                                    replicaProvisionedReadCapacityUnits;                     // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAutoScalingSettingsDescription                     replicaProvisionedReadCapacityAutoScalingSettings;       // 0x0030(0x0038) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int64_t                                                    replicaProvisionedWriteCapacityUnits;                    // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAutoScalingSettingsDescription                     replicaProvisionedWriteCapacityAutoScalingSettings;      // 0x0070(0x0038) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FReplicaGlobalSecondaryIndexSettingsDescription> replicaGlobalSecondaryIndexSettings;                     // 0x00A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.DescribeGlobalTableSettingsResult
	 * Size -> 0x0020
	 */
	struct FDescribeGlobalTableSettingsResult
	{
	public:
		class FString                                              globalTableName;                                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FReplicaSettingsDescription>                 replicaSettings;                                         // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.DescribeLimitsRequest
	 * Size -> 0x0001
	 */
	struct FDescribeLimitsRequest
	{
	public:
		unsigned char                                              UnknownData_Q3GQ[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DynamoDB.DescribeLimitsResult
	 * Size -> 0x0020
	 */
	struct FDescribeLimitsResult
	{
	public:
		int64_t                                                    accountMaxReadCapacityUnits;                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    accountMaxWriteCapacityUnits;                            // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    tableMaxReadCapacityUnits;                               // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    tableMaxWriteCapacityUnits;                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.DescribeTableReplicaAutoScalingRequest
	 * Size -> 0x0010
	 */
	struct FDescribeTableReplicaAutoScalingRequest
	{
	public:
		class FString                                              tableName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.ReplicaGlobalSecondaryIndexAutoScalingDescription
	 * Size -> 0x0088
	 */
	struct FReplicaGlobalSecondaryIndexAutoScalingDescription
	{
	public:
		class FString                                              indexName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSIndexStatus                                            indexStatus;                                             // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0YX6[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAutoScalingSettingsDescription                     provisionedReadCapacityAutoScalingSettings;              // 0x0018(0x0038) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FAutoScalingSettingsDescription                     provisionedWriteCapacityAutoScalingSettings;             // 0x0050(0x0038) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.ReplicaAutoScalingDescription
	 * Size -> 0x0098
	 */
	struct FReplicaAutoScalingDescription
	{
	public:
		class FString                                              regionName;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FReplicaGlobalSecondaryIndexAutoScalingDescription> globalSecondaryIndexes;                                  // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FAutoScalingSettingsDescription                     replicaProvisionedReadCapacityAutoScalingSettings;       // 0x0020(0x0038) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FAutoScalingSettingsDescription                     replicaProvisionedWriteCapacityAutoScalingSettings;      // 0x0058(0x0038) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EAWSReplicaStatus                                          replicaStatus;                                           // 0x0090(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CFJ9[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DynamoDB.TableAutoScalingDescription
	 * Size -> 0x0028
	 */
	struct FTableAutoScalingDescription
	{
	public:
		class FString                                              tableName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSTableStatus                                            tableStatus;                                             // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8ZOU[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FReplicaAutoScalingDescription>              replicas;                                                // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.DescribeTableReplicaAutoScalingResult
	 * Size -> 0x0028
	 */
	struct FDescribeTableReplicaAutoScalingResult
	{
	public:
		struct FTableAutoScalingDescription                        TableAutoScalingDescription;                             // 0x0000(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.DescribeTableRequest
	 * Size -> 0x0010
	 */
	struct FDescribeTableRequest
	{
	public:
		class FString                                              tableName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.DescribeTableResult
	 * Size -> 0x0188
	 */
	struct FDescribeTableResult
	{
	public:
		struct FTableDescription                                   Table;                                                   // 0x0000(0x0188) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.DescribeTimeToLiveRequest
	 * Size -> 0x0010
	 */
	struct FDescribeTimeToLiveRequest
	{
	public:
		class FString                                              tableName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.DescribeTimeToLiveResult
	 * Size -> 0x0018
	 */
	struct FDescribeTimeToLiveResult
	{
	public:
		struct FTimeToLiveDescription                              TimeToLiveDescription;                                   // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.DynamoDBCondition
	 * Size -> 0x0018
	 */
	struct FDynamoDBCondition
	{
	public:
		TArray<struct FDynamoDBAttributeValue>                     attributeValueList;                                      // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EAWSComparisonOperator                                     comparisonOperator;                                      // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SL75[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DynamoDB.DynamoDBDelete
	 * Size -> 0x0118
	 */
	struct FDynamoDBDelete
	{
	public:
		TMap<class FString, struct FDynamoDBAttributeValue>        Key;                                                     // 0x0000(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              tableName;                                               // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              conditionExpression;                                     // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         expressionAttributeNames;                                // 0x0070(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TMap<class FString, struct FDynamoDBAttributeValue>        expressionAttributeValues;                               // 0x00C0(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EAWSReturnValuesOnConditionCheckFailure                    returnValuesOnConditionCheckFailure;                     // 0x0110(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DSRQ[0x7];                                   // 0x0111(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DynamoDB.DynamoDBGet
	 * Size -> 0x00C0
	 */
	struct FDynamoDBGet
	{
	public:
		TMap<class FString, struct FDynamoDBAttributeValue>        Key;                                                     // 0x0000(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              tableName;                                               // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              projectionExpression;                                    // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         expressionAttributeNames;                                // 0x0070(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.DynamoDBTagResourceRequest
	 * Size -> 0x0020
	 */
	struct FDynamoDBTagResourceRequest
	{
	public:
		class FString                                              resourceARN;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDynamoDBTag>                                Tags;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.DynamoDBUntagResourceRequest
	 * Size -> 0x0020
	 */
	struct FDynamoDBUntagResourceRequest
	{
	public:
		class FString                                              resourceARN;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      tagKeys;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.DynamoDBUpdate
	 * Size -> 0x0128
	 */
	struct FDynamoDBUpdate
	{
	public:
		TMap<class FString, struct FDynamoDBAttributeValue>        Key;                                                     // 0x0000(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              updateExpression;                                        // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              tableName;                                               // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              conditionExpression;                                     // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         expressionAttributeNames;                                // 0x0080(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TMap<class FString, struct FDynamoDBAttributeValue>        expressionAttributeValues;                               // 0x00D0(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EAWSReturnValuesOnConditionCheckFailure                    returnValuesOnConditionCheckFailure;                     // 0x0120(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7WY2[0x7];                                   // 0x0121(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DynamoDB.ExpectedAttributeValue
	 * Size -> 0x0028
	 */
	struct FExpectedAttributeValue
	{
	public:
		struct FDynamoDBAttributeValue                             Value;                                                   // 0x0000(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       exists;                                                  // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSComparisonOperator                                     comparisonOperator;                                      // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IHX7[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDynamoDBAttributeValue>                     attributeValueList;                                      // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.GetItemRequest
	 * Size -> 0x00C8
	 */
	struct FGetItemRequest
	{
	public:
		class FString                                              tableName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, struct FDynamoDBAttributeValue>        Key;                                                     // 0x0010(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       consistentRead;                                          // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSReturnConsumedCapacity                                 returnConsumedCapacity;                                  // 0x0061(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FA77[0x6];                                   // 0x0062(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              projectionExpression;                                    // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         expressionAttributeNames;                                // 0x0078(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.GetItemResult
	 * Size -> 0x0118
	 */
	struct FGetItemResult
	{
	public:
		TMap<class FString, struct FDynamoDBAttributeValue>        Item;                                                    // 0x0000(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FConsumedCapacity                                   ConsumedCapacity;                                        // 0x0050(0x00C8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.GlobalSecondaryIndexAutoScalingUpdate
	 * Size -> 0x0058
	 */
	struct FGlobalSecondaryIndexAutoScalingUpdate
	{
	public:
		class FString                                              indexName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAutoScalingSettingsUpdate                          provisionedWriteCapacityAutoScalingUpdate;               // 0x0010(0x0048) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.UpdateGlobalSecondaryIndexAction
	 * Size -> 0x0020
	 */
	struct FUpdateGlobalSecondaryIndexAction
	{
	public:
		class FString                                              indexName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FProvisionedThroughput                              ProvisionedThroughput;                                   // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.GlobalSecondaryIndexUpdate
	 * Size -> 0x0078
	 */
	struct FGlobalSecondaryIndexUpdate
	{
	public:
		struct FUpdateGlobalSecondaryIndexAction                   UpdateGlobalSecondaryIndexAction;                        // 0x0000(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FCreateGlobalSecondaryIndexAction                   CreateGlobalSecondaryIndexAction;                        // 0x0020(0x0048) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FDeleteGlobalSecondaryIndexAction                   DeleteGlobalSecondaryIndexAction;                        // 0x0068(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.GlobalTable
	 * Size -> 0x0020
	 */
	struct FGlobalTable
	{
	public:
		class FString                                              globalTableName;                                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FReplica>                                    replicationGroup;                                        // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.GlobalTableGlobalSecondaryIndexSettingsUpdate
	 * Size -> 0x0060
	 */
	struct FGlobalTableGlobalSecondaryIndexSettingsUpdate
	{
	public:
		class FString                                              indexName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    provisionedWriteCapacityUnits;                           // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAutoScalingSettingsUpdate                          provisionedWriteCapacityAutoScalingSettingsUpdate;       // 0x0018(0x0048) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.ListBackupsRequest
	 * Size -> 0x0040
	 */
	struct FListBackupsRequest
	{
	public:
		class FString                                              tableName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    limit;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GPD2[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           timeRangeLowerBound;                                     // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           timeRangeUpperBound;                                     // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              exclusiveStartBackupArn;                                 // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSBackupTypeFilter                                       backupType;                                              // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LADA[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DynamoDB.ListBackupsResult
	 * Size -> 0x0020
	 */
	struct FListBackupsResult
	{
	public:
		TArray<struct FBackupSummary>                              backupSummaries;                                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              lastEvaluatedBackupArn;                                  // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.ListContributorInsightsRequest
	 * Size -> 0x0028
	 */
	struct FListContributorInsightsRequest
	{
	public:
		class FString                                              tableName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              nextToken;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    maxResults;                                              // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4ERU[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DynamoDB.ListContributorInsightsResult
	 * Size -> 0x0020
	 */
	struct FListContributorInsightsResult
	{
	public:
		TArray<struct FContributorInsightsSummary>                 contributorInsightsSummaries;                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              nextToken;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.ListGlobalTablesRequest
	 * Size -> 0x0028
	 */
	struct FListGlobalTablesRequest
	{
	public:
		class FString                                              exclusiveStartGlobalTableName;                           // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    limit;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BU12[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              regionName;                                              // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.ListGlobalTablesResult
	 * Size -> 0x0020
	 */
	struct FListGlobalTablesResult
	{
	public:
		TArray<struct FGlobalTable>                                globalTables;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              lastEvaluatedGlobalTableName;                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.ListTablesRequest
	 * Size -> 0x0018
	 */
	struct FListTablesRequest
	{
	public:
		class FString                                              exclusiveStartTableName;                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    limit;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GCWF[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DynamoDB.ListTablesResult
	 * Size -> 0x0020
	 */
	struct FListTablesResult
	{
	public:
		TArray<class FString>                                      tableNames;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              lastEvaluatedTableName;                                  // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.ListTagsOfResourceRequest
	 * Size -> 0x0020
	 */
	struct FListTagsOfResourceRequest
	{
	public:
		class FString                                              resourceARN;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              nextToken;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.ListTagsOfResourceResult
	 * Size -> 0x0020
	 */
	struct FListTagsOfResourceResult
	{
	public:
		TArray<struct FDynamoDBTag>                                Tags;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              nextToken;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.PointInTimeRecoverySpecification
	 * Size -> 0x0001
	 */
	struct FPointInTimeRecoverySpecification
	{
	public:
		bool                                                       pointInTimeRecoveryEnabled;                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.Put
	 * Size -> 0x0118
	 */
	struct FPut
	{
	public:
		TMap<class FString, struct FDynamoDBAttributeValue>        Item;                                                    // 0x0000(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              tableName;                                               // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              conditionExpression;                                     // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         expressionAttributeNames;                                // 0x0070(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TMap<class FString, struct FDynamoDBAttributeValue>        expressionAttributeValues;                               // 0x00C0(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EAWSReturnValuesOnConditionCheckFailure                    returnValuesOnConditionCheckFailure;                     // 0x0110(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GPDU[0x7];                                   // 0x0111(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DynamoDB.PutItemRequest
	 * Size -> 0x0118
	 */
	struct FPutItemRequest
	{
	public:
		class FString                                              tableName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, struct FDynamoDBAttributeValue>        Item;                                                    // 0x0010(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EAWSReturnValue                                            returnValues;                                            // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSReturnConsumedCapacity                                 returnConsumedCapacity;                                  // 0x0061(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSReturnItemCollectionMetrics                            returnItemCollectionMetrics;                             // 0x0062(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LDPT[0x5];                                   // 0x0063(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              conditionExpression;                                     // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         expressionAttributeNames;                                // 0x0078(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TMap<class FString, struct FDynamoDBAttributeValue>        expressionAttributeValues;                               // 0x00C8(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.PutItemResult
	 * Size -> 0x0178
	 */
	struct FPutItemResult
	{
	public:
		TMap<class FString, struct FDynamoDBAttributeValue>        Attributes;                                              // 0x0000(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FConsumedCapacity                                   ConsumedCapacity;                                        // 0x0050(0x00C8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FItemCollectionMetrics                              ItemCollectionMetrics;                                   // 0x0118(0x0060) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.PutRequest
	 * Size -> 0x0050
	 */
	struct FPutRequest
	{
	public:
		TMap<class FString, struct FDynamoDBAttributeValue>        Item;                                                    // 0x0000(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.QueryRequest
	 * Size -> 0x0158
	 */
	struct FQueryRequest
	{
	public:
		class FString                                              tableName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              indexName;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSSelect                                                 select;                                                  // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3RP0[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    limit;                                                   // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       consistentRead;                                          // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       scanIndexForward;                                        // 0x0029(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WWQL[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, struct FDynamoDBAttributeValue>        exclusiveStartKey;                                       // 0x0030(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EAWSReturnConsumedCapacity                                 returnConsumedCapacity;                                  // 0x0080(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XH3J[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              projectionExpression;                                    // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              filterExpression;                                        // 0x0098(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              keyConditionExpression;                                  // 0x00A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         expressionAttributeNames;                                // 0x00B8(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TMap<class FString, struct FDynamoDBAttributeValue>        expressionAttributeValues;                               // 0x0108(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.QueryResult
	 * Size -> 0x0130
	 */
	struct FQueryResult
	{
	public:
		TArray<class FString>                                      Items;                                                   // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    scannedCount;                                            // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, struct FDynamoDBAttributeValue>        lastEvaluatedKey;                                        // 0x0018(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FConsumedCapacity                                   ConsumedCapacity;                                        // 0x0068(0x00C8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.ReplicaGlobalSecondaryIndexAutoScalingUpdate
	 * Size -> 0x0058
	 */
	struct FReplicaGlobalSecondaryIndexAutoScalingUpdate
	{
	public:
		class FString                                              indexName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAutoScalingSettingsUpdate                          provisionedReadCapacityAutoScalingUpdate;                // 0x0010(0x0048) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.ReplicaAutoScalingUpdate
	 * Size -> 0x0068
	 */
	struct FReplicaAutoScalingUpdate
	{
	public:
		class FString                                              regionName;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FReplicaGlobalSecondaryIndexAutoScalingUpdate> replicaGlobalSecondaryIndexUpdates;                      // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FAutoScalingSettingsUpdate                          replicaProvisionedReadCapacityAutoScalingUpdate;         // 0x0020(0x0048) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.ReplicaGlobalSecondaryIndexSettingsUpdate
	 * Size -> 0x0060
	 */
	struct FReplicaGlobalSecondaryIndexSettingsUpdate
	{
	public:
		class FString                                              indexName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    provisionedReadCapacityUnits;                            // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAutoScalingSettingsUpdate                          provisionedReadCapacityAutoScalingSettingsUpdate;        // 0x0018(0x0048) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.ReplicaSettingsUpdate
	 * Size -> 0x0070
	 */
	struct FReplicaSettingsUpdate
	{
	public:
		class FString                                              regionName;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    replicaProvisionedReadCapacityUnits;                     // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAutoScalingSettingsUpdate                          replicaProvisionedReadCapacityAutoScalingSettingsUpdate; // 0x0018(0x0048) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FReplicaGlobalSecondaryIndexSettingsUpdate>  ReplicaGlobalSecondaryIndexSettingsUpdate;               // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.UpdateReplicationGroupMemberAction
	 * Size -> 0x0038
	 */
	struct FUpdateReplicationGroupMemberAction
	{
	public:
		class FString                                              regionName;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              kMSMasterKeyId;                                          // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FProvisionedThroughputOverride                      ProvisionedThroughputOverride;                           // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FReplicaGlobalSecondaryIndex>                globalSecondaryIndexes;                                  // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.ReplicationGroupUpdate
	 * Size -> 0x0080
	 */
	struct FReplicationGroupUpdate
	{
	public:
		struct FCreateReplicationGroupMemberAction                 createAction;                                            // 0x0000(0x0038) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FUpdateReplicationGroupMemberAction                 updateAction;                                            // 0x0038(0x0038) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FDeleteReplicationGroupMemberAction                 deleteAction;                                            // 0x0070(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.ReplicaUpdate
	 * Size -> 0x0020
	 */
	struct FReplicaUpdate
	{
	public:
		struct FCreateReplicaAction                                Create;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FDeleteReplicaAction                                DeleteReplicaAction;                                     // 0x0010(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.RestoreTableFromBackupRequest
	 * Size -> 0x0070
	 */
	struct FRestoreTableFromBackupRequest
	{
	public:
		class FString                                              targetTableName;                                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              backupArn;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSBillingMode                                            billingModeOverride;                                     // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AKZT[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGlobalSecondaryIndex>                       globalSecondaryIndexOverride;                            // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FLocalSecondaryIndex>                        localSecondaryIndexOverride;                             // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FProvisionedThroughput                              ProvisionedThroughputOverride;                           // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FSSESpecification                                   sSESpecificationOverride;                                // 0x0058(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.RestoreTableFromBackupResult
	 * Size -> 0x0188
	 */
	struct FRestoreTableFromBackupResult
	{
	public:
		struct FTableDescription                                   TableDescription;                                        // 0x0000(0x0188) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.RestoreTableToPointInTimeRequest
	 * Size -> 0x0090
	 */
	struct FRestoreTableToPointInTimeRequest
	{
	public:
		class FString                                              sourceTableArn;                                          // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              sourceTableName;                                         // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              targetTableName;                                         // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       useLatestRestorableTime;                                 // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LLSI[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           restoreDateTime;                                         // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSBillingMode                                            billingModeOverride;                                     // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V14A[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGlobalSecondaryIndex>                       globalSecondaryIndexOverride;                            // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FLocalSecondaryIndex>                        localSecondaryIndexOverride;                             // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FProvisionedThroughput                              ProvisionedThroughputOverride;                           // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FSSESpecification                                   sSESpecificationOverride;                                // 0x0078(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.RestoreTableToPointInTimeResult
	 * Size -> 0x0188
	 */
	struct FRestoreTableToPointInTimeResult
	{
	public:
		struct FTableDescription                                   TableDescription;                                        // 0x0000(0x0188) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.ScanRequest
	 * Size -> 0x0150
	 */
	struct FScanRequest
	{
	public:
		class FString                                              tableName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              indexName;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    limit;                                                   // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSSelect                                                 select;                                                  // 0x0024(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L54Y[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, struct FDynamoDBAttributeValue>        exclusiveStartKey;                                       // 0x0028(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EAWSReturnConsumedCapacity                                 returnConsumedCapacity;                                  // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G2IH[0x3];                                   // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    totalSegments;                                           // 0x007C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    segment;                                                 // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_71QT[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              projectionExpression;                                    // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              filterExpression;                                        // 0x0098(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         expressionAttributeNames;                                // 0x00A8(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TMap<class FString, struct FDynamoDBAttributeValue>        expressionAttributeValues;                               // 0x00F8(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       consistentRead;                                          // 0x0148(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XNCF[0x7];                                   // 0x0149(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DynamoDB.ScanResult
	 * Size -> 0x0130
	 */
	struct FScanResult
	{
	public:
		TArray<class FString>                                      Items;                                                   // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    scannedCount;                                            // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, struct FDynamoDBAttributeValue>        lastEvaluatedKey;                                        // 0x0018(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FConsumedCapacity                                   ConsumedCapacity;                                        // 0x0068(0x00C8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.TimeToLiveSpecification
	 * Size -> 0x0018
	 */
	struct FTimeToLiveSpecification
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4R5Y[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AttributeName;                                           // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.TransactGetItem
	 * Size -> 0x00C0
	 */
	struct FTransactGetItem
	{
	public:
		struct FDynamoDBGet                                        Get;                                                     // 0x0000(0x00C0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.TransactGetItemsRequest
	 * Size -> 0x0018
	 */
	struct FTransactGetItemsRequest
	{
	public:
		TArray<struct FTransactGetItem>                            transactItems;                                           // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EAWSReturnConsumedCapacity                                 returnConsumedCapacity;                                  // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FYN5[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DynamoDB.TransactGetItemsResult
	 * Size -> 0x0020
	 */
	struct FTransactGetItemsResult
	{
	public:
		TArray<struct FConsumedCapacity>                           ConsumedCapacity;                                        // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FItemResponse>                               responses;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.TransactionCanceledException
	 * Size -> 0x0020
	 */
	struct FTransactionCanceledException
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCancellationReason>                         cancellationReasons;                                     // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.TransactWriteItem
	 * Size -> 0x0470
	 */
	struct FTransactWriteItem
	{
	public:
		struct FConditionCheck                                     ConditionCheck;                                          // 0x0000(0x0118) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FPut                                                PutItem;                                                 // 0x0118(0x0118) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FDynamoDBDelete                                     DeleteItem;                                              // 0x0230(0x0118) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FDynamoDBUpdate                                     UpdateItem;                                              // 0x0348(0x0128) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.TransactWriteItemsRequest
	 * Size -> 0x0028
	 */
	struct FTransactWriteItemsRequest
	{
	public:
		TArray<struct FTransactWriteItem>                          transactItems;                                           // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EAWSReturnConsumedCapacity                                 returnConsumedCapacity;                                  // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSReturnItemCollectionMetrics                            returnItemCollectionMetrics;                             // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z2CV[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              clientRequestToken;                                      // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.TransactWriteItemsResult
	 * Size -> 0x0060
	 */
	struct FTransactWriteItemsResult
	{
	public:
		TArray<struct FConsumedCapacity>                           ConsumedCapacity;                                        // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         ItemCollectionMetrics;                                   // 0x0010(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.UpdateContinuousBackupsRequest
	 * Size -> 0x0018
	 */
	struct FUpdateContinuousBackupsRequest
	{
	public:
		class FString                                              tableName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPointInTimeRecoverySpecification                   PointInTimeRecoverySpecification;                        // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H4CQ[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DynamoDB.UpdateContinuousBackupsResult
	 * Size -> 0x0020
	 */
	struct FUpdateContinuousBackupsResult
	{
	public:
		struct FContinuousBackupsDescription                       ContinuousBackupsDescription;                            // 0x0000(0x0020) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.UpdateContributorInsightsRequest
	 * Size -> 0x0028
	 */
	struct FUpdateContributorInsightsRequest
	{
	public:
		class FString                                              tableName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              indexName;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSContributorInsightsAction                              contributorInsightsAction;                               // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X0OV[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DynamoDB.UpdateContributorInsightsResult
	 * Size -> 0x0028
	 */
	struct FUpdateContributorInsightsResult
	{
	public:
		class FString                                              tableName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              indexName;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSContributorInsightsStatus                              contributorInsightsStatus;                               // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8YJE[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DynamoDB.UpdateGlobalTableRequest
	 * Size -> 0x0020
	 */
	struct FUpdateGlobalTableRequest
	{
	public:
		class FString                                              globalTableName;                                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FReplicaUpdate>                              replicaUpdates;                                          // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.UpdateGlobalTableResult
	 * Size -> 0x0040
	 */
	struct FUpdateGlobalTableResult
	{
	public:
		struct FGlobalTableDescription                             GlobalTableDescription;                                  // 0x0000(0x0040) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.UpdateGlobalTableSettingsRequest
	 * Size -> 0x0088
	 */
	struct FUpdateGlobalTableSettingsRequest
	{
	public:
		class FString                                              globalTableName;                                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSBillingMode                                            globalTableBillingMode;                                  // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UUVN[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    globalTableProvisionedWriteCapacityUnits;                // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAutoScalingSettingsUpdate                          globalTableProvisionedWriteCapacityAutoScalingSettingsUpdate; // 0x0020(0x0048) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FGlobalTableGlobalSecondaryIndexSettingsUpdate> GlobalTableGlobalSecondaryIndexSettingsUpdate;           // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FReplicaSettingsUpdate>                      ReplicaSettingsUpdate;                                   // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.UpdateGlobalTableSettingsResult
	 * Size -> 0x0020
	 */
	struct FUpdateGlobalTableSettingsResult
	{
	public:
		class FString                                              globalTableName;                                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FReplicaSettingsDescription>                 replicaSettings;                                         // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.UpdateItemRequest
	 * Size -> 0x0128
	 */
	struct FUpdateItemRequest
	{
	public:
		class FString                                              tableName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, struct FDynamoDBAttributeValue>        Key;                                                     // 0x0010(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EAWSReturnValue                                            returnValues;                                            // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSReturnConsumedCapacity                                 returnConsumedCapacity;                                  // 0x0061(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSReturnItemCollectionMetrics                            returnItemCollectionMetrics;                             // 0x0062(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OMB8[0x5];                                   // 0x0063(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              updateExpression;                                        // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              conditionExpression;                                     // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         expressionAttributeNames;                                // 0x0088(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TMap<class FString, struct FDynamoDBAttributeValue>        expressionAttributeValues;                               // 0x00D8(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.UpdateItemResult
	 * Size -> 0x0178
	 */
	struct FUpdateItemResult
	{
	public:
		TMap<class FString, struct FDynamoDBAttributeValue>        Attributes;                                              // 0x0000(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FConsumedCapacity                                   ConsumedCapacity;                                        // 0x0050(0x00C8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FItemCollectionMetrics                              ItemCollectionMetrics;                                   // 0x0118(0x0060) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.UpdateTableReplicaAutoScalingRequest
	 * Size -> 0x0078
	 */
	struct FUpdateTableReplicaAutoScalingRequest
	{
	public:
		TArray<struct FGlobalSecondaryIndexAutoScalingUpdate>      globalSecondaryIndexUpdates;                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              tableName;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAutoScalingSettingsUpdate                          provisionedWriteCapacityAutoScalingUpdate;               // 0x0020(0x0048) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FReplicaAutoScalingUpdate>                   replicaUpdates;                                          // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.UpdateTableReplicaAutoScalingResult
	 * Size -> 0x0028
	 */
	struct FUpdateTableReplicaAutoScalingResult
	{
	public:
		struct FTableAutoScalingDescription                        TableAutoScalingDescription;                             // 0x0000(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.UpdateTableRequest
	 * Size -> 0x0078
	 */
	struct FUpdateTableRequest
	{
	public:
		TArray<struct FAttributeDefinition>                        attributeDefinitions;                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              tableName;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSBillingMode                                            billingMode;                                             // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UR70[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FProvisionedThroughput                              ProvisionedThroughput;                                   // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FGlobalSecondaryIndexUpdate>                 globalSecondaryIndexUpdates;                             // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FStreamSpecification                                StreamSpecification;                                     // 0x0048(0x0002) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IIKB[0x6];                                   // 0x004A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSSESpecification                                   SSESpecification;                                        // 0x0050(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FReplicationGroupUpdate>                     replicaUpdates;                                          // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.UpdateTableResult
	 * Size -> 0x0188
	 */
	struct FUpdateTableResult
	{
	public:
		struct FTableDescription                                   TableDescription;                                        // 0x0000(0x0188) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.UpdateTimeToLiveRequest
	 * Size -> 0x0028
	 */
	struct FUpdateTimeToLiveRequest
	{
	public:
		class FString                                              tableName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTimeToLiveSpecification                            TimeToLiveSpecification;                                 // 0x0010(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.UpdateTimeToLiveResult
	 * Size -> 0x0018
	 */
	struct FUpdateTimeToLiveResult
	{
	public:
		struct FTimeToLiveSpecification                            TimeToLiveSpecification;                                 // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DynamoDB.WriteRequest
	 * Size -> 0x00A0
	 */
	struct FWriteRequest
	{
	public:
		struct FPutRequest                                         PutRequest;                                              // 0x0000(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FDeleteRequest                                      DeleteRequest;                                           // 0x0050(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
