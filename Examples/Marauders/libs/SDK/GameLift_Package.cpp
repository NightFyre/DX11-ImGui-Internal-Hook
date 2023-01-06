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
	 * 		Name   -> Function GameLift.GameLiftClientObject.ValidateMatchmakingRuleSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FValidateMatchmakingRuleSetRequest          ValidateMatchmakingRuleSetRequest                          (Parm, NativeAccessSpecifierPublic)
	 * 		struct FValidateMatchmakingRuleSetResult           ValidateMatchmakingRuleSetResult                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::ValidateMatchmakingRuleSet(class UObject* WorldContextObject, bool* Success, const struct FValidateMatchmakingRuleSetRequest& ValidateMatchmakingRuleSetRequest, struct FValidateMatchmakingRuleSetResult* ValidateMatchmakingRuleSetResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.ValidateMatchmakingRuleSet");
		
		UGameLiftClientObject_ValidateMatchmakingRuleSet_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ValidateMatchmakingRuleSetRequest = ValidateMatchmakingRuleSetRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (ValidateMatchmakingRuleSetResult != nullptr)
			*ValidateMatchmakingRuleSetResult = params.ValidateMatchmakingRuleSetResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.UpdateScript
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUpdateScriptRequest                        UpdateScriptRequest                                        (Parm, NativeAccessSpecifierPublic)
	 * 		struct FUpdateScriptResult                         UpdateScriptResult                                         (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::UpdateScript(class UObject* WorldContextObject, bool* Success, const struct FUpdateScriptRequest& UpdateScriptRequest, struct FUpdateScriptResult* UpdateScriptResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.UpdateScript");
		
		UGameLiftClientObject_UpdateScript_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.UpdateScriptRequest = UpdateScriptRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (UpdateScriptResult != nullptr)
			*UpdateScriptResult = params.UpdateScriptResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.UpdateRuntimeConfiguration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUpdateRuntimeConfigurationRequest          UpdateRuntimeConfigurationRequest                          (Parm, NativeAccessSpecifierPublic)
	 * 		struct FUpdateRuntimeConfigurationResult           UpdateRuntimeConfigurationResult                           (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::UpdateRuntimeConfiguration(class UObject* WorldContextObject, bool* Success, const struct FUpdateRuntimeConfigurationRequest& UpdateRuntimeConfigurationRequest, struct FUpdateRuntimeConfigurationResult* UpdateRuntimeConfigurationResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.UpdateRuntimeConfiguration");
		
		UGameLiftClientObject_UpdateRuntimeConfiguration_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.UpdateRuntimeConfigurationRequest = UpdateRuntimeConfigurationRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (UpdateRuntimeConfigurationResult != nullptr)
			*UpdateRuntimeConfigurationResult = params.UpdateRuntimeConfigurationResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.UpdateMatchmakingConfiguration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUpdateMatchmakingConfigurationRequest      UpdateMatchmakingConfigurationRequest                      (Parm, NativeAccessSpecifierPublic)
	 * 		struct FUpdateMatchmakingConfigurationResult       UpdateMatchmakingConfigurationResult                       (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::UpdateMatchmakingConfiguration(class UObject* WorldContextObject, bool* Success, const struct FUpdateMatchmakingConfigurationRequest& UpdateMatchmakingConfigurationRequest, struct FUpdateMatchmakingConfigurationResult* UpdateMatchmakingConfigurationResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.UpdateMatchmakingConfiguration");
		
		UGameLiftClientObject_UpdateMatchmakingConfiguration_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.UpdateMatchmakingConfigurationRequest = UpdateMatchmakingConfigurationRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (UpdateMatchmakingConfigurationResult != nullptr)
			*UpdateMatchmakingConfigurationResult = params.UpdateMatchmakingConfigurationResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.UpdateGameSessionQueue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUpdateGameSessionQueueRequest              UpdateGameSessionQueueRequest                              (Parm, NativeAccessSpecifierPublic)
	 * 		struct FUpdateGameSessionQueueResult               UpdateGameSessionQueueResult                               (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::UpdateGameSessionQueue(class UObject* WorldContextObject, bool* Success, const struct FUpdateGameSessionQueueRequest& UpdateGameSessionQueueRequest, struct FUpdateGameSessionQueueResult* UpdateGameSessionQueueResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.UpdateGameSessionQueue");
		
		UGameLiftClientObject_UpdateGameSessionQueue_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.UpdateGameSessionQueueRequest = UpdateGameSessionQueueRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (UpdateGameSessionQueueResult != nullptr)
			*UpdateGameSessionQueueResult = params.UpdateGameSessionQueueResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.UpdateGameSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUpdateGameSessionRequest                   UpdateGameSessionRequest                                   (Parm, NativeAccessSpecifierPublic)
	 * 		struct FUpdateGameSessionResult                    UpdateGameSessionResult                                    (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::UpdateGameSession(class UObject* WorldContextObject, bool* Success, const struct FUpdateGameSessionRequest& UpdateGameSessionRequest, struct FUpdateGameSessionResult* UpdateGameSessionResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.UpdateGameSession");
		
		UGameLiftClientObject_UpdateGameSession_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.UpdateGameSessionRequest = UpdateGameSessionRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (UpdateGameSessionResult != nullptr)
			*UpdateGameSessionResult = params.UpdateGameSessionResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.UpdateGameServerGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUpdateGameServerGroupRequest               UpdateGameServerGroupRequest                               (Parm, NativeAccessSpecifierPublic)
	 * 		struct FUpdateGameServerGroupResult                UpdateGameServerGroupResult                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::UpdateGameServerGroup(class UObject* WorldContextObject, bool* Success, const struct FUpdateGameServerGroupRequest& UpdateGameServerGroupRequest, struct FUpdateGameServerGroupResult* UpdateGameServerGroupResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.UpdateGameServerGroup");
		
		UGameLiftClientObject_UpdateGameServerGroup_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.UpdateGameServerGroupRequest = UpdateGameServerGroupRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (UpdateGameServerGroupResult != nullptr)
			*UpdateGameServerGroupResult = params.UpdateGameServerGroupResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.UpdateGameServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUpdateGameServerRequest                    UpdateGameServerRequest                                    (Parm, NativeAccessSpecifierPublic)
	 * 		struct FUpdateGameServerResult                     UpdateGameServerResult                                     (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::UpdateGameServer(class UObject* WorldContextObject, bool* Success, const struct FUpdateGameServerRequest& UpdateGameServerRequest, struct FUpdateGameServerResult* UpdateGameServerResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.UpdateGameServer");
		
		UGameLiftClientObject_UpdateGameServer_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.UpdateGameServerRequest = UpdateGameServerRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (UpdateGameServerResult != nullptr)
			*UpdateGameServerResult = params.UpdateGameServerResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.UpdateFleetPortSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUpdateFleetPortSettingsRequest             UpdateFleetPortSettingsRequest                             (Parm, NativeAccessSpecifierPublic)
	 * 		struct FUpdateFleetPortSettingsResult              UpdateFleetPortSettingsResult                              (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::UpdateFleetPortSettings(class UObject* WorldContextObject, bool* Success, const struct FUpdateFleetPortSettingsRequest& UpdateFleetPortSettingsRequest, struct FUpdateFleetPortSettingsResult* UpdateFleetPortSettingsResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.UpdateFleetPortSettings");
		
		UGameLiftClientObject_UpdateFleetPortSettings_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.UpdateFleetPortSettingsRequest = UpdateFleetPortSettingsRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (UpdateFleetPortSettingsResult != nullptr)
			*UpdateFleetPortSettingsResult = params.UpdateFleetPortSettingsResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.UpdateFleetCapacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUpdateFleetCapacityRequest                 UpdateFleetCapacityRequest                                 (Parm, NativeAccessSpecifierPublic)
	 * 		struct FUpdateFleetCapacityResult                  UpdateFleetCapacityResult                                  (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::UpdateFleetCapacity(class UObject* WorldContextObject, bool* Success, const struct FUpdateFleetCapacityRequest& UpdateFleetCapacityRequest, struct FUpdateFleetCapacityResult* UpdateFleetCapacityResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.UpdateFleetCapacity");
		
		UGameLiftClientObject_UpdateFleetCapacity_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.UpdateFleetCapacityRequest = UpdateFleetCapacityRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (UpdateFleetCapacityResult != nullptr)
			*UpdateFleetCapacityResult = params.UpdateFleetCapacityResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.UpdateFleetAttributes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUpdateFleetAttributesRequest               UpdateFleetAttributesRequest                               (Parm, NativeAccessSpecifierPublic)
	 * 		struct FUpdateFleetAttributesResult                UpdateFleetAttributesResult                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::UpdateFleetAttributes(class UObject* WorldContextObject, bool* Success, const struct FUpdateFleetAttributesRequest& UpdateFleetAttributesRequest, struct FUpdateFleetAttributesResult* UpdateFleetAttributesResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.UpdateFleetAttributes");
		
		UGameLiftClientObject_UpdateFleetAttributes_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.UpdateFleetAttributesRequest = UpdateFleetAttributesRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (UpdateFleetAttributesResult != nullptr)
			*UpdateFleetAttributesResult = params.UpdateFleetAttributesResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.UpdateBuild
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUpdateBuildRequest                         UpdateBuildRequest                                         (Parm, NativeAccessSpecifierPublic)
	 * 		struct FUpdateBuildResult                          UpdateBuildResult                                          (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::UpdateBuild(class UObject* WorldContextObject, bool* Success, const struct FUpdateBuildRequest& UpdateBuildRequest, struct FUpdateBuildResult* UpdateBuildResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.UpdateBuild");
		
		UGameLiftClientObject_UpdateBuild_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.UpdateBuildRequest = UpdateBuildRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (UpdateBuildResult != nullptr)
			*UpdateBuildResult = params.UpdateBuildResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.UpdateAlias
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameLiftUpdateAliasRequest                 updateAliasRequest                                         (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameLiftUpdateAliasResult                  updateAliasResult                                          (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::UpdateAlias(class UObject* WorldContextObject, bool* Success, const struct FGameLiftUpdateAliasRequest& updateAliasRequest, struct FGameLiftUpdateAliasResult* updateAliasResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.UpdateAlias");
		
		UGameLiftClientObject_UpdateAlias_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.updateAliasRequest = updateAliasRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (updateAliasResult != nullptr)
			*updateAliasResult = params.updateAliasResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.UntagResource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameLiftUntagResourceRequest               untagResourceRequest                                       (Parm, NativeAccessSpecifierPublic)
	 * 		struct FUntagResourceResult                        UntagResourceResult                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::UntagResource(class UObject* WorldContextObject, bool* Success, const struct FGameLiftUntagResourceRequest& untagResourceRequest, struct FUntagResourceResult* UntagResourceResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.UntagResource");
		
		UGameLiftClientObject_UntagResource_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.untagResourceRequest = untagResourceRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (UntagResourceResult != nullptr)
			*UntagResourceResult = params.UntagResourceResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.TagResource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameLiftTagResourceRequest                 tagResourceRequest                                         (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameLiftTagResourceResult                  tagResourceResult                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::TagResource(class UObject* WorldContextObject, bool* Success, const struct FGameLiftTagResourceRequest& tagResourceRequest, struct FGameLiftTagResourceResult* tagResourceResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.TagResource");
		
		UGameLiftClientObject_TagResource_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.tagResourceRequest = tagResourceRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (tagResourceResult != nullptr)
			*tagResourceResult = params.tagResourceResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.SuspendGameServerGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSuspendGameServerGroupRequest              SuspendGameServerGroupRequest                              (Parm, NativeAccessSpecifierPublic)
	 * 		struct FSuspendGameServerGroupResult               SuspendGameServerGroupResult                               (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::SuspendGameServerGroup(class UObject* WorldContextObject, bool* Success, const struct FSuspendGameServerGroupRequest& SuspendGameServerGroupRequest, struct FSuspendGameServerGroupResult* SuspendGameServerGroupResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.SuspendGameServerGroup");
		
		UGameLiftClientObject_SuspendGameServerGroup_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SuspendGameServerGroupRequest = SuspendGameServerGroupRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (SuspendGameServerGroupResult != nullptr)
			*SuspendGameServerGroupResult = params.SuspendGameServerGroupResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.StopMatchmaking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FStopMatchmakingRequest                     StopMatchmakingRequest                                     (Parm, NativeAccessSpecifierPublic)
	 * 		struct FStopMatchmakingResult                      StopMatchmakingResult                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::StopMatchmaking(class UObject* WorldContextObject, bool* Success, const struct FStopMatchmakingRequest& StopMatchmakingRequest, struct FStopMatchmakingResult* StopMatchmakingResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.StopMatchmaking");
		
		UGameLiftClientObject_StopMatchmaking_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.StopMatchmakingRequest = StopMatchmakingRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (StopMatchmakingResult != nullptr)
			*StopMatchmakingResult = params.StopMatchmakingResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.StopGameSessionPlacement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FStopGameSessionPlacementRequest            StopGameSessionPlacementRequest                            (Parm, NativeAccessSpecifierPublic)
	 * 		struct FStopGameSessionPlacementResult             StopGameSessionPlacementResult                             (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::StopGameSessionPlacement(class UObject* WorldContextObject, bool* Success, const struct FStopGameSessionPlacementRequest& StopGameSessionPlacementRequest, struct FStopGameSessionPlacementResult* StopGameSessionPlacementResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.StopGameSessionPlacement");
		
		UGameLiftClientObject_StopGameSessionPlacement_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.StopGameSessionPlacementRequest = StopGameSessionPlacementRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (StopGameSessionPlacementResult != nullptr)
			*StopGameSessionPlacementResult = params.StopGameSessionPlacementResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.StopFleetActions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FStopFleetActionsRequest                    StopFleetActionsRequest                                    (Parm, NativeAccessSpecifierPublic)
	 * 		struct FStopFleetActionsResult                     StopFleetActionsResult                                     (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::StopFleetActions(class UObject* WorldContextObject, bool* Success, const struct FStopFleetActionsRequest& StopFleetActionsRequest, struct FStopFleetActionsResult* StopFleetActionsResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.StopFleetActions");
		
		UGameLiftClientObject_StopFleetActions_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.StopFleetActionsRequest = StopFleetActionsRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (StopFleetActionsResult != nullptr)
			*StopFleetActionsResult = params.StopFleetActionsResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.StartMatchmaking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FStartMatchmakingRequest                    StartMatchmakingRequest                                    (Parm, NativeAccessSpecifierPublic)
	 * 		struct FStartMatchmakingResult                     StartMatchmakingResult                                     (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::StartMatchmaking(class UObject* WorldContextObject, bool* Success, const struct FStartMatchmakingRequest& StartMatchmakingRequest, struct FStartMatchmakingResult* StartMatchmakingResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.StartMatchmaking");
		
		UGameLiftClientObject_StartMatchmaking_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.StartMatchmakingRequest = StartMatchmakingRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (StartMatchmakingResult != nullptr)
			*StartMatchmakingResult = params.StartMatchmakingResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.StartMatchBackfill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FStartMatchBackfillRequest                  StartMatchBackfillRequest                                  (Parm, NativeAccessSpecifierPublic)
	 * 		struct FStartMatchBackfillResult                   StartMatchBackfillResult                                   (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::StartMatchBackfill(class UObject* WorldContextObject, bool* Success, const struct FStartMatchBackfillRequest& StartMatchBackfillRequest, struct FStartMatchBackfillResult* StartMatchBackfillResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.StartMatchBackfill");
		
		UGameLiftClientObject_StartMatchBackfill_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.StartMatchBackfillRequest = StartMatchBackfillRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (StartMatchBackfillResult != nullptr)
			*StartMatchBackfillResult = params.StartMatchBackfillResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.StartGameSessionPlacement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FStartGameSessionPlacementRequest           StartGameSessionPlacementRequest                           (Parm, NativeAccessSpecifierPublic)
	 * 		struct FStartGameSessionPlacementResult            StartGameSessionPlacementResult                            (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::StartGameSessionPlacement(class UObject* WorldContextObject, bool* Success, const struct FStartGameSessionPlacementRequest& StartGameSessionPlacementRequest, struct FStartGameSessionPlacementResult* StartGameSessionPlacementResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.StartGameSessionPlacement");
		
		UGameLiftClientObject_StartGameSessionPlacement_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.StartGameSessionPlacementRequest = StartGameSessionPlacementRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (StartGameSessionPlacementResult != nullptr)
			*StartGameSessionPlacementResult = params.StartGameSessionPlacementResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.StartFleetActions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FStartFleetActionsRequest                   StartFleetActionsRequest                                   (Parm, NativeAccessSpecifierPublic)
	 * 		struct FStartFleetActionsResult                    StartFleetActionsResult                                    (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::StartFleetActions(class UObject* WorldContextObject, bool* Success, const struct FStartFleetActionsRequest& StartFleetActionsRequest, struct FStartFleetActionsResult* StartFleetActionsResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.StartFleetActions");
		
		UGameLiftClientObject_StartFleetActions_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.StartFleetActionsRequest = StartFleetActionsRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (StartFleetActionsResult != nullptr)
			*StartFleetActionsResult = params.StartFleetActionsResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.SearchGameSessions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSearchGameSessionsRequest                  SearchGameSessionsRequest                                  (Parm, NativeAccessSpecifierPublic)
	 * 		struct FSearchGameSessionsResult                   SearchGameSessionsResult                                   (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::SearchGameSessions(class UObject* WorldContextObject, bool* Success, const struct FSearchGameSessionsRequest& SearchGameSessionsRequest, struct FSearchGameSessionsResult* SearchGameSessionsResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.SearchGameSessions");
		
		UGameLiftClientObject_SearchGameSessions_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SearchGameSessionsRequest = SearchGameSessionsRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (SearchGameSessionsResult != nullptr)
			*SearchGameSessionsResult = params.SearchGameSessionsResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.ResumeGameServerGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FResumeGameServerGroupRequest               ResumeGameServerGroupRequest                               (Parm, NativeAccessSpecifierPublic)
	 * 		struct FResumeGameServerGroupResult                ResumeGameServerGroupResult                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::ResumeGameServerGroup(class UObject* WorldContextObject, bool* Success, const struct FResumeGameServerGroupRequest& ResumeGameServerGroupRequest, struct FResumeGameServerGroupResult* ResumeGameServerGroupResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.ResumeGameServerGroup");
		
		UGameLiftClientObject_ResumeGameServerGroup_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ResumeGameServerGroupRequest = ResumeGameServerGroupRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (ResumeGameServerGroupResult != nullptr)
			*ResumeGameServerGroupResult = params.ResumeGameServerGroupResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.ResolveAlias
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FResolveAliasRequest                        ResolveAliasRequest                                        (Parm, NativeAccessSpecifierPublic)
	 * 		struct FResolveAliasResult                         ResolveAliasResult                                         (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::ResolveAlias(class UObject* WorldContextObject, bool* Success, const struct FResolveAliasRequest& ResolveAliasRequest, struct FResolveAliasResult* ResolveAliasResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.ResolveAlias");
		
		UGameLiftClientObject_ResolveAlias_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ResolveAliasRequest = ResolveAliasRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (ResolveAliasResult != nullptr)
			*ResolveAliasResult = params.ResolveAliasResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.RequestUploadCredentials
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRequestUploadCredentialsRequest            RequestUploadCredentialsRequest                            (Parm, NativeAccessSpecifierPublic)
	 * 		struct FRequestUploadCredentialsResult             RequestUploadCredentialsResult                             (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::RequestUploadCredentials(class UObject* WorldContextObject, bool* Success, const struct FRequestUploadCredentialsRequest& RequestUploadCredentialsRequest, struct FRequestUploadCredentialsResult* RequestUploadCredentialsResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.RequestUploadCredentials");
		
		UGameLiftClientObject_RequestUploadCredentials_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.RequestUploadCredentialsRequest = RequestUploadCredentialsRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (RequestUploadCredentialsResult != nullptr)
			*RequestUploadCredentialsResult = params.RequestUploadCredentialsResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.RegisterGameServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRegisterGameServerRequest                  RegisterGameServerRequest                                  (Parm, NativeAccessSpecifierPublic)
	 * 		struct FRegisterGameServerResult                   RegisterGameServerResult                                   (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::RegisterGameServer(class UObject* WorldContextObject, bool* Success, const struct FRegisterGameServerRequest& RegisterGameServerRequest, struct FRegisterGameServerResult* RegisterGameServerResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.RegisterGameServer");
		
		UGameLiftClientObject_RegisterGameServer_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.RegisterGameServerRequest = RegisterGameServerRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (RegisterGameServerResult != nullptr)
			*RegisterGameServerResult = params.RegisterGameServerResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.PutScalingPolicy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPutScalingPolicyRequest                    PutScalingPolicyRequest                                    (Parm, NativeAccessSpecifierPublic)
	 * 		struct FPutScalingPolicyResult                     PutScalingPolicyResult                                     (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::PutScalingPolicy(class UObject* WorldContextObject, bool* Success, const struct FPutScalingPolicyRequest& PutScalingPolicyRequest, struct FPutScalingPolicyResult* PutScalingPolicyResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.PutScalingPolicy");
		
		UGameLiftClientObject_PutScalingPolicy_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PutScalingPolicyRequest = PutScalingPolicyRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (PutScalingPolicyResult != nullptr)
			*PutScalingPolicyResult = params.PutScalingPolicyResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.ListTagsForResource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameLiftListTagsForResourceRequest         listTagsForResourceRequest                                 (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameLiftListTagsForResourceResult          listTagsForResourceResult                                  (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::ListTagsForResource(class UObject* WorldContextObject, bool* Success, const struct FGameLiftListTagsForResourceRequest& listTagsForResourceRequest, struct FGameLiftListTagsForResourceResult* listTagsForResourceResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.ListTagsForResource");
		
		UGameLiftClientObject_ListTagsForResource_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.listTagsForResourceRequest = listTagsForResourceRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (listTagsForResourceResult != nullptr)
			*listTagsForResourceResult = params.listTagsForResourceResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.ListScripts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FListScriptsRequest                         ListScriptsRequest                                         (Parm, NativeAccessSpecifierPublic)
	 * 		struct FListScriptsResult                          ListScriptsResult                                          (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::ListScripts(class UObject* WorldContextObject, bool* Success, const struct FListScriptsRequest& ListScriptsRequest, struct FListScriptsResult* ListScriptsResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.ListScripts");
		
		UGameLiftClientObject_ListScripts_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ListScriptsRequest = ListScriptsRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (ListScriptsResult != nullptr)
			*ListScriptsResult = params.ListScriptsResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.ListGameServers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FListGameServersRequest                     ListGameServersRequest                                     (Parm, NativeAccessSpecifierPublic)
	 * 		struct FListGameServersResult                      ListGameServersResult                                      (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::ListGameServers(class UObject* WorldContextObject, bool* Success, const struct FListGameServersRequest& ListGameServersRequest, struct FListGameServersResult* ListGameServersResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.ListGameServers");
		
		UGameLiftClientObject_ListGameServers_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ListGameServersRequest = ListGameServersRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (ListGameServersResult != nullptr)
			*ListGameServersResult = params.ListGameServersResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.ListGameServerGroups
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FListGameServerGroupsRequest                ListGameServerGroupsRequest                                (Parm, NativeAccessSpecifierPublic)
	 * 		struct FListGameServerGroupsResult                 ListGameServerGroupsResult                                 (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::ListGameServerGroups(class UObject* WorldContextObject, bool* Success, const struct FListGameServerGroupsRequest& ListGameServerGroupsRequest, struct FListGameServerGroupsResult* ListGameServerGroupsResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.ListGameServerGroups");
		
		UGameLiftClientObject_ListGameServerGroups_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ListGameServerGroupsRequest = ListGameServerGroupsRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (ListGameServerGroupsResult != nullptr)
			*ListGameServerGroupsResult = params.ListGameServerGroupsResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.ListFleets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FListFleetsRequest                          ListFleetsRequest                                          (Parm, NativeAccessSpecifierPublic)
	 * 		struct FListFleetsResult                           ListFleetsResult                                           (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::ListFleets(class UObject* WorldContextObject, bool* Success, const struct FListFleetsRequest& ListFleetsRequest, struct FListFleetsResult* ListFleetsResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.ListFleets");
		
		UGameLiftClientObject_ListFleets_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ListFleetsRequest = ListFleetsRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (ListFleetsResult != nullptr)
			*ListFleetsResult = params.ListFleetsResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.ListBuilds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FListBuildsRequest                          ListBuildsRequest                                          (Parm, NativeAccessSpecifierPublic)
	 * 		struct FListBuildsResult                           ListBuildsResult                                           (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::ListBuilds(class UObject* WorldContextObject, bool* Success, const struct FListBuildsRequest& ListBuildsRequest, struct FListBuildsResult* ListBuildsResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.ListBuilds");
		
		UGameLiftClientObject_ListBuilds_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ListBuildsRequest = ListBuildsRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (ListBuildsResult != nullptr)
			*ListBuildsResult = params.ListBuildsResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.ListAliases
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameLiftListAliasesRequest                 listAliasesRequest                                         (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameLiftListAliasesResult                  listAliasesResult                                          (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::ListAliases(class UObject* WorldContextObject, bool* Success, const struct FGameLiftListAliasesRequest& listAliasesRequest, struct FGameLiftListAliasesResult* listAliasesResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.ListAliases");
		
		UGameLiftClientObject_ListAliases_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.listAliasesRequest = listAliasesRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (listAliasesResult != nullptr)
			*listAliasesResult = params.listAliasesResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.GetInstanceAccess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGetInstanceAccessRequest                   GetInstanceAccessRequest                                   (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGetInstanceAccessResult                    GetInstanceAccessResult                                    (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::GetInstanceAccess(class UObject* WorldContextObject, bool* Success, const struct FGetInstanceAccessRequest& GetInstanceAccessRequest, struct FGetInstanceAccessResult* GetInstanceAccessResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.GetInstanceAccess");
		
		UGameLiftClientObject_GetInstanceAccess_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.GetInstanceAccessRequest = GetInstanceAccessRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (GetInstanceAccessResult != nullptr)
			*GetInstanceAccessResult = params.GetInstanceAccessResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.GetGameSessionLogUrl
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGetGameSessionLogUrlRequest                GetGameSessionLogUrlRequest                                (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGetGameSessionLogUrlResult                 GetGameSessionLogUrlResult                                 (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::GetGameSessionLogUrl(class UObject* WorldContextObject, bool* Success, const struct FGetGameSessionLogUrlRequest& GetGameSessionLogUrlRequest, struct FGetGameSessionLogUrlResult* GetGameSessionLogUrlResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.GetGameSessionLogUrl");
		
		UGameLiftClientObject_GetGameSessionLogUrl_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.GetGameSessionLogUrlRequest = GetGameSessionLogUrlRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (GetGameSessionLogUrlResult != nullptr)
			*GetGameSessionLogUrlResult = params.GetGameSessionLogUrlResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.DescribeVpcPeeringConnections
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDescribeVpcPeeringConnectionsRequest       DescribeVpcPeeringConnectionsRequest                       (Parm, NativeAccessSpecifierPublic)
	 * 		struct FDescribeVpcPeeringConnectionsResult        DescribeVpcPeeringConnectionsResult                        (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::DescribeVpcPeeringConnections(class UObject* WorldContextObject, bool* Success, const struct FDescribeVpcPeeringConnectionsRequest& DescribeVpcPeeringConnectionsRequest, struct FDescribeVpcPeeringConnectionsResult* DescribeVpcPeeringConnectionsResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.DescribeVpcPeeringConnections");
		
		UGameLiftClientObject_DescribeVpcPeeringConnections_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DescribeVpcPeeringConnectionsRequest = DescribeVpcPeeringConnectionsRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (DescribeVpcPeeringConnectionsResult != nullptr)
			*DescribeVpcPeeringConnectionsResult = params.DescribeVpcPeeringConnectionsResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.DescribeVpcPeeringAuthorizations
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDescribeVpcPeeringAuthorizationsRequest    DescribeVpcPeeringAuthorizationsRequest                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FDescribeVpcPeeringAuthorizationsResult     DescribeVpcPeeringAuthorizationsResult                     (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::DescribeVpcPeeringAuthorizations(class UObject* WorldContextObject, bool* Success, const struct FDescribeVpcPeeringAuthorizationsRequest& DescribeVpcPeeringAuthorizationsRequest, struct FDescribeVpcPeeringAuthorizationsResult* DescribeVpcPeeringAuthorizationsResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.DescribeVpcPeeringAuthorizations");
		
		UGameLiftClientObject_DescribeVpcPeeringAuthorizations_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DescribeVpcPeeringAuthorizationsRequest = DescribeVpcPeeringAuthorizationsRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (DescribeVpcPeeringAuthorizationsResult != nullptr)
			*DescribeVpcPeeringAuthorizationsResult = params.DescribeVpcPeeringAuthorizationsResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.DescribeScript
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDescribeScriptRequest                      DescribeScriptRequest                                      (Parm, NativeAccessSpecifierPublic)
	 * 		struct FDescribeScriptResult                       DescribeScriptResult                                       (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::DescribeScript(class UObject* WorldContextObject, bool* Success, const struct FDescribeScriptRequest& DescribeScriptRequest, struct FDescribeScriptResult* DescribeScriptResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.DescribeScript");
		
		UGameLiftClientObject_DescribeScript_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DescribeScriptRequest = DescribeScriptRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (DescribeScriptResult != nullptr)
			*DescribeScriptResult = params.DescribeScriptResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.DescribeScalingPolicies
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDescribeScalingPoliciesRequest             DescribeScalingPoliciesRequest                             (Parm, NativeAccessSpecifierPublic)
	 * 		struct FDescribeScalingPoliciesResult              DescribeScalingPoliciesResult                              (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::DescribeScalingPolicies(class UObject* WorldContextObject, bool* Success, const struct FDescribeScalingPoliciesRequest& DescribeScalingPoliciesRequest, struct FDescribeScalingPoliciesResult* DescribeScalingPoliciesResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.DescribeScalingPolicies");
		
		UGameLiftClientObject_DescribeScalingPolicies_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DescribeScalingPoliciesRequest = DescribeScalingPoliciesRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (DescribeScalingPoliciesResult != nullptr)
			*DescribeScalingPoliciesResult = params.DescribeScalingPoliciesResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.DescribeRuntimeConfiguration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDescribeRuntimeConfigurationRequest        DescribeRuntimeConfigurationRequest                        (Parm, NativeAccessSpecifierPublic)
	 * 		struct FDescribeRuntimeConfigurationResult         DescribeRuntimeConfigurationResult                         (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::DescribeRuntimeConfiguration(class UObject* WorldContextObject, bool* Success, const struct FDescribeRuntimeConfigurationRequest& DescribeRuntimeConfigurationRequest, struct FDescribeRuntimeConfigurationResult* DescribeRuntimeConfigurationResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.DescribeRuntimeConfiguration");
		
		UGameLiftClientObject_DescribeRuntimeConfiguration_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DescribeRuntimeConfigurationRequest = DescribeRuntimeConfigurationRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (DescribeRuntimeConfigurationResult != nullptr)
			*DescribeRuntimeConfigurationResult = params.DescribeRuntimeConfigurationResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.DescribePlayerSessions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDescribePlayerSessionsRequest              DescribePlayerSessionsRequest                              (Parm, NativeAccessSpecifierPublic)
	 * 		struct FDescribePlayerSessionsResult               DescribePlayerSessionsResult                               (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::DescribePlayerSessions(class UObject* WorldContextObject, bool* Success, const struct FDescribePlayerSessionsRequest& DescribePlayerSessionsRequest, struct FDescribePlayerSessionsResult* DescribePlayerSessionsResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.DescribePlayerSessions");
		
		UGameLiftClientObject_DescribePlayerSessions_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DescribePlayerSessionsRequest = DescribePlayerSessionsRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (DescribePlayerSessionsResult != nullptr)
			*DescribePlayerSessionsResult = params.DescribePlayerSessionsResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.DescribeMatchmakingRuleSets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDescribeMatchmakingRuleSetsRequest         DescribeMatchmakingRuleSetsRequest                         (Parm, NativeAccessSpecifierPublic)
	 * 		struct FDescribeMatchmakingRuleSetsResult          DescribeMatchmakingRuleSetsResult                          (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::DescribeMatchmakingRuleSets(class UObject* WorldContextObject, bool* Success, const struct FDescribeMatchmakingRuleSetsRequest& DescribeMatchmakingRuleSetsRequest, struct FDescribeMatchmakingRuleSetsResult* DescribeMatchmakingRuleSetsResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.DescribeMatchmakingRuleSets");
		
		UGameLiftClientObject_DescribeMatchmakingRuleSets_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DescribeMatchmakingRuleSetsRequest = DescribeMatchmakingRuleSetsRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (DescribeMatchmakingRuleSetsResult != nullptr)
			*DescribeMatchmakingRuleSetsResult = params.DescribeMatchmakingRuleSetsResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.DescribeMatchmakingConfigurations
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDescribeMatchmakingConfigurationsRequest   DescribeMatchmakingConfigurationsRequest                   (Parm, NativeAccessSpecifierPublic)
	 * 		struct FDescribeMatchmakingConfigurationsResult    DescribeMatchmakingConfigurationsResult                    (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::DescribeMatchmakingConfigurations(class UObject* WorldContextObject, bool* Success, const struct FDescribeMatchmakingConfigurationsRequest& DescribeMatchmakingConfigurationsRequest, struct FDescribeMatchmakingConfigurationsResult* DescribeMatchmakingConfigurationsResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.DescribeMatchmakingConfigurations");
		
		UGameLiftClientObject_DescribeMatchmakingConfigurations_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DescribeMatchmakingConfigurationsRequest = DescribeMatchmakingConfigurationsRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (DescribeMatchmakingConfigurationsResult != nullptr)
			*DescribeMatchmakingConfigurationsResult = params.DescribeMatchmakingConfigurationsResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.DescribeMatchmaking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDescribeMatchmakingRequest                 DescribeMatchmakingRequest                                 (Parm, NativeAccessSpecifierPublic)
	 * 		struct FDescribeMatchmakingResult                  DescribeMatchmakingResult                                  (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::DescribeMatchmaking(class UObject* WorldContextObject, bool* Success, const struct FDescribeMatchmakingRequest& DescribeMatchmakingRequest, struct FDescribeMatchmakingResult* DescribeMatchmakingResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.DescribeMatchmaking");
		
		UGameLiftClientObject_DescribeMatchmaking_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DescribeMatchmakingRequest = DescribeMatchmakingRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (DescribeMatchmakingResult != nullptr)
			*DescribeMatchmakingResult = params.DescribeMatchmakingResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.DescribeInstances
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDescribeInstancesRequest                   DescribeInstancesRequest                                   (Parm, NativeAccessSpecifierPublic)
	 * 		struct FDescribeInstancesResult                    DescribeInstancesResult                                    (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::DescribeInstances(class UObject* WorldContextObject, bool* Success, const struct FDescribeInstancesRequest& DescribeInstancesRequest, struct FDescribeInstancesResult* DescribeInstancesResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.DescribeInstances");
		
		UGameLiftClientObject_DescribeInstances_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DescribeInstancesRequest = DescribeInstancesRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (DescribeInstancesResult != nullptr)
			*DescribeInstancesResult = params.DescribeInstancesResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.DescribeGameSessions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDescribeGameSessionsRequest                DescribeGameSessionsRequest                                (Parm, NativeAccessSpecifierPublic)
	 * 		struct FDescribeGameSessionsResult                 DescribeGameSessionsResult                                 (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::DescribeGameSessions(class UObject* WorldContextObject, bool* Success, const struct FDescribeGameSessionsRequest& DescribeGameSessionsRequest, struct FDescribeGameSessionsResult* DescribeGameSessionsResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.DescribeGameSessions");
		
		UGameLiftClientObject_DescribeGameSessions_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DescribeGameSessionsRequest = DescribeGameSessionsRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (DescribeGameSessionsResult != nullptr)
			*DescribeGameSessionsResult = params.DescribeGameSessionsResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.DescribeGameSessionQueues
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDescribeGameSessionQueuesRequest           DescribeGameSessionQueuesRequest                           (Parm, NativeAccessSpecifierPublic)
	 * 		struct FDescribeGameSessionQueuesResult            DescribeGameSessionQueuesResult                            (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::DescribeGameSessionQueues(class UObject* WorldContextObject, bool* Success, const struct FDescribeGameSessionQueuesRequest& DescribeGameSessionQueuesRequest, struct FDescribeGameSessionQueuesResult* DescribeGameSessionQueuesResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.DescribeGameSessionQueues");
		
		UGameLiftClientObject_DescribeGameSessionQueues_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DescribeGameSessionQueuesRequest = DescribeGameSessionQueuesRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (DescribeGameSessionQueuesResult != nullptr)
			*DescribeGameSessionQueuesResult = params.DescribeGameSessionQueuesResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.DescribeGameSessionPlacement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDescribeGameSessionPlacementRequest        DescribeGameSessionPlacementRequest                        (Parm, NativeAccessSpecifierPublic)
	 * 		struct FDescribeGameSessionPlacementResult         DescribeGameSessionPlacementResult                         (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::DescribeGameSessionPlacement(class UObject* WorldContextObject, bool* Success, const struct FDescribeGameSessionPlacementRequest& DescribeGameSessionPlacementRequest, struct FDescribeGameSessionPlacementResult* DescribeGameSessionPlacementResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.DescribeGameSessionPlacement");
		
		UGameLiftClientObject_DescribeGameSessionPlacement_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DescribeGameSessionPlacementRequest = DescribeGameSessionPlacementRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (DescribeGameSessionPlacementResult != nullptr)
			*DescribeGameSessionPlacementResult = params.DescribeGameSessionPlacementResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.DescribeGameSessionDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDescribeGameSessionDetailsRequest          DescribeGameSessionDetailsRequest                          (Parm, NativeAccessSpecifierPublic)
	 * 		struct FDescribeGameSessionDetailsResult           DescribeGameSessionDetailsResult                           (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::DescribeGameSessionDetails(class UObject* WorldContextObject, bool* Success, const struct FDescribeGameSessionDetailsRequest& DescribeGameSessionDetailsRequest, struct FDescribeGameSessionDetailsResult* DescribeGameSessionDetailsResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.DescribeGameSessionDetails");
		
		UGameLiftClientObject_DescribeGameSessionDetails_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DescribeGameSessionDetailsRequest = DescribeGameSessionDetailsRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (DescribeGameSessionDetailsResult != nullptr)
			*DescribeGameSessionDetailsResult = params.DescribeGameSessionDetailsResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.DescribeGameServerInstances
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDescribeGameServerInstancesRequest         DescribeGameServerInstancesRequest                         (Parm, NativeAccessSpecifierPublic)
	 * 		struct FDescribeGameServerInstancesResult          DescribeGameServerInstancesResult                          (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::DescribeGameServerInstances(class UObject* WorldContextObject, bool* Success, const struct FDescribeGameServerInstancesRequest& DescribeGameServerInstancesRequest, struct FDescribeGameServerInstancesResult* DescribeGameServerInstancesResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.DescribeGameServerInstances");
		
		UGameLiftClientObject_DescribeGameServerInstances_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DescribeGameServerInstancesRequest = DescribeGameServerInstancesRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (DescribeGameServerInstancesResult != nullptr)
			*DescribeGameServerInstancesResult = params.DescribeGameServerInstancesResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.DescribeGameServerGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDescribeGameServerGroupRequest             DescribeGameServerGroupRequest                             (Parm, NativeAccessSpecifierPublic)
	 * 		struct FDescribeGameServerGroupResult              DescribeGameServerGroupResult                              (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::DescribeGameServerGroup(class UObject* WorldContextObject, bool* Success, const struct FDescribeGameServerGroupRequest& DescribeGameServerGroupRequest, struct FDescribeGameServerGroupResult* DescribeGameServerGroupResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.DescribeGameServerGroup");
		
		UGameLiftClientObject_DescribeGameServerGroup_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DescribeGameServerGroupRequest = DescribeGameServerGroupRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (DescribeGameServerGroupResult != nullptr)
			*DescribeGameServerGroupResult = params.DescribeGameServerGroupResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.DescribeGameServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDescribeGameServerRequest                  DescribeGameServerRequest                                  (Parm, NativeAccessSpecifierPublic)
	 * 		struct FDescribeGameServerResult                   DescribeGameServerResult                                   (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::DescribeGameServer(class UObject* WorldContextObject, bool* Success, const struct FDescribeGameServerRequest& DescribeGameServerRequest, struct FDescribeGameServerResult* DescribeGameServerResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.DescribeGameServer");
		
		UGameLiftClientObject_DescribeGameServer_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DescribeGameServerRequest = DescribeGameServerRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (DescribeGameServerResult != nullptr)
			*DescribeGameServerResult = params.DescribeGameServerResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.DescribeFleetUtilization
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDescribeFleetUtilizationRequest            DescribeFleetUtilizationRequest                            (Parm, NativeAccessSpecifierPublic)
	 * 		struct FDescribeFleetUtilizationResult             DescribeFleetUtilizationResult                             (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::DescribeFleetUtilization(class UObject* WorldContextObject, bool* Success, const struct FDescribeFleetUtilizationRequest& DescribeFleetUtilizationRequest, struct FDescribeFleetUtilizationResult* DescribeFleetUtilizationResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.DescribeFleetUtilization");
		
		UGameLiftClientObject_DescribeFleetUtilization_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DescribeFleetUtilizationRequest = DescribeFleetUtilizationRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (DescribeFleetUtilizationResult != nullptr)
			*DescribeFleetUtilizationResult = params.DescribeFleetUtilizationResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.DescribeFleetPortSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDescribeFleetPortSettingsRequest           DescribeFleetPortSettingsRequest                           (Parm, NativeAccessSpecifierPublic)
	 * 		struct FDescribeFleetPortSettingsResult            DescribeFleetPortSettingsResult                            (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::DescribeFleetPortSettings(class UObject* WorldContextObject, bool* Success, const struct FDescribeFleetPortSettingsRequest& DescribeFleetPortSettingsRequest, struct FDescribeFleetPortSettingsResult* DescribeFleetPortSettingsResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.DescribeFleetPortSettings");
		
		UGameLiftClientObject_DescribeFleetPortSettings_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DescribeFleetPortSettingsRequest = DescribeFleetPortSettingsRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (DescribeFleetPortSettingsResult != nullptr)
			*DescribeFleetPortSettingsResult = params.DescribeFleetPortSettingsResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.DescribeFleetLocationUtilization
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAWSGameLiftDescribeFleetLocationUtilizationRequest describeFleetLocationUtilizationRequest                    (Parm, NativeAccessSpecifierPublic)
	 * 		struct FAWSGameLiftDescribeFleetLocationUtilizationResult describeFleetLocationUtilizationResult                     (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::DescribeFleetLocationUtilization(class UObject* WorldContextObject, bool* Success, const struct FAWSGameLiftDescribeFleetLocationUtilizationRequest& describeFleetLocationUtilizationRequest, struct FAWSGameLiftDescribeFleetLocationUtilizationResult* describeFleetLocationUtilizationResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.DescribeFleetLocationUtilization");
		
		UGameLiftClientObject_DescribeFleetLocationUtilization_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.describeFleetLocationUtilizationRequest = describeFleetLocationUtilizationRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (describeFleetLocationUtilizationResult != nullptr)
			*describeFleetLocationUtilizationResult = params.describeFleetLocationUtilizationResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.DescribeFleetLocationCapacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAWSGameLiftDescribeFleetLocationCapacityRequest describeFleetLocationCapacityRequest                       (Parm, NativeAccessSpecifierPublic)
	 * 		struct FAWSGameLiftDescribeFleetLocationCapacityResult describeFleetLocationCapacityResult                        (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::DescribeFleetLocationCapacity(class UObject* WorldContextObject, bool* Success, const struct FAWSGameLiftDescribeFleetLocationCapacityRequest& describeFleetLocationCapacityRequest, struct FAWSGameLiftDescribeFleetLocationCapacityResult* describeFleetLocationCapacityResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.DescribeFleetLocationCapacity");
		
		UGameLiftClientObject_DescribeFleetLocationCapacity_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.describeFleetLocationCapacityRequest = describeFleetLocationCapacityRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (describeFleetLocationCapacityResult != nullptr)
			*describeFleetLocationCapacityResult = params.describeFleetLocationCapacityResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.DescribeFleetLocationAttributes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAWSGameLiftDescribeFleetLocationAttributesRequest describeFleetLocationAttributesRequest                     (Parm, NativeAccessSpecifierPublic)
	 * 		struct FAWSGameLiftDescribeFleetLocationAttributesResult describeFleetLocationAttributesResult                      (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::DescribeFleetLocationAttributes(class UObject* WorldContextObject, bool* Success, const struct FAWSGameLiftDescribeFleetLocationAttributesRequest& describeFleetLocationAttributesRequest, struct FAWSGameLiftDescribeFleetLocationAttributesResult* describeFleetLocationAttributesResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.DescribeFleetLocationAttributes");
		
		UGameLiftClientObject_DescribeFleetLocationAttributes_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.describeFleetLocationAttributesRequest = describeFleetLocationAttributesRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (describeFleetLocationAttributesResult != nullptr)
			*describeFleetLocationAttributesResult = params.describeFleetLocationAttributesResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.DescribeFleetEvents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDescribeFleetEventsRequest                 DescribeFleetEventsRequest                                 (Parm, NativeAccessSpecifierPublic)
	 * 		struct FDescribeFleetEventsResult                  DescribeFleetEventsResult                                  (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::DescribeFleetEvents(class UObject* WorldContextObject, bool* Success, const struct FDescribeFleetEventsRequest& DescribeFleetEventsRequest, struct FDescribeFleetEventsResult* DescribeFleetEventsResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.DescribeFleetEvents");
		
		UGameLiftClientObject_DescribeFleetEvents_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DescribeFleetEventsRequest = DescribeFleetEventsRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (DescribeFleetEventsResult != nullptr)
			*DescribeFleetEventsResult = params.DescribeFleetEventsResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.DescribeFleetCapacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDescribeFleetCapacityRequest               DescribeFleetCapacityRequest                               (Parm, NativeAccessSpecifierPublic)
	 * 		struct FDescribeFleetCapacityResult                DescribeFleetCapacityResult                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::DescribeFleetCapacity(class UObject* WorldContextObject, bool* Success, const struct FDescribeFleetCapacityRequest& DescribeFleetCapacityRequest, struct FDescribeFleetCapacityResult* DescribeFleetCapacityResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.DescribeFleetCapacity");
		
		UGameLiftClientObject_DescribeFleetCapacity_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DescribeFleetCapacityRequest = DescribeFleetCapacityRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (DescribeFleetCapacityResult != nullptr)
			*DescribeFleetCapacityResult = params.DescribeFleetCapacityResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.DescribeFleetAttributes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDescribeFleetAttributesRequest             DescribeFleetAttributesRequest                             (Parm, NativeAccessSpecifierPublic)
	 * 		struct FDescribeFleetAttributesResult              DescribeFleetAttributesResult                              (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::DescribeFleetAttributes(class UObject* WorldContextObject, bool* Success, const struct FDescribeFleetAttributesRequest& DescribeFleetAttributesRequest, struct FDescribeFleetAttributesResult* DescribeFleetAttributesResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.DescribeFleetAttributes");
		
		UGameLiftClientObject_DescribeFleetAttributes_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DescribeFleetAttributesRequest = DescribeFleetAttributesRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (DescribeFleetAttributesResult != nullptr)
			*DescribeFleetAttributesResult = params.DescribeFleetAttributesResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.DescribeEC2InstanceLimits
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDescribeEC2InstanceLimitsRequest           DescribeEC2InstanceLimitsRequest                           (Parm, NativeAccessSpecifierPublic)
	 * 		struct FDescribeEC2InstanceLimitsResult            DescribeEC2InstanceLimitsResult                            (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::DescribeEC2InstanceLimits(class UObject* WorldContextObject, bool* Success, const struct FDescribeEC2InstanceLimitsRequest& DescribeEC2InstanceLimitsRequest, struct FDescribeEC2InstanceLimitsResult* DescribeEC2InstanceLimitsResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.DescribeEC2InstanceLimits");
		
		UGameLiftClientObject_DescribeEC2InstanceLimits_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DescribeEC2InstanceLimitsRequest = DescribeEC2InstanceLimitsRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (DescribeEC2InstanceLimitsResult != nullptr)
			*DescribeEC2InstanceLimitsResult = params.DescribeEC2InstanceLimitsResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.DescribeBuild
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDescribeBuildRequest                       DescribeBuildRequest                                       (Parm, NativeAccessSpecifierPublic)
	 * 		struct FDescribeBuildResult                        DescribeBuildResult                                        (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::DescribeBuild(class UObject* WorldContextObject, bool* Success, const struct FDescribeBuildRequest& DescribeBuildRequest, struct FDescribeBuildResult* DescribeBuildResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.DescribeBuild");
		
		UGameLiftClientObject_DescribeBuild_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DescribeBuildRequest = DescribeBuildRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (DescribeBuildResult != nullptr)
			*DescribeBuildResult = params.DescribeBuildResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.DescribeAlias
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDescribeAliasRequest                       DescribeAliasRequest                                       (Parm, NativeAccessSpecifierPublic)
	 * 		struct FDescribeAliasResult                        DescribeAliasResult                                        (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::DescribeAlias(class UObject* WorldContextObject, bool* Success, const struct FDescribeAliasRequest& DescribeAliasRequest, struct FDescribeAliasResult* DescribeAliasResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.DescribeAlias");
		
		UGameLiftClientObject_DescribeAlias_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DescribeAliasRequest = DescribeAliasRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (DescribeAliasResult != nullptr)
			*DescribeAliasResult = params.DescribeAliasResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.DeregisterGameServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDeregisterGameServerRequest                DeregisterGameServerRequest                                (Parm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::DeregisterGameServer(class UObject* WorldContextObject, bool* Success, const struct FDeregisterGameServerRequest& DeregisterGameServerRequest, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.DeregisterGameServer");
		
		UGameLiftClientObject_DeregisterGameServer_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DeregisterGameServerRequest = DeregisterGameServerRequest;
		params.LatentInfo = LatentInfo;
		
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
	 * 		Name   -> Function GameLift.GameLiftClientObject.DeleteVpcPeeringConnection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDeleteVpcPeeringConnectionRequest          DeleteVpcPeeringConnectionRequest                          (Parm, NativeAccessSpecifierPublic)
	 * 		struct FDeleteVpcPeeringConnectionResult           DeleteVpcPeeringConnectionResult                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::DeleteVpcPeeringConnection(class UObject* WorldContextObject, bool* Success, const struct FDeleteVpcPeeringConnectionRequest& DeleteVpcPeeringConnectionRequest, struct FDeleteVpcPeeringConnectionResult* DeleteVpcPeeringConnectionResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.DeleteVpcPeeringConnection");
		
		UGameLiftClientObject_DeleteVpcPeeringConnection_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DeleteVpcPeeringConnectionRequest = DeleteVpcPeeringConnectionRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (DeleteVpcPeeringConnectionResult != nullptr)
			*DeleteVpcPeeringConnectionResult = params.DeleteVpcPeeringConnectionResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.DeleteVpcPeeringAuthorization
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDeleteVpcPeeringAuthorizationRequest       DeleteVpcPeeringAuthorizationRequest                       (Parm, NativeAccessSpecifierPublic)
	 * 		struct FDeleteVpcPeeringAuthorizationResult        DeleteVpcPeeringAuthorizationResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::DeleteVpcPeeringAuthorization(class UObject* WorldContextObject, bool* Success, const struct FDeleteVpcPeeringAuthorizationRequest& DeleteVpcPeeringAuthorizationRequest, struct FDeleteVpcPeeringAuthorizationResult* DeleteVpcPeeringAuthorizationResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.DeleteVpcPeeringAuthorization");
		
		UGameLiftClientObject_DeleteVpcPeeringAuthorization_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DeleteVpcPeeringAuthorizationRequest = DeleteVpcPeeringAuthorizationRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (DeleteVpcPeeringAuthorizationResult != nullptr)
			*DeleteVpcPeeringAuthorizationResult = params.DeleteVpcPeeringAuthorizationResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.DeleteScript
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDeleteScriptRequest                        DeleteScriptRequest                                        (Parm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::DeleteScript(class UObject* WorldContextObject, bool* Success, const struct FDeleteScriptRequest& DeleteScriptRequest, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.DeleteScript");
		
		UGameLiftClientObject_DeleteScript_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DeleteScriptRequest = DeleteScriptRequest;
		params.LatentInfo = LatentInfo;
		
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
	 * 		Name   -> Function GameLift.GameLiftClientObject.DeleteScalingPolicy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDeleteScalingPolicyRequest                 DeleteScalingPolicyRequest                                 (Parm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::DeleteScalingPolicy(class UObject* WorldContextObject, bool* Success, const struct FDeleteScalingPolicyRequest& DeleteScalingPolicyRequest, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.DeleteScalingPolicy");
		
		UGameLiftClientObject_DeleteScalingPolicy_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DeleteScalingPolicyRequest = DeleteScalingPolicyRequest;
		params.LatentInfo = LatentInfo;
		
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
	 * 		Name   -> Function GameLift.GameLiftClientObject.DeleteMatchmakingRuleSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDeleteMatchmakingRuleSetRequest            DeleteMatchmakingRuleSetRequest                            (Parm, NativeAccessSpecifierPublic)
	 * 		struct FDeleteMatchmakingRuleSetResult             DeleteMatchmakingRuleSetResult                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::DeleteMatchmakingRuleSet(class UObject* WorldContextObject, bool* Success, const struct FDeleteMatchmakingRuleSetRequest& DeleteMatchmakingRuleSetRequest, struct FDeleteMatchmakingRuleSetResult* DeleteMatchmakingRuleSetResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.DeleteMatchmakingRuleSet");
		
		UGameLiftClientObject_DeleteMatchmakingRuleSet_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DeleteMatchmakingRuleSetRequest = DeleteMatchmakingRuleSetRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (DeleteMatchmakingRuleSetResult != nullptr)
			*DeleteMatchmakingRuleSetResult = params.DeleteMatchmakingRuleSetResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.DeleteMatchmakingConfiguration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDeleteMatchmakingConfigurationRequest      DeleteMatchmakingConfigurationRequest                      (Parm, NativeAccessSpecifierPublic)
	 * 		struct FDeleteMatchmakingConfigurationResult       DeleteMatchmakingConfigurationResult                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::DeleteMatchmakingConfiguration(class UObject* WorldContextObject, bool* Success, const struct FDeleteMatchmakingConfigurationRequest& DeleteMatchmakingConfigurationRequest, struct FDeleteMatchmakingConfigurationResult* DeleteMatchmakingConfigurationResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.DeleteMatchmakingConfiguration");
		
		UGameLiftClientObject_DeleteMatchmakingConfiguration_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DeleteMatchmakingConfigurationRequest = DeleteMatchmakingConfigurationRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (DeleteMatchmakingConfigurationResult != nullptr)
			*DeleteMatchmakingConfigurationResult = params.DeleteMatchmakingConfigurationResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.DeleteGameSessionQueue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDeleteGameSessionQueueRequest              DeleteGameSessionQueueRequest                              (Parm, NativeAccessSpecifierPublic)
	 * 		struct FDeleteGameSessionQueueResult               DeleteGameSessionQueueResult                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::DeleteGameSessionQueue(class UObject* WorldContextObject, bool* Success, const struct FDeleteGameSessionQueueRequest& DeleteGameSessionQueueRequest, struct FDeleteGameSessionQueueResult* DeleteGameSessionQueueResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.DeleteGameSessionQueue");
		
		UGameLiftClientObject_DeleteGameSessionQueue_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DeleteGameSessionQueueRequest = DeleteGameSessionQueueRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (DeleteGameSessionQueueResult != nullptr)
			*DeleteGameSessionQueueResult = params.DeleteGameSessionQueueResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.DeleteGameServerGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDeleteGameServerGroupRequest               DeleteGameServerGroupRequest                               (Parm, NativeAccessSpecifierPublic)
	 * 		struct FDeleteGameServerGroupResult                DeleteGameServerGroupResult                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::DeleteGameServerGroup(class UObject* WorldContextObject, bool* Success, const struct FDeleteGameServerGroupRequest& DeleteGameServerGroupRequest, struct FDeleteGameServerGroupResult* DeleteGameServerGroupResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.DeleteGameServerGroup");
		
		UGameLiftClientObject_DeleteGameServerGroup_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DeleteGameServerGroupRequest = DeleteGameServerGroupRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (DeleteGameServerGroupResult != nullptr)
			*DeleteGameServerGroupResult = params.DeleteGameServerGroupResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.DeleteFleetLocations
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAWSGameLiftDeleteFleetLocationsRequest     deleteFleetLocationsRequest                                (Parm, NativeAccessSpecifierPublic)
	 * 		struct FAWSGameLiftDeleteFleetLocationsResult      deleteFleetLocationsResult                                 (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::DeleteFleetLocations(class UObject* WorldContextObject, bool* Success, const struct FAWSGameLiftDeleteFleetLocationsRequest& deleteFleetLocationsRequest, struct FAWSGameLiftDeleteFleetLocationsResult* deleteFleetLocationsResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.DeleteFleetLocations");
		
		UGameLiftClientObject_DeleteFleetLocations_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.deleteFleetLocationsRequest = deleteFleetLocationsRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (deleteFleetLocationsResult != nullptr)
			*deleteFleetLocationsResult = params.deleteFleetLocationsResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.DeleteFleet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDeleteFleetRequest                         DeleteFleetRequest                                         (Parm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::DeleteFleet(class UObject* WorldContextObject, bool* Success, const struct FDeleteFleetRequest& DeleteFleetRequest, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.DeleteFleet");
		
		UGameLiftClientObject_DeleteFleet_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DeleteFleetRequest = DeleteFleetRequest;
		params.LatentInfo = LatentInfo;
		
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
	 * 		Name   -> Function GameLift.GameLiftClientObject.DeleteBuild
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDeleteBuildRequest                         DeleteBuildRequest                                         (Parm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::DeleteBuild(class UObject* WorldContextObject, bool* Success, const struct FDeleteBuildRequest& DeleteBuildRequest, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.DeleteBuild");
		
		UGameLiftClientObject_DeleteBuild_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DeleteBuildRequest = DeleteBuildRequest;
		params.LatentInfo = LatentInfo;
		
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
	 * 		Name   -> Function GameLift.GameLiftClientObject.DeleteAlias
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameLiftDeleteAliasRequest                 deleteAliasRequest                                         (Parm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::DeleteAlias(class UObject* WorldContextObject, bool* Success, const struct FGameLiftDeleteAliasRequest& deleteAliasRequest, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.DeleteAlias");
		
		UGameLiftClientObject_DeleteAlias_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.deleteAliasRequest = deleteAliasRequest;
		params.LatentInfo = LatentInfo;
		
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
	 * 		Name   -> Function GameLift.GameLiftClientObject.CreateVpcPeeringConnection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCreateVpcPeeringConnectionRequest          CreateVpcPeeringConnectionRequest                          (Parm, NativeAccessSpecifierPublic)
	 * 		struct FCreateVpcPeeringConnectionResult           CreateVpcPeeringConnectionResult                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::CreateVpcPeeringConnection(class UObject* WorldContextObject, bool* Success, const struct FCreateVpcPeeringConnectionRequest& CreateVpcPeeringConnectionRequest, struct FCreateVpcPeeringConnectionResult* CreateVpcPeeringConnectionResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.CreateVpcPeeringConnection");
		
		UGameLiftClientObject_CreateVpcPeeringConnection_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.CreateVpcPeeringConnectionRequest = CreateVpcPeeringConnectionRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (CreateVpcPeeringConnectionResult != nullptr)
			*CreateVpcPeeringConnectionResult = params.CreateVpcPeeringConnectionResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.CreateVpcPeeringAuthorization
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCreateVpcPeeringAuthorizationRequest       CreateVpcPeeringAuthorizationRequest                       (Parm, NativeAccessSpecifierPublic)
	 * 		struct FCreateVpcPeeringAuthorizationResult        CreateVpcPeeringAuthorizationResult                        (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::CreateVpcPeeringAuthorization(class UObject* WorldContextObject, bool* Success, const struct FCreateVpcPeeringAuthorizationRequest& CreateVpcPeeringAuthorizationRequest, struct FCreateVpcPeeringAuthorizationResult* CreateVpcPeeringAuthorizationResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.CreateVpcPeeringAuthorization");
		
		UGameLiftClientObject_CreateVpcPeeringAuthorization_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.CreateVpcPeeringAuthorizationRequest = CreateVpcPeeringAuthorizationRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (CreateVpcPeeringAuthorizationResult != nullptr)
			*CreateVpcPeeringAuthorizationResult = params.CreateVpcPeeringAuthorizationResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.CreateScript
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCreateScriptRequest                        CreateScriptRequest                                        (Parm, NativeAccessSpecifierPublic)
	 * 		struct FCreateScriptResult                         CreateScriptResult                                         (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::CreateScript(class UObject* WorldContextObject, bool* Success, const struct FCreateScriptRequest& CreateScriptRequest, struct FCreateScriptResult* CreateScriptResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.CreateScript");
		
		UGameLiftClientObject_CreateScript_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.CreateScriptRequest = CreateScriptRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (CreateScriptResult != nullptr)
			*CreateScriptResult = params.CreateScriptResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.CreatePlayerSessions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCreatePlayerSessionsRequest                CreatePlayerSessionsRequest                                (Parm, NativeAccessSpecifierPublic)
	 * 		struct FCreatePlayerSessionsResult                 CreatePlayerSessionsResult                                 (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::CreatePlayerSessions(class UObject* WorldContextObject, bool* Success, const struct FCreatePlayerSessionsRequest& CreatePlayerSessionsRequest, struct FCreatePlayerSessionsResult* CreatePlayerSessionsResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.CreatePlayerSessions");
		
		UGameLiftClientObject_CreatePlayerSessions_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.CreatePlayerSessionsRequest = CreatePlayerSessionsRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (CreatePlayerSessionsResult != nullptr)
			*CreatePlayerSessionsResult = params.CreatePlayerSessionsResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.CreatePlayerSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCreatePlayerSessionRequest                 CreatePlayerSessionRequest                                 (Parm, NativeAccessSpecifierPublic)
	 * 		struct FCreatePlayerSessionResult                  CreatePlayerSessionResult                                  (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::CreatePlayerSession(class UObject* WorldContextObject, bool* Success, const struct FCreatePlayerSessionRequest& CreatePlayerSessionRequest, struct FCreatePlayerSessionResult* CreatePlayerSessionResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.CreatePlayerSession");
		
		UGameLiftClientObject_CreatePlayerSession_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.CreatePlayerSessionRequest = CreatePlayerSessionRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (CreatePlayerSessionResult != nullptr)
			*CreatePlayerSessionResult = params.CreatePlayerSessionResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.CreateMatchmakingRuleSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCreateMatchmakingRuleSetRequest            CreateMatchmakingRuleSetRequest                            (Parm, NativeAccessSpecifierPublic)
	 * 		struct FCreateMatchmakingRuleSetResult             CreateMatchmakingRuleSetResult                             (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::CreateMatchmakingRuleSet(class UObject* WorldContextObject, bool* Success, const struct FCreateMatchmakingRuleSetRequest& CreateMatchmakingRuleSetRequest, struct FCreateMatchmakingRuleSetResult* CreateMatchmakingRuleSetResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.CreateMatchmakingRuleSet");
		
		UGameLiftClientObject_CreateMatchmakingRuleSet_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.CreateMatchmakingRuleSetRequest = CreateMatchmakingRuleSetRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (CreateMatchmakingRuleSetResult != nullptr)
			*CreateMatchmakingRuleSetResult = params.CreateMatchmakingRuleSetResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.CreateMatchmakingConfiguration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCreateMatchmakingConfigurationRequest      CreateMatchmakingConfigurationRequest                      (Parm, NativeAccessSpecifierPublic)
	 * 		struct FCreateMatchmakingConfigurationResult       CreateMatchmakingConfigurationResult                       (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::CreateMatchmakingConfiguration(class UObject* WorldContextObject, bool* Success, const struct FCreateMatchmakingConfigurationRequest& CreateMatchmakingConfigurationRequest, struct FCreateMatchmakingConfigurationResult* CreateMatchmakingConfigurationResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.CreateMatchmakingConfiguration");
		
		UGameLiftClientObject_CreateMatchmakingConfiguration_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.CreateMatchmakingConfigurationRequest = CreateMatchmakingConfigurationRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (CreateMatchmakingConfigurationResult != nullptr)
			*CreateMatchmakingConfigurationResult = params.CreateMatchmakingConfigurationResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.CreateGameSessionQueue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCreateGameSessionQueueRequest              CreateGameSessionQueueRequest                              (Parm, NativeAccessSpecifierPublic)
	 * 		struct FCreateGameSessionQueueResult               CreateGameSessionQueueResult                               (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::CreateGameSessionQueue(class UObject* WorldContextObject, bool* Success, const struct FCreateGameSessionQueueRequest& CreateGameSessionQueueRequest, struct FCreateGameSessionQueueResult* CreateGameSessionQueueResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.CreateGameSessionQueue");
		
		UGameLiftClientObject_CreateGameSessionQueue_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.CreateGameSessionQueueRequest = CreateGameSessionQueueRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (CreateGameSessionQueueResult != nullptr)
			*CreateGameSessionQueueResult = params.CreateGameSessionQueueResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.CreateGameSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCreateGameSessionRequest                   CreateGameSessionRequest                                   (Parm, NativeAccessSpecifierPublic)
	 * 		struct FCreateGameSessionResult                    CreateGameSessionResult                                    (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::CreateGameSession(class UObject* WorldContextObject, bool* Success, const struct FCreateGameSessionRequest& CreateGameSessionRequest, struct FCreateGameSessionResult* CreateGameSessionResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.CreateGameSession");
		
		UGameLiftClientObject_CreateGameSession_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.CreateGameSessionRequest = CreateGameSessionRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (CreateGameSessionResult != nullptr)
			*CreateGameSessionResult = params.CreateGameSessionResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.CreateGameServerGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCreateGameServerGroupRequest               CreateGameServerGroupRequest                               (Parm, NativeAccessSpecifierPublic)
	 * 		struct FCreateGameServerGroupResult                CreateGameServerGroupResult                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::CreateGameServerGroup(class UObject* WorldContextObject, bool* Success, const struct FCreateGameServerGroupRequest& CreateGameServerGroupRequest, struct FCreateGameServerGroupResult* CreateGameServerGroupResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.CreateGameServerGroup");
		
		UGameLiftClientObject_CreateGameServerGroup_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.CreateGameServerGroupRequest = CreateGameServerGroupRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (CreateGameServerGroupResult != nullptr)
			*CreateGameServerGroupResult = params.CreateGameServerGroupResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.CreateGameLiftObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAWSCredentials                             credentials                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FAWSClientConfiguration                     clientConfiguration                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UGameLiftClientObject* UGameLiftClientObject::CreateGameLiftObject(const struct FAWSCredentials& credentials, const struct FAWSClientConfiguration& clientConfiguration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.CreateGameLiftObject");
		
		UGameLiftClientObject_CreateGameLiftObject_Params params {};
		params.credentials = credentials;
		params.clientConfiguration = clientConfiguration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.CreateFleetLocations
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAWSGameLiftCreateFleetLocationsRequest     createFleetLocationsRequest                                (Parm, NativeAccessSpecifierPublic)
	 * 		struct FAWSGameLiftCreateFleetLocationsResult      createFleetLocationsResult                                 (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::CreateFleetLocations(class UObject* WorldContextObject, bool* Success, const struct FAWSGameLiftCreateFleetLocationsRequest& createFleetLocationsRequest, struct FAWSGameLiftCreateFleetLocationsResult* createFleetLocationsResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.CreateFleetLocations");
		
		UGameLiftClientObject_CreateFleetLocations_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.createFleetLocationsRequest = createFleetLocationsRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (createFleetLocationsResult != nullptr)
			*createFleetLocationsResult = params.createFleetLocationsResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.CreateFleet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCreateFleetRequest                         CreateFleetRequest                                         (Parm, NativeAccessSpecifierPublic)
	 * 		struct FCreateFleetResult                          CreateFleetResult                                          (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::CreateFleet(class UObject* WorldContextObject, bool* Success, const struct FCreateFleetRequest& CreateFleetRequest, struct FCreateFleetResult* CreateFleetResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.CreateFleet");
		
		UGameLiftClientObject_CreateFleet_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.CreateFleetRequest = CreateFleetRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (CreateFleetResult != nullptr)
			*CreateFleetResult = params.CreateFleetResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.CreateBuild
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCreateBuildRequest                         CreateBuildRequest                                         (Parm, NativeAccessSpecifierPublic)
	 * 		struct FCreateBuildResult                          CreateBuildResult                                          (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::CreateBuild(class UObject* WorldContextObject, bool* Success, const struct FCreateBuildRequest& CreateBuildRequest, struct FCreateBuildResult* CreateBuildResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.CreateBuild");
		
		UGameLiftClientObject_CreateBuild_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.CreateBuildRequest = CreateBuildRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (CreateBuildResult != nullptr)
			*CreateBuildResult = params.CreateBuildResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.CreateAlias
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameLiftCreateAliasRequest                 createAliasRequest                                         (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameLiftCreateAliasResult                  createAliasResult                                          (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::CreateAlias(class UObject* WorldContextObject, bool* Success, const struct FGameLiftCreateAliasRequest& createAliasRequest, struct FGameLiftCreateAliasResult* createAliasResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.CreateAlias");
		
		UGameLiftClientObject_CreateAlias_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.createAliasRequest = createAliasRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (createAliasResult != nullptr)
			*createAliasResult = params.createAliasResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.ClaimGameServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FClaimGameServerRequest                     ClaimGameServerRequest                                     (Parm, NativeAccessSpecifierPublic)
	 * 		struct FClaimGameServerResult                      ClaimGameServerResult                                      (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::ClaimGameServer(class UObject* WorldContextObject, bool* Success, const struct FClaimGameServerRequest& ClaimGameServerRequest, struct FClaimGameServerResult* ClaimGameServerResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.ClaimGameServer");
		
		UGameLiftClientObject_ClaimGameServer_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ClaimGameServerRequest = ClaimGameServerRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (ClaimGameServerResult != nullptr)
			*ClaimGameServerResult = params.ClaimGameServerResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftClientObject.AcceptMatch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAcceptMatchRequest                         AcceptMatchRequest                                         (Parm, NativeAccessSpecifierPublic)
	 * 		struct FAcceptMatchResult                          AcceptMatchResult                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EGameLiftError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientObject::AcceptMatch(class UObject* WorldContextObject, bool* Success, const struct FAcceptMatchRequest& AcceptMatchRequest, struct FAcceptMatchResult* AcceptMatchResult, EGameLiftError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftClientObject.AcceptMatch");
		
		UGameLiftClientObject_AcceptMatch_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AcceptMatchRequest = AcceptMatchRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (AcceptMatchResult != nullptr)
			*AcceptMatchResult = params.AcceptMatchResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameLiftClientObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameLiftClientObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameLift.GameLiftClientObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLift.GameLiftUtils.IdentifyGameLiftARNType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      awsResourceName                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EGameLiftARNType UGameLiftUtils::IdentifyGameLiftARNType(const class FString& awsResourceName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLift.GameLiftUtils.IdentifyGameLiftARNType");
		
		UGameLiftUtils_IdentifyGameLiftARNType_Params params {};
		params.awsResourceName = awsResourceName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameLiftUtils.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameLiftUtils::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameLift.GameLiftUtils");
		return ptr;
	}

}


