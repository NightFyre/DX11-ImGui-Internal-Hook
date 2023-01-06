#pragma once

/**
 * Name: RaidGame
 * Version: 1
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function JWTPlugin.JWTGenerator.setType
	 */
	struct UJWTGenerator_setType_Params
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JWTPlugin.JWTGenerator.setSubject
	 */
	struct UJWTGenerator_setSubject_Params
	{
	public:
		class FString                                              subject;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JWTPlugin.JWTGenerator.setNotBefore
	 */
	struct UJWTGenerator_setNotBefore_Params
	{
	public:
		int32_t                                                    Seconds;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JWTPlugin.JWTGenerator.setKeyID
	 */
	struct UJWTGenerator_setKeyID_Params
	{
	public:
		class FString                                              keyID;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JWTPlugin.JWTGenerator.setID
	 */
	struct UJWTGenerator_setID_Params
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JWTPlugin.JWTGenerator.setContentType
	 */
	struct UJWTGenerator_setContentType_Params
	{
	public:
		class FString                                              contentType;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JWTPlugin.JWTGenerator.setAudience
	 */
	struct UJWTGenerator_setAudience_Params
	{
	public:
		class FString                                              Audience;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JWTPlugin.JWTGenerator.generateToken
	 */
	struct UJWTGenerator_generateToken_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAlgorithm                                                 Algorithm;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IATClaim;                                                // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9PBP[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              JWT;                                                     // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JWTPlugin.JWTGenerator.expireAt
	 */
	struct UJWTGenerator_expireAt_Params
	{
	public:
		int32_t                                                    Seconds;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JWTPlugin.JWTGenerator.addHeaderClaims
	 */
	struct UJWTGenerator_addHeaderClaims_Params
	{
	public:
		TMap<class FString, class FString>                         Claims;                                                  // 0x0000(0x0050)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JWTPlugin.JWTGenerator.addHeaderClaim
	 */
	struct UJWTGenerator_addHeaderClaim_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JWTPlugin.JWTGenerator.addClaims
	 */
	struct UJWTGenerator_addClaims_Params
	{
	public:
		TMap<class FString, class FString>                         Claims;                                                  // 0x0000(0x0050)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JWTPlugin.JWTGenerator.addClaim
	 */
	struct UJWTGenerator_addClaim_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JWTPlugin.JWTPluginBPLibrary.GetClaims
	 */
	struct UJWTPluginBPLibrary_GetClaims_Params
	{
	public:
		class FString                                              JWTToken;                                                // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>                         ReturnValue;                                             // 0x0010(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JWTPlugin.JWTPluginBPLibrary.CreateVerifier
	 */
	struct UJWTPluginBPLibrary_CreateVerifier_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAlgorithm                                                 Algorithm;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OTAU[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UJWTVerifier*                                        ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JWTPlugin.JWTPluginBPLibrary.CreateGenerator
	 */
	struct UJWTPluginBPLibrary_CreateGenerator_Params
	{
	public:
		class UJWTGenerator*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JWTPlugin.JWTVerifier.withSubject
	 */
	struct UJWTVerifier_withSubject_Params
	{
	public:
		class FString                                              subject;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JWTPlugin.JWTVerifier.withIssuer
	 */
	struct UJWTVerifier_withIssuer_Params
	{
	public:
		class FString                                              issuer;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JWTPlugin.JWTVerifier.withID
	 */
	struct UJWTVerifier_withID_Params
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JWTPlugin.JWTVerifier.withCustomClaim
	 */
	struct UJWTVerifier_withCustomClaim_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JWTPlugin.JWTVerifier.withAudience
	 */
	struct UJWTVerifier_withAudience_Params
	{
	public:
		class FString                                              Audience;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JWTPlugin.JWTVerifier.verifyJWT
	 */
	struct UJWTVerifier_verifyJWT_Params
	{
	public:
		class FString                                              JWT;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JWTPlugin.JWTVerifier.setLeeway
	 */
	struct UJWTVerifier_setLeeway_Params
	{
	public:
		int32_t                                                    leeway;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
