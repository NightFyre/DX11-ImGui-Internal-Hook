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
	 * 		Name   -> Function Lambda.LambdaClientObject.UpdateFunctionEventInvokeConfig
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUpdateFunctionEventInvokeConfigRequest     UpdateFunctionEventInvokeConfigRequest                     (Parm, NativeAccessSpecifierPublic)
	 * 		struct FUpdateFunctionEventInvokeConfigResult      UpdateFunctionEventInvokeConfigResult                      (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::UpdateFunctionEventInvokeConfig(class UObject* WorldContextObject, bool* Success, const struct FUpdateFunctionEventInvokeConfigRequest& UpdateFunctionEventInvokeConfigRequest, struct FUpdateFunctionEventInvokeConfigResult* UpdateFunctionEventInvokeConfigResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.UpdateFunctionEventInvokeConfig");
		
		ULambdaClientObject_UpdateFunctionEventInvokeConfig_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.UpdateFunctionEventInvokeConfigRequest = UpdateFunctionEventInvokeConfigRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (UpdateFunctionEventInvokeConfigResult != nullptr)
			*UpdateFunctionEventInvokeConfigResult = params.UpdateFunctionEventInvokeConfigResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lambda.LambdaClientObject.UpdateFunctionConfiguration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUpdateFunctionConfigurationRequest         UpdateFunctionConfigurationRequest                         (Parm, NativeAccessSpecifierPublic)
	 * 		struct FUpdateFunctionConfigurationResult          UpdateFunctionConfigurationResult                          (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::UpdateFunctionConfiguration(class UObject* WorldContextObject, bool* Success, const struct FUpdateFunctionConfigurationRequest& UpdateFunctionConfigurationRequest, struct FUpdateFunctionConfigurationResult* UpdateFunctionConfigurationResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.UpdateFunctionConfiguration");
		
		ULambdaClientObject_UpdateFunctionConfiguration_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.UpdateFunctionConfigurationRequest = UpdateFunctionConfigurationRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (UpdateFunctionConfigurationResult != nullptr)
			*UpdateFunctionConfigurationResult = params.UpdateFunctionConfigurationResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lambda.LambdaClientObject.UpdateFunctionCode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUpdateFunctionCodeRequest                  UpdateFunctionCodeRequest                                  (Parm, NativeAccessSpecifierPublic)
	 * 		struct FUpdateFunctionCodeResult                   UpdateFunctionCodeResult                                   (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::UpdateFunctionCode(class UObject* WorldContextObject, bool* Success, const struct FUpdateFunctionCodeRequest& UpdateFunctionCodeRequest, struct FUpdateFunctionCodeResult* UpdateFunctionCodeResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.UpdateFunctionCode");
		
		ULambdaClientObject_UpdateFunctionCode_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.UpdateFunctionCodeRequest = UpdateFunctionCodeRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (UpdateFunctionCodeResult != nullptr)
			*UpdateFunctionCodeResult = params.UpdateFunctionCodeResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lambda.LambdaClientObject.UpdateEventSourceMapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUpdateEventSourceMappingRequest            UpdateEventSourceMappingRequest                            (Parm, NativeAccessSpecifierPublic)
	 * 		struct FUpdateEventSourceMappingResult             UpdateEventSourceMappingResult                             (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::UpdateEventSourceMapping(class UObject* WorldContextObject, bool* Success, const struct FUpdateEventSourceMappingRequest& UpdateEventSourceMappingRequest, struct FUpdateEventSourceMappingResult* UpdateEventSourceMappingResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.UpdateEventSourceMapping");
		
		ULambdaClientObject_UpdateEventSourceMapping_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.UpdateEventSourceMappingRequest = UpdateEventSourceMappingRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (UpdateEventSourceMappingResult != nullptr)
			*UpdateEventSourceMappingResult = params.UpdateEventSourceMappingResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lambda.LambdaClientObject.UpdateCodeSigningConfig
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAWSLambdaUpdateCodeSigningConfigRequest    updateCodeSigningConfigRequest                             (Parm, NativeAccessSpecifierPublic)
	 * 		struct FAWSLambdaUpdateCodeSigningConfigResult     updateCodeSigningConfigResult                              (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::UpdateCodeSigningConfig(class UObject* WorldContextObject, bool* Success, const struct FAWSLambdaUpdateCodeSigningConfigRequest& updateCodeSigningConfigRequest, struct FAWSLambdaUpdateCodeSigningConfigResult* updateCodeSigningConfigResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.UpdateCodeSigningConfig");
		
		ULambdaClientObject_UpdateCodeSigningConfig_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.updateCodeSigningConfigRequest = updateCodeSigningConfigRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (updateCodeSigningConfigResult != nullptr)
			*updateCodeSigningConfigResult = params.updateCodeSigningConfigResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lambda.LambdaClientObject.UpdateAlias
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLambdaUpdateAliasRequest                   updateAliasRequest                                         (Parm, NativeAccessSpecifierPublic)
	 * 		struct FLambdaUpdateAliasResult                    updateAliasResult                                          (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::UpdateAlias(class UObject* WorldContextObject, bool* Success, const struct FLambdaUpdateAliasRequest& updateAliasRequest, struct FLambdaUpdateAliasResult* updateAliasResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.UpdateAlias");
		
		ULambdaClientObject_UpdateAlias_Params params {};
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
	 * 		Name   -> Function Lambda.LambdaClientObject.UntagResource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLambdaUntagResourceRequest                 untagResourceRequest                                       (Parm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::UntagResource(class UObject* WorldContextObject, bool* Success, const struct FLambdaUntagResourceRequest& untagResourceRequest, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.UntagResource");
		
		ULambdaClientObject_UntagResource_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.untagResourceRequest = untagResourceRequest;
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
	 * 		Name   -> Function Lambda.LambdaClientObject.TagResource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLambdaTagResourceRequest                   tagResourceRequest                                         (Parm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::TagResource(class UObject* WorldContextObject, bool* Success, const struct FLambdaTagResourceRequest& tagResourceRequest, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.TagResource");
		
		ULambdaClientObject_TagResource_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.tagResourceRequest = tagResourceRequest;
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
	 * 		Name   -> Function Lambda.LambdaClientObject.RemovePermission
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRemovePermissionRequest                    RemovePermissionRequest                                    (Parm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::RemovePermission(class UObject* WorldContextObject, bool* Success, const struct FRemovePermissionRequest& RemovePermissionRequest, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.RemovePermission");
		
		ULambdaClientObject_RemovePermission_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.RemovePermissionRequest = RemovePermissionRequest;
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
	 * 		Name   -> Function Lambda.LambdaClientObject.RemoveLayerVersionPermission
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRemoveLayerVersionPermissionRequest        RemoveLayerVersionPermissionRequest                        (Parm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::RemoveLayerVersionPermission(class UObject* WorldContextObject, bool* Success, const struct FRemoveLayerVersionPermissionRequest& RemoveLayerVersionPermissionRequest, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.RemoveLayerVersionPermission");
		
		ULambdaClientObject_RemoveLayerVersionPermission_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.RemoveLayerVersionPermissionRequest = RemoveLayerVersionPermissionRequest;
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
	 * 		Name   -> Function Lambda.LambdaClientObject.PutProvisionedConcurrencyConfig
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPutProvisionedConcurrencyConfigRequest     PutProvisionedConcurrencyConfigRequest                     (Parm, NativeAccessSpecifierPublic)
	 * 		struct FPutProvisionedConcurrencyConfigResult      PutProvisionedConcurrencyConfigResult                      (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::PutProvisionedConcurrencyConfig(class UObject* WorldContextObject, bool* Success, const struct FPutProvisionedConcurrencyConfigRequest& PutProvisionedConcurrencyConfigRequest, struct FPutProvisionedConcurrencyConfigResult* PutProvisionedConcurrencyConfigResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.PutProvisionedConcurrencyConfig");
		
		ULambdaClientObject_PutProvisionedConcurrencyConfig_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PutProvisionedConcurrencyConfigRequest = PutProvisionedConcurrencyConfigRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (PutProvisionedConcurrencyConfigResult != nullptr)
			*PutProvisionedConcurrencyConfigResult = params.PutProvisionedConcurrencyConfigResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lambda.LambdaClientObject.PutFunctionEventInvokeConfig
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPutFunctionEventInvokeConfigRequest        PutFunctionEventInvokeConfigRequest                        (Parm, NativeAccessSpecifierPublic)
	 * 		struct FPutFunctionEventInvokeConfigResult         PutFunctionEventInvokeConfigResult                         (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::PutFunctionEventInvokeConfig(class UObject* WorldContextObject, bool* Success, const struct FPutFunctionEventInvokeConfigRequest& PutFunctionEventInvokeConfigRequest, struct FPutFunctionEventInvokeConfigResult* PutFunctionEventInvokeConfigResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.PutFunctionEventInvokeConfig");
		
		ULambdaClientObject_PutFunctionEventInvokeConfig_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PutFunctionEventInvokeConfigRequest = PutFunctionEventInvokeConfigRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (PutFunctionEventInvokeConfigResult != nullptr)
			*PutFunctionEventInvokeConfigResult = params.PutFunctionEventInvokeConfigResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lambda.LambdaClientObject.PutFunctionConcurrency
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPutFunctionConcurrencyRequest              PutFunctionConcurrencyRequest                              (Parm, NativeAccessSpecifierPublic)
	 * 		struct FPutFunctionConcurrencyResult               PutFunctionConcurrencyResult                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::PutFunctionConcurrency(class UObject* WorldContextObject, bool* Success, const struct FPutFunctionConcurrencyRequest& PutFunctionConcurrencyRequest, struct FPutFunctionConcurrencyResult* PutFunctionConcurrencyResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.PutFunctionConcurrency");
		
		ULambdaClientObject_PutFunctionConcurrency_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PutFunctionConcurrencyRequest = PutFunctionConcurrencyRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (PutFunctionConcurrencyResult != nullptr)
			*PutFunctionConcurrencyResult = params.PutFunctionConcurrencyResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lambda.LambdaClientObject.PutFunctionCodeSigningConfig
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAWSLambdaPutFunctionCodeSigningConfigRequest putFunctionCodeSigningConfigRequest                        (Parm, NativeAccessSpecifierPublic)
	 * 		struct FAWSLambdaPutFunctionCodeSigningConfigResult putFunctionCodeSigningConfigResult                         (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::PutFunctionCodeSigningConfig(class UObject* WorldContextObject, bool* Success, const struct FAWSLambdaPutFunctionCodeSigningConfigRequest& putFunctionCodeSigningConfigRequest, struct FAWSLambdaPutFunctionCodeSigningConfigResult* putFunctionCodeSigningConfigResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.PutFunctionCodeSigningConfig");
		
		ULambdaClientObject_PutFunctionCodeSigningConfig_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.putFunctionCodeSigningConfigRequest = putFunctionCodeSigningConfigRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (putFunctionCodeSigningConfigResult != nullptr)
			*putFunctionCodeSigningConfigResult = params.putFunctionCodeSigningConfigResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lambda.LambdaClientObject.PublishVersion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPublishVersionRequest                      PublishVersionRequest                                      (Parm, NativeAccessSpecifierPublic)
	 * 		struct FPublishVersionResult                       PublishVersionResult                                       (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::PublishVersion(class UObject* WorldContextObject, bool* Success, const struct FPublishVersionRequest& PublishVersionRequest, struct FPublishVersionResult* PublishVersionResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.PublishVersion");
		
		ULambdaClientObject_PublishVersion_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PublishVersionRequest = PublishVersionRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (PublishVersionResult != nullptr)
			*PublishVersionResult = params.PublishVersionResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lambda.LambdaClientObject.PublishLayerVersion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPublishLayerVersionRequest                 PublishLayerVersionRequest                                 (Parm, NativeAccessSpecifierPublic)
	 * 		struct FPublishLayerVersionResult                  PublishLayerVersionResult                                  (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::PublishLayerVersion(class UObject* WorldContextObject, bool* Success, const struct FPublishLayerVersionRequest& PublishLayerVersionRequest, struct FPublishLayerVersionResult* PublishLayerVersionResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.PublishLayerVersion");
		
		ULambdaClientObject_PublishLayerVersion_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PublishLayerVersionRequest = PublishLayerVersionRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (PublishLayerVersionResult != nullptr)
			*PublishLayerVersionResult = params.PublishLayerVersionResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lambda.LambdaClientObject.ListVersionsByFunction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FListVersionsByFunctionRequest              ListVersionsByFunctionRequest                              (Parm, NativeAccessSpecifierPublic)
	 * 		struct FListVersionsByFunctionResult               ListVersionsByFunctionResult                               (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::ListVersionsByFunction(class UObject* WorldContextObject, bool* Success, const struct FListVersionsByFunctionRequest& ListVersionsByFunctionRequest, struct FListVersionsByFunctionResult* ListVersionsByFunctionResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.ListVersionsByFunction");
		
		ULambdaClientObject_ListVersionsByFunction_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ListVersionsByFunctionRequest = ListVersionsByFunctionRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (ListVersionsByFunctionResult != nullptr)
			*ListVersionsByFunctionResult = params.ListVersionsByFunctionResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lambda.LambdaClientObject.ListTags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FListTagsRequest                            ListTagsRequest                                            (Parm, NativeAccessSpecifierPublic)
	 * 		struct FListTagsResult                             ListTagsResult                                             (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::ListTags(class UObject* WorldContextObject, bool* Success, const struct FListTagsRequest& ListTagsRequest, struct FListTagsResult* ListTagsResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.ListTags");
		
		ULambdaClientObject_ListTags_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ListTagsRequest = ListTagsRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (ListTagsResult != nullptr)
			*ListTagsResult = params.ListTagsResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lambda.LambdaClientObject.ListProvisionedConcurrencyConfigs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FListProvisionedConcurrencyConfigsRequest   ListProvisionedConcurrencyConfigsRequest                   (Parm, NativeAccessSpecifierPublic)
	 * 		struct FListProvisionedConcurrencyConfigsResult    ListProvisionedConcurrencyConfigsResult                    (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::ListProvisionedConcurrencyConfigs(class UObject* WorldContextObject, bool* Success, const struct FListProvisionedConcurrencyConfigsRequest& ListProvisionedConcurrencyConfigsRequest, struct FListProvisionedConcurrencyConfigsResult* ListProvisionedConcurrencyConfigsResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.ListProvisionedConcurrencyConfigs");
		
		ULambdaClientObject_ListProvisionedConcurrencyConfigs_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ListProvisionedConcurrencyConfigsRequest = ListProvisionedConcurrencyConfigsRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (ListProvisionedConcurrencyConfigsResult != nullptr)
			*ListProvisionedConcurrencyConfigsResult = params.ListProvisionedConcurrencyConfigsResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lambda.LambdaClientObject.ListLayerVersions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FListLayerVersionsRequest                   ListLayerVersionsRequest                                   (Parm, NativeAccessSpecifierPublic)
	 * 		struct FListLayerVersionsResult                    ListLayerVersionsResult                                    (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::ListLayerVersions(class UObject* WorldContextObject, bool* Success, const struct FListLayerVersionsRequest& ListLayerVersionsRequest, struct FListLayerVersionsResult* ListLayerVersionsResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.ListLayerVersions");
		
		ULambdaClientObject_ListLayerVersions_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ListLayerVersionsRequest = ListLayerVersionsRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (ListLayerVersionsResult != nullptr)
			*ListLayerVersionsResult = params.ListLayerVersionsResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lambda.LambdaClientObject.ListLayers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FListLayersRequest                          ListLayersRequest                                          (Parm, NativeAccessSpecifierPublic)
	 * 		struct FListLayersResult                           ListLayersResult                                           (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::ListLayers(class UObject* WorldContextObject, bool* Success, const struct FListLayersRequest& ListLayersRequest, struct FListLayersResult* ListLayersResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.ListLayers");
		
		ULambdaClientObject_ListLayers_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ListLayersRequest = ListLayersRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (ListLayersResult != nullptr)
			*ListLayersResult = params.ListLayersResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lambda.LambdaClientObject.ListFunctionsByCodeSigningConfig
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAWSLambdaListFunctionsByCodeSigningConfigRequest listFunctionsByCodeSigningConfigRequest                    (Parm, NativeAccessSpecifierPublic)
	 * 		struct FAWSLambdaListFunctionsByCodeSigningConfigResult listFunctionsByCodeSigningConfigResult                     (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::ListFunctionsByCodeSigningConfig(class UObject* WorldContextObject, bool* Success, const struct FAWSLambdaListFunctionsByCodeSigningConfigRequest& listFunctionsByCodeSigningConfigRequest, struct FAWSLambdaListFunctionsByCodeSigningConfigResult* listFunctionsByCodeSigningConfigResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.ListFunctionsByCodeSigningConfig");
		
		ULambdaClientObject_ListFunctionsByCodeSigningConfig_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.listFunctionsByCodeSigningConfigRequest = listFunctionsByCodeSigningConfigRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (listFunctionsByCodeSigningConfigResult != nullptr)
			*listFunctionsByCodeSigningConfigResult = params.listFunctionsByCodeSigningConfigResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lambda.LambdaClientObject.ListFunctions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FListFunctionsRequest                       ListFunctionsRequest                                       (Parm, NativeAccessSpecifierPublic)
	 * 		struct FListFunctionsResult                        ListFunctionsResult                                        (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::ListFunctions(class UObject* WorldContextObject, bool* Success, const struct FListFunctionsRequest& ListFunctionsRequest, struct FListFunctionsResult* ListFunctionsResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.ListFunctions");
		
		ULambdaClientObject_ListFunctions_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ListFunctionsRequest = ListFunctionsRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (ListFunctionsResult != nullptr)
			*ListFunctionsResult = params.ListFunctionsResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lambda.LambdaClientObject.ListFunctionEventInvokeConfigs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FListFunctionEventInvokeConfigsRequest      ListFunctionEventInvokeConfigsRequest                      (Parm, NativeAccessSpecifierPublic)
	 * 		struct FListFunctionEventInvokeConfigsResult       ListFunctionEventInvokeConfigsResult                       (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::ListFunctionEventInvokeConfigs(class UObject* WorldContextObject, bool* Success, const struct FListFunctionEventInvokeConfigsRequest& ListFunctionEventInvokeConfigsRequest, struct FListFunctionEventInvokeConfigsResult* ListFunctionEventInvokeConfigsResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.ListFunctionEventInvokeConfigs");
		
		ULambdaClientObject_ListFunctionEventInvokeConfigs_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ListFunctionEventInvokeConfigsRequest = ListFunctionEventInvokeConfigsRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (ListFunctionEventInvokeConfigsResult != nullptr)
			*ListFunctionEventInvokeConfigsResult = params.ListFunctionEventInvokeConfigsResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lambda.LambdaClientObject.ListEventSourceMappings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FListEventSourceMappingsRequest             ListEventSourceMappingsRequest                             (Parm, NativeAccessSpecifierPublic)
	 * 		struct FListEventSourceMappingsResult              ListEventSourceMappingsResult                              (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::ListEventSourceMappings(class UObject* WorldContextObject, bool* Success, const struct FListEventSourceMappingsRequest& ListEventSourceMappingsRequest, struct FListEventSourceMappingsResult* ListEventSourceMappingsResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.ListEventSourceMappings");
		
		ULambdaClientObject_ListEventSourceMappings_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ListEventSourceMappingsRequest = ListEventSourceMappingsRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (ListEventSourceMappingsResult != nullptr)
			*ListEventSourceMappingsResult = params.ListEventSourceMappingsResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lambda.LambdaClientObject.ListCodeSigningConfigs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAWSLambdaListCodeSigningConfigsRequest     listCodeSigningConfigsRequest                              (Parm, NativeAccessSpecifierPublic)
	 * 		struct FAWSLambdaListCodeSigningConfigsResult      listCodeSigningConfigsResult                               (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::ListCodeSigningConfigs(class UObject* WorldContextObject, bool* Success, const struct FAWSLambdaListCodeSigningConfigsRequest& listCodeSigningConfigsRequest, struct FAWSLambdaListCodeSigningConfigsResult* listCodeSigningConfigsResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.ListCodeSigningConfigs");
		
		ULambdaClientObject_ListCodeSigningConfigs_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.listCodeSigningConfigsRequest = listCodeSigningConfigsRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (listCodeSigningConfigsResult != nullptr)
			*listCodeSigningConfigsResult = params.listCodeSigningConfigsResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lambda.LambdaClientObject.ListAliases
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLambdaListAliasesRequest                   listAliasesRequest                                         (Parm, NativeAccessSpecifierPublic)
	 * 		struct FLambdaListAliasesResult                    listAliasesResult                                          (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::ListAliases(class UObject* WorldContextObject, bool* Success, const struct FLambdaListAliasesRequest& listAliasesRequest, struct FLambdaListAliasesResult* listAliasesResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.ListAliases");
		
		ULambdaClientObject_ListAliases_Params params {};
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
	 * 		Name   -> Function Lambda.LambdaClientObject.Invoke
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInvokeRequest                              InvokeRequest                                              (Parm, NativeAccessSpecifierPublic)
	 * 		struct FInvokeResult                               InvokeResult                                               (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::Invoke(class UObject* WorldContextObject, bool* Success, const struct FInvokeRequest& InvokeRequest, struct FInvokeResult* InvokeResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.Invoke");
		
		ULambdaClientObject_Invoke_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.InvokeRequest = InvokeRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (InvokeResult != nullptr)
			*InvokeResult = params.InvokeResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lambda.LambdaClientObject.GetProvisionedConcurrencyConfig
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGetProvisionedConcurrencyConfigRequest     GetProvisionedConcurrencyConfigRequest                     (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGetProvisionedConcurrencyConfigResult      GetProvisionedConcurrencyConfigResult                      (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::GetProvisionedConcurrencyConfig(class UObject* WorldContextObject, bool* Success, const struct FGetProvisionedConcurrencyConfigRequest& GetProvisionedConcurrencyConfigRequest, struct FGetProvisionedConcurrencyConfigResult* GetProvisionedConcurrencyConfigResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.GetProvisionedConcurrencyConfig");
		
		ULambdaClientObject_GetProvisionedConcurrencyConfig_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.GetProvisionedConcurrencyConfigRequest = GetProvisionedConcurrencyConfigRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (GetProvisionedConcurrencyConfigResult != nullptr)
			*GetProvisionedConcurrencyConfigResult = params.GetProvisionedConcurrencyConfigResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lambda.LambdaClientObject.GetPolicy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGetPolicyRequest                           GetPolicyRequest                                           (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGetPolicyResult                            GetPolicyResult                                            (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::GetPolicy(class UObject* WorldContextObject, bool* Success, const struct FGetPolicyRequest& GetPolicyRequest, struct FGetPolicyResult* GetPolicyResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.GetPolicy");
		
		ULambdaClientObject_GetPolicy_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.GetPolicyRequest = GetPolicyRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (GetPolicyResult != nullptr)
			*GetPolicyResult = params.GetPolicyResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lambda.LambdaClientObject.GetLayerVersionPolicy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGetLayerVersionPolicyRequest               GetLayerVersionPolicyRequest                               (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGetLayerVersionPolicyResult                GetLayerVersionPolicyResult                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::GetLayerVersionPolicy(class UObject* WorldContextObject, bool* Success, const struct FGetLayerVersionPolicyRequest& GetLayerVersionPolicyRequest, struct FGetLayerVersionPolicyResult* GetLayerVersionPolicyResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.GetLayerVersionPolicy");
		
		ULambdaClientObject_GetLayerVersionPolicy_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.GetLayerVersionPolicyRequest = GetLayerVersionPolicyRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (GetLayerVersionPolicyResult != nullptr)
			*GetLayerVersionPolicyResult = params.GetLayerVersionPolicyResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lambda.LambdaClientObject.GetLayerVersionByArn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGetLayerVersionByArnRequest                GetLayerVersionByArnRequest                                (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGetLayerVersionByArnResult                 GetLayerVersionByArnResult                                 (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::GetLayerVersionByArn(class UObject* WorldContextObject, bool* Success, const struct FGetLayerVersionByArnRequest& GetLayerVersionByArnRequest, struct FGetLayerVersionByArnResult* GetLayerVersionByArnResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.GetLayerVersionByArn");
		
		ULambdaClientObject_GetLayerVersionByArn_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.GetLayerVersionByArnRequest = GetLayerVersionByArnRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (GetLayerVersionByArnResult != nullptr)
			*GetLayerVersionByArnResult = params.GetLayerVersionByArnResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lambda.LambdaClientObject.GetLayerVersion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGetLayerVersionRequest                     GetLayerVersionRequest                                     (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGetLayerVersionResult                      GetLayerVersionResult                                      (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::GetLayerVersion(class UObject* WorldContextObject, bool* Success, const struct FGetLayerVersionRequest& GetLayerVersionRequest, struct FGetLayerVersionResult* GetLayerVersionResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.GetLayerVersion");
		
		ULambdaClientObject_GetLayerVersion_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.GetLayerVersionRequest = GetLayerVersionRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (GetLayerVersionResult != nullptr)
			*GetLayerVersionResult = params.GetLayerVersionResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lambda.LambdaClientObject.GetFunctionEventInvokeConfig
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGetFunctionEventInvokeConfigRequest        GetFunctionEventInvokeConfigRequest                        (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGetFunctionEventInvokeConfigResult         GetFunctionEventInvokeConfigResult                         (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::GetFunctionEventInvokeConfig(class UObject* WorldContextObject, bool* Success, const struct FGetFunctionEventInvokeConfigRequest& GetFunctionEventInvokeConfigRequest, struct FGetFunctionEventInvokeConfigResult* GetFunctionEventInvokeConfigResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.GetFunctionEventInvokeConfig");
		
		ULambdaClientObject_GetFunctionEventInvokeConfig_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.GetFunctionEventInvokeConfigRequest = GetFunctionEventInvokeConfigRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (GetFunctionEventInvokeConfigResult != nullptr)
			*GetFunctionEventInvokeConfigResult = params.GetFunctionEventInvokeConfigResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lambda.LambdaClientObject.GetFunctionConfiguration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGetFunctionConfigurationRequest            GetFunctionConfigurationRequest                            (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGetFunctionConfigurationResult             GetFunctionConfigurationResult                             (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::GetFunctionConfiguration(class UObject* WorldContextObject, bool* Success, const struct FGetFunctionConfigurationRequest& GetFunctionConfigurationRequest, struct FGetFunctionConfigurationResult* GetFunctionConfigurationResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.GetFunctionConfiguration");
		
		ULambdaClientObject_GetFunctionConfiguration_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.GetFunctionConfigurationRequest = GetFunctionConfigurationRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (GetFunctionConfigurationResult != nullptr)
			*GetFunctionConfigurationResult = params.GetFunctionConfigurationResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lambda.LambdaClientObject.GetFunctionConcurrency
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGetFunctionConcurrencyRequest              GetFunctionConcurrencyRequest                              (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGetFunctionConcurrencyResult               GetFunctionConcurrencyResult                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::GetFunctionConcurrency(class UObject* WorldContextObject, bool* Success, const struct FGetFunctionConcurrencyRequest& GetFunctionConcurrencyRequest, struct FGetFunctionConcurrencyResult* GetFunctionConcurrencyResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.GetFunctionConcurrency");
		
		ULambdaClientObject_GetFunctionConcurrency_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.GetFunctionConcurrencyRequest = GetFunctionConcurrencyRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (GetFunctionConcurrencyResult != nullptr)
			*GetFunctionConcurrencyResult = params.GetFunctionConcurrencyResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lambda.LambdaClientObject.GetFunctionCodeSigningConfig
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAWSLambdaGetFunctionCodeSigningConfigRequest getFunctionCodeSigningConfigRequest                        (Parm, NativeAccessSpecifierPublic)
	 * 		struct FAWSLambdaGetFunctionCodeSigningConfigResult getFunctionCodeSigningConfigResult                         (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::GetFunctionCodeSigningConfig(class UObject* WorldContextObject, bool* Success, const struct FAWSLambdaGetFunctionCodeSigningConfigRequest& getFunctionCodeSigningConfigRequest, struct FAWSLambdaGetFunctionCodeSigningConfigResult* getFunctionCodeSigningConfigResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.GetFunctionCodeSigningConfig");
		
		ULambdaClientObject_GetFunctionCodeSigningConfig_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.getFunctionCodeSigningConfigRequest = getFunctionCodeSigningConfigRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (getFunctionCodeSigningConfigResult != nullptr)
			*getFunctionCodeSigningConfigResult = params.getFunctionCodeSigningConfigResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lambda.LambdaClientObject.GetFunction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGetFunctionRequest                         GetFunctionRequest                                         (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGetFunctionResult                          GetFunctionResult                                          (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::GetFunction(class UObject* WorldContextObject, bool* Success, const struct FGetFunctionRequest& GetFunctionRequest, struct FGetFunctionResult* GetFunctionResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.GetFunction");
		
		ULambdaClientObject_GetFunction_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.GetFunctionRequest = GetFunctionRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (GetFunctionResult != nullptr)
			*GetFunctionResult = params.GetFunctionResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lambda.LambdaClientObject.GetEventSourceMapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGetEventSourceMappingRequest               GetEventSourceMappingRequest                               (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGetEventSourceMappingResult                GetEventSourceMappingResult                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::GetEventSourceMapping(class UObject* WorldContextObject, bool* Success, const struct FGetEventSourceMappingRequest& GetEventSourceMappingRequest, struct FGetEventSourceMappingResult* GetEventSourceMappingResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.GetEventSourceMapping");
		
		ULambdaClientObject_GetEventSourceMapping_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.GetEventSourceMappingRequest = GetEventSourceMappingRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (GetEventSourceMappingResult != nullptr)
			*GetEventSourceMappingResult = params.GetEventSourceMappingResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lambda.LambdaClientObject.GetCodeSigningConfig
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAWSLambdaGetCodeSigningConfigRequest       getCodeSigningConfigRequest                                (Parm, NativeAccessSpecifierPublic)
	 * 		struct FAWSLambdaGetCodeSigningConfigResult        getCodeSigningConfigResult                                 (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::GetCodeSigningConfig(class UObject* WorldContextObject, bool* Success, const struct FAWSLambdaGetCodeSigningConfigRequest& getCodeSigningConfigRequest, struct FAWSLambdaGetCodeSigningConfigResult* getCodeSigningConfigResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.GetCodeSigningConfig");
		
		ULambdaClientObject_GetCodeSigningConfig_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.getCodeSigningConfigRequest = getCodeSigningConfigRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (getCodeSigningConfigResult != nullptr)
			*getCodeSigningConfigResult = params.getCodeSigningConfigResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lambda.LambdaClientObject.GetAlias
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGetAliasRequest                            GetAliasRequest                                            (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGetAliasResult                             GetAliasResult                                             (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::GetAlias(class UObject* WorldContextObject, bool* Success, const struct FGetAliasRequest& GetAliasRequest, struct FGetAliasResult* GetAliasResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.GetAlias");
		
		ULambdaClientObject_GetAlias_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.GetAliasRequest = GetAliasRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (GetAliasResult != nullptr)
			*GetAliasResult = params.GetAliasResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lambda.LambdaClientObject.GetAccountSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGetAccountSettingsRequest                  GetAccountSettingsRequest                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FGetAccountSettingsResult                   GetAccountSettingsResult                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::GetAccountSettings(class UObject* WorldContextObject, bool* Success, const struct FGetAccountSettingsRequest& GetAccountSettingsRequest, struct FGetAccountSettingsResult* GetAccountSettingsResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.GetAccountSettings");
		
		ULambdaClientObject_GetAccountSettings_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.GetAccountSettingsRequest = GetAccountSettingsRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (GetAccountSettingsResult != nullptr)
			*GetAccountSettingsResult = params.GetAccountSettingsResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lambda.LambdaClientObject.DeleteProvisionedConcurrencyConfig
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDeleteProvisionedConcurrencyConfigRequest  DeleteProvisionedConcurrencyConfigRequest                  (Parm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::DeleteProvisionedConcurrencyConfig(class UObject* WorldContextObject, bool* Success, const struct FDeleteProvisionedConcurrencyConfigRequest& DeleteProvisionedConcurrencyConfigRequest, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.DeleteProvisionedConcurrencyConfig");
		
		ULambdaClientObject_DeleteProvisionedConcurrencyConfig_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DeleteProvisionedConcurrencyConfigRequest = DeleteProvisionedConcurrencyConfigRequest;
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
	 * 		Name   -> Function Lambda.LambdaClientObject.DeleteLayerVersion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDeleteLayerVersionRequest                  DeleteLayerVersionRequest                                  (Parm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::DeleteLayerVersion(class UObject* WorldContextObject, bool* Success, const struct FDeleteLayerVersionRequest& DeleteLayerVersionRequest, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.DeleteLayerVersion");
		
		ULambdaClientObject_DeleteLayerVersion_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DeleteLayerVersionRequest = DeleteLayerVersionRequest;
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
	 * 		Name   -> Function Lambda.LambdaClientObject.DeleteFunctionEventInvokeConfig
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDeleteFunctionEventInvokeConfigRequest     DeleteFunctionEventInvokeConfigRequest                     (Parm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::DeleteFunctionEventInvokeConfig(class UObject* WorldContextObject, bool* Success, const struct FDeleteFunctionEventInvokeConfigRequest& DeleteFunctionEventInvokeConfigRequest, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.DeleteFunctionEventInvokeConfig");
		
		ULambdaClientObject_DeleteFunctionEventInvokeConfig_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DeleteFunctionEventInvokeConfigRequest = DeleteFunctionEventInvokeConfigRequest;
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
	 * 		Name   -> Function Lambda.LambdaClientObject.DeleteFunctionConcurrency
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDeleteFunctionConcurrencyRequest           DeleteFunctionConcurrencyRequest                           (Parm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::DeleteFunctionConcurrency(class UObject* WorldContextObject, bool* Success, const struct FDeleteFunctionConcurrencyRequest& DeleteFunctionConcurrencyRequest, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.DeleteFunctionConcurrency");
		
		ULambdaClientObject_DeleteFunctionConcurrency_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DeleteFunctionConcurrencyRequest = DeleteFunctionConcurrencyRequest;
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
	 * 		Name   -> Function Lambda.LambdaClientObject.DeleteFunctionCodeSigningConfig
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAWSLambdaDeleteFunctionCodeSigningConfigRequest deleteFunctionCodeSigningConfigRequest                     (Parm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::DeleteFunctionCodeSigningConfig(class UObject* WorldContextObject, bool* Success, const struct FAWSLambdaDeleteFunctionCodeSigningConfigRequest& deleteFunctionCodeSigningConfigRequest, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.DeleteFunctionCodeSigningConfig");
		
		ULambdaClientObject_DeleteFunctionCodeSigningConfig_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.deleteFunctionCodeSigningConfigRequest = deleteFunctionCodeSigningConfigRequest;
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
	 * 		Name   -> Function Lambda.LambdaClientObject.DeleteFunction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDeleteFunctionRequest                      DeleteFunctionRequest                                      (Parm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::DeleteFunction(class UObject* WorldContextObject, bool* Success, const struct FDeleteFunctionRequest& DeleteFunctionRequest, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.DeleteFunction");
		
		ULambdaClientObject_DeleteFunction_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DeleteFunctionRequest = DeleteFunctionRequest;
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
	 * 		Name   -> Function Lambda.LambdaClientObject.DeleteEventSourceMapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDeleteEventSourceMappingRequest            DeleteEventSourceMappingRequest                            (Parm, NativeAccessSpecifierPublic)
	 * 		struct FDeleteEventSourceMappingResult             DeleteEventSourceMappingResult                             (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::DeleteEventSourceMapping(class UObject* WorldContextObject, bool* Success, const struct FDeleteEventSourceMappingRequest& DeleteEventSourceMappingRequest, struct FDeleteEventSourceMappingResult* DeleteEventSourceMappingResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.DeleteEventSourceMapping");
		
		ULambdaClientObject_DeleteEventSourceMapping_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DeleteEventSourceMappingRequest = DeleteEventSourceMappingRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (DeleteEventSourceMappingResult != nullptr)
			*DeleteEventSourceMappingResult = params.DeleteEventSourceMappingResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lambda.LambdaClientObject.DeleteCodeSigningConfig
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAWSLambdaDeleteCodeSigningConfigRequest    deleteCodeSigningConfigRequest                             (Parm, NativeAccessSpecifierPublic)
	 * 		struct FAWSLambdaDeleteCodeSigningConfigResult     deleteCodeSigningConfigResult                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::DeleteCodeSigningConfig(class UObject* WorldContextObject, bool* Success, const struct FAWSLambdaDeleteCodeSigningConfigRequest& deleteCodeSigningConfigRequest, struct FAWSLambdaDeleteCodeSigningConfigResult* deleteCodeSigningConfigResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.DeleteCodeSigningConfig");
		
		ULambdaClientObject_DeleteCodeSigningConfig_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.deleteCodeSigningConfigRequest = deleteCodeSigningConfigRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (deleteCodeSigningConfigResult != nullptr)
			*deleteCodeSigningConfigResult = params.deleteCodeSigningConfigResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lambda.LambdaClientObject.DeleteAlias
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLambdaDeleteAliasRequest                   deleteAliasRequest                                         (Parm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::DeleteAlias(class UObject* WorldContextObject, bool* Success, const struct FLambdaDeleteAliasRequest& deleteAliasRequest, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.DeleteAlias");
		
		ULambdaClientObject_DeleteAlias_Params params {};
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
	 * 		Name   -> Function Lambda.LambdaClientObject.CreateLambdaObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAWSCredentials                             credentials                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FAWSClientConfiguration                     clientConfiguration                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class ULambdaClientObject* ULambdaClientObject::CreateLambdaObject(const struct FAWSCredentials& credentials, const struct FAWSClientConfiguration& clientConfiguration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.CreateLambdaObject");
		
		ULambdaClientObject_CreateLambdaObject_Params params {};
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
	 * 		Name   -> Function Lambda.LambdaClientObject.CreateFunction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCreateFunctionRequest                      CreateFunctionRequest                                      (Parm, NativeAccessSpecifierPublic)
	 * 		struct FCreateFunctionResult                       CreateFunctionResult                                       (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::CreateFunction(class UObject* WorldContextObject, bool* Success, const struct FCreateFunctionRequest& CreateFunctionRequest, struct FCreateFunctionResult* CreateFunctionResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.CreateFunction");
		
		ULambdaClientObject_CreateFunction_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.CreateFunctionRequest = CreateFunctionRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (CreateFunctionResult != nullptr)
			*CreateFunctionResult = params.CreateFunctionResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lambda.LambdaClientObject.CreateEventSourceMapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCreateEventSourceMappingRequest            CreateEventSourceMappingRequest                            (Parm, NativeAccessSpecifierPublic)
	 * 		struct FCreateEventSourceMappingResult             CreateEventSourceMappingResult                             (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::CreateEventSourceMapping(class UObject* WorldContextObject, bool* Success, const struct FCreateEventSourceMappingRequest& CreateEventSourceMappingRequest, struct FCreateEventSourceMappingResult* CreateEventSourceMappingResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.CreateEventSourceMapping");
		
		ULambdaClientObject_CreateEventSourceMapping_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.CreateEventSourceMappingRequest = CreateEventSourceMappingRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (CreateEventSourceMappingResult != nullptr)
			*CreateEventSourceMappingResult = params.CreateEventSourceMappingResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lambda.LambdaClientObject.CreateCodeSigningConfig
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAWSLambdaCreateCodeSigningConfigRequest    createCodeSigningConfigRequest                             (Parm, NativeAccessSpecifierPublic)
	 * 		struct FAWSLambdaCreateCodeSigningConfigResult     createCodeSigningConfigResult                              (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::CreateCodeSigningConfig(class UObject* WorldContextObject, bool* Success, const struct FAWSLambdaCreateCodeSigningConfigRequest& createCodeSigningConfigRequest, struct FAWSLambdaCreateCodeSigningConfigResult* createCodeSigningConfigResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.CreateCodeSigningConfig");
		
		ULambdaClientObject_CreateCodeSigningConfig_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.createCodeSigningConfigRequest = createCodeSigningConfigRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (createCodeSigningConfigResult != nullptr)
			*createCodeSigningConfigResult = params.createCodeSigningConfigResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lambda.LambdaClientObject.CreateAlias
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLambdaCreateAliasRequest                   createAliasRequest                                         (Parm, NativeAccessSpecifierPublic)
	 * 		struct FLambdaCreateAliasResult                    createAliasResult                                          (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::CreateAlias(class UObject* WorldContextObject, bool* Success, const struct FLambdaCreateAliasRequest& createAliasRequest, struct FLambdaCreateAliasResult* createAliasResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.CreateAlias");
		
		ULambdaClientObject_CreateAlias_Params params {};
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
	 * 		Name   -> Function Lambda.LambdaClientObject.AddPermission
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAddPermissionRequest                       AddPermissionRequest                                       (Parm, NativeAccessSpecifierPublic)
	 * 		struct FAddPermissionResult                        AddPermissionResult                                        (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::AddPermission(class UObject* WorldContextObject, bool* Success, const struct FAddPermissionRequest& AddPermissionRequest, struct FAddPermissionResult* AddPermissionResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.AddPermission");
		
		ULambdaClientObject_AddPermission_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AddPermissionRequest = AddPermissionRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (AddPermissionResult != nullptr)
			*AddPermissionResult = params.AddPermissionResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lambda.LambdaClientObject.AddLayerVersionPermission
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAddLayerVersionPermissionRequest           AddLayerVersionPermissionRequest                           (Parm, NativeAccessSpecifierPublic)
	 * 		struct FAddLayerVersionPermissionResult            AddLayerVersionPermissionResult                            (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		ELambdaError                                       errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULambdaClientObject::AddLayerVersionPermission(class UObject* WorldContextObject, bool* Success, const struct FAddLayerVersionPermissionRequest& AddLayerVersionPermissionRequest, struct FAddLayerVersionPermissionResult* AddLayerVersionPermissionResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lambda.LambdaClientObject.AddLayerVersionPermission");
		
		ULambdaClientObject_AddLayerVersionPermission_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AddLayerVersionPermissionRequest = AddLayerVersionPermissionRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (AddLayerVersionPermissionResult != nullptr)
			*AddLayerVersionPermissionResult = params.AddLayerVersionPermissionResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULambdaClientObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULambdaClientObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Lambda.LambdaClientObject");
		return ptr;
	}

}


