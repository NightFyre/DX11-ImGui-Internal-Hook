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
	 * Enum Lambda.EAWSLambdaCodeSigningPolicy
	 */
	enum class EAWSLambdaCodeSigningPolicy : uint8_t
	{
		NOT_SET = 0,
		Warn    = 1,
		Enforce = 2,
		MAX     = 3
	};

	/**
	 * Enum Lambda.EAWSLambdaEndPointType
	 */
	enum class EAWSLambdaEndPointType : uint8_t
	{
		NOT_SET                 = 0,
		KAFKA_BOOTSTRAP_SERVERS = 1,
		MAX                     = 2
	};

	/**
	 * Enum Lambda.EAWSLambdaFunctionResponseType
	 */
	enum class EAWSLambdaFunctionResponseType : uint8_t
	{
		NOT_SET                 = 0,
		ReportBatchItemFailures = 1,
		MAX                     = 2
	};

	/**
	 * Enum Lambda.EAWSLambdaPackageType
	 */
	enum class EAWSLambdaPackageType : uint8_t
	{
		NOT_SET = 0,
		Zip     = 1,
		Image   = 2,
		MAX     = 3
	};

	/**
	 * Enum Lambda.EAWSLambdaSourceAccessType
	 */
	enum class EAWSLambdaSourceAccessType : uint8_t
	{
		NOT_SET             = 0,
		BASIC_AUTH          = 1,
		VPC_SUBNET          = 2,
		VPC_SECURITY_GROUP  = 3,
		SASL_SCRAM_512_AUTH = 4,
		SASL_SCRAM_256_AUTH = 5,
		MAX                 = 6
	};

	/**
	 * Enum Lambda.ES3EventSourcePosition
	 */
	enum class ES3EventSourcePosition : uint8_t
	{
		NOT_SET      = 0,
		TRIM_HORIZON = 1,
		LATEST       = 2,
		AT_TIMESTAMP = 3,
		MAX          = 4
	};

	/**
	 * Enum Lambda.EAWSFunctionVersion
	 */
	enum class EAWSFunctionVersion : uint8_t
	{
		NOT_SET = 0,
		ALL     = 1,
		MAX     = 2
	};

	/**
	 * Enum Lambda.EAWSInvocationType
	 */
	enum class EAWSInvocationType : uint8_t
	{
		NOT_SET         = 0,
		Event           = 1,
		RequestResponse = 2,
		DryRun          = 3,
		MAX             = 4
	};

	/**
	 * Enum Lambda.ELambdaError
	 */
	enum class ELambdaError : uint8_t
	{
		INCOMPLETE_SIGNATURE                     = 0,
		INTERNAL_FAILURE                         = 1,
		INVALID_ACTION                           = 2,
		INVALID_CLIENT_TOKEN_ID                  = 3,
		INVALID_PARAMETER_COMBINATION            = 4,
		INVALID_QUERY_PARAMETER                  = 5,
		INVALID_PARAMETER_VALUE                  = 6,
		MISSING_ACTION                           = 7,
		MISSING_AUTHENTICATION_TOKEN             = 8,
		MISSING_PARAMETER                        = 9,
		OPT_IN_REQUIRED                          = 10,
		REQUEST_EXPIRED                          = 11,
		SERVICE_UNAVAILABLE                      = 12,
		THROTTLING                               = 13,
		VALIDATION                               = 14,
		ACCESS_DENIED                            = 15,
		RESOURCE_NOT_FOUND                       = 16,
		UNRECOGNIZED_CLIENT                      = 17,
		MALFORMED_QUERY_STRING                   = 18,
		SLOW_DOWN                                = 19,
		REQUEST_TIME_TOO_SKEWED                  = 20,
		INVALID_SIGNATURE                        = 21,
		SIGNATURE_DOES_NOT_MATCH                 = 22,
		INVALID_ACCESS_KEY_ID                    = 23,
		REQUEST_TIMEOUT                          = 24,
		NETWORK_CONNECTION                       = 25,
		UNKNOWN                                  = 26,
		CODE_SIGNING_CONFIG_NOT_FOUND            = 27,
		CODE_STORAGE_EXCEEDED                    = 28,
		CODE_VERIFICATION_FAILED                 = 29,
		EC2_ACCESS_DENIED                        = 30,
		EC2_THROTTLED                            = 31,
		EC2_UNEXPECTED                           = 32,
		EFS_IO                                   = 33,
		EFS_MOUNT_CONNECTIVITY                   = 34,
		EFS_MOUNT_FAILURE                        = 35,
		EFS_MOUNT_TIMEOUT                        = 36,
		ENI_LIMIT_REACHED                        = 37,
		INVALID_CODE_SIGNATURE                   = 38,
		INVALID_REQUEST_CONTENT                  = 39,
		INVALID_RUNTIME                          = 40,
		INVALID_SECURITY_GROUP_ID                = 41,
		INVALID_SUBNET_ID                        = 42,
		INVALID_ZIP_FILE                         = 43,
		KMS_ACCESS_DENIED                        = 44,
		KMS_DISABLED                             = 45,
		KMS_INVALID_STATE                        = 46,
		KMS_NOT_FOUND                            = 47,
		POLICY_LENGTH_EXCEEDED                   = 48,
		PRECONDITION_FAILED                      = 49,
		PROVISIONED_CONCURRENCY_CONFIG_NOT_FOUND = 50,
		REQUEST_TOO_LARGE                        = 51,
		RESOURCE_CONFLICT                        = 52,
		RESOURCE_IN_USE                          = 53,
		RESOURCE_NOT_READY                       = 54,
		SERVICE                                  = 55,
		SUBNET_IP_ADDRESS_LIMIT_REACHED          = 56,
		TOO_MANY_REQUESTS                        = 57,
		UNSUPPORTED_MEDIA_TYPE                   = 58,
		MAX                                      = 59
	};

	/**
	 * Enum Lambda.EAWSLastUpdateStatus
	 */
	enum class EAWSLastUpdateStatus : uint8_t
	{
		NOT_SET    = 0,
		Successful = 1,
		Failed     = 2,
		InProgress = 3,
		MAX        = 4
	};

	/**
	 * Enum Lambda.EAWSLastUpdateStatusReasonCode
	 */
	enum class EAWSLastUpdateStatusReasonCode : uint8_t
	{
		NOT_SET                     = 0,
		EniLimitExceeded            = 1,
		InsufficientRolePermissions = 2,
		InvalidConfiguration        = 3,
		InternalError               = 4,
		SubnetOutOfIPAddresses      = 5,
		InvalidSubnet               = 6,
		InvalidSecurityGroup        = 7,
		ImageDeleted                = 8,
		ImageAccessDenied           = 9,
		InvalidImage                = 10,
		MAX                         = 11
	};

	/**
	 * Enum Lambda.EAWSLogType
	 */
	enum class EAWSLogType : uint8_t
	{
		NOT_SET = 0,
		None    = 1,
		Tail    = 2,
		MAX     = 3
	};

	/**
	 * Enum Lambda.EAWSProvisionedConcurrencyStatusEnum
	 */
	enum class EAWSProvisionedConcurrencyStatusEnum : uint8_t
	{
		NOT_SET     = 0,
		IN_PROGRESS = 1,
		READY       = 2,
		FAILED      = 3,
		MAX         = 4
	};

	/**
	 * Enum Lambda.EAWSRuntime
	 */
	enum class EAWSRuntime : uint8_t
	{
		NOT_SET        = 0,
		nodejs         = 1,
		nodejs4        = 2,
		nodejs6        = 3,
		nodejs8        = 4,
		nodejs10_x     = 5,
		nodejs12_x     = 6,
		nodejs14_x     = 7,
		java8          = 8,
		java8_al2      = 9,
		java11         = 10,
		python2        = 11,
		python3        = 12,
		python301      = 13,
		python302      = 14,
		dotnetcore1    = 15,
		dotnetcore2    = 16,
		dotnetcore201  = 17,
		dotnetcore3    = 18,
		nodejs4_3_edge = 19,
		go1_x          = 20,
		ruby2          = 21,
		ruby201        = 22,
		provided       = 23,
		provided_al2   = 24,
		MAX            = 25
	};

	/**
	 * Enum Lambda.EAWSState
	 */
	enum class EAWSState : uint8_t
	{
		NOT_SET  = 0,
		Pending  = 1,
		Active   = 2,
		Inactive = 3,
		Failed   = 4,
		MAX      = 5
	};

	/**
	 * Enum Lambda.EAWSStateReasonCode
	 */
	enum class EAWSStateReasonCode : uint8_t
	{
		NOT_SET                     = 0,
		Idle                        = 1,
		Creating                    = 2,
		Restoring                   = 3,
		EniLimitExceeded            = 4,
		InsufficientRolePermissions = 5,
		InvalidConfiguration        = 6,
		InternalError               = 7,
		SubnetOutOfIPAddresses      = 8,
		InvalidSubnet               = 9,
		InvalidSecurityGroup        = 10,
		ImageDeleted                = 11,
		ImageAccessDenied           = 12,
		InvalidImage                = 13,
		MAX                         = 14
	};

	/**
	 * Enum Lambda.EThrottleReason
	 */
	enum class EThrottleReason : uint8_t
	{
		NOT_SET                                           = 0,
		ConcurrentInvocationLimitExceeded                 = 1,
		FunctionInvocationRateLimitExceeded               = 2,
		ReservedFunctionConcurrentInvocationLimitExceeded = 3,
		ReservedFunctionInvocationRateLimitExceeded       = 4,
		CallerRateLimitExceeded                           = 5,
		MAX                                               = 6
	};

	/**
	 * Enum Lambda.EAWSTracingMode
	 */
	enum class EAWSTracingMode : uint8_t
	{
		NOT_SET     = 0,
		Active      = 1,
		PassThrough = 2,
		MAX         = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Lambda.AccountLimit
	 * Size -> 0x0020
	 */
	struct FAccountLimit
	{
	public:
		int64_t                                                    totalCodeSize;                                           // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    codeSizeUnzipped;                                        // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    codeSizeZipped;                                          // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    concurrentExecutions;                                    // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    unreservedConcurrentExecutions;                          // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.AccountUsage
	 * Size -> 0x0010
	 */
	struct FAccountUsage
	{
	public:
		int64_t                                                    totalCodeSize;                                           // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    functionCount;                                           // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.AddLayerVersionPermissionRequest
	 * Size -> 0x0068
	 */
	struct FAddLayerVersionPermissionRequest
	{
	public:
		class FString                                              LayerName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    versionNumber;                                           // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              statementId;                                             // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Action;                                                  // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              principal;                                               // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OrganizationId;                                          // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              revisionId;                                              // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.AddLayerVersionPermissionResult
	 * Size -> 0x0020
	 */
	struct FAddLayerVersionPermissionResult
	{
	public:
		class FString                                              statement;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              revisionId;                                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.AddPermissionRequest
	 * Size -> 0x0090
	 */
	struct FAddPermissionRequest
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              statementId;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Action;                                                  // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              principal;                                               // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              sourceArn;                                               // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              sourceAccount;                                           // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              eventSourceToken;                                        // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              qualifier;                                               // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              revisionId;                                              // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.AddPermissionResult
	 * Size -> 0x0010
	 */
	struct FAddPermissionResult
	{
	public:
		class FString                                              statement;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.AliasRoutingConfiguration
	 * Size -> 0x0050
	 */
	struct FAliasRoutingConfiguration
	{
	public:
		TMap<class FString, float>                                 additionalVersionWeights;                                // 0x0000(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.AliasConfiguration
	 * Size -> 0x00A0
	 */
	struct FAliasConfiguration
	{
	public:
		class FString                                              aliasArn;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              functionVersion;                                         // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAliasRoutingConfiguration                          routingConfig;                                           // 0x0040(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              revisionId;                                              // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.AWSLambdaAllowedPublishers
	 * Size -> 0x0010
	 */
	struct FAWSLambdaAllowedPublishers
	{
	public:
		TArray<class FString>                                      signingProfileVersionArns;                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.AWSLambdaCodeSigningPolicies
	 * Size -> 0x0001
	 */
	struct FAWSLambdaCodeSigningPolicies
	{
	public:
		EAWSLambdaCodeSigningPolicy                                untrustedArtifactOnDeployment;                           // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.AWSLambdaCodeSigningConfig
	 * Size -> 0x0058
	 */
	struct FAWSLambdaCodeSigningConfig
	{
	public:
		class FString                                              codeSigningConfigId;                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              codeSigningConfigArn;                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAWSLambdaAllowedPublishers                         allowedPublishers;                                       // 0x0030(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FAWSLambdaCodeSigningPolicies                       codeSigningPolicies;                                     // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6O7R[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              lastModified;                                            // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.AWSLambdaCreateCodeSigningConfigRequest
	 * Size -> 0x0028
	 */
	struct FAWSLambdaCreateCodeSigningConfigRequest
	{
	public:
		class FString                                              Description;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAWSLambdaAllowedPublishers                         allowedPublishers;                                       // 0x0010(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FAWSLambdaCodeSigningPolicies                       codeSigningPolicies;                                     // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XSA7[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Lambda.AWSLambdaCreateCodeSigningConfigResult
	 * Size -> 0x0058
	 */
	struct FAWSLambdaCreateCodeSigningConfigResult
	{
	public:
		struct FAWSLambdaCodeSigningConfig                         codeSigningConfig;                                       // 0x0000(0x0058) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.AWSLambdaDeleteCodeSigningConfigRequest
	 * Size -> 0x0010
	 */
	struct FAWSLambdaDeleteCodeSigningConfigRequest
	{
	public:
		class FString                                              codeSigningConfigArn;                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.AWSLambdaDeleteCodeSigningConfigResult
	 * Size -> 0x0001
	 */
	struct FAWSLambdaDeleteCodeSigningConfigResult
	{
	public:
		unsigned char                                              UnknownData_UB2O[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Lambda.AWSLambdaDeleteFunctionCodeSigningConfigRequest
	 * Size -> 0x0010
	 */
	struct FAWSLambdaDeleteFunctionCodeSigningConfigRequest
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.AWSLambdaGetCodeSigningConfigRequest
	 * Size -> 0x0010
	 */
	struct FAWSLambdaGetCodeSigningConfigRequest
	{
	public:
		class FString                                              codeSigningConfigArn;                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.AWSLambdaGetCodeSigningConfigResult
	 * Size -> 0x0058
	 */
	struct FAWSLambdaGetCodeSigningConfigResult
	{
	public:
		struct FAWSLambdaCodeSigningConfig                         codeSigningConfig;                                       // 0x0000(0x0058) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.AWSLambdaGetFunctionCodeSigningConfigRequest
	 * Size -> 0x0010
	 */
	struct FAWSLambdaGetFunctionCodeSigningConfigRequest
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.AWSLambdaGetFunctionCodeSigningConfigResult
	 * Size -> 0x0020
	 */
	struct FAWSLambdaGetFunctionCodeSigningConfigResult
	{
	public:
		class FString                                              codeSigningConfigArn;                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FunctionName;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.AWSLambdaImageConfig
	 * Size -> 0x0030
	 */
	struct FAWSLambdaImageConfig
	{
	public:
		TArray<class FString>                                      EntryPoint;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      Command;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              workingDirectory;                                        // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.AWSLambdaImageConfigError
	 * Size -> 0x0020
	 */
	struct FAWSLambdaImageConfigError
	{
	public:
		class FString                                              ErrorCode;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.AWSLambdaImageConfigResponse
	 * Size -> 0x0050
	 */
	struct FAWSLambdaImageConfigResponse
	{
	public:
		struct FAWSLambdaImageConfig                               imageConfig;                                             // 0x0000(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FAWSLambdaImageConfigError                          Error;                                                   // 0x0030(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.AWSLambdaListCodeSigningConfigsRequest
	 * Size -> 0x0018
	 */
	struct FAWSLambdaListCodeSigningConfigsRequest
	{
	public:
		class FString                                              marker;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    maxItems;                                                // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UPUK[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Lambda.AWSLambdaListCodeSigningConfigsResult
	 * Size -> 0x0020
	 */
	struct FAWSLambdaListCodeSigningConfigsResult
	{
	public:
		class FString                                              nextMarker;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAWSLambdaCodeSigningConfig>                 codeSigningConfigs;                                      // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.AWSLambdaListFunctionsByCodeSigningConfigRequest
	 * Size -> 0x0028
	 */
	struct FAWSLambdaListFunctionsByCodeSigningConfigRequest
	{
	public:
		class FString                                              codeSigningConfigArn;                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              marker;                                                  // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    maxItems;                                                // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8O01[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Lambda.AWSLambdaListFunctionsByCodeSigningConfigResult
	 * Size -> 0x0020
	 */
	struct FAWSLambdaListFunctionsByCodeSigningConfigResult
	{
	public:
		class FString                                              nextMarker;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      functionArns;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.AWSLambdaPutFunctionCodeSigningConfigRequest
	 * Size -> 0x0020
	 */
	struct FAWSLambdaPutFunctionCodeSigningConfigRequest
	{
	public:
		class FString                                              codeSigningConfigArn;                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FunctionName;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.AWSLambdaPutFunctionCodeSigningConfigResult
	 * Size -> 0x0020
	 */
	struct FAWSLambdaPutFunctionCodeSigningConfigResult
	{
	public:
		class FString                                              codeSigningConfigArn;                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FunctionName;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.AWSLambdaSelfManagedEventSource
	 * Size -> 0x0050
	 */
	struct FAWSLambdaSelfManagedEventSource
	{
	public:
		TMap<EAWSLambdaEndPointType, class FString>                endpoints;                                               // 0x0000(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.AWSLambdaSourceAccessConfiguration
	 * Size -> 0x0018
	 */
	struct FAWSLambdaSourceAccessConfiguration
	{
	public:
		EAWSLambdaSourceAccessType                                 Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RNHS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              URI;                                                     // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.AWSLambdaUpdateCodeSigningConfigRequest
	 * Size -> 0x0038
	 */
	struct FAWSLambdaUpdateCodeSigningConfigRequest
	{
	public:
		class FString                                              codeSigningConfigArn;                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAWSLambdaAllowedPublishers                         allowedPublishers;                                       // 0x0020(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FAWSLambdaCodeSigningPolicies                       codeSigningPolicies;                                     // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I00N[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Lambda.AWSLambdaUpdateCodeSigningConfigResult
	 * Size -> 0x0058
	 */
	struct FAWSLambdaUpdateCodeSigningConfigResult
	{
	public:
		struct FAWSLambdaCodeSigningConfig                         codeSigningConfig;                                       // 0x0000(0x0058) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.AWSLayer
	 * Size -> 0x0038
	 */
	struct FAWSLayer
	{
	public:
		class FString                                              arn;                                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    codeSize;                                                // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              signingProfileVersionArn;                                // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              signingJobArn;                                           // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.CodeStorageExceededException
	 * Size -> 0x0020
	 */
	struct FCodeStorageExceededException
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.Concurrency
	 * Size -> 0x0004
	 */
	struct FConcurrency
	{
	public:
		int32_t                                                    reservedConcurrentExecutions;                            // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.OnSuccess
	 * Size -> 0x0010
	 */
	struct FOnSuccess
	{
	public:
		class FString                                              destination;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.OnFailure
	 * Size -> 0x0010
	 */
	struct FOnFailure
	{
	public:
		class FString                                              destination;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.DestinationConfig
	 * Size -> 0x0020
	 */
	struct FDestinationConfig
	{
	public:
		struct FOnSuccess                                          OnSuccess;                                               // 0x0000(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FOnFailure                                          OnFailure;                                               // 0x0010(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.CreateEventSourceMappingRequest
	 * Size -> 0x0100
	 */
	struct FCreateEventSourceMappingRequest
	{
	public:
		class FString                                              eventSourceArn;                                          // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FunctionName;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Enabled;                                                 // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OCRF[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    batchSize;                                               // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    maximumBatchingWindowInSeconds;                          // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    parallelizationFactor;                                   // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ES3EventSourcePosition                                     startingPosition;                                        // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NX2X[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           startingPositionTimestamp;                               // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDestinationConfig                                  DestinationConfig;                                       // 0x0040(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    maximumRecordAgeInSeconds;                               // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bisectBatchOnFunctionError;                              // 0x0064(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HVYR[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    maximumRetryAttempts;                                    // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    tumblingWindowInSeconds;                                 // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      topics;                                                  // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      queues;                                                  // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAWSLambdaSourceAccessConfiguration>         sourceAccessConfigurations;                              // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FAWSLambdaSelfManagedEventSource                    selfManagedEventSource;                                  // 0x00A0(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<EAWSLambdaFunctionResponseType>                     functionResponseTypes;                                   // 0x00F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.CreateEventSourceMappingResult
	 * Size -> 0x0148
	 */
	struct FCreateEventSourceMappingResult
	{
	public:
		class FString                                              UUID;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ES3EventSourcePosition                                     startingPosition;                                        // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IPW8[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           startingPositionTimestamp;                               // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    batchSize;                                               // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    maximumBatchingWindowInSeconds;                          // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    parallelizationFactor;                                   // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8C9P[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              eventSourceArn;                                          // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              functionArn;                                             // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           lastModified;                                            // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              lastProcessingResult;                                    // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              State;                                                   // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              stateTransitionReason;                                   // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDestinationConfig                                  DestinationConfig;                                       // 0x0088(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<class FString>                                      topics;                                                  // 0x00A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      queues;                                                  // 0x00B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAWSLambdaSourceAccessConfiguration>         sourceAccessConfigurations;                              // 0x00C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FAWSLambdaSelfManagedEventSource                    selfManagedEventSource;                                  // 0x00D8(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    maximumRecordAgeInSeconds;                               // 0x0128(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bisectBatchOnFunctionError;                              // 0x012C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7B8G[0x3];                                   // 0x012D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    maximumRetryAttempts;                                    // 0x0130(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    tumblingWindowInSeconds;                                 // 0x0134(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<EAWSLambdaFunctionResponseType>                     functionResponseTypes;                                   // 0x0138(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.FunctionCode
	 * Size -> 0x0050
	 */
	struct FFunctionCode
	{
	public:
		class FString                                              zipFile;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              S3Bucket;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              S3Key;                                                   // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              S3ObjectVersion;                                         // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              imageUri;                                                // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.VpcConfig
	 * Size -> 0x0020
	 */
	struct FVpcConfig
	{
	public:
		TArray<class FString>                                      subnetIds;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      securityGroupIds;                                        // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.DeadLetterConfig
	 * Size -> 0x0010
	 */
	struct FDeadLetterConfig
	{
	public:
		class FString                                              targetArn;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.Environment
	 * Size -> 0x0050
	 */
	struct FEnvironment
	{
	public:
		TMap<class FString, class FString>                         variables;                                               // 0x0000(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.TracingConfig
	 * Size -> 0x0001
	 */
	struct FTracingConfig
	{
	public:
		EAWSTracingMode                                            Mode;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.FileSystemConfig
	 * Size -> 0x0020
	 */
	struct FFileSystemConfig
	{
	public:
		class FString                                              arn;                                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              localMountPath;                                          // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.CreateFunctionRequest
	 * Size -> 0x01F8
	 */
	struct FCreateFunctionRequest
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSRuntime                                                runtime;                                                 // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DJ0U[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Role;                                                    // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              handler;                                                 // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFunctionCode                                       code;                                                    // 0x0038(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Timeout;                                                 // 0x0098(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    memorySize;                                              // 0x009C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       publish;                                                 // 0x00A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L8Z5[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVpcConfig                                          VpcConfig;                                               // 0x00A8(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EAWSLambdaPackageType                                      packageType;                                             // 0x00C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AK5I[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDeadLetterConfig                                   DeadLetterConfig;                                        // 0x00D0(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FEnvironment                                        Environment;                                             // 0x00E0(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              kMSKeyArn;                                               // 0x0130(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTracingConfig                                      TracingConfig;                                           // 0x0140(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O921[0x7];                                   // 0x0141(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, class FString>                         Tags;                                                    // 0x0148(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<class FString>                                      layers;                                                  // 0x0198(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FFileSystemConfig>                           fileSystemConfigs;                                       // 0x01A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FAWSLambdaImageConfig                               imageConfig;                                             // 0x01B8(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              codeSigningConfigArn;                                    // 0x01E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.VpcConfigResponse
	 * Size -> 0x0030
	 */
	struct FVpcConfigResponse
	{
	public:
		TArray<class FString>                                      subnetIds;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      securityGroupIds;                                        // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              vpcId;                                                   // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.EnvironmentError
	 * Size -> 0x0020
	 */
	struct FEnvironmentError
	{
	public:
		class FString                                              ErrorCode;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.EnvironmentResponse
	 * Size -> 0x0070
	 */
	struct FEnvironmentResponse
	{
	public:
		TMap<class FString, class FString>                         variables;                                               // 0x0000(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FEnvironmentError                                   Error;                                                   // 0x0050(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.TracingConfigResponse
	 * Size -> 0x0001
	 */
	struct FTracingConfigResponse
	{
	public:
		EAWSTracingMode                                            Mode;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.CreateFunctionResult
	 * Size -> 0x0250
	 */
	struct FCreateFunctionResult
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              functionArn;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSRuntime                                                runtime;                                                 // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EROL[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Role;                                                    // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              handler;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    codeSize;                                                // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Timeout;                                                 // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    memorySize;                                              // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              lastModified;                                            // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              codeSha256;                                              // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Version;                                                 // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVpcConfigResponse                                  VpcConfig;                                               // 0x0098(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FDeadLetterConfig                                   DeadLetterConfig;                                        // 0x00C8(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FEnvironmentResponse                                Environment;                                             // 0x00D8(0x0070) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              kMSKeyArn;                                               // 0x0148(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTracingConfigResponse                              TracingConfig;                                           // 0x0158(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1HOZ[0x7];                                   // 0x0159(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              masterArn;                                               // 0x0160(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              revisionId;                                              // 0x0170(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAWSLayer>                                   layers;                                                  // 0x0180(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EAWSState                                                  State;                                                   // 0x0190(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GC4R[0x7];                                   // 0x0191(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              stateReason;                                             // 0x0198(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSStateReasonCode                                        stateReasonCode;                                         // 0x01A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSLastUpdateStatus                                       lastUpdateStatus;                                        // 0x01A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HTL6[0x6];                                   // 0x01AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              lastUpdateStatusReason;                                  // 0x01B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSLastUpdateStatusReasonCode                             lastUpdateStatusReasonCode;                              // 0x01C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D38B[0x7];                                   // 0x01C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFileSystemConfig>                           fileSystemConfigs;                                       // 0x01C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EAWSLambdaPackageType                                      packageType;                                             // 0x01D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZG9X[0x7];                                   // 0x01D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAWSLambdaImageConfigResponse                       imageConfigResponse;                                     // 0x01E0(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              signingProfileVersionArn;                                // 0x0230(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              signingJobArn;                                           // 0x0240(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.DeleteEventSourceMappingRequest
	 * Size -> 0x0010
	 */
	struct FDeleteEventSourceMappingRequest
	{
	public:
		class FString                                              UUID;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.DeleteEventSourceMappingResult
	 * Size -> 0x0148
	 */
	struct FDeleteEventSourceMappingResult
	{
	public:
		class FString                                              UUID;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ES3EventSourcePosition                                     startingPosition;                                        // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UK9F[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           startingPositionTimestamp;                               // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    batchSize;                                               // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    maximumBatchingWindowInSeconds;                          // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    parallelizationFactor;                                   // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DPVA[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              eventSourceArn;                                          // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              functionArn;                                             // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           lastModified;                                            // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              lastProcessingResult;                                    // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              State;                                                   // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              stateTransitionReason;                                   // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDestinationConfig                                  DestinationConfig;                                       // 0x0088(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<class FString>                                      topics;                                                  // 0x00A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      queues;                                                  // 0x00B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAWSLambdaSourceAccessConfiguration>         sourceAccessConfigurations;                              // 0x00C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FAWSLambdaSelfManagedEventSource                    selfManagedEventSource;                                  // 0x00D8(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    maximumRecordAgeInSeconds;                               // 0x0128(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bisectBatchOnFunctionError;                              // 0x012C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2NCL[0x3];                                   // 0x012D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    maximumRetryAttempts;                                    // 0x0130(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    tumblingWindowInSeconds;                                 // 0x0134(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<EAWSLambdaFunctionResponseType>                     functionResponseTypes;                                   // 0x0138(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.DeleteFunctionConcurrencyRequest
	 * Size -> 0x0010
	 */
	struct FDeleteFunctionConcurrencyRequest
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.DeleteFunctionEventInvokeConfigRequest
	 * Size -> 0x0020
	 */
	struct FDeleteFunctionEventInvokeConfigRequest
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              qualifier;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.DeleteFunctionRequest
	 * Size -> 0x0020
	 */
	struct FDeleteFunctionRequest
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              qualifier;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.DeleteLayerVersionRequest
	 * Size -> 0x0018
	 */
	struct FDeleteLayerVersionRequest
	{
	public:
		class FString                                              LayerName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    versionNumber;                                           // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.DeleteProvisionedConcurrencyConfigRequest
	 * Size -> 0x0020
	 */
	struct FDeleteProvisionedConcurrencyConfigRequest
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              qualifier;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.EC2AccessDeniedException
	 * Size -> 0x0020
	 */
	struct FEC2AccessDeniedException
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.EC2ThrottledException
	 * Size -> 0x0020
	 */
	struct FEC2ThrottledException
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.EC2UnexpectedException
	 * Size -> 0x0030
	 */
	struct FEC2UnexpectedException
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ec2ErrorCode;                                            // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.EFSIOException
	 * Size -> 0x0020
	 */
	struct FEFSIOException
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.EFSMountConnectivityException
	 * Size -> 0x0020
	 */
	struct FEFSMountConnectivityException
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.EFSMountFailureException
	 * Size -> 0x0020
	 */
	struct FEFSMountFailureException
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.EFSMountTimeoutException
	 * Size -> 0x0020
	 */
	struct FEFSMountTimeoutException
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.ENILimitReachedException
	 * Size -> 0x0020
	 */
	struct FENILimitReachedException
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.EventSourceMappingConfiguration
	 * Size -> 0x0148
	 */
	struct FEventSourceMappingConfiguration
	{
	public:
		class FString                                              UUID;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ES3EventSourcePosition                                     startingPosition;                                        // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TXIE[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           startingPositionTimestamp;                               // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    batchSize;                                               // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    maximumBatchingWindowInSeconds;                          // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    parallelizationFactor;                                   // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4SYX[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              eventSourceArn;                                          // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              functionArn;                                             // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           lastModified;                                            // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              lastProcessingResult;                                    // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              State;                                                   // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              stateTransitionReason;                                   // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDestinationConfig                                  DestinationConfig;                                       // 0x0088(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<class FString>                                      topics;                                                  // 0x00A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      queues;                                                  // 0x00B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAWSLambdaSourceAccessConfiguration>         sourceAccessConfigurations;                              // 0x00C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FAWSLambdaSelfManagedEventSource                    selfManagedEventSource;                                  // 0x00D8(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    maximumRecordAgeInSeconds;                               // 0x0128(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bisectBatchOnFunctionError;                              // 0x012C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WWBI[0x3];                                   // 0x012D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    maximumRetryAttempts;                                    // 0x0130(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    tumblingWindowInSeconds;                                 // 0x0134(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<EAWSLambdaFunctionResponseType>                     functionResponseTypes;                                   // 0x0138(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.FunctionCodeLocation
	 * Size -> 0x0040
	 */
	struct FFunctionCodeLocation
	{
	public:
		class FString                                              repositoryType;                                          // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Location;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              imageUri;                                                // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              resolvedImageUri;                                        // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.FunctionConfiguration
	 * Size -> 0x0250
	 */
	struct FFunctionConfiguration
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              functionArn;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSRuntime                                                runtime;                                                 // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_THVD[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Role;                                                    // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              handler;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    codeSize;                                                // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Timeout;                                                 // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    memorySize;                                              // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              lastModified;                                            // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              codeSha256;                                              // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Version;                                                 // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVpcConfigResponse                                  VpcConfig;                                               // 0x0098(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FDeadLetterConfig                                   DeadLetterConfig;                                        // 0x00C8(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FEnvironmentResponse                                Environment;                                             // 0x00D8(0x0070) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              kMSKeyArn;                                               // 0x0148(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTracingConfigResponse                              TracingConfig;                                           // 0x0158(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NZBZ[0x7];                                   // 0x0159(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              masterArn;                                               // 0x0160(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              revisionId;                                              // 0x0170(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAWSLayer>                                   layers;                                                  // 0x0180(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EAWSState                                                  State;                                                   // 0x0190(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OOAW[0x7];                                   // 0x0191(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              stateReason;                                             // 0x0198(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSStateReasonCode                                        stateReasonCode;                                         // 0x01A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSLastUpdateStatus                                       lastUpdateStatus;                                        // 0x01A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XIES[0x6];                                   // 0x01AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              lastUpdateStatusReason;                                  // 0x01B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSLastUpdateStatusReasonCode                             lastUpdateStatusReasonCode;                              // 0x01C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M61C[0x7];                                   // 0x01C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFileSystemConfig>                           fileSystemConfigs;                                       // 0x01C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EAWSLambdaPackageType                                      packageType;                                             // 0x01D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1KDT[0x7];                                   // 0x01D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAWSLambdaImageConfigResponse                       imageConfigResponse;                                     // 0x01E0(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              signingProfileVersionArn;                                // 0x0230(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              signingJobArn;                                           // 0x0240(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.FunctionEventInvokeConfig
	 * Size -> 0x0040
	 */
	struct FFunctionEventInvokeConfig
	{
	public:
		struct FDateTime                                           lastModified;                                            // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              functionArn;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    maximumRetryAttempts;                                    // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    maximumEventAgeInSeconds;                                // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDestinationConfig                                  DestinationConfig;                                       // 0x0020(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.GetAccountSettingsRequest
	 * Size -> 0x0001
	 */
	struct FGetAccountSettingsRequest
	{
	public:
		unsigned char                                              UnknownData_DCXH[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Lambda.GetAccountSettingsResult
	 * Size -> 0x0030
	 */
	struct FGetAccountSettingsResult
	{
	public:
		struct FAccountLimit                                       AccountLimit;                                            // 0x0000(0x0020) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FAccountUsage                                       AccountUsage;                                            // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.GetAliasRequest
	 * Size -> 0x0020
	 */
	struct FGetAliasRequest
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.GetAliasResult
	 * Size -> 0x00A0
	 */
	struct FGetAliasResult
	{
	public:
		class FString                                              aliasArn;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              functionVersion;                                         // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAliasRoutingConfiguration                          routingConfig;                                           // 0x0040(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              revisionId;                                              // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.GetEventSourceMappingRequest
	 * Size -> 0x0010
	 */
	struct FGetEventSourceMappingRequest
	{
	public:
		class FString                                              UUID;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.GetEventSourceMappingResult
	 * Size -> 0x0148
	 */
	struct FGetEventSourceMappingResult
	{
	public:
		class FString                                              UUID;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ES3EventSourcePosition                                     startingPosition;                                        // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_16XZ[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           startingPositionTimestamp;                               // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    batchSize;                                               // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    maximumBatchingWindowInSeconds;                          // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    parallelizationFactor;                                   // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I6QI[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              eventSourceArn;                                          // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              functionArn;                                             // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           lastModified;                                            // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              lastProcessingResult;                                    // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              State;                                                   // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              stateTransitionReason;                                   // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDestinationConfig                                  DestinationConfig;                                       // 0x0088(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<class FString>                                      topics;                                                  // 0x00A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      queues;                                                  // 0x00B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAWSLambdaSourceAccessConfiguration>         sourceAccessConfigurations;                              // 0x00C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FAWSLambdaSelfManagedEventSource                    selfManagedEventSource;                                  // 0x00D8(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    maximumRecordAgeInSeconds;                               // 0x0128(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bisectBatchOnFunctionError;                              // 0x012C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C13E[0x3];                                   // 0x012D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    maximumRetryAttempts;                                    // 0x0130(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    tumblingWindowInSeconds;                                 // 0x0134(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<EAWSLambdaFunctionResponseType>                     functionResponseTypes;                                   // 0x0138(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.GetFunctionConcurrencyRequest
	 * Size -> 0x0010
	 */
	struct FGetFunctionConcurrencyRequest
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.GetFunctionConcurrencyResult
	 * Size -> 0x0004
	 */
	struct FGetFunctionConcurrencyResult
	{
	public:
		int32_t                                                    reservedConcurrentExecutions;                            // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.GetFunctionConfigurationRequest
	 * Size -> 0x0020
	 */
	struct FGetFunctionConfigurationRequest
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              qualifier;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.GetFunctionConfigurationResult
	 * Size -> 0x0250
	 */
	struct FGetFunctionConfigurationResult
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              functionArn;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSRuntime                                                runtime;                                                 // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0XNB[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Role;                                                    // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              handler;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    codeSize;                                                // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Timeout;                                                 // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    memorySize;                                              // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              lastModified;                                            // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              codeSha256;                                              // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Version;                                                 // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVpcConfigResponse                                  VpcConfig;                                               // 0x0098(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FDeadLetterConfig                                   DeadLetterConfig;                                        // 0x00C8(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FEnvironmentResponse                                Environment;                                             // 0x00D8(0x0070) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              kMSKeyArn;                                               // 0x0148(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTracingConfigResponse                              TracingConfig;                                           // 0x0158(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R7N4[0x7];                                   // 0x0159(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              masterArn;                                               // 0x0160(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              revisionId;                                              // 0x0170(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAWSLayer>                                   layers;                                                  // 0x0180(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EAWSState                                                  State;                                                   // 0x0190(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1AAX[0x7];                                   // 0x0191(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              stateReason;                                             // 0x0198(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSStateReasonCode                                        stateReasonCode;                                         // 0x01A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSLastUpdateStatus                                       lastUpdateStatus;                                        // 0x01A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SH8P[0x6];                                   // 0x01AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              lastUpdateStatusReason;                                  // 0x01B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSLastUpdateStatusReasonCode                             lastUpdateStatusReasonCode;                              // 0x01C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6AFG[0x7];                                   // 0x01C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFileSystemConfig>                           fileSystemConfigs;                                       // 0x01C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EAWSLambdaPackageType                                      packageType;                                             // 0x01D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RWQI[0x7];                                   // 0x01D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAWSLambdaImageConfigResponse                       imageConfigResponse;                                     // 0x01E0(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              signingProfileVersionArn;                                // 0x0230(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              signingJobArn;                                           // 0x0240(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.GetFunctionEventInvokeConfigRequest
	 * Size -> 0x0020
	 */
	struct FGetFunctionEventInvokeConfigRequest
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              qualifier;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.GetFunctionEventInvokeConfigResult
	 * Size -> 0x0040
	 */
	struct FGetFunctionEventInvokeConfigResult
	{
	public:
		struct FDateTime                                           lastModified;                                            // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              functionArn;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    maximumRetryAttempts;                                    // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    maximumEventAgeInSeconds;                                // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDestinationConfig                                  DestinationConfig;                                       // 0x0020(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.GetFunctionRequest
	 * Size -> 0x0020
	 */
	struct FGetFunctionRequest
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              qualifier;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.GetFunctionResult
	 * Size -> 0x02E8
	 */
	struct FGetFunctionResult
	{
	public:
		struct FFunctionConfiguration                              configuration;                                           // 0x0000(0x0250) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FFunctionCodeLocation                               code;                                                    // 0x0250(0x0040) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         Tags;                                                    // 0x0290(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FConcurrency                                        Concurrency;                                             // 0x02E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5K8K[0x4];                                   // 0x02E4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Lambda.GetLayerVersionByArnRequest
	 * Size -> 0x0010
	 */
	struct FGetLayerVersionByArnRequest
	{
	public:
		class FString                                              arn;                                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.LayerVersionContentOutput
	 * Size -> 0x0048
	 */
	struct FLayerVersionContentOutput
	{
	public:
		class FString                                              Location;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              codeSha256;                                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    codeSize;                                                // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              signingProfileVersionArn;                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              signingJobArn;                                           // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.GetLayerVersionByArnResult
	 * Size -> 0x00B0
	 */
	struct FGetLayerVersionByArnResult
	{
	public:
		struct FLayerVersionContentOutput                          content;                                                 // 0x0000(0x0048) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              layerArn;                                                // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              layerVersionArn;                                         // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              createdDate;                                             // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    Version;                                                 // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<EAWSRuntime>                                        compatibleRuntimes;                                      // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              licenseInfo;                                             // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.GetLayerVersionPolicyRequest
	 * Size -> 0x0018
	 */
	struct FGetLayerVersionPolicyRequest
	{
	public:
		class FString                                              LayerName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    versionNumber;                                           // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.GetLayerVersionPolicyResult
	 * Size -> 0x0020
	 */
	struct FGetLayerVersionPolicyResult
	{
	public:
		class FString                                              policy;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              revisionId;                                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.GetLayerVersionRequest
	 * Size -> 0x0018
	 */
	struct FGetLayerVersionRequest
	{
	public:
		class FString                                              LayerName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    versionNumber;                                           // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.GetLayerVersionResult
	 * Size -> 0x00B0
	 */
	struct FGetLayerVersionResult
	{
	public:
		struct FLayerVersionContentOutput                          content;                                                 // 0x0000(0x0048) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              layerArn;                                                // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              layerVersionArn;                                         // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              createdDate;                                             // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    Version;                                                 // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<EAWSRuntime>                                        compatibleRuntimes;                                      // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              licenseInfo;                                             // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.GetPolicyRequest
	 * Size -> 0x0020
	 */
	struct FGetPolicyRequest
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              qualifier;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.GetPolicyResult
	 * Size -> 0x0020
	 */
	struct FGetPolicyResult
	{
	public:
		class FString                                              policy;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              revisionId;                                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.GetProvisionedConcurrencyConfigRequest
	 * Size -> 0x0020
	 */
	struct FGetProvisionedConcurrencyConfigRequest
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              qualifier;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.GetProvisionedConcurrencyConfigResult
	 * Size -> 0x0030
	 */
	struct FGetProvisionedConcurrencyConfigResult
	{
	public:
		int32_t                                                    requestedProvisionedConcurrentExecutions;                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    availableProvisionedConcurrentExecutions;                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    allocatedProvisionedConcurrentExecutions;                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSProvisionedConcurrencyStatusEnum                       status;                                                  // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HY3X[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              statusReason;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              lastModified;                                            // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.InvalidParameterValueException
	 * Size -> 0x0020
	 */
	struct FInvalidParameterValueException
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.InvalidRequestContentException
	 * Size -> 0x0020
	 */
	struct FInvalidRequestContentException
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.InvalidRuntimeException
	 * Size -> 0x0020
	 */
	struct FInvalidRuntimeException
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.InvalidSecurityGroupIDException
	 * Size -> 0x0020
	 */
	struct FInvalidSecurityGroupIDException
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.InvalidSubnetIDException
	 * Size -> 0x0020
	 */
	struct FInvalidSubnetIDException
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.InvalidZipFileException
	 * Size -> 0x0020
	 */
	struct FInvalidZipFileException
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.InvokeRequest
	 * Size -> 0x0058
	 */
	struct FInvokeRequest
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSInvocationType                                         invocationType;                                          // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSLogType                                                logType;                                                 // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KJS7[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              clientContext;                                           // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              qualifier;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Body;                                                    // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              contentType;                                             // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.InvokeResult
	 * Size -> 0x0048
	 */
	struct FInvokeResult
	{
	public:
		int32_t                                                    statusCode;                                              // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XSXX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              functionError;                                           // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              logResult;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Payload;                                                 // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              executedVersion;                                         // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.KMSAccessDeniedException
	 * Size -> 0x0020
	 */
	struct FKMSAccessDeniedException
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.KMSDisabledException
	 * Size -> 0x0020
	 */
	struct FKMSDisabledException
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.KMSInvalidStateException
	 * Size -> 0x0020
	 */
	struct FKMSInvalidStateException
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.KMSNotFoundException
	 * Size -> 0x0020
	 */
	struct FKMSNotFoundException
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.LambdaCreateAliasRequest
	 * Size -> 0x0090
	 */
	struct FLambdaCreateAliasRequest
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              functionVersion;                                         // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAliasRoutingConfiguration                          routingConfig;                                           // 0x0040(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.LambdaCreateAliasResult
	 * Size -> 0x00A0
	 */
	struct FLambdaCreateAliasResult
	{
	public:
		class FString                                              aliasArn;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              functionVersion;                                         // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAliasRoutingConfiguration                          routingConfig;                                           // 0x0040(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              revisionId;                                              // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.LambdaDeleteAliasRequest
	 * Size -> 0x0020
	 */
	struct FLambdaDeleteAliasRequest
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.LambdaListAliasesRequest
	 * Size -> 0x0038
	 */
	struct FLambdaListAliasesRequest
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              functionVersion;                                         // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              marker;                                                  // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    maxItems;                                                // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SRKF[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Lambda.LambdaListAliasesResult
	 * Size -> 0x0020
	 */
	struct FLambdaListAliasesResult
	{
	public:
		class FString                                              nextMarker;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAliasConfiguration>                         aliases;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.LambdaTagResourceRequest
	 * Size -> 0x0060
	 */
	struct FLambdaTagResourceRequest
	{
	public:
		class FString                                              resource;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         Tags;                                                    // 0x0010(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.LambdaUntagResourceRequest
	 * Size -> 0x0020
	 */
	struct FLambdaUntagResourceRequest
	{
	public:
		class FString                                              resource;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      tagKeys;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.LambdaUpdateAliasRequest
	 * Size -> 0x00A0
	 */
	struct FLambdaUpdateAliasRequest
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              functionVersion;                                         // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAliasRoutingConfiguration                          routingConfig;                                           // 0x0040(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              revisionId;                                              // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.LambdaUpdateAliasResult
	 * Size -> 0x00A0
	 */
	struct FLambdaUpdateAliasResult
	{
	public:
		class FString                                              aliasArn;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              functionVersion;                                         // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAliasRoutingConfiguration                          routingConfig;                                           // 0x0040(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              revisionId;                                              // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.LayerVersionsListItem
	 * Size -> 0x0058
	 */
	struct FLayerVersionsListItem
	{
	public:
		class FString                                              layerVersionArn;                                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    Version;                                                 // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              createdDate;                                             // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<EAWSRuntime>                                        compatibleRuntimes;                                      // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              licenseInfo;                                             // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.LayersListItem
	 * Size -> 0x0078
	 */
	struct FLayersListItem
	{
	public:
		class FString                                              LayerName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              layerArn;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLayerVersionsListItem                              latestMatchingVersion;                                   // 0x0020(0x0058) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.LayerVersionContentInput
	 * Size -> 0x0040
	 */
	struct FLayerVersionContentInput
	{
	public:
		class FString                                              S3Bucket;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              S3Key;                                                   // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              S3ObjectVersion;                                         // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              zipFile;                                                 // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.ListEventSourceMappingsRequest
	 * Size -> 0x0038
	 */
	struct FListEventSourceMappingsRequest
	{
	public:
		class FString                                              eventSourceArn;                                          // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FunctionName;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              marker;                                                  // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    maxItems;                                                // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K0AX[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Lambda.ListEventSourceMappingsResult
	 * Size -> 0x0020
	 */
	struct FListEventSourceMappingsResult
	{
	public:
		class FString                                              nextMarker;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FEventSourceMappingConfiguration>            eventSourceMappings;                                     // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.ListFunctionEventInvokeConfigsRequest
	 * Size -> 0x0028
	 */
	struct FListFunctionEventInvokeConfigsRequest
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              marker;                                                  // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    maxItems;                                                // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R2KF[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Lambda.ListFunctionEventInvokeConfigsResult
	 * Size -> 0x0020
	 */
	struct FListFunctionEventInvokeConfigsResult
	{
	public:
		TArray<struct FFunctionEventInvokeConfig>                  functionEventInvokeConfigs;                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              nextMarker;                                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.ListFunctionsRequest
	 * Size -> 0x0030
	 */
	struct FListFunctionsRequest
	{
	public:
		class FString                                              masterRegion;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSFunctionVersion                                        functionVersion;                                         // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_65WW[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              marker;                                                  // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    maxItems;                                                // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VJZO[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Lambda.ListFunctionsResult
	 * Size -> 0x0020
	 */
	struct FListFunctionsResult
	{
	public:
		class FString                                              nextMarker;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FFunctionConfiguration>                      functions;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.ListLayersRequest
	 * Size -> 0x0020
	 */
	struct FListLayersRequest
	{
	public:
		EAWSRuntime                                                compatibleRuntime;                                       // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HL88[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              marker;                                                  // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    maxItems;                                                // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H5GP[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Lambda.ListLayersResult
	 * Size -> 0x0020
	 */
	struct FListLayersResult
	{
	public:
		class FString                                              nextMarker;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FLayersListItem>                             layers;                                                  // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.ListLayerVersionsRequest
	 * Size -> 0x0030
	 */
	struct FListLayerVersionsRequest
	{
	public:
		EAWSRuntime                                                compatibleRuntime;                                       // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OHZK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LayerName;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              marker;                                                  // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    maxItems;                                                // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_43DB[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Lambda.ListLayerVersionsResult
	 * Size -> 0x0020
	 */
	struct FListLayerVersionsResult
	{
	public:
		class FString                                              nextMarker;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FLayerVersionsListItem>                      layerVersions;                                           // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.ListProvisionedConcurrencyConfigsRequest
	 * Size -> 0x0028
	 */
	struct FListProvisionedConcurrencyConfigsRequest
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              marker;                                                  // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    maxItems;                                                // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_60QL[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Lambda.ProvisionedConcurrencyConfigListItem
	 * Size -> 0x0040
	 */
	struct FProvisionedConcurrencyConfigListItem
	{
	public:
		class FString                                              functionArn;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    requestedProvisionedConcurrentExecutions;                // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    availableProvisionedConcurrentExecutions;                // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    allocatedProvisionedConcurrentExecutions;                // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSProvisionedConcurrencyStatusEnum                       status;                                                  // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MEYB[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              statusReason;                                            // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              lastModified;                                            // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.ListProvisionedConcurrencyConfigsResult
	 * Size -> 0x0020
	 */
	struct FListProvisionedConcurrencyConfigsResult
	{
	public:
		TArray<struct FProvisionedConcurrencyConfigListItem>       provisionedConcurrencyConfigs;                           // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              nextMarker;                                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.ListTagsRequest
	 * Size -> 0x0010
	 */
	struct FListTagsRequest
	{
	public:
		class FString                                              resource;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.ListTagsResult
	 * Size -> 0x0050
	 */
	struct FListTagsResult
	{
	public:
		TMap<class FString, class FString>                         Tags;                                                    // 0x0000(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.ListVersionsByFunctionRequest
	 * Size -> 0x0028
	 */
	struct FListVersionsByFunctionRequest
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              marker;                                                  // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    maxItems;                                                // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z8BS[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Lambda.ListVersionsByFunctionResult
	 * Size -> 0x0020
	 */
	struct FListVersionsByFunctionResult
	{
	public:
		class FString                                              nextMarker;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FFunctionConfiguration>                      versions;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.PolicyLengthExceededException
	 * Size -> 0x0020
	 */
	struct FPolicyLengthExceededException
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.PreconditionFailedException
	 * Size -> 0x0020
	 */
	struct FPreconditionFailedException
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.ProvisionedConcurrencyConfigNotFoundException
	 * Size -> 0x0020
	 */
	struct FProvisionedConcurrencyConfigNotFoundException
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.PublishLayerVersionRequest
	 * Size -> 0x0080
	 */
	struct FPublishLayerVersionRequest
	{
	public:
		class FString                                              LayerName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLayerVersionContentInput                           content;                                                 // 0x0020(0x0040) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<EAWSRuntime>                                        compatibleRuntimes;                                      // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              licenseInfo;                                             // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.PublishLayerVersionResult
	 * Size -> 0x00B0
	 */
	struct FPublishLayerVersionResult
	{
	public:
		struct FLayerVersionContentOutput                          content;                                                 // 0x0000(0x0048) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              layerArn;                                                // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              layerVersionArn;                                         // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              createdDate;                                             // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    Version;                                                 // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<EAWSRuntime>                                        compatibleRuntimes;                                      // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              licenseInfo;                                             // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.PublishVersionRequest
	 * Size -> 0x0040
	 */
	struct FPublishVersionRequest
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              codeSha256;                                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              revisionId;                                              // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.PublishVersionResult
	 * Size -> 0x0250
	 */
	struct FPublishVersionResult
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              functionArn;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSRuntime                                                runtime;                                                 // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D9FY[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Role;                                                    // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              handler;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    codeSize;                                                // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Timeout;                                                 // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    memorySize;                                              // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              lastModified;                                            // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              codeSha256;                                              // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Version;                                                 // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVpcConfigResponse                                  VpcConfig;                                               // 0x0098(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FDeadLetterConfig                                   DeadLetterConfig;                                        // 0x00C8(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FEnvironmentResponse                                Environment;                                             // 0x00D8(0x0070) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              kMSKeyArn;                                               // 0x0148(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTracingConfigResponse                              TracingConfig;                                           // 0x0158(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AH9R[0x7];                                   // 0x0159(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              masterArn;                                               // 0x0160(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              revisionId;                                              // 0x0170(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAWSLayer>                                   layers;                                                  // 0x0180(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EAWSState                                                  State;                                                   // 0x0190(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BV77[0x7];                                   // 0x0191(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              stateReason;                                             // 0x0198(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSStateReasonCode                                        stateReasonCode;                                         // 0x01A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSLastUpdateStatus                                       lastUpdateStatus;                                        // 0x01A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IQXR[0x6];                                   // 0x01AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              lastUpdateStatusReason;                                  // 0x01B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSLastUpdateStatusReasonCode                             lastUpdateStatusReasonCode;                              // 0x01C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R52Q[0x7];                                   // 0x01C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFileSystemConfig>                           fileSystemConfigs;                                       // 0x01C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EAWSLambdaPackageType                                      packageType;                                             // 0x01D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SNRF[0x7];                                   // 0x01D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAWSLambdaImageConfigResponse                       imageConfigResponse;                                     // 0x01E0(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              signingProfileVersionArn;                                // 0x0230(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              signingJobArn;                                           // 0x0240(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.PutFunctionConcurrencyRequest
	 * Size -> 0x0018
	 */
	struct FPutFunctionConcurrencyRequest
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    reservedConcurrentExecutions;                            // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TCFG[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Lambda.PutFunctionConcurrencyResult
	 * Size -> 0x0004
	 */
	struct FPutFunctionConcurrencyResult
	{
	public:
		int32_t                                                    reservedConcurrentExecutions;                            // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.PutFunctionEventInvokeConfigRequest
	 * Size -> 0x0048
	 */
	struct FPutFunctionEventInvokeConfigRequest
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              qualifier;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    maximumRetryAttempts;                                    // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    maximumEventAgeInSeconds;                                // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDestinationConfig                                  DestinationConfig;                                       // 0x0028(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.PutFunctionEventInvokeConfigResult
	 * Size -> 0x0040
	 */
	struct FPutFunctionEventInvokeConfigResult
	{
	public:
		struct FDateTime                                           lastModified;                                            // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              functionArn;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    maximumRetryAttempts;                                    // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    maximumEventAgeInSeconds;                                // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDestinationConfig                                  DestinationConfig;                                       // 0x0020(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.PutProvisionedConcurrencyConfigRequest
	 * Size -> 0x0028
	 */
	struct FPutProvisionedConcurrencyConfigRequest
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              qualifier;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    provisionedConcurrentExecutions;                         // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_39CQ[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Lambda.PutProvisionedConcurrencyConfigResult
	 * Size -> 0x0030
	 */
	struct FPutProvisionedConcurrencyConfigResult
	{
	public:
		int32_t                                                    requestedProvisionedConcurrentExecutions;                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    availableProvisionedConcurrentExecutions;                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    allocatedProvisionedConcurrentExecutions;                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSProvisionedConcurrencyStatusEnum                       status;                                                  // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SD2T[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              statusReason;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              lastModified;                                            // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.RemoveLayerVersionPermissionRequest
	 * Size -> 0x0038
	 */
	struct FRemoveLayerVersionPermissionRequest
	{
	public:
		class FString                                              LayerName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    versionNumber;                                           // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              statementId;                                             // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              revisionId;                                              // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.RemovePermissionRequest
	 * Size -> 0x0040
	 */
	struct FRemovePermissionRequest
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              statementId;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              qualifier;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              revisionId;                                              // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.RequestTooLargeException
	 * Size -> 0x0020
	 */
	struct FRequestTooLargeException
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.ResourceConflictException
	 * Size -> 0x0020
	 */
	struct FResourceConflictException
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.ResourceInUseException
	 * Size -> 0x0020
	 */
	struct FResourceInUseException
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.ResourceNotFoundException
	 * Size -> 0x0020
	 */
	struct FResourceNotFoundException
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.ResourceNotReadyException
	 * Size -> 0x0020
	 */
	struct FResourceNotReadyException
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.ServiceException
	 * Size -> 0x0020
	 */
	struct FServiceException
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.SubnetIPAddressLimitReachedException
	 * Size -> 0x0020
	 */
	struct FSubnetIPAddressLimitReachedException
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.TooManyRequestsException
	 * Size -> 0x0038
	 */
	struct FTooManyRequestsException
	{
	public:
		class FString                                              retryAfterSeconds;                                       // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Type;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EThrottleReason                                            Reason;                                                  // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F763[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Lambda.UnsupportedMediaTypeException
	 * Size -> 0x0020
	 */
	struct FUnsupportedMediaTypeException
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.UpdateEventSourceMappingRequest
	 * Size -> 0x0088
	 */
	struct FUpdateEventSourceMappingRequest
	{
	public:
		class FString                                              UUID;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FunctionName;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Enabled;                                                 // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M5CI[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    batchSize;                                               // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    maximumBatchingWindowInSeconds;                          // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NN94[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDestinationConfig                                  DestinationConfig;                                       // 0x0030(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    maximumRecordAgeInSeconds;                               // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bisectBatchOnFunctionError;                              // 0x0054(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SQAJ[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    maximumRetryAttempts;                                    // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    parallelizationFactor;                                   // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAWSLambdaSourceAccessConfiguration>         sourceAccessConfigurations;                              // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    tumblingWindowInSeconds;                                 // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7XD2[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EAWSLambdaFunctionResponseType>                     functionResponseTypes;                                   // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.UpdateEventSourceMappingResult
	 * Size -> 0x0148
	 */
	struct FUpdateEventSourceMappingResult
	{
	public:
		class FString                                              UUID;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ES3EventSourcePosition                                     startingPosition;                                        // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UHQ6[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           startingPositionTimestamp;                               // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    batchSize;                                               // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    maximumBatchingWindowInSeconds;                          // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    parallelizationFactor;                                   // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PUIO[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              eventSourceArn;                                          // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              functionArn;                                             // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           lastModified;                                            // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              lastProcessingResult;                                    // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              State;                                                   // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              stateTransitionReason;                                   // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDestinationConfig                                  DestinationConfig;                                       // 0x0088(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<class FString>                                      topics;                                                  // 0x00A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      queues;                                                  // 0x00B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAWSLambdaSourceAccessConfiguration>         sourceAccessConfigurations;                              // 0x00C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FAWSLambdaSelfManagedEventSource                    selfManagedEventSource;                                  // 0x00D8(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    maximumRecordAgeInSeconds;                               // 0x0128(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bisectBatchOnFunctionError;                              // 0x012C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EWMD[0x3];                                   // 0x012D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    maximumRetryAttempts;                                    // 0x0130(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    tumblingWindowInSeconds;                                 // 0x0134(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<EAWSLambdaFunctionResponseType>                     functionResponseTypes;                                   // 0x0138(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.UpdateFunctionCodeRequest
	 * Size -> 0x0078
	 */
	struct FUpdateFunctionCodeRequest
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              zipFile;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              S3Bucket;                                                // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              S3Key;                                                   // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              S3ObjectVersion;                                         // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              imageUri;                                                // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       publish;                                                 // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       dryRun;                                                  // 0x0061(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QQNT[0x6];                                   // 0x0062(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              revisionId;                                              // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.UpdateFunctionCodeResult
	 * Size -> 0x0250
	 */
	struct FUpdateFunctionCodeResult
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              functionArn;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSRuntime                                                runtime;                                                 // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O548[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Role;                                                    // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              handler;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    codeSize;                                                // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Timeout;                                                 // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    memorySize;                                              // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              lastModified;                                            // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              codeSha256;                                              // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Version;                                                 // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVpcConfigResponse                                  VpcConfig;                                               // 0x0098(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FDeadLetterConfig                                   DeadLetterConfig;                                        // 0x00C8(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FEnvironmentResponse                                Environment;                                             // 0x00D8(0x0070) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              kMSKeyArn;                                               // 0x0148(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTracingConfigResponse                              TracingConfig;                                           // 0x0158(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5WAE[0x7];                                   // 0x0159(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              masterArn;                                               // 0x0160(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              revisionId;                                              // 0x0170(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAWSLayer>                                   layers;                                                  // 0x0180(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EAWSState                                                  State;                                                   // 0x0190(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H2AN[0x7];                                   // 0x0191(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              stateReason;                                             // 0x0198(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSStateReasonCode                                        stateReasonCode;                                         // 0x01A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSLastUpdateStatus                                       lastUpdateStatus;                                        // 0x01A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BLDC[0x6];                                   // 0x01AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              lastUpdateStatusReason;                                  // 0x01B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSLastUpdateStatusReasonCode                             lastUpdateStatusReasonCode;                              // 0x01C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EA40[0x7];                                   // 0x01C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFileSystemConfig>                           fileSystemConfigs;                                       // 0x01C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EAWSLambdaPackageType                                      packageType;                                             // 0x01D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZGSM[0x7];                                   // 0x01D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAWSLambdaImageConfigResponse                       imageConfigResponse;                                     // 0x01E0(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              signingProfileVersionArn;                                // 0x0230(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              signingJobArn;                                           // 0x0240(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.UpdateFunctionConfigurationRequest
	 * Size -> 0x0148
	 */
	struct FUpdateFunctionConfigurationRequest
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Role;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              handler;                                                 // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Timeout;                                                 // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    memorySize;                                              // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVpcConfig                                          VpcConfig;                                               // 0x0048(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FEnvironment                                        Environment;                                             // 0x0068(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EAWSRuntime                                                runtime;                                                 // 0x00B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8ITL[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDeadLetterConfig                                   DeadLetterConfig;                                        // 0x00C0(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              kMSKeyArn;                                               // 0x00D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTracingConfig                                      TracingConfig;                                           // 0x00E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4KDI[0x7];                                   // 0x00E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              revisionId;                                              // 0x00E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      layers;                                                  // 0x00F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FFileSystemConfig>                           fileSystemConfigs;                                       // 0x0108(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FAWSLambdaImageConfig                               imageConfig;                                             // 0x0118(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.UpdateFunctionConfigurationResult
	 * Size -> 0x0250
	 */
	struct FUpdateFunctionConfigurationResult
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              functionArn;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSRuntime                                                runtime;                                                 // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J6VG[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Role;                                                    // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              handler;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    codeSize;                                                // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Timeout;                                                 // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    memorySize;                                              // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              lastModified;                                            // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              codeSha256;                                              // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Version;                                                 // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVpcConfigResponse                                  VpcConfig;                                               // 0x0098(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FDeadLetterConfig                                   DeadLetterConfig;                                        // 0x00C8(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FEnvironmentResponse                                Environment;                                             // 0x00D8(0x0070) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              kMSKeyArn;                                               // 0x0148(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTracingConfigResponse                              TracingConfig;                                           // 0x0158(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FAWV[0x7];                                   // 0x0159(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              masterArn;                                               // 0x0160(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              revisionId;                                              // 0x0170(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAWSLayer>                                   layers;                                                  // 0x0180(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EAWSState                                                  State;                                                   // 0x0190(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NRI8[0x7];                                   // 0x0191(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              stateReason;                                             // 0x0198(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSStateReasonCode                                        stateReasonCode;                                         // 0x01A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSLastUpdateStatus                                       lastUpdateStatus;                                        // 0x01A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TT0H[0x6];                                   // 0x01AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              lastUpdateStatusReason;                                  // 0x01B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAWSLastUpdateStatusReasonCode                             lastUpdateStatusReasonCode;                              // 0x01C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PZU6[0x7];                                   // 0x01C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFileSystemConfig>                           fileSystemConfigs;                                       // 0x01C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EAWSLambdaPackageType                                      packageType;                                             // 0x01D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6Z4P[0x7];                                   // 0x01D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAWSLambdaImageConfigResponse                       imageConfigResponse;                                     // 0x01E0(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              signingProfileVersionArn;                                // 0x0230(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              signingJobArn;                                           // 0x0240(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.UpdateFunctionEventInvokeConfigRequest
	 * Size -> 0x0048
	 */
	struct FUpdateFunctionEventInvokeConfigRequest
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              qualifier;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    maximumRetryAttempts;                                    // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    maximumEventAgeInSeconds;                                // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDestinationConfig                                  DestinationConfig;                                       // 0x0028(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lambda.UpdateFunctionEventInvokeConfigResult
	 * Size -> 0x0040
	 */
	struct FUpdateFunctionEventInvokeConfigResult
	{
	public:
		struct FDateTime                                           lastModified;                                            // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              functionArn;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    maximumRetryAttempts;                                    // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    maximumEventAgeInSeconds;                                // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDestinationConfig                                  DestinationConfig;                                       // 0x0020(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
