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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class JWTPlugin.JWTGenerator
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UJWTGenerator : public UObject
	{
	public:
		unsigned char                                              UnknownData_8RDN[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (PADDING)

	public:
		void setType(const class FString& Type);
		void setSubject(const class FString& subject);
		void setNotBefore(int32_t Seconds);
		void setKeyID(const class FString& keyID);
		void setID(const class FString& ID);
		void setContentType(const class FString& contentType);
		void setAudience(const class FString& Audience);
		void generateToken(const class FString& Key, EAlgorithm Algorithm, bool IATClaim, class FString* JWT);
		void expireAt(int32_t Seconds);
		void addHeaderClaims(TMap<class FString, class FString> Claims);
		void addHeaderClaim(const class FString& Name, const class FString& Value);
		void addClaims(TMap<class FString, class FString> Claims);
		void addClaim(const class FString& Name, const class FString& Value);
		static UClass* StaticClass();
	};

	/**
	 * Class JWTPlugin.JWTPluginBPLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UJWTPluginBPLibrary : public UBlueprintFunctionLibrary
	{
	public:
		TMap<class FString, class FString> GetClaims(const class FString& JWTToken);
		class UJWTVerifier* CreateVerifier(const class FString& Key, EAlgorithm Algorithm);
		class UJWTGenerator* CreateGenerator();
		static UClass* StaticClass();
	};

	/**
	 * Class JWTPlugin.JWTVerifier
	 * Size -> 0x0090 (FullSize[0x00B8] - InheritedSize[0x0028])
	 */
	class UJWTVerifier : public UObject
	{
	public:
		unsigned char                                              UnknownData_71ME[0x90];                                  // 0x0028(0x0090) MISSED OFFSET (PADDING)

	public:
		void withSubject(const class FString& subject);
		void withIssuer(const class FString& issuer);
		void withID(const class FString& ID);
		void withCustomClaim(const class FString& Name, const class FString& Value);
		void withAudience(const class FString& Audience);
		bool verifyJWT(const class FString& JWT);
		void setLeeway(int32_t leeway);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
