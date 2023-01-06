/**
 * Name: RaidGame
 * Version: 1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JWTPlugin.JWTGenerator.setType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Type                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UJWTGenerator::setType(const class FString& Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JWTPlugin.JWTGenerator.setType");
		
		UJWTGenerator_setType_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JWTPlugin.JWTGenerator.setSubject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      subject                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UJWTGenerator::setSubject(const class FString& subject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JWTPlugin.JWTGenerator.setSubject");
		
		UJWTGenerator_setSubject_Params params {};
		params.subject = subject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JWTPlugin.JWTGenerator.setNotBefore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Seconds                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UJWTGenerator::setNotBefore(int32_t Seconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JWTPlugin.JWTGenerator.setNotBefore");
		
		UJWTGenerator_setNotBefore_Params params {};
		params.Seconds = Seconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JWTPlugin.JWTGenerator.setKeyID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      keyID                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UJWTGenerator::setKeyID(const class FString& keyID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JWTPlugin.JWTGenerator.setKeyID");
		
		UJWTGenerator_setKeyID_Params params {};
		params.keyID = keyID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JWTPlugin.JWTGenerator.setID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UJWTGenerator::setID(const class FString& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JWTPlugin.JWTGenerator.setID");
		
		UJWTGenerator_setID_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JWTPlugin.JWTGenerator.setContentType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      contentType                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UJWTGenerator::setContentType(const class FString& contentType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JWTPlugin.JWTGenerator.setContentType");
		
		UJWTGenerator_setContentType_Params params {};
		params.contentType = contentType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JWTPlugin.JWTGenerator.setAudience
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Audience                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UJWTGenerator::setAudience(const class FString& Audience)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JWTPlugin.JWTGenerator.setAudience");
		
		UJWTGenerator_setAudience_Params params {};
		params.Audience = Audience;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JWTPlugin.JWTGenerator.generateToken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAlgorithm                                         Algorithm                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IATClaim                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      JWT                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UJWTGenerator::generateToken(const class FString& Key, EAlgorithm Algorithm, bool IATClaim, class FString* JWT)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JWTPlugin.JWTGenerator.generateToken");
		
		UJWTGenerator_generateToken_Params params {};
		params.Key = Key;
		params.Algorithm = Algorithm;
		params.IATClaim = IATClaim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (JWT != nullptr)
			*JWT = params.JWT;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JWTPlugin.JWTGenerator.expireAt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Seconds                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UJWTGenerator::expireAt(int32_t Seconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JWTPlugin.JWTGenerator.expireAt");
		
		UJWTGenerator_expireAt_Params params {};
		params.Seconds = Seconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JWTPlugin.JWTGenerator.addHeaderClaims
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<class FString, class FString>                 Claims                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UJWTGenerator::addHeaderClaims(TMap<class FString, class FString> Claims)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JWTPlugin.JWTGenerator.addHeaderClaims");
		
		UJWTGenerator_addHeaderClaims_Params params {};
		params.Claims = Claims;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JWTPlugin.JWTGenerator.addHeaderClaim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UJWTGenerator::addHeaderClaim(const class FString& Name, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JWTPlugin.JWTGenerator.addHeaderClaim");
		
		UJWTGenerator_addHeaderClaim_Params params {};
		params.Name = Name;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JWTPlugin.JWTGenerator.addClaims
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<class FString, class FString>                 Claims                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UJWTGenerator::addClaims(TMap<class FString, class FString> Claims)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JWTPlugin.JWTGenerator.addClaims");
		
		UJWTGenerator_addClaims_Params params {};
		params.Claims = Claims;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JWTPlugin.JWTGenerator.addClaim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UJWTGenerator::addClaim(const class FString& Name, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JWTPlugin.JWTGenerator.addClaim");
		
		UJWTGenerator_addClaim_Params params {};
		params.Name = Name;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UJWTGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UJWTGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class JWTPlugin.JWTGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JWTPlugin.JWTPluginBPLibrary.GetClaims
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      JWTToken                                                   (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TMap<class FString, class FString> UJWTPluginBPLibrary::GetClaims(const class FString& JWTToken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JWTPlugin.JWTPluginBPLibrary.GetClaims");
		
		UJWTPluginBPLibrary_GetClaims_Params params {};
		params.JWTToken = JWTToken;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JWTPlugin.JWTPluginBPLibrary.CreateVerifier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAlgorithm                                         Algorithm                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UJWTVerifier* UJWTPluginBPLibrary::CreateVerifier(const class FString& Key, EAlgorithm Algorithm)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JWTPlugin.JWTPluginBPLibrary.CreateVerifier");
		
		UJWTPluginBPLibrary_CreateVerifier_Params params {};
		params.Key = Key;
		params.Algorithm = Algorithm;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JWTPlugin.JWTPluginBPLibrary.CreateGenerator
	 * 		Flags  -> ()
	 */
	class UJWTGenerator* UJWTPluginBPLibrary::CreateGenerator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JWTPlugin.JWTPluginBPLibrary.CreateGenerator");
		
		UJWTPluginBPLibrary_CreateGenerator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UJWTPluginBPLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UJWTPluginBPLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class JWTPlugin.JWTPluginBPLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JWTPlugin.JWTVerifier.withSubject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      subject                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UJWTVerifier::withSubject(const class FString& subject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JWTPlugin.JWTVerifier.withSubject");
		
		UJWTVerifier_withSubject_Params params {};
		params.subject = subject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JWTPlugin.JWTVerifier.withIssuer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      issuer                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UJWTVerifier::withIssuer(const class FString& issuer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JWTPlugin.JWTVerifier.withIssuer");
		
		UJWTVerifier_withIssuer_Params params {};
		params.issuer = issuer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JWTPlugin.JWTVerifier.withID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UJWTVerifier::withID(const class FString& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JWTPlugin.JWTVerifier.withID");
		
		UJWTVerifier_withID_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JWTPlugin.JWTVerifier.withCustomClaim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UJWTVerifier::withCustomClaim(const class FString& Name, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JWTPlugin.JWTVerifier.withCustomClaim");
		
		UJWTVerifier_withCustomClaim_Params params {};
		params.Name = Name;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JWTPlugin.JWTVerifier.withAudience
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Audience                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UJWTVerifier::withAudience(const class FString& Audience)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JWTPlugin.JWTVerifier.withAudience");
		
		UJWTVerifier_withAudience_Params params {};
		params.Audience = Audience;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JWTPlugin.JWTVerifier.verifyJWT
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      JWT                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UJWTVerifier::verifyJWT(const class FString& JWT)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JWTPlugin.JWTVerifier.verifyJWT");
		
		UJWTVerifier_verifyJWT_Params params {};
		params.JWT = JWT;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JWTPlugin.JWTVerifier.setLeeway
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            leeway                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UJWTVerifier::setLeeway(int32_t leeway)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JWTPlugin.JWTVerifier.setLeeway");
		
		UJWTVerifier_setLeeway_Params params {};
		params.leeway = leeway;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UJWTVerifier.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UJWTVerifier::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class JWTPlugin.JWTVerifier");
		return ptr;
	}

}


