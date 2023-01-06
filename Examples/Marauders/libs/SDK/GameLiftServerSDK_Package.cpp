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
	 * 		Name   -> Function GameLiftServerSDK.GameLiftServerFunctionLibrary.UpdatePlayerSessionCreationPolicy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGameLiftServerError                               errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EPlayerSessionCreationPolicyServer                 policy                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameLiftServerFunctionLibrary::UpdatePlayerSessionCreationPolicy(bool* Success, EGameLiftServerError* errorType, class FString* ErrorMessage, EPlayerSessionCreationPolicyServer policy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftServerSDK.GameLiftServerFunctionLibrary.UpdatePlayerSessionCreationPolicy");
		
		UGameLiftServerFunctionLibrary_UpdatePlayerSessionCreationPolicy_Params params {};
		params.policy = policy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftServerSDK.GameLiftServerFunctionLibrary.StopMatchBackfill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGameLiftServerError                               errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FStopMatchBackfillRequest                   StopMatchBackfillRequest                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGameLiftServerFunctionLibrary::StopMatchBackfill(bool* Success, EGameLiftServerError* errorType, class FString* ErrorMessage, const struct FStopMatchBackfillRequest& StopMatchBackfillRequest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftServerSDK.GameLiftServerFunctionLibrary.StopMatchBackfill");
		
		UGameLiftServerFunctionLibrary_StopMatchBackfill_Params params {};
		params.StopMatchBackfillRequest = StopMatchBackfillRequest;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftServerSDK.GameLiftServerFunctionLibrary.StartMatchBackfill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGameLiftServerError                               errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FStartMatchBackfillRequestServer            StartMatchBackfillRequestServer                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FStartMatchBackfillResultServer UGameLiftServerFunctionLibrary::StartMatchBackfill(bool* Success, EGameLiftServerError* errorType, class FString* ErrorMessage, const struct FStartMatchBackfillRequestServer& StartMatchBackfillRequestServer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftServerSDK.GameLiftServerFunctionLibrary.StartMatchBackfill");
		
		UGameLiftServerFunctionLibrary_StartMatchBackfill_Params params {};
		params.StartMatchBackfillRequestServer = StartMatchBackfillRequestServer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftServerSDK.GameLiftServerFunctionLibrary.RemovePlayerSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGameLiftServerError                               errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PlayerSessionId                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameLiftServerFunctionLibrary::RemovePlayerSession(bool* Success, EGameLiftServerError* errorType, class FString* ErrorMessage, const class FString& PlayerSessionId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftServerSDK.GameLiftServerFunctionLibrary.RemovePlayerSession");
		
		UGameLiftServerFunctionLibrary_RemovePlayerSession_Params params {};
		params.PlayerSessionId = PlayerSessionId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftServerSDK.GameLiftServerFunctionLibrary.ProcessReady
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGameLiftServerError                               errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UProcessParameters*                          ProcessParameters                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameLiftServerFunctionLibrary::ProcessReady(bool* Success, EGameLiftServerError* errorType, class FString* ErrorMessage, class UProcessParameters* ProcessParameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftServerSDK.GameLiftServerFunctionLibrary.ProcessReady");
		
		UGameLiftServerFunctionLibrary_ProcessReady_Params params {};
		params.ProcessParameters = ProcessParameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftServerSDK.GameLiftServerFunctionLibrary.ProcessEnding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGameLiftServerError                               errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameLiftServerFunctionLibrary::ProcessEnding(bool* Success, EGameLiftServerError* errorType, class FString* ErrorMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftServerSDK.GameLiftServerFunctionLibrary.ProcessEnding");
		
		UGameLiftServerFunctionLibrary_ProcessEnding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftServerSDK.GameLiftServerFunctionLibrary.InitSDK
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGameLiftServerError                               errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameLiftServerFunctionLibrary::InitSDK(bool* Success, EGameLiftServerError* errorType, class FString* ErrorMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftServerSDK.GameLiftServerFunctionLibrary.InitSDK");
		
		UGameLiftServerFunctionLibrary_InitSDK_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftServerSDK.GameLiftServerFunctionLibrary.GetTerminationTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGameLiftServerError                               errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FDateTime UGameLiftServerFunctionLibrary::GetTerminationTime(bool* Success, EGameLiftServerError* errorType, class FString* ErrorMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftServerSDK.GameLiftServerFunctionLibrary.GetTerminationTime");
		
		UGameLiftServerFunctionLibrary_GetTerminationTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftServerSDK.GameLiftServerFunctionLibrary.GetSdkVersion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGameLiftServerError                               errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UGameLiftServerFunctionLibrary::GetSdkVersion(bool* Success, EGameLiftServerError* errorType, class FString* ErrorMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftServerSDK.GameLiftServerFunctionLibrary.GetSdkVersion");
		
		UGameLiftServerFunctionLibrary_GetSdkVersion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftServerSDK.GameLiftServerFunctionLibrary.GetInstanceCertificate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGameLiftServerError                               errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGetInstanceCertificateResult UGameLiftServerFunctionLibrary::GetInstanceCertificate(bool* Success, EGameLiftServerError* errorType, class FString* ErrorMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftServerSDK.GameLiftServerFunctionLibrary.GetInstanceCertificate");
		
		UGameLiftServerFunctionLibrary_GetInstanceCertificate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftServerSDK.GameLiftServerFunctionLibrary.GetGameSessionId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGameLiftServerError                               errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UGameLiftServerFunctionLibrary::GetGameSessionId(bool* Success, EGameLiftServerError* errorType, class FString* ErrorMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftServerSDK.GameLiftServerFunctionLibrary.GetGameSessionId");
		
		UGameLiftServerFunctionLibrary_GetGameSessionId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftServerSDK.GameLiftServerFunctionLibrary.Destroy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGameLiftServerError                               errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameLiftServerFunctionLibrary::Destroy(bool* Success, EGameLiftServerError* errorType, class FString* ErrorMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftServerSDK.GameLiftServerFunctionLibrary.Destroy");
		
		UGameLiftServerFunctionLibrary_Destroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftServerSDK.GameLiftServerFunctionLibrary.DescribePlayerSessions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGameLiftServerError                               errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDescribePlayerSessionsRequestServer        DescribePlayerSessionsRequest                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FDescribePlayerSessionsResultServer UGameLiftServerFunctionLibrary::DescribePlayerSessions(bool* Success, EGameLiftServerError* errorType, class FString* ErrorMessage, const struct FDescribePlayerSessionsRequestServer& DescribePlayerSessionsRequest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftServerSDK.GameLiftServerFunctionLibrary.DescribePlayerSessions");
		
		UGameLiftServerFunctionLibrary_DescribePlayerSessions_Params params {};
		params.DescribePlayerSessionsRequest = DescribePlayerSessionsRequest;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftServerSDK.GameLiftServerFunctionLibrary.ActivateGameSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGameLiftServerError                               errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameLiftServerFunctionLibrary::ActivateGameSession(bool* Success, EGameLiftServerError* errorType, class FString* ErrorMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftServerSDK.GameLiftServerFunctionLibrary.ActivateGameSession");
		
		UGameLiftServerFunctionLibrary_ActivateGameSession_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftServerSDK.GameLiftServerFunctionLibrary.AcceptPlayerSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGameLiftServerError                               errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PlayerSessionId                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameLiftServerFunctionLibrary::AcceptPlayerSession(bool* Success, EGameLiftServerError* errorType, class FString* ErrorMessage, const class FString& PlayerSessionId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftServerSDK.GameLiftServerFunctionLibrary.AcceptPlayerSession");
		
		UGameLiftServerFunctionLibrary_AcceptPlayerSession_Params params {};
		params.PlayerSessionId = PlayerSessionId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameLiftServerFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameLiftServerFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameLiftServerSDK.GameLiftServerFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftServerSDK.ProcessParameters.UpdateGameSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpdateGameSessionServer                    UpdateGameSession                                          (Parm, NativeAccessSpecifierPublic)
	 */
	void UProcessParameters::UpdateGameSession(const struct FUpdateGameSessionServer& UpdateGameSession)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftServerSDK.ProcessParameters.UpdateGameSession");
		
		UProcessParameters_UpdateGameSession_Params params {};
		params.UpdateGameSession = UpdateGameSession;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftServerSDK.ProcessParameters.StartGameSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAWSGameSessionServer                       GameSession                                                (Parm, NativeAccessSpecifierPublic)
	 */
	void UProcessParameters::StartGameSession(const struct FAWSGameSessionServer& GameSession)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftServerSDK.ProcessParameters.StartGameSession");
		
		UProcessParameters_StartGameSession_Params params {};
		params.GameSession = GameSession;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftServerSDK.ProcessParameters.ProcessTerminate
	 * 		Flags  -> ()
	 */
	void UProcessParameters::ProcessTerminate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftServerSDK.ProcessParameters.ProcessTerminate");
		
		UProcessParameters_ProcessTerminate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftServerSDK.ProcessParameters.HealthCheck
	 * 		Flags  -> ()
	 */
	bool UProcessParameters::HealthCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftServerSDK.ProcessParameters.HealthCheck");
		
		UProcessParameters_HealthCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProcessParameters.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProcessParameters::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameLiftServerSDK.ProcessParameters");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftServerSDK.ServerHelper.ServerIPAndPort
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ip                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Port                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UServerHelper::ServerIPAndPort(class UObject* WorldContextObject, class FString* ip, int32_t* Port)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftServerSDK.ServerHelper.ServerIPAndPort");
		
		UServerHelper_ServerIPAndPort_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ip != nullptr)
			*ip = params.ip;
		if (Port != nullptr)
			*Port = params.Port;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftServerSDK.ServerHelper.QuitServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Force                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UServerHelper::QuitServer(bool Force)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftServerSDK.ServerHelper.QuitServer");
		
		UServerHelper_QuitServer_Params params {};
		params.Force = Force;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftServerSDK.ServerHelper.LogFilePath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      LogFilePath                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UServerHelper::LogFilePath(class FString* LogFilePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftServerSDK.ServerHelper.LogFilePath");
		
		UServerHelper_LogFilePath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LogFilePath != nullptr)
			*LogFilePath = params.LogFilePath;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UServerHelper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UServerHelper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameLiftServerSDK.ServerHelper");
		return ptr;
	}

}


