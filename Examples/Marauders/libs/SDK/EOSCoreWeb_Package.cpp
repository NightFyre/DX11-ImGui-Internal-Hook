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
	 * 		Name   -> Function EOSCoreWeb.EOSWebAuthLibrary.RequestAuthAccessToken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FRequestAuthAccessTokenRequest              Request                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	void UEOSWebAuthLibrary::RequestAuthAccessToken(const class FScriptDelegate& Callback, const struct FRequestAuthAccessTokenRequest& Request)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCoreWeb.EOSWebAuthLibrary.RequestAuthAccessToken");
		
		UEOSWebAuthLibrary_RequestAuthAccessToken_Params params {};
		params.Callback = Callback;
		params.Request = Request;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCoreWeb.EOSWebAuthLibrary.InitiateEpicAuthentication
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FInitiateEpicAuthenticationRequest          Request                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	void UEOSWebAuthLibrary::InitiateEpicAuthentication(const class FScriptDelegate& Callback, const struct FInitiateEpicAuthenticationRequest& Request)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCoreWeb.EOSWebAuthLibrary.InitiateEpicAuthentication");
		
		UEOSWebAuthLibrary_InitiateEpicAuthentication_Params params {};
		params.Callback = Callback;
		params.Request = Request;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSWebAuthLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSWebAuthLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCoreWeb.EOSWebAuthLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCoreWeb.EOSWebConnectLibrary.RequestAccessToken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRequestAccessTokenRequest                  Request                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UEOSWebConnectLibrary::RequestAccessToken(const struct FRequestAccessTokenRequest& Request, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCoreWeb.EOSWebConnectLibrary.RequestAccessToken");
		
		UEOSWebConnectLibrary_RequestAccessToken_Params params {};
		params.Request = Request;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSWebConnectLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSWebConnectLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCoreWeb.EOSWebConnectLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCoreWeb.EOSWebPlayerTicketLibrary.SubmitTicket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      WebApiKey                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSubmitTicketRequest                        Request                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UEOSWebPlayerTicketLibrary::SubmitTicket(const class FString& WebApiKey, const struct FSubmitTicketRequest& Request, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCoreWeb.EOSWebPlayerTicketLibrary.SubmitTicket");
		
		UEOSWebPlayerTicketLibrary_SubmitTicket_Params params {};
		params.WebApiKey = WebApiKey;
		params.Request = Request;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSWebPlayerTicketLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSWebPlayerTicketLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCoreWeb.EOSWebPlayerTicketLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCoreWeb.EOSWebShared.GetPublicIp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UEOSWebShared::GetPublicIp(const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCoreWeb.EOSWebShared.GetPublicIp");
		
		UEOSWebShared_GetPublicIp_Params params {};
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSWebShared.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSWebShared::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCoreWeb.EOSWebShared");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCoreWeb.EOSWebVoiceLibrary.RemoveParticipant
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      AccessToken                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ProductUserId                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      DeploymentId                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      roomName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UEOSWebVoiceLibrary::RemoveParticipant(const class FString& AccessToken, const class FString& ProductUserId, const class FString& DeploymentId, const class FString& roomName, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCoreWeb.EOSWebVoiceLibrary.RemoveParticipant");
		
		UEOSWebVoiceLibrary_RemoveParticipant_Params params {};
		params.AccessToken = AccessToken;
		params.ProductUserId = ProductUserId;
		params.DeploymentId = DeploymentId;
		params.roomName = roomName;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCoreWeb.EOSWebVoiceLibrary.ModifyParticipant
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      AccessToken                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ProductUserId                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      DeploymentId                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      roomName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHardMuted                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UEOSWebVoiceLibrary::ModifyParticipant(const class FString& AccessToken, const class FString& ProductUserId, const class FString& DeploymentId, const class FString& roomName, bool bHardMuted, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCoreWeb.EOSWebVoiceLibrary.ModifyParticipant");
		
		UEOSWebVoiceLibrary_ModifyParticipant_Params params {};
		params.AccessToken = AccessToken;
		params.ProductUserId = ProductUserId;
		params.DeploymentId = DeploymentId;
		params.roomName = roomName;
		params.bHardMuted = bHardMuted;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCoreWeb.EOSWebVoiceLibrary.CreateRoomToken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      AccessToken                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FWebRequestParticipantData>          Participants                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      DeploymentId                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      roomName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UEOSWebVoiceLibrary::CreateRoomToken(const class FString& AccessToken, TArray<struct FWebRequestParticipantData> Participants, const class FString& DeploymentId, const class FString& roomName, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCoreWeb.EOSWebVoiceLibrary.CreateRoomToken");
		
		UEOSWebVoiceLibrary_CreateRoomToken_Params params {};
		params.AccessToken = AccessToken;
		params.Participants = Participants;
		params.DeploymentId = DeploymentId;
		params.roomName = roomName;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSWebVoiceLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSWebVoiceLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCoreWeb.EOSWebVoiceLibrary");
		return ptr;
	}

}


