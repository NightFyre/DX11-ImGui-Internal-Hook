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
	 * Enum AWSCore.EAWSPayloadSigningPolicy
	 */
	enum class EAWSPayloadSigningPolicy : uint8_t
	{
		RequestDependent = 0,
		Always           = 1,
		Never            = 2,
		MAX              = 3
	};

	/**
	 * Enum AWSCore.EFollowRedirectsPolicy
	 */
	enum class EFollowRedirectsPolicy : uint8_t
	{
		DEFAULT = 0,
		ALWAYS  = 1,
		NEVER   = 2,
		MAX     = 3
	};

	/**
	 * Enum AWSCore.ETransferLibType
	 */
	enum class ETransferLibType : uint8_t
	{
		DEFAULT_CLIENT  = 0,
		CURL_CLIENT     = 1,
		WIN_INET_CLIENT = 2,
		WIN_HTTP_CLIENT = 3,
		MAX             = 4
	};

	/**
	 * Enum AWSCore.EHttpMethod
	 */
	enum class EHttpMethod : uint8_t
	{
		HTTP_GET    = 0,
		HTTP_POST   = 1,
		HTTP_DELETE = 2,
		HTTP_PUT    = 3,
		HTTP_HEAD   = 4,
		HTTP_PATCH  = 5,
		HTTP_MAX    = 6
	};

	/**
	 * Enum AWSCore.ECryptoErrors
	 */
	enum class ECryptoErrors : uint8_t
	{
		ENCRYPT_CONTENT_ENCRYPTION_KEY_FAILED  = 0,
		DECRYPT_CONTENT_ENCRYPTION_KEY_FAILED  = 1,
		GENERATE_CONTENT_ENCRYPTION_KEY_FAILED = 2,
		MAX                                    = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AWSCore.AWSByteBuffer
	 * Size -> 0x0010
	 */
	struct FAWSByteBuffer
	{
	public:
		class FString                                              byteBuffer;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AWSCore.AWSClientConfiguration
	 * Size -> 0x0160
	 */
	struct FAWSClientConfiguration
	{
	public:
		class FString                                              userAgent;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              scheme;                                                  // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Region;                                                  // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       useDualStack;                                            // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U3SJ[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    maxConnections;                                          // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    httpRequestTimeoutMs;                                    // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    requestTimeoutMs;                                        // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    connectTimeoutMs;                                        // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       enableTcpKeepAlive;                                      // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XFXJ[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    tcpKeepAliveIntervalMs;                                  // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    lowSpeedLimit;                                           // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              endpointOverride;                                        // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              proxyScheme;                                             // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              proxyHost;                                               // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    proxyPort;                                               // 0x0098(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WC0K[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              proxyUserName;                                           // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              proxyPassword;                                           // 0x00B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              proxySSLCertPath;                                        // 0x00C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              proxySSLCertType;                                        // 0x00D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              proxySSLKeyPath;                                         // 0x00E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              proxySSLKeyType;                                         // 0x00F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              proxySSLKeyPassword;                                     // 0x0100(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      nonProxyHosts;                                           // 0x0110(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       verifySSL;                                               // 0x0120(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0I7S[0x7];                                   // 0x0121(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              caPath;                                                  // 0x0128(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              caFile;                                                  // 0x0138(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETransferLibType                                           httpLibOverride;                                         // 0x0148(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFollowRedirectsPolicy                                     followRedirects;                                         // 0x0149(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       disableExpectHeader;                                     // 0x014A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       enableClockSkewAdjustment;                               // 0x014B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       enableHostPrefixInjection;                               // 0x014C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       enableEndpointDiscovery;                                 // 0x014D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IELJ[0x2];                                   // 0x014E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ProfileName;                                             // 0x0150(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AWSCore.AWSCredentials
	 * Size -> 0x0038
	 */
	struct FAWSCredentials
	{
	public:
		class FString                                              accessKeyId;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              secretKey;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              sessionToken;                                            // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           expiration;                                              // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AWSCore.AWSUUID
	 * Size -> 0x0010
	 */
	struct FAWSUUID
	{
	public:
		class FString                                              UUID;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
